#!/usr/bin/env bash
# Compare two measure.sh runs: compare.sh BASELINE CANDIDATE
set -euo pipefail
cd "$(dirname "$0")/.."
a=perf-research/results/${1:?}.tsv
b=perf-research/results/${2:?}.tsv
join -t $'\t' "$a" "$b" | awk -F'\t' '
{ d = $3 - $2; pct = $2 ? 100.0*d/$2 : 0;
  printf "%-24s %15d %15d %+12d %+7.2f%%\n", $1, $2, $3, d, pct }
' | sed "1i $(printf '%-24s %15s %15s %12s %8s' name "$1" "$2" delta pct)"
