#!/usr/bin/env bash

set -o pipefail
set -o nounset
set -o errexit
#set -o xtrace

#expect
# UNPATCHED r
# code to be reduced
# STAT FILE

#do
# run perses on file to be reduced with r, collect stats

readonly CREDUCE_TMP_WORK=$(mktemp -d)
TMPDIR="${CREDUCE_TMP_WORK}"
export TMPDIR

readonly BINARY_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "${BINARY_DIR}/run_common.sh"
readonly REDUCED_TOKEN_FILE="${TMP_SOURCE_FILE}"


pushd "${TMP}"
readonly START_TIME=$(date +%s)
/tmp/benchmark/ddSMT/bin/ddsmt --ignore-output -j "${THREADS}" "${TMP_SOURCE_FILE}" "${TMP_SOURCE_FILE}" "${TMP_TEST_SCRIPT}"
readonly RET_CODE="$?"
readonly END_TIME=$(date +%s)

summarize_results "${TMP_SOURCE_FILE}"
popd

rm -rf "${CREDUCE_TMP_WORK}"

exit "${RET_CODE}"
