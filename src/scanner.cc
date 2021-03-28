#include <tree_sitter/parser.h>

enum TokenType {
  STRING_CONTENT
};

extern "C" {
  void * tree_sitter_perl_external_scanner_create() {
    return NULL;
  }

  void tree_sitter_perl_external_scanner_destroy(void *payload) {
    // ...
  }

  unsigned tree_sitter_perl_external_scanner_serialize(
    void *payload,
    char *buffer
  ) {
    // ...
  }

  void tree_sitter_perl_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
  ) {
    // ...
  }

  static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

  bool tree_sitter_perl_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
  ) {
    // if (valid_symbols[STRING_CONTENT]) {

    //   lexer->result_symbol = STRING_CONTENT;
      
    //   for (bool has_content = false;; has_content = true) {
    //     lexer->mark_end(lexer);
    //     switch (lexer->lookahead) {
    //       // case '\"':
    //       //   return has_content;
    //       case '\0':
    //         return false;
    //       case '$':
    //         advance(lexer);
    //         if (lexer->lookahead != '{') return has_content;
    //         break;
    //       case '\\':
    //         return has_content;
    //       default:
    //         advance(lexer);
    //     }
    //   }
    // }
  }
}
