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
  LET_START,
  IF_START,
  TRY_START,
  LAZY_START,
  FUN_START,
  FUNCTION_START,
  WITH_START,
  MATCH_START,
  FOR_START,
  WHILE_START,
  THEN_START,
  ELSE_START,
  DO_START,
  TYPE_START,
  NAMESPACE_START,
  MODULE_START,
  MEMBER_START,
  PAREN_START,
  NEWLINE,
  COMMENT,
};

#define WS_CASES \
  case ' ': \
  case '\f': \
  case '\n': \
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

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  static bool token_end(uint32_t c) {
    switch (c) {
    WS_CASES:
    case 0:
      return true;
    default:
      return false;
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

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    bool error_recovery_mode = valid_symbols[NEWLINE] && valid_symbols[LET_START];
    // bool within_brackets = valid_symbols[CLOSE_BRACE] || valid_symbols[CLOSE_PAREN] || valid_symbols[CLOSE_BRACKET];
    printf("\nscanner called\n");
    if (!token_stack.empty()) {
      printf("last token: %i\n", token_stack.back());
    } else {
      printf("token stack empty\n");
    }

    if (valid_symbols[LET_START] || valid_symbols[LAZY_START]) {
      if (lexer->lookahead == "l") {
        lexer->advance(lexer, false);
        if (lexer->lookahead == "e") {
          token("et",lexer);
        } else if (lexer->lookahead == "a") {
          token("azy", lexer);
        }
      }
      lexer->result_symbol = LET_START;
      token_stack.push_back(LET_START);
      lexer->mark_end(lexer);
      printf("let token\n");
      return true;
    }

    if (valid_symbols[LAZY_START] && token("lazy", lexer)) {
      lexer->result_symbol = LAZY_START;
      token_stack.push_back(LAZY_START);
      lexer->mark_end(lexer);
      printf("lazy token\n");
      return true;
    }

    if (valid_symbols[NEWLINE] && !error_recovery_mode && lexer->lookahead == '\n') {
      printf("newline\n");
      skip(lexer);
      lexer->result_symbol = NEWLINE;
      return true;
    }

    lexer->mark_end(lexer);

    return false;
  }

    // bool found_end_of_line = false;
    // uint32_t indent_length = 0;
    // int32_t first_comment_indent_length = -1;
    // for (;;) {
    //   if (lexer->lookahead == '\n') {
    //     found_end_of_line = true;
    //     indent_length = 0;
    //     skip(lexer);
    //   } else if (lexer->lookahead == ' ') {
    //     indent_length++;
    //     skip(lexer);
    //   } else if (lexer->lookahead == '\r') {
    //     indent_length = 0;
    //     skip(lexer);
    //   } else if (lexer->lookahead == '\t') {
    //     indent_length += 8;
    //     skip(lexer);
    //   } else if (lexer->lookahead == '/') {
    //     skip(lexer);
    //     if (lexer->lookahead == '/') {
    //       if (first_comment_indent_length == -1) {
    //         first_comment_indent_length = (int32_t)indent_length;
    //       }
    //       while (lexer->lookahead && lexer->lookahead != '\n') {
    //         skip(lexer);
    //       }
    //       skip(lexer);
    //       indent_length = 0;
    //     } else {
    //       return false;
    //     }
    //   } else if (lexer->lookahead == '\\') {
    //     skip(lexer);
    //     if (lexer->lookahead == '\r') {
    //       skip(lexer);
    //     }
    //     if (lexer->lookahead == '\n') {
    //       skip(lexer);
    //     } else {
    //       return false;
    //     }
    //   } else if (lexer->lookahead == '\f') {
    //     indent_length = 0;
    //     skip(lexer);
    //   } else if (lexer->lookahead == 0) {
    //     indent_length = 0;
    //     found_end_of_line = true;
    //     break;
    //   } else {
    //     break;
    //   }
    // }
    //
    // if (found_end_of_line) {
    //
    //   if (indent_length_stack.empty()) {
    //     printf("\nstarted layout at: %i\n", indent_length);
    //     indent_length_stack.push_back(indent_length);
    //     lexer->result_symbol = LAYOUT_START;
    //     return true;
    //   }
    //
    //   if (!indent_length_stack.empty()) {
    //     uint16_t current_indent_length = indent_length_stack.back();
    //
    //     printf("\ncalled at indent = %i, in layout = %i\n", indent_length, current_indent_length);
    //
    //     if (valid_symbols[ALIGN] && indent_length == current_indent_length) {
    //       printf("\naligned at: %i\n", indent_length);
    //       lexer->result_symbol = ALIGN;
    //       return true;
    //     }
    //
    //     if (valid_symbols[INDENT] && current_indent_length < indent_length) {
    //       printf("\nindented at: %i\n", indent_length);
    //       lexer->result_symbol = INDENT;
    //       return true;
    //     }
    //
    //     if (valid_symbols[LAYOUT_START] && current_indent_length < indent_length) {
    //       printf("\nstarted layout at: %i\n", indent_length);
    //       indent_length_stack.push_back(indent_length);
    //       lexer->result_symbol = LAYOUT_START;
    //       return true;
    //     }
    //
    //     if (
    //       (valid_symbols[LAYOUT_END]) &&
    //       // Wait to create a dedent token until we've consumed any comments
    //       // whose indentation matches the current block.
    //       indent_length <= current_indent_length &&
    //       first_comment_indent_length < (int32_t)current_indent_length
    //     ) {
    //       printf("\nended layout at: %i\n", current_indent_length);
    //       indent_length_stack.pop_back();
    //       lexer->result_symbol = LAYOUT_END;
    //       return true;
    //     }
    //
    //   }
    //
    //   if (valid_symbols[NEWLINE] && !error_recovery_mode) {
    //     printf("\nnewline at: %i\n", indent_length);
    //     lexer->result_symbol = NEWLINE;
    //     return true;
    //   }
    // }
    //
    // printf("\nexternal failed\n");
    // return false;
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
  unsigned serialized = scanner->serialize(buffer);
  return serialized;
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
