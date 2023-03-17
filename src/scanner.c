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

void *tree_sitter_kotlin_external_scanner_create() { 
  bool* in_string = malloc(sizeof(bool));
  *in_string = false;

  return in_string;
}

void tree_sitter_kotlin_external_scanner_destroy(void *p) {
  free(p);
}

unsigned tree_sitter_kotlin_external_scanner_serialize(void *p, char *buffer) {
  if (*((bool*) p)) {
    buffer[0] = 'a';
  }
  else {
    buffer[0] = 'b';
  }
  return 1;
}

void tree_sitter_kotlin_external_scanner_deserialize(void *p, const char *b, unsigned n) {
  if (n > 0) {
    if (b[0] == 'a') {
      *((bool*) p) = true; 
    }
    else {
      *((bool*) p) = false; 
    }
  }
}

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool scan_string_delim(bool* payload, TSLexer *lexer) {
  lexer->result_symbol = STRING_DELIM;
  lexer->mark_end(lexer);
  
  // This inverts whether we are in a string or not.
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

  // This inverts whether we are in a string or not.
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

  bool *in_string = payload;

  // this needs to be up here or line literals containing comments won't work
  // actually just any string literals won't work

  // this might be possible when we're after a return
  // like
  // return "hi"
  // which will inhibit us from going down and picking a string
  if (valid_symbols[AUTOMATIC_SEMICOLON] && !(lexer->lookahead == '/')) {
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


  while(iswspace(lexer->lookahead)) {
    skip(lexer);
  }

  if (valid_symbols[STRING_DELIM] && lexer->lookahead == '"') {
    advance(lexer);
    *in_string = !(*in_string);

    if (lexer->lookahead == '"') {
      return scan_multi_line_string_delim(payload, lexer);
    }
    return scan_string_delim(payload, lexer);
  }

  // but this needs to be up here or comments won't work
  // because removing this check for in_string causes tests to pass, there must be values for
  // which this value is changing
  // only lex comments if we are not currently within a string
  else if (!(*in_string) && valid_symbols[COMMENT] && (iswspace(lexer->lookahead) || lexer->lookahead == '/')) {
    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }
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
