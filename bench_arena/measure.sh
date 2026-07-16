#!/bin/bash
# Measure difftastic instruction counts with callgrind across sample inputs.
#
# Usage: bench_arena/measure.sh <variant-name> [path-to-difft]
#
# Writes results to bench_arena/results/<variant-name>.txt and keeps the
# callgrind output files for per-function annotation.
set -eu

VARIANT="${1:?usage: measure.sh <variant-name> [path-to-difft]}"
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BIN="${2:-$ROOT/target/release/difft}"
OUT_DIR="$ROOT/bench_arena/results"
mkdir -p "$OUT_DIR"

# huge_cpp is excluded: wu_diff makes an allocation there that fails
# under valgrind's brk limits when jemalloc is the global allocator.
PAIRS="
slow:rs
typing:ml
nest:rs
modules:ml
"

RESULT_FILE="$OUT_DIR/$VARIANT.txt"
: > "$RESULT_FILE"

for pair in $PAIRS; do
    name="${pair%%:*}"
    ext="${pair##*:}"
    lhs="$ROOT/sample_files/${name}_1.$ext"
    rhs="$ROOT/sample_files/${name}_2.$ext"
    cg_out="$OUT_DIR/callgrind.$VARIANT.$name.out"

    # RAYON_NUM_THREADS=1 keeps the run single-threaded and
    # deterministic (no rayon worker spin loops in the count).
    RAYON_NUM_THREADS=1 valgrind --tool=callgrind \
        --callgrind-out-file="$cg_out" \
        --collect-systime=no \
        "$BIN" --color never "$lhs" "$rhs" > /dev/null 2> "$OUT_DIR/valgrind.$VARIANT.$name.log"

    total=$(grep -oP 'summary: \K[0-9]+' "$cg_out")
    echo "$name $total" | tee -a "$RESULT_FILE"
done
