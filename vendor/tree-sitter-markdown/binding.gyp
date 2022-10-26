{
  "targets": [
    {
      "target_name": "tree_sitter_markdown_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "tree-sitter-markdown/src",
        "tree-sitter-markdown-inline/src",
      ],
      "sources": [
        "tree-sitter-markdown/src/parser.c",
        "tree-sitter-markdown/src/scanner.cc",
        "tree-sitter-markdown-inline/src/parser.c",
        "tree-sitter-markdown-inline/src/scanner.cc",
        "bindings/node/binding.cc"
      ],
      "cflags_c": [
        "-std=c99"
      ]
    }
  ]
}

