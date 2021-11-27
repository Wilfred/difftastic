/* Author: Preston Knopp
 * Description: Parse multiline double quote strings without state
 */
#include <tree_sitter/parser.h>
#include <wctype.h>

// using wctype::iswspace

enum TokenType {
  STRING
};

bool tree_sitter_godot_resource_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {

    if (!valid_symbols[STRING]) {
      return false;
    }

    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    if (lexer->lookahead != '"') {
      return false;
    }

    uint32_t last_char = '"';
    lexer->advance(lexer, false);

    while (lexer->lookahead) {

      if (last_char != '\\' && lexer->lookahead == '"') {
        lexer->advance(lexer, false);
        lexer->result_symbol = STRING;
        return true;
      }

      last_char = lexer->lookahead;
      lexer->advance(lexer, false);
    }

    return false;
}

void *tree_sitter_godot_resource_external_scanner_create() { return NULL; }
unsigned tree_sitter_godot_resource_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_godot_resource_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}
void tree_sitter_godot_resource_external_scanner_destroy(void *payload) {}
