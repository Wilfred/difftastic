#include "tree_sitter/parser.h"
#include <vector>

using std::vector;

enum TokenType : TSSymbol {
  NEWLINE,
  INDENT,
  DEDENT
};

struct Scanner {
  Scanner() : queued_dedent_count(0) {
    indent_length_stack.push_back(0);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[DEDENT] && queued_dedent_count > 0) {
      queued_dedent_count--;
      lexer->result_symbol = DEDENT;
      return true;
    }

    if (lexer->lookahead != '\n') return false;
    advance(lexer);

    uint32_t indent_length = 0;
    for (;;) {
      if (lexer->lookahead == '\n') {
        indent_length = 0;
        advance(lexer);
      } else if (lexer->lookahead == ' ') {
        indent_length++;
        advance(lexer);
      } else {
        break;
      }
    }

    if (indent_length > indent_length_stack.back()) {
      indent_length_stack.push_back(indent_length);
      lexer->result_symbol = INDENT;
      return true;
    }

    if (indent_length < indent_length_stack.back()) {
      indent_length_stack.pop_back();
      while (indent_length < indent_length_stack.back()) {
        indent_length_stack.pop_back();
        queued_dedent_count++;
      }

      if (valid_symbols[DEDENT]) {
        lexer->result_symbol = DEDENT;
        return true;
      } else {
        queued_dedent_count++;
      }
    }

    if (valid_symbols[NEWLINE]) {
      lexer->result_symbol = NEWLINE;
      return true;
    }

    return false;
  }

  vector<uint16_t> indent_length_stack;
  uint32_t queued_dedent_count;
};

extern "C" {

void *ts_language_python_external_scanner_create() {
  return new Scanner();
}

bool ts_language_python_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

void ts_language_python_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
