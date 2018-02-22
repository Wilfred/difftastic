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

  inline: $ => [
    $._pattern,
    $._semicolon,
    $._definition,
    $._type_identifier,
  ],

  rules: {
    compilation_unit: $ => repeat($._definition),

    _definition: $ => choice(
      $.package_clause,
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
      $.identifier
    ),

    import_declaration: $ => seq(
      'import',
      $.stable_identifier,
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
      $.identifier,
      $.template_body
    ),

    class_definition: $ => seq(
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

    type_parameters: $ => seq(
      '[',
      commaSep1($._type_parameter),
      ']'
    ),

    _type_parameter: $ => choice(
      '_',
      $.identifier
    ),

    template_body: $ => seq(
      '{',
      repeat($._definition),
      '}'
    ),

    val_definition: $ => seq(
      'val',
      $._pattern,
      optional(seq(':', $._type)),
      '=',
      $._expression
    ),

    val_declaration: $ => seq(
      'val',
      commaSep1($.identifier),
      ':',
      $._type
    ),

    var_declaration: $ => seq(
      'var',
      commaSep1($.identifier),
      ':',
      $._type
    ),

    var_definition: $ => seq(
      'var',
      $._pattern,
      optional(seq(':', $._type)),
      '=',
      $._expression
    ),

    type_definition: $ => seq(
      'type',
      $._type_identifier,
      optional($.type_parameters),
      '=',
      $._type
    ),

    function_definition: $ => seq(
      'def',
      $.identifier,
      optional($.type_parameters),
      $.parameters,
      optional(seq(':', $._type)),
      choice(
        seq('=', $._expression),
        $.block
      )
    ),

    function_declaration: $ => seq(
      'def',
      $.identifier,
      optional($.type_parameters),
      $.parameters,
      optional(seq(':', $._type))
    ),

    extends_clause: $ => seq(
      'extends',
      $._type
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
      optional(seq(':', $._type)),
      optional(seq('=', $._expression))
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
      $.alternative_pattern,
      $.typed_pattern,
      $.number,
      $.string,
      $.wildcard
    ),

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

    // Expressions

    _expression: $ => choice(
      $.if_expression,
      $.match_expression,
      $.call_expression,
      $.generic_function,
      $.assignment_expression,
      $.parenthesized_expression,
      $.field_expression,
      $.instance_expression,
      $.infix_expression,
      $.prefix_expression,
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

    case_block: $ => seq(
      '{',
      repeat($.case_clause),
      '}'
    ),

    case_clause: $ => seq(
      'case',
      $._pattern,
      optional($.guard),
      '=>',
      $._expression
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
      $.arguments
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

    operator_identifier: $ => /[^\s\w\(\)'"`.;,]+/,

    number: $ => /\d+/,

    string: $ => token(seq(
      '"',
      repeat(choice(/[^"\\\n]/, /\\[.\n]/)),
      '"'
    )),

    _semicolon: $ => choice(
      ';',
      '\n'
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
