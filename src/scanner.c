#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  RAW_STRING_LITERAL,
};

void *tree_sitter_rust_external_scanner_create() { return NULL; }
void tree_sitter_rust_external_scanner_destroy(void *p) {}
void tree_sitter_rust_external_scanner_reset(void *p) {}
unsigned tree_sitter_rust_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_rust_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_rust_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  while (iswspace(lexer->lookahead)) lexer->advance(lexer, true);

  if (valid_symbols[RAW_STRING_LITERAL] && lexer->lookahead == 'r') {
    lexer->result_symbol = RAW_STRING_LITERAL;
    lexer->advance(lexer, false);

    unsigned opening_hash_count = 0;
    while (lexer->lookahead == '#') {
      lexer->advance(lexer, false);
      opening_hash_count++;
    }

    if (opening_hash_count == 0) return false;

    unsigned hash_count = 0;
    for (;;) {
      if (lexer->lookahead == 0) {
        return false;
      } else if (lexer->lookahead == '#') {
        hash_count++;
      } else {
        hash_count = 0;
      }
      lexer->advance(lexer, false);
      if (hash_count == opening_hash_count) {
        return true;
      }
    }
  }

  return false;
}
