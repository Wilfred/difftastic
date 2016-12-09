#include <tree_sitter/parser.h>
#include <stdio.h>

enum TokenType : TSSymbol {
  SIMPLE_STRING,
  SIMPLE_SYMBOL,
  SIMPLE_SUBSHELL,
  SIMPLE_REGEX,
  SIMPLE_WORD_LIST,
  STRING_BEGINNING,
  SYMBOL_BEGINNING,
  SUBSHELL_BEGINNING,
  REGEX_BEGINNING,
  WORD_LIST_BEGINNING,
  STRING_MIDDLE,
  STRING_END,
  LINE_BREAK
};

enum LiteralType {
  STRING,
  SYMBOL,
  SUBSHELL,
  REGEX,
  WORD_LIST
};

TokenType BEGINNING_TOKEN_TYPES[] = {
  STRING_BEGINNING,
  SYMBOL_BEGINNING,
  SUBSHELL_BEGINNING,
  REGEX_BEGINNING,
  WORD_LIST_BEGINNING,
};

TokenType SIMPLE_TOKEN_TYPES[] = {
  SIMPLE_STRING,
  SIMPLE_SYMBOL,
  SIMPLE_SUBSHELL,
  SIMPLE_REGEX,
  SIMPLE_WORD_LIST,
};

struct Scanner {
  Scanner() :
    literal_type{STRING}, open_delimiter{0}, close_delimiter{0}, depth{0},
    allows_interpolation{false} {}

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  bool scan_whitespace(TSLexer *lexer, const bool *valid_symbols) {
    for (;;) {
      switch (lexer->lookahead) {
        case ' ':
        case '\t':
          skip(lexer);
          break;
        case '\n':
          if (valid_symbols[LINE_BREAK]) {
            advance(lexer);
            lexer->result_symbol = LINE_BREAK;
            return true;
          } else {
            skip(lexer);
            break;
          }

        case 0:
          return false;

        default:
          return true;
      }
    }
  }

  bool scan_identifier(TSLexer *lexer) {
    if (lexer->lookahead == '@') {
      advance(lexer);
      if (lexer->lookahead == '@') {
        advance(lexer);
      }
    } else if (lexer->lookahead == '$') {
      advance(lexer);
    }

    if ((lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
        (lexer->lookahead >= 'a' && lexer->lookahead <= 'z')) {
      advance(lexer);
    } else {
      return false;
    }

    while ((lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
           (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
           (lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
           (lexer->lookahead == '_')) {
      advance(lexer);
    }

    if (lexer->lookahead == '?' || lexer->lookahead == '!') {
      advance(lexer);
    }

    lexer->result_symbol = SIMPLE_SYMBOL;
    return true;
  }

  bool scan_open_delimiter(TSLexer *lexer) {
    switch (lexer->lookahead) {
      case '"':
        literal_type = STRING;
        open_delimiter = close_delimiter = lexer->lookahead;
        depth = 1;
        allows_interpolation = true;
        advance(lexer);
        return true;

      case '\'':
        literal_type = STRING;
        open_delimiter = close_delimiter = lexer->lookahead;
        depth = 1;
        allows_interpolation = false;
        advance(lexer);
        return true;

      case '`':
        literal_type = SUBSHELL;
        open_delimiter = close_delimiter = lexer->lookahead;
        depth = 1;
        allows_interpolation = true;
        advance(lexer);
        return true;

      case '/':
        literal_type = REGEX;
        open_delimiter = close_delimiter = lexer->lookahead;
        depth = 1;
        allows_interpolation = true;
        advance(lexer);
        return true;

      case '%':
        advance(lexer);
        allows_interpolation = true;

        switch (lexer->lookahead) {
          case 's':
            literal_type = SYMBOL;
            advance(lexer);
            break;

          case 'r':
            literal_type = REGEX;
            advance(lexer);
            break;

          case 'x':
            literal_type = SUBSHELL;
            advance(lexer);
            break;

          case 'q':
            literal_type = STRING;
            advance(lexer);
            break;

          case 'Q':
            literal_type = STRING;
            advance(lexer);
            break;

          case 'w':
          case 'W':
          case 'i':
          case 'I':
            literal_type = WORD_LIST;
            advance(lexer);
            break;

          default:
            literal_type = STRING;
            break;
        }

        switch (lexer->lookahead) {
          case '(':
            open_delimiter = '(';
            close_delimiter = ')';
            depth = 1;
            break;

          case '[':
            open_delimiter = '[';
            close_delimiter = ']';
            depth = 1;
            break;

          case '{':
            open_delimiter = '{';
            close_delimiter = '}';
            depth = 1;
            break;

          case '<':
            open_delimiter = '<';
            close_delimiter = '>';
            depth = 1;
            break;

          case '|':
          case '!':
          case '#':
            open_delimiter = lexer->lookahead;
            close_delimiter = lexer->lookahead;
            depth = 1;
            break;
          default:
            return false;
        }

        advance(lexer);
        return true;

      default:
        return false;
    }
  }

  bool scan_interpolation_close(TSLexer *lexer) {
    if (lexer->lookahead == '}') {
      advance(lexer);
      return true;
    } else {
      return false;
    }
  }

  bool scan_content(TSLexer *lexer, TSSymbol middle_symbol, TSSymbol end_symbol) {
    for (;;) {
      if (depth == 0) {
        if (literal_type == REGEX) {
          while ('a' <= lexer->lookahead && lexer->lookahead <= 'z') {
            advance(lexer);
          }
        }

        lexer->result_symbol = end_symbol;
        return true;
      }

      if (lexer->lookahead == close_delimiter) {
        depth--;
        advance(lexer);
      } else if (lexer->lookahead == open_delimiter) {
        depth++;
        advance(lexer);
      } else if (allows_interpolation && lexer->lookahead == '#') {
        advance(lexer);
        if (lexer->lookahead == '{') {
          advance(lexer);
          lexer->result_symbol = middle_symbol;
          return true;
        }
      } else if (lexer->lookahead == '\\') {
        advance(lexer);
        advance(lexer);
      } else if (lexer->lookahead == 0) {
        advance(lexer);
        return false;
      } else {
        advance(lexer);
      }
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (!scan_whitespace(lexer, valid_symbols)) return false;
    if (lexer->result_symbol == LINE_BREAK) return true;

    if (valid_symbols[STRING_MIDDLE]) {
      if (scan_interpolation_close(lexer)) {
        return scan_content(lexer, STRING_MIDDLE, STRING_END);
      }
    }

    if (valid_symbols[SIMPLE_STRING] || valid_symbols[SIMPLE_SYMBOL]) {
      if (lexer->lookahead == ':') {
        literal_type = SYMBOL;
        advance(lexer);

        switch (lexer->lookahead) {
          case '"':
            open_delimiter = '"';
            close_delimiter = '"';
            depth = 1;
            allows_interpolation = true;
            advance(lexer);
            break;

          case '\'':
            open_delimiter = '\'';
            close_delimiter = '\'';
            depth = 1;
            allows_interpolation = false;
            advance(lexer);
            break;

          default:
            return scan_identifier(lexer);
        }
      } else {
        if (!scan_open_delimiter(lexer)) return false;
      }

      return scan_content(lexer, BEGINNING_TOKEN_TYPES[literal_type], SIMPLE_TOKEN_TYPES[literal_type]);
    }

    return false;
  }

  LiteralType literal_type;
  int32_t open_delimiter;
  int32_t close_delimiter;
  uint32_t depth;
  bool allows_interpolation;
};

extern "C" {

void *ts_language_ruby_external_scanner_create() {
  return new Scanner();
}

bool ts_language_ruby_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

void ts_language_ruby_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
