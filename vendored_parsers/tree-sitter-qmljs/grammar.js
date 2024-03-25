// Implemented based on
// https://code.qt.io/cgit/qt/qtdeclarative.git/tree/src/qml/
//   compiler/qqmlirbuilder.cpp
//   parser/{qqmljs.g,qqmljsast_p.h,qqmljslexer.cpp}
// 49ec094b7fb1eb6675fdc1db8348409cd3ff8184

module.exports = grammar(require('tree-sitter-typescript/typescript/grammar'), {
  name: 'qmljs',

  supertypes: ($, original) => original.concat([
    $._ui_object_member,
    $._ui_script_statement,
  ]),

  inline: ($, original) => original.concat([
    $._ui_root_member,
    $._ui_object_member,
    $._ui_property_type,
    $._ui_binding_value,
    $._ui_property_value,
    $._ui_script_statement,
    $._ui_qualified_id,
    $._ui_identifier,
    $._ui_simple_qualified_id,
    $._ui_reserved_identifier,
  ]),

  conflicts: ($, original) => original.concat([
    [$.ui_property_modifier, $.ui_required],  // required property name vs required property
    [$.ui_nested_identifier, $.primary_expression],  // Nested.Obj {} vs member.expr
  ]),

  rules: {
    // should be 'ui_program' per naming convention, but we need to override the
    // start rule of the javascript/typescript grammar.
    program: $ => seq(
      optional($.hash_bang_line),
      repeat(choice(
        $.ui_pragma,
        $.ui_import,
      )),
      field('root', $._ui_root_member),
    ),

    ui_pragma: $ => seq(
      'pragma',
      field('name', $.identifier),  // PragmaId
      optional(seq(
        ':',
        // TODO: or insert 'values': (ui_pragma_value_list ..)?
        sep1(field('value', choice($.identifier, $.string)), ','),
      )),
      $._semicolon,
    ),

    ui_import: $ => seq(
      'import',
      field('source', choice(
        $.string,
        $._ui_qualified_id,
      )),  // ImportId: MemberExpression
      optional(field('version', $.ui_version_specifier)),
      optional(seq(
        'as',
        field('alias', $.identifier),  // QmlIdentifier
      )),
      $._semicolon,
    ),

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
      repeat1(field('annotation', $.ui_annotation)),
      field('definition', $.ui_object_definition),
    ),

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
      repeat1(field('annotation', $.ui_annotation)),
      field('definition', $._ui_object_member),
    ),

    _ui_object_member: $ => choice(
      $.ui_object_definition,
      $.ui_object_definition_binding,
      $.ui_binding,
      $.ui_property,
      $.ui_required,
      $.ui_signal,
      $.ui_inline_component,
      $.generator_function_declaration,
      $.function_declaration,
      $.variable_declaration,
      alias($._qml_enum_declaration, $.enum_declaration),
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

    // Duplicated modifiers are rejected by qqmljs.g, but we don't check for that.
    ui_property: $ => seq(
      repeat($.ui_property_modifier),
      'property',
      field('type', choice(
        $._ui_property_type,
        $.ui_list_property_type,
      )),
      field('name', $._ui_identifier),  // QmlIdentifier
      choice(
        seq(
          ':',
          field('value', $._ui_property_value),
        ),
        $._semicolon,
      ),
    ),

    _ui_property_type: $ => choice(
      $._type_identifier,
      $.nested_type_identifier,
    ),

    // "T_IDENTIFIER T_LT UiPropertyType T_GT", but only "list" is allowed as
    // a property type modifier.
    ui_list_property_type: $ => seq(
      alias('list', $.type_identifier),
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

    // similar to $._ui_binding_value, but optional semicolon is also allowed
    // for array/object.
    _ui_property_value: $=> choice(
      seq($.ui_object_array, $._semicolon),  // UiObjectMemberWithArray
      seq($.ui_object_definition, $._semicolon),  // UiObjectMemberExpressionStatementLookahead
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
      field('name', $._ui_identifier),  // QmlIdentifier
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
        field('name', $.identifier),  // QmlIdentifier
        ':',
        field('type', $._ui_property_type),
      ),
      seq(
        field('type', $._ui_property_type),
        field('name', $.identifier),  // QmlIdentifier
      ),
    ),

    ui_inline_component: $ => seq(
      'component',
      field('name', $.identifier),
      ':',
      field('component', $.ui_object_definition),
    ),

    // QML enum can be considered a restricted form of the TypeScript enum.
    _qml_enum_declaration: $ => seq(
      'enum',
      field('name', $.identifier),
      field('body', alias($._qml_enum_body, $.enum_body)),
    ),

    _qml_enum_body: $ => seq(
      '{',
      sep1(choice(
        field('name', $.identifier),
        alias($._qml_enum_assignment, $.enum_assignment),
      ), ','),
      '}',
    ),

    _qml_enum_assignment: $ => seq(
      field('name', $.identifier),
      '=',
      field('value', choice(
        $.number,
        alias($._qml_enum_negative_number, $.unary_expression),
      )),
    ),

    _qml_enum_negative_number: $ => seq(
      field('operator', '-'),  // '+' is not allowed
      field('argument', $.number),
    ),

    // MemberExpression -> reparseAsQualifiedId()
    _ui_qualified_id: $ => choice(
      $._ui_identifier,
      alias($.ui_nested_identifier, $.nested_identifier),
    ),

    _ui_identifier: $ => choice(
      $.identifier,
      alias($._ui_reserved_identifier, $.identifier),
    ),

    ui_nested_identifier: $ => seq(
      $._ui_qualified_id,
      '.',
      $.identifier,
    ),

    _ui_simple_qualified_id: $ => choice(
      $.identifier,
      alias($.ui_simple_nested_identifier, $.nested_identifier),
    ),

    ui_simple_nested_identifier: $ => seq(
      $._ui_simple_qualified_id,
      '.',
      $.identifier,
    ),

    // teach JavaScript/TypeScript grammar about QML keywords.
    _reserved_identifier: ($, original) => choice(
      original,
      'property',
      'signal',
      'readonly',
      'on',
      'required',
      'component',
      // not QML keywords, but qmljs.g accepts them as JS expressions:
      'from',
      'of',
    ),

    _ui_reserved_identifier: $ => choice(
      // JavaScript:
      'get',
      'set',
      'async',
      'static',
      'export',
      'let',

      // TypeScript:
      'declare',
      'namespace',
      'type',
      'public',
      'private',
      'protected',
      'override',
      'readonly',
      'module',
      'any',
      'number',
      'boolean',
      'string',
      'symbol',
      'export',
      'object',
      // 'new', ('new {}' would conflict at property value position)
      'readonly',

      // QML (see QmlIdentifier):
      'property',
      'signal',
      'readonly',
      'on',
      'from',
      'of',
      'required',
      'component',
    ),

    // Patch up JavaScript string rules to support multi-line string literal.
    // (See also the change b16c69a70be9 in tree-sitter-javascript.)
    unescaped_double_string_fragment: _ => token.immediate(prec(1, /[^"\\]+/)),
    unescaped_single_string_fragment: _ => token.immediate(prec(1, /[^'\\]+/)),
  },
});

function sep(rule, sep) {
  return optional(sep1(rule, sep));
}

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}
