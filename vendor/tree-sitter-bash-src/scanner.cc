#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::string;

enum TokenType {
  HEREDOC_START,
  SIMPLE_HEREDOC_BODY,
  HEREDOC_BODY_BEGINNING,
  HEREDOC_BODY_MIDDLE,
  HEREDOC_BODY_END,
  FILE_DESCRIPTOR,
  EMPTY_VALUE,
  CONCAT,
  VARIABLE_NAME,
  REGEX,
  CLOSING_BRACE,
  CLOSING_BRACKET,
  HEREDOC_ARROW,
  HEREDOC_ARROW_DASH,
  NEWLINE,
};

struct Scanner {
  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    if (heredoc_delimiter.length() + 3 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    buffer[0] = heredoc_is_raw;
    buffer[1] = started_heredoc;
    buffer[2] = heredoc_allows_indent;
    heredoc_delimiter.copy(&buffer[3], heredoc_delimiter.length());
    return heredoc_delimiter.length() + 3;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) {
      heredoc_is_raw = false;
      started_heredoc = false;
      heredoc_allows_indent = false;
      heredoc_delimiter.clear();
    } else {
      heredoc_is_raw = buffer[0];
      started_heredoc = buffer[1];
      heredoc_allows_indent = buffer[2];
      heredoc_delimiter.assign(&buffer[3], &buffer[length]);
    }
  }

  bool scan_heredoc_start(TSLexer *lexer) {
    while (iswspace(lexer->lookahead)) skip(lexer);

    lexer->result_symbol = HEREDOC_START;
    heredoc_is_raw = lexer->lookahead == '\'';
    started_heredoc = false;
    heredoc_delimiter.clear();

    if (lexer->lookahead == '\\') {
      advance(lexer);
    }

    int32_t quote = 0;
    if (heredoc_is_raw || lexer->lookahead == '"') {
      quote = lexer->lookahead;
      advance(lexer);
    }

    while (iswalpha(lexer->lookahead) || (quote != 0 && iswspace(lexer->lookahead))) {
      heredoc_delimiter += lexer->lookahead;
      advance(lexer);
    }

    if (lexer->lookahead == quote) {
      advance(lexer);
    }

    return !heredoc_delimiter.empty();
  }

  bool scan_heredoc_end_identifier(TSLexer *lexer) {
    current_leading_word.clear();
    // Scan the first 'n' characters on this line, to see if they match the heredoc delimiter
    while (
      lexer->lookahead != '\0' &&
      lexer->lookahead != '\n' &&
      current_leading_word.length() < heredoc_delimiter.length()
    ) {
      current_leading_word += lexer->lookahead;
      advance(lexer);
    }
    return current_leading_word == heredoc_delimiter;
  }

  bool scan_heredoc_content(TSLexer *lexer, TokenType middle_type, TokenType end_type) {
    bool did_advance = false;

    for (;;) {
      switch (lexer->lookahead) {
        case '\0': {
          if (did_advance) {
            heredoc_is_raw = false;
            started_heredoc = false;
            heredoc_allows_indent = false;
            heredoc_delimiter.clear();
            lexer->result_symbol = end_type;
            return true;
          } else {
            return false;
          }
        }

        case '\\': {
          did_advance = true;
          advance(lexer);
          advance(lexer);
          break;
        }

        case '$': {
          if (heredoc_is_raw) {
            did_advance = true;
            advance(lexer);
            break;
          } else if (did_advance) {
            lexer->result_symbol = middle_type;
            started_heredoc = true;
            return true;
          } else {
            return false;
          }
        }

        case '\n': {
          did_advance = true;
          advance(lexer);
          if (heredoc_allows_indent) {
            while (iswspace(lexer->lookahead)) {
              advance(lexer);
            }
          }
          if (scan_heredoc_end_identifier(lexer)) {
            heredoc_is_raw = false;
            started_heredoc = false;
            heredoc_allows_indent = false;
            heredoc_delimiter.clear();
            lexer->result_symbol = end_type;
            return true;
          }
          break;
        }

        default: {
          did_advance = true;
          advance(lexer);
          break;
        }
      }
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[CONCAT]) {
      if (!(
        lexer->lookahead == 0 ||
        iswspace(lexer->lookahead) ||
        lexer->lookahead == '\\' ||
        lexer->lookahead == '>' ||
        lexer->lookahead == '<' ||
        lexer->lookahead == ')' ||
        lexer->lookahead == '(' ||
        lexer->lookahead == ';' ||
        lexer->lookahead == '&' ||
        lexer->lookahead == '|' ||
        lexer->lookahead == '`' ||
        lexer->lookahead == '#' ||
        (lexer->lookahead == '}' && valid_symbols[CLOSING_BRACE]) ||
        (lexer->lookahead == ']' && valid_symbols[CLOSING_BRACKET])
      )) {
        lexer->result_symbol = CONCAT;
        return true;
      }
    }

    if (valid_symbols[EMPTY_VALUE]) {
      if (iswspace(lexer->lookahead)) {
        lexer->result_symbol = EMPTY_VALUE;
        return true;
      }
    }

    if (valid_symbols[HEREDOC_BODY_BEGINNING] && !heredoc_delimiter.empty() && !started_heredoc) {
      return scan_heredoc_content(lexer, HEREDOC_BODY_BEGINNING, SIMPLE_HEREDOC_BODY);
    }

    if (valid_symbols[HEREDOC_BODY_MIDDLE] && !heredoc_delimiter.empty() && started_heredoc) {
      return scan_heredoc_content(lexer, HEREDOC_BODY_MIDDLE, HEREDOC_BODY_END);
    }

    if (valid_symbols[HEREDOC_START]) {
      return scan_heredoc_start(lexer);
    }

    if (valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR] || valid_symbols[HEREDOC_ARROW]) {
      for (;;) {
        if (
          lexer->lookahead == ' ' ||
          lexer->lookahead == '\t' ||
          lexer->lookahead == '\r' ||
          (lexer->lookahead == '\n' && !valid_symbols[NEWLINE])
        ) {
          skip(lexer);
        } else if (lexer->lookahead == '\\') {
          skip(lexer);
          if (lexer->lookahead == '\r') {
            skip(lexer);
          }
          if (lexer->lookahead == '\n') {
            skip(lexer);
          } else {
            return false;
          }
        } else {
          break;
        }
      }

      if (valid_symbols[HEREDOC_ARROW] && lexer->lookahead == '<') {
        advance(lexer);
        if (lexer->lookahead == '<') {
          advance(lexer);
          if (lexer->lookahead == '-') {
            advance(lexer);
            heredoc_allows_indent = true;
            lexer->result_symbol = HEREDOC_ARROW_DASH;
          } else if (lexer->lookahead == '<') {
            return false;
          } else {
            heredoc_allows_indent = false;
            lexer->result_symbol = HEREDOC_ARROW;
          }
          return true;
        }
        return false;
      }

      bool is_number = true;
      if (iswdigit(lexer->lookahead)) {
        advance(lexer);
      } else if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
        is_number = false;
        advance(lexer);
      } else {
        return false;
      }

      for (;;) {
        if (iswdigit(lexer->lookahead)) {
          advance(lexer);
        } else if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
          is_number = false;
          advance(lexer);
        } else {
          break;
        }
      }

      if (is_number &&
          valid_symbols[FILE_DESCRIPTOR] &&
          (lexer->lookahead == '>' || lexer->lookahead == '<')) {
        lexer->result_symbol = FILE_DESCRIPTOR;
        return true;
      }

      if (valid_symbols[VARIABLE_NAME]) {
        if (lexer->lookahead == '+') {
          lexer->mark_end(lexer);
          advance(lexer);
          if (lexer->lookahead == '=') {
            lexer->result_symbol = VARIABLE_NAME;
            return true;
          } else {
            return false;
          }
        } else if (lexer->lookahead == '=' || lexer->lookahead == '[') {
          lexer->result_symbol = VARIABLE_NAME;
          return true;
        }
      }

      return false;
    }

    if (valid_symbols[REGEX]) {
      while (iswspace(lexer->lookahead)) skip(lexer);

      if (
        lexer->lookahead != '"' &&
        lexer->lookahead != '\'' &&
        lexer->lookahead != '$'
      ) {
        struct State {
          bool done;
          uint32_t paren_depth;
          uint32_t bracket_depth;
          uint32_t brace_depth;
        };

        lexer->mark_end(lexer);

        State state = {false, 0, 0, 0};
        while (!state.done) {
          switch (lexer->lookahead) {
            case '\0':
              return false;
            case '(':
              state.paren_depth++;
              break;
            case '[':
              state.bracket_depth++;
              break;
            case '{':
              state.brace_depth++;
              break;
            case ')':
              if (state.paren_depth == 0) state.done = true;
              state.paren_depth--;
              break;
            case ']':
              if (state.bracket_depth == 0) state.done = true;
              state.bracket_depth--;
              break;
            case '}':
              if (state.brace_depth == 0) state.done = true;
              state.brace_depth--;
              break;
          }

          if (!state.done) {
            bool was_space = iswspace(lexer->lookahead);
            advance(lexer);
            if (!was_space) lexer->mark_end(lexer);
          }
        }

        lexer->result_symbol = REGEX;
        return true;
      }
    }

    return false;
  }

  string heredoc_delimiter;
  bool heredoc_is_raw;
  bool started_heredoc;
  bool heredoc_allows_indent;
  string current_leading_word;
};

}

extern "C" {

void *tree_sitter_bash_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_bash_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_bash_external_scanner_serialize(void *payload, char *state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_bash_external_scanner_deserialize(void *payload, const char *state, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state, length);
}

void tree_sitter_bash_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
