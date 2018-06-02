#include <tree_sitter/parser.h>

namespace {

  enum TokenType {};

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

    // Scan
    bool scan(TSLexer *lexer, const bool *valid_symbols) {
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
