#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
  TEMPLATE_CHARS_SINGLE,
  TEMPLATE_CHARS_DOUBLE,
  TEMPLATE_CHARS_SINGLE_SINGLE,
  TEMPLATE_CHARS_DOUBLE_SINGLE,
  TEMPLATE_CHARS_RAW_SLASH
};

void *tree_sitter_dart_external_scanner_create() { return NULL; }
void tree_sitter_dart_external_scanner_destroy(void *p) {}
void tree_sitter_dart_external_scanner_reset(void *p) {}
unsigned tree_sitter_dart_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_dart_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

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
      } else if (lexer->lookahead == '*') {
        advance(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '*') {
            advance(lexer);
            if (lexer->lookahead == '/') {
              advance(lexer);
              break;
            }
          } else {
            advance(lexer);
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

bool tree_sitter_dart_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (valid_symbols[TEMPLATE_CHARS_DOUBLE] ||
  valid_symbols[TEMPLATE_CHARS_SINGLE] ||
  valid_symbols[TEMPLATE_CHARS_DOUBLE_SINGLE] ||
  valid_symbols[TEMPLATE_CHARS_SINGLE_SINGLE]) {
             if (valid_symbols[AUTOMATIC_SEMICOLON]) return false;
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
           } else {
    lexer->result_symbol = AUTOMATIC_SEMICOLON;
    lexer->mark_end(lexer);

    for (;;) {
      if (lexer->lookahead == 0) return true;
      if (lexer->lookahead == '}') return true;
      if (lexer->is_at_included_range_start(lexer)) return true;
      if (!iswspace(lexer->lookahead)) return false;
      if (lexer->lookahead == '\n') break;
      advance(lexer);
    }

    advance(lexer);

    if (!scan_whitespace_and_comments(lexer)) return false;

    switch (lexer->lookahead) {
      case ',':
      case '.':
      case ':':
      case ';':
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

      // Insert a semicolon before `--` and `++`, but not before binary `+` or `-`.
      case '+':
        advance(lexer);
        return lexer->lookahead == '+';
      case '-':
        advance(lexer);
        return lexer->lookahead == '-';

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
}
