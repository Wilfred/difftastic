{
  "targets": [
    {
      "target_name": "tree_sitter_haskell_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "src/parser.c",
        "bindings/node/binding.cc",
        "src/scanner.c",
        "src/unicode.h",
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
