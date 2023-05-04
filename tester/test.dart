#! /usr/bin/env dcli

import 'dart:io';
// import 'package:dcli/dcli.dart';
import 'package:path/path.dart';

var lines = 0;
final sectionSize = 100;
final maxPrint = 500;
var linesPrinted = 0;
var errorLines = 0;
void main(List<String> args) async {
  if (args.length < 1) {
    print("Usage: dart tester/test.dart /path/to/directory/for/testing");
    return;
  }

  final files = Directory(args[0])
      .listSync(recursive: true)
      .whereType<File>()
      .where((e) => e.path.endsWith('.dart'))
      .map((f) => f.path)
      .toList();

  final results = <Future<void>>[];
  for (var i = 0; i < files.length; i += sectionSize) {
    final sublist = files.sublist(
        i, i + sectionSize < files.length ? i + sectionSize : files.length);
    results.add(runTreeSitter(sublist));
  }
  await Future.wait(results);
  print('Processed $lines lines of tree-sitter output');
  print('Error lines $errorLines');
  print('Error percentage ${errorLines * 100 / lines}%');
}

Future<void> runTreeSitter(List<String> files) async {
  final result = await Process.run(
      absolute('node_modules/tree-sitter-cli/tree-sitter'),
      ['parse', ...files]);
  for (final line in result.stdout.split('\n')) {
    lines++;
    if (line.contains('ERROR')) {
      errorLines++;
      if (linesPrinted < maxPrint) {
        linesPrinted++;
        print(line);
      }
    }
  }
}
