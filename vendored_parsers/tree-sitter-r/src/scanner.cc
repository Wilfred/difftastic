
#include <tree_sitter/parser.h>

namespace {

enum TokenType {
  RAW_STRING_LITERAL,
};

struct Scanner {

  bool scan(TSLexer* lexer, const bool* valid_symbols) {

    // scan a raw string literal; see R source code for implementation:
    // https://github.com/wch/r-source/blob/52b730f217c12ba3d95dee0cd1f330d1977b5ea3/src/main/gram.y#L3102

    // raw string literals can start with either 'r' or 'R'
    char prefix = lexer->lookahead;
    if (prefix != 'r' && prefix != 'R') {
      return false;
    }
    lexer->advance(lexer, false);

    // check for quote character
    char quote = lexer->lookahead;
    if (quote != '"' && quote != '\'') {
      return false;
    }
    lexer->advance(lexer, false);

    // start counting '-' characters
    int hyphen_count = 0;
    while (lexer->lookahead == '-') {
      lexer->advance(lexer, false);
      hyphen_count += 1;
    }

    // check for an opening bracket, and figure out
    // the corresponding closing bracket
    char opening_bracket = lexer->lookahead;
    char closing_bracket = 0;
    if (opening_bracket == '(') {
      closing_bracket = ')';
      lexer->advance(lexer, false);
    } else if (opening_bracket == '[') {
      closing_bracket = ']';
      lexer->advance(lexer, false);
    } else if (opening_bracket == '{') {
      closing_bracket = '}';
      lexer->advance(lexer, false);
    } else {
      return false;
    }

    // we're in the body of the raw string; start looping until
    // we find the matching closing bracket
    for (; lexer->lookahead != 0; lexer->advance(lexer, false)) {

      // consume a closing bracket
      if (lexer->lookahead != closing_bracket) {
        continue;
      }
      lexer->advance(lexer, false);

      // consume hyphens
      bool hyphens_ok = true;
      for (int i = 0; i < hyphen_count; i++) {
        if (lexer->lookahead != '-') {
          hyphens_ok = false;
          break;
        }
        lexer->advance(lexer, false);
      }

      if (!hyphens_ok) {
        continue;
      }

      // consume a closing quote character
      if (lexer->lookahead != quote) {
        continue;
      }
      lexer->advance(lexer, false);

      // success!
      lexer->result_symbol = RAW_STRING_LITERAL;
      return true;

    }

    // if we get here, this implies we hit eof (and so we have
    // an unclosed raw string)
    return false;

  }

};

} // end anonymous namespace

extern "C" {

void *tree_sitter_r_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_r_external_scanner_scan(void *payload,
                                           TSLexer *lexer,
                                           const bool *valid_symbols)
{
  Scanner* scanner = static_cast<Scanner*>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_r_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_r_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

void tree_sitter_r_external_scanner_destroy(void *payload) {
  Scanner* scanner = static_cast<Scanner*>(payload);
  delete scanner;
}

} // extern "C"
