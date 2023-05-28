import 'package:ffi/ffi.dart';
import 'package:tree_sitter/tree_sitter.dart';

void main() {
  final parser =
      Parser(sharedLibrary: 'libdart.dylib', entryPoint: 'tree_sitter_dart');
  final program = "class A {}";
  final tree = parser.parse(program);
  print(treeSitterApi.ts_tree_root_node(tree).string);
  malloc.free(tree);
}
