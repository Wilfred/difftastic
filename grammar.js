const
  COMMON_MODIFIERS = [
    'new',
    'public',
    'protected',
    'internal',
    'private',
    'unsafe'
  ],

  hexDigit = /[0-9a-fA-F]/

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

    variable_declarator: $ => seq(
      $.identifier_name,
      optional($.equals_value_clause)
    ),

    equals_value_clause: $ => seq(
      '=',
      $._literal
    ),

    _literal: $ => choice(
      $.boolean_literal,
      $.character_literal,
      $.integer_literal,
      $.real_literal,
      $.null_literal
    ),

    boolean_literal: $ => choice(
      'true',
      'false'
    ),

    character_literal: $ => seq(
      "'",
      choice(
        /[^']/,
        $._simple_escape_sequence,
        $._hexadecimal_escape_sequence,
        $._unicode_escape_sequence
      ),
      "'"
    ),

    real_literal: $ => choice(
      seq(
        (/[0-9]+/),
        '.',
        (/[0-9]+/),
        optional($._exponent_part),
        optional($._real_type_suffix)
      ),
      seq(
        '.',
        (/[0-9]+/),
        optional($._exponent_part),
        optional($._real_type_suffix)
      ),
      seq(
        (/[0-9]+/),
        $._exponent_part,
        optional($._real_type_suffix)
      ),
      seq(
        (/[0-9]+/),
        $._real_type_suffix
      )
    ),

    _real_type_suffix: $ => (/[fFdDmm]/),

    _exponent_part: $ => (/[eE][+-]?[0-9]+/),

    null_literal: $ => 'null',

    integer_literal: $ => seq(
      choice(
        (/[0-9]+/),
        (/0x[0-9a-fA-F]+/)
      ),
      optional($._integer_type_suffix)
    ),

    _hexadecimal_escape_sequence: $ =>
      (/\\x[0-9a-fA-F][0-9a-fA-F]?[0-9a-fA-F]?[0-9a-fA-F]?/),

    _unicode_escape_sequence: $ => choice(
      (/\\u[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/),
      (/\\U[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/)
    ),

    _simple_escape_sequence: $ => choice(
      "\\'",
      '\\"',
      '\\\\',
      '\\0',
      '\\a',
      '\\b',
      '\\f',
      '\\n',
      '\\r',
      '\\t',
      '\\v'
    ),

    _integer_type_suffix: $ => (/u|U|l|L|ul|UL|uL|Ul|lu|LU|Lu|lU/),

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
