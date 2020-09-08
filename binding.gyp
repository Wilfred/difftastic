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
        "ocaml/src/binding.cc",
        "ocaml/src/scanner.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    },
    {
      "target_name": "tree_sitter_ocaml_interface_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "interface/src"
      ],
      "sources": [
        "interface/src/parser.c",
        "interface/src/binding.cc",
        "interface/src/scanner.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
