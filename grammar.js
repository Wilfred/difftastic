const
  PREC = {
    unary: 7,
    binary_mult: 6,
    binary_add: 5,
    binary_ord: 4,
    binary_comp: 3,
    binary_and: 2,
    binary_or: 1,
  }
  unicodeLetter = /\p{L}/
  unicodePunctuation = /\p{Pc}/
  unicodeDigit = /[0-9]/

module.exports = grammar({
  name: 'hcl',

  conflicts: $ => [
    [$.attr_splat],
    [$.full_splat],
    // string literals are just quoted template without template stuff
    [$.string_lit, $.quoted_template],
  ],

  externals: $ => [
    $._quoted_template_start,
    $._quoted_template_end,
    $._template_literal_chunk,
    $._template_interpolation_start,
    $._template_interpolation_end,
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
      $._block_start,
      optional($.body),
      $._block_end,
    ),

    _block_start: $ => '{',
    _block_end: $ => '}',

    // TODO: not to spec but good enough for now
    identifier: $ => token(seq(
      unicodeLetter,
      repeat(choice(unicodeLetter, unicodeDigit, unicodePunctuation)),
    )),

    expression: $ => choice(
      $._expr_term,
      $.operation,
      $.conditional,
    ),

    _expr_term: $ => choice(
      $.literal_value,
      $.template_expr,
      $.collection_value,
      $.variable_expr,
      $.function_call,
      $.for_expr,
      seq($._expr_term, $.index),
      seq($._expr_term, $.get_attr),
      seq($._expr_term, $.splat),
      seq('(', $.expression, ')'),
    ),

    literal_value: $ => choice(
      $.numeric_lit,
      $.bool_lit,
      $.null_lit,
      $.string_lit,
    ),

    numeric_lit: $ => /[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?/,

    bool_lit: $ => choice('true', 'false'),

    null_lit: $ => 'null',

    string_lit: $ => seq(
      $._quoted_template_start,
      $.template_literal,
      $._quoted_template_end,
    ),


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
      $._object_start,
      optional(seq(
        $.object_elem,
        repeat(seq(',', $.object_elem)),
      )),
      $._object_end,
    ),

    _object_start: $ => '{',
    _object_end: $ => '}',

    object_elem: $ => seq(
      $.expression,
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
      $._object_start,
      $.for_intro,
      $.expression,
      '=>',
      $.expression,
      optional($.ellipsis),
      optional($.for_cond),
      $._object_end,
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
      $._function_call_start,
      optional($.function_arguments),
      $._function_call_end,
    ),

    _function_call_start: $ => '(',
    _function_call_end: $ => ')',

    function_arguments: $ => seq(
      $.expression,
      repeat(seq(',', $.expression)),
      optional(choice(',', $.ellipsis))
    ),

    ellipsis: $ => token('...'),

    conditional: $ => prec.left(seq(
      $.expression,
      '?',
      $.expression,
      ':',
      $.expression,
    )),

    operation: $ => choice($.unary_operation, $.binary_operation),

    unary_operation: $ => prec.left(PREC.unary, seq(choice('-', '!'), $._expr_term)),

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
        prec.left(precedence, seq($._expr_term, operator, $._expr_term),
        ))
      );
    },

    template_expr: $ => choice(
      $.quoted_template,
      // $.heredoc_template,
    ),

    quoted_template: $ => seq(
      $._quoted_template_start,
      repeat(choice(
        $.template_literal,
        $.template_interpolation,
        $.template_directive,
      )),
      $._quoted_template_end,
    ),

    strip_marker: $ => '~',

    template_literal: $ => prec.right(repeat1(
      $._template_literal_chunk,
    )),

    template_interpolation: $ => seq(
      $._template_interpolation_start,
      optional($.strip_marker),
      $.expression,
      optional($.strip_marker),
      $._template_interpolation_end,
    ),

    // TODO
    template_directive: $ => choice(
      //$.template_for,
      //$.template_if,
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
