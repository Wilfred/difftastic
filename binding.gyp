{
  "targets": [
    {
      "target_name": "tree_sitter_xml_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "tree-sitter-xml/src"
      ],
      "sources": [
        "tree-sitter-xml/bindings/node/binding.cc",
        "tree-sitter-xml/src/parser.c",
      ],
      "cflags_c": [
        "-std=c99",
      ]
    },
    {
      "target_name": "tree_sitter_dtd_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "tree-sitter-dtd/src"
        ],
        "sources": [
          "tree-sitter-dtd/bindings/node/binding.cc",
          "tree-sitter-dtd/src/parser.c",
        ],
        "cflags_c": [
          "-std=c99",
        ]
    }
  ]
}
