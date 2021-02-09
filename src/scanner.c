#include <tree_sitter/parser.h>

enum TokenType {
  STR_CONTENT,
  IND_STR_CONTENT,
  ESCAPE_SEQUENCE,
  IND_ESCAPE_SEQUENCE,

  NONE
};

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static void skip(TSLexer *lexer) {
  lexer->advance(lexer, true);
}

static bool scan_str(TSLexer *lexer) {
  bool has_content = false;
  lexer->result_symbol = STR_CONTENT;

  while (true) {
    switch (lexer->lookahead) {
      case '"':
        if (has_content) {
          lexer->mark_end(lexer);
          return true;
        } else {
          return false;
        }
      case '\\':
        lexer->mark_end(lexer);
        if (!has_content) {
          advance(lexer);
          // accept anything following the '\\'
          advance(lexer);
          lexer->result_symbol = ESCAPE_SEQUENCE;
          lexer->mark_end(lexer);
        }
        return true;
      case '$':
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            return true;
          } else {
            return false;
          }
        }
        has_content = true;
        break;
      case '\0':
        if (lexer->eof(lexer)) {
          return false;
        }
        advance(lexer);
        has_content = true;
        break;
      default:
        advance(lexer);
        has_content = true;
        break;
    }
  }
}

static bool scan_ind_str(TSLexer *lexer) {
  bool has_content = false;
  lexer->result_symbol = IND_STR_CONTENT;
  while (true) {
    switch (lexer->lookahead) {
      case '$':
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            return true;
          } else {
            return false;
          }
        }
        break;
      case '\'':
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '\'') {
          advance(lexer);
          if (lexer->lookahead == '\'') {
            if (!has_content) {
              advance(lexer);
              lexer->result_symbol = IND_ESCAPE_SEQUENCE;
              lexer->mark_end(lexer);
            }
            return true;
          } else if (lexer->lookahead == '\\') {
            if (!has_content) {
              advance(lexer);
              // accept anything following the '\\'
              advance(lexer);
              lexer->result_symbol = IND_ESCAPE_SEQUENCE;
              lexer->mark_end(lexer);
            }
            return true;
          } else if (lexer->lookahead == '$') {
            if (!has_content) {
              advance(lexer);
              lexer->result_symbol = IND_ESCAPE_SEQUENCE;
              lexer->mark_end(lexer);
            }
            return true;
          } else {
            if (has_content) {
              return true;
            } else {
              return false;
            }
          }
        } else {
          advance(lexer);
          has_content = true;
        }
        break;
      case '\0':
        if (lexer->eof(lexer)) {
          return false;
        }
        advance(lexer);
        has_content = true;
        break;
      default:
        advance(lexer);
        has_content = true;
        break;
    }
  }
}

static bool scan(TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[STR_CONTENT]) {
    return scan_str(lexer);
  } else if (valid_symbols[IND_STR_CONTENT]) {
    return scan_ind_str(lexer);
  }

  return false;
}

#ifdef __cplusplus
extern "C" {
#endif

void *tree_sitter_nix_external_scanner_create() {
  return NULL;
}

bool tree_sitter_nix_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  return scan(lexer, valid_symbols);
}

unsigned tree_sitter_nix_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_nix_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) { }

void tree_sitter_nix_external_scanner_destroy(void *payload) { }

#ifdef __cplusplus
}
#endif
