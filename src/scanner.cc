#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>
#include <iostream>

namespace {

using std::vector;
using std::string;

enum TokenType {
  LINE_BREAK,

  HEREDOC_START,
  HEREDOC_CONTENT,
  HEREDOC_END,
  SIGIL_START,
  SIGIL_CONTENT,
  SIGIL_END
};

enum StackItemType {
  HEREDOC,
  SIGIL
};

struct StackItem {
  StackItemType type;

  // heredoc
  bool single_quote;

  // sigil
  int32_t terminator;
  bool heredoc;
  bool allows_interpolation;
};

const char SIGIL_CHARS[] = {
  '/', '<', '"', '\'', '[', '(', '{', '|'
};

// TODO: need to lookahead operators only
const char OPERATORS[] = {
  ':', '|', '=', '&', '!', '<', '>', '+', '-', '*', '/'
};

struct Scanner {
  void reset() {
    stack.clear();
  }

  bool is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\v';
  }

  bool is_newline(char c) {
    return c == '\n' || c == '\f' || c == '\r';
  }

  bool is_quote_char(char c) {
    return c == '"' || c == '\'';
  }

  bool is_upcase_char(char c) {
    return c >= 'A' && c <= 'Z';
  }

  bool is_downcase_char(char c) {
    return c >= 'a' && c <= 'z';
  }

  bool is_sigil_char(char c) {
    return memchr(&SIGIL_CHARS, c, sizeof(SIGIL_CHARS)) != NULL;
  }

  char sigil_terminator(char c) {
    switch (c) {
    case '(': return ')';
    case '[': return ']';
    case '{': return '}';
    case '<': return '>';
    default: return c;
    }
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    unsigned i = 0;

    if (stack.size() * 5 + 1>= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    buffer[i++] = stack.size();
    for (
      vector<StackItem>::iterator iter = stack.begin(),
      end = stack.end();
      iter != end;
      ++iter
    ) {
      buffer[i++] = iter->type;
      buffer[i++] = iter->single_quote;
      buffer[i++] = iter->terminator;
      buffer[i++] = iter->heredoc;
      buffer[i++] = iter->allows_interpolation;
    }
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    unsigned i = 0;
    stack.clear();

    if (length == 0) return;

    uint8_t size = buffer[i++];
    for (unsigned j = 0; j < size; j++) {
      StackItem stack_item;
      stack_item.type = static_cast<StackItemType>(buffer[i++]);
      stack_item.single_quote = buffer[i++];
      stack_item.terminator = buffer[i++];
      stack_item.heredoc = buffer[i++];
      stack_item.allows_interpolation = buffer[i++];
      stack.push_back(stack_item);
    }
  }

  bool scan_sigil_start(TSLexer *lexer) {
    bool quote = false;
    bool allows_interpolation = false;
    StackItem stack_item;
    stack_item.type = SIGIL;
    stack_item.heredoc = false;

    if (lexer->lookahead != '~') return false;
    advance(lexer);

    if (!(is_upcase_char(lexer->lookahead) || is_downcase_char(lexer->lookahead))) return false;
    stack_item.allows_interpolation = is_downcase_char(lexer->lookahead);
    advance(lexer);

    if (is_sigil_char(lexer->lookahead)) {
      stack_item.terminator = sigil_terminator(lexer->lookahead);
      quote = lexer->lookahead == '"';
      advance(lexer);
      lexer->mark_end(lexer);
      if (quote && lexer->lookahead == '"') {
        advance(lexer);
        if (lexer->lookahead == '"') {
          advance(lexer);
          lexer->mark_end(lexer);
          stack_item.heredoc = true;
        }
      }
      lexer->result_symbol = SIGIL_START;
      stack.push_back(stack_item);
      return true;
    }
    return false;
  }

  bool scan_sigil_content_or_end(TSLexer *lexer) {
    bool has_content = false;
    int quotes = 0;
    StackItem stack_item = stack.back();

    for(;;) {
      if (stack_item.allows_interpolation && lexer->lookahead == '#') {
        quotes = 0;
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            lexer->result_symbol = SIGIL_CONTENT;
            return true;
          } else {
            return false;
          }
        }
      } else if (!stack_item.heredoc && lexer->lookahead == stack_item.terminator) {
        if (has_content) {
          lexer->mark_end(lexer);
          lexer->result_symbol = SIGIL_CONTENT;
        } else {
          advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = SIGIL_END;
          stack.pop_back();
        }
        return true;
      } else if (stack_item.heredoc && lexer->lookahead == stack_item.terminator) {
        if (quotes == 0) {
          lexer->mark_end(lexer);
        }
        quotes++;

        if (quotes == 3) {
          if (has_content) {
            lexer->result_symbol = SIGIL_CONTENT;
          } else {
            advance(lexer);
            lexer->mark_end(lexer);
            lexer->result_symbol = SIGIL_END;
            stack.pop_back();
          }
          return true;
        } else {
          advance(lexer);
        }
      } else if (lexer->lookahead == 0) {
        lexer->mark_end(lexer);
        return false;
      } else {
        has_content = true;
        quotes = 0;
        advance(lexer);
      }
    }
  }

  bool scan_heredoc_start(TSLexer *lexer) {
    if (lexer->lookahead != '"') return false;
    advance(lexer);
    if (lexer->lookahead != '"') return false;
    advance(lexer);
    if (lexer->lookahead != '"') return false;
    advance(lexer);
    lexer->result_symbol = HEREDOC_START;
    StackItem stack_item;
    stack_item.type = HEREDOC;
    stack_item.single_quote = false;
    stack.push_back(stack_item);
    return true;
  }

  bool scan_heredoc_content_or_end(TSLexer *lexer) {
    bool has_content = false;
    int quotes = 0;

    for(;;) {
      if (lexer->lookahead == '#') {
        quotes = 0;
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          if (has_content) {
            lexer->result_symbol = HEREDOC_CONTENT;
            return true;
          } else {
            return false;
          }
        }
      } else if (lexer->lookahead == '"') {
        if (quotes == 0) {
          lexer->mark_end(lexer);
        }
        quotes++;

        if (quotes == 3) {
          if (has_content) {
            lexer->result_symbol = HEREDOC_CONTENT;
          } else {
            advance(lexer);
            lexer->mark_end(lexer);
            lexer->result_symbol = HEREDOC_END;
            stack.pop_back();
          }
          return true;
        } else {
          advance(lexer);
        }
      } else if (lexer->lookahead == 0) {
        lexer->mark_end(lexer);
        return false;
      } else {
        has_content = true;
        quotes = 0;
        advance(lexer);
      }
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[HEREDOC_START] || valid_symbols[SIGIL_START] || valid_symbols[LINE_BREAK]) {
      while (is_whitespace(lexer->lookahead)) skip(lexer);
    }

    if ((valid_symbols[LINE_BREAK]) &&
        is_newline(lexer->lookahead)) {
      skip(lexer);
      while (is_whitespace(lexer->lookahead) || is_newline(lexer->lookahead)) skip(lexer);
      if (memchr(&OPERATORS, lexer->lookahead, sizeof(OPERATORS)) != NULL) {
        skip(lexer);
        return false;
      } else {
        lexer->mark_end(lexer);
        lexer->result_symbol = LINE_BREAK;
        return true;
      }
    }

    if (valid_symbols[HEREDOC_START] &&
        is_quote_char(lexer->lookahead)) {
      return scan_heredoc_start(lexer);
    }

    if (!stack.empty() &&
        stack.back().type == HEREDOC &&
        (valid_symbols[HEREDOC_CONTENT] || valid_symbols[HEREDOC_END])) {
      return scan_heredoc_content_or_end(lexer);
    }

    if (valid_symbols[SIGIL_START] &&
        lexer->lookahead == '~') {
      return scan_sigil_start(lexer);
    }

    if (!stack.empty() &&
        stack.back().type == SIGIL &&
        (valid_symbols[SIGIL_CONTENT] || valid_symbols[SIGIL_END])) {
      return scan_sigil_content_or_end(lexer);
    }

    return false;
  }

  vector<StackItem> stack;
};

}

extern "C" {

void *tree_sitter_elixir_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_elixir_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_elixir_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_elixir_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_elixir_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
