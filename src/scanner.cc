#include <tree_sitter/parser.h>
#include <vector>

namespace {

using std::vector;

enum TokenType {
  NEWLINE,
  INDENT,
  DEDENT,
};

struct Scanner {
  Scanner() {
    deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;
    vector<uint16_t>::iterator
      iter = indent_length_stack.begin() + 1,
      end = indent_length_stack.end();
    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = *iter;
    }
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    indent_length_stack.clear();
    indent_length_stack.push_back(0);
    size_t i = 0;
    while (i < length) indent_length_stack.push_back(buffer[i++]);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    lexer->mark_end(lexer);

    while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r') {
      lexer->advance(lexer, true);
    }

    if (lexer->lookahead == 0) {
      if (valid_symbols[DEDENT] && indent_length_stack.size() > 1) {
        indent_length_stack.pop_back();
        lexer->result_symbol = DEDENT;
        return true;
      }

      if (valid_symbols[NEWLINE]) {
        lexer->result_symbol = NEWLINE;
        return true;
      }

      return false;
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
      } else if (lexer->lookahead == '\r') {
        indent_length = 0;
        advance(lexer);
      } else if (lexer->lookahead == '\t') {
        indent_length += 8;
        advance(lexer);
      } else if (lexer->lookahead == '#') {
        while (lexer->lookahead && lexer->lookahead != '\n') advance(lexer);
        advance(lexer);
        indent_length = 0;
      } else {
        break;
      }
    }

    if (indent_length > indent_length_stack.back()) {
      indent_length_stack.push_back(indent_length);
      lexer->result_symbol = INDENT;
      return true;
    }

    if (indent_length < indent_length_stack.back() && valid_symbols[DEDENT]) {
      indent_length_stack.pop_back();
      lexer->result_symbol = DEDENT;
      return true;
    }

    if (valid_symbols[NEWLINE]) {
      lexer->result_symbol = NEWLINE;
      return true;
    }

    return false;
  }

  vector<uint16_t> indent_length_stack;
};

}

extern "C" {

void *tree_sitter_python_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_python_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_python_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_python_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_python_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
