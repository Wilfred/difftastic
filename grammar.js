const COMMON_MODIFIERS = [
  'new',
  'public',
  'protected',
  'internal',
  'private',
  'unsafe'
]

module.exports = grammar({
  name: 'c_sharp',

  extras: $ => [
    $.comment,
    /\s+/
  ],

  rules: {
    compilation_unit: $ => seq(
      repeat($.using_directive),
      repeat(choice(
        $.namespace_declaration,
        $.class_declaration,
        $.struct_declaration
      ))
    ),

    using_directive: $ => seq(
      'using',
      optional(choice(
        $.static,
        $.name_equals
      )),
      choice(
        $.qualified_name,
        $.identifier_name
      ),
      ';'
    ),

    namespace_declaration: $ => seq(
      'namespace',
      choice(
        $.qualified_name,
        $.identifier_name
      ),
      '{',
      repeat(choice(
        $.namespace_declaration,
        $.class_declaration,
        $.struct_declaration
      )),
      '}'
    ),

    class_declaration: $ => seq(
      optional($.class_modifiers),
      'class',
      $.identifier_name,
      optional($.type_parameter_list),
      '{',
      repeat(choice(
        $.class_declaration,
        $.struct_declaration,
        $.field_declaration
      )),
      '}'
    ),

    struct_declaration: $ => seq(
      optional($.struct_modifiers),
      'struct',
      $.identifier_name,
      optional($.type_parameter_list),
      '{',
      repeat(choice(
        $.class_declaration,
        $.struct_declaration
      )),
      '}'
    ),

    field_declaration: $ => seq(
      optional($.field_modifiers),
      $.variable_declaration,
      ';'
    ),

    variable_declaration: $ => seq(
      $._type,
      commaSep1($.variable_declarator)
    ),

    _type: $ => choice(
      $.predefined_type,
      $.identifier_name,
      $.generic_name
    ),

    generic_name: $ => seq(
      $.identifier_name,
      $.type_parameter_list
    ),

    variable_declarator: $ => $.identifier_name,

    class_modifiers: $ => $._class_modifiers,
    _class_modifiers: $ => seq(
      choice(
        'abstract',
        'sealed',
        'static',
        ...COMMON_MODIFIERS
      ),
      optional($._class_modifiers)
    ),

    struct_modifiers: $ => $._struct_modifiers,
    _struct_modifiers: $ => seq(
      choice(...COMMON_MODIFIERS),
      optional($._struct_modifiers)
    ),

    field_modifiers: $ => $._field_modifiers,
    _field_modifiers: $ => seq(
      choice(
        'readonly',
        'volatile',
        'static',
        ...COMMON_MODIFIERS
      ),
      optional($._field_modifiers)
    ),

    predefined_type: $ => choice(
      'bool',
      'byte',
      'char',
      'decimal',
      'double',
      'float',
      'int',
      'long',
      'object',
      'sbyte',
      'short',
      'string',
      'uint',
      'ulong',
      'ushort'
    ),

    type_parameter_list: $ => seq(
      '<',
      commaSep1($.type_parameter),
      '>'
    ),

    type_parameter: $ => $._type,

    qualified_name: $ => seq(
      choice(
        $.identifier_name,
        $.qualified_name,
        $.alias_qualified_name
      ),
      '.',
      $.identifier_name
    ),

    alias_qualified_name: $ => seq(
      $.global,
      '::',
      $.identifier_name
    ),

    name_equals: $ => seq(
      $.identifier_name,
      '='
    ),

    global: $ => 'global',

    static: $ => 'static',

    identifier_name: $ => (/[a-zA-Z_][a-zA-Z_0-9]*/),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        repeat(choice(
          /[^*]/,
          /\*[^/]/
        )),
        '*/'
      )
    ))
  }
})

function commaSep1 (rule) {
  return seq(
    rule,
    repeat(seq(
      ',',
      rule
    ))
  )
}
