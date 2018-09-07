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
    [$.overloadable_unary_operator, $.overloadable_binary_operator],
    [$.generic_name, $._expression],
    [$.if_statement]
  ],

  inline: $ => [
    $.class_type,
    $.return_type
  ],

  word: $ => $.identifier_name,

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

    // types

    _type_declaration: $ => choice(
      $.class_declaration,
      $.struct_declaration,
      $.enum_declaration,
      $.delegate_declaration,
      $.interface_declaration
    ),

    _type: $ => choice(
      $.predefined_type,
      $.identifier_name,
      $.generic_name
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

    type_parameter_list: $ => seq('<', commaSep1($.type_parameter), '>'),
    type_parameter: $ => $._type,

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

    extern_alias_directive: $ => seq('extern', 'alias', $.identifier_name, ';'),

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

    name_equals: $ => seq($.identifier_name, '='),

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

    // properties

    property_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      $._type,
      $.identifier_name,
      $._property_body
    ),

    _property_body: $ => choice(
      seq('{', $._accessor_declarations, '}', optional($._property_initializer)),
      seq('=>', $._expression, ';')
    ),

    _property_initializer: $ => seq('=', $.variable_initializer, ';'),

    _accessor_declarations: $ => choice(
      seq($.get_accessor_declaration, optional($.set_accessor_declaration)),
      seq($.set_accessor_declaration, optional($.get_accessor_declaration))
    ),

    get_accessor_declaration: $ => seq(
      optional($._attributes),
      optional($.accessor_modifier),
      'get',
      choice($.statement_block, ';')
    ),

    set_accessor_declaration: $ => seq(
      optional($._attributes),
      optional($.accessor_modifier),
      'set',
      choice($.statement_block, ';')
    ),

    accessor_modifier: $ => choice(
      'protected',
      'internal',
      'private',
      seq('protected', 'internal'),
      seq('internal', 'protected')
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
      repeat(
        choice(
          $.constant_declaration,
          $.field_declaration,
          $.method_declaration,
          $.property_declaration,
          $.event_declaration,
          $.indexer_declaration,
          $.operator_declaration,
          $.constructor_declaration,
          $.destructor_declaration,
          $._type_declaration
          ),
        ),
      '}',
      optional(';')
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

    // indexers

    indexer_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      $._indexer_declarator,
      $._indexer_body
    ),

    _indexer_declarator: $ => choice(
      seq($._type, 'this', '[', $._formal_parameter_list, ']'),
      seq(
        $._type,
        $.identifier_name,
        '.',
        'this',
        '[',
        $._formal_parameter_list,
        ']'
      ),
    ),

    _indexer_body: $ => choice(
      seq('{', $._accessor_declarations, '}'),
      seq('=>', $._expression, ';'),
    ),

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

    add_accessor_declaration: $ => seq(optional($._attributes), 'add', $.statement_block),
    remove_accessor_declaration: $ => seq(optional($._attributes), 'remove', $.statement_block),

    // operator declarations

    operator_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      $._operator_declarator,
      choice(
        $.statement_block,
        seq('=>', $._expression, ';'),
        ';'
      )
    ),

    _operator_declarator: $ => choice(
      $._unary_operator_declarator,
      $._binary_operator_declarator,
      $._conversion_operator_declarator
    ),

    _unary_operator_declarator: $ => seq(
      $._type,
      'operator',
      $.overloadable_unary_operator,
      '(',
      $._type,
      $.identifier_name,
      ')'
    ),

    overloadable_unary_operator: $ => choice(
      '+',
      '-',
      '!',
      '~',
      '++',
      '--',
      'true',
      'false'
    ),

    _binary_operator_declarator: $ => seq(
      $._type,
      'operator',
      $.overloadable_binary_operator,
      '(',
      $._type,
      $.identifier_name,
      ',',
      $._type,
      $.identifier_name,
      ')'
    ),

    overloadable_binary_operator: $=> choice(
      '+', '-',
      '*', '/',
      '%', '^',
      '|', '&',
      '<<', '>>',
      '==', '!=',
      '>', '<',
      '>=', '<='
    ),

    _conversion_operator_declarator: $=> seq(
      $.overloadable_conversion_operator,
      'operator',
      $._type,
      '(',
      $._type,
      $.identifier_name,
      ')'
    ),

    overloadable_conversion_operator: $ => choice(
      'implicit',
      'explicit'
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
          $.interface_method_declaration,
          $.interface_event_declaration,
          $.interface_property_declaration,
          $.interface_indexer_declaration
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

    interface_method_declaration: $ => seq(
      optional($._attributes),
      optional('new'),
      $.return_type,
      $.identifier_name,
      optional($.type_parameter_list),
      optional($.parameter_list),
      repeat($.type_parameter_constraints_clause),
      ';'
    ),

    interface_event_declaration: $ => seq(
      optional($._attributes),
      optional('new'),
      'event',
      $._type,
      $.identifier_name,
      ';'
    ),

    interface_property_declaration: $ => seq(
      optional($._attributes),
      optional('new'),
      $._type,
      $.identifier_name,
      '{',
      repeat1($.interface_accessor),
      '}'
    ),

    interface_accessor: $ => seq(optional($._attributes), choice('get', 'set'), ';'),

    interface_indexer_declaration: $ => seq(
      optional($._attributes),
      optional('new'),
      $._type,
      'this',
      '[',
      $._formal_parameter_list,
      ']',
      '{',
      repeat1($.interface_accessor),
      '}'
    ),

    // struct

    struct_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      optional('partial'),
      'struct',
      $.identifier_name,
      optional($.type_parameter_list),
      optional($.struct_interfaces),
      repeat($.type_parameter_constraints_clause),
      '{',
      repeat(
        choice(
          $.constant_declaration,
          $.field_declaration,
          $.method_declaration,
          $.property_declaration,
          $.event_declaration,
          $.indexer_declaration,
          $.operator_declaration,
          $.constructor_declaration,
          $._type_declaration
        )
      ),
      '}',
      optional(';')
    ),

    struct_interfaces: $ => seq(':', commaSep1($.identifier_name)),

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

    return_type: $ => choice($._type, $.void_keyword),
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
      $.identifier_name,
      optional($.default_argument)
    ),

    default_argument: $ => seq('=', $._expression),
    parameter_modifier: $ => choice('ref', 'out', 'this'),

    parameter_array: $ => seq(
      optional($._attributes),
      'params',
      $.array_type,
      $.identifier_name
    ),

    // arrays

    array_type: $ => seq($._type, $.rank_specifier),
    rank_specifier: $ => seq('[', repeat(','), ']'),

    // attributes

    _attributes: $ => repeat1($._attribute_section),
    _attribute_section: $ => seq('[', $.attribute_list, ']'),
    attribute_list: $ => commaSep1($.attribute),
    attribute: $ => seq($.identifier_name, optional($.attribute_argument_list)),

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

    // fields

    field_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      $.variable_declaration,
      ';'
    ),

    variable_declaration: $ => seq($._type, commaSep1($.variable_declarator)),
    generic_name: $ => seq($.identifier_name, $.type_parameter_list),
    variable_declarator: $ => seq($.identifier_name, optional($.equals_value_clause)),
    variable_initializer: $ => choice(
      $._expression,
      $.array_initalizer
    ),

    array_initalizer: $ => seq('{', commaSep1($.variable_initializer), '}'),
    equals_value_clause: $ => seq('=', $._expression),

    // constants

    constant_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      'const',
      $._type,
      $._constant_declarators,
      ';'
    ),

    _constant_declarators: $ => seq(
      $.constant_declarator,
      repeat(seq(',', $.constant_declarator))
    ),

    constant_declarator: $ => seq($.identifier_name, '=', $.constant_expression),

    // expressions

    _expression: $ => choice(
      $.identifier_name,
      $._literal,
      $.ternary_expression,
      $.binary_expression,
      $.unary_expression,
      $.parenthesized_expression
    ),

    boolean_expression: $ => $._expression,
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

    // names

    qualified_name: $ => seq(
      choice(
        $.identifier_name,
        $.qualified_name,
        $.alias_qualified_name
      ),
      '.',
      $.identifier_name
    ),

    alias_qualified_name: $ => seq('global', '::', $.identifier_name),
    identifier_name: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,

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

    destructor_declaration: $ => seq(
      optional($._attributes),
      optional('extern'),
      '~',
      $.identifier_name,
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

    // Statements

    _statement: $ => choice(
      $._labeled_statement,
      $._embedded_statement,
      $._declaration_statement,
      $.variable_assignment_statement // TODO: Remove
    ),

    variable_assignment_statement: $ => seq($.identifier_name, $.equals_value_clause, ';'),

    statement_block: $ => seq('{', optional($._statement_list), '}'),
    _statement_list: $ => repeat1($._statement),
    _labeled_statement: $ => seq(
      alias($.identifier_name, $.label_name),
      ':',
      $._statement
    ),

    // Embedded statements

    _embedded_statement: $ => choice(
      $.statement_block,
      $.empty_statement,
      $.expression_statement,
      $._selection_statement,
      $._iteration_statement,
      $._jump_statement,
      $.try_statement,
      $.checked_statement,
      $.unchecked_statement,
      $.lock_statement,
      $.using_statement,
      $.yield_statement
    ),

    empty_statement: $ => ';',
    expression_statement: $ => seq($._expression, ';'),

    _selection_statement: $ => choice(
      $.if_statement,
      $.switch_statement
    ),

    _iteration_statement: $ => choice(
      $.while_statement,
      $.do_statement
    ),

    _jump_statement: $ => choice(
      $.break_statement,
      $.continue_statement,
      $.goto_statement,
      $.return_statement,
      $.throw_statement
    ),

    try_statement: $ => seq(
      'try',
      $.statement_block,
      repeat($.catch_clause),
      optional($.finally_clause),
    ),

    catch_clause: $ => seq(
      'catch',
      optional($._exception_specifier),
      optional($._exception_filter),
      $.statement_block
    ),

    _exception_specifier: $ => seq('(', $._type, optional($.identifier_name), ')'),
    _exception_filter: $ => seq('when', '(', $._expression, ')'),
    finally_clause: $ => seq('finally', $.statement_block),

    checked_statement: $ => seq('checked', $.statement_block),
    unchecked_statement: $ => seq('unchecked', $.statement_block),
    lock_statement: $ => seq('lock', '(', $._expression, ')', $._embedded_statement),
    using_statement: $ => seq('using', '(', $._resource_acquisition, ')', $._embedded_statement),
    _resource_acquisition: $ => choice($.local_variable_declaration, $._expression),

    yield_statement: $ => seq(
      'yield',
      choice(
        seq('return', $._expression),
        'break'
      ),
      ';'
    ),

    if_statement: $ => seq(
      'if',
      '(',
      $.boolean_expression,
      ')',
      $._embedded_statement,
      optional(
        seq(
          'else',
          $._embedded_statement,
        )
      )
    ),

    switch_statement: $ => seq(
      'switch',
      '(',
      $._expression,
      ')',
      '{',
      repeat($.switch_section),
      '}'
    ),
    switch_section: $ => seq(repeat1($.switch_label), $._statement_list),
    switch_label: $ => choice(
      seq('case', $.constant_expression, ':'),
      seq('default', ':')
    ),

    while_statement: $ => seq('while', '(', $.boolean_expression, ')', $._embedded_statement),
    do_statement: $ => seq('do', $._embedded_statement, 'while', '(', $.boolean_expression, ')', ';'),

    break_statement: $ => seq('break', ';'),
    continue_statement: $ => seq('continue', ';'),
    return_statement: $ => seq('return', optional($._expression), ';'),
    throw_statement: $ => seq('throw', optional($._expression), ';'),

    goto_statement: $ => seq(
      'goto',
      choice(
        alias($.identifier_name, $.label_name),
        seq('case', $.constant_expression),
        'default'
      ),
      ';'
    ),

    // declaration statements

    _declaration_statement: $ => seq(
      choice(
        $.local_variable_declaration,
        $.local_constant_declaration
      ),
      ';'
    ),

    local_variable_declaration: $ => seq(
      $._local_variable_type,
      $._local_variable_declarators
    ),

    _local_variable_type: $ => choice(
      $._type,
      'var'
    ),

    _local_variable_declarators: $ => commaSep1($.local_variable_declarator),

    local_variable_declarator: $ => seq(
      $.identifier_name,
      optional(seq('=', $.local_variable_initializer))
    ),

    local_variable_initializer: $ => choice(
      $._expression,
      $.array_initalizer
    ),

    local_constant_declaration: $ => seq('const', $._type, $._constant_declarators)
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
