#include <tree_sitter/parser.h>
#include <vector>
#include <utility>
#include <cwctype>
#include <cstring>
#include <cassert>
#include <stdio.h>
#include <string>
#include <algorithm>
namespace {

using std::vector;
using std::string;

enum TokenType {
  VIRTUAL_OPEN_SECTION,
  VIRTUAL_END_SECTION,
  VIRTUAL_END_ALIGNED,
  BLOCK_COMMENT_CONTENT,
};

bool in_error_recovery(const bool *valid_symbols) {
  return
   (valid_symbols[VIRTUAL_OPEN_SECTION] &&
    valid_symbols[VIRTUAL_END_SECTION] &&
    valid_symbols[VIRTUAL_END_ALIGNED]);
}

struct Scanner {
  Scanner() { }

  unsigned serialize(char *buffer) {
    size_t i = 0;

    size_t runback_count = runback.size();
    if (runback_count > UINT8_MAX)
        runback_count = UINT8_MAX;
    buffer[i++] = runback_count;

    if (runback_count > 0)
    {
        memcpy(&buffer[i], runback.data(), runback_count);
    }
    i += runback_count;

    size_t indent_length_length = sizeof(indent_length);
    buffer[i++] = indent_length_length;
    if (indent_length_length > 0)
    {
        memcpy(&buffer[i], &indent_length, indent_length_length);
    }
    i += indent_length_length;

    vector<uint32_t>::iterator
        iter = indent_length_stack.begin() + 1,
        end = indent_length_stack.end();

    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter)
    {
        buffer[i++] = *iter;
    }

    return i;

  }

  void deserialize(const char *buffer, unsigned length) {
    runback.clear();
    indent_length_stack.clear();
    indent_length_stack.push_back(0);

    if (length > 0)
    {
        size_t i = 0;

        size_t runback_count = (uint8_t)buffer[i++];
        runback.resize(runback_count);
        if (runback_count > 0)
        {
            memcpy(runback.data(), &buffer[i], runback_count);
        }
        i += runback_count;

        size_t indent_length_length = buffer[i++];
        if (indent_length_length > 0)
        {
            memcpy(&indent_length, &buffer[i], indent_length_length);
        }
        i += indent_length_length;

        for (; i < length; i++)
        {
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

  bool isWS(TSLexer *lexer) {
      return lexer->lookahead == ' ' || lexer->lookahead == '\r' || lexer->lookahead == '\n';
  }

  bool scan_block_comment(TSLexer *lexer) {
      lexer->mark_end(lexer);
      if (lexer->lookahead != '(')
        return false;

      advance(lexer);
      if (lexer->lookahead != '*')
        return false;

      advance(lexer);

      while (true) {
        switch (lexer->lookahead) {
          case '(':
            scan_block_comment(lexer);
            break;
          case '*':
            advance(lexer);
            if (lexer->lookahead == ')') {
              advance(lexer);
              return true;
            }
            break;
          case '\0':
            return true;
          default:
            advance(lexer);
        }
      }
  }

  void advance_to_line_end(TSLexer *lexer) {
      while (true) {
        if (lexer->lookahead == '\n') {
          break;
        } else if (lexer->eof(lexer)) {
          break;
        } else {
          advance(lexer);
        }
      }
  }


  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (in_error_recovery(valid_symbols))
      return false;

    // First handle eventual runback tokens, we saved on a previous scan op
    if (!runback.empty() && runback.back() == 0 && valid_symbols[VIRTUAL_END_ALIGNED])
    {
      runback.pop_back();
      lexer->result_symbol = VIRTUAL_END_ALIGNED;
      return true;
    }
    if (!runback.empty() && runback.back() == 1 && valid_symbols[VIRTUAL_END_SECTION])
    {
      runback.pop_back();
      lexer->result_symbol = VIRTUAL_END_SECTION;
      return true;
    }
    runback.clear();

    // Check if we have newlines and how much indentation
    bool has_newline = false;
    bool can_call_mark_end = true;
    lexer->mark_end(lexer);
    while (true) {
      if (lexer->lookahead == ' ') {
          skip(lexer);
      }
      else if (lexer->lookahead == '\n') {
          skip(lexer);
          has_newline = true;
          while (true)
            {
              if (lexer->lookahead == ' ')
              {
                skip(lexer);
              }
            else
              {
                indent_length = lexer->get_column(lexer);
                break;
              }
            }
      }
      else if (lexer->lookahead == '\r') {
          skip(lexer);
      }
      else if (valid_symbols[VIRTUAL_END_ALIGNED] && lexer->lookahead == ';') {
        advance(lexer);
        lexer->mark_end(lexer);
        lexer->result_symbol = VIRTUAL_END_ALIGNED;
        return true;
      }
      else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == ')') {
        lexer->result_symbol = VIRTUAL_END_SECTION;
        indent_length_stack.pop_back();
        return true;
      }
      else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == ']') {
        lexer->result_symbol = VIRTUAL_END_SECTION;
        indent_length_stack.pop_back();
        return true;
      }
      else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == '}') {
        lexer->result_symbol = VIRTUAL_END_SECTION;
        indent_length_stack.pop_back();
        return true;
      }
      else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == '|') {
        skip(lexer);
        if (lexer->lookahead == '}' || lexer->lookahead == ']') {
          lexer->result_symbol = VIRTUAL_END_SECTION;
          indent_length_stack.pop_back();
          return true;
        }
      }
      else if (lexer->eof(lexer)) {
          if (valid_symbols[VIRTUAL_END_SECTION])
          {
            lexer->result_symbol = VIRTUAL_END_SECTION;
            return true;
          }
          if (valid_symbols[VIRTUAL_END_ALIGNED])
          {
            lexer->result_symbol = VIRTUAL_END_ALIGNED;
            return true;
          }
          break;
        }
      else { break; }
    }

    bool closing = lexer->lookahead == ']' || lexer->lookahead == ')' || lexer->lookahead == '}';

    // Open section if the grammar lets us but only push to indent stack if we go further down in the stack
    if (valid_symbols[VIRTUAL_OPEN_SECTION] && !lexer->eof(lexer)) {
      indent_length_stack.push_back(lexer->get_column(lexer));
      if (closing) {
        return false;
      }
      if (lexer->lookahead == '|') {
        skip(lexer);
        if (lexer->lookahead == '}' || lexer->lookahead == ']') {
          return false;
        }
      }
      lexer->result_symbol = VIRTUAL_OPEN_SECTION;
      return true;
    }
    else if (valid_symbols[BLOCK_COMMENT_CONTENT]) {
      if (!can_call_mark_end) { return false; }
      lexer->mark_end(lexer);
      while (true) {
          if (lexer->lookahead == '\0') { break; }
          if (lexer->lookahead != '(' && lexer->lookahead != '*') {
              advance(lexer);
          }
          else if (lexer->lookahead == '*') {
              lexer->mark_end(lexer);
              advance(lexer);
              if (lexer->lookahead == ')')
              {
                  break;
              }
          }
          else if (scan_block_comment(lexer))
          {
              lexer->mark_end(lexer);
              advance(lexer);
              if (lexer->lookahead == '*')
              {
                  break;
              }
          }
      }
      lexer->result_symbol = BLOCK_COMMENT_CONTENT;
      return true;
    }
    else if (has_newline) {
      // We had a newline now it's time to check if we need to add multiple tokens to get back up to the right level
      runback.clear();

      while (indent_length <= indent_length_stack.back()) {
          if (indent_length == indent_length_stack.back()) {
            // Don't insert VIRTUAL_END_DECL when there is a line comment incoming
            if (lexer->lookahead == '/') {
              skip(lexer);
              if (lexer->lookahead == '/') { break; }
            }
            // Don't insert VIRTUAL_END_DECL when there is a block comment incoming
            if (lexer->lookahead == '(') {
              skip(lexer);
              if (lexer->lookahead == '*') { break; }
            }
            runback.push_back(0);
            break;
          }
        else if (indent_length < indent_length_stack.back()) {
            indent_length_stack.pop_back();
            runback.push_back(1);
        }
      }

      // Our list is the wrong way around, reverse it
      std::reverse(runback.begin(), runback.end());
      // Handle the first runback token if we have them, if there are more they will be handled on the next scan operation
      if (!runback.empty() && runback.back() == 0 && valid_symbols[VIRTUAL_END_ALIGNED]) {
        runback.pop_back();
        lexer->result_symbol = VIRTUAL_END_ALIGNED;
        return true;
      }
      if (!runback.empty() && runback.back() == 1 && valid_symbols[VIRTUAL_END_SECTION]) {
        runback.pop_back();
        lexer->result_symbol = VIRTUAL_END_SECTION;
        return true;
      }
      else if (lexer->eof(lexer) && valid_symbols[VIRTUAL_END_SECTION]) {
        lexer->result_symbol = VIRTUAL_END_SECTION;
        return true;
      }
    }

    return false;
  }

  uint32_t indent_length;
  vector<uint32_t> indent_length_stack;
  vector<uint8_t> runback;
};

} // namespace end

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
