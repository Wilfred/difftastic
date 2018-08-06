#include <tree_sitter/parser.h>
#include <cctype>
#include <string>

namespace {

enum {
  COMMENT,
  QUOTED_STRING,
  STRING_DELIM,
  LINE_NUMBER_DIRECTIVE,
  LABEL_COLON,
};

struct Scanner {
  bool in_string = false;
  std::string quoted_string_id;

  unsigned serialize(char *buffer) {
    size_t size = quoted_string_id.size();

    buffer[0] = in_string;
    quoted_string_id.copy(&buffer[2], size);
    return size + 1;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length > 0) {
      in_string = buffer[0];
      quoted_string_id.assign(&buffer[1], length - 1);
    }
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[LABEL_COLON] && lexer->lookahead == ':') {
      advance(lexer);
      lexer->result_symbol = LABEL_COLON;
      return true;
    }

    while (isspace(lexer->lookahead)) {
      skip(lexer);
    }

    if (lexer->lookahead == '#' && lexer->get_column(lexer) == 0) {
      advance(lexer);
      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        advance(lexer);
      }

      if (!isdigit(lexer->lookahead)) return false;

      while (lexer->lookahead != '\n' && lexer->lookahead != '\r') advance(lexer);

      lexer->result_symbol = LINE_NUMBER_DIRECTIVE;
      return true;
    }

    if (!in_string && valid_symbols[COMMENT] && lexer->lookahead == '(') {
      advance(lexer);
      lexer->result_symbol = COMMENT;
      return scan_comment(lexer);
    } else if (valid_symbols[QUOTED_STRING] && lexer->lookahead == '{') {
      advance(lexer);
      lexer->result_symbol = QUOTED_STRING;
      return scan_quoted_string(lexer);
    } else if (valid_symbols[STRING_DELIM] && lexer->lookahead == '"') {
      advance(lexer);
      in_string = !in_string;
      lexer->result_symbol = STRING_DELIM;
      return true;
    }

    return false;
  }

  void scan_string(TSLexer *lexer) {
    for (;;) {
      switch (lexer->lookahead) {
        case '\\':
          advance(lexer);
          advance(lexer);
          break;
        case '"':
          advance(lexer);
        case '\0':
          return;
        default:
          advance(lexer);
      }
    }
  }

  void scan_character(TSLexer *lexer) {
    switch (lexer->lookahead) {
      case '\\':
        advance(lexer);
        if (isdigit(lexer->lookahead)) {
          advance(lexer);
          for (size_t i = 0; i < 2; i++) {
            if (!isdigit(lexer->lookahead)) return;
            advance(lexer);
          }
        } else {
          switch (lexer->lookahead) {
            case 'x':
              advance(lexer);
              for (size_t i = 0; i < 2; i++) {
                if (!isdigit(lexer->lookahead) && (tolower(lexer->lookahead) < 'a' || tolower(lexer->lookahead) > 'f')) return;
                advance(lexer);
              }
              break;
            case 'o':
              advance(lexer);
              for (size_t i = 0; i < 3; i++) {
                if (!isdigit(lexer->lookahead) || lexer->lookahead > '7') return;
                advance(lexer);
              }
              break;
            case '\'':
              advance(lexer);
              if (lexer->lookahead == '\'') {
                advance(lexer);
              } else {
                scan_character(lexer);
              }
              return;
            case '"':
              advance(lexer);
              if (lexer->lookahead == '\'') {
                advance(lexer);
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
              advance(lexer);
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
        advance(lexer);
    }
    if (lexer->lookahead == '\'') advance(lexer);
  }

  bool scan_quoted_string(TSLexer *lexer) {
    size_t i;
    quoted_string_id.clear();

    while (islower(lexer->lookahead) || lexer->lookahead == '_') {
      quoted_string_id.push_back(lexer->lookahead);
      advance(lexer);
    }

    if (lexer->lookahead != '|') return false;
    advance(lexer);

    for (;;) {
      switch (lexer->lookahead) {
        case '|':
          advance(lexer);
          for (i = 0; i < quoted_string_id.size(); i++) {
            if (lexer->lookahead != quoted_string_id[i]) break;
            advance(lexer);
          }
          if (i == quoted_string_id.size() && lexer->lookahead == '}') {
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

  bool scan_comment(TSLexer *lexer) {
    if (lexer->lookahead != '*') return false;
    advance(lexer);

    for (;;) {
      switch (lexer->lookahead) {
        case '(':
          advance(lexer);
          scan_comment(lexer);
          break;
        case '*':
          advance(lexer);
          if (lexer->lookahead == ')') {
            advance(lexer);
            return true;
          }
          break;
        case '\'':
          advance(lexer);
          scan_character(lexer);
          break;
        case '"':
          advance(lexer);
          scan_string(lexer);
          break;
        case '{':
          advance(lexer);
          scan_quoted_string(lexer);
          break;
        case '\0':
          return true;
        default:
          if (isalpha(lexer->lookahead) || lexer->lookahead == '_') {
            advance(lexer);
            while (isalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '\'') {
              advance(lexer);
            }
          } else {
            advance(lexer);
          }
      }
    }
  }
};

}

extern "C" {

void *tree_sitter_ocaml_external_scanner_create() {
  return new Scanner();
}

void tree_sitter_ocaml_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

unsigned tree_sitter_ocaml_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_ocaml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

bool tree_sitter_ocaml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

}
