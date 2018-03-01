#!/bin/bash

known_failures=$(cat script/known-failures.txt)

example_files=$(find examples -name '*.sh' -or -name '*.bash')

examples_to_parse=$(
  for example in $example_files; do
    if [[ ! $known_failures == *$example* ]]; then
      echo $example
    fi
  done
)

tree-sitter parse $examples_to_parse -q -t
