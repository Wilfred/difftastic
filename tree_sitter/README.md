# Tree Sitter Dart Library

This library provides Dart bindings for the [Tree Sitter](http://tree-sitter.github.io/tree-sitter/) c parsing library. It allows parsing source code into a syntax tree that you can traverse and query.

## Installation

You must have the tree sitter library available as a dynamic library on your system.

Then set the library location using:
```dart
TreeSitterConfig.setLibraryPath('/path/to/libtree-sitter.so');
```

Next create a parser for your language by first creating a dynamic library for your language's grammar.

Then load and use the parser:
```dart
import 'package:ffi/ffi.dart';
import 'package:tree_sitter/tree_sitter.dart';

void main() {
  final parser =
      Parser(sharedLibrary: 'libdart.dylib', entryPoint: 'tree_sitter_dart');
  final program = "class A {}";
  final tree = parser.parse(program);
  print(tree.root.string);
}
```

You can access other apis via the top level `treeSitterApi` ffi wrapper

Or you can help contribute to an idiomatic dart api on top of the ffi wrapper.
Many of the apis are started but not complete.

Expect breaking changes while we figure out the best api