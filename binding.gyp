{
  "targets": [
    {
      "target_name": "tree_sitter_php_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "src/parser.c",
        "src/scanner.cc",
        "bindings/node/binding.cc"
      ],
      "cflags_c": [
        "-std=c99"
      ]
    }
  ]
}