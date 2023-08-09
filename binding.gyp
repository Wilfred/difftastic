{
  "targets": [
    {
      "target_name": "tree_sitter_xml_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "tree-sitter-xml/src"
      ],
      "sources": [
        "tree-sitter-dtd/src/parser.c",
        "tree-sitter-dtd/src/scanner.c",
        "tree-sitter-xml/src/parser.c",
        "tree-sitter-xml/src/scanner.c",
        "bindings/node/binding.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    },
  ]
}
