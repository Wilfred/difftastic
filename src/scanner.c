#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

enum TokenType {
  LINE_ENDING_OR_EOF
};

void *tree_sitter_toml_external_scanner_create() { return NULL; }
void tree_sitter_toml_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_toml_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_toml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_toml_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  lexer->result_symbol = LINE_ENDING_OR_EOF;

  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead == 0 || lexer->lookahead == '\n') {
    return true;
  }

  if (lexer->lookahead == '\r') {
    lexer->advance(lexer, true);
    if (lexer->lookahead == '\n') {
      return true;
    }
  }

  return false;
}

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
