{
  "targets": [
    {
      "target_name": "tree_sitter_sfapex_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "apex/src"
      ],
      "sources": [
        "apex/src/parser.c",
        "soql/src/parser.c",
        "sosl/src/parser.c",
        "bindings/node/binding.cc",
        # If your language uses an external scanner, add it here.
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
