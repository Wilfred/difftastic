const
  COMMON_MODIFIERS = [
    'new',
    'public',
    'protected',
    'internal',
    'private'
  ]

module.exports = grammar({
  name: 'c_sharp',

  extras: $ => [
    $.comment,
    /\s+/
  ],

  rules: {
    compilation_unit: $ => seq(
      repeat($.extern_alias_directive),
      repeat($.using_directive),
      repeat($._global_attributes),
      repeat(choice(
        $.namespace_declaration,
        $._type_declaration
      ))
    ),

    _type_declaration: $ => choice(
      $.class_declaration,
      $.struct_declaration,
      $.enum_declaration,
      $.delegate_declaration
    ),

    // extern

    extern_alias_directive: $ => seq(
      'extern',
      'alias',
      $.identifier_name,
      ';'
    ),

    // using

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

    // namespace

    namespace_declaration: $ => seq(
      'namespace',
      choice(
        $.qualified_name,
        $.identifier_name
      ),
      '{',
      repeat(choice(
        $.namespace_declaration,
        $._type_declaration
      )),
      '}'
    ),

    // class

    class_declaration: $ => seq(
      optional($._attributes),
      optional($.class_modifiers),
      'class',
      $.identifier_name,
      optional($.type_parameter_list),
      '{',
      repeat(choice(
        $._type_declaration,
        $.field_declaration
      )),
      '}'
    ),

    class_modifiers: $ => $._class_modifiers,
    _class_modifiers: $ => seq(
      choice(
        'unsafe',
        'abstract',
        'sealed',
        'static',
        ...COMMON_MODIFIERS
      ),
      optional($._class_modifiers)
    ),

    // struct

    struct_declaration: $ => seq(
      optional($._attributes),
      optional($.struct_modifiers),
      'struct',
      $.identifier_name,
      optional($.type_parameter_list),
      '{',
      repeat(choice(
        $._type_declaration,
        $.field_declaration
      )),
      '}'
    ),

    struct_modifiers: $ => $._struct_modifiers,
    _struct_modifiers: $ => seq(
      choice('unsafe', ...COMMON_MODIFIERS),
      optional($._struct_modifiers)
    ),

    // enum

    enum_declaration: $ => seq(
      optional($._attributes),
      optional($.enum_modifier),
      'enum',
      $.identifier_name,
      optional(seq(':', $._integral_type)),
      '{',
      commaSep1($.enum_member_declaration),
      '}',
      optional(';')
    ),

    enum_member_declaration: $ => seq(
      optional($._attributes),
      $.identifier_name,
      optional($.equals_value_clause)
    ),

    enum_modifier: $ => choice(...COMMON_MODIFIERS),

    _integral_type: $ => choice(
      'sbyte',
      'byte',
      'short',
      'ushort',
      'int',
      'uint',
      'long',
      'ulong',
      'char'
    ),

    // delegate

    delegate_declaration: $ => seq(
      optional($._attributes),
      optional($.delegate_modifier),
      'delegate',
      $._return_type,
      $.identifier_name,
      // TODO: Variant type parameters
      $.parameter_list,
      ';'
    ),

    delegate_modifier: $ => choice('unsafe', ...COMMON_MODIFIERS),

    _return_type: $ => choice($._type, $.void_keyword),
    void_keyword: $ => 'void',

    // parameters

    parameter_list: $ => seq(
      '(',
      optional($._formal_parameter_list),
      ')'
    ),

    _formal_parameter_list: $ => choice(
      commaSep1($.parameter),
      seq(commaSep1($.parameter), $.parameter_array),
      $.parameter_array
    ),

    parameter: $ => seq(
      optional($._attributes),
      optional($.parameter_modifier),
      $._type,
      $.identifier_name
      // TODO: Default argument
    ),

    parameter_modifier: $ => choice('ref', 'out', 'this'),

    parameter_array: $ => seq(
      optional($._attributes),
      $.params_keyword,
      $.array_type,
      $.identifier_name
    ),

    params_keyword: $ => 'params',

    array_type: $ => seq(
      $._type,
      $.array_rank_specifier
    ),

    array_rank_specifier: $ => seq(
      '[',
      repeat(','),
      ']'
    ),

    // attributes

    _attributes: $ => repeat1($._attribute_section),

    _attribute_section: $ => seq(
      '[',
      $.attribute_list,
      ']'
    ),

    attribute_list: $ => commaSep1($.attribute),

    attribute: $ => seq(
      $.identifier_name,
      optional($.attribute_argument_list)
    ),

    attribute_argument_list: $ => seq(
      '(',
      // TODO: attribute_arguments
      ')'
    ),

    _global_attributes: $ => seq(
      '[',
      choice('assembly', 'module'),
      ':',
      $.attribute_list,
      ']'
    ),

    const_keyword: $ => 'const',

    // fields

    field_declaration: $ => seq(
      optional($._attributes),
      optional($.field_modifiers),
      optional($.const_keyword),
      $.variable_declaration,
      ';'
    ),

    field_modifiers: $ => $._field_modifiers,
    _field_modifiers: $ => seq(
      choice(
        'unsafe',
        'readonly',
        'volatile',
        'static',
        ...COMMON_MODIFIERS
      ),
      optional($._field_modifiers)
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
      $._expression
    ),

    // expressions

    _expression: $ => choice(
      $._literal
    ),

    // literals

    _literal: $ => choice(
      $.boolean_literal,
      $.character_literal,
      $.integer_literal,
      $.null_literal,
      $.real_literal,
      $.string_literal
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

    integer_literal: $ => seq(
      choice(
        (/[0-9]+/),
        (/0x[0-9a-fA-F]+/)
      ),
      optional($._integer_type_suffix)
    ),

    _integer_type_suffix: $ => (/u|U|l|L|ul|UL|uL|Ul|lu|LU|Lu|lU/),

    null_literal: $ => 'null',

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

    string_literal: $ => choice(
      $._regular_string_literal,
      $._verbatim_string_literal
    ),

    _regular_string_literal: $ => seq(
      '"',
      repeat($._regular_string_literal_character),
      '"'
    ),

    _regular_string_literal_character: $ => choice(
      /[^"\\\n]/,
      $._simple_escape_sequence,
      $._hexadecimal_escape_sequence,
      $._unicode_escape_sequence
    ),

    _verbatim_string_literal: $ => seq(
      '@"',
      /[^"]*/,
      '"'
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

    // commments

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
