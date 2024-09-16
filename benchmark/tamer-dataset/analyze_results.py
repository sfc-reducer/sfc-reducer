#!/usr/bin/env python3

import os
import argparse
import glob
import json
import random
import pickle
import subprocess
import pprint
from typing import Dict, Tuple, List, Set, Union

def parse_arguments():
    parser = argparse.ArgumentParser(description="Analyze duplicate benchmark results.")
    parser.add_argument("-d", "--input-directory", default=None, type=str,
                        help="Input directory containing all the benchmark result folders.")
    parser.add_argument("-b", "--baseline-directory", default=None, type=str,
                        help="Baseline directory containing all the benchmark result folders. "+\
                        "if the result in the input directory is not found, the result in this directory will be used.")
    parser.add_argument("-f", "--formatter", default='clang-format @@', type=str,
                        help="The command to run formatter. Use @@ as a placeholder for the input file.")
    return parser.parse_args()

def levenshtein(a: str,b: str) -> int:
    # "Calculates the Levenshtein distance between a and b."
    # From https://folk.idi.ntnu.no/mlh/hetland_org/coding/python/levenshtein.py
    n, m = len(a), len(b)
    if n > m:
        # Make sure n <= m, to use O(min(n,m)) space
        a,b = b,a
        n,m = m,n

    current = range(n+1)
    for i in range(1,m+1):
        previous, current = current, [i]+[0]*n
        for j in range(1,n+1):
            add, delete = previous[j]+1, current[j-1]+1
            change = previous[j-1]
            if a[j-1] != b[i-1]:
                change = change + 1
            current[j] = min(add, delete, change)

    return current[n]

def get_bug_name_to_unique_id_map() -> Dict[str, str]:
    with open('bug_name_to_unique_id.pkl', 'rb') as f:
        bug_name_to_unique_id = pickle.load(f)
    return bug_name_to_unique_id

def get_formatted_result(formatter: str, program_path: str) -> str:
    with open(program_path, 'r') as f:
        result = f.read()
    return " ".join(result.split())

    completed_command = formatter.replace('@@', program_path)
    try:
        result = subprocess.run(completed_command, shell=True, check=True, capture_output=True, text=True).stdout
    except subprocess.CalledProcessError:
        with open(program_path, 'r') as f:
            result = f.read()
    return result.strip()

def get_unique_bug_to_test_cases_map(input_directory: str, baseline_directory: Union[str, None], formatter: str) -> Dict[str, List[Tuple[str, str]]]:
    bug_type = 'crash' if 'crash' in input_directory else 'wrongcode'
    bug_name_to_unique_id_map = get_bug_name_to_unique_id_map()
    if baseline_directory:
        results = os.listdir(baseline_directory)
    else:
        results = os.listdir(input_directory)
    unique_bug_to_test_cases = {}

    for benchmark_name in results:
        unique_bug = bug_name_to_unique_id_map.get(bug_type+benchmark_name)
        resulted_program_path = os.path.join(input_directory, benchmark_name, 'small.c')
        if not os.path.exists(resulted_program_path) and baseline_directory:
            resulted_program_path = os.path.join(baseline_directory, benchmark_name, 'small.c')
        if not os.path.exists(resulted_program_path):
            continue
        test_case = get_formatted_result(formatter, resulted_program_path)
        if unique_bug not in unique_bug_to_test_cases:
            unique_bug_to_test_cases[unique_bug] = [(benchmark_name, test_case)]
        else:
            unique_bug_to_test_cases[unique_bug].append((benchmark_name, test_case))
    return unique_bug_to_test_cases

def print_results(unique_bug_to_test_cases: Dict[str, List[Tuple[str,str]]]):
    eliminated = 0
    number_of_results = 0
    for unique_bug, test_cases in unique_bug_to_test_cases.items():
        test_cases_content = [content for _, content in test_cases]
        grouped_benchmark_names = {}
        for test_case in test_cases:
            benchmark_name, content = test_case
            if (content not in grouped_benchmark_names):
                grouped_benchmark_names[content] = [benchmark_name]
            else:
                grouped_benchmark_names[content].append(benchmark_name)
        print(f'Unique bug: {unique_bug}')
        print(f'Number of test cases: {len(test_cases)}')
        print(f'Number of unique test cases: {len(set(test_cases_content))}')
        print(f'Eliminated test cases: {len(test_cases) - len(set(test_cases_content))}')
        print(f'Example: {test_cases[0][0]}')
        name_groups = list(grouped_benchmark_names.values())
        name_groups = list(filter(lambda x: len(x) >= 2, name_groups))
        if name_groups:
            print("Grouped benchmark names:")
            pprint.pprint(name_groups)
        eliminated += len(test_cases) - len(set(test_cases_content))
        number_of_results += len(test_cases)
        print()
    print(f'Number of Unique Bugs: {len(unique_bug_to_test_cases)}')
    print(f'Eliminated test cases in total: {eliminated}')
    print(f'Number of Results: {number_of_results}')

def print_statistics(input_directory: str, baseline_directory: Union[str, None] = None):
    times = []
    baseline_times = []
    sizes = []
    byte_sizes = []
    baseline_sizes = []
    original_sizes = []
    query = []
    failure = 0
    failed_benchmarks = []
    named_sizes = {}
    for benchmark_name in os.listdir(input_directory):
        tmp_path = os.path.join(input_directory, benchmark_name, 'tmp*.json')
        program_path = os.path.join(input_directory, benchmark_name, 'small.c')
        json_files = glob.glob(tmp_path)
        if not json_files:
            failure += 1
            failed_benchmarks.append(benchmark_name)
            continue
        json_file = json_files[-1]
        byte_size = os.stat(program_path).st_size
        byte_sizes.append(byte_size)
        with open(json_file, 'r') as f:
            data = json.load(f)
            times.append(data['Time'])
            sizes.append(data['Token_remaining'])
            named_sizes[benchmark_name] = data['Token_remaining']
            original_sizes.append(data['Origin token count'])
            query.append(data['Query'])
        if baseline_directory:
            baseline_path = os.path.join(baseline_directory, benchmark_name, 'tmp*.json')
            baseline_json_files = glob.glob(baseline_path)
            with open(baseline_json_files[-1], 'r') as f:
                data = json.load(f)
                baseline_times.append(data['Time'])
                baseline_sizes.append(data['Token_remaining'])
    if baseline_directory:
        time_diff = [a/b for a,b in zip(times, baseline_times)]
        size_diff = [(a-b)/b for a,b in zip(sizes, baseline_sizes)]
        print(f'Average time difference: {sum(time_diff)/len(time_diff)}')
        print(f'Average size difference: {sum(size_diff)/len(size_diff)}')

    print(f'Average time: {sum(times)/len(times)}')
    print(f'Average size: {sum(sizes)/len(sizes)}')
    print(f'Average byte size: {sum(byte_sizes)/len(byte_sizes)}')
    print(f'Max byte size: {max(byte_sizes)}')
    print(f'Average original size: {sum(original_sizes)/len(original_sizes)}')
    print(f'Average query: {sum(query)/len(query)}')
    sorted_named_sizes_items = list(sorted(named_sizes.items(), key=lambda item: item[1]))

# tmp method
def get_largest_set_of_common_duplicates(input_folder: str, baseline_folder: str, formatter_command) -> Set[str]:
    result = set()
    input_unique_bug_to_test_cases_map = get_unique_bug_to_test_cases_map(input_folder, None, formatter_command)
    baseline_unique_bug_to_test_cases_map = get_unique_bug_to_test_cases_map(baseline_folder, None, formatter_command)
    for unique_id, input_test_cases in input_unique_bug_to_test_cases_map.items():
        input_grouped_benchmark_names = {}
        for input_test_case in input_test_cases:
            benchmark_name, content = input_test_case
            if (content not in input_grouped_benchmark_names):
                input_grouped_benchmark_names[content] = [benchmark_name]
            else:
                input_grouped_benchmark_names[content].append(benchmark_name)
        input_name_groups = list(input_grouped_benchmark_names.values())
        input_name_groups = list(filter(lambda x: len(x) >= 2, input_name_groups))

        baseline_grouped_benchmark_names = {}
        for baseline_test_case in baseline_unique_bug_to_test_cases_map[unique_id]:
            benchmark_name, content = baseline_test_case
            if (content not in baseline_grouped_benchmark_names):
                baseline_grouped_benchmark_names[content] = [benchmark_name]
            else:
                baseline_grouped_benchmark_names[content].append(benchmark_name)
        baseline_name_groups = list(baseline_grouped_benchmark_names.values())
        baseline_name_groups = list(filter(lambda x: len(x) >= 2, baseline_name_groups))

        for input_group in input_name_groups:
            for baseline_group in baseline_name_groups:
                intersection = set(input_group).intersection(set(baseline_group))
                if len(intersection) > len(result):
                    result = intersection
    return result

def main():
    arguments = parse_arguments()
    folder = arguments.input_directory
    baseline_folder = arguments.baseline_directory
    formatter_command = arguments.formatter
    unique_bug_to_test_cases = get_unique_bug_to_test_cases_map(folder, baseline_folder, formatter_command)
    print_results(unique_bug_to_test_cases)
    print_statistics(folder, baseline_folder)

if __name__ == '__main__':
    main()
