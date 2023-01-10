#!/bin/bash

set -e

if [[ "$1" == "--install-valgrind" ]]; then
    sudo apt-get update # See https://github.com/facebook/zstd/pull/3082
    sudo apt install -y valgrind
    shift
fi

valgrind tree-sitter test
