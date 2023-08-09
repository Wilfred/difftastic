/// A tree sitter parsing library for Dart.
// ignore_for_file: unused_element

library;

import 'dart:convert';
import 'dart:ffi';
import 'dart:ffi' as ffi;
import 'dart:io';

import 'package:dylib/dylib.dart';
import 'package:ffi/ffi.dart';
import 'package:tree_sitter/tree_sitter.dart';

import 'src/parser_generated_bindings.dart' as details;
import 'src/utils.dart';

export 'src/generated_bindings.dart';

/// Exposes the tree sitter C API as a minimal dart ffi wrapper
final treeSitterApi = TreeSitterConfig.instance.ffiApi;

/// Configuration of the package to find the correct shared libraries
final class TreeSitterConfig {
  static String _dylibLocation =
      resolveDylibPath('tree-sitter', path: Directory.current.path);
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

  details.TSLanguage get language => _language.cast<details.TSLanguage>().ref;

  /// Parses out a tree from the given string
  Tree parse(String program, {int? encoding}) {
    _contents = program;
    final pProgram = program.toNativeUtf8().cast<Char>();
    if (encoding == null) {
      return Tree(treeSitterApi.ts_parser_parse_string(
          parser, nullptr, pProgram, program.length));
    } else {
      return Tree(treeSitterApi.ts_parser_parse_string_encoding(
          parser, nullptr, pProgram, program.length, encoding));
    }
  }

  String? _contents;
  List<int> get contents => utf8.encode(_contents ?? '');

  void reset() => treeSitterApi.ts_parser_reset(parser);

  set timeoutMicros(int timeout) =>
      treeSitterApi.ts_parser_set_timeout_micros(parser, timeout);

  int get timeoutMicros => treeSitterApi.ts_parser_timeout_micros(parser);

  set cancellationFlag(CancelToken flag) =>
      treeSitterApi.ts_parser_set_cancellation_flag(parser, flag._token);
  CancelToken get cancellationFlag =>
      CancelToken.fromToken(treeSitterApi.ts_parser_cancellation_flag(parser));

  String getText(TSNode namedChild) {
    final text = contents.sublist(namedChild.startByte, namedChild.endByte);
    return utf8.decode(text);
  }
}

final class CancelToken implements Finalizable {
  final Pointer<Size> _token;
  final _finalizer = NativeFinalizer(free.cast());
  CancelToken() : _token = calloc<Size>(1) {
    _finalizer.attach(this, _token.cast(), detach: this);
  }
  CancelToken.fromToken(this._token) {
    _finalizer.attach(this, _token.cast(), detach: this);
  }
  void cancel() => _token.value = 1;
}

base class Tree implements Finalizable {
  final Pointer<TSTree> tree;
  final _finalizer =
      NativeFinalizer(treeSitterApi.addresses.ts_tree_delete.cast());

  Tree(this.tree) {
    if (tree == nullptr) {
      throw Exception('Tree is null');
    }
    _finalizer.attach(this, tree.cast(), detach: this);
  }

  TSNode get root => treeSitterApi.ts_tree_root_node(tree);

  Tree get copy => Tree(treeSitterApi.ts_tree_copy(tree));

  details.TSLanguage get language =>
      treeSitterApi.ts_tree_language(tree).cast<details.TSLanguage>().ref;
}

base class TreeCursor implements Finalizable {
  late final Pointer<TSTreeCursor> cursor = malloc<TSTreeCursor>(1);
  final _finalizer =
      NativeFinalizer(treeSitterApi.addresses.ts_tree_cursor_delete.cast());
  final TSNode node;
  TreeCursor(this.node) {
    cursor.ref = treeSitterApi.ts_tree_cursor_new(node);
    _finalizer.attach(this, cursor.cast(), detach: this);
  }
}

base class Query implements Finalizable {
  late final Pointer<TSQuery> query;
  final _finalizer =
      NativeFinalizer(treeSitterApi.addresses.ts_query_delete.cast());
  Query(this.query) {
    _finalizer.attach(this, query.cast(), detach: this);
  }

  Query.fromSource(
      {required Pointer<TSLanguage> language, required String source}) {
    final pSource = source.toNativeUtf8().cast<Char>();
    final length = utf8.encode(source).length;
    using((alloc) {
      final errorOffset = alloc<Uint32>(1);
      final errorType = alloc<Int32>(1);
      query = treeSitterApi.ts_query_new(
          language, pSource, length, errorOffset, errorType);
      if (query == nullptr) {
        final errOff = errorOffset.value;
        final errType = errorType.value;
        throw Exception(
            'Failed to create query from source "$source" ${errType.queryError} at offset $errOff]}');
      }
    });
  }
}

extension TSApiIntX on int {
  String get queryError => switch (this) {
        TSQueryError.TSQueryErrorNone => 'TSQueryErrorNone',
        TSQueryError.TSQueryErrorSyntax => 'TSQueryErrorSyntax',
        TSQueryError.TSQueryErrorNodeType => 'TSQueryErrorNodeType',
        TSQueryError.TSQueryErrorField => 'TSQueryErrorField',
        TSQueryError.TSQueryErrorCapture => 'TSQueryErrorCapture',
        TSQueryError.TSQueryErrorStructure => 'TSQueryErrorStructure',
        TSQueryError.TSQueryErrorLanguage => 'TSQueryErrorLanguage',
        _ => 'Unknown error code $this'
      };

  String get queryPredicateStepType => switch (this) {
        TSQueryPredicateStepType.TSQueryPredicateStepTypeCapture =>
          'TSQueryPredicateStepTypeCapture',
        TSQueryPredicateStepType.TSQueryPredicateStepTypeString =>
          'TSQueryPredicateStepTypeString',
        TSQueryPredicateStepType.TSQueryPredicateStepTypeDone =>
          'TSQueryPredicateStepTypeDone',
        _ => 'Unknown predicate step type $this'
      };

  String get quantifier => switch (this) {
        TSQuantifier.TSQuantifierZero => 'TSQuantifierZero',
        TSQuantifier.TSQuantifierZeroOrOne => 'TSQuantifierZeroOrOne',
        TSQuantifier.TSQuantifierZeroOrMore => 'TSQuantifierZeroOrMore',
        TSQuantifier.TSQuantifierOne => 'TSQuantifierOne',
        TSQuantifier.TSQuantifierOneOrMore => 'TSQuantifierOneOrMore',
        _ => 'Unknown predicate step type $this'
      };

  String get symbolType => switch (this) {
        TSSymbolType.TSSymbolTypeRegular => 'TSSymbolTypeRegular',
        TSSymbolType.TSSymbolTypeAnonymous => 'TSSymbolTypeAnonymous',
        TSSymbolType.TSSymbolTypeAuxiliary => 'TSSymbolTypeAuxiliary',
        _ => 'Unknown symbol type $this'
      };

  String get inputEncoding => switch (this) {
        TSInputEncoding.TSInputEncodingUTF8 => 'TSInputEncodingUTF8',
        TSInputEncoding.TSInputEncodingUTF16 => 'TSInputEncodingUTF16',
        _ => 'Unknown input encoding $this'
      };

  String get logType => switch (this) {
        TSLogType.TSLogTypeParse => 'TSLogTypeParse',
        TSLogType.TSLogTypeLex => 'TSLogTypeLex',
        _ => 'Unknown log type $this'
      };
}

base class QueryCursor implements Finalizable {
  final Pointer<TSQueryCursor> cursor = treeSitterApi.ts_query_cursor_new();
  final _finalizer =
      NativeFinalizer(treeSitterApi.addresses.ts_query_delete.cast());
  QueryCursor() {
    _finalizer.attach(this, cursor.cast(), detach: this);
  }
}

extension TSNodeX on TSNode {
  String get string {
    final root = treeSitterApi.ts_node_string(this);
    final result = root.cast<Utf8>().toDartString();
    malloc.free(root);
    return result;
  }

  String get nodeType =>
      treeSitterApi.ts_node_type(this).cast<Utf8>().toDartString();

  int get symbol => treeSitterApi.ts_node_symbol(this);

  int get startByte => treeSitterApi.ts_node_start_byte(this);

  int get endByte => treeSitterApi.ts_node_end_byte(this);

  TSPoint get startPoint => treeSitterApi.ts_node_start_point(this);

  TSPoint get endPoint => treeSitterApi.ts_node_end_point(this);

  bool get isNull => treeSitterApi.ts_node_is_null(this);

  bool get isNamed => treeSitterApi.ts_node_is_named(this);

  bool get isMissing => treeSitterApi.ts_node_is_missing(this);

  bool get isExtra => treeSitterApi.ts_node_is_extra(this);

  bool get hasChanges => treeSitterApi.ts_node_has_changes(this);

  bool get hasError => treeSitterApi.ts_node_has_error(this);

  TSNode get parent => treeSitterApi.ts_node_parent(this);

  TSNode child(int childIndex) => treeSitterApi.ts_node_child(this, childIndex);

  String fieldNameForChild(int childIndex) => treeSitterApi
      .ts_node_field_name_for_child(this, childIndex)
      .cast<Utf8>()
      .toDartString();

  int get childCount => treeSitterApi.ts_node_child_count(this);

  TSNode namedChild(int childIndex) =>
      treeSitterApi.ts_node_named_child(this, childIndex);

  int get namedChildCount => treeSitterApi.ts_node_named_child_count(this);

  TSNode childByFieldName(String fieldName, int fieldNameLength) {
    final pFieldName = fieldName.toNativeUtf8().cast<Char>();
    final result = treeSitterApi.ts_node_child_by_field_name(
        this, pFieldName, fieldNameLength);
    malloc.free(pFieldName);
    return result;
  }

  TSNode childByFieldId(int fieldId) =>
      treeSitterApi.ts_node_child_by_field_id(this, fieldId);

  TSNode get nextSibling => treeSitterApi.ts_node_next_sibling(this);
  TSNode get prevSibling => treeSitterApi.ts_node_prev_sibling(this);

  TSNode get nextNamedSibling => treeSitterApi.ts_node_next_named_sibling(this);
  TSNode get prevNamedSibling => treeSitterApi.ts_node_prev_named_sibling(this);
}
