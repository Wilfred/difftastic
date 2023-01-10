#include <tree_sitter/parser.h>
#include <wctype.h>

// Mostly a copy paste of tree-sitter-javascript/src/scanner.c

enum TokenType {
  AUTOMATIC_SEMICOLON,
  IMPORT_LIST_DELIMITER,
  SAFE_NAV,
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

bool scan_automatic_semicolon(TSLexer *lexer) {
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

bool scan_safe_nav(TSLexer *lexer) {
  lexer->result_symbol = SAFE_NAV;
  lexer->mark_end(lexer);

  // skip white space
  if (!scan_whitespace_and_comments(lexer))
    return false;

  if (lexer->lookahead != '?')
    return false;

  advance(lexer);

  if (!scan_whitespace_and_comments(lexer))
    return false;

  if (lexer->lookahead != '.')
    return false;

  advance(lexer);
  lexer->mark_end(lexer);
  return true;
}

bool scan_line_sep(TSLexer *lexer) {
  // Line Seps: [ CR, LF, CRLF ]
  int state = 0;
  while (true) {
    switch(lexer->lookahead) {
      case  ' ':
      case '\t':
      case '\v':
        // Skip whitespace
        advance(lexer);
        break;

      case '\n':
        advance(lexer);
        return true;

      case '\r':
        if (state == 1)
          return true;

        state = 1;
        advance(lexer);
        break;

      default:
        // We read a CR
        if (state == 1)
          return true;

        return false;
    }
  }
}

bool scan_import_list_delimiter(TSLexer *lexer) {
  // Import lists are terminated either by an empty line or a non import statement
  lexer->result_symbol = IMPORT_LIST_DELIMITER;
  lexer->mark_end(lexer);

  // if eof; return true
  if (lexer->eof(lexer))
    return true;

  // Scan for the first line seperator
  if (!scan_line_sep(lexer))
    return false;

  // if line.sep line.sep; return true
  if (scan_line_sep(lexer)) {
    lexer->mark_end(lexer);
    return true;
  }

  // if line.sep [^import]; return true
  while (true) {
    switch (lexer->lookahead) {
      case  ' ':
      case '\t':
      case '\v':
        // Skip whitespace
        advance(lexer);
        break;

      case 'i':
        return !scan_for_word(lexer, "mport", 5);

      default:
        return true;
    }

    return false;
  }
}

bool tree_sitter_kotlin_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (valid_symbols[AUTOMATIC_SEMICOLON]) {
    bool ret = scan_automatic_semicolon(lexer);
    if (!ret && valid_symbols[SAFE_NAV] && lexer->lookahead == '?')
      return scan_safe_nav(lexer);

    return ret;
  }

  if (valid_symbols[SAFE_NAV]) {
    return scan_safe_nav(lexer);
  }

  if (valid_symbols[IMPORT_LIST_DELIMITER])
    return scan_import_list_delimiter(lexer);

  return false;
}
