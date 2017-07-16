#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::wstring;

enum TokenType {
  SIMPLE_HEREDOC,
  HEREDOC_BEGINNING,
  HEREDOC_MIDDLE,
  HEREDOC_END,
  FILE_DESCRIPTOR,
  EMPTY_VALUE,
  LENGTH_OPERATOR
};

struct Scanner {
  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void reset() {}

  bool serialize(TSExternalTokenState state) { return true; }

  void deserialize(TSExternalTokenState state) {}

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
          return true;
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

    if (valid_symbols[FILE_DESCRIPTOR]) {
      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') skip(lexer);
      if (iswdigit(lexer->lookahead)) {
        advance(lexer);
        while (iswdigit(lexer->lookahead)) advance(lexer);
        if (lexer->lookahead == '>' || lexer->lookahead == '<') {
          lexer->result_symbol = FILE_DESCRIPTOR;
          return true;
        }
      }
    }

    if (valid_symbols[EMPTY_VALUE]) {
      if (iswspace(lexer->lookahead)) {
        lexer->result_symbol = EMPTY_VALUE;
        return true;
      }
    }

    if (valid_symbols[LENGTH_OPERATOR]) {
      if (lexer->lookahead == '#') {
        advance(lexer);
        if (iswalpha(lexer->lookahead)) {
          lexer->result_symbol = LENGTH_OPERATOR;
          return true;
        }
      }
    }

    return false;
  }

  wstring heredoc_delimiter;
  wstring current_leading_word;
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

void tree_sitter_bash_external_scanner_reset(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->reset();
}

bool tree_sitter_bash_external_scanner_serialize(void *payload, TSExternalTokenState state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_bash_external_scanner_deserialize(void *payload, TSExternalTokenState state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state);
}

void tree_sitter_bash_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
