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

static void scan_string(TSLexer *lexer) {
  for (;;) {
    switch (lexer->lookahead) {
      case '\\':
        lexer->advance(lexer, false);
        lexer->advance(lexer, false);
        break;
      case '"':
        lexer->advance(lexer, false);
      case '\0':
        return;
      default:
        lexer->advance(lexer, false);
    }
  }
}

static void scan_character(TSLexer *lexer) {
  int i;

  switch (lexer->lookahead) {
    case '\\':
      lexer->advance(lexer, false);
      if (isdigit(lexer->lookahead)) {
        lexer->advance(lexer, false);
        for (i = 0; i < 2; i++) {
          if (!isdigit(lexer->lookahead)) return;
          lexer->advance(lexer, false);
        }
      } else {
        switch (lexer->lookahead) {
          case 'x':
            lexer->advance(lexer, false);
            for (i = 0; i < 2; i++) {
              if (!isdigit(lexer->lookahead) && (tolower(lexer->lookahead) < 'a' || tolower(lexer->lookahead) > 'f')) return;
              lexer->advance(lexer, false);
            }
            break;
          case 'o':
            lexer->advance(lexer, false);
            for (i = 0; i < 3; i++) {
              if (!isdigit(lexer->lookahead) || lexer->lookahead > '7') return;
              lexer->advance(lexer, false);
            }
            break;
          case '\'':
            lexer->advance(lexer, false);
            if (lexer->lookahead == '\'') {
              lexer->advance(lexer, false);
            } else {
              scan_character(lexer);
            }
            return;
          case '"':
            lexer->advance(lexer, false);
            if (lexer->lookahead == '\'') {
              lexer->advance(lexer, false);
            } else {
              scan_string(lexer);
            }
            return;
          case '\\':
          case 'n':
          case 't':
          case 'b':
          case 'r':
          case ' ':
            lexer->advance(lexer, false);
            break;
          default:
            return;
        }
      }
      break;
    case '\'':
      break;
    case '\0':
      return;
    default:
      lexer->advance(lexer, false);
  }
  if (lexer->lookahead == '\'') lexer->advance(lexer, false);
}

static int quoted_string_id_size = 16;
static char *quoted_string_id = NULL;

static bool scan_quoted_string(TSLexer *lexer) {
  int length = 0, i;

  if (quoted_string_id == NULL) quoted_string_id = malloc(quoted_string_id_size);

  while (islower(lexer->lookahead) || lexer->lookahead == '_') {
    if (length == quoted_string_id_size) {
      quoted_string_id_size *= 2;
      quoted_string_id = realloc(quoted_string_id, quoted_string_id_size);
    }
    quoted_string_id[length++] = lexer->lookahead;
    lexer->advance(lexer, false);
  }

  if (lexer->lookahead != '|') return false;
  lexer->advance(lexer, false);

  for (;;) {
    switch (lexer->lookahead) {
      case '|':
        lexer->advance(lexer, false);
        for (i = 0; i < length; i++) {
          if (lexer->lookahead != quoted_string_id[i]) break;
          lexer->advance(lexer, false);
        }
        if (i == length && lexer->lookahead == '}') {
          lexer->advance(lexer, false);
          return true;
        }
        break;
      case '\0':
        return true;
      default:
        lexer->advance(lexer, false);
    }
  }
}

static bool scan_comment(TSLexer *lexer) {
  if (lexer->lookahead != '*') return false;
  lexer->advance(lexer, false);

  for (;;) {
    switch (lexer->lookahead) {
      case '(':
        lexer->advance(lexer, false);
        scan_comment(lexer);
        break;
      case '*':
        lexer->advance(lexer, false);
        if (lexer->lookahead == ')') {
          lexer->advance(lexer, false);
          return true;
        }
        break;
      case '\'':
        lexer->advance(lexer, false);
        scan_character(lexer);
        break;
      case '"':
        lexer->advance(lexer, false);
        scan_string(lexer);
        break;
      case '{':
        lexer->advance(lexer, false);
        scan_quoted_string(lexer);
        break;
      case '\0':
        return true;
      default:
        if (isalpha(lexer->lookahead) || lexer->lookahead == '_') {
          lexer->advance(lexer, false);
          while (isalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
          }
        } else {
          lexer->advance(lexer, false);
        }
    }
  }
}

bool tree_sitter_ocaml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *whitelist) {
  bool in_string = *(bool*)payload;

  if (whitelist[LABEL_COLON] && lexer->lookahead == ':') {
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
    lexer->result_symbol = COMMENT;
    return scan_comment(lexer);
  } else if (whitelist[QUOTED_STRING] && lexer->lookahead == '{') {
    lexer->advance(lexer, false);
    lexer->result_symbol = QUOTED_STRING;
    return scan_quoted_string(lexer);
  } else if (whitelist[STRING_DELIM] && lexer->lookahead == '"') {
    lexer->advance(lexer, false);
    *(bool*)payload = !in_string;
    lexer->result_symbol = STRING_DELIM;
    return true;
  }

  return false;
}
