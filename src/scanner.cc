#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::wstring;
using std::iswspace;

enum TokenType {
  LONG_BUF_LIT,
  LONG_STR_LIT
};

struct Scanner {
  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    if (lexer->lookahead == '@') {
      lexer->result_symbol = LONG_BUF_LIT;
      lexer->advance(lexer, false);
    } else {
      lexer->result_symbol = LONG_STR_LIT;
    }

    // long strings start with one or more backticks
    // consume the first backtick
    if (lexer->lookahead != '`') {
      return false;
    }
    // getting here means a backtick was encountered
    lexer->advance(lexer, false);
    uint32_t n_backticks = 1;
    
    // arrive at a total number of backticks
    for (;;) {
      if (lexer->lookahead == 0) {
        return false;
      }
      if (lexer->lookahead == '`') {
        n_backticks++;
        lexer->advance(lexer, false);
        continue;
      } else {
        lexer->advance(lexer, false);
        break;
      }
    }
    // getting here means that the last character examined was NOT a
    // backtick
    
    // keep looking until n_backticks are found
    uint32_t cbt = 0; // consecutive backticks
    for (;;) {
      if (lexer->lookahead == 0) {
        return false;
      }

      if (lexer->lookahead == '`') {
        cbt++;
        if (cbt == n_backticks) {
          lexer->advance(lexer, false);
          return true;
        }
      } else {
        cbt = 0;
      }

      lexer->advance(lexer, false);
    }
  }
};

}

extern "C" {

void *tree_sitter_janet_simple_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_janet_simple_external_scanner_scan(
  void *payload, TSLexer *lexer,
  const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_janet_simple_external_scanner_serialize(void *payload,
                                                             char *buffer) {
  return 0;
}

void tree_sitter_janet_simple_external_scanner_deserialize(void *payload,
                                                           const char *buffer,
                                                           unsigned length) {
}

void tree_sitter_janet_simple_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
