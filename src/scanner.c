#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

enum TokenType {
  VIRTUAL_OPEN_SECTION,
  VIRTUAL_END_SECTION,
  VIRTUAL_END_ALIGNED,
  BLOCK_COMMENT_CONTENT,
  ERROR_RECOVERY
};

typedef struct {
  uint16_t indent_length;
  Array(uint16_t) indent_length_stack;
  Array(uint8_t) runback;
} Scanner;

static inline bool in_error_recovery(const bool *valid_symbols) {
  return valid_symbols[ERROR_RECOVERY];
}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static inline bool isWS(TSLexer *lexer) {
  return lexer->lookahead == ' ' || lexer->lookahead == '\r' ||
         lexer->lookahead == '\n';
}

static inline bool scan_block_comment(TSLexer *lexer) {
  lexer->mark_end(lexer);
  if (lexer->lookahead != '(')
    return false;

  advance(lexer);
  if (lexer->lookahead != '*')
    return false;

  advance(lexer);

  while (true) {
    switch (lexer->lookahead) {
    case '(':
      scan_block_comment(lexer);
      break;
    case '*':
      advance(lexer);
      if (lexer->lookahead == ')') {
        advance(lexer);
        return true;
      }
      break;
    case '\0':
      return true;
    default:
      advance(lexer);
    }
  }
}

static inline void advance_to_line_end(TSLexer *lexer) {
  while (true) {
    if (lexer->lookahead == '\n') {
      break;
    } else if (lexer->eof(lexer)) {
      break;
    } else {
      advance(lexer);
    }
  }
}

static inline bool scan(Scanner *scanner, TSLexer *lexer,
                        const bool *valid_symbols) {
  if (in_error_recovery(valid_symbols))
    return false;

  bool runback_nonempty = scanner->runback.size > 0;

  // First handle eventual runback tokens, we saved on a previous scan op
  if (runback_nonempty && *array_back(&scanner->runback) == 0 &&
      valid_symbols[VIRTUAL_END_ALIGNED]) {
    array_pop(&scanner->runback);
    lexer->result_symbol = VIRTUAL_END_ALIGNED;
    return true;
  }
  if (runback_nonempty && *array_back(&scanner->runback) == 1 &&
      valid_symbols[VIRTUAL_END_SECTION]) {
    array_pop(&scanner->runback);
    lexer->result_symbol = VIRTUAL_END_SECTION;
    return true;
  }

  array_clear(&scanner->runback);

  // Check if we have newlines and how much indentation
  bool has_newline = false;
  bool can_call_mark_end = true;
  lexer->mark_end(lexer);
  while (true) {
    if (lexer->lookahead == ' ') {
      skip(lexer);
    } else if (lexer->lookahead == '\n') {
      skip(lexer);
      has_newline = true;
      while (true) {
        if (lexer->lookahead == ' ') {
          skip(lexer);
        } else {
          scanner->indent_length = lexer->get_column(lexer);
          break;
        }
      }
    } else if (lexer->lookahead == '\r') {
      skip(lexer);
    } else if (valid_symbols[VIRTUAL_END_ALIGNED] && lexer->lookahead == ';') {
      advance(lexer);
      lexer->mark_end(lexer);
      lexer->result_symbol = VIRTUAL_END_ALIGNED;
      return true;
    } else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == ')') {
      lexer->result_symbol = VIRTUAL_END_SECTION;
      array_pop(&scanner->indent_length_stack);
      return true;
    } else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == ']') {
      lexer->result_symbol = VIRTUAL_END_SECTION;
      array_pop(&scanner->indent_length_stack);
      return true;
    } else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == '}') {
      lexer->result_symbol = VIRTUAL_END_SECTION;
      array_pop(&scanner->indent_length_stack);
      return true;
    } else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == '|') {
      skip(lexer);
      if (lexer->lookahead == '}' || lexer->lookahead == ']') {
        lexer->result_symbol = VIRTUAL_END_SECTION;
        array_pop(&scanner->indent_length_stack);
        return true;
      }
    } else if (lexer->eof(lexer)) {
      if (valid_symbols[VIRTUAL_END_SECTION]) {
        lexer->result_symbol = VIRTUAL_END_SECTION;
        return true;
      }
      if (valid_symbols[VIRTUAL_END_ALIGNED]) {
        lexer->result_symbol = VIRTUAL_END_ALIGNED;
        return true;
      }
      break;
    } else {
      break;
    }
  }

  bool closing = lexer->lookahead == ']' || lexer->lookahead == ')' ||
                 lexer->lookahead == '}';

  // Open section if the grammar lets us but only push to indent stack if we go
  // further down in the stack
  if (valid_symbols[VIRTUAL_OPEN_SECTION] && !lexer->eof(lexer)) {
    array_push(&scanner->indent_length_stack, lexer->get_column(lexer));
    if (closing) {
      return false;
    }
    if (lexer->lookahead == '|') {
      skip(lexer);
      if (lexer->lookahead == '}' || lexer->lookahead == ']') {
        return false;
      }
    }
    lexer->result_symbol = VIRTUAL_OPEN_SECTION;
    return true;
  } else if (valid_symbols[BLOCK_COMMENT_CONTENT]) {
    if (!can_call_mark_end) {
      return false;
    }
    lexer->mark_end(lexer);
    while (true) {
      if (lexer->lookahead == '\0') {
        break;
      }
      if (lexer->lookahead != '(' && lexer->lookahead != '*') {
        advance(lexer);
      } else if (lexer->lookahead == '*') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == ')') {
          break;
        }
      } else if (scan_block_comment(lexer)) {
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '*') {
          break;
        }
      }
    }
    lexer->result_symbol = BLOCK_COMMENT_CONTENT;
    return true;
  } else if (has_newline) {
    // We had a newline now it's time to check if we need to add multiple tokens
    // to get back up to the right level
    array_clear(&scanner->runback);

    while (scanner->indent_length <=
           *array_back(&scanner->indent_length_stack)) {
      if (scanner->indent_length ==
          *array_back(&scanner->indent_length_stack)) {
        // Don't insert VIRTUAL_END_DECL when there is a line comment incoming
        if (lexer->lookahead == '/') {
          skip(lexer);
          if (lexer->lookahead == '/') {
            break;
          }
        }
        // Don't insert VIRTUAL_END_DECL when there is a block comment incoming
        if (lexer->lookahead == '(') {
          skip(lexer);
          if (lexer->lookahead == '*') {
            break;
          }
        }
        array_push(&scanner->runback, 0);
        break;
      } else if (scanner->indent_length <
                 *array_back(&scanner->indent_length_stack)) {
        array_pop(&scanner->indent_length_stack);
        array_push(&scanner->runback, 1);
      }
    }

    // Our list is the wrong way around, reverse it

    // std::reverse(runback.begin(), runback.end());
    uint32_t size = scanner->runback.size;

    for (int i = 0; i < size / 2; i++) {
      uint8_t temp = *array_get(&scanner->runback, i);
      array_insert(&scanner->runback, i,
                   *array_get(&scanner->runback, size - 1 - i));
      array_insert(&scanner->runback, size - 1 - i, temp);
    }

    // Handle the first runback token if we have them, if there are more they
    // will be handled on the next scan operation
    if (runback_nonempty && *array_back(&scanner->runback) == 0 &&
        valid_symbols[VIRTUAL_END_ALIGNED]) {
      array_pop(&scanner->runback);
      lexer->result_symbol = VIRTUAL_END_ALIGNED;
      return true;
    }
    if (runback_nonempty && *array_back(&scanner->runback) == 0 &&
        valid_symbols[VIRTUAL_END_SECTION]) {
      array_pop(&scanner->runback);
      lexer->result_symbol = VIRTUAL_END_SECTION;
      return true;
    } else if (lexer->eof(lexer) && valid_symbols[VIRTUAL_END_SECTION]) {
      lexer->result_symbol = VIRTUAL_END_SECTION;
      return true;
    }
  }

  return false;
}

bool tree_sitter_fsharp_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  return scan(scanner, lexer, valid_symbols);
}

unsigned tree_sitter_fsharp_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  size_t size = 0;

  buffer[size++] = (uint8_t)scanner->indent_length;

  size_t runback_count = scanner->runback.size;
  if (runback_count > UINT8_MAX) {
    runback_count = UINT8_MAX;
  }
  buffer[size++] = (char)runback_count;

  if (runback_count > 0) {
    memcpy(&buffer[size], scanner->runback.contents, runback_count);
  }
  size += runback_count;

  uint32_t iter = 1;
  for (; iter < scanner->indent_length_stack.size &&
         size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
       ++iter) {
    buffer[size++] = (char)*array_get(&scanner->indent_length_stack, iter);
  }

  return size;
}

void tree_sitter_fsharp_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  Scanner *scanner = (Scanner *)payload;

  array_delete(&scanner->runback);
  array_delete(&scanner->indent_length_stack);
  array_push(&scanner->indent_length_stack, 0);

  if (length > 0) {
    size_t size = 0;

    scanner->indent_length = (uint16_t)buffer[size++];

    size_t runback_count = (uint8_t)buffer[size++];
    if (runback_count > 0) {
      array_reserve(&scanner->runback, runback_count);
      scanner->runback.size = runback_count;
      memcpy(scanner->runback.contents, &buffer[size], runback_count);
      size += runback_count;
    }

    size += runback_count;

    for (; size < length; size++) {
      array_push(&scanner->runback, (unsigned char)buffer[size]);
    }
  }
}

void *tree_sitter_fsharp_external_scanner_create() {
  Scanner *scanner = calloc(1, sizeof(Scanner));
  array_init(&scanner->indent_length_stack);
  array_init(&scanner->runback);
  tree_sitter_fsharp_external_scanner_deserialize(scanner, NULL, 0);
  return scanner;
}

void tree_sitter_fsharp_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  array_delete(&scanner->runback);
  array_delete(&scanner->indent_length_stack);
  free(scanner);
}
