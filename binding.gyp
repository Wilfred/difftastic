{
  "targets": [
    {
      "target_name": "ts_language_javascript_binding",
      "include_dirs": [
        "include",
        "<!(node -e \"require('nan')\")",
        "<!(node -e \"require('tree-sitter-compiler/include_path')\")",
      ],
      "sources": [
        "src/parser.c",
        "src/binding.cc",
      ],
      "cflags_c": [
        "-std=c99",
      ],
    },
  ],
}
