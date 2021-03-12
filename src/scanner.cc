#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>
#include <iostream>

namespace {

using std::vector;
using std::string;

enum TokenType {
  LINE_BREAK,

  HEREDOC_START,
  HEREDOC_CONTENT,
  HEREDOC_END,

  SIGIL_START,
  SIGIL_CONTENT,
  SIGIL_END,

  STRING_START,
  STRING_CONTENT,
  STRING_END,

  IDENTIFIER,
  KEYWORD_LITERAL,

  ATOM_LITERAL,
  ATOM_START,
  ATOM_CONTENT,
  ATOM_END

};

enum StackItemType {
  HEREDOC,
  SIGIL,
  STRING,
  ATOM
};

struct StackItem {
  StackItemType type;

  // heredoc | string | atom
  bool single_quote;

  // sigil
  int32_t terminator;
  bool heredoc;
  bool allows_interpolation;
};

const char SIGIL_CHARS[] = {
  '/', '<', '"', '\'', '[', '(', '{', '|'
};

const char LINE_BREAK_OPERATORS[] = {
  '#', '.', ':', '|', '!', '=', '<', '>', '+', '-', '*', '/', '\\', ',', 'w', 'a', 'o', 'i',
};

const char SYMBOL_OPERATORS[] = {
  '@', '.', '+', '-', '!', '^', '-', '*', '/', '<', '>', '|', '~', '=', '&', ':', '\\', '%', '{'
};

const string RESERVERD[] = {
  "true", "false", "nil", "when", "and", "or", "not", "in", "fn", "do",
  "end", "catch", "rescue", "after", "else"
};

struct Scanner {
  void reset() {
    stack.clear();
  }

  bool is_reserved(string *token) {
    for (unsigned int i = 0; i < sizeof(RESERVERD)/sizeof(RESERVERD[0]); i++) {
      if (*token == RESERVERD[i]) {
        return true;
      }
    }
    return false;
  }

  bool is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\v';
  }

  bool is_newline(char c) {
    return c == '\n' || c == '\f' || c == '\r';
  }

  bool is_quote_char(char c) {
    return c == '"' || c == '\'';
  }

  bool is_digit_char(char c) {
    return c >= '0' && c <= '9';
  }

  bool is_upcase_char(char c) {
    return c >= 'A' && c <= 'Z';
  }

  bool is_downcase_char(char c) {
    return c >= 'a' && c <= 'z';
  }

  bool is_alpha_char(char c) {
    return is_upcase_char(c) || is_downcase_char(c);
  }

  bool is_identifier_start(char c) {
    return is_downcase_char(c) || c == '_';
  }

  bool is_keyword_start(char c) {
    return is_alpha_char(c) || c == '_';
  }

  bool is_identifier_body(char c) {
    return is_alpha_char(c) || is_digit_char(c) || c == '_';
  }

  bool is_atom_start(char c) {
    return is_alpha_char(c) || c == '_';
  }

  bool is_atom_body(char c) {
    return is_alpha_char(c) || is_digit_char(c) || c == '_' || c == '@';
  }

  bool is_sigil_char(char c) {
    return memchr(&SIGIL_CHARS, c, sizeof(SIGIL_CHARS)) != NULL;
  }

  bool is_token_end(char c) {
    return !is_identifier_body(c) && c != '?' && c != '!';
  }


  char sigil_terminator(char c) {
    switch (c) {
    case '(': return ')';
    case '[': return ']';
    case '{': return '}';
    case '<': return '>';
    default: return c;
    }
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    unsigned i = 0;

    if (stack.size() * 5 + 1>= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    buffer[i++] = stack.size();
    for (
      vector<StackItem>::iterator iter = stack.begin(),
      end = stack.end();
      iter != end;
      ++iter
    ) {
      buffer[i++] = iter->type;
      buffer[i++] = iter->single_quote;
      buffer[i++] = iter->terminator;
      buffer[i++] = iter->heredoc;
      buffer[i++] = iter->allows_interpolation;
    }
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    unsigned i = 0;
    stack.clear();

    if (length == 0) return;

    uint8_t size = buffer[i++];
    for (unsigned j = 0; j < size; j++) {
      StackItem stack_item;
      stack_item.type = static_cast<StackItemType>(buffer[i++]);
      stack_item.single_quote = buffer[i++];
      stack_item.terminator = buffer[i++];
      stack_item.heredoc = buffer[i++];
      stack_item.allows_interpolation = buffer[i++];
      stack.push_back(stack_item);
    }
  }

  bool advance_to_sigil_operator_end(TSLexer *lexer) {
    lexer->mark_end(lexer);
    if (lexer->lookahead == '~') {
      advance(lexer);
      if (lexer->lookahead != '~') return false;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    } else if (lexer->lookahead == '>') {
      advance(lexer);
      if (lexer->lookahead == '>') {
        advance(lexer);
      }
      lexer->mark_end(lexer);
      return true;
    }
    return false;
  }

  bool advance_to_operator_end(TSLexer *lexer) {
    switch(lexer->lookahead) {
    case '~':
      advance(lexer);
      return advance_to_sigil_operator_end(lexer);
    case '=':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead == '=') {
        advance(lexer);
        lexer->mark_end(lexer);
        if (lexer->lookahead != '=') return true;
        advance(lexer);
        lexer->mark_end(lexer);
      } else if (lexer->lookahead == '~') {
        advance(lexer);
        lexer->mark_end(lexer);
      } else if (lexer->lookahead == '>') {
        advance(lexer);
        lexer->mark_end(lexer);
      }
      return true;
    case '+':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead != '+') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead != '+') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case '-':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead == '>') {
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }
      if (lexer->lookahead != '-') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead != '-') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case '&':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead != '&') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead != '&') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case '|':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead == '>') {
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }

      if (lexer->lookahead != '|') return true;
      advance(lexer);
      lexer->mark_end(lexer);

      if (lexer->lookahead != '|') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case '.':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead != '.') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead != '.') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case ':':
      advance(lexer);
      if (lexer->lookahead != ':') return false;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case '{':
      advance(lexer);
      if (lexer->lookahead != '}') return false;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case '^':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead != '^') return true;
      advance(lexer);
      if (lexer->lookahead != '^') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case '>':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead == '=') {
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }
      if (lexer->lookahead != '>') return true;
      advance(lexer);
      if (lexer->lookahead != '>') return true;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    case '<':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead == '=' ||
          lexer->lookahead == '-' ||
          lexer->lookahead == '>') {
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      } else if (lexer->lookahead == '|') {
        advance(lexer);
        if (lexer->lookahead == '>') {
          advance(lexer);
          lexer->mark_end(lexer);
        }
        return true;
      } else if (lexer->lookahead == '~') {
        advance(lexer);
        lexer->mark_end(lexer);
        if (lexer->lookahead == '>') {
          advance(lexer);
          lexer->mark_end(lexer);
        }
        return true;
      } else if (lexer->lookahead == '<') {
        advance(lexer);
        if (lexer->lookahead == '<' ||
            lexer->lookahead == '~') {
          advance(lexer);
          lexer->mark_end(lexer);
        }
        if (lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            lexer->mark_end(lexer);
          }
        }
        return true;
      }
      return true;
    case '!':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead == '=') {
        advance(lexer);
        lexer->mark_end(lexer);
        if (lexer->lookahead == '=') {
          advance(lexer);
          lexer->mark_end(lexer);
        }
      }
      return true;
    case '\\':
      advance(lexer);
      if (lexer->lookahead != '\\') return false;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;

    case '%':
      advance(lexer);
      lexer->mark_end(lexer);
      if (lexer->lookahead == '{') {
        advance(lexer);
        if (lexer->lookahead == '}') {
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        } else {
          return false;
        }
      }
      return true;
    default:
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    }
  }

  bool scan_atom(TSLexer *lexer, const bool *valid_symbols) {
    advance(lexer);
    if (valid_symbols[ATOM_LITERAL] &&
        memchr(&SYMBOL_OPERATORS, lexer->lookahead, sizeof(SYMBOL_OPERATORS)) != NULL) {
      if (advance_to_operator_end(lexer)) {
        lexer->result_symbol = ATOM_LITERAL;
        return true;
      }

      return false;
    }

    if (valid_symbols[ATOM_START] && is_quote_char(lexer->lookahead)) {
      StackItem stack_item;
      stack_item.single_quote = false;

      int32_t quote = '"';
      if (lexer->lookahead == '\'') {
        stack_item.single_quote = true;
        quote = '\'';
      }

      advance(lexer);
      lexer->result_symbol = ATOM_START;
      stack_item.type = ATOM;
      stack.push_back(stack_item);
      return true;
    }

    if (!valid_symbols[ATOM_LITERAL] || !is_atom_start(lexer->lookahead)) return false;

    for (;;) {
      advance(lexer);
      if (!is_atom_body(lexer->lookahead)) {
        if (lexer->lookahead == '?' ||
            lexer->lookahead == '!') {
          advance(lexer);
        }

        lexer->result_symbol = ATOM_LITERAL;
        return true;
      }
    }
  }

  bool scan_atom_content_or_end(TSLexer *lexer) {
    bool has_content = false;
    int32_t quote = '"';
    if (stack.back().single_quote) {
      quote = '\'';
    }

    for(;;) {
      if (lexer->lookahead == '#') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            lexer->result_symbol = ATOM_CONTENT;
            return true;
          } else {
            return false;
          }
        }
      } else if (lexer->lookahead == '\\') {
        lexer->mark_end(lexer);
        if (has_content) {
          lexer->result_symbol = ATOM_CONTENT;
          return true;
        } else {
          return false;
        }
      } else if (lexer->lookahead == quote) {
        if (has_content) {
          lexer->mark_end(lexer);
          lexer->result_symbol = ATOM_CONTENT;
        } else {
          advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = ATOM_END;
          stack.pop_back();
        }
        return true;
      } else if (lexer->lookahead == 0) {
        lexer->mark_end(lexer);
        return false;
      } else {
        has_content = true;
        advance(lexer);
      }
    }
  }

  bool scan_keyword_operator(TSLexer *lexer) {
    if (advance_to_operator_end(lexer)) {
      if (lexer->lookahead == ':') {
        advance(lexer);
        if (is_newline(lexer->lookahead) ||
            is_whitespace(lexer->lookahead)) {
          lexer->mark_end(lexer);
          lexer->result_symbol = KEYWORD_LITERAL;
          return true;
        }
      }
    }
    return false;
  }

  bool scan_sigil_keyword_operator(TSLexer *lexer) {
    if (advance_to_sigil_operator_end(lexer)) {
      if (lexer->lookahead == ':') {
        advance(lexer);
        if (is_newline(lexer->lookahead) ||
            is_whitespace(lexer->lookahead)) {
          lexer->mark_end(lexer);
          lexer->result_symbol = KEYWORD_LITERAL;
          return true;
        }
      }
    }
    return false;
  }

  bool scan_identifier_or_keyword(TSLexer *lexer) {
    std::string *token= new std::string("");
    bool reserved = false;
    bool is_identifier = is_identifier_start(lexer->lookahead);

    lexer->mark_end(lexer);
    for (;;) {
      token->push_back(lexer->lookahead);
      advance(lexer);

      if (lexer->lookahead == '?' ||
          lexer->lookahead == '!') {
        advance(lexer);
        lexer->mark_end(lexer);

        if (lexer->lookahead == ':') {
          advance(lexer);
          if (is_newline(lexer->lookahead) ||
              is_whitespace(lexer->lookahead)) {
            lexer->mark_end(lexer);
            lexer->result_symbol = KEYWORD_LITERAL;
            delete token;
            return true;
          }
        }

        lexer->result_symbol = IDENTIFIER;
        delete token;
        return is_identifier;

      } else if (lexer->lookahead == ':') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (is_newline(lexer->lookahead) ||
            is_whitespace(lexer->lookahead)) {
          lexer->mark_end(lexer);
          lexer->result_symbol = KEYWORD_LITERAL;
          delete token;
          return true;
        } else {
          lexer->result_symbol = IDENTIFIER;
          delete token;
          return is_identifier;
        }
      } else if (!is_identifier_body(lexer->lookahead)) {

          reserved = is_reserved(token);
          delete token;

          if (!reserved) {
            lexer->mark_end(lexer);
            lexer->result_symbol = IDENTIFIER;
          }
          return is_identifier && !reserved;
      }
    }
  }

  bool is_operator_next(TSLexer *lexer) {
    if (memchr(&LINE_BREAK_OPERATORS, lexer->lookahead, sizeof(LINE_BREAK_OPERATORS)) != NULL) {
      switch(lexer->lookahead) {
      case ':':
        advance(lexer);
        return lexer->lookahead == ':';
      case '<':
        advance(lexer);
        return lexer->lookahead != '<';
      case '^':
        advance(lexer);
        if (lexer->lookahead != '^') return false;
        advance(lexer);
        return lexer->lookahead != '^';
      case '!':
        advance(lexer);
        return lexer->lookahead == '=';
      case '~':
        advance(lexer);
        return lexer->lookahead != '>';
      case '\\':
        advance(lexer);
        return lexer->lookahead != '\\';
      case 'w':
        advance(lexer);
        if (lexer->lookahead != 'h') return false;
        advance(lexer);
        if (lexer->lookahead != 'e') return false;
        advance(lexer);
        if (lexer->lookahead != 'n') return false;
        advance(lexer);
        return is_token_end(lexer->lookahead);
      case 'a':
        advance(lexer);
        if (lexer->lookahead != 'n') return false;
        advance(lexer);
        if (lexer->lookahead != 'd') return false;
        advance(lexer);
        return is_token_end(lexer->lookahead);
      case 'o':
        advance(lexer);
        if (lexer->lookahead != 'r') return false;
        advance(lexer);
        return is_token_end(lexer->lookahead);
      case 'i':
        advance(lexer);
        if (lexer->lookahead != 'n') return false;
        advance(lexer);
        return is_token_end(lexer->lookahead);
      default:
        return true;
      }

    }
    return false;
  }

  bool scan_sigil_start(TSLexer *lexer) {
    bool allows_interpolation = false;
    StackItem stack_item;
    stack_item.type = SIGIL;
    stack_item.heredoc = false;

    if (lexer->lookahead != '~') return false;
    advance(lexer);

    if (!(is_upcase_char(lexer->lookahead) || is_downcase_char(lexer->lookahead))) {
      return scan_sigil_keyword_operator(lexer);
    }
    stack_item.allows_interpolation = is_downcase_char(lexer->lookahead);
    advance(lexer);

    if (is_sigil_char(lexer->lookahead)) {
      stack_item.terminator = sigil_terminator(lexer->lookahead);
      bool is_quote = is_quote_char(lexer->lookahead);
      int32_t quote = lexer->lookahead;
      advance(lexer);
      lexer->mark_end(lexer);
      if (is_quote && lexer->lookahead == quote) {
        advance(lexer);
        if (lexer->lookahead == quote) {
          advance(lexer);
          lexer->mark_end(lexer);
          stack_item.heredoc = true;
        }
      }
      lexer->result_symbol = SIGIL_START;
      stack.push_back(stack_item);
      return true;
    }
    return false;
  }

  bool scan_sigil_content_or_end(TSLexer *lexer) {
    bool has_content = false;
    int quotes = 0;
    StackItem stack_item = stack.back();

    for(;;) {
      if (stack_item.allows_interpolation && lexer->lookahead == '#') {
        quotes = 0;
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            lexer->result_symbol = SIGIL_CONTENT;
            return true;
          } else {
            return false;
          }
        }
      } else if (stack_item.allows_interpolation && lexer->lookahead == '\\') {
        lexer->mark_end(lexer);
        if (has_content) {
          lexer->result_symbol = SIGIL_CONTENT;
          return true;
        } else {
          return false;
        }
      } else if (!stack_item.heredoc && lexer->lookahead == stack_item.terminator) {
        if (has_content) {
          lexer->mark_end(lexer);
          lexer->result_symbol = SIGIL_CONTENT;
        } else {
          advance(lexer);
          while (is_upcase_char(lexer->lookahead) || is_downcase_char(lexer->lookahead)) advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = SIGIL_END;
          stack.pop_back();
        }
        return true;
      } else if (stack_item.heredoc && lexer->lookahead == stack_item.terminator) {
        if (quotes == 0) {
          lexer->mark_end(lexer);
        }
        quotes++;

        if (quotes == 3) {
          if (has_content) {
            lexer->result_symbol = SIGIL_CONTENT;
          } else {
            advance(lexer);
            lexer->mark_end(lexer);
            lexer->result_symbol = SIGIL_END;
            stack.pop_back();
          }
          return true;
        } else {
          advance(lexer);
        }
      } else if (lexer->lookahead == 0) {
        lexer->mark_end(lexer);
        return false;
      } else {
        has_content = true;
        quotes = 0;
        advance(lexer);
      }
    }
  }

  bool scan_heredoc_or_string_start(TSLexer *lexer, const bool *valid_symbols) {
    StackItem stack_item;
    stack_item.single_quote = false;

    int32_t quote = '"';
    if (lexer->lookahead == '\'') {
      stack_item.single_quote = true;
      quote = '\'';
    }

    advance(lexer);
    lexer->mark_end(lexer);

    if (!valid_symbols[HEREDOC_START]) {
      lexer->result_symbol = STRING_START;
      stack_item.type = STRING;
      stack.push_back(stack_item);
      return true;
    }

    if (lexer->lookahead != quote) {
      if (!valid_symbols[STRING_START]) return false;

      lexer->result_symbol = STRING_START;
      stack_item.type = STRING;
      stack.push_back(stack_item);
      return true;
    }
    advance(lexer);

    if (lexer->lookahead != quote) {
      if (!valid_symbols[STRING_START]) return false;

      lexer->result_symbol = STRING_START;
      stack_item.type = STRING;
      stack.push_back(stack_item);
      return true;
    }
    advance(lexer);

    lexer->mark_end(lexer);
    lexer->result_symbol = HEREDOC_START;
    stack_item.type = HEREDOC;
    stack.push_back(stack_item);
    return true;
  }

  bool scan_heredoc_content_or_end(TSLexer *lexer) {
    bool has_content = false;
    int quotes = 0;
    int32_t quote = '"';
    if (stack.back().single_quote) {
      quote = '\'';
    }

    for(;;) {
      if (lexer->lookahead == '#') {
        quotes = 0;
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            lexer->result_symbol = HEREDOC_CONTENT;
            return true;
          } else {
            return false;
          }
        }
      } else if (lexer->lookahead == '\\') {
        lexer->mark_end(lexer);
        if (has_content) {
          lexer->result_symbol = HEREDOC_CONTENT;
          return true;
        } else {
          return false;
        }
      } else if (lexer->lookahead == quote) {
        if (quotes == 0) {
          lexer->mark_end(lexer);
        }
        quotes++;

        if (quotes == 3) {
          if (has_content) {
            lexer->result_symbol = HEREDOC_CONTENT;
          } else {
            advance(lexer);
            lexer->mark_end(lexer);
            lexer->result_symbol = HEREDOC_END;
            stack.pop_back();
          }
          return true;
        } else {
          advance(lexer);
        }
      } else if (lexer->lookahead == 0) {
        lexer->mark_end(lexer);
        return false;
      } else {
        has_content = true;
        quotes = 0;
        advance(lexer);
      }
    }
  }

  bool scan_string_content_or_end(TSLexer *lexer) {
    bool has_content = false;
    int32_t quote = '"';
    if (stack.back().single_quote) {
      quote = '\'';
    }

    for(;;) {
      if (lexer->lookahead == '#') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            lexer->result_symbol = STRING_CONTENT;
            return true;
          } else {
            return false;
          }
        }
      } else if (lexer->lookahead == '\\') {
        lexer->mark_end(lexer);
        if (has_content) {
          lexer->result_symbol = STRING_CONTENT;
          return true;
        } else {
          return false;
        }
      } else if (lexer->lookahead == quote) {
        if (has_content) {
          lexer->mark_end(lexer);
          lexer->result_symbol = STRING_CONTENT;
        } else {
          advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = STRING_END;
          stack.pop_back();
        }
        return true;
      } else if (lexer->lookahead == 0) {
        lexer->mark_end(lexer);
        return false;
      } else {
        has_content = true;
        advance(lexer);
      }
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[HEREDOC_START] ||
        valid_symbols[STRING_START] ||
        valid_symbols[SIGIL_START] ||
        valid_symbols[LINE_BREAK]) {
      while (is_whitespace(lexer->lookahead)) skip(lexer);
    }

    if ((valid_symbols[LINE_BREAK]) &&
        is_newline(lexer->lookahead)) {
      skip(lexer);
      while (is_whitespace(lexer->lookahead) || is_newline(lexer->lookahead)) skip(lexer);
      lexer->mark_end(lexer);
      if (is_operator_next(lexer)) {
        return false;
      } else {
        lexer->result_symbol = LINE_BREAK;
        return true;
      }
    }

    if ((valid_symbols[ATOM_LITERAL] || valid_symbols[ATOM_START]) &&
        lexer->lookahead == ':') {
      return scan_atom(lexer, valid_symbols);
    }

    if ((valid_symbols[IDENTIFIER] || valid_symbols[KEYWORD_LITERAL]) &&
        (is_identifier_start(lexer->lookahead) ||
         is_keyword_start(lexer->lookahead))) {
      return scan_identifier_or_keyword(lexer);
    }

    if ((valid_symbols[HEREDOC_START] ||
         valid_symbols[STRING_START]) &&
        is_quote_char(lexer->lookahead)) {
      return scan_heredoc_or_string_start(lexer, valid_symbols);
    }

    if (!stack.empty() &&
        stack.back().type == HEREDOC &&
        (valid_symbols[HEREDOC_CONTENT] || valid_symbols[HEREDOC_END])) {
      return scan_heredoc_content_or_end(lexer);
    }

    if (!stack.empty() &&
        stack.back().type == STRING &&
        (valid_symbols[STRING_CONTENT] || valid_symbols[STRING_END])) {
      return scan_string_content_or_end(lexer);
    }

    if (!stack.empty() &&
        stack.back().type == ATOM &&
        (valid_symbols[ATOM_CONTENT] || valid_symbols[ATOM_END])) {
      return scan_atom_content_or_end(lexer);
    }

    if (valid_symbols[SIGIL_START] &&
        lexer->lookahead == '~') {
      return scan_sigil_start(lexer);
    }

    if (!stack.empty() &&
        stack.back().type == SIGIL &&
        (valid_symbols[SIGIL_CONTENT] || valid_symbols[SIGIL_END])) {
      return scan_sigil_content_or_end(lexer);
    }

    if (valid_symbols[KEYWORD_LITERAL] &&
        memchr(&SYMBOL_OPERATORS, lexer->lookahead, sizeof(SYMBOL_OPERATORS)) != NULL) {
      return scan_keyword_operator(lexer);
    }

    return false;
  }

  vector<StackItem> stack;
};

}

extern "C" {

void *tree_sitter_elixir_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_elixir_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_elixir_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_elixir_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_elixir_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
