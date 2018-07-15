#include <tree_sitter/parser.h>
#include <cwctype>

namespace {

  using std::iswspace;

  enum TokenType {
    COMMENT,
    STRING
  };

  struct Scanner {
    static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

    static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

    // Check for sequence of characters
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
    static bool multiline_content(TSLexer *lexer) {
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

          // Give the end_level the same amount of '=' from the start_level
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

                  // Restore original level, if end brackets level don't match
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
      if (valid_symbols[COMMENT] || valid_symbols[STRING]) {
        while (iswspace(lexer->lookahead)) {
          skip(lexer);
        }

        // Try to make a short literal string with single quote, consume first character '\''
        if (lexer->lookahead == '\'') {
          lexer->result_symbol = STRING;

          advance(lexer);

          // Loop when next character isn't new line neither end of file
          while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
            // Consume any '\' character and tries to consume the next
            if (lexer->lookahead == '\\') {
              advance(lexer);

              // Consume any character that isn't new line neither end of file
              if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
                advance(lexer);
              } else {
                break;
              }
            } else {
              // Consume the last character '\''
              if (lexer->lookahead == '\'') {
                advance(lexer);

                return true;
              } else {
                // Consume any character that isn't new line neither end of file
                if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
                  advance(lexer);
                } else {
                  break;
                }
              }
            }
          }
        }

        // Try to make a short literal string with double quote, consume first character '"'
        else if (lexer->lookahead == '"') {
          lexer->result_symbol = STRING;

          advance(lexer);

          // Loop when next character isn't new line neither end of file
          while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
            // Consume any backslash and tries to consume the next character
            if (lexer->lookahead == '\\') {
              advance(lexer);

              // Consume any character that isn't new line neither end of file
              if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
                advance(lexer);
              } else {
                break;
              }
            } else {
              // Consume the last character '"'
              if (lexer->lookahead == '"') {
                advance(lexer);

                return true;
              } else {
                // Consume any character that isn't new line neither end of file
                if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
                  advance(lexer);
                } else {
                  break;
                }
              }
            }
          }
        }

        // Try to make a comment, consume character '--'
        else if (evaluate_sequence(lexer, "--")) {
          lexer->result_symbol = COMMENT;

          if (!multiline_content(lexer)) {
            // Consume any character that isn't new line neither end of file
            while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
              advance(lexer);
            }
          }

          return true;
        }

        // Try to make a long literal string with double brackets
        else if (multiline_content(lexer)) {
          lexer->result_symbol = STRING;

          return true;
        }

        return false;
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
