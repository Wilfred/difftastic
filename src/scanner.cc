#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

using std::string;

enum TokenType {
  DOLLAR_QUOTED_STRING_TAG,
  DOLLAR_QUOTED_STRING_CONTENT,
  DOLLAR_QUOTED_STRING_END_TAG,
};

struct Scanner {
  string dollar_quoted_string_tag;
  string current_leading_word;
  bool dollar_quoted_string_started;

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    if (dollar_quoted_string_tag.length() + 1>= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    buffer[0] = dollar_quoted_string_started;
    dollar_quoted_string_tag.copy(&buffer[1], dollar_quoted_string_tag.length());
    return dollar_quoted_string_tag.length() + 1;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) {
      dollar_quoted_string_started = false;
      dollar_quoted_string_tag.clear();
    } else {
      dollar_quoted_string_started = buffer[0];
      dollar_quoted_string_tag.assign(&buffer[1], &buffer[length]);
    }
  }

  bool scan_dollar_quoted_string_content(TSLexer *lexer) {
    unsigned long int pos = 0;
    lexer->result_symbol = DOLLAR_QUOTED_STRING_CONTENT;
    lexer->mark_end(lexer);

    for (;;) {
        if (lexer->lookahead == '\0') {
          return false;
        } else if (lexer->lookahead == dollar_quoted_string_tag[pos]) {
            if (pos == dollar_quoted_string_tag.length() - 1) {
              return true;
            } else if (pos == 0) {
              lexer->result_symbol = DOLLAR_QUOTED_STRING_CONTENT;
              lexer->mark_end(lexer);
            }
            pos++;
            advance(lexer);
        } else if (pos != 0) {
            pos = 0;
        } else {
            advance(lexer);
        }
    }
  }

  bool scan_dollar_quoted_string_tag(TSLexer *lexer) {
    while (iswspace(lexer->lookahead)) skip(lexer);

    dollar_quoted_string_tag.clear();
    if (lexer->lookahead == '$') {
      dollar_quoted_string_tag += lexer->lookahead;
      advance(lexer);
    } else {
      return false;
    }

    while (iswalpha(lexer->lookahead)) {
      dollar_quoted_string_tag += lexer->lookahead;
      advance(lexer);
    }

    if (lexer->lookahead == '$') {
      dollar_quoted_string_tag += lexer->lookahead;
      advance(lexer);
      dollar_quoted_string_started = true;
      return true;
    }

    return false;
  }

  bool scan_dollar_quoted_string_end_tag(TSLexer *lexer) {
    current_leading_word.clear();
    while (
      lexer->lookahead != '\0' &&
      current_leading_word.length() < dollar_quoted_string_tag.length()
    ) {
      current_leading_word += lexer->lookahead;
      advance(lexer);
    }
    return current_leading_word == dollar_quoted_string_tag;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[DOLLAR_QUOTED_STRING_TAG] && !dollar_quoted_string_started) {
      return scan_dollar_quoted_string_tag(lexer);
    }

    if (valid_symbols[DOLLAR_QUOTED_STRING_CONTENT] && dollar_quoted_string_started) {
      return scan_dollar_quoted_string_content(lexer);
    }

    if (valid_symbols[DOLLAR_QUOTED_STRING_END_TAG] && dollar_quoted_string_started) {
      if (scan_dollar_quoted_string_end_tag(lexer)) {
        dollar_quoted_string_started = false;
        lexer->result_symbol = DOLLAR_QUOTED_STRING_END_TAG;
        return true;
      };
    }

    return false;
  }

};

}

extern "C" {

void *tree_sitter_sql_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_sql_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_sql_external_scanner_serialize(void *payload, char *state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_sql_external_scanner_deserialize(void *payload, const char *state, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state, length);
}

void tree_sitter_sql_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
