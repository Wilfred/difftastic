{
  "targets": [
    {
      "target_name": "tree_sitter_d_binding",
      "dependencies": [
        "<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except",
      ],
      "include_dirs": [
        "src",
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
	"src/scanner.c",
        # NOTE: if your language has an external scanner, add it here.
      ],
      "cflags_c": [
        "-std=c11",
      ],
    }
  ]
}
