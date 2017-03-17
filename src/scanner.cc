#include <tree_sitter/parser.h>
#include <vector>

#ifndef UINT8_MAX
#define UINT8_MAX (255)
#endif

using std::vector;

enum TokenType {
  NEWLINE,
  INDENT,
  DEDENT
};

struct Scanner {
  Scanner() : queued_dedent_count(0) {
    indent_length_stack.push_back(0);
  }

  void reset() {
    queued_dedent_count = 0;
    indent_length_stack.clear();
    indent_length_stack.push_back(0);
  }

  bool serialize(TSExternalTokenState state) {
    size_t i = 0;

    if (queued_dedent_count > UINT8_MAX) return false;
    state[i++] = queued_dedent_count;

    if (indent_length_stack.size() > 14) return false;
    state[i++] = indent_length_stack.size();

    vector<uint16_t>::iterator iter = indent_length_stack.begin(),
      end = indent_length_stack.end();

    for (; iter != end; ++iter) {
      if (*iter > UINT8_MAX) return false;
      state[i++] = *iter;
    }

    return true;
  }

  void deserialize(TSExternalTokenState state) {
    size_t i = 0;

    queued_dedent_count = state[i++];

    size_t indent_length_stack_size = state[i++];
    indent_length_stack.clear();
    for (size_t j = 0; j < indent_length_stack_size; j++) {
      indent_length_stack.push_back(state[i++]);
    }
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
    lexer->mark_end(lexer);

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

void *tree_sitter_python_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_python_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

void tree_sitter_python_external_scanner_reset(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->reset();
}

bool tree_sitter_python_external_scanner_serialize(void *payload, TSExternalTokenState state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_python_external_scanner_deserialize(void *payload, TSExternalTokenState state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state);
}

void tree_sitter_python_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
