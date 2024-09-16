#!/bin/bash
/tmp/benchmark/smt_benchmarks/stuff/match_err.py 2 "d_state.isInConflict" /tmp/benchmark/smt_benchmarks/bin/cvc4-116114d -i --strings-exp --check-models --lang smt2 $* < issue5384.smt2
RET=$?
if [ $RET -eq 0 ]; then
    exit 1
elif [ $RET -eq 1 ]; then
    exit 0
else
    exit 2
fi
