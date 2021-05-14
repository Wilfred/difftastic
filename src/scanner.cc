#include <tree_sitter/parser.h>

enum TokenType {
  STRING_CONTENT,
  POD_CONTENT,
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
    return 0;
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
    
    if (valid_symbols[POD_CONTENT]) {

      while (lexer->lookahead) {
        lexer->result_symbol = POD_CONTENT;

        // if it is =cut that marks the end of pod content
        if (lexer->lookahead == '=') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == 'c') {
            lexer->advance(lexer, false);
              if (lexer->lookahead == 'u') {
              lexer->advance(lexer, false);
                if (lexer->lookahead == 't') {
                  lexer->advance(lexer, false);
                  lexer->mark_end(lexer);
                  return true;
                }
            }
          }
        }
        else {
          lexer->advance(lexer, false);
        }
      }

      // or if it end of the file also, mark the end of pod content
      lexer->mark_end(lexer);
      return true;
    }
  }
}
