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
    $._ui_binding_value,
    $._ui_script_statement,
    $._ui_qualified_id,
    $._ui_simple_qualified_id,
    $._ui_property_type,
    $._qml_identifier,
  ]),

  conflicts: ($, original) => original.concat([
    [$.ui_qualified_id, $.primary_expression],  // [Qualified.Obj {}] vs [member.expr]
  ]),

  rules: {
    // should be 'ui_program' per naming convention, but we need to override the
    // start rule of the javascript/typescript grammar.
    program: $ => seq(
      optional($.hash_bang_line),
      optional(field('headers', $.ui_header_item_list)),
      field('root', $._ui_root_member),
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
      $.ui_object_definition_binding,
      $.ui_binding,
      $.ui_property,
      $.ui_required,
      $.ui_signal,
      $.generator_function_declaration,
      $.function_declaration,
      // TODO:
      // UiObjectMember: VariableStatement;
      // UiObjectMember: T_ENUM T_IDENTIFIER T_LBRACE EnumMemberList T_RBRACE;
      // UiObjectMember: T_COMPONENT T_IDENTIFIER T_COLON UiObjectDefinition;
    ),

    ui_object_definition_binding: $ => seq(
      field('type_name', $._ui_qualified_id),
      'on',
      field('name', $._ui_qualified_id),
      field('initializer', $.ui_object_initializer),
    ),

    ui_binding: $ => seq(
      field('name', $._ui_qualified_id),
      ':',
      field('value', $._ui_binding_value),
    ),

    // This is a general (or relaxed) form of the property declaration. Some
    // combinations (e.g. required with value) can be rejected by qqmljs.g, but
    // copying that wouldn't make sense. It's rather restricted by a code model.
    ui_property: $ => seq(
      repeat($.ui_property_modifier),
      'property',
      field('type', choice($._ui_property_type, $.ui_list_property_type)),
      field('name', $._qml_identifier),
      choice(
        seq(
          ':',
          field('value', $._ui_binding_value),
        ),
        $._semicolon,
      ),
    ),

    // "T_IDENTIFIER T_LT UiPropertyType T_GT", but only "list" is allowed as
    // a property type modifier.
    ui_list_property_type: $ => seq(
      'list',
      '<',
      $._ui_property_type,
      '>',
    ),

    ui_property_modifier: $ => choice(
      'default',
      'readonly',
      'required',
    ),

    _ui_binding_value: $ => choice(
      $.ui_object_array,
      $.ui_object_definition,
      $._ui_script_statement,
    ),

    ui_object_array: $ => seq(
      '[',
      sep1($.ui_object_definition, ','),  // UiArrayMemberList
      ']',
    ),

    _ui_script_statement: $ => choice(
      $.statement_block,
      $.empty_statement,
      $.expression_statement,
      $.if_statement,
      $.with_statement,
      $.switch_statement,
      $.try_statement,
    ),

    ui_required: $ => seq(
      'required',
      field('name', $._qml_identifier),
      $._semicolon,
    ),

    ui_signal: $ => seq(
      'signal',
      field('name', $.identifier),
      optional(field('parameters', $.ui_signal_parameters)),
      $._semicolon,
    ),

    ui_signal_parameters: $ => seq(
      '(',
      sep($.ui_signal_parameter, ','),
      ')',
    ),

    ui_signal_parameter: $ => choice(
      seq(
        field('name', $._qml_identifier),
        ':',
        field('type', $._ui_property_type),
      ),
      seq(
        field('type', $._ui_property_type),
        field('name', $._qml_identifier),
      ),
    ),

    _ui_qualified_id: $ => choice(
      $.identifier,
      $.ui_qualified_id,
    ),

    ui_qualified_id: $ => seq(
      choice($.identifier, $.ui_qualified_id),
      '.',
      $.identifier,
    ),

    _ui_simple_qualified_id: $ => $._ui_qualified_id,  // TODO

    _ui_property_type: $ => $._ui_qualified_id,  // TODO

    _qml_identifier: $ => $.identifier,  // TODO
  },
});

function sep(rule, sep) {
  return optional(sep1(rule, sep));
}

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}
