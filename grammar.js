module.exports = grammar({
  name: 'css',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  externals: $ => [
    $._descendant_operator,
  ],

  rules: {
    stylesheet: $ => repeat(choice(
      $.rule_set,
      $.import_statement,
    )),

    // Statements

    import_statement: $ => seq(
      '@import'
    ),

    // Rule sets

    rule_set: $ => seq(
      $.selectors,
      $.block
    ),

    selectors: $ => commaSep1($._selector),

    block: $ => seq(
      '{',
      repeat(choice($.declaration, $.rule_set)),
      '}'
    ),

    // Selectors

    _selector: $ => choice(
      $.universal_selector,
      alias($.identifier, $.tag_name),
      $.class_selector,
      $.nesting_selector,
      $.pseudo_class_selector,
      $.pseudo_element_selector,
      $.id_selector,
      $.attribute_selector,
      $.child_selector,
      $.descendant_selector
    ),

    nesting_selector: $ => '&',

    universal_selector: $ => '*',

    class_selector: $ => seq(
      optional($._selector),
      '.',
      alias($.identifier, $.class_name),
    ),

    pseudo_class_selector: $ => seq(
      optional($._selector),
      ':',
      alias($.identifier, $.class_name),
      optional($.arguments)
    ),

    pseudo_element_selector: $ => seq(
      optional($._selector),
      '::',
      alias($.identifier, $.tag_name)
    ),

    id_selector: $ => seq(
      optional($._selector),
      '#',
      alias($.identifier, $.id_name)
    ),

    attribute_selector: $ => seq(
      optional($._selector),
      '[',
      alias($.identifier, $.attribute_name),
      optional(seq(
        choice('=', '~=', '^=', '|=', '*=', '$='),
        $._value
      )),
      ']'
    ),

    child_selector: $ => prec.left(seq($._selector, '>', $._selector)),

    descendant_selector: $ => prec.left(seq($._selector, $._descendant_operator, $._selector)),

    // Declarations

    declaration: $ => prec(1, seq(
      alias($.identifier, $.property_name),
      ':',
      repeat1($._value),
      ';'
    )),

    // Property Values

    _value: $ => choice(
      alias($.identifier, $.value_name),
      $.color_value,
      $.integer_value,
      $.float_value,
      $.function_value
    ),

    integer_value: $ => seq(
      token(seq(
        optional(choice('+', '-')),
        /\d+/
      )),
      optional($.unit)
    ),

    float_value: $ => seq(
      token(seq(
        optional(choice('+', '-')),
        /\d*/,
        choice(
          seq('.', /\d+/),
          seq('e', optional('-'), /\d+/),
          seq('.', /\d+/, 'e', optional('-'), /\d+/)
        )
      )),
      optional($.unit)
    ),

    unit: $ => token.immediate(/[a-z]+/),

    color_value: $ => /#[0-9a-fA-F]{3,6}/,

    function_value: $ => seq(
      alias($.identifier, $.function_name),
      $.arguments
    ),

    arguments: $ => seq(
      '(',
      commaSep($._value),
      ')'
    ),

    property_name: $ => $.identifier,

    identifier: $ => /[a-zA-Z-_]+/,

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

function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}
