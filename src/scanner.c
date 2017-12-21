#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
};

void *tree_sitter_php_external_scanner_create() { return NULL; }
void tree_sitter_php_external_scanner_destroy(void *p) {}
void tree_sitter_php_external_scanner_reset(void *p) {}
unsigned tree_sitter_php_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_php_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      advance(lexer);
    }

    if (lexer->lookahead == '/') {
      advance(lexer);

      if (lexer->lookahead == '/') {
        advance(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          advance(lexer);
        }
      } else {
        return false;
      }
    } else {
      return true;
    }
  }
}

bool tree_sitter_php_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  // Mark the end of a scanned token.
  lexer->mark_end(lexer);

  if (!scan_whitespace_and_comments(lexer)) return false;
  if (lexer->lookahead != '?') return false;

  advance(lexer);

  return lexer->lookahead == '>';
}

