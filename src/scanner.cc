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

#if __cplusplus >= 201703L || (defined(_MSVC_LANG) && _MSVC_LANG >= 201703L)
#  define FALLTHROUGH [[fallthrough]]
#elif (defined(__GNUC__) && __GNUC__ >= 7) || (defined(__clang__) && __clang_major__ >= 10)
#  define FALLTHROUGH __attribute__((fallthrough))
#else
#  define FALLTHROUGH
#endif

enum TokenType {
  INDENT_START, /* Look for the next non-space token and compute the base
                 * indentation. To be used at the start of a file.
                 */
  INDENT, /* The indentation of this line is larger than the previous. */
  INDENT_EQ, /* The indentation of this line is equal to the previous. */
  INDENT_GE, /* The indentation of this line is greater or equal to the previous.
              * Unlike INDENT this does not push an indentation on the stack.
              */
  DEDENT, /* The indentation of this line is smaller than the previous.
           * Also emitted at EOF.
           */
  LONG_STRING_CONTENT, /* Content of a long string, must be repeated when used
                        * to handle quotation mark breaks.
                        */
  SPACES_BEFORE_COMMENT, /* Spaces (incl. newlines) that occurs before a comment. */
  _END_TOKEN_TYPE
};

#define END_INDENT_TYPE DEDENT

typedef std::bitset<8> ValidTokens;
static const ValidTokens IndentTypes = 0b11111; /* INDENT_START .. DEDENT */

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

  /* scanner starting point */
  bool scanImmediate();
  /* scanner for when newline is found */
  bool scanEol();
  /* scanner for when EOF is reached */
  bool scanEof();
  /* scanner for when whitespace is reached, take a parameter describing
   * whether a newline was found.
   */
  bool scanSpaces(bool);
  /* scanner for non-quote characters, take a parameter describing whether a
   * newline was found.
   */
  bool scanChars(bool);
  /* scanner for quotation marks before the scanner has advanced at all */
  bool scanQuoteImmediate();

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
  /* the rule to produce long string content tokens */
  bool reduceLongString();
  /* the rule to produce SPACES_BEFORE_COMMENT tokens */
  bool reduceSpacesBeforeComment();

  /* Wrappers for invoking the method of the stored TSLexer */
  int32_t lookahead() const;
  void advance(bool);
  bool eof() const;
  uint32_t column() const;
  void mark_end();

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

  this->mark_end();
  return this->scanImmediate();
}

#define NEWLINE_CASES case '\r': case '\n'
bool Scanner::scanImmediate() {
  if (this->eof())
    return this->scanEof();

  switch (this->lookahead()) {
    NEWLINE_CASES:
      return this->scanEol();

    case ' ':
      return this->scanSpaces(false);

    case '"':
      return this->scanQuoteImmediate();

    default:
      if ((this->validTokens & IndentTypes).any())
        return this->reduceIndentImmediate();

      return this->scanChars(false);
  }
}

static inline bool isNewline(int32_t codepoint) {
  switch (codepoint) {
    NEWLINE_CASES:
      return true;

    default:
      return false;
  }
}

bool Scanner::scanEol() {
  while (isNewline(this->lookahead()))
    this->advance(false);

  if (this->eof())
    return this->scanEof();

  switch (this->lookahead()) {
    case ' ':
      return this->scanSpaces(true);

    case '#':
      if (this->validTokens[SPACES_BEFORE_COMMENT]) {
        this->mark_end();
        return this->reduceSpacesBeforeComment();
      }

      FALLTHROUGH;

    default:
      return this->scanChars(true);
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

bool Scanner::scanSpaces(bool newline) {
  while (this->lookahead() == ' ')
    this->advance(false);

  if (this->eof())
    return this->scanEof();

  switch (this->lookahead()) {
    NEWLINE_CASES:
      return this->scanEol();

    case '#':
      if (this->validTokens[SPACES_BEFORE_COMMENT]) {
        this->mark_end();
        return this->reduceSpacesBeforeComment();
      }

      FALLTHROUGH;

    default:
      return this->scanChars(newline);
  }
}

bool Scanner::scanChars(bool newline) {
  /* If indentation is requested, it takes priority */
  if (newline && (this->validTokens & IndentTypes).any()) {
    this->mark_end();
    return this->reduceIndentNewline();
  }

  if (this->validTokens[LONG_STRING_CONTENT]) {
    while (this->lookahead() != '"' && !this->eof())
      this->advance(false);

    this->mark_end();
    return this->reduceLongString();
  }

  return false;
}

bool Scanner::scanQuoteImmediate() {
  /* If indentation is requested, it takes priority */
  if ((this->validTokens & IndentTypes).any())
    return this->reduceIndentImmediate();

  if (this->validTokens[LONG_STRING_CONTENT]) {
    this->advance(false);
    this->mark_end();
    uint8_t quoteCount = 1;
    while (this->lookahead() == '"' && quoteCount < 4) {
      this->advance(false);
      quoteCount++;
    }

    /* If there are less than 3 consecutive quotes in total, then it's a part
     * of the string */
    if (quoteCount < 3)
      return this->scanChars(false);
    /* If there are more than 3 consecutive quotes, then the first one is a
     * part of the string (already claimed above with mark_end). */
    else if (quoteCount > 3)
      return this->reduceLongString();
    /* If there are exactly 3 consecutive quotes, this is the string end, discard. */
    else
      return false;
  }

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

  if (this->validTokens[INDENT_GE] && column >= lastIndent) {
    return this->finish(INDENT_GE);
  }

  if (this->validTokens[INDENT_EQ] && column == lastIndent) {
    return this->finish(INDENT_EQ);
  }

  return false;
}

bool Scanner::reduceIndentImmediate() {
  /* this is probably called after a SPACES_BEFORE_COMMENT, don't produce
   * indent nodes here.
   */
  if (this->lookahead() == '#')
    return false;

  if (this->validTokens[INDENT_START])
    return this->reduceIndentStart();

  uint8_t lastIndent = this->indentStack.empty() ? 0 : this->indentStack.back();
  uint32_t column = this->column();

  if (this->validTokens[DEDENT] && column < lastIndent) {
    this->indentStack.pop_back();
    return this->finish(DEDENT);
  }

  if (this->validTokens[INDENT_GE] && column >= lastIndent) {
    return this->finish(INDENT_GE);
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

bool Scanner::reduceLongString() {
  return this->finish(LONG_STRING_CONTENT);
}

bool Scanner::reduceSpacesBeforeComment() {
  if (this->validTokens[SPACES_BEFORE_COMMENT])
    return this->finish(SPACES_BEFORE_COMMENT);

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

void Scanner::mark_end() {
  return this->lexer->mark_end(this->lexer);
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
    for (int i = 0; i < _END_TOKEN_TYPE; i++)
      validTokens.set(i, valid_symbols[i]);

    return scanner->scan(lexer, validTokens);
  }
}
