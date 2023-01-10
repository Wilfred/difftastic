#!/bin/bash

known_failures="$(cat script/known-failures.txt)"

tree-sitter parse -q -t \
  examples/**/*.bash \
  examples/**/*.sh   \
  $(for failure in $known_failures; do echo "!${failure}"; done)
