#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  COMMENT,
  STRING_START,
  STRING_CONTENT,
  STRING_END,
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

static inline void skip_whitespaces(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    skip(lexer);
  }
}

void *tree_sitter_lua_external_scanner_create() { return NULL; }
void tree_sitter_lua_external_scanner_destroy(void *payload) {}

enum InsideNode { INSIDE_NONE, INSIDE_COMMENT, INSIDE_STRING };

uint8_t inside_node = INSIDE_NONE;
char opening_char = 0;
uint8_t level_count = 0;

static inline void reset_state() {
  inside_node = INSIDE_NONE;
  opening_char = 0;
  level_count = 0;
}

unsigned tree_sitter_lua_external_scanner_serialize(void *payload, char *buffer) {
  buffer[0] = inside_node;
  buffer[1] = opening_char;
  buffer[2] = level_count;
  return 3;
}

void tree_sitter_lua_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  if (length == 0) return;
  inside_node = buffer[0];
  if (length == 1) return;
  opening_char = buffer[1];
  if (length == 2) return;
  level_count = buffer[2];
}

static bool scan_string_start(TSLexer *lexer) {
  if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
    inside_node = INSIDE_STRING;
    opening_char = lexer->lookahead;
    consume(lexer);
    return true;
  }

  if (consume_char('[', lexer)) {
    uint8_t level = consume_and_count_char('=', lexer);

    if (consume_char('[', lexer)) {
      level_count = level;
      inside_node = INSIDE_STRING;
      return true;
    }
  }

  return false;
}

static bool scan_string_end(TSLexer *lexer) {
  if (opening_char == 0) { // block string
    if (consume_char(']', lexer)) {
      uint8_t level = consume_and_count_char('=', lexer);

      if (level_count == level && consume_char(']', lexer)) {
        return true;
      }
    }

    return false;
  }

  if (consume_char(opening_char, lexer)) {
    return true;
  }

  return false;
}

static bool scan_string_content(TSLexer *lexer) {
  if (opening_char == 0) { // block string
    while (lexer->lookahead != 0) {
      if (lexer->lookahead == ']') {
        lexer->mark_end(lexer);

        if (scan_string_end(lexer)) {
          return true;
        }
      }

      consume(lexer);
    }

    return false;
  }

  while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
    if (lexer->lookahead == opening_char) {
      return true;
    }

    if (consume_char('\\', lexer)) {
      if (lexer->lookahead == '\n' || lexer->lookahead == 0) {
        break;
      }
    }

    consume(lexer);
  }

  return false;
}

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

bool tree_sitter_lua_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (inside_node == INSIDE_STRING) {
    if (valid_symbols[STRING_END] && scan_string_end(lexer)) {
      reset_state();
      lexer->result_symbol = STRING_END;
      return true;
    }

    if (valid_symbols[STRING_CONTENT] && scan_string_content(lexer)) {
      lexer->result_symbol = STRING_CONTENT;
      return true;
    }

    return false;
  }

  skip_whitespaces(lexer);

  if (valid_symbols[COMMENT]) {
    if (consume_char('-', lexer) && consume_char('-', lexer)) {
      if (scan_block_content(lexer)) {
        lexer->result_symbol = COMMENT;
        return true;
      }

      while (iswspace(lexer->lookahead) && lexer->lookahead != '\n' && lexer->lookahead != 0) {
        consume(lexer);
      }

      lexer->result_symbol = COMMENT;

      while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
        consume(lexer);
      }

      return true;
    }
  }

  if (valid_symbols[STRING_START] && scan_string_start(lexer)) {
    lexer->result_symbol = STRING_START;
    return true;
  }

  return false;
}
