#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
  SIMPLE_STRING,
  STRING_START,
  STRING_MIDDLE,
  STRING_END,
  MULTILINE_STRING_START,
  MULTILINE_STRING_MIDDLE,
  MULTILINE_STRING_END,
  ELSE,
};

void *tree_sitter_scala_external_scanner_create() { return NULL; }
void tree_sitter_scala_external_scanner_destroy(void *p) {}
void tree_sitter_scala_external_scanner_reset(void *p) {}
unsigned tree_sitter_scala_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_scala_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_string_content(TSLexer *lexer, bool is_multiline, bool has_interpolation) {
  unsigned closing_quote_count = 0;
  for (;;) {
    if (lexer->lookahead == '"') {
      advance(lexer);
      closing_quote_count++;
      if (!is_multiline) {
        lexer->result_symbol = has_interpolation ? STRING_END : SIMPLE_STRING;
        return true;
      }
      if (closing_quote_count == 3) {
        lexer->result_symbol = has_interpolation ? MULTILINE_STRING_END : SIMPLE_STRING;
        return true;
      }
    } else if (lexer->lookahead == '$') {
      if (is_multiline) {
        lexer->result_symbol = has_interpolation ? MULTILINE_STRING_MIDDLE : MULTILINE_STRING_START;
      } else {
        lexer->result_symbol = has_interpolation ? STRING_MIDDLE : STRING_START;
      }
      return true;
    } else {
      closing_quote_count = 0;
      if (lexer->lookahead == '\\') {
        advance(lexer);
        if (lexer->lookahead != 0) advance(lexer);
      } else if (lexer->lookahead == '\n') {
        if (is_multiline) {
          advance(lexer);
        } else {
          return false;
        }
      } else if (lexer->lookahead == 0) {
        return false;
      } else {
        advance(lexer);
      }
    }
  }
}

bool tree_sitter_scala_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  unsigned newline_count = 0;
  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') newline_count++;
    lexer->advance(lexer, true);
  }

  if (valid_symbols[AUTOMATIC_SEMICOLON] && newline_count > 0) {
    lexer->mark_end(lexer);
    lexer->result_symbol = AUTOMATIC_SEMICOLON;

    if (newline_count > 1) return true;

    if (valid_symbols[ELSE]) {
      if (lexer->lookahead != 'e') return true;
      advance(lexer);
      if (lexer->lookahead != 'l') return true;
      advance(lexer);
      if (lexer->lookahead != 's') return true;
      advance(lexer);
      if (lexer->lookahead != 'e') return true;
      advance(lexer);
      if (iswalpha(lexer->lookahead)) return true;
      return false;
    }

    return true;
  }

  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') newline_count++;
    lexer->advance(lexer, true);
  }

  if (valid_symbols[SIMPLE_STRING] && lexer->lookahead == '"') {
    advance(lexer);

    bool is_multiline = false;
    if (lexer->lookahead == '"') {
      advance(lexer);
      if (lexer->lookahead == '"') {
        advance(lexer);
        is_multiline = true;
      } else {
        lexer->result_symbol = SIMPLE_STRING;
        return true;
      }
    }

    return scan_string_content(lexer, is_multiline, false);
  }

  if (valid_symbols[STRING_MIDDLE]) {
    return scan_string_content(lexer, false, true);
  }

  if (valid_symbols[MULTILINE_STRING_MIDDLE]) {
    return scan_string_content(lexer, true, true);
  }

  return false;
}
