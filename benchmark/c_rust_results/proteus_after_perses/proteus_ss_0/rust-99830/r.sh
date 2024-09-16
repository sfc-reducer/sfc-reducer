#!/usr/bin/env bash

readonly REDUCTION_STAT_FILE=${REDUCTION_STAT_FILE:-""}
if [[ -n "${REDUCTION_STAT_FILE}" ]] ; then
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
#  echo "written reduction stat file '${REDUCTION_STAT_FILE}' " >> "/tmp/reductionstatfile.txt"
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
  date +%Y%m%d_%H%M%S_%Z >> "${REDUCTION_STAT_FILE}"
fi

readonly REDUCTION_STAT_FILE=${REDUCTION_STAT_FILE:-""}
if [[ -n "${REDUCTION_STAT_FILE}" ]] ; then
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
#  echo "written reduction stat file '${REDUCTION_STAT_FILE}' " >> "/tmp/reductionstatfile.txt"
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
  date +%Y%m%d_%H%M%S_%Z >> "${REDUCTION_STAT_FILE}"
fi
set -o nounset

readonly VERSION="nightly-2022-02-24"
readonly OUTPUT_BUGGY="output_buggy.txt"
readonly OUTPUT_CORRECT1="output_correct1.txt"

# echo "$CONFIG_BUGGY" > Cargo.toml
if ! timeout -s 9 30 rustup run "${VERSION}" rustc small.rs --extern primal_sieve=/tmp/benchmark/rust_benchmarks/rust-99830/primal-sieve-0.3.2/target/release/deps/libprimal_sieve-c55d051ccbe3f934.rlib -L dependency=/tmp/benchmark/rust_benchmarks/rust-99830/primal-sieve-0.3.2/target/release/deps/ -C opt-level=2; then
    if [ $? -eq 124 ]; then
        echo "Warning: Compilation timed out!"
        cat small.rs
    fi
    exit 1
fi

# Run small with timeout
if ! timeout -s 9 30 ./small > ${OUTPUT_BUGGY} 2>&1; then
    if [ $? -eq 124 ]; then
        echo "Warning: Program execution timed out!"
        cat small.rs
        exit 1
    fi
    # exit 1
fi

if ! grep "panicked" "${OUTPUT_BUGGY}" >& /dev/null; then
  exit 1
fi

# echo "$CONFIG_CORRECT1" > Cargo.toml
if ! timeout -s 9 30 rustup run "${VERSION}" rustc small.rs --extern primal_sieve=/tmp/benchmark/rust_benchmarks/rust-99830/primal-sieve-0.3.2/target/release/deps/libprimal_sieve-c55d051ccbe3f934.rlib -L dependency=/tmp/benchmark/rust_benchmarks/rust-99830/primal-sieve-0.3.2/target/release/deps/ -C opt-level=1; then
    if [ $? -eq 124 ]; then
        echo "Warning: Compilation timed out!"
        cat small.rs
    fi
    exit 1
fi

# Run small with timeout for correct configuration
if ! timeout -s 9 30 ./small > ${OUTPUT_CORRECT1} 2>&1; then
    if [ $? -eq 124 ]; then
        echo "Warning: Program execution timed out for correct configuration!"
        cat small.rs
        exit 1
    fi
    # exit 1
fi

if grep "panicked" "${OUTPUT_CORRECT1}" >& /dev/null; then
  exit 1
fi

exit 0
