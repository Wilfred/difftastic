const PREC = {
  call: 1
}

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
      $.include_directive
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

    _expression: $ => choice(
      $.number,
      $.string,
      $.identifier,
      $.qualified_identifier,
      $.let_expression
    ),

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

    // Patterns

    _pattern: $ => choice(
      $.number,
      $.string,
      $.identifier,
      $.record_pattern,
      $.type_pattern,
      $.parenthesized_pattern
    ),

    record_pattern: $ => seq(
      '{',
      sep(';', $._pattern),
      '}'
    ),

    type_pattern: $ => seq(
      '(',
      $._pattern,
      ':',
      $._type,
      ')'
    ),

    parenthesized_pattern: $ => seq(
      '(',
      $._pattern,
      ')'
    ),

    // Tokens

    _type_identifier: $ => alias($.identifier, $.type_identifier),

    identifier: $ => /[a-zA-Z]\w*/,

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
