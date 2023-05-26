#!/bin/bash -e

# This is an integration test to generally check the quality of parsing.

SCALA_SCALA_LIBRARY_EXPECTED=93
SCALA_SCALA_COMPILER_EXPECTED=84
DOTTY_COMPILER_EXPECTED=78
SYNTAX_COMPLEXITY_CEILING=2300

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
  local files=$(find "$source_dir" -name '*.scala' -type f | tr '\n' ' ')
  cmd="npm exec -c 'tree-sitter parse $files --quiet --stat' | sort | sed 's%$source_dir%%g'"
  echo
  echo "Parse $source_dir: $cmd"
  out=$( (eval "$cmd") || true)

  if [ ! -e "$PRODUCE_REPORTS" ]; then
    local report_file="report-$name.txt"
    echo "$out" | sed G | sed -E 's/([0-9]+) ms//' | grep -v 'success percentage' > "report-$name.txt" 
    echo "Report written to $report_file"
  fi

  actual=$(echo "$out" | grep 'success percentage:' | rev | cut -d' ' -f1 | rev | sed 's/%//g' )
  echo "$actual"
  if (( $(echo "$actual >= $expected" |bc -l) )); then
    # See https://docs.github.com/en/actions/using-workflows/workflow-commands-for-github-actions#example-creating-an-annotation-for-an-error
    echo -e "::notice file=grammar.js,line=1::ok, ${source_dir}: ${actual}%, expected at least $expected%"
  else
    echo -e "::error file=grammar.js,line=1::${source_dir}: expected ${expected}, but got ${actual} instead"
    failed=$((failed + 1))
  fi
}

check_complexity () {
  local expected=$1
  name="complexity"
  cmd="npm exec -c 'tree-sitter generate --report-states-for-rule compilation_unit' 2>&1"
  echo
  echo "Checking syntax complexity: $cmd"
  out=$( (eval "$cmd") || true)

  if [ ! -e "$PRODUCE_REPORTS" ]; then
    local report_file="report-$name.txt"
    echo "$out" > "report-$name.txt"
    echo "Report written to $report_file"
  fi

  top=$(echo "$out" | head -n 1 | sed 's/ \+/ /g')
  top_definition=$(echo "$top" | cut -d' ' -f1)
  top_definition_line=$(grep -n "$top_definition:" grammar.js | head -n 1 | cut -d : -f 1)
  actual=$(echo "$top" | cut -d' ' -f2)
  echo "$top_definition $actual"
  if (( $(echo "$actual < $expected" |bc -l) )); then
    # See https://docs.github.com/en/actions/using-workflows/workflow-commands-for-github-actions#example-creating-an-annotation-for-an-error
    echo -e "::notice file=grammar.js,line=$top_definition_line::ok, complexity of the most complex definition ${top_definition}: ${actual}, lower than the allowed ceiling $expected"
  else
    echo -e "::error file=grammar.js,line=$top_definition_line::complexity of the most complex definition ${top_definition}: ${actual}, higher than the allowed ceiling $expected"
    failed=$((failed + 1))
  fi
}

run_tree_sitter "$SCALA_SCALA_DIR/src/library/"  $SCALA_SCALA_LIBRARY_EXPECTED   scala2-library
run_tree_sitter "$SCALA_SCALA_DIR/src/compiler/" $SCALA_SCALA_COMPILER_EXPECTED  scala2-compiler
run_tree_sitter "$DOTTY_DIR/compiler/"           $DOTTY_COMPILER_EXPECTED        dotty-compiler

check_complexity $SYNTAX_COMPLEXITY_CEILING

if (( failed > 0 )); then
  exit 1
fi
