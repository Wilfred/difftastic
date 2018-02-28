#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::string;

enum TokenType {
  SIMPLE_HEREDOC,
  HEREDOC_BEGINNING,
  HEREDOC_MIDDLE,
  HEREDOC_END,
  FILE_DESCRIPTOR,
  WORD,
  EMPTY_VALUE,
  CONCAT,
  VARIABLE_NAME,
  NEWLINE,
  CLOSING_BRACKET,
  CLOSING_BRACE,
};

struct Scanner {
  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    if (heredoc_delimiter.size() >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    heredoc_delimiter.copy(buffer, heredoc_delimiter.length());
    return heredoc_delimiter.length();
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) heredoc_delimiter.clear();
    else heredoc_delimiter.assign(buffer, buffer + length);
  }

  bool scan_heredoc_end_identifier(TSLexer *lexer) {
    current_leading_word.clear();
    while (iswalpha(lexer->lookahead)) {
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
          lexer->result_symbol = end_type;
          return did_advance;
        }

        case '$': {
          lexer->result_symbol = middle_type;
          return did_advance;
        }

        case '\n': {
          did_advance = true;
          advance(lexer);
          if (scan_heredoc_end_identifier(lexer)) {
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
        iswspace(lexer->lookahead) ||
        lexer->lookahead == '>' ||
        lexer->lookahead == '<' ||
        lexer->lookahead == ')' ||
        lexer->lookahead == '(' ||
        lexer->lookahead == '[' ||
        lexer->lookahead == '|' ||
        lexer->lookahead == ']' ||
        lexer->lookahead == '}' ||
        lexer->lookahead == ';' ||
        lexer->lookahead == '&' ||
        lexer->lookahead == '`'
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

    if (valid_symbols[HEREDOC_MIDDLE] && !heredoc_delimiter.empty()) {
      return scan_heredoc_content(lexer, HEREDOC_MIDDLE, HEREDOC_END);
    }

    if (valid_symbols[HEREDOC_BEGINNING]) {
      heredoc_delimiter.clear();
      while (iswalpha(lexer->lookahead)) {
        heredoc_delimiter += lexer->lookahead;
        advance(lexer);
      }

      if (lexer->lookahead != '\n') return false;
      advance(lexer);

      if (scan_heredoc_end_identifier(lexer)) {
        lexer->result_symbol = SIMPLE_HEREDOC;
        return true;
      }

      return scan_heredoc_content(lexer, HEREDOC_BEGINNING, SIMPLE_HEREDOC);
    }

    if (valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR] || valid_symbols[WORD]) {
      unsigned length = 0;

      for (;;) {
        if (
          lexer->lookahead == ' ' ||
          lexer->lookahead == '\t' ||
          (lexer->lookahead == '\n' && !valid_symbols[NEWLINE])
        ) {
          skip(lexer);
        } else if (lexer->lookahead == '\\') {
          advance(lexer);
          if (lexer->lookahead == '\n') {
            skip(lexer);
          } else {
            length++;
            break;
          }
        } else {
          break;
        }
      }

      bool is_numeric = iswdigit(lexer->lookahead);
      bool is_alphanumeric = iswalpha(lexer->lookahead);

      for (;;) {
        // These characters are not allowed in unquoted arguments
        // or environment variable names
        if (
          lexer->lookahead == 0 ||
          lexer->lookahead == ';' ||
          lexer->lookahead == '"' ||
          lexer->lookahead == '(' ||
          lexer->lookahead == ')' ||
          lexer->lookahead == '\'' ||
          lexer->lookahead == '&' ||
          lexer->lookahead == '#' ||
          lexer->lookahead == '`' ||
          lexer->lookahead == '|' ||
          lexer->lookahead == '$' ||
          iswspace(lexer->lookahead)
        ) break;

        // Curly braces are not allowed in unquoted arguments within curly braces
        // (e.g. inside of a variable expansion like `${key:arg}`).
        if (
          lexer->lookahead == '}' &&
          valid_symbols[CLOSING_BRACE]
        ) break;

        // Square brackets are not allowed in unquoted arguments within square brackets
        // (e.g. inside of an array subscript like `a[arg]`).
        if (
          lexer->lookahead == ']' &&
          valid_symbols[CLOSING_BRACKET]
        ) break;

        // Numbers followed by '<' and '>' at the beginning of commands
        // are parsed as file descriptors.
        if (lexer->lookahead == '<' || lexer->lookahead == '>') {
          if (is_numeric && valid_symbols[FILE_DESCRIPTOR]) {
            lexer->result_symbol = FILE_DESCRIPTOR;
            return true;
          }
          break;
        }

        if (!iswdigit(lexer->lookahead)) is_numeric = false;

        if (!iswalnum(lexer->lookahead) && lexer->lookahead != '_') {

          // Alphanumeric strings followed by '=', '[', or '+=' are treated
          // as environment variable names.
          if (is_alphanumeric && valid_symbols[VARIABLE_NAME] && length > 0) {
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

          is_alphanumeric = false;
        }

        advance(lexer);
        length++;
      }

      // Do not handle strings containing only letters, because those
      // might be keywords. Let the normal lexer handle those.
      if (length > 0 && valid_symbols[WORD] && !is_alphanumeric) {
        lexer->result_symbol = WORD;
        return true;
      }
    }

    return false;
  }

  string heredoc_delimiter;
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
