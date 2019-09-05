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
    [$.generic_name, $._expression],
    [$.generic_name, $._identifier_or_global],
    [$.if_statement],
    [$._type, $.type_parameter_list],
    [$.assignment_expression],
    [$.assignment_expression, $.call_expression]
  ],

  inline: $ => [
    $.class_type,
    $.return_type
  ],

  word: $ => $.identifier_name,

  rules: {
    
    compilation_unit: $ => seq(
      optional(BYTE_ORDER_MARK),
      repeat($._declaration)
    ),

    _declaration: $ => choice(
      $._global_attributes,
      $.class_declaration,
      $.constant_declaration,
      $.delegate_declaration,
      $.destructor_declaration,
      $.enum_declaration,
      $.event_declaration,
      $.extern_alias_directive,
      $.field_declaration,
      $.if_directive,
      $.region_directive,
      $.endregion_directive,
      $.indexer_declaration,
      $.interface_declaration,
      $.method_declaration,
      $.namespace_declaration,
      $.operator_declaration,
      $.conversion_operator_declaration,
      $.property_declaration,
      $.struct_declaration,
      $.using_directive
    ),

    // types

    _type: $ => choice(
      $.predefined_type,
      $.identifier_name,
      $.qualified_name,
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

    type_parameter_list: $ => seq('<', commaSep1($.identifier_name), '>'),

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

    name_equals: $ => seq($._identifier_or_global, '='),

    // namespace

    namespace_declaration: $ => seq(
      'namespace',
      choice(
        $.qualified_name,
        $.identifier_name
      ),
      '{',
      repeat($._declaration),
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
      seq('{', $._accessor_declarations, '}', optional(seq('=', $._initializer, ';'))),
      seq('=>', $._expression, ';')
    ),

    _accessor_declarations: $ => seq(
      $.accessor_declaration,
      optional($.accessor_declaration)
    ),

    accessor_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      choice('get', 'set'),
      choice($.block, ';')
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
      $.class_body,
      optional(';')
    ),

    class_body: $ => seq(
      '{',
      repeat(choice(
        $._declaration,
        $.constructor_declaration
      )),
      '}'
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
      'where', $._identifier_or_global, ':', $.type_parameter_constraints
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

    add_accessor_declaration: $ => seq(optional($._attributes), 'add', $.block),
    remove_accessor_declaration: $ => seq(optional($._attributes), 'remove', $.block),

    // operator declarations

    operator_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      $._type,
      'operator',
      $.overloadable_operator,
      $.parameter_list,
      $._method_body,
    ),

    conversion_operator_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      choice(
        'implicit',
        'explicit'
      ),
      'operator',
      $._type,
      $.parameter_list,
      $._method_body,
    ),

    overloadable_operator: $ => choice(
      '!',
      '~',
      '++',
      '--',
      'true',
      'false',
      '+', '-',
      '*', '/',
      '%', '^',
      '|', '&',
      '<<', '>>',
      '==', '!=',
      '>', '<',
      '>=', '<='
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
      $.class_body,
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
      optional(seq('=', $._expression))
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

    _formal_parameter_list: $ => commaSep1(choice(
      $.parameter,
      $.parameter_array
    )),

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
      commaSep(choice(
        $.identifier_name,
        $.qualified_name,
        $._literal
      )),
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

    variable_declarator: $ => seq(
      $.identifier_name,
      optional(seq('=', $._initializer))
    ),

    _initializer: $ => choice(
      $._expression,
      $.array_initalizer
    ),

    array_initalizer: $ => seq('{', commaSep1($._initializer), '}'),

    // constants

    constant_declaration: $ => seq(
      optional($._attributes),
      optional($.modifiers),
      'const',
      $._type,
      commaSep1($.constant_declarator),
      ';'
    ),

    constant_declarator: $ => seq($.identifier_name, '=', $._expression),

    // expressions

    _expression: $ => choice(
      $._literal,
      $.assignment_expression,
      $.identifier_name,
      $.qualified_name,
      $.ternary_expression,
      $.binary_expression,
      $.unary_expression,
      $.postfix_expression,
      $.parenthesized_expression,
      $.object_creation_expression,
      $.call_expression
    ),

    assignment_expression: $ => seq(
      $._expression,
      $.assignment_operator,
      $._expression
    ),

    assignment_operator: $ =>  choice('=', '+=', '-=', '*=', '/=', '%=', '&=', '^=', '|=', '<<=', '>>=', '??='),

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

    call_expression: $ => seq(
      $._expression,
      $.argument_list
    ),

    object_creation_expression: $ => seq(
      'new',
      $._type,
      $.argument_list
    ),

    argument_list: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    // literals

    _literal: $ => choice(
      $.boolean_literal,
      $.character_literal,
      $.integer_literal,
      $.null_literal,
      $.real_literal,
      $.string_literal,
      $.verbatim_string_literal
    ),

    boolean_literal: $ => choice(
      'true',
      'false'
    ),

    character_literal: $ => seq(
      "'",
      choice(/[^'\\]/, $.escape_sequence),
      "'"
    ),

    escape_sequence: $ => token(choice(
      /\\x[0-9a-fA-F][0-9a-fA-F]?[0-9a-fA-F]?[0-9a-fA-F]?/,
      /\\u[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
      /\\U[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
      /\\[^xuU]/,
    )),

    integer_literal: $ => seq(
      choice(
        (/[0-9]+/),
        (/0x[0-9a-fA-F]+/)
      ),
      optional($._integer_type_suffix)
    ),

    _integer_type_suffix: $ => (/u|U|l|L|ul|UL|uL|Ul|lu|LU|Lu|lU/),

    null_literal: $ => 'null',

    real_literal: $ => {
      const suffix = /[fFdDmM]/;
      const exponent = /[eE][+-]?[0-9]+/;
      return token(choice(
        seq(
          (/[0-9]+/),
          '.',
          (/[0-9]+/),
          optional(exponent),
          optional(suffix)
        ),
        seq(
          '.',
          (/[0-9]+/),
          optional(exponent),
          optional(suffix)
        ),
        seq(
          (/[0-9]+/),
          exponent,
          optional(suffix)
        ),
        seq(
          (/[0-9]+/),
          suffix
        )
      ))
    },

    string_literal: $ => seq(
      '"',
      repeat(choice(
        /[^"\\\n]+/,
        $.escape_sequence
      )),
      '"'
    ),

    verbatim_string_literal: $ => seq(
      '@"',
      /[^"]*/,
      '"'
    ),

    // names

    identifier_name: $ => /[a-zA-Z_][a-zA-Z_0-9]*/, // identifier_token in Roslyn

    _identifier_or_global: $ => choice('global', $.identifier_name), // identifier_name in Roslyn

    _name: $ => choice(
      $.alias_qualified_name,
      $.qualified_name,
      $._simple_name
    ),

    alias_qualified_name: $ => seq($._identifier_or_global, '::', $._simple_name),

    _simple_name: $ => choice(
      $.generic_name,
      $._identifier_or_global
    ),

    generic_name: $ => seq($.identifier_name, $.type_argument_list),

    type_argument_list: $ => seq('<', commaSep1($._type), '>'),

    qualified_name: $ => seq($._name, '.', $._simple_name),

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
      $.block
    ),

    destructor_declaration: $ => seq(
      optional($._attributes),
      optional('extern'),
      '~',
      $.identifier_name,
      $.parameter_list,
      $.block
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
      $._method_body,
    ),

    _method_body: $ => choice(
      $.block,
      seq('=>', $._expression, ';'),
      ';'
    ),

    // Statements

    _statement: $ => choice(
      $.block,
      $.break_statement,
      $.checked_statement,
      // $.common_for_each_statement,
      $.continue_statement,
      $.do_statement,
      $.empty_statement,
      $.expression_statement,
      // $.fixed_statement,
      // $.for_statement,
      $.goto_statement,
      $.if_statement,
      $._labeled_statement,
      $._declaration_statement,
      $.lock_statement,
      $.return_statement,
      $.switch_statement,
      $.throw_statement,
      $.try_statement,
//      $.unsafe_statement,
      $.using_statement,
      $.while_statement,
      $.yield_statement,
    ),

    block: $ => seq('{', repeat($._statement), '}'),

    break_statement: $ => seq('break', ';'),

    checked_statement: $ => seq(choice('checked', 'unchecked'), $.block),

    continue_statement: $ => seq('continue', ';'),

    do_statement: $ => seq('do', $._statement, 'while', '(', $._expression, ')', ';'),

    empty_statement: $ => ';',

    expression_statement: $ => seq($._expression, ';'),

    goto_statement: $ => seq(
      'goto',
      choice(
        alias($.identifier_name, $.label_name),
        seq('case', $._expression),
        'default'
      ),
      ';'
    ),

    if_statement: $ => seq(
      'if',
      '(',
      $._expression,
      ')',
      $._statement,
      optional(
        seq(
          'else',
          $._statement,
        )
      )
    ),

    _labeled_statement: $ => seq(
      alias($.identifier_name, $.label_name),
      ':',
      $._statement
    ),

    _declaration_statement: $ => seq(
      choice(
        $.local_variable_declaration,
        $.local_constant_declaration
      ),
      ';'
    ),

    lock_statement: $ => seq('lock', '(', $._expression, ')', $._statement),

    return_statement: $ => seq('return', optional($._expression), ';'),

    switch_statement: $ => seq(
      'switch',
      '(',
      $._expression,
      ')',
      '{',
      repeat($.switch_section),
      '}'
    ),
    switch_section: $ => seq(repeat1($.switch_label), repeat1($._statement)),
    switch_label: $ => choice(
      seq('case', $._expression, ':'),
      seq('default', ':')
    ),

    throw_statement: $ => seq('throw', optional($._expression), ';'),

    try_statement: $ => seq(
      'try',
      $.block,
      repeat($.catch_clause),
      optional($.finally_clause),
    ),

    catch_clause: $ => seq(
      'catch',
      optional($._exception_specifier),
      optional($._exception_filter),
      $.block
    ),

    _exception_specifier: $ => seq('(', $._type, optional($.identifier_name), ')'),
    _exception_filter: $ => seq('when', '(', $._expression, ')'),
    finally_clause: $ => seq('finally', $.block),

    using_statement: $ => seq('using', '(', $._resource_acquisition, ')', $._statement),
    _resource_acquisition: $ => choice($.local_variable_declaration, $._expression),

    while_statement: $ => seq('while', '(', $._expression, ')', $._statement),

    yield_statement: $ => seq(
      'yield',
      choice(
        seq('return', $._expression),
        'break'
      ),
      ';'
    ),

    // declaration statements

    local_variable_declaration: $ => seq(
      choice($._type, 'var'),
      commaSep1($.variable_declarator)
    ),

    local_constant_declaration: $ => seq('const', $._type, commaSep1($.constant_declarator)),

    // preproc directives

    if_directive: $ => seq(
      '#if',
      $.identifier_name,
      repeat($._declaration),
      // repeat($.elsif_directive),
      optional($.else_directive),
      '#endif'
    ),

    else_directive: $ => seq(
      '#else',
      repeat($._declaration)
    ),

    region_directive: $ => seq(
      '#region',
      $.region_name,
    ),

    region_name: $ => /.*/,

    endregion_directive: $ => '#endregion'
  }
})

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function commaSep1(rule) {
  return seq(
    rule,
    repeat(seq(
      ',',
      rule
    ))
  )
}
