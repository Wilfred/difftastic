#include <tree_sitter/parser.h>
#include <wctype.h>

// Mostly a copy paste of tree-sitter-javascript/src/scanner.c

enum TokenType {
  AUTOMATIC_SEMICOLON,
  IMPORT_LIST_DELIMITER,
  SAFE_NAV,
  MULTI_LINE_STRING_DELIM,
  STRING_DELIM,
  COMMENT,
};

// We create a bool for our state, which is meant to denote whether or not
// the scanner is currently within a string.
// This will let us ignore comments, which otherwise would be tokenized within
// strings.
// This method is borrowed from the OCaml tree-sitter parser.
void *tree_sitter_kotlin_external_scanner_create() { 
  bool *in_string = malloc(sizeof(bool));

  return in_string;
}

void tree_sitter_kotlin_external_scanner_destroy(void *p) {
  free(p);
}

unsigned tree_sitter_kotlin_external_scanner_serialize(void *p, char *buffer) {
  bool *in_string = p;
  buffer[0] = *in_string;

  return 1;
}

void tree_sitter_kotlin_external_scanner_deserialize(void *p, const char *b, unsigned n) {
  bool *in_string = p;
  if (n > 0) {
    *in_string = b[0];
  }
}

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool scan_string_delim(bool* payload, TSLexer *lexer) {
  lexer->result_symbol = STRING_DELIM;
  lexer->mark_end(lexer);
  
  return true;
}

bool scan_multi_line_string_delim(bool* payload, TSLexer *lexer) {
  lexer->result_symbol = MULTI_LINE_STRING_DELIM;

  for (int i = 0; i < 2; i++) {
    if (lexer->lookahead == '"') {
      advance(lexer);
    } else {
      return false;
    }
  }

  lexer->mark_end(lexer);
  return true;
}

bool scan_comment(TSLexer *lexer) {
  if (lexer->lookahead == '/') {
    advance(lexer);
    while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
      advance(lexer);
    }
    lexer->mark_end(lexer);
    return true;
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
    lexer->mark_end(lexer);
    return true;
  } else {
    return false;
  }
}

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    if (lexer->lookahead == '/') {
      return false;
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

  bool *in_string = payload;

  if (valid_symbols[AUTOMATIC_SEMICOLON]) {
    bool ret = scan_automatic_semicolon(lexer);
    if (!ret && valid_symbols[SAFE_NAV] && lexer->lookahead == '?')
      return scan_safe_nav(lexer);

    // if we fail to find an automatic semicolon, it's still possible that we may 
    // want to lex a string or comment later
    if (ret)
      return ret;
  }

  if (valid_symbols[IMPORT_LIST_DELIMITER])
    return scan_import_list_delimiter(lexer);

  // a string might follow after some whitespace, so we can't lookahead 
  // until we get rid of it
  while(iswspace(lexer->lookahead)) {
    skip(lexer);
  }

  if (valid_symbols[STRING_DELIM] && lexer->lookahead == '"') {
    advance(lexer);

    *in_string = !(*in_string);

    lexer->result_symbol = STRING_DELIM;
    lexer->mark_end(lexer);

    if (lexer->lookahead == '"') {
      advance(lexer);
      // This might still be the empty string.
      // In which case, if we don't see a third quote, we know we
      // should parse just the first quote.

      if (lexer->lookahead == '"') {
        advance(lexer);

				// We return here if there are four strings in a row, because
				// the first one is a quote interior to a multi line string delim.
				// So we want to shift forward by one and try the multi line string
				// delim again.
        if (lexer->lookahead == '"') {
          return false;
        }

        lexer->result_symbol = MULTI_LINE_STRING_DELIM;
        lexer->mark_end(lexer);
      }
    }

    return true;
  }

  // only lex comments if we are not currently within a string
  else if (!(*in_string) && valid_symbols[COMMENT] && lexer->lookahead == '/') {
    if (lexer->lookahead == '/') {
      advance(lexer);
      lexer->result_symbol = COMMENT;
      return scan_comment(lexer);
    }
    return false;
  } 

  else if (valid_symbols[SAFE_NAV]) {
    return scan_safe_nav(lexer);
  }

  return false;
}
