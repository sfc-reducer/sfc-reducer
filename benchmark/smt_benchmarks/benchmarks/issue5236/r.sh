#!/bin/bash
/tmp/benchmark/smt_benchmarks/stuff/match_err.py 2 "CVC4 suffered a segfault" /tmp/benchmark/smt_benchmarks/bin/cvc4-e6c9674 --lang smt2 $* < issue5236.smt2
RET=$?
if [ $RET -eq 0 ]; then
    exit 1
elif [ $RET -eq 1 ]; then
    exit 0
else
    exit 2
fi
