#! /usr/bin/env sh

# Remove the line and column ranges from `tree-sitter parse` output
# Dependencies: sd

cat | sd ' \[\d+, \d+\] - \[\d+, \d+\]' ''
