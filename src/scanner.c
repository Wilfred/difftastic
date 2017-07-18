#include "tree_sitter/parser.h"
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
};

void *tree_sitter_javascript_external_scanner_create() { return NULL; }
void tree_sitter_javascript_external_scanner_destroy(void *p) {}
void tree_sitter_javascript_external_scanner_reset(void *p) {}
unsigned tree_sitter_javascript_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_javascript_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_javascript_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->lookahead == 0) return true;
    if (lexer->lookahead == '}') return true;
    if (!iswspace(lexer->lookahead)) return false;
    if (lexer->lookahead == '\n') break;
    advance(lexer);
  }

  advance(lexer);

  while (iswspace(lexer->lookahead)) {
    advance(lexer);
  }

  switch (lexer->lookahead) {
    case ',':
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
    case '?':
    case '^':
    case '|':
    case '&':
    case '/':
      return false;

    // Don't insert a semicolon before `!=`, but do insert one before a unary `!`.
    case '!':
      advance(lexer);
      return lexer->lookahead != '=';

    // Don't insert a semicolon before `in` or `instanceof`, but do insert one
    // before an identifier.
    case 'i':
      advance(lexer);

      if (lexer->lookahead != 'n') return true;
      advance(lexer);

      if (!iswalpha(lexer->lookahead)) return false;

      for (unsigned i = 0; i < 8; i++) {
        if (lexer->lookahead != "stanceof"[i]) return true;
        advance(lexer);
      }

      if (!iswalpha(lexer->lookahead)) return false;
      break;
  }

  return true;
}
