// Implemented based on
// https://code.qt.io/cgit/qt/qtdeclarative.git/tree/src/qml/
//   compiler/qqmlirbuilder.cpp
//   parser/{qqmljs.g,qqmljsast_p.h,qqmljslexer.cpp}
// 3d23912b0e9710dad7ecaf238690e4a7d253534d

module.exports = grammar(require('tree-sitter-typescript/typescript/grammar'), {
  name: 'qmljs',

  inline: ($, original) => original.concat([
    $._qml_identifier,
  ]),

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
      $.ui_import,
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

    ui_import: $ => seq(
      'import',
      field('uri', choice($.string, $.ui_import_uri)),  // ImportId
      optional(field('version', $.ui_version_specifier)),
      optional(seq(
        'as',
        field('id', $._qml_identifier),
      )),
      $._semicolon,
    ),

    // This is UiQualifiedId tree in qqmljs.g, but a flattened dotted name
    // seems more appropriate.
    ui_import_uri: $ => sep1($.identifier, '.'),

    ui_version_specifier: $ => {
      const version_number = alias(/\d+/, $.number);
      return choice(
        field('major', version_number),
        seq(
          field('major', version_number),
          '.',
          field('minor', version_number),
        ),
      );
    },

    _qml_identifier: $ => $.identifier,  // TODO
  },
});

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}
