const DIGITS = token(sep1(/[0-9]+/, /_+/))
const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, '_'))
const PREC = {
  COMMA: -1,
  DECLARATION: 1,
  COMMENT: 1,
  ASSIGN: 0,
  OBJECT: 1,
  TERNARY: 1,
  OR: 2,
  AND: 3,
  PLUS: 4,
  REL: 5,
  TIMES: 6,
  TYPEOF: 7,
  DELETE: 7,
  VOID: 7,
  NOT: 8,
  NEG: 9,
  INC: 10,
  NEW: 11,
  CALL: 12,
  MEMBER: 13
};

module.exports = grammar({
  name: 'java',

  extras: $ => [
    $.comment,
    /\s/
  ],

  inline: $ => [
    $.formal_parameters,
    $._numeric_type,
    $._block_statement,
    $._ambiguous_name,
    $._class_or_interface_type,
    $._primitive_type,
    $._class_member_declaration,
    $._class_body_declaration,
    $._parenthesized_argument_list,
    $._variable_initializer
  ],

  conflicts: $ => [
    [$.modifier],
    [$.class_literal, $._unann_type], // TODO: remove
    [$._unann_type, $.class_literal, $.array_access],
    [$.unann_class_or_interface_type, $.method_reference],
    [$.unann_class_or_interface_type, $.scoped_identifier],
    [$.constant_declaration, $.local_variable_declaration],
    [$.variable_declarator_id],
    [$._lambda_parameters, $.inferred_parameters],
    [$._expression, $.inferred_parameters],
    [$._expression, $.inferred_parameters, $._unann_type], // TODO: remove (can't occur alone)
    [$._expression, $._unann_type],
    [$.scoped_identifier, $.scoped_type_identifier],
    [$._expression, $.generic_type],
    [$._expression, $.for_init] // TODO: remove to allow non variable declarations in for_init to parse
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => prec(1, choice(
      $._expression_statement,
      $._declaration,
      $._method_statement
    )),

    _method_statement: $ => choice(
      $.labeled_statement,
      $.if_then_else_statement,
      $.while_statement,
      $.for_statement,
      $.block,
      $._semicolon,
      $.assert_statement,
      $.switch_statement,
      $.do_statement,
      $.break_statement,
      $.continue_statement,
      $.return_statement,
      $.synchronized_statement,
      $.throw_statement,
      $.try_statement
    ),

    _expression_statement: $ => seq(
      $._expression,
      $._semicolon
    ),

    _semicolon: $ => ';',

    _literal: $ => choice(
      $.integer_literal,
      $.floating_point_literal,
      $.boolean_literal,
      $.character_literal,
      $.string_literal,
      $.null_literal
    ),

    integer_literal: $ => choice(
      $.decimal_integer_literal,
      $.hex_integer_literal,
      $.octal_integer_literal,
      $.binary_integer_literal,
      $.long_integer_literal
    ),

    decimal_integer_literal: $ => DIGITS,

    hex_integer_literal: $ => token(seq(
        choice('0x', '0X'),
        HEX_DIGITS
    )),

    octal_integer_literal: $ => token(seq(
      choice('0o', '0O'),
      sep1(/[0-7]+/, '_')
      )),

    binary_integer_literal: $ => token(seq(
      choice('0b', '0B'),
      sep1(/[01]+/, '_')
    )),

    long_integer_literal: $ => token(seq(
      sep1(/[0-9]+/, '_'),
      choice('l', 'L'),
    )),

    floating_point_literal: $ => choice(
      $.decimal_floating_point_literal,
      $.hex_floating_point_literal
    ),

    decimal_floating_point_literal: $ => token(
      choice(
        seq(DIGITS, '.', optional(DIGITS), optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
        seq('.', DIGITS, optional(seq((/[eE]/), optional(choice('-','+')), DIGITS)), optional(/[fFdD]/)),
        seq(DIGITS, /[eE]/, optional(choice('-','+')), DIGITS, optional(/[fFdD]/)),
        seq(DIGITS, optional(seq((/[eE]/), optional(choice('-','+')), DIGITS)), (/[fFdD]/))
      )),

    hex_floating_point_literal: $ => token(seq(
      choice('0x', '0X'),
      choice(
        seq(HEX_DIGITS, optional('.')),
        seq(optional(HEX_DIGITS), '.', HEX_DIGITS)
      ),
        /[eE]/,
      optional(choice('-','+')),
      DIGITS,
      optional(/[fFdD]/)
    )),

    boolean_literal: $ => choice($.true, $.false),

    true: $ => 'true',

    false: $ => 'false',

    character_literal: $ => seq("'", repeat(choice(/[^\'\n]/, /\\./, /\\\n/)), "'"),

    string_literal: $ => token(choice(
      seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),
      // TODO: support multiline string literals by debugging the following:
      // seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"', '+', /\n/, '"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)))
    )),

    null_literal: $ => 'null',

    ascii: $ => choice(
      'NUL', // (null)
      'SOH', // (start of heading)
      'STX', // (start of text)
      'ETX', // (end of text)
      'EOT', // (end of transmission)
      'ENQ', // (enquiry)
      'ACK', // (acknowledge)
      'BEL', // (bell)
      'BS', // (backspace)
      'TAB', // (horizontal tab)
      'LF', // (NL line feed, new line)
      'VT', // (vertical tab)
      'FF', // (NP form feed, new page)
      'CR', // (carriage return)
      'SO', // (shift out)
      'SI', // (shift in)
      'DLE', // (data link escape)
      'DC1', // (device control 1)
      'DC2', // (device control 2)
      'DC3', // (device control 3)
      'DC4', // (device control 4)
      'NAK', // (negative acknowledge)
      'SYN', // (synchronous idle)
      'ETB', // (end of trans. block)
      'CAN', // (cancel)
      'EM', // (end of medium)
      'SUB', // (substitute)
      'ESC', // (escape)
      'FS', // (file separator)
      'GS', // (group separator)
      'RS', // (record separator)
      'US' // (unit separator)
    ),

    white_space: $ => choice(
      $.space,
      $.horizontal_tab,
      $.form_feed,
      $.line_terminator
    ),

    space: $ => 'SP',
    horizontal_tab: $ => 'HT',
    form_feed: $ => 'FF',

    line_terminator: $ => choice(
      $.newline,
      $.return,
      seq($.return, $.newline)
    ),

    newline: $ => 'LF',
    return: $ => 'CR',

    unicode_escape: $ => seq(
      /\\/,
      'u',
      /[A-Fa-f0-9]+/,
      /[A-Fa-f0-9]+/,
      /[A-Fa-f0-9]+/,
      /[A-Fa-f0-9]+/
    ),

    escape_sequences: $ => choice(
      $.char_escapes,
      $.octal_escapes
    ),

    // currently, literals.java returns char not char_escapes in tree
    char_escapes: $ => choice(
      'b',
      't',
      'n',
      'f',
      'r',
      '"',
      "'",
      '\\'
    ),

    octal_escapes: $ => choice(
      seq(/\\/, /[0-7]+/),
      seq(/\\/, /[0-7]+/, /[0-7]+/),
      seq(/\\/, /[0-3]/, /[0-7]+/, /[0-7]+/)
    ),

    _expression: $ => choice(
      $.assignment_expression,
      $.binary_expression,
      $.lambda_expression,
      $.ternary_expression,
      $.update_expression,
      $._ambiguous_name,
      $._primary,
      $.unary_expression,
      $.cast_expression
    ),

    cast_expression: $ => prec(15, choice(
      seq('(', $._type, repeat($.additional_bound), ')', $._expression)
    )),

    additional_bound: $ => seq('&', $._type),

    assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      $.lhs,
      choice('=', '+=', '-=', '*=', '/=', '&=', '|=', '^=', '%=', '<<=', '>>=', '>>>='),
      $._expression)
    ),

    lhs: $ => choice(
      $._ambiguous_name,
      $.field_access,
      $.array_access
    ),

    // NOTE: Precedence was added due to error and duplication with
    // type_arguments.
    // TODO: Verify precedence is legit.
    binary_expression: $ => choice(
      ...[
      ['>', PREC.REL],
      ['<', PREC.REL],
      ['==', PREC.REL],
      ['>=', PREC.REL],
      ['<=', PREC.REL],
      ['!=', PREC.REL],
      ['&&', PREC.AND],
      ['||', PREC.OR],
      ['+', PREC.PLUS],
      ['-', PREC.PLUS],
      ['*', PREC.TIMES],
      ['/', PREC.TIMES],
      ['&', PREC.AND],
      ['|', PREC.OR],
      ['^', PREC.OR],
      ['%', PREC.TIMES],
      ['<<', PREC.TIMES],
      ['>>', PREC.TIMES],
      ['>>>', PREC.TIMES],
      ['instanceof', PREC.REL]
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq(
        $._expression,
        operator,
        $._expression
      ))
    )),

    // TODO: test
    // Lowest precedence operator is lambda arrow
    // https://docs.oracle.com/javase/specs/jls/se9/html/jls-15.html#jls-Expression
    lambda_expression: $ => seq($._lambda_parameters, '->', $.lambda_body),

    _lambda_parameters: $ => choice(
      $.identifier,
      seq($.formal_parameters),
      $.inferred_parameters
    ),

    inferred_parameters: $ => seq(
      '(',
      commaSep($.identifier),
      ')'
    ),

    lambda_body: $ => choice(
      $._expression,
      $.block,
    ),

    ternary_expression: $ => prec.right(PREC.TERNARY, seq(
      $._expression, '?', $._expression, ':', $._expression
    )),

    unary_expression: $ => choice(...[
      ['+', PREC.NEG],
      ['-', PREC.NEG],
      ['!', PREC.NOT],
      ['~', PREC.NOT],
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq(operator, $._expression))
    )),

    // TODO: test this
    update_expression: $ => prec.left(PREC.INC, choice(
      seq($._expression, '++'),
      seq($._expression, '--'),
      seq('++', $._expression),
      seq('--', $._expression)
    )),

    labeled_statement: $ => seq(
      $.identifier, ':', $._statement
    ),

    assert_statement: $ => choice(
      seq('assert', $._expression, $._semicolon),
      seq('assert', $._expression, ':', $._expression, $._semicolon)
    ),

    switch_statement: $ => seq(
      'switch',
      '(', $._expression, ')',
      $.switch_block
    ),

    // NOTE: switch_label precedes block_statement according to spec
    switch_block: $ => seq(
      '{',
      repeat(choice($.switch_label, $._block_statement)),
      '}'
    ),

    switch_label: $ => choice(
      seq('case', $._expression, ':'),
      seq('default', ':')
    ),

    do_statement: $ => seq(
      'do', $._statement, 'while', '(', $._expression, ')', $._semicolon
    ),

    break_statement: $ => seq('break', optional($.identifier), $._semicolon),

    continue_statement: $ => seq('continue', optional($.identifier), $._semicolon),

    return_statement: $ => seq(
      'return',
      optional($._expression),
      $._semicolon
    ),

    synchronized_statement: $ => seq('synchronized', '(', $._expression, ')', $.block),

    throw_statement: $ => seq('throw', $._expression, $._semicolon),

    try_statement: $ => choice(
      seq('try', $.block, $.catches),
      seq('try', $.block, optional($.catches), $.finally),
      $.try_with_resources_statement
    ),

    catches: $ => prec.right(repeat1($.catch_clause)),

    catch_clause: $ => seq('catch', '(', $.catch_formal_parameter, ')', $.block),

    catch_formal_parameter: $ => seq(
      repeat($.modifier),
      $.catch_type,
      $.variable_declarator_id
    ),

    catch_type: $ => seq($._unann_type, repeat(seq('|', $._type))),

    finally: $ => seq('finally', $.block),

    try_with_resources_statement: $ => seq(
      'try',
      $.resource_specification,
      $.block,
      optional($.catches),
      optional($.finally)
    ),

    resource_specification: $ => seq(
      '(', sep1($.resource, ';'), optional(';'), ')'
    ),

    resource: $ => choice(
      seq(repeat($.modifier), $._unann_type, $.variable_declarator_id, '=', $._expression),
      $.variable_access
    ),

    variable_access: $ => choice(
      $._ambiguous_name,
      $.field_access
    ),

    if_then_else_statement: $ => prec.right(seq(
      'if', '(', $._expression, ')',
      $._statement,
      optional(seq('else', $._statement))
    )),

    while_statement: $ => seq('while', '(', $._expression, ')', $._statement),

    for_statement: $ => choice(
      $.basic_for_statement,
      $.enhanced_for_statement
    ),

    basic_for_statement: $ => seq(
      'for', '(',
      optional($.for_init), $._semicolon,
      optional($._expression), $._semicolon,
      commaSep($._expression), ')',
      $._method_statement
    ),

    for_init: $ => choice(
      commaSep1($._expression),
      $.local_variable_declaration,
    ),

    enhanced_for_statement: $ => seq(
      'for',
      '(',
      repeat($.modifier),
      $._unann_type,
      $.variable_declarator_id,
      ':',
      $._expression,
      ')',
      $._method_statement
    ),

    _type_arguments_or_diamond: $ => choice(
      $._type_arguments,
      '<>'
    ),

    _type_arguments: $ => seq(
      '<', commaSep1($.type_argument), '>'
    ),

    type_argument: $ => choice(
      $._type,
      $.wildcard
    ),

    wildcard: $ => seq(
      repeat($._annotation),
      '?',
      optional($._wildcard_bounds)
    ),

    _wildcard_bounds: $ => choice(
      seq('extends', $._type),
      seq($.super, $._type)
    ),

    dims: $ => prec.right(repeat1(
      seq(repeat($._annotation), '[', ']')
    )),

    _numeric_type: $ => choice(
      $.integral_type,
      $.floating_point_type
    ),

    integral_type: $ => choice(
      'byte',
      'short',
      'int',
      'long',
      'char'
    ),

    floating_point_type: $ => choice(
      'float',
      'double'
    ),

    boolean_type: $ => 'boolean',

    void_type: $ => 'void',

    _annotation: $ => choice(
      $.normal_annotation,
      $.marker_annotation,
      $.single_element_annotation
    ),

    normal_annotation: $ => seq(
      '@', $._ambiguous_name, '(', optional($.element_value_pair_list), ')',
    ),

    marker_annotation: $ => seq('@', $._ambiguous_name),

    // TODO: Replace choice($.identifier, $._literal) with $._statement once it's
    // more fleshed out; The Java spec uses element_value which infinitely loops
    single_element_annotation: $ => seq(
      '@', $._ambiguous_name, '(', choice($.identifier, $._literal, $.scoped_identifier, $.element_value), ')'
    ),

    element_value_pair_list: $ => commaSep1($.element_value_pair),

    element_value_pair: $ => prec.right(10, seq(
      $.identifier,
      '=',
      $.element_value
    )),

    element_value: $ => prec.left(1, choice(
      $._literal,
      $._ambiguous_name, // TODO: verify this, not accounted for in spec
      $.element_value_array_initializer,
      $._annotation
    )),

    element_value_array_initializer: $ => prec.left(seq(
      '{',
      commaSep($.element_value),
      optional(','),
      '}'
    )),

    _declaration: $ => prec(1, choice(
      $.module_declaration,
      $.package_declaration,
      $.import_declaration,
      $.class_declaration,
      $.interface_declaration,
      $.enum_declaration,
    )),

    module_declaration: $ => seq(
      repeat($._annotation),
      optional('open'),
      'module',
      $._ambiguous_name,
      '{',
      repeat($.module_directive),
      '}'
    ),

    module_directive: $ => seq(choice(
      seq('requires', repeat($.requires_modifier), $.module_name),
      seq('exports', $._ambiguous_name, optional('to'), optional($.module_name), repeat(seq(',', $.module_name))),
      seq('opens', $._ambiguous_name, optional('to'), optional($.module_name), repeat(seq(',', $.module_name))),
      seq('uses', $._ambiguous_name),
      seq('provides', $._ambiguous_name, 'with', $._ambiguous_name, repeat(seq(',', $._ambiguous_name)))
    ), $._semicolon),

    requires_modifier: $ => choice(
      'transitive',
      'static'
    ),

    module_name: $ => choice(
      $.identifier,
      seq($.module_name, '.', $.identifier)
    ),

    package_declaration: $ => seq(
      repeat($._annotation),
      'package',
      $._ambiguous_name,
      $._semicolon
    ),

    import_declaration: $ => seq(
      'import',
      optional('static'),
      sep1($.identifier, '.'),
      optional(seq('.', $.asterisk)),
      $._semicolon
    ),

    asterisk: $ => '*',

    enum_declaration: $ => seq(
      repeat($.modifier),
      'enum',
      $.identifier,
      optional($.super_interfaces),
      '{',
      commaSep($.enum_constant),
      optional(','),
      optional($.enum_body_declarations),
      '}'
    ),

    enum_body_declarations: $ => seq(
      $._semicolon,
      repeat($._class_body_declaration)
    ),

    enum_constant: $ => (seq(
      repeat($.modifier),
      $.identifier,
      optional(seq('(', $.argument_list, ')')),
      optional($.class_body)
    )),

    class_declaration: $ => seq(
      repeat($.modifier),
      'class',
      $.identifier,
      optional($.type_parameters),
      optional($.superclass),
      optional($.super_interfaces),
      $.class_body
    ),

    modifier: $ => choice(
      $._annotation,
      'public',
      'protected',
      'private',
      'abstract',
      'static',
      'final',
      'strictfp',
      'default',
      'synchronized',
      'native',
      'transient',
      'volatile'
    ),

    type_parameters: $ => seq(
      '<', commaSep1($.type_parameter), '>'
    ),

    type_parameter: $ => seq(
      repeat($._annotation),
      $.identifier,
      optional($.type_bound)
    ),

    type_bound: $ => seq('extends', $._type, repeat(seq('&', $._type))),

    superclass: $ => seq(
      'extends',
      $._type
    ),

    super_interfaces: $ => seq(
      'implements',
      $.interface_type_list
    ),

    interface_type_list: $ => seq(
      $._type,
      repeat(seq(',', $._type))
    ),

    class_body: $ => seq(
      '{',
      repeat($._class_body_declaration),
      '}'
    ),

    _class_body_declaration: $ => choice(
      $._class_member_declaration,
      $.block,
      $.static_initializer,
      $.constructor_declaration
    ),

    static_initializer: $ => seq(
      'static',
      $.block
    ),

    constructor_declaration: $ => seq(
      repeat($.modifier),
      $.constructor_declarator,
      optional($.throws),
      $.constructor_body
    ),

    constructor_declarator: $ => seq(
      optional($.type_parameters),
      $.identifier,
      $.formal_parameters
    ),

    constructor_body: $ => seq(
      '{',
      optional($.explicit_constructor_invocation),
      repeat($._block_statement),
      '}'
    ),

    explicit_constructor_invocation: $ => choice(
      seq(optional($._type_arguments), $.this, $._parenthesized_argument_list, $._semicolon),
      seq(optional($._type_arguments), $.super, $._parenthesized_argument_list, $._semicolon),
      seq($._ambiguous_name, '.', optional($._type_arguments), $.super, $._parenthesized_argument_list, $._semicolon),
      seq($._primary, '.', $.super, '(', optional($.argument_list), ')', $._semicolon)
    ),

    _ambiguous_name: $ => prec(PREC.REL + 1, choice(
      $.identifier,
      $._reserved_identifier,
      $.scoped_identifier
    )),

    scoped_identifier: $ => seq(
      choice($.identifier, $._reserved_identifier, $.scoped_identifier),
      '.',
      $.identifier
    ),

    _class_member_declaration: $ => choice(
      $.field_declaration,
      $.method_declaration,
      $.class_declaration,
      $.interface_declaration,
      $.enum_declaration,
      $._semicolon
    ),

    field_declaration: $ => seq(
      repeat($.modifier),
      $._unann_type,
      $.variable_declarator_list,
      $._semicolon
    ),

    _primary: $ => choice(
      $._primary_no_new_array,
      $.array_creation_expression
    ),

    array_creation_expression: $ => seq(
      'new',
      choice($._primitive_type, $._class_or_interface_type),
      choice(
        seq($._dims_exprs, optional($.dims)),
        seq($.dims, $.array_initializer)
      )
    ),

// why didn't I just use a repeat1 here?
    _dims_exprs: $ => prec.right(seq($.dims_expr, repeat($.dims_expr))),

    dims_expr: $ => seq(repeat($._annotation), '[', $._expression, ']'),

    _primary_no_new_array: $ => choice(
      $._literal,
      $.class_literal,
      $.this,
      seq($._ambiguous_name, '.', $.this),
      seq('(', $._expression, ')'),
      $.class_instance_creation_expression,
      $.field_access,
      $.array_access,
      $.method_invocation,
      $.method_reference
    ),

    class_literal: $ => choice(
      seq($._ambiguous_name, repeat(seq('[', ']')), '.', 'class'),
      seq($._numeric_type, repeat(seq('[', ']')), '.', 'class'),
      seq($.boolean_type, repeat(seq('[', ']')), '.', 'class'),
      seq($.void_type, '.', 'class')
    ),

    class_instance_creation_expression: $ => choice(
      $.unqualified_class_instance_creation_expression,
      seq($._ambiguous_name, '.', $.unqualified_class_instance_creation_expression),
      seq($._primary, '.', $.unqualified_class_instance_creation_expression)
    ),

    unqualified_class_instance_creation_expression: $ => prec.right(seq(
      'new',
      optional($._type_arguments),
      choice($._primitive_type, $._class_or_interface_type),
      '(', optional($.argument_list), ')',
      optional($.class_body)
    )),

    field_access: $ => choice(
      seq($._primary, '.', $.identifier),
      seq($.super, '.', $.identifier),
      seq($._ambiguous_name, '.', $.super, '.', $.identifier)
    ),

    array_access: $ => choice(
      seq($._ambiguous_name, '[', $._expression, ']'),
      seq($._primary_no_new_array, '[', $._expression, ']')
    ),

    method_invocation: $ => choice(
      seq($.identifier, $._parenthesized_argument_list),
      seq($._reserved_identifier, $._parenthesized_argument_list),
      seq($._ambiguous_name, '.', optional($._type_arguments), $.identifier, $._parenthesized_argument_list),
      seq($._primary, '.', optional($._type_arguments), $.identifier, $._parenthesized_argument_list),
      seq($.super, '.', optional($._type_arguments), $.identifier, $._parenthesized_argument_list),
      seq($._ambiguous_name, '.', $.super, '.', optional($._type_arguments), $.identifier, $._parenthesized_argument_list)
    ),

    argument_list: $ => seq(
      $._expression, repeat(seq(',', $._expression))
    ),

    _parenthesized_argument_list: $ => seq('(', optional($.argument_list), ')'),

    method_reference: $ => seq(
      choice($._type, $._primary),
      '::',
      optional($._type_arguments),
      choice('new', $.identifier)
    ),

    interface_declaration: $ => choice(
      $.normal_interface_declaration,
      $.annotation_type_declaration
    ),

    annotation_type_declaration: $ => seq(
      repeat($.modifier),
      '@interface',
      $.identifier,
      $.annotation_type_body
    ),

    annotation_type_body: $ => seq(
      '{', repeat($.annotation_type_member_declaration), '}'
    ),

    annotation_type_member_declaration: $ => choice(
      $.annotation_type_element_declaration,
      $.constant_declaration,
      $.class_declaration,
      $.interface_declaration
    ),

    annotation_type_element_declaration: $ => seq(
      repeat($.modifier),
      $._unann_type,
      $.identifier,
      '(', ')',
      optional($.dims),
      optional($.default_value),
      $._semicolon
    ),

    default_value: $ => seq(
      'default', $.element_value
    ),

    normal_interface_declaration: $ => seq(
      repeat($.modifier),
      'interface',
      $.identifier,
      optional($.type_parameters),
      optional($.extends_interfaces),
      $.interface_body
    ),

    extends_interfaces: $ => seq(
      'extends',
      $.interface_type_list
    ),

    interface_body: $ => seq(
      '{',
      repeat($.interface_member_declaration),
      '}'
    ),

    interface_member_declaration: $ => choice(
      $.constant_declaration,
      $.method_declaration,
      $.class_declaration,
      $.interface_declaration,
      $._semicolon
    ),

    constant_declaration: $ => seq(
      repeat($.modifier),
      $._unann_type,
      $.variable_declarator_list,
      $._semicolon
    ),

    // These are part of field declarations - variables of a class type are intro'd by field declarations
    variable_declarator_list: $ => seq(
      $.variable_declarator,
      repeat(seq(',', $.variable_declarator))
    ),

    variable_declarator: $ => seq(
      $.variable_declarator_id,
      optional(seq('=', $._variable_initializer))
    ),

    variable_declarator_id: $ => seq(
      choice($.identifier, $._reserved_identifier),
      optional($.dims)
    ),

    _variable_initializer: $ => choice(
      $._expression,
      $.array_initializer
    ),

    array_initializer: $ => seq(
      '{',
      commaSep($._variable_initializer),
      optional(','),
      '}'
    ),

    _type: $ => choice(
      $._unann_type,
      $.annotated_type
    ),

    _unann_type: $ => choice(
      $._primitive_type,
      $.identifier,
      $._class_or_interface_type,
      $.array_type
    ),

    _primitive_type: $ => choice(
      $.void_type,
      $._numeric_type,
      $.boolean_type,
    ),

    _class_or_interface_type: $ => choice(
      prec(PREC.REL + 1, alias($.identifier, $.type_identifier)),
      $.scoped_type_identifier,
      $.generic_type
    ),

    annotated_type: $ => seq(
      repeat1($._annotation),
      $._unann_type
    ),

    scoped_type_identifier: $ => seq(
      choice(
        alias($.identifier, $.type_identifier),
        $.scoped_type_identifier,
        $.generic_type
      ),
      '.',
      repeat($._annotation),
      alias($.identifier, $.type_identifier)
    ),

    generic_type: $ => prec(PREC.REL + 1, seq(
      choice(
        alias($.identifier, $.type_identifier),
        $.scoped_type_identifier
      ),
      $._type_arguments_or_diamond
    )),

    array_type: $ => seq(
      $._unann_type,
      $.dims
    ),

    method_header: $ => choice(
      seq($._unann_type, $.method_declarator, optional($.throws)),
      seq($.type_parameters, repeat($._annotation), $._unann_type, $.method_declarator, optional($.throws))
    ),

    method_declarator: $ => seq(
      choice($.identifier, $._reserved_identifier),
      $.formal_parameters,
      optional($.dims)
    ),

    formal_parameters: $ => seq(
      '(',
      optional($.receiver_parameter),
      commaSep($.formal_parameter),
      optional(','),
      optional($.spread_parameter),
      ')'
    ),

    formal_parameter: $ => seq(
      repeat($.modifier),
      $._unann_type,
      $.variable_declarator_id
    ),

    receiver_parameter: $ => seq(
      repeat($._annotation),
      $._unann_type,
      optional(seq($.identifier, '.')),
      $.this
    ),

    spread_parameter: $ => seq(
      repeat($.modifier),
      $._unann_type,
      '...',
      $.variable_declarator
    ),

    last_formal_parameter: $ => choice(
      $.spread_parameter,
      $.formal_parameter
    ),

    this: $ => 'this',

    super: $ => 'super',

    throws: $ => seq(
      'throws', $.exception_type_list
    ),

    exception_type_list: $ => commaSep1($.exception_type),

    exception_type: $ => $._type,

    method_body: $ => choice(
      $.block,
      $._semicolon
    ),

    block: $ => seq(
      '{', repeat($._block_statement), '}'
    ),

    _block_statement: $ => choice(
      $.local_variable_declaration_statement,
      $.class_declaration,
      $._statement
    ),

    local_variable_declaration_statement: $ => seq(
      $.local_variable_declaration,
      $._semicolon
    ),

    local_variable_declaration: $ => seq(
      repeat($.modifier),
      $._unann_type,
      $.variable_declarator_list
    ),

    method_declaration: $ => seq(
      repeat($.modifier),
      $.method_header,
      $.method_body
    ),

    _reserved_identifier: $ => alias(choice(
      'open',
      'module'
    ), $.identifier),

    identifier: $ => /[a-zA-Z_]\w*/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))),
  }
});

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
