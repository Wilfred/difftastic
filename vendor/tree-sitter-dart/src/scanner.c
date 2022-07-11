#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
  TEMPLATE_CHARS_SINGLE,
  TEMPLATE_CHARS_DOUBLE,
  TEMPLATE_CHARS_SINGLE_SINGLE,
  TEMPLATE_CHARS_DOUBLE_SINGLE,
  TEMPLATE_CHARS_RAW_SLASH,
  BLOCK_COMMENT,
  DOCUMENTATION_BLOCK_COMMENT,
};

void *tree_sitter_dart_external_scanner_create() { return NULL; }
void tree_sitter_dart_external_scanner_destroy(void *p) {}
void tree_sitter_dart_external_scanner_reset(void *p) {}
unsigned tree_sitter_dart_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_dart_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    if (lexer->lookahead == '/') {
      skip(lexer);

      if (lexer->lookahead == '/') {
        skip(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          skip(lexer);
        }
      } else if (lexer->lookahead == '*') {
        skip(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '*') {
            skip(lexer);
            if (lexer->lookahead == '/') {
              skip(lexer);
              break;
            }
          } else {
            skip(lexer);
          }
        }
      } else {
        return false;
      }
    } else {
      return true;
    }
  }
}

static bool scan_multiline_comments(TSLexer *lexer) {

    bool documentation_comment = false;
    advance(lexer);
    if (lexer->lookahead != '*') return false;
    advance(lexer);
    if (lexer->lookahead == '*') documentation_comment = true;

    bool after_star = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;
        case '*':
          advance(lexer);
          after_star = true;
          break;
        case '/':
          if (after_star) {
            advance(lexer);
            after_star = false;
            nesting_depth--;
            if (nesting_depth == 0) {
              if (!documentation_comment) {
                lexer->result_symbol = BLOCK_COMMENT;
              } else {
                lexer->result_symbol = DOCUMENTATION_BLOCK_COMMENT;
              }
              return true;
            }
          } else {
            advance(lexer);
            after_star = false;
            if (lexer->lookahead == '*') {
              nesting_depth++;
              advance(lexer);
            }
          }
          break;
        default:
          advance(lexer);
          after_star = false;
          break;
      }
    }
  return false;
}

static bool scan_automatic_semicolon(TSLexer *lexer) {

  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->lookahead == 0) return true;
    if (lexer->lookahead == '}') return true;
    if (lexer->is_at_included_range_start(lexer)) return true;
    if (lexer->lookahead == '\n') break;
    if (!iswspace(lexer->lookahead)) return false;
    skip(lexer);
  }

  skip(lexer);

  // if (!scan_whitespace_and_comments(lexer)) return false;

  return true;

}

static bool scan_templates(TSLexer *lexer, const bool *valid_symbols) {
    // if (valid_symbols[AUTOMATIC_SEMICOLON]) return false;
  if(valid_symbols[TEMPLATE_CHARS_DOUBLE]) {
              lexer->result_symbol = TEMPLATE_CHARS_DOUBLE;
  } else if (valid_symbols[TEMPLATE_CHARS_SINGLE]) {
              lexer->result_symbol = TEMPLATE_CHARS_SINGLE;
  } else if (valid_symbols[TEMPLATE_CHARS_SINGLE_SINGLE]) {
              lexer->result_symbol = TEMPLATE_CHARS_SINGLE_SINGLE;
  } else {
              lexer->result_symbol = TEMPLATE_CHARS_DOUBLE_SINGLE;
  }
  for (bool has_content = false;; has_content = true) {
    lexer->mark_end(lexer);
    switch (lexer->lookahead) {
      case '\'':
      case '"':
        return has_content;
      case '\n':
        if (valid_symbols[TEMPLATE_CHARS_DOUBLE_SINGLE] || valid_symbols[TEMPLATE_CHARS_SINGLE_SINGLE]) return false;
        advance(lexer);
        break;
      case '\0':
        return false;
      case '$':
//                   advance(lexer);
//                   if (lexer->lookahead == '{') return has_content;
//                   break;
        return has_content;
      case '\\':
        if (valid_symbols[TEMPLATE_CHARS_RAW_SLASH]) {
            lexer->result_symbol = TEMPLATE_CHARS_RAW_SLASH;
            advance(lexer);
        } else {
            return has_content;
        }
        break;
      default:
        advance(lexer);
    }
  }
  return true;
}



bool tree_sitter_dart_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  // bool ret = false;
  // if (lexer->lookahead == '/') {
  //   return scan_multiline_comments(lexer);
  // }
  if (
      valid_symbols[TEMPLATE_CHARS_DOUBLE] ||
      valid_symbols[TEMPLATE_CHARS_SINGLE] ||
      valid_symbols[TEMPLATE_CHARS_DOUBLE_SINGLE] ||
      valid_symbols[TEMPLATE_CHARS_SINGLE_SINGLE]
  ) {
    return scan_templates(lexer, valid_symbols);
  }
  if (valid_symbols[AUTOMATIC_SEMICOLON]) {
      bool ret = scan_automatic_semicolon(lexer);
      return ret;
  }
  while (iswspace(lexer->lookahead)) lexer->advance(lexer, true);

  if (lexer->lookahead == '/') {
    return scan_multiline_comments(lexer);
  }
  return false;
}
