module.exports = grammar({
  name: 'css',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  externals: $ => [
    $._descendant_operator,
  ],

  inline: $ => [
    $._top_level_item,
    $._block_item,
  ],

  rules: {
    stylesheet: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $.rule_set,
      $.import_statement,
      $.media_statement,
      $.charset_statement,
      $.namespace_statement,
      $.keyframes_statement,
      $.supports_statement,
      $.at_rule
    ),

    // Statements

    import_statement: $ => seq(
      '@import',
      $._value,
      commaSep($._query),
      ';'
    ),

    media_statement: $ => seq(
      '@media',
      commaSep1($._query),
      $.block
    ),

    charset_statement: $ => seq(
      '@charset',
      $._value,
      ';'
    ),

    namespace_statement: $ => seq(
      '@namespace',
      optional(alias($.identifier, $.namespace_name)),
      choice($.string_value, $.call_expression),
      ';'
    ),

    keyframes_statement: $ => seq(
      '@keyframes',
      alias($.identifier, $.keyframes_name),
      $.keyframe_block_list,
    ),

    keyframe_block_list: $ => seq(
      '{',
      repeat($.keyframe_block),
      '}'
    ),

    keyframe_block: $ => seq(
      choice($.from, $.to, $.integer_value),
      $.block
    ),

    from: $ => 'from',
    to: $ => 'to',

    supports_statement: $ => seq(
      '@supports',
      $._query,
      $.block
    ),

    at_rule: $ => seq(
      $.at_keyword,
      commaSep($._query),
      choice(';', $.block)
    ),

    // Rule sets

    rule_set: $ => seq(
      $.selectors,
      $.block
    ),

    selectors: $ => commaSep1($._selector),

    block: $ => seq('{', repeat($._block_item), '}'),

    _block_item: $ => choice(
      $.declaration,
      $._top_level_item
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
      $.string_value,
      $.child_selector,
      $.descendant_selector,
      $.sibling_selector,
      $.adjacent_sibling_selector
    ),

    nesting_selector: $ => '&',

    universal_selector: $ => '*',

    class_selector: $ => prec(1, seq(
      optional($._selector),
      '.',
      alias($.identifier, $.class_name),
    )),

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

    sibling_selector: $ => prec.left(seq($._selector, '~', $._selector)),

    adjacent_sibling_selector: $ => prec.left(seq($._selector, '+', $._selector)),

    // Declarations

    declaration: $ => prec(1, seq(
      alias($.identifier, $.property_name),
      ':',
      $._value,
      repeat(seq(
        optional(','),
        $._value
      )),
      optional($.important),
      ';'
    )),

    important: $ => '!important',

    // Media queries

    _query: $ => choice(
      alias($.identifier, $.keyword_query),
      $.feature_query,
      $.binary_query,
      $.negated_query,
      $.selector_query,
      $.parenthesized_query
    ),

    feature_query: $ => seq(
      '(',
      alias($.identifier, $.feature_name),
      ':',
      $._value,
      ')'
    ),

    parenthesized_query: $ => seq(
      '(',
      $._query,
      ')'
    ),

    binary_query: $ => prec.left(seq(
      $._query,
      choice('and', 'or'),
      $._query
    )),

    negated_query: $ => prec(1, seq(
      'not',
      $._query
    )),

    selector_query: $ => seq(
      'selector',
      '(',
      $._selector,
      ')'
    ),

    // Property Values

    _value: $ => choice(
      alias($.identifier, $.plain_value),
      $.plain_value,
      $.color_value,
      $.integer_value,
      $.float_value,
      $.string_value,
      $.binary_expression,
      $.call_expression
    ),

    color_value: $ => /#[0-9a-fA-F]{3,8}/,

    string_value: $ => token(choice(
      seq("'", /([^'\n]|\\(.|\n))*/, "'"),
      seq('"', /([^"\n]|\\(.|\n))*/, '"')
    )),

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
          seq(/[eE]/, optional('-'), /\d+/),
          seq('.', /\d+/, /[eE]/, optional('-'), /\d+/)
        )
      )),
      optional($.unit)
    ),

    unit: $ => token.immediate(/[a-zA-Z%]+/),

    call_expression: $ => seq(
      alias($.identifier, $.function_name),
      $.arguments
    ),

    binary_expression: $ => prec.left(seq(
      $._value,
      choice('+', '-', '*', '/'),
      $._value
    )),

    arguments: $ => seq(
      token.immediate('('),
      commaSep(repeat1($._value)),
      ')'
    ),

    identifier: $ => /[a-zA-Z-_][a-zA-Z0-9-_]*/,

    plain_value: $ => /[a-zA-Z-_][^;()\[\]\s]*/,

    at_keyword: $ => /@[a-zA-Z-_]+/,

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
