#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  TEMPLATE_CHAR,
  TEMPLATE_CHAR_IN_INTERPOLATION,
  ESCAPE_SEQUENCE
};

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool accept_template_char_inplace(TSLexer *lexer) {
    lexer->result_symbol = TEMPLATE_CHAR;
    return true;
}

static bool advance_and_accept_template_char(TSLexer *lexer) {
    advance(lexer);
    return accept_template_char_inplace(lexer);
}

static bool advance_and_accept_escape_sequence(TSLexer *lexer) {
    advance(lexer);
    lexer->result_symbol = ESCAPE_SEQUENCE;
    return true;
}

static bool advance_and_accept_template_char_in_interpolation(TSLexer *lexer) {
    advance(lexer);
    lexer->result_symbol = TEMPLATE_CHAR_IN_INTERPOLATION;
    return true;
}

static bool consume_wxdigit(TSLexer *lexer) {
    advance(lexer);
    return iswxdigit(lexer->lookahead);
}

// scan escape sequences \n \t \r \\ \" \uHHHH or \UHHHHHHHHA where H is a hex digit
// assumes that the leading character is '\'
static bool scan_backslash_escape_sequence(TSLexer *lexer) {
  advance(lexer);
  switch (lexer->lookahead) {
    case '"':
    case 'n':
    case 'r':
    case 't':
    case '\\':
      return advance_and_accept_escape_sequence(lexer);
    case 'u':
      for (int i = 0; i < 4; i++) {
        if (!consume_wxdigit(lexer)) return false;
      }
      return advance_and_accept_escape_sequence(lexer);
    case 'U':
      for (int i = 0; i < 8; i++) {
        if (!consume_wxdigit(lexer)) return false;
      }
      return advance_and_accept_escape_sequence(lexer);
    default:
      return false;
  }
}

// may accept multiple characters like %% as a 'template literal chunk'
// assumes that the leading character is '%' or '$'
static bool scan_template_literal_chunk_or_template_escape_sequence(TSLexer *lexer) {
  const leading_char = lexer->lookahead;

  advance(lexer);
  // reject %{ because its the start of template directives
  if (lexer->lookahead == '{') return false;
  if (lexer->lookahead == leading_char) {
    advance(lexer);
    // accept %%{ as escape sequence
    if (lexer->lookahead == '{') return advance_and_accept_escape_sequence(lexer);
  }
  // accept % and %% as template chars
  return accept_template_char_inplace(lexer);
}

static bool scan_template_char_or_escape_sequence(TSLexer *lexer) {
  switch (lexer->lookahead) {
    case '"':
    case '\n':
    case '\r':
    case '\t':
      return false;
    case '\\':
      return scan_backslash_escape_sequence(lexer);
    case '$':
    case '%':
      return scan_template_literal_chunk_or_template_escape_sequence(lexer);
    default:
      return advance_and_accept_template_char(lexer);
  }
}

static bool scan_template_char_in_interpolation_or_escape_sequence(TSLexer *lexer) {
  switch (lexer->lookahead) {
    case '"':
    case '\n':
    case '\r':
    case '\t':
    // no template interpolation chars are allowed in template interpolations ( even escaped )
    case '$':
    case '%':
    case '~':
      return false;
    // '}' ends the template interpolation
    case '}':
      return false;
    case '\\':
      return scan_backslash_escape_sequence(lexer);
    default:
      return advance_and_accept_template_char_in_interpolation(lexer);
  }
}

// scanner

void *tree_sitter_hcl_external_scanner_create() { return NULL; }
void tree_sitter_hcl_external_scanner_destroy(void *p) {}
void tree_sitter_hcl_external_scanner_reset(void *p) {}
unsigned tree_sitter_hcl_external_scanner_serialize(void *p, char *b) { return 0; }
void tree_sitter_hcl_external_scanner_deserialize(void *p, const char *b, unsigned n) {}


bool tree_sitter_hcl_external_scanner_scan(
  void *p,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  // when scanning string literals or quoted template literals that are not in an template directive
  if (valid_symbols[TEMPLATE_CHAR] && valid_symbols[ESCAPE_SEQUENCE]) {
    return scan_template_char_or_escape_sequence(lexer);
  }
  // quoted template literals currently inside a template directive
  if (valid_symbols[TEMPLATE_CHAR_IN_INTERPOLATION] && valid_symbols[ESCAPE_SEQUENCE]) {
    return scan_template_char_in_interpolation_or_escape_sequence(lexer);
  }
  return false;
}

