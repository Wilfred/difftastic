#!/usr/bin/env bash
shopt -s globstar

tree-sitter parse -q -t   \
  examples/bash-it/**/*.bash \
  examples/bash-it/**/*.sh \
  examples/bash/tests/*.tests \
  examples/*.sh   \
  | egrep 'ERROR|MISSING' \
  | tee >(cut -d' ' -f1 | sort > script/known-failures.txt)
