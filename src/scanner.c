#include "tree_sitter/parser.h"
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
};

void *tree_sitter_javascript_external_scanner_create() { return NULL; }
void tree_sitter_javascript_external_scanner_destroy(void *payload) {}
void tree_sitter_javascript_external_scanner_reset(void *payload) {}
bool tree_sitter_javascript_external_scanner_serialize(void *payload, TSExternalTokenState state) { return true; }
void tree_sitter_javascript_external_scanner_deserialize(void *payload, TSExternalTokenState state) {}

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_javascript_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  lexer->result_symbol = AUTOMATIC_SEMICOLON;

  for (;;) {
    if (lexer->lookahead == 0) return true;
    if (lexer->lookahead == '}') return true;
    if (!iswspace(lexer->lookahead)) return false;
    if (lexer->lookahead == '\n') break;
    skip(lexer);
  }

  lexer->mark_end(lexer);
  advance(lexer);

  while (iswspace(lexer->lookahead)) {
    advance(lexer);
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
