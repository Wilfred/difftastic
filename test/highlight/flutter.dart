import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container();
  }
}

Future<void> hello() async {
                     // <- keyword
}

Stream<String> helloStream() async* {
                               // <- keyword
}
Iterable<String> helloIter() sync* {
                              // <- keyword
}
