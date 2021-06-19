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

module.exports = grammar({
  name: 'hcl',

  conflicts: $ => [
    // string literals are just quoted template without template stuff
    [$.string_lit, $.quoted_template],
  ],

  externals: $ => [
    $._newline,
    $._quoted_template_start,
    $._quoted_template_end,
    $._template_literal_chunk,
    $._template_interpolation_start,
    $._template_interpolation_end,
  ],

  extras: $ => [
    $.comment,
    ' ',
    '\t',
  ],

  rules: {
    config_file: $ => $.body,

    body: $ => repeat1(prec.left(
      choice(
        $.attribute,
        $.block,
        $._newlines,
      ),
    )),

    attribute: $ => prec.left(seq(
      $.identifier,
      '=',
      $.expression,
      $._newlines,
    )),

    block: $ => prec.left(seq(
      $.identifier,
      repeat(choice($.string_lit, $.identifier)),
      $._block_start,
      optional($._newlines),
      optional($.body),
      $._block_end,
      optional($._newlines),
    )),

    _block_start: $ => '{',
    _block_end: $ => '}',

    // TODO: not to spec but good enough for now
    identifier: $ => token(seq(
      /\p{L}/,
      repeat(choice(/\p{L}/, /[0-9]/, /(-|_)/)),
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

    _comma: $ => ',',

    tuple: $ => seq(
      $._tuple_start,
      optional($._tuple_elems),
      optional($._newlines),
      $._tuple_end,
    ),

    _tuple_start: $ => '[',
    _tuple_end: $ => ']',

    _tuple_elems: $ => prec.right(seq(
      optional($._newlines),
      $.expression,
      repeat(seq($._comma, optional($._newlines), $.expression)),
      optional($._comma),
      optional($._newlines),
    )),

    object: $ => seq(
      $._object_start,
      optional($._object_elems),
      optional($._newlines),
      $._object_end,
    ),

    _object_start: $ => '{',
    _object_end: $ => '}',

    _object_elems: $ => prec.right(seq(
      optional($._newlines),
      $.object_elem,
      repeat(seq(
        choice($._comma, $._newlines, seq($._comma, $._newlines)),
        $.object_elem
      )),
      optional($._comma),
      optional($._newlines),
    )),

    object_elem: $ => seq(
      $.expression,
      choice('=', ':'),
      $.expression,
    ),

    index: $ => choice($.new_index, $.legacy_index),

    new_index: $ => seq('[', $.expression, ']'),
    legacy_index: $ => seq('.', /[0-9]+/),

    get_attr: $ => seq('.', $.identifier),

    splat: $ => choice($.attr_splat, $.full_splat),

    attr_splat: $ => prec.right(seq(
      '.*',
      repeat($.get_attr),
    )),

    full_splat: $ => prec.right(seq(
      '[*]',
      repeat(choice($.get_attr, $.index)),
    )),

    for_expr: $ => choice($.for_tuple_expr, $.for_object_expr),

    for_tuple_expr: $ => seq(
      $._tuple_start,
      $.for_intro,
      $.expression,
      optional($.for_cond),
      $._tuple_end,
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
      $.identifier,
      $._function_call_start,
      optional($.function_arguments),
      optional($._newlines),
      $._function_call_end,
    ),

    _function_call_start: $ => token('('),
    _function_call_end: $ => token(')'),

    function_arguments: $ => prec.right(seq(
      optional($._newline),
      $.expression,
      repeat(seq(',', optional($._newline), $.expression,)),
      optional($._newline),
      optional(choice(',', $.ellipsis)),
    )),

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

    _newlines: $ => prec.right(repeat1($._newline)),

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
