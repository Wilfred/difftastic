const PREC = {
  assign: 1,
  infix: 2,
  new: 3,
  prefix: 3,
  call: 4,
  field: 4,
}

module.exports = grammar({
  name: 'scala',

  extras: $ => [
    /\s/,
    $.comment
  ],

  externals: $ => [
    $._automatic_semicolon,
    $._simple_string,
    $._string_start,
    $._string_middle,
    $._string_end,
    $._multiline_string_start,
    $._multiline_string_middle,
    $._multiline_string_end,
    'else',
  ],

  inline: $ => [
    $._pattern,
    $._semicolon,
    $._definition,
    $._type_identifier,
  ],

  word: $ => $.identifier,

  rules: {
    compilation_unit: $ => repeat($._definition),

    _definition: $ => choice(
      $.package_clause,
      $.package_object,
      $.class_definition,
      $.import_declaration,
      $.object_definition,
      $.trait_definition,
      $.val_definition,
      $.val_declaration,
      $.var_definition,
      $.var_declaration,
      $.type_definition,
      $.function_definition,
      $.function_declaration
    ),

    package_clause: $ => seq(
      'package',
      $.package_identifier,
      // This is slightly more permissive than the EBNF in that it allows any
      // kind of delcaration inside of the package blocks. As we're more
      // concerned with the structure rather than the validity of the program
      // we'll allow it.
      optional($.template_body)
    ),

    package_identifier: $ => sep1(
      '.', $.identifier
    ),

    package_object: $ => seq(
      'package',
      'object',
      $._object_definition
    ),

    import_declaration: $ => seq(
      'import',
      sep1(',', $._import_expression)
    ),

    _import_expression: $ => seq(
      choice($.stable_identifier, $.identifier),
      optional(seq(
        '.',
        choice(
          $.wildcard,
          $.import_selectors
        )
      ))
    ),

    import_selectors: $ => seq(
      '{',
      commaSep1(choice(
        $.identifier,
        $.renamed_identifier
      )),
      '}'
    ),

    renamed_identifier: $ => seq(
      $.identifier,
      '=>',
      choice($.identifier, $.wildcard)
    ),

    object_definition: $ => seq(
      optional('case'),
      'object',
      $._object_definition
    ),

    _object_definition: $ => seq(
      $.identifier,
      optional($.extends_clause),
      optional($.template_body),
    ),

    class_definition: $ => seq(
      optional($.modifiers),
      optional('case'),
      'class',
      $.identifier,
      optional($.type_parameters),
      optional($.class_parameters),
      optional($.extends_clause),
      optional($.template_body)
    ),

    trait_definition: $ => seq(
      'trait',
      $.identifier,
      optional($.type_parameters),
      optional($.extends_clause),
      $.template_body
    ),

    // The EBNF makes a distinction between function type parameters and other
    // type parameters as you can't specify variance on function type
    // parameters. This isn't important to the structure of the AST so we don't
    // make that distinction.
    type_parameters: $ => seq(
      '[',
      commaSep1($._variant_type_parameter),
      ']'
    ),

    _variant_type_parameter: $ => seq(
      choice(
        $.covariant_type_parameter,
        $.contravariant_type_parameter,
        $._type_parameter // invariant type parameter
      )
    ),

    covariant_type_parameter: $ => seq(
      '+',
      $._type_parameter
    ),

    contravariant_type_parameter: $ => seq(
      '-',
      $._type_parameter,
    ),

    _type_parameter: $ => seq(
      choice($.wildcard, $.identifier),
      optional($.type_parameters),
      optional($.upper_bound),
      optional($.lower_bound),
      optional(repeat($.view_bound)),
      optional(repeat($.context_bound)),
    ),

    upper_bound: $ => seq('<:', $._type),

    lower_bound: $ => seq('>:', $._type),

    view_bound: $ => seq('<%', $._type),

    context_bound: $ => seq(':', $._type),

    template_body: $ => seq(
      '{',
      repeat($._definition),
      '}'
    ),

    val_definition: $ => seq(
      optional($.modifiers),
      'val',
      $._pattern,
      optional(seq(':', $._type)),
      '=',
      $._expression
    ),

    val_declaration: $ => seq(
      optional($.modifiers),
      'val',
      commaSep1($.identifier),
      ':',
      $._type
    ),

    var_declaration: $ => seq(
      optional($.modifiers),
      'var',
      commaSep1($.identifier),
      ':',
      $._type
    ),

    var_definition: $ => seq(
      optional($.modifiers),
      'var',
      $._pattern,
      optional(seq(':', $._type)),
      '=',
      $._expression
    ),

    type_definition: $ => seq(
      optional($.modifiers),
      'type',
      $._type_identifier,
      optional($.type_parameters),
      '=',
      $._type
    ),

    function_definition: $ => seq(
      optional($.modifiers),
      'def',
      $.identifier,
      optional($.type_parameters),
      optional($.parameters),
      optional(seq(':', $._type)),
      choice(
        seq('=', $._expression),
        $.block
      )
    ),

    function_declaration: $ => seq(
      optional($.modifiers),
      'def',
      $.identifier,
      optional($.type_parameters),
      optional($.parameters),
      optional(seq(':', $._type))
    ),

    modifiers: $ => repeat1(choice(
      'abstract',
      'final',
      'sealed',
      'implicit',
      'lazy',
      'override',
      'private',
      'protected'
    )),

    extends_clause: $ => seq(
      'extends',
      $._type,
      optional($.arguments)
    ),

    class_parameters: $ => seq(
      '(',
      commaSep($.class_parameter),
      ')'
    ),

    parameters: $ => seq(
      '(',
      commaSep($.parameter),
      ')'
    ),

    class_parameter: $ => seq(
      optional(choice('val', 'var')),
      $.identifier,
      optional(seq(':', $._type)),
      optional(seq('=', $._expression))
    ),

    parameter: $ => seq(
      $.identifier,
      optional(seq(':', choice($.lazy_parameter_type, $._type))),
      optional(seq('=', $._expression))
    ),

    lazy_parameter_type: $ => seq(
      '=>',
      $._type
    ),

    block: $ => seq(
      '{',
      optional(seq(
        sep1($._semicolon, choice(
          $._expression,
          $._definition
        )),
        optional($._semicolon),
      )),
      '}'
    ),

    // Types

    _type: $ => choice(
      $.function_type,
      $.generic_type,
      $.compound_type,
      $.infix_type,
      $.stable_type_identifier,
      $._type_identifier
    ),

    compound_type: $ => prec.left(PREC.infix, seq(
      $._type,
      'with',
      $._type
    )),

    infix_type: $ => prec.left(PREC.infix, seq(
      $._type,
      choice($.identifier, $.operator_identifier),
      $._type
    )),

    stable_type_identifier: $ => seq(
      choice($.identifier, $.stable_identifier),
      '.',
      $._type_identifier
    ),

    stable_identifier: $ => seq(
      choice($.identifier, $.stable_identifier),
      '.',
      $.identifier
    ),

    generic_type: $ => seq(
      choice(
        $._type_identifier,
        $.stable_type_identifier
      ),
      $.type_arguments
    ),

    function_type: $ => seq(
      $.parameter_types,
      '=>',
      $._type
    ),

    parameter_types: $ => seq(
      '(',
      commaSep($._type),
      ')'
    ),

    _type_identifier: $ => alias($.identifier, $.type_identifier),

    // Patterns

    _pattern: $ => choice(
      $.identifier,
      $.capture_pattern,
      $.tuple_pattern,
      $.case_class_pattern,
      $.parenthesized_pattern,
      $.alternative_pattern,
      $.typed_pattern,
      $.number,
      $.string,
      $.wildcard
    ),

    case_class_pattern: $ => seq(
      choice($._type_identifier, $.stable_type_identifier),
      '(',
      commaSep($._pattern),
      ')'
    ),

    capture_pattern: $ => prec(PREC.infix, seq(
      $.identifier,
      '@',
      $._pattern
    )),

    alternative_pattern: $ => prec.left(seq(
      $._pattern,
      '|',
      $._pattern
    )),

    typed_pattern: $ => prec(-1, seq(
      $._pattern,
      ':',
      $._type
    )),

    tuple_pattern: $ => seq(
      '(',
      $._pattern,
      repeat1(seq(',', $._pattern)),
      ')'
    ),

    parenthesized_pattern: $ => seq(
      '(',
      $._pattern,
      ')'
    ),

    // Expressions

    _expression: $ => choice(
      $.if_expression,
      $.match_expression,
      $.try_expression,
      $.call_expression,
      $.generic_function,
      $.assignment_expression,
      $.parenthesized_expression,
      $.string_transform_expression,
      $.field_expression,
      $.instance_expression,
      $.infix_expression,
      $.prefix_expression,
      $.tuple_expression,
      $.case_block,
      $.block,
      $.identifier,
      $.number,
      $.string
    ),

    if_expression: $ => prec.right(seq(
      'if',
      $.parenthesized_expression,
      $._expression,
      optional(seq(
        'else',
        $._expression
      ))
    )),

    match_expression: $ => seq(
      $._expression,
      'match',
      $.case_block
    ),

    try_expression: $ => prec.right(seq(
      'try',
      $._expression,
      optional($.catch_clause),
      optional($.finally_clause)
    )),

    catch_clause: $ => prec.right(seq('catch', $.case_block)),

    finally_clause: $ => prec.right(seq('finally', $._expression)),

    case_block: $ => choice(
      prec(-1, seq('{', '}')),
      seq('{', repeat1($.case_clause), '}')
    ),

    case_clause: $ => seq(
      'case',
      $._pattern,
      optional($.guard),
      '=>',
      sep(';', $._expression)
    ),

    guard: $ => seq(
      'if',
      $._expression
    ),

    assignment_expression: $ => prec.right(PREC.assign, seq(
      $._expression,
      '=',
      $._expression
    )),

    generic_function: $ => prec(PREC.call, seq(
      $._expression,
      $.type_arguments
    )),

    call_expression: $ => prec(PREC.call, seq(
      $._expression,
      $.arguments,
      optional(choice($.block, $.case_block))
    )),

    field_expression: $ => prec(PREC.field, seq(
      $._expression,
      '.',
      $.identifier
    )),

    instance_expression: $ => prec(PREC.new,seq(
      'new',
      $._expression
    )),

    infix_expression: $ => prec.left(PREC.infix, seq(
      $._expression,
      choice($.identifier, $.operator_identifier),
      $._expression
    )),

    prefix_expression: $ => prec(PREC.prefix, seq(
      choice('+', '-', '!', '~'),
      $._expression
    )),

    tuple_expression: $ => seq(
      '(',
      $._expression,
      repeat1(seq(',', $._expression)),
      ')'
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    type_arguments: $ => seq(
      '[',
      commaSep1($._type),
      ']'
    ),

    arguments: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    wildcard: $ => '_',

    operator_identifier: $ => /[^\s\w\(\)\[\]'"`.;,]+/,

    number: $ => /[\d\.]+/,
    
    string_transform_expression: $ => seq(
      $.identifier,
      $.string
    ),

    string: $ => choice(
      $._simple_string,
      seq(
        $._string_start,
        $.interpolation,
        repeat(seq(
          $._string_middle,
          $.interpolation,
        )),
        $._string_end
      ),
      seq(
        $._multiline_string_start,
        $.interpolation,
        repeat(seq(
          $._multiline_string_middle,
          $.interpolation,
        )),
        $._multiline_string_end
      )
    ),

    interpolation: $ => seq('$', choice($.identifier, $.block)),

    _semicolon: $ => choice(
      ';',
      $._automatic_semicolon
    ),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
})

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function sep(delimiter, rule) {
  return optional(sep1(delimiter, rule))
}

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}
