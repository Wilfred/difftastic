#include "tree_sitter/parser.h"
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
};

void *tree_sitter_javascript_external_scanner_create() {
  return NULL;
}

void tree_sitter_javascript_external_scanner_destroy(void *payload) {}

void tree_sitter_javascript_external_scanner_reset(void *payload) {}

bool tree_sitter_javascript_external_scanner_serialize(void *payload, TSExternalTokenState state) {
  return true;
}

void tree_sitter_javascript_external_scanner_deserialize(void *payload, TSExternalTokenState state) {}

bool tree_sitter_javascript_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  lexer->result_symbol = AUTOMATIC_SEMICOLON;

  for (;;) {
    if (lexer->lookahead == 0) return true;
    if (lexer->lookahead == '}') return true;
    if (!iswspace(lexer->lookahead)) return false;
    if (lexer->lookahead == '\n') break;
    lexer->advance(lexer, true);
  }

  lexer->mark_end(lexer);
  lexer->advance(lexer, false);

  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, false);
  }

  switch (lexer->lookahead) {
    case '.':
    case '+':
    case '-':
    case '*':
    case '%':
    case '>':
    case '<':
    case '=':
    case '[':
    case '(':
      return false;

    case '/':
      lexer->advance(lexer, false);
      return lexer->lookahead != '*' && lexer->lookahead != '/';

    case '!':
      lexer->advance(lexer, false);
      return lexer->lookahead != '=';

    default:
      return true;
  }
}
