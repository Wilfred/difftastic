#!/usr/bin/env bash
# Instructions executed for one difftastic run: ir.sh LHS RHS [args...]
set -euo pipefail
cd "$(dirname "$0")/.."
lhs=${1:?}; rhs=${2:?}; shift 2
DFT_WIDTH=180 valgrind --tool=callgrind --callgrind-out-file=/dev/null \
    target/release/difft --color=always "$@" "$lhs" "$rhs" 2>&1 >/dev/null \
  | sed -n 's/.*I *refs: *\([0-9,]*\).*/\1/p' | tr -d ,
