#include <tree_sitter/parser.h>
#include <string>
#include <cassert>
#include <cstring>
#include <cwctype>

namespace {

using std::wstring;
using std::iswspace;

enum TokenType {
  RAW_STRING_DELIMITER,
  RAW_STRING_CONTENT,
};

// The spec limits delimiters to 16 chars, enforce this to bound serialization.
const unsigned RAW_STRING_DELIMITER_MAX = 16;

struct Scanner {
  // Last raw_string_delimiter, used to detect when raw_string_content ends.
  wstring delimiter;

  // Scan a raw string delimiter in R"delimiter(content)delimiter".
  bool scan_raw_string_delimiter(TSLexer *lexer) {
    if (!delimiter.empty()) {
      // Closing delimiter: must exactly match the opening delimiter.
      // We already checked this when scanning content, but this is how we know
      // when to stop. We can't stop at ", because R"""hello""" is valid.
      for (std::size_t i = 0; i < delimiter.size(); ++i) {
        if (lexer->lookahead != delimiter[i])
          return false;
        lexer->advance(lexer, false);
      }
      delimiter.clear();
      return true;
    }
    // Opening delimiter: record the d-char-sequence up to (.
    // d-char is any basic character except parens, backslashes, and spaces.
    for (;;) {
      if (delimiter.size() > RAW_STRING_DELIMITER_MAX ||
          lexer->eof(lexer) || lexer->lookahead == '\\' || iswspace(lexer->lookahead)) {
        return false;
      }
      if (lexer->lookahead == '(') {
        // Rather than create a token for an empty delimiter, we fail and let
        // the grammar fall back to a delimiter-less rule.
        return !delimiter.empty();
      }
      delimiter += lexer->lookahead;
      lexer->advance(lexer, false);
    }
  }

  // Scan the raw string content in R"delimiter(content)delimiter".
  bool scan_raw_string_content(TSLexer *lexer) {
    // The progress made through the delimiter since the last ')'.
    // The delimiter may not contain ')' so a single counter suffices.
    int delimiter_index = -1;
    for (;;) {
      // If we hit EOF, consider the content to terminate there.
      // This forms an incomplete raw_string_literal, and models the code well.
      if (lexer->eof(lexer)) {
        lexer->mark_end(lexer);
        return true;
      }

      if (delimiter_index >= 0) {
        if (static_cast<unsigned>(delimiter_index) == delimiter.size()) {
          if (lexer->lookahead == '"') {
            return true;
          } else {
            delimiter_index = -1;
          }
        } else {
          if (lexer->lookahead == delimiter[delimiter_index]) {
            delimiter_index++;
          } else {
            delimiter_index = -1;
          }
        }
      }

      if (delimiter_index == -1 && lexer->lookahead == ')') {
        // The content doesn't include the )delimiter" part.
        // We must still scan through it, but exclude it from the token.
        lexer->mark_end(lexer);
        delimiter_index = 0;
      }

      lexer->advance(lexer, false);
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    // No skipping leading whitespace: raw-string grammar is space-sensitive.

    if (valid_symbols[RAW_STRING_DELIMITER]) {
      lexer->result_symbol = RAW_STRING_DELIMITER;
      return scan_raw_string_delimiter(lexer);
    }

    if (valid_symbols[RAW_STRING_CONTENT]) {
      lexer->result_symbol = RAW_STRING_CONTENT;
      return scan_raw_string_content(lexer);
    }

    return false;
  }
};

}

extern "C" {

void *tree_sitter_cpp_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_cpp_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_cpp_external_scanner_serialize(void *payload, char *buffer) {
#if __cpp_static_assert >= 200410L
  static_assert(RAW_STRING_DELIMITER_MAX * sizeof(wchar_t) <
                    TREE_SITTER_SERIALIZATION_BUFFER_SIZE,
                "Raw string delimiters may not be serializable!");
#endif

  Scanner *scanner = static_cast<Scanner *>(payload);
  size_t size = scanner->delimiter.size() * sizeof(wchar_t);
  memcpy(buffer, scanner->delimiter.data(), size);
  return size;
}

void tree_sitter_cpp_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  assert(length % sizeof(wchar_t) == 0 && "Can't decode serialized delimiter!");

  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->delimiter.resize(length/sizeof(wchar_t));
  memcpy(&scanner->delimiter[0], buffer, length);
}

void tree_sitter_cpp_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
