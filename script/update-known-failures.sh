#!/bin/bash

tree-sitter parse $(find examples/bash-it -name '*.bash' -or -name '*.sh') -q -t \
  | egrep 'ERROR|undefined' \
  | cut -d' ' -f1 \
  > script/known-failures.txt
