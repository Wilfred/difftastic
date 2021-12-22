// Implemented based on
// https://code.qt.io/cgit/qt/qtdeclarative.git/tree/src/qml/
//   compiler/qqmlirbuilder.cpp
//   parser/{qqmljs.g,qqmljsast_p.h,qqmljslexer.cpp}
// 3d23912b0e9710dad7ecaf238690e4a7d253534d

module.exports = grammar(require('tree-sitter-typescript/typescript/grammar'), {
  name: 'qmljs',

  rules: {
    // should be 'ui_program' per naming convention, but we need to override the
    // start rule of the javascript/typescript grammar.
    program: $ => seq(
      optional($.hash_bang_line),
      optional(field('headers', $.ui_header_item_list)),
      // TODO: UiRootMember
      optional(seq('\0', $.statement)),  // TODO: remove
    ),

    ui_header_item_list: $ => repeat1(choice(
      $.ui_pragma,
      // TODO: UiImport
    )),

    ui_pragma: $ => seq(
      'pragma',
      field('name', $.identifier),  // PragmaId
      optional(seq(
        ':',
        field('value', $.identifier),
      )),
      $._semicolon,
    ),
  },
});
