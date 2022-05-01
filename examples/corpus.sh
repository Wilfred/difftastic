#/bin/bash

BASE_DIR=$(git rev-parse --show-toplevel)

rm "${BASE_DIR}/examples/corpus.m" 2>/dev/null

cat "${BASE_DIR}/test/corpus/"* | sed -n '/===/,/---/p' | rg -vU '((=)+\n.*\n(=)+)|((-)+\n)' > "${BASE_DIR}/examples/corpus.m"