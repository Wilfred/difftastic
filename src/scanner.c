#include <tree_sitter/parser.h>

enum TokenType {
  LINE_ENDING_OR_EOF
};

void *tree_sitter_toml_external_scanner_create() { return NULL; }
void tree_sitter_toml_external_scanner_destroy(void *p) {}
void tree_sitter_toml_external_scanner_reset(void *p) {}
unsigned tree_sitter_toml_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_toml_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_toml_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (lexer->lookahead == 0 || lexer->lookahead == '\n') {
    lexer->result_symbol = LINE_ENDING_OR_EOF;
    lexer->mark_end(lexer);
    return true;
  }

  if (lexer->lookahead == '\r') {
    lexer->mark_end(lexer);
    lexer->advance(lexer, false);
    if (lexer->lookahead == '\n') {
      lexer->result_symbol = LINE_ENDING_OR_EOF;
      return true;
    }
  }

  return false;
}
