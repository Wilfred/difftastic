#!/bin/bash

set -e

if [[ "$1" == "--install-valgrind" ]]; then
    sudo apt-get update # See https://github.com/facebook/zstd/pull/3082
    sudo apt install -y valgrind
    shift
fi

# Query tests hang forever when run with valgrind, so move them out of
# the way.
mv ./queries ./queries.bak
trap "mv ./queries.bak ./queries || true" EXIT

valgrind tree-sitter test

# Now move the query tests back, and move the corpus tests out of the
# way.
mv ./queries.bak ./queries
mv ./corpus ./corpus.bak
trap "mv ./corpus.bak ./corpus || true" EXIT

tree-sitter test
