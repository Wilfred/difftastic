{
  "targets": [
    {
      "target_name": "tree_sitter_erlang_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "src/parser.c",
        "bindings/node/binding.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
