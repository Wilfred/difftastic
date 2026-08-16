#!/usr/bin/env bash
# Reproduce each distinct crash found during crash testing.
# Usage: DIFFT=path/to/difft ./reproduce.sh   (defaults to ../target/release/difft)
set -u
DIFFT="${DIFFT:-$(dirname "$0")/../target/release/difft}"
DIR="$(dirname "$0")/reproducers"

run() {
  local name="$1"; shift
  local a="$1"; local b="$2"; shift 2
  "$DIFFT" --color never "$@" "$DIR/$a" "$DIR/$b" >/dev/null 2>/tmp/_crash_err
  local code=$?
  local msg
  msg=$(grep -oE 'panicked at [^ ]+|has overflowed its stack' /tmp/_crash_err | head -1)
  if [ "$code" -ge 101 ] || [ "$code" -lt 0 ]; then
    echo "CRASH (exit $code) — $name: $msg"
  else
    echo "no crash (exit $code) — $name  [not reproduced on this build]"
  fi
}

echo "Using difft: $DIFFT"
"$DIFFT" --version | head -1
echo

echo "1. Stack overflow — deeply nested AST (minified/chained code), default settings"
run "deep method chain (.js)" deepchain_a.js deepchain_b.js

echo
echo "2. Index out of bounds in side_by_side::print, default settings"
run "Ruby well-formed heredoc, trailing-newline diff (side_by_side.rs:700)" heredoc_wellformed_a.rb heredoc_wellformed_b.rb
run "Ruby heredoc, rhs (side_by_side.rs:710)" heredoc_rhs_a.rb heredoc_rhs_b.rb
run "Ruby heredoc, lhs (side_by_side.rs:700)" heredoc_lhs_a.rb heredoc_lhs_b.rb

echo
echo "3. unreachable! matched-position invariant (hunks.rs:518), default settings"
run "JSX/TSX fragments" jsx_a.tsx jsx_b.tsx

echo
echo "4. expect() in hunk line lookup (hunks.rs:667), requires --context 0"
run "Python with --context 0" context0_hunk_a.py context0_hunk_b.py --context 0
