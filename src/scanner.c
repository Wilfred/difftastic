#include <tree_sitter/parser.h>

enum TokenType {
  STRING_FRAGMENT,
  INDENTED_STRING_FRAGMENT,
};

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

// Here we only parse literal fragment inside a string.
// Delimiter, interpolation and escape sequence are handled by the parser and we simply stop at them.
//
// The implementation is inspired by tree-sitter-javascript:
// https://github.com/tree-sitter/tree-sitter-javascript/blob/fdeb68ac8d2bd5a78b943528bb68ceda3aade2eb/src/scanner.c#L19
static bool scan_string_fragment(TSLexer *lexer) {
  lexer->result_symbol = STRING_FRAGMENT;
  for (bool has_content = false;; has_content = true) {
    lexer->mark_end(lexer);
    switch (lexer->lookahead) {
      case '"':
      case '\\':
        return has_content;
      case '$':
        advance(lexer);
        if (lexer->lookahead == '{') {
          return has_content;
        } else if (lexer->lookahead != '"' && lexer->lookahead != '\\') {
          // Any char following '$' other than '"', '\\' and '{' (which was handled above)
          // should be consumed as additional string content.
          // This means `$${` doesn't start an interpolation, but `$$${` does.
          advance(lexer);
        }
        break;
      // Simply give up on EOF or '\0'.
      case '\0':
        return false;
      default:
        advance(lexer);
    }
  }
}

// See comments of scan_string_fragment.
static bool scan_indented_string_fragment(TSLexer *lexer) {
  lexer->result_symbol = INDENTED_STRING_FRAGMENT;
  for (bool has_content = false;; has_content = true) {
    lexer->mark_end(lexer);
    switch (lexer->lookahead) {
      case '$':
        advance(lexer);
        if (lexer->lookahead == '{') {
          return has_content;
        } else if (lexer->lookahead != '\'') {
          // Any char following '$' other than '\'' and '{' (which was handled above)
          // should be consumed as additional string content.
          // This means `$${` doesn't start an interpolation, but `$$${` does.
          advance(lexer);
        }
        break;
      case '\'':
        advance(lexer);
        if (lexer->lookahead == '\'') {
          // Two single quotes always stop current string fragment.
          // It can be either an end delimiter '', or escape sequences ''', ''$, ''\<any>
          return has_content;
        }
        break;
      // Simply give up on EOF or '\0'.
      case '\0':
        return false;
      default:
        advance(lexer);
    }
  }
}

void *tree_sitter_nix_external_scanner_create() {
  return NULL;
}

bool tree_sitter_nix_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  if (valid_symbols[STRING_FRAGMENT]) {
    return scan_string_fragment(lexer);
  } else if (valid_symbols[INDENTED_STRING_FRAGMENT]) {
    return scan_indented_string_fragment(lexer);
  }

  return false;
}

unsigned tree_sitter_nix_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_nix_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) { }

void tree_sitter_nix_external_scanner_destroy(void *payload) { }
