#include <tree_sitter/parser.h>
#include <cwctype>

namespace {

  using std::iswspace;

  enum TokenType {
    SINGLE_COMMENT,
    MULTILINE_COMMENT
  };

  struct Scanner {
    static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

    static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

    // Evaluate a sequence of chars
    static bool evaluate_sequence(TSLexer *lexer, const char *sequence) {
      for (const char *c = sequence; *c; c++) {
        if (lexer->lookahead == *c) {
          advance(lexer);
        } else {
          return false;
        }
      }

      return true;
    }

    // Check for multi-line brackets (comment/string)
    int level = 0;
    bool start_multiline(TSLexer *lexer) {
      if (lexer->lookahead == '[') {
        advance(lexer);

        while (lexer->lookahead == '[' || lexer->lookahead == '=') {
          if (lexer->lookahead == '=') {
            ++level;
            advance(lexer);
          } else if (lexer->lookahead == '[') {
            advance(lexer);

            return true;
          }
        }
      }

      return false;
    }

    bool end_multiline(TSLexer *lexer) {
      // Consume first ']'
      if (lexer->lookahead == ']') {
        advance(lexer);

        if (lexer->lookahead == ']' || lexer->lookahead == '=') {
          // Consume all '='
          while (level > 0 && lexer->lookahead == '=') {
            --level;
            advance(lexer);
          }

          // Consume last ']'
          if (lexer->lookahead == ']' && level == 0) {
            advance(lexer);

            return true;
          }
        }
      }

      // return on end of file
      if (lexer->lookahead == 0) return true;

      return false;
    }

    // Scan
    bool scan(TSLexer *lexer, const bool *valid_symbols) {
      if (valid_symbols[SINGLE_COMMENT] || valid_symbols[MULTILINE_COMMENT]) {
        while (iswspace(lexer->lookahead)) {
          skip(lexer);
        }

        // Consume "--"
        if (!evaluate_sequence(lexer, "--")) return false;

        if (start_multiline(lexer)) {
          // Consume inside of multi-line comment
          while (!end_multiline(lexer)) {
            advance(lexer);
          }

          // don't tokenize incomplete multi-line comment
          if (lexer->lookahead == 0) return false;

          lexer->result_symbol = MULTILINE_COMMENT;
        } else {
          // Consume all except newline
          while (lexer->lookahead != '\n') {
            advance(lexer);
          }

          lexer->result_symbol = SINGLE_COMMENT;
        }

        return true;
      }

      return false;
    }
  };

}

extern "C" {

  void *tree_sitter_lua_external_scanner_create() {
    return new Scanner();
  }

  void tree_sitter_lua_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

  bool tree_sitter_lua_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_lua_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
  }

  void tree_sitter_lua_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

}
