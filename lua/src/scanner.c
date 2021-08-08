#include <tree_sitter/parser.h>
#include <stdbool.h>
#include <stdio.h>

enum TokenType {
  COMMENT,
  STRING,
};

static inline void consume(TSLexer *lexer) { lexer->advance(lexer, false); }
static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static inline bool consume_char(char c, TSLexer *lexer) {
  if (lexer->lookahead != c) {
    return false;
  }

  consume(lexer);
  return true;
}

static inline uint8_t consume_and_count_char(char c, TSLexer *lexer) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    ++count;
    consume(lexer);
  }
  return count;
}

static inline bool is_whitespace(char c) {
  return c == '\n' || c == '\r' || c == ' ' || c == '\t';
}

void *tree_sitter_lua_external_scanner_create() { return NULL; }
void tree_sitter_lua_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_lua_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_lua_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static bool scan_block_content(TSLexer *lexer) {
  // Initialize lua multiline content level count
  uint8_t start_level = 0;
  uint8_t end_level = 0;

  // first appearance of '['
  if (consume_char('[', lexer)) {
    if (lexer->lookahead == '[' || lexer->lookahead == '=') {
      start_level = consume_and_count_char('=', lexer);

      // last appearance of '['
      if (consume_char('[', lexer)) {
        // Loop while not end of file (eof)
        while (lexer->lookahead != 0) {
          // Gives the end level count the same as start level count
          end_level = start_level;

          // first appearance of ']'
          if (consume_char(']', lexer)) {
            if (lexer->lookahead == ']' || lexer->lookahead == '=') {
              end_level = consume_and_count_char('=', lexer);

              // last appearance of ']'
              if (end_level == start_level && consume_char(']', lexer)) {

                return true;
              }
            }
          }

          if (lexer->lookahead != 0) {
            // all but end of file (eof)
            consume(lexer);
          }
        }
      }
    }
  }

  return false;
}

static bool scan_string_line(char quote_char, TSLexer *lexer) {
  if (consume_char(quote_char, lexer)) {
    lexer->result_symbol = STRING;

    // Loop when isn't new line neither end of file (eof)
    while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
      // escape char
      if (consume_char('\\', lexer)) {
        if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
          // any character that isn't new line neither end of file (eof)
          consume(lexer);
        } else {
          break;
        }
      } else {
        if (consume_char(quote_char, lexer)) {
          return true;
        } else {
          if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
            // any character that isn't new line neither end of file (eof)
            consume(lexer);
          } else {
            break;
          }
        }
      }
    }
  }

  return false;
}

bool tree_sitter_lua_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[COMMENT] || valid_symbols[STRING]) {
    while (is_whitespace(lexer->lookahead)) {
      skip(lexer);
    }

    if (scan_string_line('\'', lexer) || scan_string_line('"', lexer)) {
      return true;
    }

    // Try to make a comment
    else if (consume_char('-', lexer) && consume_char('-', lexer)) {
      if (scan_block_content(lexer)) {
        return true;
      }

      while (is_whitespace(lexer->lookahead) && lexer->lookahead != '\n' && lexer->lookahead != 0) {
        consume(lexer);
      }

      lexer->result_symbol = COMMENT;

      while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
        // any character that isn't new line neither end of file (eof)
        consume(lexer);
      }

      return true;
    }

    // Try to make a long literal string with double bracket
    else if (scan_block_content(lexer)) {
      lexer->result_symbol = STRING;

      return true;
    }

    return false;
  }

  return false;

}
