#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
  SIMPLE_STRING,
  SIMPLE_MULTILINE_STRING,
  INTERPOLATED_STRING_MIDDLE,
  INTERPOLATED_STRING_END,
  INTERPOLATED_MULTILINE_STRING_MIDDLE,
  INTERPOLATED_MULTILINE_STRING_END,
  ELSE,
  CATCH,
  FINALLY,
  EXTENDS,
  WITH,
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
        lexer->result_symbol = has_interpolation ? INTERPOLATED_STRING_END : SIMPLE_STRING;
        return true;
      }
      if (closing_quote_count == 3) {
        lexer->result_symbol = has_interpolation ? INTERPOLATED_MULTILINE_STRING_END : SIMPLE_MULTILINE_STRING;
        return true;
      }
    } else if (lexer->lookahead == '$') {
      if (is_multiline && has_interpolation) {
        lexer->result_symbol =  INTERPOLATED_MULTILINE_STRING_MIDDLE;
        return true;
      } else if (has_interpolation){
        lexer->result_symbol = INTERPOLATED_STRING_MIDDLE;
        return true;
      } else {
        advance(lexer);
      }
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
    // NOTE: When there's a dot after a new line it could be a multi-line field
    // expression, in which case we don't recognize it as an automatic semicolon.
    if (lexer->lookahead == '.') return false;

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

    if (valid_symbols[CATCH]) {
      if (lexer->lookahead != 'c' && lexer->lookahead != 'f') return true;
      advance(lexer);
      if (lexer->lookahead == 'a') {
        advance(lexer);
        if (lexer->lookahead != 't') return true;
        advance(lexer);
        if (lexer->lookahead != 'c') return true;
        advance(lexer);
        if (lexer->lookahead != 'h') return true;
        advance(lexer);
        if (iswalpha(lexer->lookahead)) return true;
        return false;
      } else if (lexer->lookahead == 'i') {
        advance(lexer);
        if (lexer->lookahead != 'n') return true;
        advance(lexer);
        if (lexer->lookahead != 'a') return true;
        advance(lexer);
        if (lexer->lookahead != 'l') return true;
        advance(lexer);
        if (lexer->lookahead != 'l') return true;
        advance(lexer);
        if (lexer->lookahead != 'y') return true;
        advance(lexer);
        if (iswalpha(lexer->lookahead)) return true;
        return false;
      } else {
        return true;
      }
    }

    if (valid_symbols[FINALLY]) {
      if (lexer->lookahead != 'f') return true;
      advance(lexer);
      if (lexer->lookahead != 'i') return true;
      advance(lexer);
      if (lexer->lookahead != 'n') return true;
      advance(lexer);
      if (lexer->lookahead != 'a') return true;
      advance(lexer);
      if (lexer->lookahead != 'l') return true;
      advance(lexer);
      if (lexer->lookahead != 'l') return true;
      advance(lexer);
      if (lexer->lookahead != 'y') return true;
      advance(lexer);
      if (iswalpha(lexer->lookahead)) return true;
      return false;
    }

    if (valid_symbols[EXTENDS]) {
      if (lexer->lookahead != 'e') return true;
      advance(lexer);
      if (lexer->lookahead != 'x') return true;
      advance(lexer);
      if (lexer->lookahead != 't') return true;
      advance(lexer);
      if (lexer->lookahead != 'e') return true;
      advance(lexer);
      if (lexer->lookahead != 'n') return true;
      advance(lexer);
      if (lexer->lookahead != 'd') return true;
      advance(lexer);
      if (lexer->lookahead != 's') return true;
      advance(lexer);
      if (iswalpha(lexer->lookahead)) return true;
      return false;
    }

    if (valid_symbols[WITH]) {
      if (lexer->lookahead != 'w') return true;
      advance(lexer);
      if (lexer->lookahead != 'i') return true;
      advance(lexer);
      if (lexer->lookahead != 't') return true;
      advance(lexer);
      if (lexer->lookahead != 'h') return true;
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

  if (valid_symbols[INTERPOLATED_STRING_MIDDLE]) {
    return scan_string_content(lexer, false, true);
  }

  if (valid_symbols[INTERPOLATED_MULTILINE_STRING_MIDDLE]) {
    return scan_string_content(lexer, true, true);
  }

  return false;
}
