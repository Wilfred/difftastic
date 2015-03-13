{
  "targets": [
    {
      "target_name": "ts_language_javascript_binding",
      "include_dirs": [
        "include",
        "<!(node -e \"require('nan')\")",
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
