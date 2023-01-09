#!/bin/bash -e

# This is an integration test to generally check the quality of parsing.

SCALA_SCALA_LIBRARY_EXPECTED=95
SCALA_SCALA_COMPILER_EXPECTED=66
DOTTY_COMPILER_EXPECTED=56

if [ ! -d "$SCALA_SCALA_DIR" ]; then
  echo "\$SCALA_SCALA_DIR must be set"
  exit 1
fi

if [ ! -d "$DOTTY_DIR" ]; then
  echo "\$DOTTY_DIR must be set"
  exit 1
fi

failed=0

run_tree_sitter () {
  local source_dir=$1
  local expected=$2
  echo "Parse $source_dir:"
  out=$(npm exec -c "tree-sitter parse $source_dir/**/*.scala --quiet --stat" || true)
  actual=$(echo $out | rev | cut -d' ' -f1 | rev | sed 's/.$//')
  echo "$out"
  if (( $(echo "$actual > $expected" |bc -l) )); then
    # See https://docs.github.com/en/actions/using-workflows/workflow-commands-for-github-actions#example-creating-an-annotation-for-an-error
    echo -e "::notice file=grammar.js,line=1::ok, ${source_dir}: ${actual}%"
  else
    echo -e "::error file=grammar.js,line=1::${source_dir}: expected ${expected}, but got ${actual} instead"
    failed=$((failed + 1))
  fi
}

run_tree_sitter $SCALA_SCALA_DIR/src/library/  $SCALA_SCALA_LIBRARY_EXPECTED
run_tree_sitter $SCALA_SCALA_DIR/src/compiler/ $SCALA_SCALA_COMPILER_EXPECTED
run_tree_sitter $DOTTY_DIR/compiler/           $DOTTY_COMPILER_EXPECTED

if (( $failed > 0 )); then
  exit 1
fi
