// Implemented based on
// https://code.qt.io/cgit/qt/qtdeclarative.git/tree/src/qml/
//   compiler/qqmlirbuilder.cpp
//   parser/{qqmljs.g,qqmljsast_p.h,qqmljslexer.cpp}
// 3d23912b0e9710dad7ecaf238690e4a7d253534d

module.exports = grammar(require('tree-sitter-typescript/typescript/grammar'), {
  name: 'qmljs',

  inline: ($, original) => original.concat([
    $._ui_root_member,
    $._ui_object_member,
    $._ui_qualified_id,
    $._ui_simple_qualified_id,
    $._qml_identifier,
  ]),

  rules: {
    // should be 'ui_program' per naming convention, but we need to override the
    // start rule of the javascript/typescript grammar.
    program: $ => seq(
      optional($.hash_bang_line),
      optional(field('headers', $.ui_header_item_list)),
      field('root', $._ui_root_member),
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

    _ui_root_member: $ => choice(
      $.ui_object_definition,
      $.ui_annotated_object,
    ),

    ui_object_definition: $ => seq(
      field('type_name', $._ui_qualified_id),
      field('initializer', $.ui_object_initializer),
    ),

    ui_annotated_object: $ => seq(
      field('annotations', $.ui_annotation_list),
      field('definition', $.ui_object_definition),
    ),

    ui_annotation_list: $ => repeat1($.ui_annotation),

    ui_annotation: $ => seq(
      '@',
      field('type_name', $._ui_simple_qualified_id),
      field('initializer', $.ui_object_initializer),
    ),

    ui_object_initializer: $ => seq(
      '{',
      repeat(choice(
        $._ui_object_member,
        $.ui_annotated_object_member,
      )),
      '}',
    ),

    ui_annotated_object_member: $ => seq(
      field('annotations', $.ui_annotation_list),
      field('definition', $._ui_object_member),
    ),

    _ui_object_member: $ => choice(
      $.ui_object_definition,
      // TODO:
      // UiObjectMember: UiQualifiedId T_COLON ExpressionStatementLookahead T_LBRACKET UiArrayMemberList T_RBRACKET;
      // UiObjectMember: UiQualifiedId T_COLON ExpressionStatementLookahead UiQualifiedId UiObjectInitializer;
      // UiObjectMember: UiQualifiedId T_ON UiQualifiedId  UiObjectInitializer;
      // UiObjectMember: UiQualifiedId T_COLON UiScriptStatement;
      // UiObjectMember: T_SIGNAL T_IDENTIFIER T_LPAREN UiParameterListOpt T_RPAREN Semicolon;
      // UiObjectMember: T_SIGNAL T_IDENTIFIER Semicolon;
      // UiObjectMember: UiObjectMemberListPropertyNoInitialiser;
      // UiObjectMember: T_READONLY UiObjectMemberListPropertyNoInitialiser;
      // UiObjectMember: UiObjectMemberPropertyNoInitialiser;
      // UiObjectMember: T_DEFAULT UiObjectMemberPropertyNoInitialiser;
      // UiObjectMember: T_REQUIRED UiObjectMemberListPropertyNoInitialiser;
      // UiObjectMember: T_DEFAULT T_REQUIRED UiObjectMemberListPropertyNoInitialiser;
      // UiObjectMember: T_REQUIRED T_DEFAULT UiObjectMemberListPropertyNoInitialiser;
      // UiObjectMember: T_DEFAULT UiObjectMemberListPropertyNoInitialiser;
      // UiObjectMember: T_DEFAULT T_REQUIRED UiObjectMemberPropertyNoInitialiser;
      // UiObjectMember: T_REQUIRED T_DEFAULT UiObjectMemberPropertyNoInitialiser;
      // UiObjectMember: UiRequired;
      // UiObjectMember: T_REQUIRED UiObjectMemberPropertyNoInitialiser;
      // UiObjectMember: UiObjectMemberWithScriptStatement;
      // UiObjectMember: T_READONLY UiObjectMemberWithScriptStatement;
      // UiObjectMember: T_DEFAULT UiObjectMemberWithScriptStatement;
      // UiObjectMember: UiObjectMemberWithArray;
      // UiObjectMember: T_READONLY UiObjectMemberWithArray;
      // UiObjectMember: UiObjectMemberExpressionStatementLookahead;
      // UiObjectMember: T_READONLY UiObjectMemberExpressionStatementLookahead;
      // UiObjectMember: GeneratorDeclaration;
      // UiObjectMember: FunctionDeclarationWithTypes;
      // UiObjectMember: VariableStatement;
      // UiObjectMember: T_ENUM T_IDENTIFIER T_LBRACE EnumMemberList T_RBRACE;
      // UiObjectMember: T_COMPONENT T_IDENTIFIER T_COLON UiObjectDefinition;
    ),

    _ui_qualified_id: $ => choice(
      $.identifier,
      $.nested_identifier,
    ),

    _ui_simple_qualified_id: $ => $._ui_qualified_id,  // TODO

    _qml_identifier: $ => $.identifier,  // TODO
  },
});

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}
