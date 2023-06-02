import 'dart:convert';
import 'dart:io';

import 'package:args/args.dart';
import 'package:freezed_annotation/freezed_annotation.dart';

part 'gen_grammar.freezed.dart';
part 'gen_grammar.g.dart';

@freezed
class Type with _$Type {
  const factory Type({
    required String type,
    required bool named,
    @Default({}) Map<String, Field> fields,
    Field? children,
    @Default([]) List<Type> subtypes,
  }) = _Type;
  factory Type.fromJson(Map<String, dynamic> map) => _$TypeFromJson(map);
}

@freezed
class Field with _$Field {
  const factory Field({
    required bool multiple,
    required bool required,
    @Default([]) List<Type> types,
  }) = _Field;
  factory Field.fromJson(Map<String, dynamic> map) => _$FieldFromJson(map);
}

final genParser = ArgParser()
  ..addOption('input',
      abbr: 'i', help: 'Grammar\'s Node Types file', mandatory: true)
  ..addOption('output', abbr: 'o', help: 'Output file');
final parser = ArgParser()..addCommand('gen', genParser);

Future<void> main(List<String> args) async {
  final results = parser.parse(args);
  final input = results.command!['input'] as String;
  final j = json.decode(File(input).readAsStringSync());
  final result = (j as List<dynamic>)
      .map((d) => Type.fromJson(d as Map<String, dynamic>))
      .toList();
  print(result);
  final output =
      results.command?['output'] as String? ?? 'lib/src/grammar.dart';
}
