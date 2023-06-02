import 'dart:io';

import 'package:dylib/dylib.dart';
import 'package:test/test.dart';
import 'package:tree_sitter/tree_sitter.dart';

void main() {
  test('calculate', () {
    final parser = Parser(
        sharedLibrary: resolveDylibPath('dart', path: Directory.current.path),
        entryPoint: 'tree_sitter_dart');
    final program = "class A {}";
    final tree = parser.parse(program);
    print(tree.root.string);
  });
}
