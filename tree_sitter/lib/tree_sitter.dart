/// A tree sitter parsing library for Dart.
library;

import 'dart:ffi';
import 'dart:ffi' as ffi;

import 'package:ffi/ffi.dart';
import 'package:tree_sitter/tree_sitter.dart';

export 'src/generated_bindings.dart';

/// Exposes the tree sitter C API as a minimal dart ffi wrapper
final treeSitterApi = TreeSitterConfig.instance.ffiApi;

/// Configuration of the package to find the correct shared libraries
final class TreeSitterConfig {
  static String _dylibLocation = 'tree-sitter/libtree-sitter.dylib';
  late final ffiApi = TreeSitter(DynamicLibrary.open(_dylibLocation));

  /// Sets the path to find the tree sitter shared libraries
  static void setLibraryPath(String path) {
    _dylibLocation = path;
  }

  TreeSitterConfig._();
  static final instance = TreeSitterConfig._();
}

/// A dart interface to the tree sitter API
///
/// - Handles basic parser / language setup
base class Parser implements Finalizable {
  /// The shared library for the language used by this parser
  final String sharedLibrary;

  /// The entry point for the language used by this parser
  final String entryPoint;

  /// The c ffi parser instance
  ///
  /// Automatically disposed by [Parser] using dart's Finalizable support
  late final parser = treeSitterApi.ts_parser_new();

  late final _langDylib = DynamicLibrary.open(sharedLibrary);
  late final _languagePtr =
      _langDylib.lookup<ffi.NativeFunction<ffi.Pointer<TSLanguage> Function()>>(
          entryPoint);
  late final _language =
      _languagePtr.asFunction<ffi.Pointer<TSLanguage> Function()>()();

  final _finalizer =
      NativeFinalizer(treeSitterApi.addresses.ts_parser_delete.cast());

  /// Creates a new parser with the given shared library and entry point
  ///
  /// Sets up a language for the parser to use based on those parameters
  Parser({required this.sharedLibrary, required this.entryPoint}) {
    _finalizer.attach(this, parser.cast(), detach: this);
    if (!treeSitterApi.ts_parser_set_language(parser, _language)) {
      throw Exception(
          'Failed to set language using the provided shared library and entry point');
    }
  }

  /// Parses out a tree from the given string
  Pointer<TSTree> parse(String program) {
    final pProgram = program.toNativeUtf8().cast<Char>();
    final tree = treeSitterApi.ts_parser_parse_string(
        parser, nullptr, pProgram, program.length);
    assert(tree != nullptr);
    return tree;
  }
}

extension TOString on TSNode {
  String get string {
    final root = treeSitterApi.ts_node_string(this);
    final result = root.cast<Utf8>().toDartString();
    malloc.free(root);
    return result;
  }
}
