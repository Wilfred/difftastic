#include <tree_sitter/parser.h>

#define SINGLE_QUOTE '\''
#define DOUBLE_QUOTE '"'
#define BACKSLASH '\\'

enum TokenType {
  EOF,
  BASIC_STRING_START,
  BASIC_STRING_CONTENT,
  BASIC_STRING_END,
  MULTILINE_BASIC_STRING_START,
  MULTILINE_BASIC_STRING_CONTENT,
  MULTILINE_BASIC_STRING_END,
  LITERAL_STRING_START,
  LITERAL_STRING_CONTENT,
  LITERAL_STRING_END,
  MULTILINE_LITERAL_STRING_START,
  MULTILINE_LITERAL_STRING_CONTENT,
  MULTILINE_LITERAL_STRING_END
};

void *tree_sitter_toml_external_scanner_create() { return NULL; }
void tree_sitter_toml_external_scanner_destroy(void *p) {}
void tree_sitter_toml_external_scanner_reset(void *p) {}
unsigned tree_sitter_toml_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_toml_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

#define HANDLE_SINGLELINE_STRING_CONTENT(                                      \
  TOKEN_CHAR,                                                                  \
  STRING_CONTENT_TOKEN_TYPE,                                                   \
  STRING_END_TOKEN_TYPE,                                                       \
  LOOKAHEAD_WHITELIST_CONDITION,                                               \
  LOOKAHEAD_BLACKLIST_CONDITION                                                \
) {                                                                            \
  if (lexer->lookahead == TOKEN_CHAR) {                                        \
    lexer->advance(lexer, false);                                              \
    lexer->mark_end(lexer);                                                    \
    lexer->result_symbol = STRING_END_TOKEN_TYPE;                              \
    return true;                                                               \
  }                                                                            \
  for(                                                                         \
    bool has_content = false;;                                                 \
    has_content = true, lexer->advance(lexer, false)                           \
  ) {                                                                          \
    if (                                                                       \
      (LOOKAHEAD_WHITELIST_CONDITION)                                          \
      || (lexer->lookahead > 0x1f                                              \
        && lexer->lookahead != 0x7f                                            \
        && lexer->lookahead != TOKEN_CHAR                                      \
        && !(LOOKAHEAD_BLACKLIST_CONDITION))                                   \
    ) {                                                                        \
      continue;                                                                \
    }                                                                          \
    if (has_content) {                                                         \
      lexer->mark_end(lexer);                                                  \
      lexer->result_symbol = STRING_CONTENT_TOKEN_TYPE;                        \
      return true;                                                             \
    }                                                                          \
    break;                                                                     \
  }                                                                            \
}

#define HANDLE_MULTILINE_STRING_CONTENT(                                       \
  TOKEN_CHAR,                                                                  \
  STRING_CONTENT_TOKEN_TYPE,                                                   \
  STRING_END_TOKEN_TYPE,                                                       \
  LOOKAHEAD_WHITELIST_CONDITION,                                               \
  LOOKAHEAD_BLACKLIST_CONDITION                                                \
) {                                                                            \
  bool has_content = false;                                                    \
                                                                               \
  if (lexer->lookahead == TOKEN_CHAR) {                                        \
    lexer->advance(lexer, false);                                              \
    has_content = true;                                                        \
    if (lexer->lookahead == TOKEN_CHAR) {                                      \
      lexer->advance(lexer, false);                                            \
      if (lexer->lookahead == TOKEN_CHAR) {                                    \
        lexer->advance(lexer, false);                                          \
        lexer->mark_end(lexer);                                                \
        lexer->result_symbol = STRING_END_TOKEN_TYPE;                          \
        return true;                                                           \
      }                                                                        \
    }                                                                          \
  }                                                                            \
                                                                               \
  for(;; has_content = true, lexer->advance(lexer, false)) {                   \
    if (lexer->lookahead == TOKEN_CHAR) {                                      \
      lexer->mark_end(lexer);                                                  \
      lexer->advance(lexer, false);                                            \
      has_content = true;                                                      \
      if (lexer->lookahead == TOKEN_CHAR) {                                    \
        lexer->advance(lexer, false);                                          \
        if (lexer->lookahead == TOKEN_CHAR) {                                  \
          lexer->result_symbol = STRING_CONTENT_TOKEN_TYPE;                    \
          return true;                                                         \
        }                                                                      \
      }                                                                        \
    }                                                                          \
                                                                               \
    if (lexer->lookahead == '\r') {                                            \
      lexer->mark_end(lexer);                                                  \
      lexer->advance(lexer, false);                                            \
      if (lexer->lookahead == '\n') {                                          \
        has_content = true;                                                    \
      } else if (!has_content) {                                               \
        return false;                                                          \
      } else {                                                                 \
        lexer->result_symbol = STRING_CONTENT_TOKEN_TYPE;                      \
        return true;                                                           \
      }                                                                        \
    }                                                                          \
                                                                               \
    if (                                                                       \
      (LOOKAHEAD_WHITELIST_CONDITION)                                          \
      || lexer->lookahead == '\r'                                              \
      || lexer->lookahead == '\n'                                              \
      || (lexer->lookahead > 0x1f                                              \
        && lexer->lookahead != 0x7f                                            \
        && lexer->lookahead != TOKEN_CHAR                                      \
        && !(LOOKAHEAD_BLACKLIST_CONDITION))                                   \
    ) {                                                                        \
      continue;                                                                \
    }                                                                          \
                                                                               \
    if (has_content) {                                                         \
      lexer->mark_end(lexer);                                                  \
      lexer->result_symbol = STRING_CONTENT_TOKEN_TYPE;                        \
      return true;                                                             \
    }                                                                          \
                                                                               \
    break;                                                                     \
  }                                                                            \
}

bool tree_sitter_toml_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (lexer->lookahead == 0 && valid_symbols[EOF]) {
    lexer->result_symbol = EOF;
    lexer->mark_end(lexer);
    return true;
  }

  if (valid_symbols[BASIC_STRING_CONTENT]) {
    HANDLE_SINGLELINE_STRING_CONTENT(
      DOUBLE_QUOTE,
      BASIC_STRING_CONTENT,
      BASIC_STRING_END,
      false,
      lexer->lookahead == BACKSLASH
    );
  }

  if (valid_symbols[MULTILINE_BASIC_STRING_CONTENT]) {
    HANDLE_MULTILINE_STRING_CONTENT(
      DOUBLE_QUOTE,
      MULTILINE_BASIC_STRING_CONTENT,
      MULTILINE_BASIC_STRING_END,
      false,
      lexer->lookahead == BACKSLASH
    );
  }

  if (valid_symbols[LITERAL_STRING_CONTENT]) {
    HANDLE_SINGLELINE_STRING_CONTENT(
      SINGLE_QUOTE,
      LITERAL_STRING_CONTENT,
      LITERAL_STRING_END,
      lexer->lookahead == '\t',
      false
    );
  }

  if (valid_symbols[MULTILINE_LITERAL_STRING_CONTENT]) {
    HANDLE_MULTILINE_STRING_CONTENT(
      SINGLE_QUOTE,
      MULTILINE_LITERAL_STRING_CONTENT,
      MULTILINE_LITERAL_STRING_END,
      lexer->lookahead == '\t',
      false
    );
  }

  if (
    valid_symbols[BASIC_STRING_START]
    || valid_symbols[MULTILINE_BASIC_STRING_START]
    || valid_symbols[LITERAL_STRING_START]
    || valid_symbols[MULTILINE_LITERAL_STRING_START]
  ) {
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      lexer->advance(lexer, true);
    }

    int32_t token_char = 0;
    enum TokenType single_token_type;
    enum TokenType triple_token_type;

    if (lexer->lookahead == SINGLE_QUOTE) {
      token_char = SINGLE_QUOTE;
      single_token_type = LITERAL_STRING_START;
      triple_token_type = MULTILINE_LITERAL_STRING_START;
    } else if (lexer->lookahead == DOUBLE_QUOTE) {
      token_char = DOUBLE_QUOTE;
      single_token_type = BASIC_STRING_START;
      triple_token_type = MULTILINE_BASIC_STRING_START;
    }

    if (token_char != 0) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      lexer->result_symbol = single_token_type;
      if (valid_symbols[triple_token_type]) {
        if (lexer->lookahead == token_char) {
          lexer->advance(lexer, false);
          if (lexer->lookahead == token_char) {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            lexer->result_symbol = triple_token_type;
            return true;
          }
        }
      }
      if (valid_symbols[single_token_type]) {
        return true;
      }
    }
  }

  return false;
}
