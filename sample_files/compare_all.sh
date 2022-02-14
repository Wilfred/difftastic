#!/bin/bash

set -e

echo "==> Building difftastic"
cargo build --release -q

echo "==> Check outputs"
for before_f in sample_files/*before.*; do
    after_f=${before_f/before/after}
    echo "$before_f $after_f"

    difft_out=$(./target/release/difft --color=always "$before_f" "$after_f" | md5sum)
    echo "$difft_out"
    echo
done
