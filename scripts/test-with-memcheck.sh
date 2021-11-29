#!/bin/bash

set -e

if [[ "$1" == "--install-valgrind" ]]; then
    sudo apt install -y valgrind
    shift
fi

valgrind tree-sitter test
