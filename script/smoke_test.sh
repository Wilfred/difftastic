#!/bin/bash -e

# This is an integration test to generally check the quality of parsing.

SCALA_SCALA_LIBRARY_EXPECTED=100
SCALA_SCALA_COMPILER_EXPECTED=64
DOTTY_COMPILER_EXPECTED=72

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
  local name=$3
  cmd="npm exec -c 'tree-sitter parse $source_dir/**/*.scala --quiet --stat' | sort | sed 's%$source_dir%%g'"
  echo
  echo "Parse $source_dir: $cmd"
  out=$((eval $cmd) || true)

  if [ ! -e "$PRODUCE_REPORTS" ]; then
    local report_file="report-$name.txt"
    echo "$out" | sed G | sed -E 's/([0-9]+) ms//' | grep -v 'success percentage' > "report-$name.txt" 
    echo "Report written to $report_file"
  fi

  actual=$(echo "$out" | grep 'success percentage:' | rev | cut -d' ' -f1 | rev | sed 's/%//g' )
  echo $actual
  if (( $(echo "$actual >= $expected" |bc -l) )); then
    # See https://docs.github.com/en/actions/using-workflows/workflow-commands-for-github-actions#example-creating-an-annotation-for-an-error
    echo -e "::notice file=grammar.js,line=1::ok, ${source_dir}: ${actual}%"
  else
    echo -e "::error file=grammar.js,line=1::${source_dir}: expected ${expected}, but got ${actual} instead"
    failed=$((failed + 1))
  fi
}

run_tree_sitter $SCALA_SCALA_DIR/src/library/  $SCALA_SCALA_LIBRARY_EXPECTED   scala2-library
run_tree_sitter $SCALA_SCALA_DIR/src/compiler/ $SCALA_SCALA_COMPILER_EXPECTED  scala2-compiler
run_tree_sitter $DOTTY_DIR/compiler/           $DOTTY_COMPILER_EXPECTED        dotty-compiler

if (( $failed > 0 )); then
  exit 1
fi
