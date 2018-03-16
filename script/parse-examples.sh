#!/bin/bash

known_failures=$(cat script/known-errors.txt)

example_files=$(find examples -name '*.java')

examples_to_parse=$(
  for example in $example_files; do
    if [[ ! $known_errors == *$example* ]]; then
      echo $example
    fi
  done
)

tree-sitter parse $examples_to_parse -q -t
