#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType { BRACKET_ARGUMENT, BRACKET_COMMENT, LINE_COMMENT };

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void skip_wspace(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    skip(lexer);
  }
}

static bool is_bracket_argument(TSLexer *lexer) {
  if (lexer->lookahead != '[') {
    return false;
  }
  advance(lexer);

  int open_level = 0;
  while (lexer->lookahead == '=') {
    ++open_level;
    advance(lexer);
  }

  if (lexer->lookahead != '[') {
    return false;
  }

  while (lexer->lookahead != '\0') {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);

      int close_level = 0;
      while (lexer->lookahead == '=') {
        ++close_level;
        advance(lexer);
      }

      if (lexer->lookahead == ']' && close_level == open_level) {
        advance(lexer);
        return true;
      }
    }
  }
  return false;
}

static bool scan(void *payload, TSLexer *lexer, bool const *valid_symbols) {
  skip_wspace(lexer);

  if (lexer->lookahead != '#' && valid_symbols[BRACKET_ARGUMENT]) {
    if (is_bracket_argument(lexer)) {
      lexer->result_symbol = BRACKET_ARGUMENT;
      return true;
    }
  }
  if (lexer->lookahead == '#' &&
      (valid_symbols[BRACKET_COMMENT] || valid_symbols[LINE_COMMENT])) {
    advance(lexer);
    if (is_bracket_argument(lexer)) {
      lexer->result_symbol = BRACKET_COMMENT;
      return true;
    } else {
      while (lexer->lookahead != '\n' && lexer->lookahead != '\0') {
        advance(lexer);
      }
      lexer->result_symbol = LINE_COMMENT;
      return true;
    }
  }

  return false;
}

void *tree_sitter_cmake_external_scanner_create() { return NULL; }

void tree_sitter_cmake_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_cmake_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  return 0;
}

void tree_sitter_cmake_external_scanner_deserialize(void *payload,
                                                    char const *buffer,
                                                    unsigned length) {}

bool tree_sitter_cmake_external_scanner_scan(void *payload, TSLexer *lexer,
                                             bool const *valid_symbols) {
  return scan(payload, lexer, valid_symbols);
}
