#include <tree_sitter/parser.h>

enum {
  COMMENT
};

void *tree_sitter_ocaml_external_scanner_create() {
  return NULL;
}

void tree_sitter_ocaml_external_scanner_destroy(void *payload) {}

void tree_sitter_external_extra_tokens_external_scanner_reset(void *payload) {}

unsigned tree_sitter_ocaml_external_scanner_serialize(void *payload, char *buffer) {
  return true;
}

void tree_sitter_ocaml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_ocaml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *whitelist) {
  if (whitelist[COMMENT]) {
    while (lexer->lookahead == ' ' ||
           lexer->lookahead == '\t' ||
           lexer->lookahead == '\n') {
      lexer->advance(lexer, true);
    }

    if (lexer->lookahead != '(') return false;
    lexer->advance(lexer, false);
    if (lexer->lookahead != '*') return false;
    lexer->advance(lexer, false);

    int depth = 1;

    for (;;) {
      if (depth == 0) {
        lexer->result_symbol = COMMENT;
        return true;
      }

      switch (lexer->lookahead) {
        case '(':
          lexer->advance(lexer, false);
          if (lexer->lookahead == '*') depth++;
          break;
        case '*':
          lexer->advance(lexer, false);
          if (lexer->lookahead == ')') depth--;
          break;
      }

      lexer->advance(lexer, false);
    }
  }

  return false;
}
