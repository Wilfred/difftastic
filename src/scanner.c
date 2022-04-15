#include <string.h>  // memcpy
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  BLOCK_COMMENT,
  IMMEDIATE_PAREN,
  STRING_START,
  COMMAND_START,
  IMMEDIATE_STRING_START,
  IMMEDIATE_COMMAND_START,
  STRING_END,
  COMMAND_END,
  STRING_CONTENT,
  STRING_CONTENT_NO_INTERP,
};

// Block comments and immediate parentheses are easy to parse, but strings
// require extra-attention.

// The main problems that arise when parsing strings are:
// 1. Triple quoted strings allow single quotes inside. e.g. """ "foo" """.
// 2. Strings can have arbitrary interpolations, including other strings.
//    e.g. "echo $("foo")"
// 3. Non-standard string literals don't allow interpolations or escape
//    sequences, but you can always write \" and \`.
// All of the above also applies to command literals.

// To efficiently store a delimiter, we take advantage of the fact that:
// (int)'"' == 34 && 34 % 2 == 0
// (int)'`' == 96 && 96 % 2 == 0
// i.e. " and ` have an even numeric representation, so we can store a triple
// quoted delimiter as (delimiter + 1).
typedef char Delimiter;

// We use a stack to keep track of the string and command delimiters.
typedef struct {
  Delimiter *arr;
  unsigned len;
} Stack;

static Stack *new_stack() {
  Delimiter *arr = malloc(TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  if (arr == NULL) exit(1);
  Stack *stack = malloc(sizeof(Stack));
  if (stack == NULL) exit(1);
  stack->arr = arr;
  stack->len = 0;
  return stack;
}

static void free_stack(Stack *stack) {
  free(stack->arr);
  free(stack);
}

static void push(Stack *stack, char c, bool triple) {
  if (stack->len >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) exit(1);
  stack->arr[stack->len++] = triple ? (c + 1) : c;
}

static Delimiter pop(Stack *stack) {
  if (stack->len == 0) exit(1);
  return stack->arr[stack->len--];
}

static unsigned serialize_stack(Stack *stack, char *buffer) {
  unsigned len = stack->len;
  memcpy(buffer, stack->arr, len);
  return len;
}

static void deserialize_stack(Stack *stack, const char *buffer, unsigned len) {
  if (len > 0) {
    memcpy(stack->arr, buffer, len);
    stack->len = len;
  } else {
    stack->len = 0;
  }
}


// Scanner functions

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

static bool scan_string_start(TSLexer *lexer, Stack *stack, char start_char) {
  if (lexer->lookahead != start_char) return false;
  advance(lexer);
  mark_end(lexer);
  for (unsigned count = 1; count < 3; count++) {
    if (lexer->lookahead != start_char) {
      // It's not a triple quoted delimiter.
      push(stack, start_char, false);
      return true;
    }
    advance(lexer);
  }
  mark_end(lexer);
  push(stack, start_char, true);
  return true;
}

static bool scan_string_content(TSLexer *lexer, Stack *stack, bool interp) {
  if (stack->len == 0) return false;  // Stack is empty. We're not in a string.
  Delimiter end_char = stack->arr[stack->len - 1];  // peek
  bool is_triple = false;
  bool has_content = false;
  if (end_char % 2 != 0) {
    is_triple = true;
    end_char--;
  }
  TSSymbol end_symbol = (end_char == '"') ? STRING_END : COMMAND_END;
  TSSymbol end_content = interp ? STRING_CONTENT : STRING_CONTENT_NO_INTERP;
  while (lexer->lookahead) {
    if (interp && (lexer->lookahead == '$' || lexer->lookahead == '\\')) {
      mark_end(lexer);
      lexer->result_symbol = end_content;
      return has_content;
    } else if (lexer->lookahead == '\\') {
      mark_end(lexer);
      advance(lexer);
      // Only escape if there's a delimiter character
      if (lexer->lookahead == end_char) {
        lexer->result_symbol = end_content;
        return has_content;
      } else {
        mark_end(lexer);
      }
    } else if (lexer->lookahead == end_char) {
      if (is_triple) {
        mark_end(lexer);
        for (unsigned count = 1; count < 3; count++) {
          advance(lexer);
          if (lexer->lookahead != end_char) {
            mark_end(lexer);
            lexer->result_symbol = end_content;
            return true;
          }
        }
      }
      if (has_content) {
        lexer->result_symbol = end_content;
      } else {
        pop(stack);
        advance(lexer);
        mark_end(lexer);
        lexer->result_symbol = end_symbol;
      }
      return true;
    }
    advance(lexer);
    has_content = true;
  }
  return false;
}

static bool scan_block_comment(TSLexer *lexer) {
  if (lexer->lookahead != '#') return false;
  advance(lexer);
  if (lexer->lookahead != '=') return false;
  advance(lexer);

  bool after_eq = false;
  unsigned nesting_depth = 1;
  for (;;) {
    switch (lexer->lookahead) {
      case '=':
        advance(lexer);
        after_eq = true;
        break;
      case '#':
        advance(lexer);
        if (after_eq) {
          after_eq = false;
          nesting_depth--;
          if (nesting_depth == 0) {
            lexer->result_symbol = BLOCK_COMMENT;
            return true;
          }
        } else {
          after_eq = false;
          if (lexer->lookahead == '=') {
            nesting_depth++;
            advance(lexer);
          }
        }
        break;
      case '\0':
        return false;
      default:
        advance(lexer);
        after_eq = false;
        break;
    }
  }
}

bool tree_sitter_julia_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
  if (lexer->lookahead == '(' && valid_symbols[IMMEDIATE_PAREN]) {
    lexer->result_symbol = IMMEDIATE_PAREN;
    return true;
  }

  if (valid_symbols[IMMEDIATE_STRING_START] &&
      scan_string_start(lexer, payload, '"')) {
    lexer->result_symbol = IMMEDIATE_STRING_START;
    return true;
  }

  if (valid_symbols[IMMEDIATE_COMMAND_START] &&
      scan_string_start(lexer, payload, '`')) {
    lexer->result_symbol = IMMEDIATE_COMMAND_START;
    return true;
  }

  // content or end
  if (valid_symbols[STRING_CONTENT] &&
      scan_string_content(lexer, payload, true)) {
    return true;
  }

  if (valid_symbols[STRING_CONTENT_NO_INTERP] &&
      scan_string_content(lexer, payload, false)) {
    return true;
  }

  // Ignore whitespace
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (valid_symbols[STRING_START] && scan_string_start(lexer, payload, '"')) {
    lexer->result_symbol = STRING_START;
    return true;
  }

  if (valid_symbols[COMMAND_START] && scan_string_start(lexer, payload, '`')) {
    lexer->result_symbol = COMMAND_START;
    return true;
  }

  if (valid_symbols[BLOCK_COMMENT] && scan_block_comment(lexer)) {
    return true;
  }

  return false;
}

void *tree_sitter_julia_external_scanner_create() { return new_stack(); }

void tree_sitter_julia_external_scanner_destroy(void *payload) {
  free_stack(payload);
}

unsigned tree_sitter_julia_external_scanner_serialize(
    void *payload,
    char *buffer
) {
  return serialize_stack(payload, buffer);
}

void tree_sitter_julia_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
  deserialize_stack(payload, buffer, length);
}
