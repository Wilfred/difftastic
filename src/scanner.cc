#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>
#include <iostream>
#include "unicode.h"

namespace {

using std::vector;
using std::string;

enum TokenType {
  LINE_BREAK,
  NON_BREAKING_LINE,

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
  UNUSED_IDENTIFIER,
  SPECIAL_IDENTIFIER,
  KEYWORD_LITERAL,

  ATOM_LITERAL,
  ATOM_START,
  ATOM_CONTENT,
  ATOM_END,

  TRUE,
  FALSE,
  NIL,
  WHEN,
  AND,
  OR,
  NOT,
  IN,
  NOT_IN,
  FN,
  DO,
  END,
  CATCH,
  RESCUE,
  AFTER,
  ELSE

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
  '#', '.', ':', '|', '!', '=', '<', '>', '+', '-', '*', '/', '\\', ',', 'w', 'a', 'o', 'i', 'n', '&', '^', '~'
};

const char SYMBOL_OPERATORS[] = {
  '@', '.', '+', '-', '!', '^', '-', '*', '/', '<', '>', '|', '~', '=', '&', ':', '\\', '%', '{'
};

struct Scanner {
  void reset() {
    stack.clear();
  }

  bool is_whitespace(int32_t c) {
    return c == ' ' || c == '\t' || c == '\v';
  }

  bool is_newline(int32_t c) {
    return c == '\n' || c == '\f' || c == '\r';
  }

  bool is_quote_char(int32_t c) {
    return c == '"' || c == '\'';
  }

  bool is_digit_char(int32_t c) {
    return c >= '0' && c <= '9';
  }

  bool is_upcase_char(int32_t c) {
    return c >= 'A' && c <= 'Z';
  }

  bool is_downcase_char(int32_t c) {
    return c >= 'a' && c <= 'z';
  }

  bool is_alpha_char(int32_t c) {
    return is_upcase_char(c) || is_downcase_char(c);
  }

  bool is_identifier_start(int32_t c) {
    return c == '_' || is_unicode_id_start_without_lu_lt(c);
  }

  bool is_keyword_start(int32_t c) {
    return is_atom_start(c);
  }

  bool is_identifier_body(int32_t c) {
    return is_unicode_id_continue(c);
  }

  bool is_atom_start(int32_t c) {
    return c == '_' || is_unicode_id_start(c);
  }

  bool is_atom_body(int32_t c) {
    return c == '@' || is_unicode_id_continue(c);;
  }

  bool is_sigil_char(int32_t c) {
    return memchr(&SIGIL_CHARS, c, sizeof(SIGIL_CHARS)) != NULL;
  }

  bool is_token_end(int32_t c) {
    return !is_identifier_body(c) && c != '?' && c != '!' && c != ':';
  }

  bool starts_with(std::string s, std::string needle) {
    return s.rfind(needle, 0) == 0;
  }

  bool ends_with(std::string s, std::string needle) {
    return s.length() >= needle.length() &&
      (0 == s.compare(s.length() - needle.length(), needle.length(), needle));
  }

  int32_t sigil_terminator(int32_t c) {
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

  bool is_valid(TSLexer *lexer, const bool *valid_symbols, TokenType token_type, bool mark_end = true) {
    if (valid_symbols[token_type]) {
      lexer->result_symbol = token_type;
      if (mark_end) {
        lexer->mark_end(lexer);
      }
      return true;
    }
    return false;
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

  bool advance_to_in_opeartor_end(TSLexer *lexer) {
    if (!(is_whitespace(lexer->lookahead) || is_newline(lexer->lookahead))) return false;

    while (is_whitespace(lexer->lookahead) || is_newline(lexer->lookahead)) advance(lexer);

    if (lexer->lookahead != 'i') return false;
    advance(lexer);
    if (lexer->lookahead != 'n') return false;
    advance(lexer);

    if (is_token_end(lexer->lookahead)) {
      return true;
    }
    return false;
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
      if (lexer->lookahead == '/') {
        advance(lexer);
        if (lexer->lookahead == '/') {
          advance(lexer);
          lexer->mark_end(lexer);
        }
      } else if (lexer->lookahead == '.') {
        advance(lexer);
        lexer->mark_end(lexer);
      }
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

      if (lexer->lookahead == '\'') {
        stack_item.single_quote = true;
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
        has_content = true;
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

  bool is_valid_identifier(TSLexer *lexer, const bool *valid_symbols, std::string token) {
    if (starts_with(token, std::string("__")) && ends_with(token, std::string("__"))) {
      return is_valid(lexer, valid_symbols, SPECIAL_IDENTIFIER, false);
    }
    if (starts_with(token, std::string("_"))) {
      return is_valid(lexer, valid_symbols, UNUSED_IDENTIFIER, false);
    }
    return is_valid(lexer, valid_symbols, IDENTIFIER, false);
  }

  bool scan_identifier_or_keyword(TSLexer *lexer, const bool *valid_symbols) {
    std::string token= "";

    if (lexer->lookahead == '.') {
      advance(lexer);
      if (lexer->lookahead == ':') {
        advance(lexer);
        if (is_newline(lexer->lookahead) ||
            is_whitespace(lexer->lookahead)) {
          return is_valid(lexer, valid_symbols, KEYWORD_LITERAL);
        }
        return false;
      }
      if (lexer->lookahead != '.') return false;
      advance(lexer);
      if (lexer->lookahead == ':') {
        advance(lexer);
        if (is_newline(lexer->lookahead) ||
            is_whitespace(lexer->lookahead)) {
          return is_valid(lexer, valid_symbols, KEYWORD_LITERAL);
        }
        return false;
      }
      if (lexer->lookahead == '/') {
        advance(lexer);
        if (lexer->lookahead != '/') return false;
        advance(lexer);
        if (lexer->lookahead == ':') {
          advance(lexer);
          if (is_newline(lexer->lookahead) ||
              is_whitespace(lexer->lookahead)) {
            return is_valid(lexer, valid_symbols, KEYWORD_LITERAL);
          }
        }
        return false;
      }

      if (lexer->lookahead != '.') return false;
      advance(lexer);
      lexer->mark_end(lexer);

      if (lexer->lookahead == ':') {
        advance(lexer);
        if (is_newline(lexer->lookahead) ||
            is_whitespace(lexer->lookahead)) {
          return is_valid(lexer, valid_symbols, KEYWORD_LITERAL);
        }
        return false;
      }

      // ...
      return is_valid(lexer, valid_symbols, IDENTIFIER, false);
    }

    bool is_identifier = is_identifier_start(lexer->lookahead);

    lexer->mark_end(lexer);
    for (;;) {
      token.push_back(lexer->lookahead);
      advance(lexer);

      if (lexer->lookahead == '?' ||
          lexer->lookahead == '!') {
        token.push_back(lexer->lookahead);
        advance(lexer);
        lexer->mark_end(lexer);

        if (lexer->lookahead == ':') {
          advance(lexer);
          if (is_newline(lexer->lookahead) ||
              is_whitespace(lexer->lookahead)) {
            return is_valid(lexer, valid_symbols, KEYWORD_LITERAL);
          }
        }

        return is_identifier && is_valid_identifier(lexer, valid_symbols, token);
      } else if (lexer->lookahead == '@') {
        is_identifier = false;
      } else if (lexer->lookahead == ':') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (is_newline(lexer->lookahead) ||
            is_whitespace(lexer->lookahead)) {
          return is_valid(lexer, valid_symbols, KEYWORD_LITERAL);
        } else {
          return is_identifier && is_valid_identifier(lexer, valid_symbols, token);
        }
      } else if (!is_identifier_body(lexer->lookahead)) {
        lexer->mark_end(lexer);
        if (token == std::string("true")) {
          return is_valid(lexer, valid_symbols, TRUE);
        }
        if (token == std::string("false")) {
          return is_valid(lexer, valid_symbols, FALSE);
        }
        if (token == std::string("nil")) {
          return is_valid(lexer, valid_symbols, NIL);
        }
        if (token == std::string("when")) {
          return is_valid(lexer, valid_symbols, WHEN);
        }
        if (token == std::string("and")) {
          return is_valid(lexer, valid_symbols, AND);
        }
        if (token == std::string("or")) {
          return is_valid(lexer, valid_symbols, OR);
        }
        if (token == std::string("not")) {
          if (advance_to_in_opeartor_end(lexer)) {
            return is_valid(lexer, valid_symbols, NOT_IN);
          } else {
            return is_valid(lexer, valid_symbols, NOT, false);
          }
        }
        if (token == std::string("in")) {
          return is_valid(lexer, valid_symbols, IN);
        }
        if (token == std::string("fn")) {
          return is_valid(lexer, valid_symbols, FN);
        }
        if (token == std::string("do")) {
          return is_valid(lexer, valid_symbols, DO);
        }
        if (token == std::string("end")) {
          return is_valid(lexer, valid_symbols, END);
        }
        if (token == std::string("catch")) {
          return is_valid(lexer, valid_symbols, CATCH);
        }
        if (token == std::string("rescue")) {
          return is_valid(lexer, valid_symbols, RESCUE);
        }
        if (token == std::string("after")) {
          return is_valid(lexer, valid_symbols, AFTER);
        }
        if (token == std::string("else")) {
          return is_valid(lexer, valid_symbols, ELSE);
        }

        return is_identifier && is_valid_identifier(lexer, valid_symbols, token);
      }
    }
  }

  bool is_keyword_end(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[KEYWORD_LITERAL] && lexer->lookahead == ':') {
      advance(lexer);
      if (is_newline(lexer->lookahead) ||
          is_whitespace(lexer->lookahead)) {
        return true;
      }
    }
    return false;
  }

  bool is_binary_operator_next(TSLexer *lexer, const bool *valid_symbols, bool *reserved) {
    *reserved = false;
    if (memchr(&LINE_BREAK_OPERATORS, lexer->lookahead, sizeof(LINE_BREAK_OPERATORS)) != NULL) {
      switch(lexer->lookahead) {
      // &&, &&&
      case '&':
        advance(lexer);
        if (lexer->lookahead == '&') {
          advance(lexer);
          if (lexer->lookahead == '&') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          } else if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        }
        return false;
      // =, ==, =~, =>, ===
      case '=':
        advance(lexer);
        if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == '=') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          } else if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        } else if (lexer->lookahead == '~') {
          advance(lexer);
          if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        } else if (lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        } else if (lexer->lookahead == ':') {
          return !is_keyword_end(lexer, valid_symbols);
        }
        return true;
      // ::
      case ':':
        advance(lexer);
        return lexer->lookahead == ':';
      // ++, +++
      case '+':
        advance(lexer);
        if (lexer->lookahead == '+') {
          advance(lexer);
          if (lexer->lookahead == '+') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          } else if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        }
        return false;
      // --, ---
      case '-':
        advance(lexer);
        if (lexer->lookahead == '-') {
          advance(lexer);
          if (lexer->lookahead == '-') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          } else if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        }
        return false;
      // <, <-, <=, <<<, <<~, <~, <~>, <|>, <>
      case '<':
        advance(lexer);
        if (lexer->lookahead == '=' ||
            lexer->lookahead == '-' ||
            lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        } else if (lexer->lookahead == '~') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          } else if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        } else if (lexer->lookahead == '|') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          }
          return false;
        } else if (lexer->lookahead == '<') {
          advance(lexer);
          if (lexer->lookahead == '<' ||
              lexer->lookahead == '~') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          }
          return false;
        } else if (lexer->lookahead == ':') {
          return !is_keyword_end(lexer, valid_symbols);
        }
        return true;
      // >, >=, >>>
      case '>':
        advance(lexer);
        if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        } else if (lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          }
          return false;
        } else if (lexer->lookahead == ':') {
          return !is_keyword_end(lexer, valid_symbols);
        }
        return true;
      // ^^^
      case '^':
        advance(lexer);
        if (lexer->lookahead == '^') {
          advance(lexer);
          if (lexer->lookahead == '^') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          }
          return false;
        }
        return false;
      // !=, !==
      case '!':
        advance(lexer);
        if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == '=') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          } else if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        }
        return false;
      // ~>, ~>>
      case '~':
        advance(lexer);
        if (lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          } else if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        }
        return false;
      // |, ||, |||
      case '|':
        advance(lexer);
        if (lexer->lookahead == '|') {
          advance(lexer);
          if (lexer->lookahead == '|') {
            advance(lexer);
            if (lexer->lookahead == ':') {
              return !is_keyword_end(lexer, valid_symbols);
            }
            return true;
          } else if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        } else if (lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          }
          return true;
        } else if (lexer->lookahead == ':') {
          return !is_keyword_end(lexer, valid_symbols);
        }
        return true;
      // *, /
      case '*':
      case '/':
        advance(lexer);
        if (lexer->lookahead == ':') {
          return !is_keyword_end(lexer, valid_symbols);
        }
        return true;
      // ., ..
      case '.':
        advance(lexer);
        if (lexer->lookahead == '.') {
          advance(lexer);
          if (lexer->lookahead == ':') {
            return !is_keyword_end(lexer, valid_symbols);
          } else if (lexer->lookahead == '.') {
            return false;
          }
          return true;
        }
        return true;
      case '\\':
        advance(lexer);
        return lexer->lookahead == '\\';
      // when
      case 'w':
        advance(lexer);
        if (lexer->lookahead != 'h') return false;
        advance(lexer);
        if (lexer->lookahead != 'e') return false;
        advance(lexer);
        if (lexer->lookahead != 'n') return false;
        advance(lexer);
        if (is_token_end(lexer->lookahead)) {
          *reserved = is_valid(lexer, valid_symbols, WHEN);
          return *reserved;
        }
        return false;
      // and
      case 'a':
        advance(lexer);
        if (lexer->lookahead != 'n') return false;
        advance(lexer);
        if (lexer->lookahead != 'd') return false;
        advance(lexer);
        if (is_token_end(lexer->lookahead)) {
          *reserved = is_valid(lexer, valid_symbols, AND);
          return *reserved;
        }
        return false;
      // or
      case 'o':
        advance(lexer);
        if (lexer->lookahead != 'r') return false;
        advance(lexer);
        if (is_token_end(lexer->lookahead)) {
          *reserved = is_valid(lexer, valid_symbols, OR);
          return *reserved;
        }
        return false;
      // in
      case 'i':
        advance(lexer);
        if (lexer->lookahead != 'n') return false;
        advance(lexer);
        if (is_token_end(lexer->lookahead)) {
          *reserved = is_valid(lexer, valid_symbols, IN);
          return *reserved;
        }
        return false;
      // not in
      case 'n':
        advance(lexer);
        if (lexer->lookahead != 'o') return false;
        advance(lexer);
        if (lexer->lookahead != 't') return false;
        advance(lexer);
        if (advance_to_in_opeartor_end(lexer)) {
          *reserved = is_token_end(lexer->lookahead) && is_valid(lexer, valid_symbols, NOT_IN);
          return *reserved;
        }
        return false;
      default:
        return true;
      }

    }
    return false;
  }

  bool scan_sigil_start(TSLexer *lexer) {
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
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content || quotes > 0) {
            lexer->result_symbol = SIGIL_CONTENT;
            return true;
          } else {
            return false;
          }
        }
        quotes = 0;
        has_content = true;
      } else if (lexer->lookahead == '\\') {
        lexer->mark_end(lexer);

        if (stack_item.allows_interpolation) {
          if (has_content || quotes > 0) {
            lexer->result_symbol = SIGIL_CONTENT;
            return true;
          } else {
            return false;
          }
        } else {
          advance(lexer);
          if (!stack_item.heredoc && lexer->lookahead == stack_item.terminator) {
            if (has_content || quotes > 0) {
              lexer->result_symbol = SIGIL_CONTENT;
              return true;
            } else {
              return false;
            }
          }
          quotes = 0;
          has_content = true;
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
            while (is_upcase_char(lexer->lookahead) || is_downcase_char(lexer->lookahead)) advance(lexer);
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
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content || quotes > 0) {
            lexer->result_symbol = HEREDOC_CONTENT;
            return true;
          } else {
            return false;
          }
        }
        quotes = 0;
        has_content = true;
      } else if (lexer->lookahead == '\\') {
        lexer->mark_end(lexer);
        if (has_content || quotes > 0) {
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
        has_content = true;
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
        valid_symbols[KEYWORD_LITERAL] ||
        valid_symbols[IDENTIFIER] ||
        valid_symbols[UNUSED_IDENTIFIER] ||
        valid_symbols[SPECIAL_IDENTIFIER] ||
        valid_symbols[ATOM_LITERAL] ||
        valid_symbols[ATOM_START] ||
        valid_symbols[LINE_BREAK] ||
        valid_symbols[TRUE] ||
        valid_symbols[FALSE] ||
        valid_symbols[NIL] ||
        valid_symbols[WHEN] ||
        valid_symbols[AND] ||
        valid_symbols[OR] ||
        valid_symbols[NOT] ||
        valid_symbols[IN] ||
        valid_symbols[FN] ||
        valid_symbols[DO] ||
        valid_symbols[END] ||
        valid_symbols[CATCH] ||
        valid_symbols[RESCUE] ||
        valid_symbols[AFTER] ||
        valid_symbols[ELSE]) {
      while (is_whitespace(lexer->lookahead)) skip(lexer);
    }

    if ((valid_symbols[LINE_BREAK]) &&
        is_newline(lexer->lookahead)) {
      skip(lexer);
      while (is_whitespace(lexer->lookahead) || is_newline(lexer->lookahead)) skip(lexer);
      lexer->mark_end(lexer);
      bool reserved;
      if (is_binary_operator_next(lexer, valid_symbols, &reserved)) {
        if (reserved) {
          return reserved;
        } else {
          lexer->result_symbol = NON_BREAKING_LINE;
          return true;
        }
      } else {
        lexer->result_symbol = LINE_BREAK;
        return true;
      }
    }

    if ((valid_symbols[ATOM_LITERAL] || valid_symbols[ATOM_START]) &&
        lexer->lookahead == ':') {
      return scan_atom(lexer, valid_symbols);
    }

    if ((valid_symbols[IDENTIFIER] ||
         valid_symbols[UNUSED_IDENTIFIER] ||
         valid_symbols[SPECIAL_IDENTIFIER] ||
         valid_symbols[KEYWORD_LITERAL] ||
         valid_symbols[TRUE] ||
         valid_symbols[FALSE] ||
         valid_symbols[NIL] ||
         valid_symbols[WHEN] ||
         valid_symbols[AND] ||
         valid_symbols[OR] ||
         valid_symbols[NOT] ||
         valid_symbols[IN] ||
         valid_symbols[FN] ||
         valid_symbols[DO] ||
         valid_symbols[END] ||
         valid_symbols[CATCH] ||
         valid_symbols[RESCUE] ||
         valid_symbols[AFTER] ||
         valid_symbols[ELSE]) &&
        (is_identifier_start(lexer->lookahead) ||
         is_keyword_start(lexer->lookahead) ||
         lexer->lookahead == '.')) {
      return scan_identifier_or_keyword(lexer, valid_symbols);
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
