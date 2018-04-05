const PREC = {
  POSTFIX: 16,
  PREFIX: 15,
  UNARY: 15,
  CAST: 14,
  MULT: 13,
  ADD: 12,
  SHIFT: 11,
  REL: 10,
  EQUAL: 9,
  AND: 8,
  XOR: 7,
  OR: 6,
  LOGAND: 5,
  LOGOR: 4,
  COND: 3,
  ASSIGN: 2,
  SEQ: 1
};

const BYTE_ORDER_MARK = '\xEF\xBB\xBF';

module.exports = grammar({
  name: 'c_sharp',

  extras: $ => [
    $.comment,
    /\s+/
  ],

  conflicts: $ => [
    [$.return_type, $.variable_declaration]
  ],

  inline: $ => [
    $.class_type,
    $.class_member_declaration,
    $.type_parameter_constraints
  ],

  rules: {
    compilation_unit: $ => seq(
      optional(BYTE_ORDER_MARK),
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
      $.delegate_declaration,
      $.interface_declaration
    ),

    // modifiers

    modifiers: $ => repeat1(
      choice(
        'abstract',
        'async',
        'extern',
        'internal',
        'new',
        'override',
        'private',
        'protected',
        'public',
        'readonly',
        'sealed',
        'static',
        'unsafe',
        'virtual',
        'volatile'
      )
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
        'static',
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
        $.using_directive,
        $._type_declaration
      )),
      '}',
      optional(';')
    ),

    // class

    class_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      optional('partial'),
      'class',
      $.identifier_name,
      optional($.type_parameter_list),
      optional($.class_base),
      repeat($.type_parameter_constraints_clause),
      '{',
      repeat($.class_member_declaration),
      '}',
      optional(';')
    ),

    class_member_declaration: $ => choice(
      $._type_declaration,
      $.field_declaration,
      $.event_declaration,
      $.constructor_declaration,
      $.method_declaration
    ),

    class_base: $ => seq(
      ':',
      $.class_type,
      optional(seq(', ', commaSep1($.identifier_name)))
    ),

    class_type: $ => choice(
      $.identifier_name,
      'object',
      'dynamic',
      'string'
    ),

    type_parameter_constraints_clause: $ => seq(
      'where', $.identifier_name, ':', $.type_parameter_constraints
    ),

    type_parameter_constraints: $ => choice(
			$.constructor_constraint,
      seq(
        choice(
          $.class_type,
          'class',
          'struct'
        ),
        optional(seq(',', commaSep1($.identifier_name))),
        optional(seq(',', $.constructor_constraint))
      )
    ),

    constructor_constraint: $ => seq('new', '(', ')'),

    // events

		event_declaration: $ => seq(
			optional($._attributes),
      optional($.modifiers),
			'event',
			$._type,
			$.identifier_name,
			'{',
      choice(
        seq($.add_accessor_declaration, $.remove_accessor_declaration),
        seq($.remove_accessor_declaration, $.add_accessor_declaration)
      ),
      '}'
		),

    add_accessor_declaration: $ => seq(
      optional($._attributes),
      'add',
      $.statement_block
    ),

    remove_accessor_declaration: $ => seq(
      optional($._attributes),
      'remove',
      $.statement_block
    ),

    // interface

    interface_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      optional('partial'),
      'interface',
      $.identifier_name,
      optional($.type_parameter_list),
      optional($.interface_base),
      repeat($.type_parameter_constraints_clause),
      '{',
      repeat(
        choice(
          $.interface_event_declaration,
        )
      ),
      '}',
      optional(';')
    ),

    interface_base: $ => seq(
      ':',
      $.identifier_name,
      optional(seq(',', commaSep1($.identifier_name)))
    ),

    interface_event_declaration: $ => seq(
      optional($._attributes),
      optional('new'),
      'event',
      $._type,
      $.identifier_name,
      ';'
    ),

    // struct

    struct_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      optional('partial'),
      'struct',
      $.identifier_name,
      optional($.type_parameter_list),
      '{',
      repeat(choice(
        $._type_declaration,
        $.field_declaration,
        $.event_declaration
      )),
      '}',
      optional(';')
    ),

    // enum

    enum_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
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
      optional(seq('=', $.constant_expression))
    ),

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
      optional($.modifiers),
      'delegate',
      $.return_type,
      $.identifier_name,
      // TODO: Variant type parameters
      $.parameter_list,
      ';'
    ),

    return_type: $ => choice($._type, 'void'),

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
      $.identifier_name,
      optional($.equals_value_clause)
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
      optional($.modifiers),
      optional($.const_keyword),
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
      $._expression
    ),

    // expressions

    _expression: $ => choice(
      $.identifier_name,
      $._literal,
      $.ternary_expression,
      $.binary_expression,
      $.unary_expression,
      $.parenthesized_expression
    ),

    constant_expression: $ => $._expression,

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    ternary_expression: $ => prec.right(PREC.COND, seq(
      $._expression, '?', $._expression, ':', $._expression
    )),

    binary_expression: $ => choice(
      ...[
        ['&&', PREC.LOGAND],
        ['||', PREC.LOGOR],
        ['>>', PREC.SHIFT],
        ['<<', PREC.SHIFT],
        ['&', PREC.AND],
        ['^', PREC.OR],
        ['|', PREC.OR],
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULT],
        ['/', PREC.MULT],
        ['%', PREC.MULT],
        ['<', PREC.REL],
        ['<=', PREC.REL],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
        ['>=', PREC.REL],
        ['>', PREC.REL],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq($._expression, operator, $._expression))
      )
    ),

    unary_expression: $ => prec.right(PREC.UNARY, choice(
      ...[
        '!',
        '~',
        '-',
        '+',
        '--',
        '++',
        'typeof',
        'sizeof'
      ].map(operator => seq(operator, $._expression)))),

    // TODO, hook this up and fix issues with it
    postfix_expression: $ => prec.left(PREC.POSTFIX, choice(
      seq($._expression, '++'),
      seq($._expression, '--'),
    )),

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
      'global',
      '::',
      $.identifier_name
    ),

    name_equals: $ => seq(
      $.identifier_name,
      '='
    ),

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
    )),

    // methods
    constructor_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      $.identifier_name,
      optional($.type_parameter_list),
      $.parameter_list,
      $.statement_block
    ),

    method_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      optional('partial'),
      $.return_type,
      $.identifier_name,
      optional($.type_parameter_list),
      $.parameter_list,
      repeat($.type_parameter_constraints_clause),
      $.statement_block
    ),

    statement_block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.expression_statement,
      $.return_statement,
      $.empty_statement,
      // $.variable_declaration_statement,
      $.variable_assignment_statement
    ),

    expression_statement: $ => seq(
      $._expression,
      ';'
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    variable_declaration_statement: $ => seq(
      optional('const'),
      $.variable_declaration,
      ';'
    ),

    variable_assignment_statement: $ => seq(
      $.identifier_name,
      $.equals_value_clause,
      ';'
    ),

    empty_statement: $ => ';',
  }
})

function commaSep1(rule) {
  return seq(
    rule,
    repeat(seq(
      ',',
      rule
    ))
  )
}
