{
  "targets": [
    {
      "target_name": "tree_sitter_fsharp_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
        "src/scanner.cc",
      ],
      "cflags_c": [
        "-std=c99",
      ],
      'actions': [
        {
          'action_name': 'generate parser',
          'inputs': ['grammar.js'],
          'outputs': ['src'],
          'action': ['tree-sitter', 'generate'],
          'message': 'generated parser'
        }
      ],
    }
  ]
}
