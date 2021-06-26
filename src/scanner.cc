#include <cwctype>
#include <iostream>
#include <tree_sitter/parser.h>

namespace {
enum TokenType { BRACKET_ARGUMENT, LINE_COMMENT };
void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
bool scan_bracket_argument(TSLexer *lexer) {
  while (std::iswspace(lexer->lookahead))
    skip(lexer);

  if (lexer->lookahead != '[')
    return false;

  advance(lexer);

  int open_level = 0;
  while (lexer->lookahead == '=') {
    ++open_level;
    advance(lexer);
  }

  if (lexer->lookahead != '[')
    return false;

  while (lexer->lookahead != '\0') {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);

      int close_level = 0;
      while (lexer->lookahead == '=') {
        ++close_level;
        advance(lexer);
      }

      if (lexer->lookahead == ']' && close_level == open_level) {
        advance(lexer);
        lexer->result_symbol = BRACKET_ARGUMENT;
        return true;
      }
    }
  }
  return false;
}
bool scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[BRACKET_ARGUMENT])
    return scan_bracket_argument(lexer);

  return false;
}

} // namespace
extern "C" {
void *tree_sitter_cmake_external_scanner_create() { return nullptr; }
void tree_sitter_cmake_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_cmake_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  return 0;
}
void tree_sitter_cmake_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {}
bool tree_sitter_cmake_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  return scan(payload, lexer, valid_symbols);
}
}
