#include <tree_sitter/parser.h>
#include <string>
#include <wctype.h>

namespace {

enum {
  QUOTED_STRING,
  LINE_NUMBER_DIRECTIVE
};

struct Scanner {
  unsigned serialize(char *buffer) {
    return 0;
  }

  void deserialize(const char *buffer, unsigned length) {}

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  bool is_eof(TSLexer *lexer) {
    uint32_t column = lexer->get_column(lexer);
    advance(lexer);
    return lexer->get_column(lexer) <= column;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[QUOTED_STRING]) {
      lexer->result_symbol = QUOTED_STRING;
      return scan_quoted_string(lexer);
    }

    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    if (valid_symbols[LINE_NUMBER_DIRECTIVE] && lexer->lookahead == '#' && lexer->get_column(lexer) == 0) {
      advance(lexer);

      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') advance(lexer);

      if (!iswdigit(lexer->lookahead)) return false;
      while (iswdigit(lexer->lookahead)) advance(lexer);

      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') advance(lexer);

      if (lexer->lookahead != '"') return false;
      while (lexer->lookahead != '\n' && lexer->lookahead != '\r' && lexer->lookahead != '"') advance(lexer);
      if (lexer->lookahead != '"') return false;

      while (lexer->lookahead != '\n' && lexer->lookahead != '\r') advance(lexer);

      lexer->result_symbol = LINE_NUMBER_DIRECTIVE;
      return true;
    }

    return false;
  }

  bool scan_quoted_string(TSLexer *lexer) {
    std::string id;
    size_t i;

    while (iswlower(lexer->lookahead) || lexer->lookahead == '_') {
      id.push_back(lexer->lookahead);
      advance(lexer);
    }

    if (lexer->lookahead != '|') return false;
    advance(lexer);

    for (;;) {
      switch (lexer->lookahead) {
        case '|':
          advance(lexer);
          for (i = 0; i < id.size(); i++) {
            if (lexer->lookahead != id[i]) break;
            advance(lexer);
          }
          if (i == id.size() && lexer->lookahead == '}') return true;
          break;
        case '\0':
          if (is_eof(lexer)) return false;
          break;
        default:
          advance(lexer);
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
