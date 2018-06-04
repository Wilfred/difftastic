#include <tree_sitter/parser.h>
#include <cwctype>

namespace {

  using std::iswspace;

  enum TokenType {
    COMMENT,
    MULTILINE_STRING
  };

  struct Scanner {
    static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

    static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

    // Evaluate a sequence of chars
    static bool evaluate_sequence(TSLexer *lexer, const char *sequence) {
      // Consume all characters in 'sequence'
      for (const char *c = sequence; *c; c++) {
        if (lexer->lookahead == *c) {
          advance(lexer);
        } else {
          return false;
        }
      }

      return true;
    }

    // Check for multiline block
    bool multiline_content(TSLexer *lexer) {
      // Multiline brackets level
      int start_level = 0;
      int end_level = 0;

      // Consume first '['
      if (lexer->lookahead == '[') {
        advance(lexer);

        if (lexer->lookahead == '[' || lexer->lookahead == '=') {
          // Consume all '=' and save quantity (level)
          while (lexer->lookahead == '=') {
            ++start_level;
            advance(lexer);
          }

          end_level = start_level;

          // Consume last '['
          if (lexer->lookahead == '[') {
            advance(lexer);

            for (;;) {
              // Consume first ']'
              if (lexer->lookahead == ']') {
                advance(lexer);

                if (lexer->lookahead == ']' || lexer->lookahead == '=') {
                  // Consume all '=' stored in level
                  while (lexer->lookahead == '=' && end_level > 0) {
                    --end_level;
                    advance(lexer);
                  }

                  // Consume last ']'
                  if (lexer->lookahead == ']' && end_level == 0) {
                    advance(lexer);

                    return true;
                  }

                  // Restore original level if end brackets level don't match
                  end_level = start_level;
                }
              }

              if (lexer->lookahead == 0) return false;

              advance(lexer);
            }
          }
        }
      }

      return false;
    }

    // Scan
    bool scan(TSLexer *lexer, const bool *valid_symbols) {
      if (valid_symbols[COMMENT] || valid_symbols[MULTILINE_STRING]) {
        while (iswspace(lexer->lookahead)) {
          skip(lexer);
        }

        // Consume any comment
        if (evaluate_sequence(lexer, "--")) {
          lexer->result_symbol = COMMENT;

          if (!multiline_content(lexer)) {
            while (lexer->lookahead != '\n') {
              advance(lexer);
            }
          }
        } else if (multiline_content(lexer)) {
          lexer->result_symbol = MULTILINE_STRING;
        } else {
          return false;
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
