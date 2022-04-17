#!/usr/bin/env bash

base=$(dirname $0)

diff <(tree-sitter parse $base/Test.hs) $base/Test.target
diff <(tree-sitter parse $base/LambdaCaseEnd.hs) $base/LambdaCaseEnd.target
