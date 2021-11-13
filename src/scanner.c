#include <tree_sitter/parser.h>
#include <wctype.h>

// Mostly a copy paste of tree-sitter-javascript/src/scanner.c

enum TokenType {
  AUTOMATIC_SEMICOLON,
};

void *tree_sitter_kotlin_external_scanner_create() { return NULL; }
void tree_sitter_kotlin_external_scanner_destroy(void *p) {}
void tree_sitter_kotlin_external_scanner_reset(void *p) {}
unsigned tree_sitter_kotlin_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_kotlin_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      advance(lexer);
    }

    if (lexer->lookahead == '/') {
      advance(lexer);

      if (lexer->lookahead == '/') {
        advance(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          advance(lexer);
        }
      } else if (lexer->lookahead == '*') {
        advance(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '*') {
            advance(lexer);
            if (lexer->lookahead == '/') {
              advance(lexer);
              break;
            }
          } else {
            advance(lexer);
          }
        }
      } else {
        return false;
      }
    } else {
      return true;
    }
  }
}

bool scan_for_word(TSLexer *lexer, char* word, unsigned len) {
    advance(lexer);
    for (unsigned i = 0; i < len; i++) {
      if (lexer->lookahead != word[i]) return true;
      advance(lexer);
    }
    return false;
}

bool tree_sitter_kotlin_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (!valid_symbols[AUTOMATIC_SEMICOLON]) return false;
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  lexer->mark_end(lexer);

  for (;;) {
    if (!iswspace(lexer->lookahead)) return false;
    if (lexer->lookahead == '\n') break;
    // other whitespace (not newline)
    advance(lexer);
  }
  // consume the '\n' from the break
  advance(lexer);

  if (!scan_whitespace_and_comments(lexer)) return false;

  switch (lexer->lookahead) {
    // specific to Kotlin
    case 's': // ex: getter function defined on line after variable declaration
    case 'g': // ex: setter function defined on line after variable declaration
      return scan_for_word(lexer, "et()", 4);
    case 'e': // ex: else on next line after 'if' control body
      return scan_for_word(lexer, "lse", 3);
    case '{': // ex: function body defined on next line after decl

    // cases also in tree-sitter-javascript/src/scanner.c
    case '.': // ex: method-chain calls on next line
    case ':': // ex: inheritance clause defined on next line
    case '=': // ex: fun/val definition on next line (or == binop)
    case '?': // ex: elvis operator ?: on next line
    case '^': // ex: binary operator between 2 exprs
    case '|': // ex: binary operator between 2 exprs
    case '&': // ex: binary operator between 2 exprs

      return false;
  }

  return true;
}
