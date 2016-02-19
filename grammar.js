module.exports = grammar({
  name: 'ruby',

  extras: $ => [
    $.comment,
    $._line_break,
    /[ \t\r]/
  ],

  rules: {
    program: $ => sep($._statement, $._terminator),

  	_statement: $ => choice(
      $._declaration,
      seq($._call, "do", optional("|", $._block_variable, "|"), sep($._statement, $._terminator), "end"),
      seq("undef", $._function_name),
      seq("alias", $._function_name, $._function_name),
      seq($._statement, "if", $._expression),
      seq($._statement, "while", $._expression),
      seq($._statement, "unless", $._expression),
      seq($._statement, "until", $._expression),
      $._expression
    ),

    _declaration: $ => choice(
      $.method_declaration,
      $.class_declaration,
      $.module_declaration
    ),

    method_declaration: $ => seq(
      "def", $._function_name, choice(seq("(", optional($.argument_list), ")"), seq(optional($.argument_list), $._terminator)),
      sep($._statement, $._terminator),
      "end"
    ),

    argument_list: $ => commaSep1(seq(optional(choice("*", "&")), $.identifier)),

    class_declaration: $ => seq("class", $.identifier, optional(seq("<", sep1($.identifier, "::"))), sep($._statement, $._terminator), "end"),

    module_declaration: $ => seq("module", $.identifier, sep($._statement, $._terminator), "end"),

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
      seq("(", sep1($._statement, $._terminator), ")"),
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
  return sep1(rule, ',')
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}

function optionalParens (rule) {
  return choice(seq("(", rule, ")"), rule)
}
