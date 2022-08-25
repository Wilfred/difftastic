/* Copyright (c) 2022 Leorize <leorize+oss@disroot.org>
 *
 * SPDX-License-Identifier: MPL-2.0
 */

#include <algorithm>
#include <bitset>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <vector>

#include <tree_sitter/parser.h>

enum TokenType {
  INDENT, /* The first non-space token scanned is at a column larger than the last INDENT. */
  INDENT_ANY, /* When requested, changes to indentation will be ignored. */
  DEDENT, /* The first non-space token scanned is at a column smaller or equal to the INDENT before the current one. Also emitted at EOF. */
  EOL /* A new line was found. Also emitted at EOF. */
};

#define END_INDENT_TYPE DEDENT
#define END_TOKEN_TYPE EOL + 1

typedef std::bitset<8> valid_tokens_t;
static const valid_tokens_t IndentTypes = 0b111; /* INDENT .. DEDENT */

struct Scanner {
  std::vector<uint8_t> indentStack;

  Scanner() : indentStack() {}

  unsigned serialize(char* buffer) const;
  void deserialize(const char* buffer, unsigned length);
  bool scan(TSLexer* lexer, valid_tokens_t);
};

unsigned Scanner::serialize(char* buffer) const {
  unsigned result = std::min(this->indentStack.size(), (size_t)TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  memcpy(buffer, this->indentStack.data(), result); 

  return result;
}

void Scanner::deserialize(const char* buffer, unsigned length) {
  this->indentStack.resize(length);
  memcpy(this->indentStack.data(), buffer, length);
}

static inline bool is_newline(int32_t codepoint) {
  return codepoint == '\r' || codepoint == '\n';
}

static bool skip_newlines(TSLexer* lexer) {
  bool newline_found = false;
  while (!lexer->eof(lexer) && is_newline(lexer->lookahead)) {
    lexer->advance(lexer, true);
    newline_found = true;
  }
  return newline_found;
}

bool Scanner::scan(TSLexer* lexer, valid_tokens_t valid_tokens) {
  if (skip_newlines(lexer)) {
    lexer->result_symbol = EOL;
    return valid_tokens[EOL];
  }

  if (valid_tokens[EOL] && lexer->eof(lexer)) {
    lexer->result_symbol = EOL;
    return true;
  }

  if ((valid_tokens & IndentTypes).any()) {
    uint8_t lastIndent = this->indentStack.empty() ? 0 : this->indentStack.back();
    while (lexer->lookahead == ' ')
      lexer->advance(lexer, true);

    /* Escape hatch for the grammar to disregard indentation (ie. comments) */
    if (valid_tokens[INDENT_ANY]) {
      lexer->result_symbol = INDENT_ANY;
      return true;
    }

    /* Don't count the skipped spaces but instead uses column.
     * This allows a DEDENT -> DEDENT chain to be resolved correctly.
     */
    uint32_t indent = lexer->get_column(lexer);
    if (valid_tokens[INDENT] && indent > lastIndent) {
      this->indentStack.push_back(indent);
      lexer->result_symbol = INDENT;
      return true;
    }

    if (valid_tokens[DEDENT]) {
      if (lexer->eof(lexer)) {
        lexer->result_symbol = DEDENT;
        return true;
      }

      if (indent < lastIndent) {
        /* previous indent level on the stack */
        const uint8_t prevIndent = this->indentStack.size() > 1
          ? this->indentStack[this->indentStack.size() - 2]
          : indent;
        /* if indent falls at or below the upper level of the stack */
        if (indent <= prevIndent) {
          /* pop and dedent */
          this->indentStack.pop_back();
          lexer->result_symbol = DEDENT;
          return true;
        } else {
          /* there are no valid symbols in this case, so stop */
          return false;
        }
      }
    }
  }

  return false;
}

extern "C" {
  void* tree_sitter_nim_external_scanner_create() {
    return new Scanner();
  }

  void tree_sitter_nim_external_scanner_destroy(void* payload) {
    Scanner* scanner = static_cast<Scanner*>(payload);
    delete scanner;
  }

  unsigned tree_sitter_nim_external_scanner_serialize(void* payload, char* buffer) {
    Scanner* scanner = static_cast<Scanner*>(payload);
    return scanner->serialize(buffer);
  }

  void tree_sitter_nim_external_scanner_deserialize(
    void* payload, const char* buffer, unsigned length
  ) {
    Scanner* scanner = static_cast<Scanner*>(payload);
    scanner->deserialize(buffer, length);
  }

  bool tree_sitter_nim_external_scanner_scan(
    void* payload, TSLexer* lexer, const bool* valid_symbols
  ) {
    Scanner* scanner = static_cast<Scanner*>(payload);

    valid_tokens_t valid_tokens;
    for (int i = 0; i < END_TOKEN_TYPE; i++)
      valid_tokens.set(i, valid_symbols[i]);

    return scanner->scan(lexer, valid_tokens);
  }
}
