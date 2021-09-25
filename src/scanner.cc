#include <tree_sitter/parser.h>

namespace {

enum TokenType {
  // TODO add a note that all QUOTE_* tokens are mutually exclusive
  // i.e. the valid_symbols array contains at most one truthy of these
  QUOTED_CONTENT_I_SINGLE,
  QUOTED_CONTENT_I_DOUBLE,
  QUOTED_CONTENT_I_HEREDOC_SINGLE,
  QUOTED_CONTENT_I_HEREDOC_DOUBLE,
  QUOTED_CONTENT_I_PARENTHESIS,
  QUOTED_CONTENT_I_CURLY,
  QUOTED_CONTENT_I_SQUARE,
  QUOTED_CONTENT_I_ANGLE,
  QUOTED_CONTENT_I_BAR,
  QUOTED_CONTENT_I_SLASH,

  QUOTED_CONTENT_SINGLE,
  QUOTED_CONTENT_DOUBLE,
  QUOTED_CONTENT_HEREDOC_SINGLE,
  QUOTED_CONTENT_HEREDOC_DOUBLE,
  QUOTED_CONTENT_PARENTHESIS,
  QUOTED_CONTENT_CURLY,
  QUOTED_CONTENT_SQUARE,
  QUOTED_CONTENT_ANGLE,
  QUOTED_CONTENT_BAR,
  QUOTED_CONTENT_SLASH,

  KEYWORD_SPECIAL_LITERAL,
  ATOM_START,
  KEYWORD_END,

  NEWLINE_BEFORE_DO,
  NEWLINE_BEFORE_BINARY_OP,
  NEWLINE_BEFORE_COMMENT,

  BEFORE_UNARY_OP,

  NOT_IN
};

bool quoted_token_type(const bool* valid_symbols, TokenType& token_type) {
  // Quoted symbols are mutually exclusive and only one should
  // be valid at a time. If multiple are valid it means we parse
  // an arbitrary code outside quotes, in which case we don't
  // want to tokenize it as quoted content.
  if (valid_symbols[QUOTED_CONTENT_I_SINGLE] && valid_symbols[QUOTED_CONTENT_I_DOUBLE]) {
    return false;
  }

  if (valid_symbols[QUOTED_CONTENT_I_SINGLE]) {
    token_type = QUOTED_CONTENT_I_SINGLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_DOUBLE]) {
    token_type = QUOTED_CONTENT_I_DOUBLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_HEREDOC_SINGLE]) {
    token_type = QUOTED_CONTENT_I_HEREDOC_SINGLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_HEREDOC_DOUBLE]) {
    token_type = QUOTED_CONTENT_I_HEREDOC_DOUBLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_PARENTHESIS]) {
    token_type = QUOTED_CONTENT_I_PARENTHESIS;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_CURLY]) {
    token_type = QUOTED_CONTENT_I_CURLY;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_SQUARE]) {
    token_type = QUOTED_CONTENT_I_SQUARE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_ANGLE]) {
    token_type = QUOTED_CONTENT_I_ANGLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_BAR]) {
    token_type = QUOTED_CONTENT_I_BAR;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_I_SLASH]) {
    token_type = QUOTED_CONTENT_I_SLASH;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_SINGLE]) {
    token_type = QUOTED_CONTENT_SINGLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_DOUBLE]) {
    token_type = QUOTED_CONTENT_DOUBLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_HEREDOC_SINGLE]) {
    token_type = QUOTED_CONTENT_HEREDOC_SINGLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_HEREDOC_DOUBLE]) {
    token_type = QUOTED_CONTENT_HEREDOC_DOUBLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_PARENTHESIS]) {
    token_type = QUOTED_CONTENT_PARENTHESIS;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_CURLY]) {
    token_type = QUOTED_CONTENT_CURLY;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_SQUARE]) {
    token_type = QUOTED_CONTENT_SQUARE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_ANGLE]) {
    token_type = QUOTED_CONTENT_ANGLE;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_BAR]) {
    token_type = QUOTED_CONTENT_BAR;
    return true;
  }
  if (valid_symbols[QUOTED_CONTENT_SLASH]) {
    token_type = QUOTED_CONTENT_SLASH;
    return true;
  }

  return false;
}

int32_t quoted_end_delimiter(TokenType token_type) {
  switch (token_type) {
    case QUOTED_CONTENT_I_SINGLE:
    case QUOTED_CONTENT_SINGLE:
    case QUOTED_CONTENT_I_HEREDOC_SINGLE:
    case QUOTED_CONTENT_HEREDOC_SINGLE:
      return '\'';

    case QUOTED_CONTENT_I_DOUBLE:
    case QUOTED_CONTENT_DOUBLE:
    case QUOTED_CONTENT_I_HEREDOC_DOUBLE:
    case QUOTED_CONTENT_HEREDOC_DOUBLE:
      return '\"';

    case QUOTED_CONTENT_I_PARENTHESIS:
    case QUOTED_CONTENT_PARENTHESIS:
      return ')';

    case QUOTED_CONTENT_I_CURLY:
    case QUOTED_CONTENT_CURLY:
      return '}';

    case QUOTED_CONTENT_I_SQUARE:
    case QUOTED_CONTENT_SQUARE:
      return ']';

    case QUOTED_CONTENT_I_ANGLE:
    case QUOTED_CONTENT_ANGLE:
      return '>';

    case QUOTED_CONTENT_I_BAR:
    case QUOTED_CONTENT_BAR:
      return '|';

    case QUOTED_CONTENT_I_SLASH:
    case QUOTED_CONTENT_SLASH:
      return '/';
  }

  __builtin_unreachable();
}

uint8_t quoted_delimiter_length(TokenType token_type) {
  switch (token_type) {
    case QUOTED_CONTENT_I_HEREDOC_SINGLE:
    case QUOTED_CONTENT_I_HEREDOC_DOUBLE:
    case QUOTED_CONTENT_HEREDOC_SINGLE:
    case QUOTED_CONTENT_HEREDOC_DOUBLE:
      return 3;

    default:
      return 1;
  }
}

bool quoted_is_interpol(TokenType token_type) {
  switch (token_type) {
    case QUOTED_CONTENT_I_SINGLE:
    case QUOTED_CONTENT_I_DOUBLE:
    case QUOTED_CONTENT_I_HEREDOC_SINGLE:
    case QUOTED_CONTENT_I_HEREDOC_DOUBLE:
    case QUOTED_CONTENT_I_PARENTHESIS:
    case QUOTED_CONTENT_I_CURLY:
    case QUOTED_CONTENT_I_SQUARE:
    case QUOTED_CONTENT_I_ANGLE:
    case QUOTED_CONTENT_I_BAR:
    case QUOTED_CONTENT_I_SLASH:
      return true;

    default:
      return false;
  }
}

bool is_whitespace(int32_t c) {
  return c == ' ' || c == '\t' || c == '\v' ||
    c == '\n' || c == '\f' || c == '\r';
}

bool is_inline_whitespace(int32_t c) {
  return c == ' ' || c == '\t' || c == '\v';
}

// TODO what about these weird \f \r
bool is_newline(int32_t c) {
  return c == '\n';
}

void advance(TSLexer* lexer) {
  lexer->advance(lexer, false);
}

void skip(TSLexer *lexer) {
  lexer->advance(lexer, true);
}

bool finish_atom_start(TSLexer* lexer) {
  // The first ':' is already scanned and parser advanced
  lexer->mark_end(lexer);
  lexer->result_symbol = ATOM_START;

  if (lexer->lookahead == ':') {
    advance(lexer);
    if (lexer->lookahead == ':') {
      // :::
      return true;
    } else {
      return false;
    }
  } else {
    return !is_whitespace(lexer->lookahead);
  }
}

bool is_keyword_end(TSLexer* lexer) {
  if (lexer->lookahead == ':') {
    advance(lexer);
    return is_whitespace(lexer->lookahead);
  }
  return false;
}

bool finish_keyword(TSLexer* lexer) {
  lexer->mark_end(lexer);
  lexer->result_symbol = KEYWORD_SPECIAL_LITERAL;
  return is_keyword_end(lexer);
}

bool is_digit(int32_t c) {
  return '0' <= c && c <= '9';
}

bool is_operator_end(TSLexer* lexer) {
  // Keyword
  if (lexer->lookahead == ':') {
    return !is_keyword_end(lexer);
  }
  while (is_inline_whitespace(lexer->lookahead)) {
    advance(lexer);
  }
  // Operator identifier with arity
  if (lexer->lookahead == '/') {
    advance(lexer);
    while (is_whitespace(lexer->lookahead)) {
      advance(lexer);
    }
    if (is_digit(lexer->lookahead)) {
      return false;
    }
  }

  return true;
}

const char TOKEN_TERMINATORS[] = {
  // Operator starts
  '@', '.', '+', '-', '^', '-', '*', '/', '<', '>', '|', '~', '=', '&', '\\', '%',
  // Delimiters
  '{', '}', '[', ']', '(', ')', '"', '\'',
  // Separators
  ',', ';',
  // Comment
  '#'
};

// Note: this is a heuristic as we only use this to distinguish word
// operators and we don't want to include complex Unicode ranges.
bool is_token_end(int32_t c) {
  for (unsigned int i = 0; i < sizeof(TOKEN_TERMINATORS); i++) {
    if (c == TOKEN_TERMINATORS[i]) {
      return true;
    }
  }

  return is_whitespace(c);
}

bool scan(TSLexer* lexer, const bool* valid_symbols) {
  TokenType token_type;
  bool is_quoted_symbol = quoted_token_type(valid_symbols, token_type);

  // Quoted content, which matches any character except for close
  // delimiters, escapes and interpolations
  if (is_quoted_symbol) {
    // TODO naming
    // TODO move all of this into a separate function like scan_quoted_content
    int32_t end_delimiter = quoted_end_delimiter(token_type);
    bool supports_interpol = quoted_is_interpol(token_type);
    uint8_t delimiter_length = quoted_delimiter_length(token_type);

    lexer->result_symbol = token_type;

    for (bool has_content = false; true; has_content = true) {
      lexer->mark_end(lexer);

      if (lexer->lookahead == end_delimiter) {
        uint8_t length = 1;

        while (length < delimiter_length) {
          advance(lexer);
          if (lexer->lookahead == end_delimiter) {
            length++;
          } else {
            break;
          }
        }

        if (length == delimiter_length) {
          return has_content;
        }
      } else {
        switch (lexer->lookahead) {
          case '#':
            advance(lexer);

            if (supports_interpol && lexer->lookahead == '{') {
              return has_content;
            }

            break;

          case '\\':
            if (supports_interpol) {
              return has_content;
            } else {
              advance(lexer);

              if (lexer->lookahead == end_delimiter) {
                return has_content;
              }
            }

            break;

          case '\0':
            return false;

          default:
            advance(lexer);
        }
      }
    }

    return false;
  }

  if (lexer->lookahead == ':') {
    if (valid_symbols[ATOM_START] || valid_symbols[KEYWORD_END]) {
      advance(lexer);

      if (is_whitespace(lexer->lookahead)) {
        if (valid_symbols[KEYWORD_END]) {
          lexer->result_symbol = KEYWORD_END;
          return true;
        }
      } else {
        if (valid_symbols[ATOM_START]) {
          return finish_atom_start(lexer);
        }
      }

      return false;
    }
  }

  bool skipped_whitespace = false;

  while (is_inline_whitespace(lexer->lookahead)) {
    skipped_whitespace = true;
    skip(lexer);
  }

  // TODO moves this below together with other functions on this level
  if (lexer->lookahead == '+') {
    if (skipped_whitespace && valid_symbols[BEFORE_UNARY_OP]) {
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '+' || lexer->lookahead == ':' || lexer->lookahead == '/') {
        return false;
      }
      if (is_whitespace(lexer->lookahead)) {
        return false;
      }
      lexer->result_symbol = BEFORE_UNARY_OP;
      return true;
    }
  }

  if (lexer->lookahead == '-') {
    if (skipped_whitespace && valid_symbols[BEFORE_UNARY_OP]) {
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '-' || lexer->lookahead == '>' || lexer->lookahead == ':' || lexer->lookahead == '/') {
        return false;
      }
      if (is_whitespace(lexer->lookahead)) {
        return false;
      }
      lexer->result_symbol = BEFORE_UNARY_OP;
      return true;
    }
  }

  if (lexer->lookahead == 'n') {
    lexer->result_symbol = NOT_IN;
    advance(lexer);
    if (lexer->lookahead == 'o') {
      advance(lexer);
      if (lexer->lookahead == 't') {
        advance(lexer);
        while (is_inline_whitespace(lexer->lookahead)) {
          advance(lexer);
        }
        if (lexer->lookahead == 'i') {
          advance(lexer);
          if (lexer->lookahead == 'n') {
            advance(lexer);
            return is_token_end(lexer->lookahead);
          }
        }
      }
    }
    return false;
  }

  // TODO can be a separate function

  if (is_newline(lexer->lookahead) && (
        valid_symbols[NEWLINE_BEFORE_DO] ||
        valid_symbols[NEWLINE_BEFORE_BINARY_OP] ||
        valid_symbols[NEWLINE_BEFORE_COMMENT])) {
    advance(lexer);

    while (is_whitespace(lexer->lookahead)) {
      advance(lexer);
    }

    // Note we include all the whitespace after newline, so that the
    // parser doesn't have to go through it again
    lexer->mark_end(lexer);

    if (lexer->lookahead == '#') {
      lexer->result_symbol = NEWLINE_BEFORE_COMMENT;
      return true;
    }

    if (valid_symbols[NEWLINE_BEFORE_DO] && lexer->lookahead == 'd') {
      lexer->result_symbol = NEWLINE_BEFORE_DO;
      advance(lexer);
      if (lexer->lookahead == 'o') {
        advance(lexer);
        return is_token_end(lexer->lookahead);
      }
      return false;
    }

    if (valid_symbols[NEWLINE_BEFORE_BINARY_OP] ) {
      lexer->result_symbol = NEWLINE_BEFORE_BINARY_OP;

      // &&, &&&
      if (lexer->lookahead == '&') {
        advance(lexer);
        if (lexer->lookahead == '&') {
          advance(lexer);
          if (lexer->lookahead == '&') {
            advance(lexer);
            return is_operator_end(lexer);
          } else {
            return is_operator_end(lexer);
          }
        }
      // =, ==, ===, =~, =>
      } else if (lexer->lookahead == '=') {
        advance(lexer);
        if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == '=') {
            advance(lexer);
            return is_operator_end(lexer);
          } else {
            return is_operator_end(lexer);
          }
        } else if (lexer->lookahead == '~') {
          advance(lexer);
          return is_operator_end(lexer);
        } else if (lexer->lookahead == '>') {
          advance(lexer);
          return is_operator_end(lexer);
        } else {
          return is_operator_end(lexer);
        }
      // ::
      } else if (lexer->lookahead == ':') {
        advance(lexer);
        if (lexer->lookahead == ':') {
          advance(lexer);
          // Ignore ::: atom
          if (lexer->lookahead == ':') return false;
          return is_operator_end(lexer);
        }
      // ++, +++
      } else if (lexer->lookahead == '+') {
        advance(lexer);
        if (lexer->lookahead == '+') {
          advance(lexer);
          if (lexer->lookahead == '+') {
            advance(lexer);
            return is_operator_end(lexer);
          } else {
            return is_operator_end(lexer);
          }
        }
      // --, ---, ->
      } else if (lexer->lookahead == '-') {
        advance(lexer);
        if (lexer->lookahead == '-') {
          advance(lexer);
          if (lexer->lookahead == '-') {
            advance(lexer);
            return is_operator_end(lexer);
          } else {
            return is_operator_end(lexer);
          }
        } else if (lexer->lookahead == '>') {
          advance(lexer);
          return is_operator_end(lexer);
        }
      // <, <=, <-, <>, <~, <~>, <|>, <<<, <<~
      } else if (lexer->lookahead == '<') {
        advance(lexer);
        if (lexer->lookahead == '=' ||
            lexer->lookahead == '-' ||
            lexer->lookahead == '>') {
          advance(lexer);
          return is_operator_end(lexer);
        } else if (lexer->lookahead == '~') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            return is_operator_end(lexer);
          } else {
            return is_operator_end(lexer);
          }
        } else if (lexer->lookahead == '|') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            return is_operator_end(lexer);
          }
        } else if (lexer->lookahead == '<') {
          advance(lexer);
          if (lexer->lookahead == '<' ||
              lexer->lookahead == '~') {
            advance(lexer);
            return is_operator_end(lexer);
          }
        } else {
          return is_operator_end(lexer);
        }
      // >, >=, >>>
      } else if (lexer->lookahead == '>') {
        advance(lexer);
        if (lexer->lookahead == '=') {
          advance(lexer);
          return is_operator_end(lexer);
        } else if (lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            return is_operator_end(lexer);
          }
        } else {
          return is_operator_end(lexer);
        }
      // ^^^
      } else if (lexer->lookahead == '^') {
        advance(lexer);
        if (lexer->lookahead == '^') {
          advance(lexer);
          if (lexer->lookahead == '^') {
            advance(lexer);
            return is_operator_end(lexer);
          }
        }
      // !=, !==
      } else if (lexer->lookahead == '!') {
        advance(lexer);
        if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == '=') {
            advance(lexer);
            return is_operator_end(lexer);
          } else {
            return is_operator_end(lexer);
          }
        }
      // ~>, ~>>
      } else if (lexer->lookahead == '~') {
        advance(lexer);
        if (lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            return is_operator_end(lexer);
          } else {
            return is_operator_end(lexer);
          }
        }
      // |, ||, |||, |>
      } else if (lexer->lookahead == '|') {
        advance(lexer);
        if (lexer->lookahead == '|') {
          advance(lexer);
          if (lexer->lookahead == '|') {
            advance(lexer);
            return is_operator_end(lexer);
          } else {
            return is_operator_end(lexer);
          }
        } else if (lexer->lookahead == '>') {
          advance(lexer);
          return is_operator_end(lexer);
        } else {
          return is_operator_end(lexer);
        }
      // *, **
      } else if (lexer->lookahead == '*') {
        advance(lexer);
        if (lexer->lookahead == '*') {
          advance(lexer);
          return is_operator_end(lexer);
        } else {
          return is_operator_end(lexer);
        }
      // / //
      } else if (lexer->lookahead == '/') {
        advance(lexer);
        if (lexer->lookahead == '/') {
          advance(lexer);
          return is_operator_end(lexer);
        } else {
          return is_operator_end(lexer);
        }
      // ., ..
      } else if (lexer->lookahead == '.') {
        advance(lexer);
        if (lexer->lookahead == '.') {
          advance(lexer);
          // Ignore ... identifier
          if (lexer->lookahead == '.') return false;
          return is_operator_end(lexer);
        } else {
          return is_operator_end(lexer);
        }
      // double slash
      } else if (lexer->lookahead == '\\') {
        advance(lexer);
        if (lexer->lookahead == '\\') {
          advance(lexer);
          return is_operator_end(lexer);
        }
      } else if (lexer->lookahead == 'w') {
        advance(lexer);
        if (lexer->lookahead == 'h') {
          advance(lexer);
          if (lexer->lookahead == 'e') {
            advance(lexer);
            if (lexer->lookahead == 'n') {
              advance(lexer);
              return is_token_end(lexer->lookahead) && is_operator_end(lexer);
            }
          }
        }
      } else if (lexer->lookahead == 'a') {
        advance(lexer);
        if (lexer->lookahead == 'n') {
          advance(lexer);
          if (lexer->lookahead == 'd') {
            advance(lexer);
            return is_token_end(lexer->lookahead) && is_operator_end(lexer);
          }
        }
      // or
      } else if (lexer->lookahead == 'o') {
        advance(lexer);
        if (lexer->lookahead == 'r') {
          advance(lexer);
          return is_token_end(lexer->lookahead) && is_operator_end(lexer);
        }
      // in
      } else if (lexer->lookahead == 'i') {
        advance(lexer);
        if (lexer->lookahead == 'n') {
          advance(lexer);
          return is_token_end(lexer->lookahead) && is_operator_end(lexer);
        }
      // not in
      } else if (lexer->lookahead == 'n') {
        advance(lexer);
        if (lexer->lookahead == 'o') {
          advance(lexer);
          if (lexer->lookahead == 't') {
            advance(lexer);
            while (is_inline_whitespace(lexer->lookahead)) {
              advance(lexer);
            }
            if (lexer->lookahead == 'i') {
              advance(lexer);
              if (lexer->lookahead == 'n') {
                advance(lexer);
                return is_token_end(lexer->lookahead) && is_operator_end(lexer);
              }
            }
          }
        }
      }
    }

    return false;
  }

  // ... ..//
  if (lexer->lookahead == '.') {
    if (valid_symbols[KEYWORD_SPECIAL_LITERAL]) {
      advance(lexer);
      if (lexer->lookahead == '.') {
        advance(lexer);
        if (lexer->lookahead == '.') {
          advance(lexer);
          return finish_keyword(lexer);
        } else if (lexer->lookahead == '/') {
          advance(lexer);
          if (lexer->lookahead == '/') {
            advance(lexer);
            return finish_keyword(lexer);
          }
        }
      }
    }
  // % %{}
  } else if (lexer->lookahead == '%') {
    if (valid_symbols[KEYWORD_SPECIAL_LITERAL]) {
      advance(lexer);
      if (lexer->lookahead == '{') {
        advance(lexer);
        if (lexer->lookahead == '}') {
          advance(lexer);
          return finish_keyword(lexer);
        }
      } else {
        return finish_keyword(lexer);
      }
    }
  // {}
  } else if (lexer->lookahead == '{') {
    if (valid_symbols[KEYWORD_SPECIAL_LITERAL]) {
      advance(lexer);
      if (lexer->lookahead == '}') {
        advance(lexer);
        return finish_keyword(lexer);
      }
    }
  // <<>>
  } else if (lexer->lookahead == '<') {
    if (valid_symbols[KEYWORD_SPECIAL_LITERAL]) {
      advance(lexer);
      if (lexer->lookahead == '<') {
        advance(lexer);
        if (lexer->lookahead == '>') {
          advance(lexer);
          if (lexer->lookahead == '>') {
            advance(lexer);
            return finish_keyword(lexer);
          }
        }
      }
    }
  // atom start
  } else if (lexer->lookahead == ':') {
    if (valid_symbols[ATOM_START]) {
      advance(lexer);
      return finish_atom_start(lexer);
    }
  }

  return false;
}

// Expose the API expected by tree-sitter

extern "C" {
  void* tree_sitter_elixir_external_scanner_create() {
    return nullptr;
  }

  bool tree_sitter_elixir_external_scanner_scan(void* payload, TSLexer* lexer, const bool* valid_symbols) {
    return scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_elixir_external_scanner_serialize(void* payload, char* buffer) {
    return 0;
  }

  void tree_sitter_elixir_external_scanner_deserialize(void* payload, const char* buffer, unsigned length) {}

  void tree_sitter_elixir_external_scanner_destroy(void* payload) {}
}

}
