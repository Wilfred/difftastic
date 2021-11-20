#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>

namespace {

using std::vector;
using std::string;

enum TokenType {
  LINE_BREAK,

  // Delimited literals
  SIMPLE_SYMBOL,
  STRING_START,
  SYMBOL_START,
  SUBSHELL_START,
  REGEX_START,
  STRING_ARRAY_START,
  SYMBOL_ARRAY_START,
  HEREDOC_BODY_START,
  STRING_CONTENT,
  HEREDOC_CONTENT,
  STRING_END,
  HEREDOC_BODY_END,
  HEREDOC_START,

  // Whitespace-sensitive tokens
  FORWARD_SLASH,
  BLOCK_AMPERSAND,
  SPLAT_STAR,
  UNARY_MINUS,
  BINARY_MINUS,
  BINARY_STAR,
  SINGLETON_CLASS_LEFT_ANGLE_LEFT_ANGLE,
  HASH_KEY_SYMBOL,
  HASH_SPLAT_STAR_STAR,
  BINARY_STAR_STAR,
  ELEMENT_REFERENCE_BRACKET,

  NONE
};

struct Literal {
  TokenType type;
  int32_t open_delimiter;
  int32_t close_delimiter;
  uint32_t nesting_depth;
  bool allows_interpolation;
};

struct Heredoc {
  Heredoc() : end_word_indentation_allowed(false), started(false) {}
  string word;
  bool end_word_indentation_allowed;
  bool started;
};

const char NON_IDENTIFIER_CHARS[] = {
  '\0',
  '\n',
  '\r',
  '\t',
  ' ',
  ':',
  ';',
  '`',
  '"',
  '\'',
  '@',
  '$',
  '#',
  '.',
  ',',
  '|',
  '^',
  '&',
  '<',
  '=',
  '>',
  '+',
  '-',
  '*',
  '/',
  '\\',
  '%',
  '?',
  '!',
  '~',
  '(',
  ')',
  '[',
  ']',
  '{',
  '}',
};

struct Scanner {
  Scanner() : has_leading_whitespace(false) {}

  void reset() {
    literal_stack.clear();
    open_heredocs.clear();
  }

  unsigned serialize(char *buffer) {
    unsigned i = 0;

    if (literal_stack.size() * 5 + 2 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    buffer[i++] = literal_stack.size();
    for (
      vector<Literal>::iterator iter = literal_stack.begin(),
      end = literal_stack.end();
      iter != end;
      ++iter
    ) {
      buffer[i++] = iter->type;
      buffer[i++] = iter->open_delimiter;
      buffer[i++] = iter->close_delimiter;
      buffer[i++] = iter->nesting_depth;
      buffer[i++] = iter->allows_interpolation;
    }

    buffer[i++] = open_heredocs.size();
    for (
      vector<Heredoc>::iterator iter = open_heredocs.begin(),
      end = open_heredocs.end();
      iter != end;
      ++iter
    ) {
      if (i + 2 + iter->word.size() >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
      buffer[i++] = iter->end_word_indentation_allowed;
      buffer[i++] = iter->started;
      buffer[i++] = iter->word.size();
      iter->word.copy(&buffer[i], iter->word.size());
      i += iter->word.size();
    }

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    unsigned i = 0;
    has_leading_whitespace = false;
    literal_stack.clear();
    open_heredocs.clear();

    if (length == 0) return;

    uint8_t literal_depth = buffer[i++];
    for (unsigned j = 0; j < literal_depth; j++) {
      Literal literal;
      literal.type = static_cast<TokenType>(buffer[i++]);
      literal.open_delimiter = buffer[i++];
      literal.close_delimiter = buffer[i++];
      literal.nesting_depth = buffer[i++];
      literal.allows_interpolation = buffer[i++];
      literal_stack.push_back(literal);
    }

    uint8_t open_heredoc_count = buffer[i++];
    for (unsigned j = 0; j < open_heredoc_count; j++) {
      Heredoc heredoc;
      heredoc.end_word_indentation_allowed = buffer[i++];
      heredoc.started = buffer[i++];
      uint8_t word_length = buffer[i++];
      heredoc.word.assign(buffer + i, buffer + i + word_length);
      i += word_length;
      open_heredocs.push_back(heredoc);
    }

    // assert(i == length);
  }

  void skip(TSLexer *lexer) {
    has_leading_whitespace = true;
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  bool scan_whitespace(TSLexer *lexer, const bool *valid_symbols) {
    bool heredoc_body_start_is_valid =
      !open_heredocs.empty() &&
      !open_heredocs[0].started &&
      valid_symbols[HEREDOC_BODY_START];
    bool crossed_newline = false;

    for (;;) {
      if (valid_symbols[LINE_BREAK] && lexer->is_at_included_range_start(lexer)) {
        lexer->mark_end(lexer);
        lexer->result_symbol = LINE_BREAK;
        return true;
      }

      switch (lexer->lookahead) {
        case ' ':
        case '\t':
          skip(lexer);
          break;
        case '\r':
          if (heredoc_body_start_is_valid) {
            lexer->result_symbol = HEREDOC_BODY_START;
            open_heredocs[0].started = true;
            return true;
          } else {
            skip(lexer);
            break;
          }
        case '\n':
          if (heredoc_body_start_is_valid) {
            lexer->result_symbol = HEREDOC_BODY_START;
            open_heredocs[0].started = true;
            return true;
          } else if (valid_symbols[LINE_BREAK] && !crossed_newline) {
            lexer->mark_end(lexer);
            advance(lexer);
            crossed_newline = true;
          } else {
            skip(lexer);
          }
          break;
        case '\\':
          advance(lexer);
          if ('\r' == lexer->lookahead) {
            skip(lexer);
          }
          if (iswspace(lexer->lookahead)) {
            skip(lexer);
          } else {
            return false;
          }
          break;
        default:
          if (crossed_newline && lexer->lookahead != '.' && lexer->lookahead != '&' && lexer->lookahead != '#') {
            lexer->result_symbol = LINE_BREAK;
          }
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

      // &, ^, |, ~, /, %`
      case '&':
      case '^':
      case '|':
      case '~':
      case '/':
      case '%':
      case '`':
        advance(lexer);
        return true;

      // !, !=, !~
      case '!':
        advance(lexer);
        if (lexer->lookahead == '=' || lexer->lookahead == '~') advance(lexer);
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

  bool is_iden_char(char c) {
    return memchr(&NON_IDENTIFIER_CHARS, c, sizeof(NON_IDENTIFIER_CHARS)) == NULL;
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

    if (is_iden_char(lexer->lookahead)) {
      advance(lexer);
    } else if (!scan_operator(lexer)) {
      return false;
    }

    while (is_iden_char(lexer->lookahead)) {
      advance(lexer);
    }

    if (lexer->lookahead == '?' || lexer->lookahead == '!') {
      advance(lexer);
    }

    if (lexer->lookahead == '=') {
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead != '>') {
        lexer->mark_end(lexer);
      }
    }

    return true;
  }

  bool scan_open_delimiter(TSLexer *lexer, Literal &literal, const bool *valid_symbols) {
    switch (lexer->lookahead) {
      case '"':
        literal.type = STRING_START;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.allows_interpolation = true;
        advance(lexer);
        return true;

      case '\'':
        literal.type = STRING_START;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.allows_interpolation = false;
        advance(lexer);
        return true;

      case '`':
        if (!valid_symbols[SUBSHELL_START]) return false;
        literal.type = SUBSHELL_START;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.allows_interpolation = true;
        advance(lexer);
        return true;

      case '/':
        if (!valid_symbols[REGEX_START]) return false;
        literal.type = REGEX_START;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.allows_interpolation = true;
        advance(lexer);
        if (valid_symbols[FORWARD_SLASH]) {
          if (!has_leading_whitespace) return false;
          if (lexer->lookahead == ' ' || lexer->lookahead == '\t') return false;
          if (lexer->lookahead == '=') return false;
        }
        return true;

      case '%':
        advance(lexer);

        switch (lexer->lookahead) {
          case 's':
            if (!valid_symbols[SIMPLE_SYMBOL]) return false;
            literal.type = SYMBOL_START;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'r':
            if (!valid_symbols[REGEX_START]) return false;
            literal.type = REGEX_START;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'x':
            if (!valid_symbols[SUBSHELL_START]) return false;
            literal.type = SUBSHELL_START;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'q':
            if (!valid_symbols[STRING_START]) return false;
            literal.type = STRING_START;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'Q':
            if (!valid_symbols[STRING_START]) return false;
            literal.type = STRING_START;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'w':
            if (!valid_symbols[STRING_ARRAY_START]) return false;
            literal.type = STRING_ARRAY_START;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'i':
            if (!valid_symbols[SYMBOL_ARRAY_START]) return false;
            literal.type = SYMBOL_ARRAY_START;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'W':
            if (!valid_symbols[STRING_ARRAY_START]) return false;
            literal.type = STRING_ARRAY_START;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'I':
            if (!valid_symbols[SYMBOL_ARRAY_START]) return false;
            literal.type = SYMBOL_ARRAY_START;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          default:
            if (!valid_symbols[STRING_START]) return false;
            literal.type = STRING_START;
            literal.allows_interpolation = true;
            break;
        }

        switch (lexer->lookahead) {
          case '(':
            literal.open_delimiter = '(';
            literal.close_delimiter = ')';
            break;

          case '[':
            literal.open_delimiter = '[';
            literal.close_delimiter = ']';
            break;

          case '{':
            literal.open_delimiter = '{';
            literal.close_delimiter = '}';
            break;

          case '<':
            literal.open_delimiter = '<';
            literal.close_delimiter = '>';
            break;

          case '\r':
          case '\n':
          case ' ':
          case '\t':
            // If the `/` operator is valid, then so is the `%` operator, which means
            // that a `%` followed by whitespace should be considered an operator,
            // not a percent string.
            if (valid_symbols[FORWARD_SLASH]) return false;

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
          case '"':
          case '\'':
            literal.open_delimiter = lexer->lookahead;
            literal.close_delimiter = lexer->lookahead;
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

  string scan_heredoc_word(TSLexer *lexer) {
    string result;
    int32_t quote;

    switch (lexer->lookahead) {
      case '\'':
      case '"':
      case '`':
        quote = lexer->lookahead;
        advance(lexer);
        while (lexer->lookahead != quote && !lexer->eof(lexer)) {
          result += lexer->lookahead;
          advance(lexer);
        }
        advance(lexer);
        break;

      default:
        if (iswalnum(lexer->lookahead) || lexer->lookahead == '_') {
          result += lexer->lookahead;
          advance(lexer);
          while (iswalnum(lexer->lookahead) || lexer->lookahead == '_') {
            result += lexer->lookahead;
            advance(lexer);
          }
        }
        break;
    }

    return result;
  }

  bool scan_heredoc_content(TSLexer *lexer) {
    Heredoc heredoc = open_heredocs.front();
    size_t position_in_word = 0;
    bool look_for_heredoc_end = true;
    bool has_content = false;

    for (;;) {
      if (position_in_word == heredoc.word.size()) {
        if (!has_content) lexer->mark_end(lexer);
        while (lexer->lookahead == ' ' ||
               lexer->lookahead == '\t') advance(lexer);
        if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
          if (has_content) {
            lexer->result_symbol = HEREDOC_CONTENT;
          } else {
            open_heredocs.erase(open_heredocs.begin());
            lexer->result_symbol = HEREDOC_BODY_END;
          }
          return true;
        } else {
          has_content = true;
          position_in_word = 0;
        }
      }

      if (lexer->eof(lexer)) {
        lexer->mark_end(lexer);
        if (has_content) {
          lexer->result_symbol = HEREDOC_CONTENT;
        } else {
          open_heredocs.erase(open_heredocs.begin());
          lexer->result_symbol = HEREDOC_BODY_END;
        }
        return true;
      }

      if (lexer->lookahead == heredoc.word[position_in_word] && look_for_heredoc_end) {
        advance(lexer);
        position_in_word++;
      } else {
        position_in_word = 0;
        look_for_heredoc_end = false;

        if (lexer->lookahead == '\\') {
          if (has_content) {
            lexer->result_symbol = HEREDOC_CONTENT;
            return true;
          } else {
            return false;
          }
        }

        if (lexer->lookahead == '#') {
          advance(lexer);
          if (lexer->lookahead == '{') {
            advance(lexer);
            if (has_content) {
              lexer->result_symbol = HEREDOC_CONTENT;
              return true;
            } else {
              return false;
            }
          }
          lexer->mark_end(lexer);
        } else if (lexer->lookahead == '\r' || lexer->lookahead == '\n') {
          if (lexer->lookahead == '\r') {
            advance(lexer);
            if (lexer->lookahead == '\n') {
              advance(lexer);
            }
          } else {
            advance(lexer);
          }
          has_content = true;
          look_for_heredoc_end = true;
          while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            advance(lexer);
            if (!heredoc.end_word_indentation_allowed) look_for_heredoc_end = false;
          }
          lexer->mark_end(lexer);
        } else {
          has_content = true;
          advance(lexer);
          lexer->mark_end(lexer);
        }
      }
    }
  }

  bool scan_literal_content(TSLexer *lexer) {
    Literal &literal = literal_stack.back();
    bool has_content = false;
    bool stop_on_space = literal.type == SYMBOL_ARRAY_START || literal.type == STRING_ARRAY_START;

    for (;;) {
      if (stop_on_space && iswspace(lexer->lookahead)) {
        if (has_content) {
          lexer->mark_end(lexer);
          lexer->result_symbol = STRING_CONTENT;
          return true;
        } else {
          return false;
        }
      } else if (lexer->lookahead == literal.close_delimiter) {
        lexer->mark_end(lexer);
        if (literal.nesting_depth == 1) {
          if (has_content) {
            lexer->result_symbol = STRING_CONTENT;
          } else {
            advance(lexer);
            if (literal.type == REGEX_START) {
              while (iswlower(lexer->lookahead)) advance(lexer);
            }
            literal_stack.pop_back();
            lexer->result_symbol = STRING_END;
            lexer->mark_end(lexer);
          }
          return true;
        } else {
          literal.nesting_depth--;
          advance(lexer);
        }
      } else if (lexer->lookahead == literal.open_delimiter) {
        literal.nesting_depth++;
        advance(lexer);
      } else if (literal.allows_interpolation && lexer->lookahead == '#') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            advance(lexer);
            lexer->result_symbol = STRING_CONTENT;
            return true;
          } else {
            return false;
          }
        }
      } else if (lexer->lookahead == '\\') {
        if (literal.allows_interpolation) {
          if (has_content) {
            lexer->mark_end(lexer);
            lexer->result_symbol = STRING_CONTENT;
            return true;
          } else {
            return false;
          }
        } else {
          advance(lexer);
          advance(lexer);
        }
      } else if (lexer->eof(lexer)) {
        advance(lexer);
        lexer->mark_end(lexer);
        return false;
      } else {
        advance(lexer);
      }

      has_content = true;
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    has_leading_whitespace = false;

    // Contents of literals, which match any character except for some close delimiter
    if (!valid_symbols[STRING_START]) {
      if (
        (valid_symbols[STRING_CONTENT] || valid_symbols[STRING_END]) &&
        !literal_stack.empty()
      ) return scan_literal_content(lexer);
      if (
        (valid_symbols[HEREDOC_CONTENT] || valid_symbols[HEREDOC_BODY_END]) &&
        !open_heredocs.empty()
      ) return scan_heredoc_content(lexer);
    }

    // Whitespace
    lexer->result_symbol = NONE;
    if (!scan_whitespace(lexer, valid_symbols)) return false;
    if (lexer->result_symbol != NONE) return true;

    switch (lexer->lookahead) {
      case '&':
        if (valid_symbols[BLOCK_AMPERSAND]) {
          advance(lexer);
          if (lexer->lookahead != '&' &&
              lexer->lookahead != '.' &&
              lexer->lookahead != '=' &&
              !iswspace(lexer->lookahead)) {
            lexer->result_symbol = BLOCK_AMPERSAND;
            return true;
          } else {
            return false;
          }
        }
        break;

      case '<':
        if (valid_symbols[SINGLETON_CLASS_LEFT_ANGLE_LEFT_ANGLE]) {
          advance(lexer);
          if (lexer->lookahead == '<') {
            advance(lexer);
            lexer->result_symbol = SINGLETON_CLASS_LEFT_ANGLE_LEFT_ANGLE;
            return true;
          } else {
            return false;
          }
        }
        break;

      case '*':
        if (valid_symbols[SPLAT_STAR] || valid_symbols[BINARY_STAR] ||
            valid_symbols[HASH_SPLAT_STAR_STAR] || valid_symbols[BINARY_STAR_STAR]) {
          advance(lexer);
          if (lexer->lookahead == '=') return false;
          if (lexer->lookahead == '*') {
            if (valid_symbols[HASH_SPLAT_STAR_STAR] || valid_symbols[BINARY_STAR_STAR]) {
              advance(lexer);
              if (lexer->lookahead == '=') return false;
              if (valid_symbols[HASH_SPLAT_STAR_STAR] && !iswspace(lexer->lookahead)) {
                lexer->result_symbol = HASH_SPLAT_STAR_STAR;
                return true;
              } else if (valid_symbols[BINARY_STAR_STAR]) {
                lexer->result_symbol = BINARY_STAR_STAR;
                return true;
              } else if (valid_symbols[HASH_SPLAT_STAR_STAR]) {
                lexer->result_symbol = HASH_SPLAT_STAR_STAR;
                return true;
              } else  {
                return false;
              }
            } else {
              return false;
            }
          } else {
            if (valid_symbols[SPLAT_STAR] && !iswspace(lexer->lookahead)) {
              lexer->result_symbol = SPLAT_STAR;
              return true;
            } else if (valid_symbols[BINARY_STAR]) {
              lexer->result_symbol = BINARY_STAR;
              return true;
            } else if (valid_symbols[SPLAT_STAR]) {
              lexer->result_symbol = SPLAT_STAR;
              return true;
            } else {
              return false;
            }
          }
        }
        break;

      case '-':
        if (valid_symbols[UNARY_MINUS] || valid_symbols[BINARY_MINUS]) {
          advance(lexer);
          if (lexer->lookahead != '=' && lexer->lookahead != '>') {
            if (valid_symbols[UNARY_MINUS] && has_leading_whitespace && !iswspace(lexer->lookahead)) {
              lexer->result_symbol = UNARY_MINUS;
            } else if (valid_symbols[BINARY_MINUS]) {
              lexer->result_symbol = BINARY_MINUS;
            } else {
              lexer->result_symbol = UNARY_MINUS;
            }
            return true;
          } else {
            return false;
          }
        }
        break;

      case ':':
        if (valid_symbols[SYMBOL_START]) {
          Literal literal;
          literal.type = SYMBOL_START;
          literal.nesting_depth = 1;
          advance(lexer);

          switch (lexer->lookahead) {
            case '"':
              advance(lexer);
              literal.open_delimiter = '"';
              literal.close_delimiter = '"';
              literal.allows_interpolation = true;
              literal_stack.push_back(literal);
              lexer->result_symbol = SYMBOL_START;
              return true;

            case '\'':
              advance(lexer);
              literal.open_delimiter = '\'';
              literal.close_delimiter = '\'';
              literal.allows_interpolation = false;
              literal_stack.push_back(literal);
              lexer->result_symbol = SYMBOL_START;
              return true;

            default:
              if (scan_symbol_identifier(lexer)) {
                lexer->result_symbol = SIMPLE_SYMBOL;
                return true;
              }
          }

          return false;
        }
        break;

      case '[':
        // Treat a square bracket as an element reference if either:
        // * the bracket is not preceded by any whitespace
        // * an arbitrary expression is not valid at the current position.
        if (valid_symbols[ELEMENT_REFERENCE_BRACKET] && (
          !has_leading_whitespace ||
          !valid_symbols[STRING_START]
        )) {
          advance(lexer);
          lexer->result_symbol = ELEMENT_REFERENCE_BRACKET;
          return true;
        }
        break;

      default:
        break;
    }

    // Open delimiters for literals
    if (valid_symbols[HASH_KEY_SYMBOL]
        && (iswalpha(lexer->lookahead) || lexer->lookahead == '_')) {
      while (iswalnum(lexer->lookahead) || lexer->lookahead == '_') {
        advance(lexer);
      }
      lexer->mark_end(lexer);

      if (lexer->lookahead == ':') {
        advance(lexer);
        if (lexer->lookahead != ':') {
          lexer->result_symbol = HASH_KEY_SYMBOL;
          return true;
        }
      }

      return false;
    }

    // Open delimiters for literals
    if (valid_symbols[STRING_START]) {
      Literal literal;
      literal.nesting_depth = 1;

      if (lexer->lookahead == '<') {
        advance(lexer);
        if (lexer->lookahead != '<') return false;
        advance(lexer);

        Heredoc heredoc;
        if (lexer->lookahead == '-' || lexer->lookahead == '~') {
          advance(lexer);
          heredoc.end_word_indentation_allowed = true;
        }

        heredoc.word = scan_heredoc_word(lexer);
        if (heredoc.word.empty()) return false;
        open_heredocs.push_back(heredoc);
        lexer->result_symbol = HEREDOC_START;
        return true;
      }

      if (scan_open_delimiter(lexer, literal, valid_symbols)) {
        literal_stack.push_back(literal);
        lexer->result_symbol = literal.type;
        return true;
      } else {
        return false;
      }
    }

    return false;
  }

  bool has_leading_whitespace;
  vector<Literal> literal_stack;
  vector<Heredoc> open_heredocs;
};

}

extern "C" {

void *tree_sitter_ruby_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_ruby_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_ruby_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_ruby_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_ruby_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
