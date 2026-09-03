#!/usr/bin/env bash
#
# Verify difftastic's output is byte-identical to the recorded baseline over
# every sample pair. `sample_files/compare.expected` is stale on master (the
# recent .cls language-detection change), so we record our own baseline from
# master HEAD instead.
#
#   ./perf-research/check_output.sh --record   # write the baseline
#   ./perf-research/check_output.sh            # check against it
set -euo pipefail
cd "$(dirname "$0")/.."
baseline=perf-research/results/output-baseline.txt
mkdir -p perf-research/results
LANG=en_US.UTF-8 LC_ALL=C LC_COLLATE=C

run() {
    for before_f in sample_files/*_1.*; do
        after_f=${before_f/_1/_2}
        [ -f "$after_f" ] || continue
        printf '%s %s\n' "$before_f" "$after_f"
        DFT_WIDTH=180 target/release/difft --color=always "$before_f" "$after_f" | md5sum
        # Also pin the non-colour and JSON renderings, which exercise
        # different display code paths from the same diff.
        DFT_WIDTH=80 target/release/difft --color=never --display inline "$before_f" "$after_f" | md5sum
        DFT_UNSTABLE=yes target/release/difft --color=never --display json "$before_f" "$after_f" | md5sum
    done
}

if [ "${1:-}" = "--record" ]; then
    run > "$baseline"
    echo "recorded $(wc -l < "$baseline") lines to $baseline"
    exit 0
fi

run > /tmp/compare.result
if cmp -s /tmp/compare.result "$baseline"; then
    echo "OUTPUT UNCHANGED"
else
    echo "OUTPUT CHANGED:"
    diff "$baseline" /tmp/compare.result | head -40
    exit 1
fi
