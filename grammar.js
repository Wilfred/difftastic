const PREC = {
  prefix: 11,
  hash: 10,
  call: 9,
  negative: 8,
  shift: 7,
  mult: 6,
  add: 5,
  concat: 4,
  rel: 3,
  and: 2
}

const operatorChars = choice(
  '!', '$', '%', '&', '*', '+', '-', '.', '/', ':', '<', '=', '>', '?', '@', '^', '|', '~'
)

module.exports = grammar({
  name: 'ocaml',

  extras: $ => [
    /\s/,
    $.comment
  ],

  inline: $ => [
    $._specification,
    $._definition,
    $._parameter,
    $._type_identifier,
  ],

  rules: {
    compilation_unit: $ => repeat(seq(
      choice(
        $._specification,
        $._definition
      ),
      optional(';;')
    )),

    // Specifications

    _specification: $ => choice(
      $.value_specification,
      $.module_specification,
      $.module_type_specification,
      $.type_definition,
      $.open_directive,
      $.include_directive,
      $.attribute
    ),

    value_specification: $ => seq(
      'val',
      $.identifier,
      ':',
      $._type
    ),

    module_specification: $ => seq(
      'module',
      $.identifier,
      repeat($.module_parameter),
      ':',
      $._module_type
    ),

    module_type_specification: $ => seq(
      'module',
      'type',
      $._type_identifier,
      optional(seq('=', $._module_type))
    ),

    open_directive: $ => seq(
      'open',
      choice($.identifier, $.qualified_identifier)
    ),

    include_directive: $ => seq(
      'include',
      choice($.identifier, $.qualified_identifier)
    ),

    module_parameter: $ => seq(
      '(',
      $.identifier,
      ':',
      $._module_type,
      ')'
    ),

    // Definitions

    _definition: $ => choice(
      $.module_definition,
      $.type_definition,
      $.value_definition,
      $.attribute
    ),

    module_definition: $ => seq(
      'module',
      $.identifier,
      optional(seq(':', $._module_type)),
      '=',
      $._module
    ),

    type_definition: $ => seq(
      'type',
      $.type_constructor_definition,
      repeat(seq(
        'and',
        $.type_constructor_definition
      ))
    ),

    value_definition: $ => seq(
      'let',
      optional('rec'),
      $.let_binding,
      repeat(seq(
        'and',
        $.let_binding
      ))
    ),

    attribute: $ => seq(
      '[',
      '@@',
      choice($.identifier, $.qualified_identifier),
      choice($._type),
      ']'
    ),

    let_binding: $ => choice(
      seq($._pattern, '=', $._expression),
      seq($.identifier, repeat1($._parameter), '=', $._expression)
    ),

    _parameter: $ => choice(
      $._pattern,
      $.labeled_parameter,
      $.shorthand_labeled_parameter
    ),

    labeled_parameter: $ => seq(
      choice('~', '?'),
      $.identifier,
      ':',
      $._pattern
    ),

    shorthand_labeled_parameter: $ => seq(
      choice('~', '?'),
      $.identifier
    ),

    type_constructor_definition: $ => seq(
      optional($.type_parameters),
      $._type_identifier,
      optional($.type_equation),
      optional(seq(
        '=',
        $.record_declaration
      )),
      repeat($.type_constraint)
    ),

    type_parameters: $ => repeat1(seq(
      optional(choice('+', '-')),
      "'",
      $._type_identifier
    )),

    type_equation: $ => seq(
      '=',
      $._type
    ),

    record_declaration: $ => seq(
      '{',
      sep(';', $.field_declaration),
      optional(';'),
      '}'
    ),

    field_declaration: $ => seq(
      optional('mutable'),
      $.identifier,
      ':',
      $._type
    ),

    type_constraint: $ => seq(
      'constraint',
      $._type_identifier,
      '=',
      $._type
    ),

    // Module types

    _module_type: $ => choice(
      $.signature,
      $._type_identifier,
      $.functor_module_type,
      $.shorthand_functor_module_type,
      $.qualified_type_identifier
    ),

    signature: $ => seq(
      'sig',
      repeat(seq(
        $._specification,
        optional(';;')
      )),
      'end'
    ),

    functor_module_type: $ => prec.right(seq(
      'functor',
      $.module_parameter,
      '->',
      $._module_type
    )),

    shorthand_functor_module_type: $ => prec.right(seq(
      $._module_type,
      '->',
      $._module_type
    )),

    // Modules

    _module: $ => choice(
      $.struct_module,
      $.functor_module,
      $.functor_application_module,
      $.identifier,
      $.qualified_identifier
    ),

    functor_module: $ => seq(
      'functor',
      $.module_parameter,
      '->',
      $._module
    ),

    functor_application_module: $ => prec(PREC.call, seq(
      $._module,
      '(',
      $._module,
      ')'
    )),

    struct_module: $ => seq(
      'struct',
      repeat(seq(
        $._definition,
        optional(';;')
      )),
      'end'
    ),

    // Types

    _type: $ => choice(
      $._type_identifier,
      $.parenthesized_type,
      $.function_type,
      $.qualified_type_identifier,
      $.type_variable,
      $.constructed_type
    ),

    polymorphic_type: $ => seq(
      repeat1($.type_variable),
      $._type
    ),

    parenthesized_type: $ => seq(
      '(',
      $._type,
      ')'
    ),

    function_type: $ => prec.right(seq(
      $._type,
      '->',
      $._type
    )),

    type_variable: $ => seq(
      "'",
      $._type_identifier
    ),

    constructed_type: $ => seq(
      $._type,
      choice($._type_identifier, $.qualified_type_identifier)
    ),

    qualified_type_identifier: $ => seq(
      choice($.identifier, $.qualified_identifier),
      '.',
      $._type_identifier
    ),

    // Expressions

    _expression: $ => prec.left(PREC.call, choice(
      $.number,
      $.string,
      $.identifier,
      $.qualified_identifier,
      $.call_expression,
      $.function_expression,
      $.infix_expression,
      $.prefix_expression,
      $.parenthesized_expression,
      $.let_expression
    )),

    qualified_identifier: $ => seq(
      choice($.identifier, $.qualified_identifier),
      '.',
      $.identifier
    ),

    let_expression: $ => seq(
      'let',
      $.let_binding,
      repeat(seq(
        'and',
        $.let_binding
      )),
      'in',
      $._expression
    ),

    call_expression: $ => prec.left(PREC.call, seq(
      choice($.identifier, $.qualified_identifier, $.parenthesized_expression),
      repeat1($._expression)
    )),

    infix_expression: $ => {
      const table = [
        {
          operator: alias($._hash_operator, '#...'),
          precedence: PREC.hash,
          associativity: 'left'
        },
        {
          operator: choice(
            alias($._shift_operator, '**...'),
            'lsl', 'lsr', 'asr'
          ),
          precedence: PREC.shift,
          associativity: 'right'
        },
        {
          operator: choice(
            alias($._mult_operator, '*...'),
            'mod', 'land', 'lor', 'lxor'
          ),
          precedence: PREC.mult,
          associativity: 'left'
        },
        {
          operator: alias($._add_operator, '+...'),
          precedence: PREC.add,
          associativity: 'left'
        },
        {
          operator: alias($._concat_operator, '@...'),
          precedence: PREC.concat,
          associativity: 'right'
        },
        {
          operator: choice(alias($._rel_operator, '=...'), '!='),
          precedence: PREC.rel,
          associativity: 'left'
        },
        {
          operator: choice('&', '&&'),
          precedence: PREC.and,
          associativity: 'right'
        }
      ]

      return choice(...table.map(({operator, precedence, associativity}) =>
        prec[associativity](precedence, seq(
          $._expression,
          operator,
          $._expression
        ))
      ))
    },

    prefix_expression: $ => choice(
      prec(PREC.prefix, seq(
        alias($._prefix_operator, '!...'),
        $._expression
      )),
      prec(PREC.negative, seq(
        choice('-', '-.'),
        $._expression
      )),
    ),

    function_expression: $ => prec.right(seq(
      'function',
      optional('|'),
      sep1('|', $.pattern_match_clause)
    )),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    pattern_match_clause: $ => seq(
      $._pattern,
      optional(seq('when', $._expression)),
      '->',
      $._expression
    ),

    // Patterns

    _pattern: $ => choice(
      $.number,
      $.string,
      $.identifier,
      $.record_pattern,
      $.tuple_pattern,
      $.list_pattern,
      $.type_pattern,
      $.parenthesized_pattern
    ),

    record_pattern: $ => seq(
      '{',
      sep(';', choice($._pattern, $.field_pattern)),
      optional(';'),
      '}'
    ),

    type_pattern: $ => seq(
      '(',
      $._pattern,
      ':',
      $._type,
      ')'
    ),

    tuple_pattern: $ => prec.right(seq(
      $._pattern,
      repeat1(prec.right(seq(',', $._pattern)))
    )),

    list_pattern: $ => seq(
      '[',
      sep(';', $._pattern),
      optional(';'),
      ']'
    ),

    parenthesized_pattern: $ => seq(
      '(',
      $._pattern,
      ')'
    ),

    field_pattern: $ => seq(
      choice($.identifier, $.qualified_identifier),
      '=',
      $._pattern
    ),

    // Tokens

    _shift_operator: $ => token(seq('**', repeat(operatorChars))),
    _hash_operator: $ => token(seq('#', repeat1(operatorChars))),
    _mult_operator: $ => token(seq(choice('*', '/', '%'), repeat(operatorChars))),
    _add_operator: $ => token(seq(choice('+', '-'), repeat(operatorChars))),
    _concat_operator: $ => token(seq(choice('@', '^'), repeat(operatorChars))),
    _rel_operator: $ => token(seq(choice('=', '<', '>', '|', '&', '$'), repeat(operatorChars))),
    _prefix_operator: $ => token(choice(
      seq('!', repeat(operatorChars)),
      seq('~', repeat1(operatorChars)),
      seq('~', repeat1(operatorChars))
    )),

    _type_identifier: $ => alias($.identifier, $.type_identifier),

    identifier: $ => /[a-zA-Z_]\w*/,

    number: $ => /\d+/,

    string: $ => token(seq(
      '"',
      repeat(choice(
        /[^\\"]/,
        /\\(.|\n)/
      )),
      '"'
    )),

    comment: $ => token(seq(
      '(',
      '*',
      /[^*]*/,
      '*',
      ')'
    ))
  }
})

function sep(delimiter, rule) {
  return optional(sep1(delimiter, rule))
}

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}
