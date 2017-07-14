#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::wstring;

enum TokenType {
  HEREDOC
};

struct Scanner {
  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void reset() {}

  bool serialize(TSExternalTokenState state) { return true; }

  void deserialize(TSExternalTokenState state) {}

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    wstring heredoc_content;

    while (iswalpha(lexer->lookahead)) {
      heredoc_content += lexer->lookahead;
      advance(lexer);
    }

    if (lexer->lookahead != '\n') return false;

    wstring leading_word;

    for (;;) {
      advance(lexer);

      while (iswalpha(lexer->lookahead)) {
        leading_word += lexer->lookahead;
        advance(lexer);
      }

      if (leading_word == heredoc_content || lexer->lookahead == '\0') break;
      if (lexer->lookahead == '\n') leading_word.clear();
    }

    return true;
  }
};

}

extern "C" {

void *tree_sitter_bash_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_bash_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

void tree_sitter_bash_external_scanner_reset(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->reset();
}

bool tree_sitter_bash_external_scanner_serialize(void *payload, TSExternalTokenState state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_bash_external_scanner_deserialize(void *payload, TSExternalTokenState state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state);
}

void tree_sitter_bash_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
