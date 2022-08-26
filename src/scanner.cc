#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cstring>
#include <cassert>
#include <stdio.h>
namespace {

using std::vector;
using std::iswspace;
using std::memcpy;

enum TokenType {
  NEWLINE,
  DEDENT,
  COMMENT,
  CLOSE_PAREN,
  CLOSE_BRACKET,
  CLOSE_BRACE,
  LET,
  EQ,
  IN,
  ERROR,
};

#define WS_CASES \
  case ' ': \
  case '\f': \
  case '\r': \
  case '\t': \
  case '\v'

struct Scanner {
  Scanner() {
    deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;

    size_t token_count = token_stack.size();
    if (token_count > UINT8_MAX) token_count = UINT8_MAX;
    buffer[i++] = token_count;

    if (token_count > 0) {
      memcpy(&buffer[i], token_stack.data(), token_count);
    }
    i += token_count;

    vector<uint16_t>::iterator
      iter = indent_length_stack.begin() + 1,
      end = indent_length_stack.end();

    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = *iter;
    }

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    token_stack.clear();
    indent_length_stack.clear();
    indent_length_stack.push_back(0);

    if (length > 0) {
      size_t i = 0;

      size_t token_count = (uint8_t)buffer[i++];
      token_stack.resize(token_count);
      if (token_count > 0) {
        memcpy(token_stack.data(), &buffer[i], token_count);
      }
      i += token_count;

      for (; i < length; i++) {
        indent_length_stack.push_back(buffer[i]);
      }
    }
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  bool is_char(TSLexer *lexer) {
    switch (lexer->lookahead) {
      WS_CASES:
      case '\n':
      case 0:
        return false;
      default:
        return true;
    }
  }

  void skip_to_next_line(TSLexer *lexer) {
    for (;;) {
      switch (lexer->lookahead) {
        case 0:
        case '\n':
          return;
        default:
          skip(lexer);
      }
    }
  }

  bool consume_ws_and_comments(TSLexer *lexer, bool *marker) {
    for (;;) {
      switch (lexer->lookahead) {
        case '\n':
          if (*marker) return true;
          *marker = true;
        WS_CASES: skip(lexer); break;
        case '/':
          skip(lexer);
          if (lexer->lookahead != '/') return false;
          skip_to_next_line(lexer);
        default:
          return true;
      }
    }
  }

  bool consume_to_ident(TSLexer *lexer) {
    for (;;) {
      switch (lexer->lookahead) {
        case '\n':
        case 0:
        WS_CASES: skip(lexer); break;
        case '/':
          skip(lexer);
          if (lexer->lookahead != '/') return false;
          skip_to_next_line(lexer);
        default:
          return true;
      }
    }
  }

  static bool seq(const char *s, TSLexer *lexer) {
    size_t len = strlen(s);
    for (size_t i = 0; i < len; i++) {
      int32_t c = s[i];
      int32_t c2 = lexer->lookahead;
      if (c != c2) return false;
      lexer->advance(lexer, false);
    }
    return true;
  }

  static bool token(const char *s, TSLexer *lexer) {
    return seq(s, lexer) && token_end(lexer->lookahead);
  }

  static bool token_end(uint32_t c) {
    switch (c) {
      WS_CASES:
      case '\n':
      case 0:
      case '(':
      case ')':
      case '[':
      case ']':
        return true;
      default:
        return false;
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    bool error_recovery_mode = valid_symbols[LET] && valid_symbols[DEDENT];
    bool within_brackets = valid_symbols[CLOSE_BRACE] || valid_symbols[CLOSE_PAREN] || valid_symbols[CLOSE_BRACKET];

    lexer->mark_end(lexer);
    bool new_line = false;

    if (!consume_ws_and_comments(lexer, &new_line)) return false;

    if (valid_symbols[IN] && lexer->lookahead == 'i') {
      if (token("in", lexer)) {
        lexer->mark_end(lexer);
        indent_length_stack.pop_back();
        lexer->result_symbol = IN;
        printf("\nPushed in\n");
        return true;
      }
      return false;
    }

    if (valid_symbols[LET] && lexer->lookahead == 'l') {
      if (token("let", lexer)) {
        lexer->mark_end(lexer);
        token_stack.push_back(LET);
        lexer->result_symbol = LET;
        printf("\nPushed let\n");
        return true;
      }
      return false;
    }

    // if (valid_symbols[LET_FUN] && lexer->lookahead == 'l') {
    //   uint32_t pos = lexer->get_column(lexer);
    //   if (token("let", lexer)) {
    //     lexer->mark_end(lexer);
    //     indent_length_stack.push_back(pos);
    //     lexer->result_symbol = LET_FUN;
    //     printf("\nPushed let_fun\n");
    //     return true;
    //   }
    //   return false;
    // }

    if (valid_symbols[EQ] && lexer->lookahead == '=') {
      if (token("=", lexer)) {
        lexer->mark_end(lexer);
        if (!token_stack.empty() && token_stack.back() == LET) {
          if (!consume_to_ident(lexer)) return false;
          indent_length_stack.push_back(lexer->get_column(lexer));
          printf("\nindented stack\n");
        }
        lexer->result_symbol = EQ;
        printf("\nPushed eq\n");
        return true;
      }
      return false;
    }

    uint32_t indent_length = lexer->get_column(lexer);

    if (!indent_length_stack.empty()) {
      uint16_t current_indent_length = indent_length_stack.back();

      // if (is_char(lexer) && current_indent_length < indent_length && 0 < current_indent_length) {
      //   lexer->result_symbol = ERROR;
      //   printf("\nPushed Error on %c, %i, %i\n", lexer->lookahead, indent_length, current_indent_length);
      //   return true;
      // }

      if (
        (valid_symbols[DEDENT]) &&
        indent_length < current_indent_length
      ) {
        indent_length_stack.pop_back();
        lexer->result_symbol = DEDENT;
        printf("\nPushed dedent\n");
        return true;
      }

    }

    if (valid_symbols[NEWLINE] && new_line) {
      lexer->result_symbol = NEWLINE;
      printf("\nPushed newline\n");
      return true;
    }

    return false;
  }

  vector<int> token_stack;
  vector<uint16_t> indent_length_stack;
};

}

extern "C" {

void *tree_sitter_fsharp_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_fsharp_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_fsharp_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_fsharp_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_fsharp_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
