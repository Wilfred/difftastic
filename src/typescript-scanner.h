/*
Source:
github:tree-sitter/tree-sitter-typescript#1b3ba31c7538825b05815f4f5bffcca6394edc63

The MIT License (MIT)

Copyright (c) 2017 GitHub

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
  TEMPLATE_CHARS,
  TERNARY_QMARK,
  BINARY_OPERATORS,
  FUNCTION_SIGNATURE_AUTOMATIC_SEMICOLON,
};

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_template_chars(TSLexer *lexer) {
  lexer->result_symbol = TEMPLATE_CHARS;
  for (bool has_content = false;; has_content = true) {
    lexer->mark_end(lexer);
    switch (lexer->lookahead) {
    case '`':
      return has_content;
    case '\0':
      return false;
    case '$':
      advance(lexer);
      if (lexer->lookahead == '{') return has_content;
      break;
    case '\\':
      return has_content;
    default:
      advance(lexer);
    }
  }
}

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

static bool scan_automatic_semicolon(TSLexer *lexer, const bool *valid_symbols){
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->lookahead == 0) return true;
    if (lexer->lookahead == '}') {
      // Automatic semicolon insertion breaks detection of object patterns
      // in a typed context:
      //   type F = ({a}: {a: number}) => number;
      // Therefore, disable automatic semicolons when followed by typing
      do {
        skip(lexer);
      } while (iswspace(lexer->lookahead));
      if (lexer->lookahead == ':') return false;
      return true;
    }
    if (!iswspace(lexer->lookahead)) return false;
    if (lexer->lookahead == '\n') break;
    skip(lexer);
  }

  skip(lexer);

  if (!scan_whitespace_and_comments(lexer)) return false;

  switch (lexer->lookahead) {
  case ',':
  case '.':
  case ';':
  case '*':
  case '%':
  case '>':
  case '<':
  case '=':
  case '?':
  case '^':
  case '|':
  case '&':
  case '/':
  case ':':
    return false;

  case '{':
    if (valid_symbols[FUNCTION_SIGNATURE_AUTOMATIC_SEMICOLON]) return false;
    break;

    // Don't insert a semicolon before a '[' or '(', unless we're parsing
    // a type. Detect whether we're parsing a type or an expression using
    // the validity of a binary operator token.
  case '(':
  case '[':
    if (valid_symbols[BINARY_OPERATORS]) return false;
    break;

    // Insert a semicolon before `--` and `++`, but not before binary `+` or `-`.
  case '+':
    skip(lexer);
    return lexer->lookahead == '+';
  case '-':
    skip(lexer);
    return lexer->lookahead == '-';

    // Don't insert a semicolon before `!=`, but do insert one before a unary `!`.
  case '!':
    skip(lexer);
    return lexer->lookahead != '=';

    // Don't insert a semicolon before `in` or `instanceof`, but do insert one
    // before an identifier.
  case 'i':
    skip(lexer);

    if (lexer->lookahead != 'n') return true;
    skip(lexer);

    if (!iswalpha(lexer->lookahead)) return false;

    for (unsigned i = 0; i < 8; i++) {
      if (lexer->lookahead != "stanceof"[i]) return true;
      skip(lexer);
    }

    if (!iswalpha(lexer->lookahead)) return false;
    break;
  }

  return true;
}

static bool scan_ternary_qmark(TSLexer *lexer) {
  for(;;) {
    if (!iswspace(lexer->lookahead)) break;
    skip(lexer);
  }

  if (lexer->lookahead == '?') {
    advance(lexer);

    if (lexer->lookahead == '?') return false;
    /* Optional chaining. */
    if (lexer->lookahead == '.') return false;

    /* TypeScript optional arguments contain the ?: sequence, possibly
       with whitespace. */
    for(;;) {
      if (!iswspace(lexer->lookahead)) break;
      skip(lexer);
    }
    if (lexer->lookahead == ':') return false;
    if (lexer->lookahead == ')') return false;
    if (lexer->lookahead == ',') return false;

    lexer->mark_end(lexer);
    lexer->result_symbol = TERNARY_QMARK;

    if (lexer->lookahead == '.') {
      advance(lexer);
      if (iswdigit(lexer->lookahead)) return true;
      return false;
    }
    return true;
  }
  return false;
}

static inline bool external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[TEMPLATE_CHARS]) {
    if (valid_symbols[AUTOMATIC_SEMICOLON]) return false;
    return scan_template_chars(lexer);
  } else if (
    valid_symbols[AUTOMATIC_SEMICOLON] ||
    valid_symbols[FUNCTION_SIGNATURE_AUTOMATIC_SEMICOLON]
             ) {
    bool ret = scan_automatic_semicolon(lexer, valid_symbols);
    if (!ret && valid_symbols[TERNARY_QMARK] && lexer->lookahead == '?')
      return scan_ternary_qmark(lexer);
    return ret;
  }
  if (valid_symbols[TERNARY_QMARK]) {
    return scan_ternary_qmark(lexer);
  }

  return false;

}
