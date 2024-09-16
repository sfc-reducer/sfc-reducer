#!/usr/bin/env bash
set -ex

cargo=cargo
target_param=""
features=" "
if rustc -V | grep -qF 'nightly' ; then
    features+=" unstable"
fi
if rustc -V | grep -qF 'rustc 1.36' ; then
    cp ./ci/compat-Cargo.lock ./Cargo.lock
fi
if [ ! -z "$TARGET" ]; then
    rustup target add "$TARGET"
    cargo install -v cross --force
    cargo="cross"
    target_param="--target $TARGET"
fi

$cargo build -v --all $target_param --features "$features"
$cargo test -v --all $target_param --features "$features"
# Temporarily ignoring bench on other targets due to an i686 regression in rustc
# https://github.com/rust-lang/rust/issues/94032
if [ -z "$TARGET" ]; then
    $cargo bench -v --all $target_param --features "$features" -- --test # don't actually record numbers
fi
$cargo doc -v --all $target_param --features "$features"

$cargo test -v -p primal-sieve --features "$features primal-sieve/safe"

$cargo test -v --all --release --features "$features primal-sieve/slow_tests primal-slowsieve/slow_tests"

if [ ! -z "$COVERAGE" ]; then
    if [ ! -z "$TARGET" ]; then
        echo "cannot record coverage while cross compiling"
        exit 1
    fi

    # Rust 1.41 changed the default lock format, which cargo-travis doesn't understand.
    # https://github.com/roblabla/cargo-travis/issues/66
    rustup install --profile minimal 1.40.0
    cargo +1.40.0 generate-lockfile

    cargo install -v cargo-travis || echo "cargo-travis already installed"
    cargo coverage -v --all -m coverage-reports --kcov-build-location "$PWD/target" --features "$features"
    bash <(curl -s https://codecov.io/bash) -c -X gcov -X coveragepy -s coverage-reports
fi
