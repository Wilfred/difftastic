#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

#include <wctype.h>

// #define DEBUG

#ifdef DEBUG
#define LOG(...) fprintf(stderr, __VA_ARGS__)
#else
#define LOG(...)
#endif

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
  DERIVES,
  WITH,
};

typedef struct {
  Array(int16_t) indents;
  int16_t last_indentation_size;
  int16_t last_newline_count;
  int16_t last_column;
} Scanner;

void *tree_sitter_scala_external_scanner_create() {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  array_init(&scanner->indents);
  scanner->last_indentation_size = -1;
  scanner->last_column = -1;
  return scanner;
}

void tree_sitter_scala_external_scanner_destroy(void *payload) {
  Scanner *scanner = payload;
  array_delete(&scanner->indents);
  ts_free(scanner);
}

unsigned tree_sitter_scala_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner*)payload;

  if ((scanner->indents.size + 3) * sizeof(int16_t) > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    return 0;
  }

  size_t size = 0;
  *(int16_t *)&buffer[size] = scanner->last_indentation_size;
  size += sizeof(int16_t);
  *(int16_t *)&buffer[size] = scanner->last_newline_count;
  size += sizeof(int16_t);
  *(int16_t *)&buffer[size] = scanner->last_column;
  size += sizeof(int16_t);

  for (unsigned i = 0; i < scanner->indents.size; i++) {
    *(int16_t *)&buffer[size] = scanner->indents.contents[i];
    size += sizeof(int16_t);
  }

  return size;
}

void tree_sitter_scala_external_scanner_deserialize(void *payload, const char *buffer,
                                                    unsigned length) {
  Scanner *scanner = (Scanner*)payload;
  array_clear(&scanner->indents);
  scanner->last_indentation_size = -1;
  scanner->last_column = -1;
  scanner->last_newline_count = 0;

  if (length == 0) {
    return;
  }

  size_t size = 0;

  scanner->last_indentation_size = *(int16_t *)&buffer[size];
  size += sizeof(int16_t);
  scanner->last_newline_count = *(int16_t *)&buffer[size];
  size += sizeof(int16_t);
  scanner->last_column = *(int16_t *)&buffer[size];
  size += sizeof(int16_t);

  while (size < length) {
    array_push(&scanner->indents, *(int16_t *)&buffer[size]);
    size += sizeof(int16_t);
  }

  assert(size == length);
}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

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
      }
      if (has_interpolation) {
        lexer->result_symbol = INTERPOLATED_STRING_MIDDLE;
        return true;
      }
      advance(lexer);
    } else {
      closing_quote_count = 0;
      if (lexer->lookahead == '\\') {
        advance(lexer);
        if (!lexer->eof(lexer)) {
          advance(lexer);
        }
      } else if (lexer->lookahead == '\n') {
        if (is_multiline) {
          advance(lexer);
        } else {
          return false;
        }
      } else if (lexer->eof(lexer)) {
        return false;
      } else {
        advance(lexer);
      }
    }
  }
}

static bool detect_comment_start(TSLexer *lexer) {
  lexer->mark_end(lexer);
  // Comments should not affect indentation
  if (lexer->lookahead == '/') {
    advance(lexer);
    if (lexer->lookahead == '/' || lexer -> lookahead == '*') {
      return true;
    }
  }
  return false;
}

static bool scan_word(TSLexer *lexer, const char* const word) {
  for (uint8_t i = 0; word[i] != '\0'; i++) {
    if (lexer->lookahead != word[i]) {
      return false;
    }
    advance(lexer);
  }
  return !iswalnum(lexer->lookahead);
}

static inline void debug_indents(Scanner *scanner) {
  LOG("    indents(%d): ", scanner->indents.size);
  for (unsigned i = 0; i < scanner->indents.size; i++) {
    LOG("%d ", scanner->indents.contents[i]);
  }
  LOG("\n");
}

bool tree_sitter_scala_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  int16_t prev = scanner->indents.size > 0 ? *array_back(&scanner->indents) : -1;
  int16_t newline_count = 0;
  int16_t indentation_size = 0;

  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') {
      newline_count++;
      indentation_size = 0;
    }
    else {
      indentation_size++;
    }
    skip(lexer);
  }

  // Before advancing the lexer, check if we can double outdent
  if (
      valid_symbols[OUTDENT] &&
      (
        lexer->lookahead == 0 ||
        (
          prev != -1 &&
          (
            lexer->lookahead == ')' ||
            lexer->lookahead == ']' ||
            lexer->lookahead == '}'
          )
        ) ||
        (
          scanner->last_indentation_size != -1 &&
          prev != -1 &&
          scanner->last_indentation_size < prev
        )
      )
  ) {
    if (scanner->indents.size > 0) {
        array_pop(&scanner->indents);
    }
    LOG("    pop\n");
    LOG("    OUTDENT\n");
    lexer->result_symbol = OUTDENT;
    return true;
  }
  scanner->last_indentation_size = -1;

  if (
      valid_symbols[INDENT] &&
      newline_count > 0 &&
      (
        scanner->indents.size == 0 ||
        indentation_size > *array_back(&scanner->indents)
      )
  ) {
    if (detect_comment_start(lexer)) {
      return false;
    }
    array_push(&scanner->indents, indentation_size);
    lexer->result_symbol = INDENT;
    LOG("    INDENT\n");
    return true;
  }

  // This saves the indentation_size and newline_count so it can be used
  // in subsequent calls for multiple outdent or autosemicolon.
  if (valid_symbols[OUTDENT] &&
      (lexer->lookahead == 0 ||
      (
        newline_count > 0 &&
        prev != -1 &&
        indentation_size < prev
      )
      )
  ) {
    if (scanner->indents.size > 0) {
      array_pop(&scanner->indents);
    }
    LOG("    pop\n");
    LOG("    OUTDENT\n");
    lexer->result_symbol = OUTDENT;
    lexer->mark_end(lexer);
    if (detect_comment_start(lexer)) {
      return false;
    }
    scanner->last_indentation_size = indentation_size;
    scanner->last_newline_count = newline_count;
    if (lexer->eof(lexer)) {
      scanner->last_column = -1;
    } else {
      scanner->last_column = (int16_t)lexer->get_column(lexer);
    }
    return true;
  }

  // Recover newline_count from the outdent reset
  bool is_eof = lexer->eof(lexer);
  if (
      scanner->last_newline_count > 0 &&
      (is_eof && scanner->last_column == -1) ||
      (!is_eof && lexer->get_column(lexer) == (uint32_t)scanner->last_column)
  ) {
    newline_count += scanner->last_newline_count;
  }
  scanner->last_newline_count = 0;

  if (valid_symbols[AUTOMATIC_SEMICOLON] && newline_count > 0) {
    // AUTOMATIC_SEMICOLON should not be issued in the middle of expressions
    // Thus, we exit this branch when encountering comments, else/catch clauses, etc.

    lexer->mark_end(lexer);
    lexer->result_symbol = AUTOMATIC_SEMICOLON;

    // Probably, a multi-line field expression, e.g.
    // a
    //  .b
    //  .c
    if (lexer->lookahead == '.') {
      return false;
    }

    // Single-line and multi-line comments
    if (lexer->lookahead == '/') {
      advance(lexer);
      if (lexer->lookahead == '/') {
        return false;
      }
      if (lexer->lookahead == '*') {
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
      return !scan_word(lexer, "else");
    }

    if (valid_symbols[CATCH]) {
      if (scan_word(lexer, "catch")) {
        return false;
      }
    }

    if (valid_symbols[FINALLY]) {
      if  (scan_word(lexer, "finally")) {
        return false;
      }
    }

    if (valid_symbols[EXTENDS]) {
      if (scan_word(lexer, "extends")) {
        return false;
      }
    }

    if (valid_symbols[WITH]) {
      if (scan_word(lexer, "with")) {
        return false;
      }
    }

    if (valid_symbols[DERIVES]) {
      if (scan_word(lexer, "derives")) {
        return false;
      }
    }

    if (newline_count > 1) {
      return true;
    }

    return true;
  }

  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') {
      newline_count++;
    }
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
