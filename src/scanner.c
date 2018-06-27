#include <ctype.h>
#include <tree_sitter/parser.h>

enum {
  COMMENT,
  QUOTED_STRING,
  STRING_DELIM,
  LINE_NUMBER_DIRECTIVE,
  LABEL_COLON,
};

void *tree_sitter_ocaml_external_scanner_create() {
  return malloc(sizeof(bool));
}

void tree_sitter_ocaml_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_ocaml_external_scanner_serialize(void *payload, char *buffer) {
  *buffer = *(bool*)payload;
  return 1;
}

void tree_sitter_ocaml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  *(bool*)payload = (length > 0) ? (bool)*buffer : false;
}

bool tree_sitter_ocaml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *whitelist) {
  bool in_string = *(bool*)payload;

  if (!in_string && lexer->lookahead == ':' && whitelist[LABEL_COLON]) {
    lexer->advance(lexer, false);
    lexer->result_symbol = LABEL_COLON;
    return true;
  }

  while (isspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (lexer->lookahead == '#' && lexer->get_column(lexer) == 0) {
    lexer->advance(lexer, false);
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      lexer->advance(lexer, false);
    }

    if (!isdigit(lexer->lookahead)) return false;

    while (lexer->lookahead != '\n' && lexer->lookahead != '\r') lexer->advance(lexer, false);

    lexer->result_symbol = LINE_NUMBER_DIRECTIVE;
    return true;
  }

  if (!in_string && whitelist[COMMENT] && lexer->lookahead == '(') {
    lexer->advance(lexer, false);
    if (lexer->lookahead != '*') return false;
    lexer->advance(lexer, false);

    int depth = 1;

    for (;;) {
      if (depth == 0) {
        lexer->result_symbol = COMMENT;
        return true;
      }

      switch (lexer->lookahead) {
        case '(':
          lexer->advance(lexer, false);
          if (lexer->lookahead == '*') {
            lexer->advance(lexer, false);
            depth++;
          }
          break;
        case '*':
          lexer->advance(lexer, false);
          if (lexer->lookahead == ')') {
            lexer->advance(lexer, false);
            depth--;
          }
          break;
        case '\0':
          lexer->result_symbol = COMMENT;
          return true;
        default:
          lexer->advance(lexer, false);
      }
    }
  } else if (whitelist[QUOTED_STRING] && lexer->lookahead == '{') {
    lexer->advance(lexer, false);

    int length = 0, size = 8, i;
    char *id = malloc(size);

    while (islower(lexer->lookahead) || lexer->lookahead == '_') {
      if (length == size) {
        size *= 2;
        id = realloc(id, size);
      }
      id[length++] = lexer->lookahead;
      lexer->advance(lexer, false);
    }

    if (lexer->lookahead != '|') return false;
    lexer->advance(lexer, false);

    for (;;) {
      while (lexer->lookahead != '|') {
        if (lexer->lookahead == '\0') {
          lexer->result_symbol = QUOTED_STRING;
          return true;
        }
        lexer->advance(lexer, false);
      }
      lexer->advance(lexer, false);

      for (i = 0; i < length; i++) {
        if (lexer->lookahead != id[i]) break;
        lexer->advance(lexer, false);
      }

      if (i == length && lexer->lookahead == '}') {
        lexer->advance(lexer, false);
        lexer->result_symbol = QUOTED_STRING;
        return true;
      }
    }
  } else if (whitelist[STRING_DELIM] && lexer->lookahead == '"') {
    lexer->advance(lexer, false);
    *(bool*)payload = !in_string;
    lexer->result_symbol = STRING_DELIM;
    return true;
  }

  return false;
}
