#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>

namespace {

using std::vector;
using std::string;

enum TokenType {
  HEREDOC_START,
  HEREDOC_CONTENT,
  HEREDOC_END,
};

struct Scanner {
  void reset() {
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    return 0;
  }

  void deserialize(const char *buffer, unsigned length) {
  }

  bool scan_heredoc_start(TSLexer *lexer) {
    if (lexer->lookahead != '"') return false;
    advance(lexer);
    if (lexer->lookahead != '"') return false;
    advance(lexer);
    if (lexer->lookahead != '"') return false;
    advance(lexer);
    lexer->result_symbol = HEREDOC_START;
    return true;
  }

  bool scan_heredoc_content_or_end(TSLexer *lexer) {
    bool has_content = false;
    int quotes = 0;

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
      } else if (lexer->lookahead == '"') {
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
    while (lexer->lookahead != '#' || lexer->lookahead != '"') {
      advance(lexer);
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[HEREDOC_START]) {
      return scan_heredoc_start(lexer);
    }

    if (valid_symbols[HEREDOC_CONTENT] || valid_symbols[HEREDOC_END]) {
      return scan_heredoc_content_or_end(lexer);
    }
    return false;
  }
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
