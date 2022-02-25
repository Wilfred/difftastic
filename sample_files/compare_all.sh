#!/bin/bash

# Run difftastic on all the sample files, so we can see if any output
# has been changed.
#
# # Generate a new compare.result.
# $ sample_files/compare_all.sh
#
# # Compare it with the previous one.
# $ difft sample_files/compare.expected sample_files/compare.result
#
# # If changes were expected, update the .expected file.
# $ cp sample_files/compare.result sample_files/compare.expected

set -e

echo "==> Building difftastic"
cargo build --release

# Set language so we expand globs in a consistent order regardless of
# locale (e.g. on GitHub actions).
LANG=en_US.UTF-8

echo "==> Check outputs"
for before_f in sample_files/*before.*; do
    after_f=${before_f/before/after}
    echo "$before_f $after_f"

    difft_out=$(DFT_WIDTH=180 ./target/release/difft --color=always "$before_f" "$after_f" | md5sum)
    echo "$difft_out"
    echo
done | tee sample_files/compare.result
