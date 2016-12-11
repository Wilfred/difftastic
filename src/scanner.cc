#include <tree_sitter/parser.h>
#include <vector>

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

struct Literal {
  enum Type {
    STRING,
    SYMBOL,
    SUBSHELL,
    REGEX,
    WORD_LIST
  };

  Type type;
  int32_t open_delimiter;
  int32_t close_delimiter;
  uint32_t nesting_depth;
  bool allows_interpolation;
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

    return true;
  }

  bool scan_open_delimiter(TSLexer *lexer, Literal &literal) {
    switch (lexer->lookahead) {
      case '"':
        literal.type = Literal::Type::STRING;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.nesting_depth = 1;
        literal.allows_interpolation = true;
        advance(lexer);
        return true;

      case '\'':
        literal.type = Literal::Type::STRING;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.nesting_depth = 1;
        literal.allows_interpolation = false;
        advance(lexer);
        return true;

      case '`':
        literal.type = Literal::Type::SUBSHELL;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.nesting_depth = 1;
        literal.allows_interpolation = true;
        advance(lexer);
        return true;

      case '/':
        literal.type = Literal::Type::REGEX;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.nesting_depth = 1;
        literal.allows_interpolation = true;
        advance(lexer);
        return true;

      case '%':
        advance(lexer);
        literal.allows_interpolation = true;

        switch (lexer->lookahead) {
          case 's':
            literal.type = Literal::Type::SYMBOL;
            advance(lexer);
            break;

          case 'r':
            literal.type = Literal::Type::REGEX;
            advance(lexer);
            break;

          case 'x':
            literal.type = Literal::Type::SUBSHELL;
            advance(lexer);
            break;

          case 'q':
            literal.type = Literal::Type::STRING;
            advance(lexer);
            break;

          case 'Q':
            literal.type = Literal::Type::STRING;
            advance(lexer);
            break;

          case 'w':
          case 'W':
          case 'i':
          case 'I':
            literal.type = Literal::Type::WORD_LIST;
            advance(lexer);
            break;

          default:
            literal.type = Literal::Type::STRING;
            break;
        }

        switch (lexer->lookahead) {
          case '(':
            literal.open_delimiter = '(';
            literal.close_delimiter = ')';
            literal.nesting_depth = 1;
            break;

          case '[':
            literal.open_delimiter = '[';
            literal.close_delimiter = ']';
            literal.nesting_depth = 1;
            break;

          case '{':
            literal.open_delimiter = '{';
            literal.close_delimiter = '}';
            literal.nesting_depth = 1;
            break;

          case '<':
            literal.open_delimiter = '<';
            literal.close_delimiter = '>';
            literal.nesting_depth = 1;
            break;

          case '|':
          case '!':
          case '#':
            literal.open_delimiter = lexer->lookahead;
            literal.close_delimiter = lexer->lookahead;
            literal.nesting_depth = 1;
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

  enum ScanContentResult {
    Error,
    Interpolation,
    End
  };

  ScanContentResult scan_content(TSLexer *lexer, Literal &literal) {
    for (;;) {
      if (literal.nesting_depth == 0) {
        if (literal.type == Literal::Type::REGEX) {
          while ('a' <= lexer->lookahead && lexer->lookahead <= 'z') {
            advance(lexer);
          }
        }
        return End;
      }

      if (lexer->lookahead == literal.close_delimiter) {
        literal.nesting_depth--;
        advance(lexer);
      } else if (lexer->lookahead == literal.open_delimiter) {
        literal.nesting_depth++;
        advance(lexer);
      } else if (literal.allows_interpolation && lexer->lookahead == '#') {
        advance(lexer);
        if (lexer->lookahead == '{') {
          advance(lexer);
          return Interpolation;
        }
      } else if (lexer->lookahead == '\\') {
        advance(lexer);
        advance(lexer);
      } else if (lexer->lookahead == 0) {
        advance(lexer);
        return Error;
      } else {
        advance(lexer);
      }
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (!scan_whitespace(lexer, valid_symbols)) return false;
    if (lexer->result_symbol == LINE_BREAK) return true;

    if (valid_symbols[STRING_MIDDLE]) {
      Literal &literal = literal_stack.back();

      if (scan_interpolation_close(lexer)) {
        switch (scan_content(lexer, literal)) {
          case Error:
            return false;
          case Interpolation:
            lexer->result_symbol = STRING_MIDDLE;
            return true;
          case End:
            literal_stack.pop_back();
            lexer->result_symbol = STRING_END;
            return true;
        }
      }
    }

    if (valid_symbols[SIMPLE_STRING] || valid_symbols[SIMPLE_SYMBOL]) {
      Literal literal;

      if (lexer->lookahead == ':') {
        literal.type = Literal::Type::SYMBOL;
        advance(lexer);

        switch (lexer->lookahead) {
          case '"':
            literal.open_delimiter = '"';
            literal.close_delimiter = '"';
            literal.nesting_depth = 1;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case '\'':
            literal.open_delimiter = '\'';
            literal.close_delimiter = '\'';
            literal.nesting_depth = 1;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          default:
            if (!scan_identifier(lexer)) return false;
            lexer->result_symbol = SIMPLE_SYMBOL;
            return true;
        }
      } else {
        if (!scan_open_delimiter(lexer, literal)) return false;
      }

      switch (scan_content(lexer, literal)) {
        case Error:
          return false;
        case Interpolation:
          literal_stack.push_back(literal);
          lexer->result_symbol = BEGINNING_TOKEN_TYPES[literal.type];
          return true;
        case End:
          lexer->result_symbol = SIMPLE_TOKEN_TYPES[literal.type];
          return true;
      }
    }

    return false;
  }

  std::vector<Literal> literal_stack;
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
