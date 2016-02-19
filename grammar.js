module.exports = grammar({
  name: 'ruby',

  extras: $ => [
    $.comment,
    $._line_break,
    /[ \t\r]/
  ],

  rules: {
    program: $ => $._compound_statement,

    _compound_statement: $ => repeat(seq($._statement, optional($._terminator))),

  	_statement: $ => choice(
      seq($._call, "do", optional("|", $._block_variable, "|"), $._compound_statement, "end"),
      seq("undef", $._function_name),
      seq("alias", $._function_name, $._function_name),
      seq($._statement, "if", $._expression),
      seq($._statement, "while", $._expression),
      seq($._statement, "unless", $._expression),
      seq($._statement, "until", $._expression),
      $._expression
    ),

    _call: $ => choice($._function_call, $._command),

    _call_arguments: $ => choice(
      commaSep1($._argument),
      $._command
    ),

    _command: $ => choice(
      seq("super", $._call_arguments)
    ),
    _function_call: $ => choice("super"),

  	_expression: $ => choice($._argument),

  	_argument: $ => choice($._primary),

  	_primary: $ => choice(
      seq("(", $._compound_statement, ")"),
      $._variable
    ),

    _block_variable: $ => choice($._lhs, $._mlhs),
    _mlhs: $ => choice(
      seq($._mlhs_item, optional(seq($._mlhs_item, repeat(",", $._mlhs_item))), optional(seq("*", optional($._lhs)))),
      seq("*", $._lhs)
    ),
    _mlhs_item: $ => choice($._lhs, seq("(", $._mlhs, ")")),
    _lhs: $ => choice(
      $._variable,
      seq($._primary, "[", commaSep($._argument), "]"),
      seq($._primary, ".", $.identifier)
    ),
  	_variable: $ => choice($.identifier , 'nil', 'self'),

  	identifier: $ => seq(repeat(choice('@', '$')), /[a-zA-Z_][a-zA-Z0-9_]*/),

  	comment: $ => token(choice(
      seq('#', /.*/),
      seq(
        '=begin\n',
        repeat(/.*\n/),
        '=end\n'
      )
    )),

    symbol: $ => token(seq(':', choice($._function_name, $._variable))),

    _function_name: $ => choice($.identifier, '..', '|'),

    _line_break: $ => '\n',
  	_terminator: $ => choice($._line_break, ';'),
  }
});

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep (rule, separator) {
  return optional(sep1(rule, separator));
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
