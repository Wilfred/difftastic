#include <tree_sitter/parser.h>

#include <wctype.h>
#include <string.h>
#include <stdio.h>

enum TokenType {
  QUOTED_TEMPLATE_START,
  QUOTED_TEMPLATE_END,
  TEMPLATE_LITERAL_CHUNK,
  TEMPLATE_INTERPOLATION_START,
  TEMPLATE_INTERPOLATION_END,
};

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool accept_inplace(TSLexer *lexer, enum TokenType token) {
  lexer->result_symbol = token;
  return true;
}

static bool accept_and_advance(TSLexer *lexer, enum TokenType token) {
  advance(lexer);
  return accept_inplace(lexer, token);
}

static bool consume_wxdigit(TSLexer *lexer) {
  advance(lexer);
  return iswxdigit(lexer->lookahead);
}

typedef struct Scanner {
  bool in_template_interpolation;
  bool in_quoted_context;
  int template_interpolation_depth;
  int quoted_context_depth;
} Scanner;

void print_debug_info(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  printf("\nDEBUG INFO START\n\n");
  printf("currently at: '%c'\n\n", lexer->lookahead);
  printf("could be one of\n");
  printf("quoted_template_start: %x\n", valid_symbols[QUOTED_TEMPLATE_START]);
  printf("quoted_template_end: %x\n", valid_symbols[QUOTED_TEMPLATE_END]);
  printf("template_literal_chunk: %x", valid_symbols[TEMPLATE_LITERAL_CHUNK]);
  printf("template_interpolation_start: %x\n", valid_symbols[TEMPLATE_INTERPOLATION_START]);
  printf("template_interpolation_end: %x\n", valid_symbols[TEMPLATE_INTERPOLATION_END]);
  printf("\n");
  printf("scanner state:\n");
  printf("in_template_interpolation %x\n", scanner->in_template_interpolation);
  printf("in_quoted_context %x\n", scanner->in_quoted_context);
  printf("template_interpolation_depth %x\n", scanner->template_interpolation_depth);
  printf("quoted_context_depth %x\n", scanner->quoted_context_depth);
  printf("\nDEBUG INFO END\n\n");
}

void scanner_enter_interpolation_context(Scanner *scanner) {
  scanner->template_interpolation_depth++;
  scanner->in_template_interpolation = true;
  scanner->in_quoted_context = false;
}

void scanner_exit_interpolation_context(Scanner *scanner) {
  scanner->template_interpolation_depth--;
  scanner->in_template_interpolation = false;
  if (scanner->quoted_context_depth > 0) {
    scanner->in_quoted_context = true;
  }
}

void scanner_enter_quoted_context(Scanner *scanner) {
  scanner->quoted_context_depth++;
  scanner->in_quoted_context = true;
  scanner->in_template_interpolation = false;
}

void scanner_exit_quoted_context(Scanner *scanner) {
  scanner->quoted_context_depth--;
  scanner->in_quoted_context = false;
  if (scanner->template_interpolation_depth > 0) {
    scanner->in_template_interpolation = true;
  }
}

bool must_escape_in_nested_quoted_context(char c) {
  switch (c) {
    case '\n':
    case '\r':
    case '\t':
      return true;
    default:
      return false;
  }
}

bool scanner_scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  // literal newlines are not allowed inside a quoted context
  if (must_escape_in_nested_quoted_context(lexer->lookahead) && scanner->quoted_context_depth > 0) {
    return false;
  }
  while (iswspace(lexer->lookahead) && !scanner->in_quoted_context) skip(lexer);


  // manage quoted context
  if (valid_symbols[QUOTED_TEMPLATE_START] && lexer->lookahead == '"') {
    scanner_enter_quoted_context(scanner);
    return accept_and_advance(lexer, QUOTED_TEMPLATE_START);
  }
  if (valid_symbols[QUOTED_TEMPLATE_END] && lexer->lookahead == '"') {
    scanner_exit_quoted_context(scanner);
    return accept_and_advance(lexer, QUOTED_TEMPLATE_END);
  }


  // manage template interpolations
  if (valid_symbols[TEMPLATE_INTERPOLATION_START] && lexer->lookahead == '$') {
    advance(lexer);
    if (lexer->lookahead == '{') {
      scanner_enter_interpolation_context(scanner);
      return accept_and_advance(lexer, TEMPLATE_INTERPOLATION_START);
    }
    if (valid_symbols[TEMPLATE_LITERAL_CHUNK]) {
      // try to scan escape sequence
      if (lexer->lookahead == '$') {
        advance(lexer);
        if (lexer->lookahead == '{') {
          // $${
          return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
        }
      }
      return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
    }
  }
  if (valid_symbols[TEMPLATE_INTERPOLATION_END] && lexer->lookahead == '}') {
    scanner_exit_interpolation_context(scanner);
    return accept_and_advance(lexer, TEMPLATE_INTERPOLATION_END);
  }


  // handle escape sequences in direct surrounding quoted contexts
  if (valid_symbols[TEMPLATE_LITERAL_CHUNK] && scanner->in_quoted_context) {
    switch (lexer->lookahead) {
      case '\\':
        advance(lexer);
        switch (lexer->lookahead) {
          case '"':
          case 'n':
          case 'r':
          case 't':
          case '\\':
            return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
          case 'u':
            for (int i = 0; i < 4; i++) {
              if (!consume_wxdigit(lexer)) return false;
            }
            return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
          case 'U':
            for (int i = 0; i < 8; i++) {
              if (!consume_wxdigit(lexer)) return false;
            }
            return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
          default:
            return false;
        }
      default:
        return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
    }
  }
  return false;
}

void *tree_sitter_hcl_external_scanner_create() {
  Scanner *scanner = (Scanner*)malloc(sizeof(Scanner));
  if (scanner) {
    scanner->in_template_interpolation = false;
    scanner->in_quoted_context = false;
    scanner->template_interpolation_depth = 0;
    scanner->quoted_context_depth = 0;
  }
  return scanner;
}

void tree_sitter_hcl_external_scanner_destroy(void *p) {
  free(p);
}

unsigned tree_sitter_hcl_external_scanner_serialize(void *p, char *b) {
  memcpy(b, p, sizeof(Scanner)); return sizeof(Scanner);
}

void tree_sitter_hcl_external_scanner_deserialize(void *p, const char *b, unsigned n) {
  memcpy(p, b, n);
}

bool tree_sitter_hcl_external_scanner_scan(void *p, TSLexer *lexer, const bool *valid_symbols) {
  return scanner_scan((Scanner*)p, lexer, valid_symbols);
}

