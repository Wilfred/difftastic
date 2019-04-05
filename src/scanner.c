#include <tree_sitter/parser.h>

enum TokenType {
  TRIPLE_STRING,
};

bool tree_sitter_julia_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (!valid_symbols[TRIPLE_STRING]) return false;

  uint32_t quote_count = 0;
  while (quote_count < 3) {
    if (lexer->lookahead == '"') {
      quote_count++;
      lexer->advance(lexer, false);
    } else {
      return false;
    }
  }

  quote_count = 0;
  while (quote_count < 3) {
    if (lexer->lookahead == '"') {
      quote_count++;
      lexer->advance(lexer, false);
    } else {
      quote_count = 0;
      if (lexer->lookahead == 0) return false;
      lexer->advance(lexer, false);
    }
  }

  lexer->result_symbol = TRIPLE_STRING;
  return true;
}

void *tree_sitter_julia_external_scanner_create() {
  return NULL;
}

void tree_sitter_julia_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_julia_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  return 0;
}

void tree_sitter_julia_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {}
