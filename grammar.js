const
  PREC = {
    unary: 7,
    binary_mult: 6,
    binary_add: 5,
    binary_ord: 4,
    binary_comp: 3,
    binary_and: 2,
    binary_or: 1,

    quoted_string: 2,
    quoted_template: 1,
  }
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

  externals: $ => [
    $._template_char,
    $._template_char_in_interpolation,
    $.escape_sequence,
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
      $.operation,
      $.conditional,
    ),

    expr_term: $ => choice(
      $.literal_value,
      $.template_expr,
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
      $.bool_lit,
      $.null_lit,
    ),

    numeric_lit: $ => /[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?/,

    bool_lit: $ => choice('true', 'false'),

    null_lit: $ => 'null',

    // string_lit is defined as quoted template

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

    attr_splat: $ => seq(
      '.',
      '*',
      repeat($.get_attr),
    ),

    full_splat: $ => seq(
      '[',
      '*',
      ']',
      repeat(choice($.get_attr, $.index)),
    ),

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

    operation: $ => choice($.unary_operation, $.binary_operation),

    unary_operation: $ => prec.left(PREC.unary, seq(choice('-', '!'), $.expr_term)),

    binary_operation: $ => {
      const table = [
        [PREC.binary_mult, choice('*', '/', '%')],
        [PREC.binary_add, choice('+', '-')],
        [PREC.binary_ord, choice('>', '>=', '<', '<=')],
        [PREC.binary_comp, choice('==', '!=')],
        [PREC.binary_and, choice('&&')],
        [PREC.binary_or, choice('||')],
      ];

      return choice(...table.map(([precedence, operator]) =>
        prec.left(precedence, seq($.expr_term, operator, $.expr_term),
        ))
      );
    },

    template_expr: $ => choice(
      $.quoted_template,
      // $.heredoc_template,
    ),

    // application should check that no template interpolation is contained
    string_lit: $ => $.quoted_template,

    quoted_template: $ => seq(
      '"', 
      repeat(choice(
        $._template_char, 
        $.escape_sequence,
        $.template_interpolation,
      )), 
      '"',
    ),

    template_interpolation: $ => seq(
      choice('${', '${~'),
      repeat(choice($._template_char_in_interpolation, $.escape_sequence)),
      choice('}', '~}'),
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
