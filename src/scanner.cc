#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cstring>
#include <cassert>

namespace {

using std::vector;
using std::iswspace;
using std::memcpy;

enum TokenType {
  NEWLINE,
  INDENT,
  DEDENT,
  STRING_START,
  STRING_CONTENT,
  STRING_END,
};

struct Delimiter {
  enum {
    SingleQuote = 1 << 0,
    DoubleQuote = 1 << 1,
    BackQuote = 1 << 2,
    Raw = 1 << 3,
    Format = 1 << 4,
    Triple = 1 << 5,
  };

  Delimiter() : flags(0) {}

  bool is_format() const {
    return flags & Format;
  }

  bool is_raw() const {
    return flags & Raw;
  }

  bool is_triple() const {
    return flags & Triple;
  }

  int32_t end_character() const {
    if (flags & SingleQuote) return '\'';
    if (flags & DoubleQuote) return '"';
    if (flags & BackQuote) return '`';
    return 0;
  }

  void set_format() {
    flags |= Format;
  }

  void set_raw() {
    flags |= Raw;
  }

  void set_triple() {
    flags |= Triple;
  }

  void set_end_character(int32_t character) {
    switch (character) {
      case '\'':
        flags |= SingleQuote;
        break;
      case '"':
        flags |= DoubleQuote;
        break;
      case '`':
        flags |= BackQuote;
        break;
      default:
        assert(false);
    }
  }

  char flags;
};

struct Scanner {
  Scanner() {
    assert(sizeof(Delimiter) == sizeof(char));
    deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;

    size_t stack_size = delimiter_stack.size();
    if (stack_size > UINT8_MAX) stack_size = UINT8_MAX;
    buffer[i++] = stack_size;

    memcpy(&buffer[i], delimiter_stack.data(), stack_size);
    i += stack_size;

    vector<uint16_t>::iterator
      iter = indent_length_stack.begin() + 1,
      end = indent_length_stack.end();

    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = *iter;
    }

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    delimiter_stack.clear();
    indent_length_stack.clear();
    indent_length_stack.push_back(0);

    if (length > 0) {
      size_t i = 0;

      size_t delimiter_count = (uint8_t)buffer[i++];
      delimiter_stack.resize(delimiter_count);
      memcpy(delimiter_stack.data(), &buffer[i], delimiter_count);
      i += delimiter_count;

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

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[STRING_CONTENT] && !valid_symbols[INDENT] && !delimiter_stack.empty()) {
      Delimiter delimiter = delimiter_stack.back();
      int32_t end_character = delimiter.end_character();
      bool has_content = false;
      while (lexer->lookahead) {
        if (lexer->lookahead == '{' && delimiter.is_format()) {
          lexer->mark_end(lexer);
          lexer->advance(lexer, false);
          if (lexer->lookahead == '{') {
            lexer->advance(lexer, false);
          } else {
            lexer->result_symbol = STRING_CONTENT;
            return has_content;
          }
        } else if (lexer->lookahead == '\\') {
          if (delimiter.is_raw()) {
            lexer->advance(lexer, false);
          } else {
            lexer->mark_end(lexer);
            lexer->result_symbol = STRING_CONTENT;
            return has_content;
          }
        } else if (lexer->lookahead == end_character) {
          if (delimiter.is_triple()) {
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
            if (lexer->lookahead == end_character) {
              lexer->advance(lexer, false);
              if (lexer->lookahead == end_character) {
                if (has_content) {
                  lexer->result_symbol = STRING_CONTENT;
                } else {
                  lexer->advance(lexer, false);
                  lexer->mark_end(lexer);
                  delimiter_stack.pop_back();
                  lexer->result_symbol = STRING_END;
                }
                return true;
              }
            }
          } else {
            if (has_content) {
              lexer->result_symbol = STRING_CONTENT;
            } else {
              lexer->advance(lexer, false);
              delimiter_stack.pop_back();
              lexer->result_symbol = STRING_END;
            }
            lexer->mark_end(lexer);
            return true;
          }
        } else if (lexer->lookahead == '\n' && has_content && !delimiter.is_triple()) {
          return false;
        }
        advance(lexer);
        has_content = true;
      }
    }

    lexer->mark_end(lexer);

    bool has_comment = false;
    bool has_newline = false;
    uint32_t indent_length = 0;
    for (;;) {
      if (lexer->lookahead == '\n') {
        has_newline = true;
        indent_length = 0;
        skip(lexer);
      } else if (lexer->lookahead == ' ') {
        indent_length++;
        skip(lexer);
      } else if (lexer->lookahead == '\r') {
        indent_length = 0;
        skip(lexer);
      } else if (lexer->lookahead == '\t') {
        indent_length += 8;
        skip(lexer);
      } else if (lexer->lookahead == '#') {
        has_comment = true;
        while (lexer->lookahead && lexer->lookahead != '\n') skip(lexer);
        skip(lexer);
        indent_length = 0;
      } else if (lexer->lookahead == '\\') {
        skip(lexer);
        if (iswspace(lexer->lookahead)) {
          skip(lexer);
        } else {
          return false;
        }
      } else if (lexer->lookahead == 0) {
        if (valid_symbols[DEDENT] && indent_length_stack.size() > 1) {
          indent_length_stack.pop_back();
          lexer->result_symbol = DEDENT;
          return true;
        }

        if (valid_symbols[NEWLINE]) {
          lexer->result_symbol = NEWLINE;
          return true;
        }

        break;
      } else {
        break;
      }
    }

    if (has_newline) {
      if (indent_length > indent_length_stack.back() && valid_symbols[INDENT]) {
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
    }

    if (!has_comment && valid_symbols[STRING_START]) {
      Delimiter delimiter;

      bool has_flags = false;
      while (lexer->lookahead) {
        if (lexer->lookahead == 'f' || lexer->lookahead == 'F') {
          delimiter.set_format();
        } else if (lexer->lookahead == 'r' || lexer->lookahead == 'R') {
          delimiter.set_raw();
        } else if (
          lexer->lookahead != 'b' &&
          lexer->lookahead != 'B' &&
          lexer->lookahead != 'u' &&
          lexer->lookahead != 'U') {
          break;
        }
        has_flags = true;
        advance(lexer);
      }

      if (lexer->lookahead == '`') {
        delimiter.set_end_character('`');
        advance(lexer);
        lexer->mark_end(lexer);
      } else if (lexer->lookahead == '\'') {
        delimiter.set_end_character('\'');
        advance(lexer);
        lexer->mark_end(lexer);
        if (lexer->lookahead == '\'') {
          advance(lexer);
          if (lexer->lookahead == '\'') {
            advance(lexer);
            lexer->mark_end(lexer);
            delimiter.set_triple();
          }
        }
      } else if (lexer->lookahead == '"') {
        delimiter.set_end_character('"');
        advance(lexer);
        lexer->mark_end(lexer);
        if (lexer->lookahead == '"') {
          advance(lexer);
          if (lexer->lookahead == '"') {
            advance(lexer);
            lexer->mark_end(lexer);
            delimiter.set_triple();
          }
        }
      }

      if (delimiter.end_character()) {
        delimiter_stack.push_back(delimiter);
        lexer->result_symbol = STRING_START;
        return true;
      } else if (has_flags) {
        return false;
      }
    }

    return false;
  }

  vector<uint16_t> indent_length_stack;
  vector<Delimiter> delimiter_stack;
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
