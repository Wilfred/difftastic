{
  "targets": [
    {
      "target_name": "tree_sitter_typescript_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "typescript/src"
      ],
      "sources": [
        "typescript/src/parser.c",
        "typescript/src/scanner.c",
        "tsx/src/parser.c",
        "tsx/src/scanner.c",
        "bindings/node/binding.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    },
  ]
}
