#include <cassert>
#include <fstream>
#include "tree_sitter/api.h"

extern "C" const TSLanguage *tree_sitter_hcl();

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  const char *str = reinterpret_cast<const char *>(data);

  TSParser *parser = ts_parser_new();

  // This can fail if the language version doesn't match the runtime version
  bool language_ok = ts_parser_set_language(parser, tree_sitter_hcl());
  assert(language_ok);

  TSTree *tree = ts_parser_parse_string(parser, NULL, str, size);
  TSNode root_node = ts_tree_root_node(tree);

  ts_tree_delete(tree);
  ts_parser_delete(parser);

  return 0;
}
