#!/usr/bin/env python3

import os
import tempfile
from typing import Dict, Any
import json
import shutil
import subprocess
import time

def get_binary(input: str, opts: Dict[str, Any]) -> str:
    if 'binary' in opts:
        return f"bin/{opts['binary']}"
    elif 'cvc4-commit' in opts:
        curargs = opts.get('args', [])
        if not '--lang' in curargs:
            if input.endswith('.smt2'):
                curargs = curargs + ['--lang', 'smt2']
            elif input.endswith('.sy'):
                curargs = curargs + ['--lang', 'sygus']
        opts['args'] = curargs
        commit = opts['cvc4-commit']
        return f"bin/cvc4-{commit}"
    elif 'yices-commit' in opts:
        commit = opts['yices-commit']
        return f"bin/yices-{commit}"
    elif 'z3-commit' in opts:
        commit = opts['z3-commit']
        return f"bin/z3-{commit}"
    else:
        raise KeyError(opts)


def get_timeout(cmd, input):
    """Obtain an appropriate timeout for the given command"""
    start = time.time()
    try:
        subprocess.run(cmd + [input], stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout = 20)
    except subprocess.TimeoutExpired:
        return 25
    return min((int(time.time() - start) + 1) * 2, 25)

def create_script(input: str, binary: str, opts: Dict[str, Any]) -> str:
    solver = [os.path.abspath(binary)]
    if 'args' in opts:
        solver = solver + opts['args']
    if opts['match'] == 'incorrect':
        solver = [os.path.abspath('stuff/result_differs.py'), *solver]
    elif opts['match'] == 'incorrect-unknown':
        solver = [os.path.abspath('stuff/result_differs_unknown.py'), *solver]
    elif opts['match'] == 'stderr':
        timeout = get_timeout(solver, input)
        opts['stderr'] = opts['stderr'].replace('`', '\\`')
        solver = [os.path.abspath('stuff/match_err.py'), str(timeout), f'"{opts["stderr"]}"', *solver]
    elif opts['match'] == 'stdout':
        timeout = get_timeout(solver, input)
        opts['stdout'] = opts['stdout'].replace('`', '\\`')
        solver = [os.path.abspath('stuff/match_out.py'), str(timeout), f'"{opts["stdout"]}"', *solver]
    script = f'''#!/bin/bash
{' '.join(solver)} $* < {input}
RET=$?
if [ $RET -eq 0 ]; then
    exit 1
elif [ $RET -eq 1 ]; then
    exit 0
else
    exit 2
fi
'''
    return script

def process_input(input: str, binary: str, opts: Dict[str, Any]) -> bool:
    input_prefix = os.path.join('benchmarks', input.split('.')[0])
    os.makedirs(input_prefix)
    original_path = os.path.join('inputs', input)
    source_path = os.path.join(input_prefix, input)
    script_path = os.path.join(input_prefix, 'r.sh')
    config_path = os.path.join(input_prefix, 'info.properties')
    shutil.copy(original_path, source_path)
    script = create_script(input, binary, opts)
    with open(script_path, 'w') as f:
        f.write(script)
    with open(config_path, 'w') as f:
        f.write(f'''source_file={input}
script_file=r.sh
''')
    validity = check_validity(input)
    if not validity:
        shutil.rmtree(input_prefix)
    return validity

def check_validity(input: str) -> bool:
    input_prefix = os.path.join('benchmarks', input.split('.')[0])
    tmp_working_dir = tempfile.mkdtemp()
    try:
        tmp_script_path = os.path.join(tmp_working_dir, 'r.sh')
        tmp_source_path = os.path.join(tmp_working_dir, input)
        script_path = os.path.join(input_prefix, 'r.sh')
        source_path = os.path.join(input_prefix, input)
        shutil.copy(script_path, tmp_script_path)
        shutil.copy(source_path, tmp_source_path)
        subprocess.run(['sh', 'r.sh'], \
            cwd=tmp_working_dir, timeout=60, check=True,\
            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    except subprocess.CalledProcessError as _:
        print(f'Property test failed for {input}')
        return False
    finally:
        shutil.rmtree(tmp_working_dir)
    return True

def main():
    input_files = [f for f in os.listdir('inputs') if os.path.isfile(os.path.join('inputs', f))]
    with open('database.json', 'r') as f:
        database_info = json.load(f)
    valid_benchmark = 0
    for input in input_files:
        opts = database_info[input]
        binary = get_binary(input, opts)
        if process_input(input, binary, opts):
            valid_benchmark += 1
    print(f'number of valid benchmarks: {valid_benchmark}')



if __name__ == '__main__':
    main()
