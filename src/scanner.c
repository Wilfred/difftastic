#include <tree_sitter/parser.h>

enum TokenType {
  QUOTED_CONTENT
};

void * tree_sitter_gleam_external_scanner_create() {return NULL;}
void tree_sitter_gleam_external_scanner_destroy(void * payload) {}
unsigned tree_sitter_gleam_external_scanner_serialize(void * payload, char * buffer) {return 0;}
void tree_sitter_gleam_external_scanner_deserialize(void * payload, const char * buffer, unsigned length) {}

bool tree_sitter_gleam_external_scanner_scan(void * payload, TSLexer *lexer, const bool * valid_symbols) {
  if (valid_symbols[QUOTED_CONTENT]) {
    bool has_content = false;

    while (true) {
      if (lexer->lookahead == '\"' || lexer->lookahead == '\\') {
        break;
      } else if (lexer->lookahead == 0) {
        return false;
      }
      has_content = true;
      lexer->advance(lexer, false);
    }
    lexer->result_symbol = QUOTED_CONTENT;
    return has_content;
  }
  return false;
}
