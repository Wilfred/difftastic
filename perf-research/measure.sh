#!/usr/bin/env bash
#
# Deterministic instruction counts for difftastic.
#
# perf(1) is unavailable in many sandboxes and its counts are noisy, so we
# use callgrind's Ir (instructions read) instead. Ir is exactly the quantity
# perf reports as `instructions:u`, but counted by emulation, so repeated
# runs of the same binary on the same input agree to the instruction.
#
#   ./perf-research/measure.sh <label>
#
# Writes perf-research/results/<label>.tsv and prints a per-pair table.

set -euo pipefail
cd "$(dirname "$0")/.."

label=${1:?usage: measure.sh LABEL}
bin=target/release/difft
pairs_file=perf-research/pairs.txt
outdir=perf-research/results
mkdir -p "$outdir"

[ -x "$bin" ] || { echo "no $bin, run cargo build --release" >&2; exit 1; }

total=0
: > "$outdir/$label.tsv"
while read -r lhs rhs; do
    [ -z "$lhs" ] && continue
    case "$lhs" in \#*) continue ;; esac
    ir=$(DFT_WIDTH=180 valgrind --tool=callgrind --callgrind-out-file=/dev/null \
             "$bin" --color=always "$lhs" "$rhs" 2>&1 >/dev/null \
         | sed -n 's/.*I *refs: *\([0-9,]*\).*/\1/p' | tr -d ,)
    printf '%s\t%s\n' "$(basename "$lhs" | sed 's/_1\..*//')" "$ir" >> "$outdir/$label.tsv"
    total=$((total + ir))
done < "$pairs_file"

printf 'total\t%s\n' "$total" >> "$outdir/$label.tsv"
column -t "$outdir/$label.tsv"
