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
set -o pipefail

readonly FILE=small.rs

readonly RUSTC_VERSION="nightly-2020-09-22"

readonly EXE_WRONG="./wrong.out"
if ! timeout -s 9 60 rustup run "${RUSTC_VERSION}" rustc -Z mir-opt-level=2 -o "${EXE_WRONG}" "${FILE}"; then
  exit 1
fi

readonly EXE_CORRECT="./correct.out"
if ! timeout -s 9 60 rustup run "${RUSTC_VERSION}" rustc -Z mir-opt-level=1 -o "${EXE_CORRECT}" "${FILE}" ; then
  exit 1
fi

readonly EXE_CORRECT_2="./correct_2.out"
if ! timeout -s 9 60 rustup run "${RUSTC_VERSION}" rustc -Z mir-opt-level=0 -o "${EXE_CORRECT_2}" "${FILE}" ; then
  exit 1
fi

readonly OUTPUT_WRONG="wrong_output.txt"
readonly OUTPUT_CORRECT_1="correct_output.txt"
readonly OUTPUT_CORRECT_2="correct_output_2.txt"

if ! timeout -s 9 30 "${EXE_WRONG}" &> "${OUTPUT_WRONG}" ; then
  exit 1
fi

if ! timeout -s 9 30 "${EXE_CORRECT}" &> "${OUTPUT_CORRECT_1}" ; then
  exit 1
fi

if ! timeout -s 9 30 "${EXE_CORRECT_2}" &> "${OUTPUT_CORRECT_2}" ; then
  exit 1
fi

if [[ ! -s "${OUTPUT_WRONG}" ]] ; then
  # empty file, return 1.
  exit 1
fi
if ! diff -q "${OUTPUT_CORRECT_1}" "${OUTPUT_CORRECT_2}" ; then 
  exit 1
fi

if diff -q "${OUTPUT_WRONG}" "${OUTPUT_CORRECT_1}" ; then
  exit 1
fi

exit 0

