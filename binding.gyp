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
        "typescript/src/binding.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    },
    {
      "target_name": "tree_sitter_tsx_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "tsx/src"
      ],
      "sources": [
        "tsx/src/parser.c",
        "tsx/src/scanner.c",
        "tsx/src/binding.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    },

  ]
}
