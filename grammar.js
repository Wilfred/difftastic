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
  $._numeric_type
  ],

  conflicts: $ => [
    [$.modifier],
    [$.normal_annotation, $.single_element_annotation, $.package_or_type_name],
    [$.marker_annotation, $.package_or_type_name],
    [$.class_literal, $.primitive_type], // try to drop class_literal
    [$.class_or_interface_type, $.class_or_interface_type_to_instantiate]
  ],

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => choice(
      seq($._literal, $._semicolon),
      seq($._expression, $._semicolon),
      $._declaration
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
      $.binary_integer_literal
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

    boolean_literal: $ => choice('true', 'false'),

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
      $.unary_expression,
      $.update_expression
    ),

    assignment_expression: $ => prec.left(PREC.ASSIGN, seq(
      // TODO: define lhs to replace expression
      $._expression,
      choice('=', '+=', '-=', '*=', '/=', '&=', '|=', '^=', '%=', '<<=', '>>=', '>>>='),
      $._expression)
    ),

    // TODO: define lhs to replace expression in assignment_expression
    // lhs: $ => choice(
    //   $.expression_name,
    //   $.field_access,
    //   $.array_access
    // ),
    //
    // field_access: $ => choice(
    //   seq($.primary, '.', $.identifier),
    //   seq('super', '.', $.identifier),
    //   seq($.type_name, '.', 'super', '.', $.identifier)
    // ),

    // primary: $ => choice(
    //   $._literal,
    //   // $.class_literal, - add
    //   'this',
    //   seq($.type_name, '.', 'this'),
    //   seq('(', $.argument_list, ')'),
    //   // $.class_instance_creation_expression, - add
    //   $.field_access,
    //   // $.array_access, - add
    //   $.method_invocation,
    //   // $.method_reference - add
    // ),

    // TODO: add variable
    binary_expression: $ => choice(
      prec.left(PREC.REL, seq($.unary_expression)),
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
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq($._expression, operator, $._expression)))
    ),

    // TODO: test
    lambda_expression: $ => seq($.lambda_parameters, '->', $.lambda_body),

    lambda_parameters: $ => choice(
      $.identifier,
      seq('(', $.formal_parameter_list, ')'),
      seq('(', $.inferred_formal_parameter_list, ')')
    ),

    inferred_formal_parameter_list: $ => sep1(',', $.identifier),

    lambda_body: $ => seq(
      $._expression,
      $.block
    ),

    ternary_expression: $ => prec.right(PREC.TERNARY, seq(
      $._expression, '?', $._expression, ':', $._expression
    )),

    unary_expression: $ => choice(...[
      ['!', PREC.NOT],
      ['~', PREC.NOT],
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq(operator, $._expression))
    )),

    update_expression: $ => prec.left(PREC.INC, choice(
      seq($._expression, '++'),
      seq($._expression, '--'),
      seq('++', $._expression),
      seq('--', $._expression)
    )),

    // TODO: verify: https://docs.oracle.com/javase/specs/jls/se9/html/jls-14.html#jls-Statement
    statement: $ => choice(
      // $.statement_without_trailing_substatement,
      // $.labeled_statement,
      $.if_then_statement,
      // $.while_statement,
      // $.for_statement
    ),

    // statement_no_short_if: $ => choice(
    //   // $.statement_without_trailing_substatement,
    //   // $.labeled_statement_no_short_if,
    //   // $.if_then_else_statement_no_short_if,
    //   // $.while_statement_no_short_if,
    //   // $.for_statement_no_short_if
    // ),

    // statement_without_trailing_substatement: $ => choice(
      // $.block,
      // $.empty_statement,
      // $.expression_statement,
      // $.assert_statement,
      // $.switch_statement,
      // $.do_statement,
      // $.break_statement,
      // $.continue_statement,
      // $.return_statement,
      // $.synchronized_statement,
      // $.throw_statement,
      // $.try_statement
    // ),

    // TODO: make if statement pass by defining variables
    if_then_statement: $ => prec.right(seq('if', '(', $._expression, ')',
      choice(
        optional('{'), $._statement, optional('}'),
        repeat($.else_if_clause),
        optional($.else_clause)
      )
    )),

    else_if_clause: $ => seq(
      'else if',
      '(', $._expression, ')',
      choice(
        seq('{', $._statement, '}'),
        $._statement
      )
    ),

    else_clause: $ => seq(
      'else',
      choice(
        seq('{', $._statement, '}'),
        $._statement
      )
    ),

    // TODO: handle while_statement_no_short_if version
    while_statement: $ => seq(
      '(', $._expression, ')',
      $._statement
    ),

    // // TODO:
    // for_statement: $ => seq(
    //
    // ),

    // expression_statement: $ => choice(
    //   $.assignment_expression,
    //   $.update_expression,
    //   $.method_invocation,
    //   $.class_instance_creation_expression
    // ),

    type_arguments: $ => seq(
      '<', commaSep1($.type_argument), '>'
    ),

    type_argument: $ => choice(
      $.reference_type,
      // $.wildcard
    ),
    //
    // wildcard: $ => seq(
    //   repeat($._annotation),
    //   $.wildcard_bounds
    // ),
    //
    // wildcard_bounds: $ =>

    reference_type: $ => prec.left(choice(
      seq($.class_or_interface_type, optional($.dims)),
      seq($.primitive_type, $.dims)
    )),

    class_or_interface_type: $ => prec.right(15, sep1(
        seq(repeat($._annotation), $.identifier, optional($.type_arguments)), '.'
    )),

    type_variable: $ => seq(
      repeat($._annotation),
      $.identifier
    ),

    dims: $ => repeat1(
      seq(repeat($._annotation), '[', ']')
    ),

    primitive_type: $ => choice(
      seq(repeat($._annotation), choice($.integral_type, $.floating_point_type)),
      seq(repeat($._annotation), 'boolean')
    ),

    _numeric_type: $ => choice(
      $.integral_type,
      $.floating_point_type
    ),

    // TODO: test
    integral_type: $ => choice(
      'byte',
      'short',
      'int',
      'long',
      'char'
    ),

    // TODO: test
    floating_point_type: $ => choice(
      'float',
      'double'
    ),

    _annotation: $ => choice(
      $.normal_annotation,
      $.marker_annotation,
      $.single_element_annotation
    ),

    normal_annotation: $ => seq(
      '@', $.package_or_type_name, '(', optional($.element_value_pair_list), ')',
    ),

    marker_annotation: $ => seq('@', $.package_or_type_name),

    // TODO: Replace choice($.identifier, $._literal) with $._statement once it's
    // more fleshed out; The Java spec uses element_value which infinitely loops
    single_element_annotation: $ => seq(
      '@', $.package_or_type_name, '(', choice($.identifier, $._literal), ')'
    ),

    element_value_pair_list: $ => commaSep1($.element_value_pair),

    element_value_pair: $ => prec.right(10, seq(
      $.identifier,
      '=',
      $.element_value
    )),

    element_value: $ => prec.left(1, choice(
      $._literal, // TODO: remove this later, not accounted for in spec
      $.conditional_expression,
      $.element_value_array_initializer,
      $._annotation
    )),

    element_value_array_initializer: $ => prec.left(seq(
      '{',
      commaSep($.element_value),
      optional(','),
      '}'
    )),

    // TODO: add tests for conditional expressions
    conditional_expression: $ => choice(
      $.conditional_or_expression,
      seq($.conditional_or_expression, '?', $._expression, ':', $.conditional_expression),
      seq($.conditional_or_expression, '?', $._expression, ':', $.lambda_expression)
    ),

    conditional_or_expression: $ => choice(
        $.conditional_and_expression,
        seq($.conditional_or_expression, '||', $.conditional_and_expression)
    ),

    conditional_and_expression: $ => choice(
      $.inclusive_or_expression,
      seq($.conditional_and_expression, '&&', $.inclusive_or_expression)
    ),

    inclusive_or_expression: $ => choice(
      $.exclusive_or_expression,
      seq($.inclusive_or_expression, '|', $.exclusive_or_expression)
    ),

    exclusive_or_expression: $ => choice(
      $.and_expression,
      seq($.exclusive_or_expression, '^', $.and_expression)
    ),

    and_expression: $ => choice(
      $.relational_expression,
      seq($.equality_expression, '==', $.relational_expression),
      seq($.equality_expression, '!=', $.relational_expression)
    ),

    relational_expression: $ => choice(
      $.shift_expression,
      seq($.relational_expression, '<', $.shift_expression),
      seq($.relational_expression, '<', $.shift_expression),
    ),

    equality_expression: $ => choice(
      $.relational_expression,
      seq($.equality_expression, '==', $.relational_expression),
      seq($.equality_expression, '!=', $.relational_expression)
    ),

    shift_expression: $ => choice(
      $.additive_expression,
      seq($.shift_expression, '<<', $.additive_expression),
      seq($.shift_expression, '>>', $.additive_expression),
      seq($.shift_expression, '>>>', $.additive_expression)
    ),

    additive_expression: $ => choice(
      $.multiplicative_expression,
      seq($.additive_expression, '+', $.multiplicative_expression),
      seq($.additive_expression, '-', $.multiplicative_expression)
    ),

    multiplicative_expression: $ => choice(
      $.unary_expression,
      seq($.multiplicative_expression, '*', $.unary_expression),
      seq($.multiplicative_expression, '/', $.unary_expression),
      seq($.multiplicative_expression, '%', $.unary_expression)
    ),

    _declaration: $ => choice(
      $.module_declaration,
      $.package_declaration,
      $.import_statement,
      $.class_declaration,
      $.interface_declaration,
      $.method_declaration
    ),

    module_declaration: $ => seq(
      repeat($._annotation),
      optional('open'),
      'module',
      $.module_identifier,
      '{',
      repeat($.module_directive),
      '}'
    ),

    // TODO: revisit and change to 'name'
    // Unsure if this is the same as name, since it repeats
    module_identifier: $ => seq(
      $.identifier,
      repeat(seq('.', $.identifier))
    ),

    module_directive: $ => seq(choice(
      seq('requires', repeat($.requires_modifier), $.module_name),
      seq('exports', $.package_or_type_name, optional('to'), optional($.module_name), repeat(seq(',', $.module_name))),
      seq('opens', $.package_or_type_name, optional('to'), optional($.module_name), repeat(seq(',', $.module_name))),
      seq('uses', $.package_or_type_name),
      seq('provides', $.package_or_type_name, 'with', $.package_or_type_name, repeat(seq(',', $.package_or_type_name)))
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
      $.identifier,
      repeat(seq('.', $.identifier)),
      $._semicolon
    ),

    package_or_type_name: $ => prec.left(20, choice(
      $.identifier,
      seq($.package_or_type_name, '.', $.identifier)
    )),

    import_statement: $ => choice(
      seq('import', $.package_or_type_name, $._semicolon),
      $.type_import_on_declaraction,
      $.single_static_import_declaration,
      $.static_import_on_demand_declaration
    ),

    // single_type_import_declaration: $ => seq(
    //   'import', $.package_or_type_name, $._semicolon
    // ),

    type_import_on_declaraction: $ => seq(
      'import',
      $.package_or_type_name,
      '.',
      '*',
      $._semicolon
    ),

    single_static_import_declaration: $ => seq(
      'import',
      'static',
      $.package_or_type_name,
      '.',
      $.identifier,
      $._semicolon
    ),

    static_import_on_demand_declaration: $ => seq(
      'import',
      'static',
      $.package_or_type_name,
      '.',
      '*',
      $._semicolon
    ),

    class_declaration: $ => choice(
      $.normal_class_declaration
      // $.enum_declaration - thttps://docs.oracle.com/javase/specs/jls/se9/html/jls-8.html#jls-8.1ion
    ),

    normal_class_declaration: $ => seq(
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
      'native'
    ),

    type_parameters: $ => seq(
      '<', $.type_parameter_list, '>'
    ),

    type_parameter_list: $ => commaSep1(
      $.type_parameter
    ),

    type_parameter: $ => seq(
      repeat($._annotation),
      $.identifier,
      optional($.type_bound)
    ),

    type_bound: $ =>
      seq('extends', $.class_or_interface_type, repeat(seq('&', $.class_or_interface_type))),

    superclass: $ => seq(
      'extends',
      $.class_or_interface_type
    ),

    super_interfaces: $ => seq(
      'implements',
      $.interface_type_list
    ),

    interface_type_list: $ => seq(
      $.class_or_interface_type,
      repeat(seq(',', $.class_or_interface_type))
    ),

    class_body: $ => seq(
      '{',
      repeat($.class_body_declaration),
      '}'
    ),

    class_body_declaration: $ => choice(
      $.class_member_declaration,
      $.block,
      // $.static_initializer,
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
      $.formal_parameter_list
    ),

    constructor_body: $ => seq(
      '{',
      optional($.explicit_constructor_invocation),
      optional($.block_statements),
      '}'
    ),

    explicit_constructor_invocation: $ => choice(
      seq(optional($.type_arguments), 'this', '(', optional($.argument_list), ')', $._semicolon),
      seq(optional($.type_arguments), 'super', '(', optional($.argument_list), ')', $._semicolon),
      seq($.ambiguous_name, '.', optional($.type_arguments), 'super', '(', optional($.argument_list), ')', $._semicolon),
      seq($.primary, '.', 'super', '(', optional($.argument_list), ')', $._semicolon)
    ),

    ambiguous_name: $ => choice(
      $.identifier,
      seq($.ambiguous_name, '.', $.identifier)
    ),

    class_member_declaration: $ => choice(
      // $.field_declaration,
      // $.method_declaration,
      $.class_declaration,
      $.interface_declaration,
      $._semicolon
    ),

    primary: $ => choice(
      $.primary_no_new_array,
      $.array_creation_expression
    ),

    array_creation_expression: $ => choice(
      seq('new', $.primitive_type, $.dims_exprs, optional($.dims)),
      seq($.class_or_interface_type, $.dims_exprs, optional($.dims)),
      seq('new', $.primitive_type, $.dims, $.array_initializer),
      seq('new', $.class_or_interface_type, $.dims, $.array_initializer)
    ),

    dims_exprs: $ => prec.right(seq($.dims_expr, repeat($.dims_expr))),

    dims_expr: $ => seq(repeat($._annotation), '[', $._expression, ']'),

    primary_no_new_array: $ => choice(
      $._literal,
      $.class_literal,
      'this',
      seq($.package_or_type_name, '.', 'this'),
      seq('(', $._expression, ')'),
      $.class_instance_creation_expression,
      $.field_access,
      $.array_access,
      $.method_invocation,
      $.method_reference
    ),

    class_literal: $ => choice(
      seq($.package_or_type_name, repeat('[', ']'), '.', 'class'),
      seq($._numeric_type, repeat('[', ']'), '.', 'class'),
      seq('boolean', repeat('[', ']'), '.', 'class'),
      seq('void', '.', 'class')
    ),

    class_instance_creation_expression: $ => choice(
      $.unqualified_class_instance_creation_expression,
      seq($.ambiguous_name, '.', $.unqualified_class_instance_creation_expression),
      seq($.primary, '.', $.unqualified_class_instance_creation_expression)
    ),

    unqualified_class_instance_creation_expression: $ => seq(
      'new',
      optional($.type_arguments),
      $.class_or_interface_type_to_instantiate,
      '(', optional($.argument_list), ')',
      optional($.class_body)
    ),

    class_or_interface_type_to_instantiate: $ => prec.right(seq(
      repeat($._annotation),
      $.identifier,
      repeat(seq('.', repeat($._annotation), $.identifier)),
      optional($.type_arguments_or_diamond)
    )),

    type_arguments_or_diamond: $ => choice(
      $.type_arguments,
      '<>'
    ),

    field_access: $ => choice(
      seq($.primary, '.', $.identifier),
      seq('super', '.', $.identifier),
      seq($.package_or_type_name, '.', 'super', '.', $.identifier)
    ),

    array_access: $ => choice(
      seq($.ambiguous_name, '[', $._expression, ']'),
      seq($.primary_no_new_array, '[', $._expression, ']')
    ),

    method_invocation: $ => choice(
      seq($.method_name, '(', optional($.argument_list), ')'),
      seq($.package_or_type_name, '.', optional($.type_arguments), $.identifier, '(', optional($.argument_list), ')'),
      seq($.ambiguous_name, '.', optional($.type_arguments), $.identifier, '(', optional($.argument_list), ')'),
      seq($.primary, '.', optional($.type_arguments), $.identifier, '(', optional($.argument_list), ')'),
      seq($.package_or_type_name, '.', 'super', '.', optional($.type_arguments), $.identifier, '(', optional($.argument_list), ')')
    ),

    argument_list: $ => seq(
      $._expression, repeat(seq(',', $._expression))
    ),

    method_reference: $ => choice(
      seq($.ambiguous_name, '::', optional($.type_arguments), $.identifier),
      seq($.primary, '::', optional($.type_arguments), $.identifier),
      seq('super', '::', optional($.type_arguments), $.identifier),
      seq($.package_or_type_name, '.', 'super', '::', optional($.type_arguments), $.identifier),
      seq($.class_or_interface_type, '::', optional($.type_arguments), 'new'),
      seq($.array_type, '::', 'new')
    ),

    array_type: $ => choice(
      seq($.primitive_type, $.dims),
      seq($.class_or_interface_type, $.dims),
      seq($.type_variable, $.dims)
    ),

    interface_declaration: $ => choice(
      $.normal_interface_declaration,
      $.annotation_type_declaration
    ),

    annotation_type_declaration: $ => seq(
      repeat($.modifier),
      '@', 'interface',
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
      // $.unann_type,
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

    interface_type_list: $ => seq(
      $.class_or_interface_type,
      repeat(seq(',', $.class_or_interface_type))
    ),

    interface_body: $ => seq(
      '{',
      repeat($.interface_member_declaration),
      '}'
    ),

    interface_member_declaration: $ => choice(
      $.constant_declaration,
      $.interface_method_declaration,
      $.class_declaration,
      $.interface_declaration,
      $._semicolon
    ),

    constant_declaration: $ => seq(
      repeat($.modifier),
      // $.unann_type,
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
      optional('=', $.variable_initializer)
    ),

    variable_declarator_id: $ => seq(
      $.identifier,
      optional($.dims)
    ),

    variable_initializer: $ => choice(
      $._expression,
      $.array_initializer
    ),

    array_initializer: $ => seq(
      '{',
      commaSep($.variable_initializer),
      optional(','),
      '}'
    ),

    // come back and define unann_type here

    interface_method_declaration: $ => seq(
      repeat($.modifier),
      $.method_header,
      $.method_body
    ),

    method_header: $ => choice(
      seq($.result, $.method_declarator, optional($.throws)),
      seq($.type_parameters, repeat($._annotation), $.result, $.method_declarator, optional($.throws))
    ),

    result: $ => choice(
      // $.unann_type,
      'void'
    ),

    method_declarator: $ => seq(
      $.identifier,
      '(', optional($.formal_parameter_list), ')',
      optional($.dims)
    ),

    formal_parameter_list: $ => choice(
      $.receiver_parameter,
      seq($.formal_parameters, ',', $.last_formal_parameter),
      $.last_formal_parameter
    ),

    formal_parameters: $ => choice(
      seq($.formal_parameter, repeat(seq(',', $.formal_parameter))),
      seq($.receiver_parameter, repeat(seq(',', $.formal_parameter)))
    ),

    formal_parameter: $ => seq(
      repeat($.modifier),
      // $.unann_type,
      $.variable_declarator_id
    ),

    receiver_parameter: $ => seq(
      repeat($._annotation),
      // $.unann_type,
      optional(seq($.identifier, '.')),
      'this'
    ),

    last_formal_parameter: $ => choice(
      seq(
      repeat($.modifier),
      // $.unann_type,
      repeat($._annotation),
      '...',
      $.variable_declarator
      ),
      $.formal_parameter
    ),

    throws: $ => seq(
      'throws', $.exception_type_list
    ),

    exception_type_list: $ => seq(
      $.exception_type,
      repeat(',', $.exception_type)
    ),

    exception_type: $ => seq(
      $.class_or_interface_type,
      $.type_variable
    ),

    method_body: $ => choice(
      $.block,
      $._semicolon
    ),

    block: $ => seq(
      '{', optional($.block_statements), '}'
    ),

    block_statements: $ => seq(
      $.block_statement,
      repeat($.block_statement)
    ),

    block_statement: $ => choice(
      $.local_variable_declaration_statement,
      $.class_declaration,
      $.statement
    ),

    local_variable_declaration_statement: $ => seq(
      $.local_variable_declaration,
      $._semicolon
    ),

    local_variable_declaration: $ => seq(
      $.modifier,
      // $.unann_type,
      $.variable_declarator_list
    ),

    method_declaration: $ => seq(
      repeat($.modifier),
      $.method_header,
      $.method_body
    ),

    // test
    method_name: $ => $.identifier,

    identifier: $ => /[a-zA-Z0-9]*/,

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
