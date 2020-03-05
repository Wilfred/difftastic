#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::iswspace;

enum TokenType {
  METADATA_MAP,
};

struct Scanner {
  void skipWsOrCommas(TSLexer *lexer) {
    while (iswspace(lexer->lookahead) || (lexer->lookahead == ',')) {
      lexer->advance(lexer, true);
    }    
  }
  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    // looking for things like:
    //   ^{:a 1}
    //   #^{:fun "woa"}
    //   ^{:nesting #{}}
    //   ^{:escaped "\}"}
    //   ^{:who-does-this \{}
    if (valid_symbols[METADATA_MAP]) {
      skipWsOrCommas(lexer);
      if (lexer->lookahead == 0) {
        return false;
      }

      // look for ^ or #^
      if (lexer->lookahead == '#') { // old-style metadata?
        lexer->advance(lexer, false);
        // better have a ^ next
        if ((lexer->lookahead == 0) || (lexer->lookahead != '^')) {
          return false;
        }
      } else if (lexer->lookahead != '^') { // contemporary metadata?
        return false;
      }
      // at this point either ^ or #^ should have been detected
      lexer->advance(lexer, false);

      skipWsOrCommas(lexer);
      if (lexer->lookahead == 0) {
        return false;
      }

      // Consume '{'
      if (lexer->lookahead != '{') {
        return false;
      }
      lexer->advance(lexer, false);
      // XXX: would check if EOF here, but this happens at top of loop below

      // 1. count curly braces that are delimiters
      //    - \{ and \} in non-string context => not delimiters
      //    - { and } within string delimiters (") => not delimiters
      //    - all other occurences => count as delimiters
      // 2. ascertain whether current character is within a literal string
      //    - track whether current context is in a string or notes
      //    - any non-escaped double quote => toggle in_string state
      // 3. count consecutive backslashes to support 1 and 2
      //    - even consecutive backslashes before char => char not escaped
      //    - odd consecutive backslashes before char => char escaped
      uint32_t brace_depth = 1;
      bool in_string = false;
      // trying to count CONSECUTIVE backslashes, but 1 means just saw a
      // backslash that wasn't preceded by a backslash.
      uint32_t cbs = 0;
      
      // Consume content, '}'
      for (;;) {
        switch (lexer->lookahead) {
          // EOF
          case '\0':
            return false;
          // track escaping
          case '\\':
            if (cbs > 0) {
              cbs++;
            } else {
              cbs = 1;
            }
            break;
          // possibly an opening brace to count
          case '{':
            if (cbs % 2 == 0) {
              if (!in_string) {
                brace_depth++;
              }
            }
            cbs = 0;
            break;
          // possibly a closing brace to count
          case '}':
            if (cbs % 2 == 0) {
              if (!in_string) {
                if (brace_depth == 1) {
                  lexer->result_symbol = METADATA_MAP;
                  lexer->advance(lexer, false);
                  //lexer->mark_end(lexer);
                  return true;
                } else {
                  brace_depth--;
                }
              }
            }
            cbs = 0;
            break;
          // possibly a string delimiter
          case '"':
            if (cbs % 2 == 0) {
              if (in_string) {
                in_string = false;
              } else {
                in_string = true;
              }
            }
            // XXX: not sure if above logic is complete
            cbs = 0;
            break;
          // any other char means chain of backslashes broken
          default:
            cbs = 0;
            break;
        }

        lexer->advance(lexer, false);
      }
    }
    return false;
  }
};

}

extern "C" {

void *tree_sitter_clojure_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_clojure_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_clojure_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_clojure_external_scanner_deserialize(void *payload, const char *buffer,
                                                      unsigned length) {
}

void tree_sitter_clojure_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
