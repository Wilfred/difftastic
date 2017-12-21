const PREC = {
  COMMA: -1,
  DECLARATION: 1,
  COMMENT: 1,
  TERNARY: 1,
  OR: 2,
  AND: 3,
  PLUS: 4,
  MINUS: 4,
  REL: 5,
  TIMES: 6,
  SHIFT: 6,
  NOT: 8,
  NEG: 9,
  NAMESPACE: 9,
  INC: 10,
  NEW: 11,
  CALL: 12,
  MEMBER: 13,
  DEREF: 14
};

module.exports = grammar({
  name: 'php',

  externals: $ => [
    $._automatic_semicolon,
  ],

  conflicts: $ => [
    [$.declare_statement, $.expression_statement],
    [$.simple_variable, $.name],
    [$.simple_parameter, $.name],
    [$.variadic_parameter, $.name],
    [$.property_modifier, $._method_modifier],

    // Do we need these?
    [$.qualified_name, $.namespace_name],
    [$.namespace_name],
    [$.namespace_aliasing_clause, $.name],
  ],
  inline: $ => [
    $._statement,
    $._member_name,
    $._variable,
    $._callable_variable,
    $._callable_expression,
    $._selection_statement,
    $._iteration_statement,
    $._foreach_value,
    $._literal,
    $._class_type_designator,
    $._simple_assignment_expression,
    $._byref_assignment_expression,
  ],

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/,
    $.text_interpolation
  ],

  rules: {
    program: $ => seq(
      optional($.text),
      optional(seq(
        /<\?([pP][hH][pP]|=)/,
        repeat($._statement))),
      optional(seq(
        '?>',
        optional($.text)
      ))
    ),

    text_interpolation: $ => token(seq(
      '?>',
      repeat(choice(
        /[^<]/,
        /<[^?]/
      )),
      /<\?([pP][hH][pP]|=)/
    )),

    text: $ => repeat1(choice('<', /[^\s<]+[^<]*/)),

    _statement: $ => choice(
      $.compound_statement,
      $.named_label_statement,
      $.expression_statement,
      $._selection_statement,
      $._iteration_statement,
      $._jump_statement,
      $.try_statement,
      $.declare_statement,
      $.echo_statement,
      $.unset_statement,
      $.const_declaration,
      $.function_definition,
      $.class_declaration,
      $.interface_declaration,
      $.trait_declaration,
      $.namespace_definition,
      $.namespace_use_declaration,
      $.global_declaration,
      $.function_static_declaration
    ),

    _semicolon: $ => choice($._automatic_semicolon, ';'),

    function_static_declaration: $ => seq(
      'static', commaSep1($.static_variable_declaration), $._semicolon
    ),

    static_variable_declaration: $ => seq(
      $.variable_name, optional(seq('=', $._expression))
    ),

    _selection_statement: $ => choice(
      $.if_statement,
      $.switch_statement
    ),

    global_declaration: $ => seq(
      'global', commaSep1($.simple_variable), $._semicolon
    ),

    namespace_definition: $ => seq(
      'namespace',
      choice(
        seq($.name, $._semicolon),
        seq(optional($.name), $.compound_statement)
      )
    ),

    namespace_use_declaration: $ => seq(
      'use',
      choice(
        seq(optional($.namespace_function_or_const), commaSep1($.namespace_use_clause), $._semicolon),
        seq($.namespace_function_or_const, optional('\\'), $.namespace_name, '\\', '{', commaSep1($.namespace_use_group_clause_1), '}', $._semicolon),
        seq(optional('\\'), $.namespace_name, '\\', '{', commaSep1($.namespace_use_group_clause_2), '}', $._semicolon)
      )
    ),

    namespace_function_or_const: $ => choice(
      'function',
      'const'
    ),

    namespace_use_clause: $ => seq(
      $.qualified_name, optional($.namespace_aliasing_clause)
    ),

    qualified_name: $ => seq(
      optional($.namespace_name_as_prefix), $.name
    ),

    namespace_name_as_prefix: $ => prec.right(choice(
      '\\',
      seq(optional('\\'), $.namespace_name, '\\'),
      seq('namespace', '\\'),
      seq('namespace', optional('\\'), $.namespace_name, '\\')
    )),

    namespace_name: $ => seq($.name, repeat(seq('\\', $.name))),

    namespace_aliasing_clause: $ => seq(
      'as', $.name
    ),

    namespace_use_group_clause_1: $ => seq(
      $.namespace_name, optional($.namespace_aliasing_clause)
    ),

    namespace_use_group_clause_2: $ => seq(
      optional($.namespace_function_or_const), $.namespace_name, optional($.namespace_aliasing_clause)
    ),

    trait_declaration: $ => seq(
      'trait', $.name, '{', repeat($._trait_member_declaration), '}'
    ),

    _trait_member_declaration: $ => prec.right(choice(
      $.property_declaration,
      $.method_declaration,
      $.constructor_declaration,
      $.destructor_declaration,
      repeat1($.trait_use_clause)
    )),

    interface_declaration: $ => seq(
      'interface', $.name, optional($.interface_base_clause), '{', repeat($._interface_member_declaration), '}'
    ),

    interface_base_clause: $ => seq(
      'extends', commaSep1($.qualified_name)
    ),

    _interface_member_declaration: $ => choice(
      $.class_const_declaration,
      $.method_declaration
    ),

    class_declaration: $ => seq(
      optional($.class_modifier),
      'class',
      $.name,
      optional($.class_base_clause),
      optional($.class_interface_clause),
      '{',
      repeat($._class_member_declaration),
      '}',
      // TODO: Figure out if this needs to be more general, but it seems to be allowed after class declarations.
      optional($._semicolon)
    ),

    class_modifier: $ => choice(
      'abstract',
      'final'
    ),

    class_base_clause: $ => seq(
      'extends', $.qualified_name
    ),

    class_interface_clause: $ => seq('implements', commaSep1($.qualified_name)),

    _class_member_declaration: $ => choice(
      $.class_const_declaration,
      $.property_declaration,
      $.method_declaration,
      $.constructor_declaration,
      $.destructor_declaration,
      $.trait_use_clause
    ),

    class_const_declaration: $ => seq(
      optional($.visibility_modifier), 'const', commaSep1($.const_element), $._semicolon
    ),

    property_declaration: $ => seq(
      $.property_modifier, commaSep1($.property_element), $._semicolon
    ),

    property_modifier: $ => choice(
      'var',
      seq($.visibility_modifier, optional($.static_modifier)),
      seq($.static_modifier, optional($.visibility_modifier))
    ),

    property_element: $ => seq(
      $.variable_name, optional($.property_initializer)
    ),

    property_initializer: $ => seq(
      '=', $._expression
    ),

    method_declaration: $ => choice(
      seq(repeat($._method_modifier), $.function_definition),
      seq(repeat1($._method_modifier), $._function_definition_header, $._semicolon)
    ),

    constructor_declaration: $ => seq(
      repeat1($._method_modifier), 'function', optional('&'), '__construct', $._parameters, $.compound_statement
    ),

    destructor_declaration: $ => seq(
      repeat1($._method_modifier), 'function', optional('&'), '__destruct', '(', ')', $.compound_statement
    ),

    _method_modifier: $ => choice(
      $.visibility_modifier,
      $.class_modifier,
      $.static_modifier
    ),

    static_modifier: $ => 'static',

    trait_use_clause: $ => seq(
      'use', commaSep1($.qualified_name), $.trait_use_specification
    ),

    trait_use_specification: $ => choice(
      $._semicolon,
      seq('{', repeat($._trait_select_and_alias_clause), '}')
    ),

    _trait_select_and_alias_clause: $ => choice(
      $.trait_select_instead_of_clause,
      $.trait_alias_as_clause
    ),

    trait_select_instead_of_clause: $ => prec.left(seq(
      $.name, 'insteadof', $.name
    )),

    trait_alias_as_clause: $ => prec.right(seq(
      $.name,
      'as',
      choice(
        seq(optional($.visibility_modifier), $.name),
        seq($.visibility_modifier, optional($.name))
      )
    )),

    visibility_modifier: $ => choice(
      'public',
      'protected',
      'private'
    ),

    function_definition: $ => seq(
      $._function_definition_header,
      $.compound_statement
    ),

    _function_definition_header: $ => seq(
      'function', optional('&'), $.name, $._parameters, optional($.return_type)
    ),

    _parameters: $ => seq(
      '(',
      choice(
        seq(commaSep($.simple_parameter), optional(seq(',', $.variadic_parameter))),
        $.variadic_parameter
      ),
      ')'
    ),

    simple_parameter: $ => seq(
      optional($.type_declaration), optional('&'), $.variable_name, optional($.default_argument_specifier)
    ),

    type_declaration: $ => seq(
      optional('?'),
      $.base_type_declaration
    ),

    base_type_declaration: $ => choice(
      'array',
      'callable',
      'iterable',
      $.scalar_type,
      $.qualified_name
    ),

    scalar_type: $ => choice(
      'bool',
      'float',
      'int',
      'string'
    ),

    return_type: $ => seq(
      ':',
      choice(
        $.type_declaration,
        'void'
      )
    ),

    variadic_parameter: $ => seq(
      optional($.type_declaration), optional('&'), '...', $.variable_name
    ),

    default_argument_specifier: $ => seq(
      '=', $._expression
    ),

    const_declaration: $ => seq(
      'const', commaSep1($.const_element), $._semicolon
    ),

    const_element: $ => seq(
      $.name, '=', $._expression
    ),

    echo_statement: $ => seq(
      'echo', $._expressions, $._semicolon
    ),

    unset_statement: $ => seq(
      'unset', '(', commaSep1($._variable), ')', $._semicolon
    ),

    declare_statement: $ => seq(
      'declare', '(', $.declare_directive, ')',
      choice(
        $._statement,
        seq(':', repeat($._statement), 'enddeclare', $._semicolon),
        $._semicolon)
    ),

    declare_directive: $ => seq(
      choice('ticks', 'encoding', 'strict_types'),
      '=',
      $._literal
    ),

    _literal: $ => choice(
      $.integer,
      $.float,
      $.string
    ),

    float: $ => {
      const decimal_digits = /\d+/
      const signed_integer = seq(optional(choice('-','+')), decimal_digits)
      const exponent_part = seq(choice('e', 'E'), signed_integer)

      const decimal_integer_literal = choice(
        '0',
        seq(/[1-9]/, optional(decimal_digits))
      )

      return prec.right(choice(
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq('.', decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, optional(exponent_part))
      ))
    },

    try_statement:  $ => seq(
      'try',
      $.compound_statement,
      choice(
        seq(repeat1($.catch_clause), $.finally_clause),
        repeat1($.catch_clause),
        repeat1($.finally_clause))
    ),

    catch_clause: $ => seq(
      'catch', '(', $.qualified_name, $.variable_name, ')', $.compound_statement
    ),

    finally_clause: $ => seq(
      'finally', $.compound_statement
    ),

    _jump_statement: $ => choice(
      $.goto_statement,
      $.continue_statement,
      $.break_statement,
      $.return_statement,
      $.throw_statement
    ),

    goto_statement: $ => seq(
      'goto', $.name, $._semicolon
    ),

    continue_statement: $ => seq(
      'continue', optional($._breakout_level), $._semicolon
    ),

    break_statement: $ => seq(
      'break', optional($._breakout_level), $._semicolon
    ),

    _breakout_level: $ => choice(
      $.integer,
      seq('(', $._breakout_level, ')')
    ),

    integer: $ => {
      const decimal = /1-9\d*/
      const octal = /0[0-7]+/
      const hex = /0[xX][0-9|a-f|A-F]+/
      const binary = /0[bB][01]+/
      return choice(
        decimal,
        octal,
        hex,
        binary
      )
  },

    return_statement: $ => seq(
      'return', optional($._expression), $._semicolon
    ),

    throw_statement: $ => seq(
      'throw', $._expression, $._semicolon
    ),

    _iteration_statement: $ => choice(
      $.while_statement,
      $.do_statement,
      $.for_statement,
      $.foreach_statement
    ),

    while_statement: $ => seq(
      'while', '(', $._expression, ')',
      choice(
        $._semicolon,
        $._statement,
        seq(':', repeat($._statement), 'endwhile', $._semicolon)
      )
    ),

    do_statement: $ => seq(
      'do', $._statement, 'while', '(', $._expression, ')', $._semicolon
    ),

    for_statement: $ => seq(
      'for', '(', optional($._expressions), ';', optional($._expressions), ';', optional($._expressions), ')',
      choice(
        $._semicolon,
        $._statement,
        seq(':', repeat($._statement), 'endfor', $._semicolon)
      )
    ),

    _expressions: $ => choice(
      $._expression,
      $.sequence_expression
    ),

    sequence_expression: $ => prec(PREC.COMMA, seq(
     $._expression, ',', choice($.sequence_expression, $._expression))
   ),

    foreach_statement: $ => seq(
      'foreach', '(', $._expression, 'as', optional(seq($._expression, '=>')), $._foreach_value, ')',
      choice(
        $._semicolon,
        $._statement,
        seq(':', repeat($._statement), 'endforeach', $._semicolon)
      )
    ),

    _foreach_value: $ => choice(
      seq(optional('&'), $._expression),
      $.list_literal
    ),

    if_statement: $ => prec.right(seq(
      'if', '(', $._expression ,')',
      choice(
        seq($._statement, repeat(alias($.else_if_clause_1, $.else_if_clause)), optional(alias($.else_clause_1, $.else_clause))),
        seq(':', repeat($._statement), repeat(alias($.else_if_clause_2, $.else_if_clause)), optional(alias($.else_clause_2, $.else_clause)), 'endif', $._semicolon)
      )
    )),

    else_if_clause_1: $ => seq(
      'elseif', '(', $._expression, ')', $._statement
    ),

    else_clause_1: $ => seq(
      'else', $._statement
    ),

    else_if_clause_2: $ => seq(
      'elseif', '(', $._expression, ')', seq(':', repeat($._statement))
    ),

    else_clause_2: $ => seq(
      'else', seq(':', repeat($._statement))
    ),

    switch_statement: $ => seq(
      'switch', '(', $._expression, ')',
      choice('{', ':'),
      repeat(choice($.case_statement, $.default_statement)),
      choice('}', seq('endswitch', $._semicolon))
    ),

    case_statement: $ => seq(
      'case', $._expression, choice(':', ';'), repeat($._statement)
    ),

    default_statement: $ => seq(
      'default', choice(':', ';'), repeat($._statement)
    ),


    compound_statement: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    named_label_statement: $ => seq(
      $.name,
      ':'
    ),

    expression_statement: $ => seq(
      $._expression,
      $._semicolon
    ),

    _expression: $ => choice(
      $.assignment_expression,
      $.yield_expression,
      $._unary_expression,
      $.binary_expression,
      $.include_expression,
      $.include_once_expression,
      $.require_expression,
      $.require_once_expression
    ),

    _unary_expression: $ => choice(
      $.clone_expression,
      $._primary_expression,
      $.exponentiation_expression,
      $.unary_op_expression,
      $.cast_expression
    ),

    unary_op_expression: $ => choice(
      seq('@', $._expression),
      ...[
      ['+', PREC.NEG],
      ['-', PREC.NEG],
      ['~', PREC.NEG],
      ['!', PREC.NEG],
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq(operator, $._unary_expression))
    )),

    exponentiation_expression: $ => prec.right(PREC.TIMES, seq(
      choice($.clone_expression, $._primary_expression),
      '**',
      choice($.exponentiation_expression, $.clone_expression, $._primary_expression)
    )),

    clone_expression: $ => seq(
      'clone', $._primary_expression
    ),

    _primary_expression: $ => choice(
      $._variable,
      $.class_constant_access_expression,
      $.qualified_name,
      $._literal,
      $.array_creation_expression,
      $.intrinsic,
      $.anonymous_function_creation_expression,
      $.object_creation_expression,
      $.update_expression,
      $.shell_command_expression,
      seq('(', $._expression, ')')
    ),

    class_constant_access_expression: $ => seq(
      $._scope_resolution_qualifier, '::', $.name
    ),

    intrinsic: $ => choice(
      $.empty_intrinsic,
      $.eval_intrinsic,
      $.exit_intrinsic,
      $.isset_intrinsic,
      $.print_intrinsic
    ),

    empty_intrinsic: $ => seq(
      'empty', '(', $._expression, ')'
    ),

    eval_intrinsic: $ => seq(
      'eval', '(', $._expression, ')'
    ),

    exit_intrinsic: $ => prec.right(seq(
      choice('exit', 'die'), optional(seq('(', optional($._expression), ')'))
    )),

    isset_intrinsic: $ => seq(
      'isset', '(', commaSep1($._variable), ')'
    ),

    print_intrinsic: $ => seq(
      'print', $._expression
    ),

    anonymous_function_creation_expression: $ => seq(
      optional('static'), 'function', optional('&'), $._parameters, optional($.anonymous_function_use_clause), optional($.return_type), $.compound_statement
    ),

    anonymous_function_use_clause: $ => seq(
      'use', '(', commaSep1(seq(optional('&'), $.variable_name)), ')'
    ),

    object_creation_expression: $ => prec.right(PREC.NEW, choice(
      seq('new', $._class_type_designator, optional($.arguments)),
      seq('new', 'class', optional($.arguments), optional($.class_base_clause), optional($.class_interface_clause), '{', repeat($._class_member_declaration), '}')
    )),

    _class_type_designator: $ => choice(
      $.qualified_name,
      $.new_variable
    ),

    new_variable: $ => choice(
      $.simple_variable,
      seq($.new_variable, '[', optional($._expression), ']'),
      seq($.new_variable, '{', $._expression, '}'),
      seq($.new_variable, '->', $._member_name),
      seq($.qualified_name, '::', $.simple_variable),
      seq($.relative_scope, '::', $.simple_variable),
      seq($.new_variable, '::', $.simple_variable)
    ),

    update_expression: $ => prec.left(PREC.INC, choice(
      seq($._variable, '++'),
      seq($._variable, '--'),
      seq('++', $._variable),
      seq('--', $._variable)
    )),

    shell_command_expression: $ => token(seq(
      '`', double_quote_chars(), '`'
    )),

    cast_expression: $ => seq(
      '(', $.cast_type, ')', $._unary_expression
    ),

    cast_type: $ => choice(
      'array',
      'binary',
      'bool',
      'boolean',
      'double',
      'int',
      'integer',
      'float',
      'object',
      'real',
      'string',
      'unset'
    ),

    _simple_assignment_expression: $ => seq(
      seq(choice($._variable, $.list_literal), '=', $._expression)
    ),

    _byref_assignment_expression: $ => seq(
      $._variable, '=', '&', $._variable
    ),

    conditional_expression: $ => prec.right(PREC.TERNARY, seq(
      choice($.binary_expression, $._unary_expression), '?', optional($._expression), ':', $._expression
    )),

    assignment_expression: $ => choice(
      $.conditional_expression,
      $._simple_assignment_expression,
      $._byref_assignment_expression,
      choice(...[
        ['**=', PREC.TIMES],
        ['*=', PREC.TIMES],
        ['/=', PREC.TIMES],
        ['+=', PREC.PLUS],
        ['-=', PREC.PLUS],
        ['.=', PREC.PLUS],
        ['<<=', PREC.SHIFT],
        ['>>=', PREC.SHIFT],
        ['&=', PREC.AND],
        ['^=', PREC.AND],
        ['|=', PREC.OR]
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq($._variable, operator, $._expression))
    ))),

    _variable: $ => choice(
      $._callable_variable,
      $.scoped_property_access_expression,
      $.member_access_expression,
    ),

    member_access_expression: $ => prec(PREC.MEMBER, seq(
      $.dereferencable_expression, '->', $._member_name
    )),

    scoped_property_access_expression: $ => prec(PREC.MEMBER, seq(
      $._scope_resolution_qualifier, '::', $.simple_variable
    )),

    list_literal: $ => seq(
      'list',
      '(',
      commaSep(optional(choice(
        choice($.list_literal, $._variable),
        seq($._expression, '=>', choice($.list_literal, $._variable))
      ))),
      ')'
    ),

    _callable_variable: $ => choice(
      $.simple_variable,
      $.subscript_expression,
      $.member_call_expression,
      $.scoped_call_expression,
      $.function_call_expression
    ),

    function_call_expression: $ => prec(PREC.CALL, choice(
      seq($.qualified_name, $.arguments),
      seq($._callable_expression, $.arguments)
    )),

    _callable_expression: $ => choice(
      $._callable_variable,
      seq('(', $._expression, ')'),
      $.array_creation_expression,
      $.string
    ),

    scoped_call_expression: $ => prec(PREC.CALL, seq(
      $._scope_resolution_qualifier, '::', $._member_name, $.arguments
    )),

    _scope_resolution_qualifier: $ => choice(
      $.relative_scope,
      $.qualified_name,
      $.dereferencable_expression
    ),

    relative_scope: $ => choice(
      'self',
      'parent',
      'static'
    ),

    arguments: $ => seq(
      '(',
      commaSep(choice($.variadic_unpacking, $._expression)),
      ')'
    ),

    member_call_expression: $ => prec(PREC.CALL, seq(
      $.dereferencable_expression,
      '->',
      $._member_name,
      $.arguments
    )),

    variadic_unpacking: $ => seq('...', $._expression),

    _member_name: $ => choice(
      $.name,
      $.simple_variable,
      seq('{', $._expression, '}')
    ),

    subscript_expression: $ => seq(
      $.dereferencable_expression,
      choice(
        seq('[', optional($._expression), ']'),
        seq('{', $._expression, '}')
      )
    ),

    dereferencable_expression: $ => prec(PREC.DEREF, choice(
      $._variable,
      seq('(', $._expression, ')'),
      $.array_creation_expression,
      $.string
    )),

    array_creation_expression: $ => choice(
      seq('array', '(', commaSep($.array_element_initializer), optional(','), ')'),
      seq('[', commaSep($.array_element_initializer), optional(','), ']')
    ),

    string: $ => {
      const b_prefix = /[bB]/
      const single_quote_chars = repeat(/\\'|\\\\|\\?[^'\\]/)
      const single_quote_string = seq(
        optional(b_prefix), "'", single_quote_chars, "'"
      )

      const double_quote_string = seq(
        optional(b_prefix), '"', double_quote_chars(), '"'
      )

      return token(choice(
        single_quote_string,
        double_quote_string
        // heredoc_string,
        // nowdoc_string,
      ))
    },

    simple_variable: $ => choice(
      $.variable_name,
      seq('$', $.simple_variable),
      seq('$', '{', $._expression, '}')
    ),

    variable_name: $ => seq('$', $.name),

    yield_expression: $ => choice(
      seq('yield', $.array_element_initializer),
      seq('yield', 'from', $._expression)
    ),

    array_element_initializer: $ => prec.right(choice(
      seq(optional('&'), $._expression),
      seq($._expression, '=>', optional('&'), $._expression)
    )),

    binary_expression: $ => choice(
      prec.left(PREC.REL, seq($._unary_expression, 'instanceof', $._class_type_designator)),
      ...[
      ['and', PREC.AND],
      ['or', PREC.OR],
      ['xor', PREC.OR],
      ['||', PREC.OR],
      ['&&', PREC.AND],
      ['|', PREC.OR],
      ['^', PREC.AND],
      ['&', PREC.AND],
      ['??', PREC.TERNARY],
      ['==', PREC.REL],
      ['!=', PREC.REL],
      ['<>', PREC.REL],
      ['===', PREC.REL],
      ['!==', PREC.REL],
      ['<', PREC.REL],
      ['>', PREC.REL],
      ['<=', PREC.REL],
      ['>=', PREC.REL],
      ['<=>', PREC.REL],
      ['<<', PREC.SHIFT],
      ['>>', PREC.SHIFT],
      ['+', PREC.PLUS],
      ['-', PREC.MINUS],
      ['.', PREC.PLUS],
      ['*', PREC.TIMES],
      ['/', PREC.TIMES],
      ['%', PREC.TIMES],
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq($._expression, operator, $._expression))
    )),

    include_expression: $ => seq(
      'include',
      $._expression
    ),

    include_once_expression: $ => seq(
      'include_once',
      $._expression
    ),

    require_expression: $ => seq(
      'require',
      $._expression
    ),

    require_once_expression: $ => seq(
      'require_once',
      $._expression
    ),

    name: $ => {
      return /[_a-zA-Z\u0080-\u00ff][_a-zA-Z\u0080-\u00ff\d]*/
    },

    comment: $ => token(choice(
      seq(choice('//', '#'), /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
})

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}

function double_quote_chars() {
      const dq_simple_escapes = /\\"|\\\\|\\\$|\\e|\\f|\\n|\\r|\\t|\\v/
      const octal_digit = /0-7/
      const dq_octal_escapes = seq('\\', octal_digit, optional(octal_digit), optional(octal_digit))
      const hex_digit = /\d|a-f|A-F/
      const dq_hex_escapes = seq(
        /\\[xX]/,
        hex_digit,
        optional(hex_digit)
      )

      const dq_unicode_escapes = seq('\\u{', repeat1(hex_digit), '}')
      const dq_escapes = choice(dq_simple_escapes, dq_octal_escapes, dq_hex_escapes, dq_unicode_escapes)
      return repeat(choice(dq_escapes, /[^"\\]|\\[^"\\$efnrtvxX0-7]/))
}
