const
  newline = '\n',
  space = ' ',
  decimal = /[0-9]/

module.exports = grammar({
  name: 'hcl',

  conflicts: $ => [
      [$.body],
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
      repeat1(newline),
    )),

    attribute: $ => seq(
      $.identifier, 
      '=', 
      $.expression
    ),

    block: $ => seq(
      $.identifier,
      repeat(choice($.string_lit, $.identifier)),
      '{',
      repeat1(newline),
      optional($.body),
      // newline is handled in body
      '}',
    ),

    expression: $ => choice(
      $.expr_term,
      //$.operation,
      //$.conditional,
    ),

    expr_term: $ => choice(
      $.literal_value,
      // $.collection_value,
      // $.template_expr,
      $.variable_expr,
      // $.function_call,
      // $.for_expr,
      // seq($.expr_term, $.index),
      // seq($.expr_term, $.get_attr),
      // seq($.expr_term, $.splat),
      // seq($.expr_term, $.splat),
      seq('(', $.expression, ')'),
    ),

    literal_value: $ => choice(
      $.numeric_lit,
      $.string_lit,
      'true',
      'false',
      'null',
    ),

    numeric_lit: $ => seq(
      repeat1(decimal), 
      optional(seq('.', repeat1(decimal))), 
      optional(seq(choice('e', 'E'), optional(choice('+', '-')), repeat1(decimal))),
    ),

    variable_expr: $ => $.identifier,

    // TODO: template expressions
    //template_expr: $ => choice(
      //$.quoted_template, 
      //$.heredoc_template,
    //),
    //quoted_template: $ => seq('"', /\w+/, '"'),
    //heredoc_template: $ => '',

    // TODO: string_literals are special template literals
    string_lit: $ => seq('"', /\w+/, '"'),

    // TODO: unicode identifier
    identifier: $ => /\w+/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('#', /.*/),
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
});
