#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cctype>

using std::vector;
using std::string;

enum TokenType : TSSymbol {
  SIMPLE_STRING,
  SIMPLE_SYMBOL,
  SIMPLE_SUBSHELL,
  SIMPLE_REGEX,
  SIMPLE_WORD_LIST,
  SIMPLE_HEREDOC_BODY,
  STRING_BEGINNING,
  SYMBOL_BEGINNING,
  SUBSHELL_BEGINNING,
  REGEX_BEGINNING,
  WORD_LIST_BEGINNING,
  HEREDOC_BODY_BEGINNING,
  STRING_MIDDLE,
  HEREDOC_BODY_MIDDLE,
  STRING_END,
  HEREDOC_BODY_END,
  HEREDOC_BEGINNING,
  LINE_BREAK,
  FORWARD_SLASH,
  ELEMENT_REFERENCE_LEFT_BRACKET,
  BLOCK_AMPERSAND,
  SPLAT_STAR,
  IF,
  UNLESS,
  UNTIL,
  WHILE,
  ARGUMENT_LIST_LEFT_PAREN,
  DEF,
  SCOPE_DOUBLE_COLON
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

struct Heredoc {
  string word;
  bool found_starting_linebreak;
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

struct ReservedWord {
  string word;
  TokenType type;
};

ReservedWord RESERVED_WORDS[] = {
  { "if", IF },
  { "unless", UNLESS },
  { "until", UNTIL },
  { "while", WHILE },
};

struct Scanner {
  Scanner() : has_leading_whitespace(false), has_leading_method_def(false) {}

  void skip(TSLexer *lexer) {
    has_leading_whitespace = true;
    lexer->advance(lexer, true);
  }

  void reset() {}

  bool serialize(TSExternalTokenState state) { return true; }

  void deserialize(TSExternalTokenState state) {}

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
          if (!open_heredocs.empty() && !open_heredocs.front().found_starting_linebreak) {
            skip(lexer);
            open_heredocs.front().found_starting_linebreak = true;
            break;
          } else if (valid_symbols[LINE_BREAK]) {
            advance(lexer);
            while (lexer->lookahead == ' ' || lexer->lookahead == '\t') { skip(lexer); }
            if (lexer->lookahead == '.') { // Method continuation ignores newline.
              break;
            } else {
              lexer->result_symbol = LINE_BREAK;
              return true;
            }
          } else {
            skip(lexer);
            break;
          }
        case '\\':
          skip(lexer);
          if (lexer->lookahead == '\n') {
            skip(lexer);
          }
          break;
        default:
          return true;
      }
    }
  }

  bool scan_operator(TSLexer *lexer) {
    switch(lexer->lookahead) {
      // <, <=, <<, <=>
      case '<':
        advance(lexer);
        if (lexer->lookahead == '<') advance(lexer);
        else if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == '>') advance(lexer);
        }
        return true;

      // >, >=, >>
      case '>':
        advance(lexer);
        if (lexer->lookahead == '>') advance(lexer);
        else if (lexer->lookahead == '=') advance(lexer);
        return true;

      // ==, ===, =~
      case '=':
        advance(lexer);
        if (lexer->lookahead == '~') {
          advance(lexer);
          return true;
        } else if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == '=') advance(lexer);
          return true;
        }
        return false;

      // +, -, +@, -@
      case '+':
      case '-':
        advance(lexer);
        if (lexer->lookahead == '@') advance(lexer);
        return true;

      // ..
      case '.':
        advance(lexer);
        if (lexer->lookahead == '.') {
          advance(lexer);
          return true;
        }
        return false;

      // &, ^, |, ~, /, %
      case '&':
      case '^':
      case '|':
      case '~':
      case '/':
      case '%':
        advance(lexer);
        return true;

      // *, **
      case '*':
        advance(lexer);
        if (lexer->lookahead == '*') advance(lexer);
        return true;

      // [], []=
      case '[':
        advance(lexer);
        if (lexer->lookahead == ']') advance(lexer);
        else return false;
        if (lexer->lookahead == '=') advance(lexer);
        return true;

      default:
        return false;
    }
  }

  bool scan_symbol_identifier(TSLexer *lexer) {
    if (lexer->lookahead == '@') {
      advance(lexer);
      if (lexer->lookahead == '@') {
        advance(lexer);
      }
    } else if (lexer->lookahead == '$') {
      advance(lexer);
    }

    if (isalpha(lexer->lookahead) || (lexer->lookahead == '_')) {
      advance(lexer);
    } else if (!scan_operator(lexer)) {
      return false;
    }

    while (isalnum(lexer->lookahead) || (lexer->lookahead == '_')) {
      advance(lexer);
    }

    if (lexer->lookahead == '?' || lexer->lookahead == '!' || lexer->lookahead == '=') {
      advance(lexer);
    }

    return true;
  }

  bool scan_open_delimiter(TSLexer *lexer, Literal &literal, const bool *valid_symbols) {
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
        if (valid_symbols[FORWARD_SLASH]) {
          if (!has_leading_whitespace) return false;
          if (lexer->lookahead == ' ' || lexer->lookahead == '\t') return false;
          if (has_leading_method_def && lexer->lookahead == '(') return false;
        }
        return true;

      case '%':
        advance(lexer);

        switch (lexer->lookahead) {
          case 's':
            literal.type = Literal::Type::SYMBOL;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'r':
            literal.type = Literal::Type::REGEX;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'x':
            literal.type = Literal::Type::SUBSHELL;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'q':
            literal.type = Literal::Type::STRING;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'Q':
            literal.type = Literal::Type::STRING;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'w':
          case 'i':
            literal.type = Literal::Type::WORD_LIST;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'W':
          case 'I':
            literal.type = Literal::Type::WORD_LIST;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          default:
            literal.type = Literal::Type::STRING;
            literal.allows_interpolation = true;
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
          case '/':
          case '\\':
          case '@':
          case '$':
          case '%':
          case '^':
          case '&':
          case '*':
          case ')':
          case ']':
          case '}':
          case '>':
          // TODO: Implement %= as external rule and re-enable = as a valid
          // unbalanced delimiter. That will be necessary due to ambiguity
          // between &= assignment operator and %=...= as string
          // content delimiter.
          //case '=':
          case '+':
          case '-':
          case '~':
          case '`':
          case ',':
          case '.':
          case '?':
          case ':':
          case ';':
          case '_':
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

  string scan_heredoc_word(TSLexer *lexer) {
    string result;
    if (isalpha(lexer->lookahead)) {
      result += lexer->lookahead;
      advance(lexer);
      while (isalpha(lexer->lookahead)) {
        result += lexer->lookahead;
        advance(lexer);
      }
    }
    return result;
  }

  enum ScanContentResult {
    Error,
    Interpolation,
    End
  };

  ScanContentResult scan_heredoc_content(TSLexer *lexer) {
    if (open_heredocs.empty()) return Error;
    Heredoc heredoc = open_heredocs.front();
    size_t position_in_word = 0;

    for (;;) {
      if (position_in_word == heredoc.word.size() || lexer->lookahead == 0) {
        open_heredocs.erase(open_heredocs.begin());
        return End;
      }

      if (lexer->lookahead == heredoc.word[position_in_word]) {
        advance(lexer);
        position_in_word++;
      } else {
        position_in_word = 0;
        if (lexer->lookahead == '#') {
          advance(lexer);
          if (lexer->lookahead == '{') {
            advance(lexer);
            return Interpolation;
          }
        } else if (lexer->lookahead == '\n') {
          advance(lexer);
          while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            advance(lexer);
          }
        } else {
          advance(lexer);
        }
      }
    }
  }

  ScanContentResult scan_content(TSLexer *lexer, Literal &literal) {
    for (;;) {
      if (literal.nesting_depth == 0) {
        if (literal.type == Literal::Type::REGEX) {
          while (islower(lexer->lookahead)) {
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
    has_leading_whitespace = false;

    if (valid_symbols[ELEMENT_REFERENCE_LEFT_BRACKET] && lexer->lookahead == '[') {
      advance(lexer);
      lexer->result_symbol = ELEMENT_REFERENCE_LEFT_BRACKET;
      return true;
    }

    if (!scan_whitespace(lexer, valid_symbols)) return false;
    if (lexer->result_symbol == LINE_BREAK) {
      has_leading_method_def = false;
      return true;
    }

    if (valid_symbols[BLOCK_AMPERSAND] && lexer->lookahead == '&') {
      advance(lexer);
      if (isalpha(lexer->lookahead) || lexer->lookahead == ':') {
        lexer->result_symbol = BLOCK_AMPERSAND;
        return true;
      } else {
        return false;
      }
    }

    if (valid_symbols[SPLAT_STAR] && lexer->lookahead == '*') {
      advance(lexer);
      if (isalpha(lexer->lookahead) || lexer->lookahead == '@' || lexer->lookahead == '$' || lexer->lookahead == '(' || lexer->lookahead == ':' || lexer->lookahead == '[') {
        lexer->result_symbol = SPLAT_STAR;
        return true;
      } else {
        return false;
      }
    }

    if (valid_symbols[DEF] && lexer->lookahead == 'd') {
      advance(lexer);
      if (lexer->lookahead == 'e') {
        advance(lexer);
        if (lexer->lookahead == 'f') {
          advance(lexer);
          if (lexer->lookahead == ' ') {
            has_leading_method_def = true;
            lexer->result_symbol = DEF;
            return true;
          }
        }
      }
    }

    // Reserved words like if and unless can be symbol keys (e.g. { if: 1}).
    size_t positions[sizeof(RESERVED_WORDS)/sizeof(RESERVED_WORDS[0])] = { 0 };
    for (;;) {
      size_t matched = 0;
      size_t i = 0;
      for(auto reserved : RESERVED_WORDS) {
        if (!valid_symbols[reserved.type]) break;
        if (positions[i] == reserved.word.size() && (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\n')) {
          lexer->result_symbol = reserved.type;
          return true;
        }

        if (lexer->lookahead == reserved.word[positions[i]]) {
          positions[i]++;
          matched++;
        } else {
          positions[i] = 0;
        }

        i++;
      }

      if (matched > 0) advance(lexer);
      else break;
    }

    if (valid_symbols[SCOPE_DOUBLE_COLON] && lexer->lookahead == ':' && !has_leading_whitespace) {
      advance(lexer);
      if (lexer->lookahead == ':') {
        advance(lexer);
        if (lexer->lookahead != ' ' && lexer->lookahead != '\t' && lexer->lookahead != '\n') {
          lexer->result_symbol = SCOPE_DOUBLE_COLON;
          return true;
        }
      }
    }

    if (valid_symbols[ARGUMENT_LIST_LEFT_PAREN] && lexer->lookahead == '(' && !has_leading_whitespace) {
      advance(lexer);
      lexer->result_symbol = ARGUMENT_LIST_LEFT_PAREN;
      return true;
    }

    if (valid_symbols[HEREDOC_BODY_MIDDLE] && !open_heredocs.empty() && open_heredocs.front().found_starting_linebreak) {
      if (scan_interpolation_close(lexer)) {
        switch (scan_heredoc_content(lexer)) {
          case Error:
            return false;
          case Interpolation:
            lexer->result_symbol = HEREDOC_BODY_MIDDLE;
            return true;
          case End:
            lexer->result_symbol = HEREDOC_BODY_END;
            return true;
        }
      }
    } else if (valid_symbols[HEREDOC_BODY_BEGINNING] && !open_heredocs.empty() && open_heredocs.front().found_starting_linebreak) {
      switch (scan_heredoc_content(lexer)) {
        case Error:
          return false;
        case Interpolation:
          lexer->result_symbol = HEREDOC_BODY_BEGINNING;
          return true;
        case End:
          lexer->result_symbol = SIMPLE_HEREDOC_BODY;
          return true;
      }
    }

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
            if (!scan_symbol_identifier(lexer)) return false;
            lexer->result_symbol = SIMPLE_SYMBOL;
            return true;
        }
      } else if (lexer->lookahead == '<') {
        advance(lexer);
        if (lexer->lookahead != '<') return false;
        advance(lexer);
        if (lexer->lookahead == '-') advance(lexer);

        literal.type = Literal::Type::STRING;
        literal.nesting_depth = 1;
        literal.allows_interpolation = true;
        int32_t quote;
        switch (lexer->lookahead) {
          case '\'':
            quote = '\'';
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case '"':
            quote = '"';
            advance(lexer);
            break;

          case '`':
            quote = '`';
            advance(lexer);
            break;
        }
        Heredoc heredoc;
        heredoc.word = scan_heredoc_word(lexer);
        heredoc.found_starting_linebreak = false;
        if (heredoc.word.empty()) return false;
        if (quote == lexer->lookahead) advance(lexer);
        open_heredocs.push_back(heredoc);
        lexer->result_symbol = HEREDOC_BEGINNING;
        return true;
      } else {
        if (!scan_open_delimiter(lexer, literal, valid_symbols)) return false;
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

  bool has_leading_whitespace;
  bool has_leading_method_def;
  vector<Literal> literal_stack;
  vector<Heredoc> open_heredocs;
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

void ts_language_ruby_external_scanner_reset(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->reset();
}

bool ts_language_ruby_external_scanner_serialize(void *payload, TSExternalTokenState state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void ts_language_ruby_external_scanner_deserialize(void *payload, TSExternalTokenState state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state);
}

void ts_language_ruby_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
