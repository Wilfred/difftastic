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
#include <initializer_list>
#include <vector>

#include <tree_sitter/parser.h>

enum TokenType {
  INDENT_START, /* Look for the next non-space token and compute the base
                 * indentation. To be used at the start of a file.
                 */
  INDENT, /* The indentation of this line is larger than the previous. */
  INDENT_EQ, /* The indentation of this line is equal to the previous. */
  DEDENT, /* The indentation of this line is smaller than the previous.
           * Also emitted at EOF.
           */
};

#define END_INDENT_TYPE DEDENT
#define END_TOKEN_TYPE DEDENT + 1

typedef std::bitset<8> ValidTokens;
static const ValidTokens IndentTypes = 0b1111; /* INDENT_START .. DEDENT */

struct Scanner {
  std::vector<uint8_t> indentStack;

  /* Volatile states, these are reset on every scanner runs */
  TSLexer* lexer;
  ValidTokens validTokens;

  Scanner() :
  indentStack(),
  lexer(nullptr),
  validTokens() {}

  unsigned serialize(char*) const;
  void deserialize(const char*, unsigned);

  /* tree-sitter to scanner entry point */
  bool scan(TSLexer*, ValidTokens);

  /* Scanners:
   *
   * A scanner is a rule acting on the current token and make use of the
   * lookahead to figure out the next applicable rule.
   *
   * A scanner might consume the current character.
   */

  /* scanner starting point, take a parameter describing if the lexer has
   * advanced at all.
   */
  bool scanDispatch(bool);
  /* scanner for when newline is found */
  bool scanEol();
  /* scanner for when EOF is reached */
  bool scanEof();

  /* Reductions:
   *
   * A reduction is a rule acting on the current state and the lookahead to
   * figure out the final result.
   *
   * A reduction does not consume any character.
   */

  /* the rule to produce an INDENT_START result */
  bool reduceIndentStart();
  /* the rule to produce indentation tokens after a newline is found */
  bool reduceIndentNewline();
  /* the rule to produce indentation tokens at the starting position of the scanner */
  bool reduceIndentImmediate();

  /* Wrappers for invoking the method of the stored TSLexer */
  int32_t lookahead() const;
  void advance(bool);
  bool eof() const;
  uint32_t column() const;

  /* Set lexer result_symbol to the given token type and return true. */
  bool finish(enum TokenType);

  /* Utilities for skipping whitespace or newlines */
  void skipSpaces();
  void skipNewline();
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

bool Scanner::scan(TSLexer* lexer, ValidTokens validTokens) {
  this->validTokens = validTokens;
  this->lexer = lexer;

  return this->scanDispatch(true);
}

#define NEWLINE_CASES case '\r': case '\n'
bool Scanner::scanDispatch(bool immediate) {
  if (this->eof())
    return this->scanEof();

  switch (this->lookahead()) {
    NEWLINE_CASES:
      this->skipNewline();
      return this->scanEol();

    case ' ':
      this->skipSpaces();
      return this->scanDispatch(false);

    default:
      if (immediate)
        return this->reduceIndentImmediate();

      return false;
  }
}

bool Scanner::scanEol() {
  this->skipSpaces();

  if (this->eof())
    return this->scanEof();

  switch (this->lookahead()) {
    NEWLINE_CASES:
      this->skipNewline();
      return this->scanEol();

    default:
      return this->reduceIndentNewline();
  }
}

bool Scanner::scanEof() {
  /* Produce an INDENT_START to fullfill the conditions of source_file even when
   * the file is empty. */
  if (this->validTokens[INDENT_START])
    return this->reduceIndentStart();

  /* Produce any DEDENT necessary to finalize a rule. */
  if (this->validTokens[DEDENT])
    return this->finish(DEDENT);

  return false;
}

bool Scanner::reduceIndentNewline() {
  if (this->validTokens[INDENT_START])
    return this->reduceIndentStart();

  uint8_t lastIndent = this->indentStack.empty() ? 0 : this->indentStack.back();
  uint32_t column = this->column();

  if (this->validTokens[INDENT] && column > lastIndent) {
    this->indentStack.push_back(column);
    return this->finish(INDENT);
  }

  if (this->validTokens[DEDENT] && column < lastIndent) {
    this->indentStack.pop_back();
    return this->finish(DEDENT);
  }

  if (this->validTokens[INDENT_EQ] && column == lastIndent) {
    return this->finish(INDENT_EQ);
  }

  return false;
}

bool Scanner::reduceIndentImmediate() {
  if (this->validTokens[INDENT_START])
    return this->reduceIndentStart();

  uint8_t lastIndent = this->indentStack.empty() ? 0 : this->indentStack.back();
  uint32_t column = this->column();

  if (this->validTokens[DEDENT] && column < lastIndent) {
    this->indentStack.pop_back();
    return this->finish(DEDENT);
  }

  if (this->validTokens[INDENT_EQ] && column == lastIndent) {
    return this->finish(INDENT_EQ);
  }

  return false;
}

bool Scanner::reduceIndentStart() {
  if (this->indentStack.empty()) {
    this->indentStack.push_back(this->column());
    return this->finish(INDENT_START);
  }

  return false;
}

bool Scanner::finish(enum TokenType token) {
  this->lexer->result_symbol = token;
  return true;
}

int32_t Scanner::lookahead() const {
  return this->lexer->lookahead;
}

void Scanner::advance(bool skip) {
  this->lexer->advance(this->lexer, skip);
}

void Scanner::skipSpaces() {
  while (this->lookahead() == ' ')
    this->advance(true);
}

void Scanner::skipNewline() {
  while (this->lookahead() == '\n' || this->lookahead() == '\r')
    this->advance(true);
}

bool Scanner::eof() const {
  return this->lexer->eof(this->lexer);
}

uint32_t Scanner::column() const {
  return this->lexer->get_column(this->lexer);
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

    ValidTokens validTokens;
    for (int i = 0; i < END_TOKEN_TYPE; i++)
      validTokens.set(i, valid_symbols[i]);

    return scanner->scan(lexer, validTokens);
  }
}
