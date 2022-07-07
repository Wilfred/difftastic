tree-sitter-qmljs
=================

[QML][] grammar for the [tree-sitter][] parsing library.

[QML]: https://doc.qt.io/qt-6/qmlapplications.html
[tree-sitter]: https://github.com/tree-sitter/tree-sitter

References
----------

* https://code.qt.io/cgit/qt/qtdeclarative.git/tree/src/qml/parser/qqmljs.g

Pitfalls
--------

Since grouped binding notation is syntactically ambiguous, it is parsed as
an object definition.

```qml
// (ui_object_definition type_name: (identifier "Button") ...)
Button {
    // (ui_object_definition type_name: (identifier "icon") ...)
    icon { source: "foo.png"; color: "transparent" }
}
```

Building
--------

Use the `master` branch, which contains all generated files.

```
$ git checkout master
$ npm install
$ cargo build --release
```

Hacking
-------

Use the `dev` branch, but you'll first need to run `npm install` in the
`master` branch.

```
$ git checkout master
$ npm install
$ git checkout dev
```

Generate code and run tests:
```
$ make generate tests
```

Make sure example QML files can be parsed:
```
$ make fetch-examples parse-examples
```
