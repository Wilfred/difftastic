#include "../../ocaml/src/scanner.cc"

extern "C" {

void *tree_sitter_ocaml_interface_external_scanner_create() {
  return tree_sitter_ocaml_external_scanner_create();
}

void tree_sitter_ocaml_interface_external_scanner_destroy(void *payload) {
  tree_sitter_ocaml_external_scanner_destroy(payload);
}

unsigned tree_sitter_ocaml_interface_external_scanner_serialize(void *payload, char *buffer) {
  return tree_sitter_ocaml_external_scanner_serialize(payload, buffer);
}

void tree_sitter_ocaml_interface_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  tree_sitter_ocaml_external_scanner_deserialize(payload, buffer, length);
}

bool tree_sitter_ocaml_interface_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  return tree_sitter_ocaml_external_scanner_scan(payload, lexer, valid_symbols);
}

}
