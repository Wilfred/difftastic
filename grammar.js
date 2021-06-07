const
  unicodeLetter = /\p{L}/
  unicodePunctuation = /\p{Pc}/
  unicodeDigit = /[0-9]/

module.exports = grammar({
  name: 'hcl',

  conflicts: $ => [
      [$.body],
      [$.object_elem, $.variable_expr],
  ],

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    config_file: $ => $.body,

    body: $ => repeat1(seq(
      choice(
        $.attribute, 
        $.block,
      ),
    )),

    attribute: $ => seq(
      $.identifier, 
      '=', 
      $.expression
    ),

    block: $ => seq(
      field('type', $.identifier),
      repeat(choice($.string_lit, $.identifier)),
      '{',
      optional($.body),
      '}',
    ),

    // TODO: not to spec but good enough for now
    identifier: $ => token(seq(
      unicodeLetter,
      repeat(choice(unicodeLetter, unicodeDigit, unicodePunctuation))
    )),

    expression: $ => choice(
      $.expr_term,
      //$.operation,
      //$.conditional,
    ),

    expr_term: $ => choice(
      $.literal_value,
      $.collection_value,
      $.variable_expr,
      // $.function_call,
      // $.for_expr,
      // seq($.expr_term, $.index),
      // seq($.expr_term, $.get_attr),
      // seq($.expr_term, $.splat),
      seq('(', $.expression, ')'),
    ),

    literal_value: $ => choice(
      $.numeric_lit,
      $.string_lit,
      $.bool_lit,
      $.null_lit,
    ),

    numeric_lit: $ => /[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?/,

    string_lit: $ => seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),

    bool_lit: $ => choice('true', 'false'),

    null_lit: $ => 'null',

    collection_value: $ => choice(
      $.tuple,
      $.object,
    ),

    tuple: $ => seq(
      '[',
      optional(seq(
        $.expression,
        repeat(seq(',', $.expression)),
      )),
      ']',
    ),

    object: $ => seq(
      '{',
      optional(seq(
        $.object_elem,
        repeat(seq(',', $.object_elem)),
      )),
      '}',
    ),

    object_elem: $ => seq(
      choice($.identifier, $.expression),
      choice('=', ':'),
      $.expression,
    ),

    variable_expr: $ => $.identifier,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('#', /.*/),
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
});
