#!/bin/bash

tree-sitter parse -q -t   \
  examples/**/*.sh        \
  examples/**/*.bash      \
  | egrep 'ERROR|MISSING' \
  | tee >(cut -d' ' -f1 | sort > script/known-failures.txt)
