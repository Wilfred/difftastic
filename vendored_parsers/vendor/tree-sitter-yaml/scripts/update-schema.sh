cd $(dirname "$0")/..

ROOT_DIR=$PWD
TREE_SITTER_CLI="$ROOT_DIR/tree-sitter/target/release/tree-sitter"
SCHEMA_GRAMMAR="$ROOT_DIR/grammar-schema.js"
TEMP_DIR=$(mktemp -d)

cd $TEMP_DIR
cp $SCHEMA_GRAMMAR grammar.js
$TREE_SITTER_CLI generate
cat $TEMP_DIR/src/parser.c | node $ROOT_DIR/scripts/update-schema.js
