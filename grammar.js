module.exports = grammar({
  name: 'css',

  extras: $ => [
    /\s/,
    $.comment,
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

    block: $ => seq('{', repeat($.declaration), '}'),

    // Selectors

    _selector: $ => choice(
      $.universal_selector,
      $.type_selector,
      $.class_selector,
      $.id_selector,
      $.attribute_selector,
      $.child_selector,
      $.descendant_selector
    ),

    universal_selector: $ => '*',

    type_selector: $ => $.identifier,

    class_selector: $ => seq('.', $.identifier),

    id_selector: $ => seq('#', $.identifier),

    attribute_selector: $ => seq(
      choice(
        '[',
        seq($._selector, token.immediate('['))
      ),
      $.property_name,
      optional(seq(
        choice('=', '~=', '^=', '|=', '*=', '$='),
        $.property_value
      )),
      ']'
    ),

    child_selector: $ => prec.left(seq($._selector, '>', $._selector)),

    descendant_selector: $ => prec.left(seq($._selector, $._selector)),

    // Declarations

    declaration: $ => seq(
      $.property_name,
      ':',
      $.property_value,
      ';'
    ),

    property_name: $ => $.identifier,

    identifier: $ => /[a-zA-Z-_]+/,

    property_value: $ => /[^;()\[\]]+/,

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

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}
