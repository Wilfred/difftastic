{
  "targets": [
    {
      "target_name": "tree_sitter_ocaml_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "ocaml/src"
      ],
      "sources": [
        "ocaml/src/parser.c",
        "ocaml/src/scanner.c",
        "interface/src/parser.c",
        "interface/src/scanner.c",
        "bindings/node/binding.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    },
  ]
}
