const
  unicodeLetter = /\p{L}/
  unicodePunctuation = /\p{Pc}/
  unicodeDigit = /[0-9]/

module.exports = grammar({
  name: 'hcl',

  conflicts: $ => [
      [$.body],
      [$.object_elem, $.variable_expr],
      [$.attr_splat],
      [$.full_splat],
      [$.conditional],
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
      field('name', $.identifier),
      '=', 
      $.expression,
    ),

    block: $ => seq(
      field('name', $.identifier),
      repeat(choice($.string_lit, $.identifier)),
      '{',
      optional($.body),
      '}',
    ),

    // TODO: not to spec but good enough for now
    identifier: $ => token(seq(
      unicodeLetter,
      repeat(choice(unicodeLetter, unicodeDigit, unicodePunctuation)),
    )),

    expression: $ => choice(
      $.expr_term,
      //$.operation,
      $.conditional,
    ),

    expr_term: $ => choice(
      $.literal_value,
      $.collection_value,
      $.variable_expr,
      $.function_call,
      $.for_expr,
      seq($.expr_term, $.index),
      seq($.expr_term, $.get_attr),
      seq($.expr_term, $.splat),
      seq('(', $.expression, ')'),
    ),

    literal_value: $ => choice(
      $.numeric_lit,
      $.string_lit,
      $.bool_lit,
      $.null_lit,
    ),

    numeric_lit: $ => /[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?/,

    string_lit: $ => seq(
      '"', 
      repeat(choice(token.immediate(prec(1, /[^\\"\n\r\t]+/)), $.escape_sequence)),
      '"',
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        '\\',
        '"',
        'n',
        'r',
        't',
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),

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

    index: $ => seq('[', $.expression, ']'),

    get_attr: $ => seq('.', $.identifier),

    splat: $ => choice($.attr_splat, $.full_splat),

    attr_splat: $ => seq('.', '*', repeat($.get_attr)),

    full_splat: $ => seq('[', '*', ']', repeat(choice($.get_attr, $.index))),

    for_expr: $ => choice($.for_tuple_expr, $.for_object_expr),

    for_tuple_expr: $ => seq(
      '[', 
      $.for_intro,
      $.expression,
      optional($.for_cond),
      ']',
    ),

    for_object_expr: $ => seq(
      '{',
      $.for_intro,
      $.expression,
      '=>',
      $.expression,
      optional($.ellipsis),
      optional($.for_cond),
      '}',
    ),

    for_intro: $ => seq(
      'for',
      $.identifier,
      optional(seq(',', $.identifier)),
      'in',
      $.expression,
      ':',
    ),

    for_cond: $ => seq(
      'if',
      $.expression,
    ),

    variable_expr: $ => $.identifier,

    function_call: $ => seq(
      field('name', $.identifier),
      '(',
      optional($.function_arguments),
      ')'
    ),

    function_arguments: $ => seq(
      $.expression, 
      repeat(seq(',', $.expression)), 
      optional(choice(',', $.ellipsis))
    ),

    ellipsis: $ => token('...'),

    conditional: $ => seq(
      $.expression,
      '?',
      $.expression,
      ':',
      $.expression,
    ),

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
