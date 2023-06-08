#include "stack.h"
#include "tree_sitter/parser.h"
#include <stdio.h>
#include <string.h>
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
  INDENT,
  INTERPOLATED_STRING_MIDDLE,
  INTERPOLATED_STRING_END,
  INTERPOLATED_MULTILINE_STRING_MIDDLE,
  INTERPOLATED_MULTILINE_STRING_END,
  OUTDENT,
  SIMPLE_MULTILINE_STRING,
  SIMPLE_STRING,
  ELSE,
  CATCH,
  FINALLY,
  EXTENDS,
  WITH,
};

void *tree_sitter_scala_external_scanner_create() {
  return createStack();
}

void tree_sitter_scala_external_scanner_destroy(void *p) {
  free(p);
}

void tree_sitter_scala_external_scanner_reset(void *p) {
  resetStack(p);
}

unsigned tree_sitter_scala_external_scanner_serialize(void *p, char *buffer) {
  return serialiseStack(p, buffer);
}

void tree_sitter_scala_external_scanner_deserialize(void *p, const char *b,
                                                    unsigned n) {
  deserialiseStack(p, b, n);
}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_string_content(TSLexer *lexer, bool is_multiline, bool has_interpolation) {
  unsigned closing_quote_count = 0;
  for (;;) {
    if (lexer->lookahead == '"') {
      advance(lexer);
      closing_quote_count++;
      if (!is_multiline) {
        lexer->result_symbol = has_interpolation ? INTERPOLATED_STRING_END : SIMPLE_STRING;
        return true;
      }
      if (closing_quote_count >= 3 && lexer->lookahead != '"') {
        lexer->result_symbol = has_interpolation ? INTERPOLATED_MULTILINE_STRING_END : SIMPLE_MULTILINE_STRING;
        return true;
      }
    } else if (lexer->lookahead == '$') {
      if (is_multiline && has_interpolation) {
        lexer->result_symbol =  INTERPOLATED_MULTILINE_STRING_MIDDLE;
        return true;
      } else if (has_interpolation){
        lexer->result_symbol = INTERPOLATED_STRING_MIDDLE;
        return true;
      } else {
        advance(lexer);
      }
    } else {
      closing_quote_count = 0;
      if (lexer->lookahead == '\\') {
        advance(lexer);
        if (lexer->lookahead != 0) advance(lexer);
      } else if (lexer->lookahead == '\n') {
        if (is_multiline) {
          advance(lexer);
        } else {
          return false;
        }
      } else if (lexer->lookahead == 0) {
        return false;
      } else {
        advance(lexer);
      }
    }
  }
}

bool tree_sitter_scala_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  ScannerStack *stack = (ScannerStack *)payload;
  int prev = peekStack(stack);
  int newline_count = 0;
  int indentation_size = 0;
  LOG("scanner was called at column: %d\n", lexer->get_column(lexer));

  // Before advancing the lexer, check if we can double outdent
  if (valid_symbols[OUTDENT] &&
      (lexer->lookahead == 0 ||
      (
        (prev != -1) &&
        lexer->lookahead == ')' ||
        lexer->lookahead == ']'
      ) || (
        stack->last_indentation_size != -1 &&
        prev != -1 &&
        stack->last_indentation_size < prev))) {
    popStack(stack);
    LOG("    pop\n");
    LOG("    OUTDENT\n");
    lexer->result_symbol = OUTDENT;
    return true;
  }
  stack->last_indentation_size = -1;

  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') {
      newline_count++;
      indentation_size = 0;
    }
    else
      indentation_size++;
    lexer->advance(lexer, true);
  }
  printStack(stack, "    before");

  if (valid_symbols[INDENT] &&
      newline_count > 0 &&
      (isEmptyStack(stack) ||
        indentation_size > peekStack(stack))) {
    pushStack(stack, indentation_size);
    lexer->result_symbol = INDENT;
    LOG("    INDENT\n");
    return true;
  }

  // This saves the indentation_size and newline_count so it can be used
  // in subsequent calls for multiple outdent or autosemicolon.
  if (valid_symbols[OUTDENT] &&
      (lexer->lookahead == 0 || (
        newline_count > 0 &&
        prev != -1 &&
        indentation_size < prev))) {
    popStack(stack);
    LOG("    pop\n");
    LOG("    OUTDENT\n");
    lexer->result_symbol = OUTDENT;
    stack->last_indentation_size = indentation_size;
    stack->last_newline_count = newline_count;
    if (lexer->eof(lexer)) {
      stack->last_column = -1;
    } else {
      stack->last_column = lexer->get_column(lexer);
    }
    return true;
  }

  // Recover newline_count from the outdent reset
  if (stack->last_newline_count > 0 &&
    ((lexer->eof(lexer) && stack->last_column == -1)
      || lexer->get_column(lexer) == stack->last_column)) {
    newline_count += stack->last_newline_count;
  }
  stack->last_newline_count = 0;

  printStack(stack, "    after");

  LOG("    indentation_size: %d, newline_count: %d, column: %d, indent_is_valid: %d, dedent_is_valid: %d\n", indentation_size,
      newline_count, lexer->get_column(lexer), valid_symbols[INDENT], valid_symbols[OUTDENT]);

  if (valid_symbols[AUTOMATIC_SEMICOLON] && newline_count > 0) {
    // AUTOMATIC_SEMICOLON should not be issued in the middle of expressions
    // Thus, we exit this branch when encountering comments, else/catch clauses, etc.

    lexer->mark_end(lexer);
    lexer->result_symbol = AUTOMATIC_SEMICOLON;

    // Probably, a multi-line field expression, e.g.
    // a
    //  .b
    //  .c
    if (lexer->lookahead == '.') return false;

    // Single-line and multi-line comments
    if (lexer->lookahead == '/') {
      advance(lexer);
      if (lexer->lookahead == '/') {
        return false;
      } else if (lexer->lookahead == '*') {
        advance(lexer);
        while (!lexer->eof(lexer)) {
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
        while (iswspace(lexer->lookahead)) {
          if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
            return false;
          }
          skip(lexer);
        }
        // If some code is present at the same line after comment end, 
        // we should still produce AUTOMATIC_SEMICOLON, e.g. in
        // val a = 1
        // /* comment */ val b = 2
        return true;
      }
    }

    if (valid_symbols[ELSE]) {
      if (lexer->lookahead != 'e') return true;
      advance(lexer);
      if (lexer->lookahead != 'l') return true;
      advance(lexer);
      if (lexer->lookahead != 's') return true;
      advance(lexer);
      if (lexer->lookahead != 'e') return true;
      advance(lexer);
      if (iswalpha(lexer->lookahead)) return true;
      return false;
    }

    if (valid_symbols[CATCH]) {
      if (lexer->lookahead != 'c' && lexer->lookahead != 'f') return true;
      advance(lexer);
      if (lexer->lookahead == 'a') {
        advance(lexer);
        if (lexer->lookahead != 't') return true;
        advance(lexer);
        if (lexer->lookahead != 'c') return true;
        advance(lexer);
        if (lexer->lookahead != 'h') return true;
        advance(lexer);
        if (iswalpha(lexer->lookahead)) return true;
        return false;
      } else if (lexer->lookahead == 'i') {
        advance(lexer);
        if (lexer->lookahead != 'n') return true;
        advance(lexer);
        if (lexer->lookahead != 'a') return true;
        advance(lexer);
        if (lexer->lookahead != 'l') return true;
        advance(lexer);
        if (lexer->lookahead != 'l') return true;
        advance(lexer);
        if (lexer->lookahead != 'y') return true;
        advance(lexer);
        if (iswalpha(lexer->lookahead)) return true;
        return false;
      } else {
        return true;
      }
    }

    if (valid_symbols[FINALLY]) {
      if (lexer->lookahead != 'f') return true;
      advance(lexer);
      if (lexer->lookahead != 'i') return true;
      advance(lexer);
      if (lexer->lookahead != 'n') return true;
      advance(lexer);
      if (lexer->lookahead != 'a') return true;
      advance(lexer);
      if (lexer->lookahead != 'l') return true;
      advance(lexer);
      if (lexer->lookahead != 'l') return true;
      advance(lexer);
      if (lexer->lookahead != 'y') return true;
      advance(lexer);
      if (iswalpha(lexer->lookahead)) return true;
      return false;
    }

    if (valid_symbols[EXTENDS]) {
      if (lexer->lookahead != 'e') return true;
      advance(lexer);
      if (lexer->lookahead != 'x') return true;
      advance(lexer);
      if (lexer->lookahead != 't') return true;
      advance(lexer);
      if (lexer->lookahead != 'e') return true;
      advance(lexer);
      if (lexer->lookahead != 'n') return true;
      advance(lexer);
      if (lexer->lookahead != 'd') return true;
      advance(lexer);
      if (lexer->lookahead != 's') return true;
      advance(lexer);
      if (iswalpha(lexer->lookahead)) return true;
      return false;
    }

    if (valid_symbols[WITH]) {
      if (lexer->lookahead != 'w') return true;
      advance(lexer);
      if (lexer->lookahead != 'i') return true;
      advance(lexer);
      if (lexer->lookahead != 't') return true;
      advance(lexer);
      if (lexer->lookahead != 'h') return true;
      advance(lexer);
      if (iswalpha(lexer->lookahead)) return true;
      return false;
    }

    if (newline_count > 1) return true;

    return true;
  }

  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') newline_count++;
    skip(lexer);
  }

  if (valid_symbols[SIMPLE_STRING] && lexer->lookahead == '"') {
    advance(lexer);

    bool is_multiline = false;
    if (lexer->lookahead == '"') {
      advance(lexer);
      if (lexer->lookahead == '"') {
        advance(lexer);
        is_multiline = true;
      } else {
        lexer->result_symbol = SIMPLE_STRING;
        return true;
      }
    }

    return scan_string_content(lexer, is_multiline, false);
  }

  if (valid_symbols[INTERPOLATED_STRING_MIDDLE]) {
    return scan_string_content(lexer, false, true);
  }

  if (valid_symbols[INTERPOLATED_MULTILINE_STRING_MIDDLE]) {
    return scan_string_content(lexer, true, true);
  }

  return false;
}

//