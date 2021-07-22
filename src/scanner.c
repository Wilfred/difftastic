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
  // We want to delegate the scanning of the start-of-string/end-of-string '"'
  // character to the grammar defined in grammar.js.
  // So the idea is we track if we've seen any string content,
  // and if we see EOF or an unescaped '"' char _and_ we haven't consumed any string content,
  // we return false to indicate to tree-sitter that our custom scanner has not found
  // a token.
  // Additionally, if we come across an escape sequence and we already have content,
  // we want to mark the end of that content and stop scanning (i.e. return true);
  // when tree-sitter calls us next, we'll resume from where we left off
  // (i.e. right at the start of the escape sequence).
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
        } else if (lexer->lookahead != '"' && lexer->lookahead != '\\' ) {
          // any char following '$' other than '"', '\\' and '{' (which was handled above)
          // should be consumed as additional string content.
          advance(lexer);
          lexer->mark_end(lexer);
        }
        has_content = true;
        break;
      case '\0':
        if (lexer->eof(lexer)) {
          if (has_content) {
            lexer->mark_end(lexer);
            return true;
          } else {
            return false;
          }
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
  // See the comment about has_content in scan_str().
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
        } else if (lexer->lookahead != '\'') {
          // any char following '$' other than '\'' and '{' (which was handled above)
          // should be consumed as additional string content.
          advance(lexer);
          lexer->mark_end(lexer);
        }
        has_content = true;
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
          if (has_content) {
            lexer->mark_end(lexer);
            return true;
          } else {
            return false;
          }
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
