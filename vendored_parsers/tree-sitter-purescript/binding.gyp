{
  "targets": [
    {
      "target_name": "tree_sitter_purescript_binding",
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
      ],
      "msvs_settings": {
        "VCCLCompilerTool": {
          "AdditionalOptions": [
            '-utf-8'
          ],
        },
      },
    }
  ]
}
