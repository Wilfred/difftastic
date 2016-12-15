{
  "targets": [
    {
      "target_name": "ts_language_python_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "src/parser.c",
        "src/scanner.cc",
        "src/binding.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
