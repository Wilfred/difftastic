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

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    if (lexer->lookahead == '/') {
      skip(lexer);

      if (lexer->lookahead == '/') {
        skip(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          skip(lexer);
        }
      } else if (lexer->lookahead == '*') {
        skip(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '*') {
            skip(lexer);
            if (lexer->lookahead == '/') {
              skip(lexer);
              break;
            }
          } else {
            skip(lexer);
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
    skip(lexer);
    for (unsigned i = 0; i < len; i++) {
      if (lexer->lookahead != word[i]) return false;
      skip(lexer);
    }
    return true;
}

bool tree_sitter_kotlin_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (!valid_symbols[AUTOMATIC_SEMICOLON]) return false;
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  lexer->mark_end(lexer);

  bool sameline = true;
  for (;;) {
    if (lexer->eof(lexer))
      return true;

    if (lexer->lookahead == ';') {
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    }

    if (!iswspace(lexer->lookahead)) {
      break;
    }

    if (lexer->lookahead == '\n') {
      skip(lexer);

      sameline = false;
      break;
    }

    if (lexer->lookahead == '\r') {
      skip(lexer);

      if (lexer->lookahead == '\n') {
        skip(lexer);
      }

      sameline = false;
      break;
    }

    skip(lexer);
  }

  // Skip whitespace and comments
  if (!scan_whitespace_and_comments(lexer))
    return false;

  if (sameline) {
    switch (lexer->lookahead) {
      // Don't insert a semicolon before an else
      case 'e':
        return !scan_for_word(lexer, "lse", 3);

      case 'i':
        return scan_for_word(lexer, "mport", 5);

      case ';':
        advance(lexer);
        lexer->mark_end(lexer);
        return true;

      default:
        return false;
    }
  }

  switch (lexer->lookahead) {
    case ',':
    case '.':
    case ':':
    case '*':
    case '%':
    case '>':
    case '<':
    case '=':
    case '{':
    case '[':
    case '(':
    case '?':
    case '|':
    case '&':
    case '/':
      return false;

    // Insert a semicolon before `--` and `++`, but not before binary `+` or `-`.
    // Insert before +/-Float
    case '+':
      skip(lexer);
      if (lexer->lookahead == '+')
        return true;
      return iswdigit(lexer->lookahead);
    case '-':
      skip(lexer);
      if (lexer->lookahead == '-')
        return true;
      return iswdigit(lexer->lookahead);

    // Don't insert a semicolon before `!=`, but do insert one before a unary `!`.
    case '!':
      skip(lexer);
      return lexer->lookahead != '=';

    // Don't insert a semicolon before an else
    case 'e':
      return !scan_for_word(lexer, "lse", 3);

    // Don't insert a semicolon before `in` or `instanceof`, but do insert one
    // before an identifier or an import.
    case 'i':
      skip(lexer);
      if (lexer->lookahead != 'n')
        return true;

      skip(lexer);
      if (!iswalpha(lexer->lookahead))
        return false;

      return !scan_for_word(lexer, "stanceof", 8);

      case ';':
        advance(lexer);
        lexer->mark_end(lexer);
        return true;

    default:
      return true;
  }
}
