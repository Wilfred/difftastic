#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>

namespace {

using std::vector;

enum TokenType {
  LAYOUT_SEMICOLON,
  LAYOUT_OPEN_BRACE,
  LAYOUT_CLOSE_BRACE,
};

struct Scanner {
  Scanner() {
    deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;
    buffer[i++] = queued_close_brace_count;

    vector<uint16_t>::iterator
      iter = indent_length_stack.begin() + 1,
      end = indent_length_stack.end();
    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = *iter;
    }

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    queued_close_brace_count = 0;
    indent_length_stack.clear();
    indent_length_stack.push_back(0);

    if (length > 0) {
      size_t i = 0;
      queued_close_brace_count = buffer[i++];
      while (i < length) indent_length_stack.push_back(buffer[i++]);
    }
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[LAYOUT_CLOSE_BRACE] && queued_close_brace_count > 0) {
      queued_close_brace_count--;
      lexer->result_symbol = LAYOUT_CLOSE_BRACE;
      return true;
    }

    if (valid_symbols[LAYOUT_OPEN_BRACE]) {
      while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
      }

      if (lexer->lookahead == '{') {
        return false;
      } else {
        uint32_t column = lexer->get_column(lexer);
        indent_length_stack.push_back(column);
        lexer->result_symbol = LAYOUT_OPEN_BRACE;
        return true;
      }
    }

    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      lexer->advance(lexer, true);
    }

    if (lexer->lookahead == 0) {
      if (valid_symbols[LAYOUT_SEMICOLON]) {
        lexer->result_symbol = LAYOUT_SEMICOLON;
        return true;
      }
      if (valid_symbols[LAYOUT_CLOSE_BRACE]) {
        lexer->result_symbol = LAYOUT_CLOSE_BRACE;
        return true;
      }
      return false;
    }

    lexer->mark_end(lexer);
    if (lexer->lookahead == 'i') {
      advance(lexer);
      if (lexer->lookahead == 'n') {
        advance(lexer);
        if (iswspace(lexer->lookahead)) {
          indent_length_stack.pop_back();
          if (valid_symbols[LAYOUT_CLOSE_BRACE]) {
            lexer->result_symbol = LAYOUT_CLOSE_BRACE;
            return true;
          } else {
            queued_close_brace_count++;
            if (valid_symbols[LAYOUT_SEMICOLON]) {
              lexer->result_symbol = LAYOUT_SEMICOLON;
              return true;
            }
          }
        }
      }
    }

    if (lexer->lookahead != '\n') return false;
    advance(lexer);

    bool next_token_is_comment = false;
    uint32_t indent_length = 0;
    for (;;) {
      if (lexer->lookahead == '\n') {
        indent_length = 0;
        advance(lexer);
      } else if (lexer->lookahead == ' ') {
        indent_length++;
        advance(lexer);
      } else if (lexer->lookahead == '\t') {
        indent_length += 8;
        advance(lexer);
      } else if (lexer->lookahead == 0) {
        if (valid_symbols[LAYOUT_SEMICOLON]) {
          lexer->result_symbol = LAYOUT_SEMICOLON;
          return true;
        }
        if (valid_symbols[LAYOUT_CLOSE_BRACE]) {
          lexer->result_symbol = LAYOUT_CLOSE_BRACE;
          return true;
        }
        return false;
      } else {
        if (lexer->lookahead == '-' || lexer->lookahead == '{') {
          advance(lexer);
          next_token_is_comment = lexer->lookahead == '-';
        }
        break;
      }
    }

    if (!next_token_is_comment) {
      if (indent_length < indent_length_stack.back()) {
        indent_length_stack.pop_back();
        while (indent_length < indent_length_stack.back()) {
          indent_length_stack.pop_back();
          queued_close_brace_count++;
        }

        if (valid_symbols[LAYOUT_CLOSE_BRACE]) {
          lexer->result_symbol = LAYOUT_CLOSE_BRACE;
          return true;
        } else {
          queued_close_brace_count++;
          if (valid_symbols[LAYOUT_SEMICOLON]) {
            lexer->result_symbol = LAYOUT_SEMICOLON;
            return true;
          }
        }
      } else if (indent_length == indent_length_stack.back()) {
        if (valid_symbols[LAYOUT_SEMICOLON]) {
          lexer->result_symbol = LAYOUT_SEMICOLON;
          return true;
        }
      }
    }

    return false;
  }

  vector<uint16_t> indent_length_stack;
  uint32_t queued_close_brace_count;
};

}

extern "C" {

void *tree_sitter_haskell_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_haskell_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_haskell_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_haskell_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_haskell_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
