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
  /* Note: the indent family of tokens corresponds to _layout* tokens in the
   * grammar */

  INDENT_START, /* Look for the next non-space token and compute the base
                 * indentation. To be used at the start of a file. */
  INDENT, /* The indentation of this line is larger than the reference
           * indentation and is pushed to the indentation stack as the new
           * reference. Will only be emitted if the next token is at the
           * beginning of the line and is not a comment. */
  INDENT_EQ, /* The indentation of the next token is equal to the reference
              * indentation. This is emitted only at the beginning of a line. */
  INDENT_GT, /* The indentation of the next token is greater than the reference
              * indentation. This is emitted only at the beginning of a line. */
  DEDENT, /* The indentation of this line is smaller than the reference.
           * The current reference will be popped from the stack.
           * This is only emitted at the beginning of a line and EOF. */
  LONG_STRING_QUOTES, /* Quotation marks inside a long string. */
  NEWLINE, /* Newline characters, equivalent to /[\r\n]+/ regex. This is handled
            * in the scanner to track line indentation. */
  BLOCK_COMMENT_SPECIALS, /* #, ] characters inside a block comment */
  _END_TOKEN_TYPE
};

#define END_INDENT_TYPE DEDENT

typedef std::bitset<8> ValidTokens;
static const ValidTokens IndentTypes = 0b11111; /* INDENT_START .. DEDENT */

struct Scanner {
  std::vector<uint8_t> indentStack;
  uint8_t currentIndent;

  /* Volatile states, these are reset on every scanner runs */
  TSLexer* lexer;
  ValidTokens validTokens;

  Scanner() :
  indentStack(),
  currentIndent(0),
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
  bool scanLineIndent(bool);
  /* scanner for non-quote characters, take a parameter describing whether a
   * newline was found.
   */
  bool scanChars(bool);
  /* scanner for quotation marks before the scanner has advanced at all */
  bool scanQuoteImmediate();
  /* scanner for block comment specials */
  bool scanBlockCommentSpecialsImmediate();

  /* Reductions:
   *
   * A reduction is a rule acting on the current state and the lookahead to
   * figure out the final result.
   *
   * A reduction does not consume any character.
   */

  /* the rule to produce an INDENT_START result */
  bool reduceIndentStart();
  /* the rule to produce indentation tokens */
  bool reduceIndent();
  /* the rule to produce long string content tokens */
  bool reduceLongString();

  /* Wrappers for invoking the method of the stored TSLexer */
  int32_t lookahead() const;
  void advance(bool);
  bool eof() const;
  uint32_t column() const;
  void mark_end();

  /* Set lexer result_symbol to the given token type and return true. */
  bool finish(enum TokenType);
};

unsigned Scanner::serialize(char* buffer) const {
  unsigned nextPos = 0;
  if (nextPos < TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    buffer[nextPos++] = this->currentIndent;
  }

  unsigned indentStackSerializeSize = std::min(
    this->indentStack.size(),
    (size_t)(TREE_SITTER_SERIALIZATION_BUFFER_SIZE - nextPos)
  );
  memcpy(buffer + nextPos, this->indentStack.data(), indentStackSerializeSize);
  nextPos += indentStackSerializeSize;

  return nextPos;
}

void Scanner::deserialize(const char* buffer, unsigned length) {
  unsigned nextPos = 0;
  if (nextPos < length)
    this->currentIndent = buffer[nextPos++];

  unsigned indentStackSerializeSize = length - nextPos;
  this->indentStack.resize(indentStackSerializeSize);
  memcpy(this->indentStack.data(), buffer + nextPos, indentStackSerializeSize);
  nextPos += indentStackSerializeSize;
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
      return this->scanLineIndent(false);

    case '"':
      return this->scanQuoteImmediate();

    case '#':
    case ']':
      return this->scanBlockCommentSpecialsImmediate();

    default:
      return this->reduceIndent();
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

  this->mark_end();

  return this->scanLineIndent(true);
}

bool Scanner::scanEof() {
  this->mark_end();

  /* Produce an INDENT_START to fullfill the conditions of source_file even when
   * the file is empty. */
  if (this->validTokens[INDENT_START])
    return this->reduceIndentStart();

  /* Produce any DEDENT necessary to finalize a rule. */
  if (this->validTokens[DEDENT])
    return this->finish(DEDENT);

  return false;
}

bool Scanner::scanLineIndent(bool newline) {
  if (this->column() == 0) {
    this->currentIndent = 0;

    while (this->lookahead() == ' ') {
      this->advance(false);
      this->currentIndent += this->currentIndent < UINT8_MAX;
    }

    if (newline)
      return this->finish(NEWLINE);

    if ((this->validTokens & IndentTypes).any()) {
      this->mark_end();
      return this->reduceIndent();
    }
  }

  return false;
}

bool Scanner::scanQuoteImmediate() {
  if (this->validTokens[LONG_STRING_QUOTES]) {
    this->advance(false);
    this->mark_end();
    uint8_t quoteCount = 1;
    while (this->lookahead() == '"' && quoteCount < 4) {
      this->advance(false);
      quoteCount++;
    }

    /* If there are less than 3 consecutive quotes in total, then it's a part
     * of the string */
    if (quoteCount < 3) {
      this->mark_end();
      return this->finish(LONG_STRING_QUOTES);
    }

    /* If there are more than 3 consecutive quotes, then the first one is a
     * part of the string (already claimed above with mark_end). */
    if (quoteCount > 3)
      return this->finish(LONG_STRING_QUOTES);

    /* If there are exactly 3 consecutive quotes, this is the string end, discard. */
    return false;
  }

  return this->reduceIndent();
}


bool Scanner::scanBlockCommentSpecialsImmediate() {
  if (this->validTokens[BLOCK_COMMENT_SPECIALS]) {
    switch (this->lookahead()) {
      case '#':
        this->advance(false);
        this->mark_end();
        this->finish(BLOCK_COMMENT_SPECIALS);
        return this->lookahead() != '[';

      case ']':
        this->advance(false);
        this->mark_end();
        this->finish(BLOCK_COMMENT_SPECIALS);
        return this->lookahead() != '#';

      default:
        /* should be unreachable */
        return false;
    }
  }

  return this->reduceIndent();
}

bool Scanner::reduceIndent() {
  /* don't emit any tokens before a comment */
  if (this->lookahead() == '#')
    return false;

  /* overflowed, the result cannot be trusted. */
  if (this->currentIndent == UINT8_MAX)
    return false;

  if (this->validTokens[INDENT_START])
    return this->reduceIndentStart();

  uint8_t lastIndent = this->indentStack.empty() ? 0 : this->indentStack.back();
  uint32_t column = this->column();

  if (column == this->currentIndent) {
    if (this->currentIndent > lastIndent) {
      if (this->validTokens[INDENT]) {
        this->indentStack.push_back(this->currentIndent);
        return this->finish(INDENT);
      }

      if (this->validTokens[INDENT_GT])
        return this->finish(INDENT_GT);
    }

    if (this->validTokens[DEDENT] && this->currentIndent < lastIndent) {
      this->indentStack.pop_back();
      return this->finish(DEDENT);
    }

    if (this->validTokens[INDENT_EQ] && this->currentIndent == lastIndent) {
      return this->finish(INDENT_EQ);
    }
  }

  return false;
}

bool Scanner::reduceIndentStart() {
  /* don't emit any tokens before a comment */
  if (this->lookahead() == '#')
    return false;

  if (this->indentStack.empty()) {
    this->indentStack.push_back(this->currentIndent);
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
