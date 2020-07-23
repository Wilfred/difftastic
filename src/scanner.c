#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  BLOCK_COMMENT,
  TRIPLE_STRING,
  IMMEDIATE_PAREN,
};

bool tree_sitter_julia_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (
    lexer->lookahead == '(' &&
    valid_symbols[IMMEDIATE_PAREN]
  ) {
    lexer->result_symbol = IMMEDIATE_PAREN;
    return true;
  }

  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead == '#') {
    lexer->advance(lexer, false);
    if (lexer->lookahead != '=') {
      return false;
    }
    lexer->advance(lexer, false);

    bool after_eq = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;
        case '=':
          lexer->advance(lexer, false);
          after_eq = true;
          break;
        case '#':
          if (after_eq) {
            lexer->advance(lexer, false);
            after_eq = false;
            nesting_depth--;
            if (nesting_depth == 0) {
              lexer->result_symbol = BLOCK_COMMENT;
              return true;
            }
          } else {
            lexer->advance(lexer, false);
            after_eq = false;
            if (lexer->lookahead == '=') {
              nesting_depth++;
              lexer->advance(lexer, false);
            }
          }
          break;
        default:
          lexer->advance(lexer, false);
          after_eq = false;
          break;
      }
    }
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
