// SPDX-License-Identifier: 0BSD
// SPDX-FileCopyrightText: 2022 Tobias Frilling

module.exports = grammar({
  name: 'elvish',

  extras: $ => [
    /\s/,
    $.comment
  ],

  word: $ => $.identifier,

  inline: $ => [
    $._statement,
    $._expression,
    $._literal,
    $._string_like,
    $._terminator,
  ],

  rules: {
    source_file: $ => optional($._statements),

    comment: $ => token(seq('#', /.*/)),

    _statements: $ => prec(1, seq(
      repeat(seq(
        $._statement,
        $._terminator
      )),
      $._statement,
      optional($._terminator)
    )),

    _statement: $ => choice(
      $.command,
      $.if,
      $.while,
      $.for,
      $.try,
      $.import,
      $.function_definition,
      $.variable_declaration,
      $.variable_assignment,
      $.temporary_assignment,
      $.variable_deletion,
      $.lambda,
      $.pipeline,
    ),

    _expression: $ => choice(
      $._literal,
      $.variable,
      $.output_capture,
      $.exception_capture,
      $.braced_list,
      $.indexing,
      $.lambda,
      $.wildcard
    ),

    _literal: $ => choice(
      $.number,
      $._string_like,
      $.list,
      $.map,
    ),

    _terminator: $ => choice(";", "\n"),

    identifier: $ => /[\p{L}\p{N}_:~-]+/,


    // ==========
    // Statements
    // ==========
    //

    import: $ => seq(
      "use",
      $._string_like,
      optional($._string_like)
    ),

    command: $ => seq(
      field("head", choice(
        $.identifier,
        $.variable,
        $.output_capture,
        "+", "-", "*", "/", "%", "<", "<=","==", "!=",
        ">", ">=", "<s", "<=s", "==s", "!=s", ">s", ">=s"
      )),
      repeat(field("argument", choice($._expression, $.option))),
      optional($.redirection),
      optional("&"),
    ),

    pipeline: $ => seq(
      repeat1(seq($.command, "|")),
      $.command
    ),

    redirection: $ => {
      const port = token(
        choice(/\d+/, "-", "stdin", "stdout", "stderr")
      )
      return seq(
        choice(
          ">", "<", ">>", "<>",
          // Why do I have to wrap this in a token?
          alias(token(
            seq(port, token.immediate(">"))
          ), $.io_port),
        ),
        choice(
          alias($.bareword, $.file),
          alias(token(seq(optional("&"), port)), $.io_port)
        )
      )
    },

    variable_declaration: $ => seq("var", $._assignment),

    variable_assignment: $ => seq("set", $._assignment),

    temporary_assignment: $ => seq("tmp", $._assignment),

    variable_deletion: $ => seq("del", repeat1($.identifier)),

    _assignment: $ => seq(
      alias(repeat1(seq(
          optional("@"),
          $.identifier,
          repeat(seq(
            token.immediate("["),
            alias(repeat1($._expression), $.indices),
            "]"
          ))
        )),
        $.lhs
      ),
      optional(seq(
        "=",
        alias(repeat1($._expression), $.rhs)
      ))
    ),

    function_definition: $ => seq(
      "fn", $.identifier, $.lambda
    ),

    if: $ => seq(
      "if", field("condition", $._expression),
      "{", alias($._statements, $.chunk), "}",
      optional($.elif),
      optional($.else),
    ),

    elif: $ => seq(
      "elif", field("condition", $._expression),
      "{", alias($._statements, $.chunk), "}"
    ),

    else: $ => seq("else", "{", alias($._statements, $.chunk), "}"),

    while: $ => seq(
      "while", field("condition", $._expression),
      "{", alias($._statements, $.chunk), "}",
      optional($.else),
    ),

    for: $ => seq(
      "for",
      field("var", $.identifier),
      field("container", $._expression),
      "{", alias($._statements, $.chunk), "}",
      optional($.else),
    ),

    try: $ => seq(
      "try", "{", alias($._statements, $.chunk), "}",
      optional($.catch),
      optional($.else),
      optional($.finally),
    ),

    catch: $ => seq(
      "catch", field("exception", $.identifier),
      "{", alias($._statements, $.chunk), "}"
    ),

    finally: $ => seq("finally", "{", alias($._statements, $.chunk), "}"),


    // ===========
    // Expressions
    // ===========

    lambda: $ => seq(
      "{",
      choice(/\s+/, $.parameter_list),
      alias($._statements, $.chunk),
      "}"
    ),

    parameter_list: $ => seq(
      "|",
      repeat1(field(
        "parameter",
        choice(
          $.option,
          seq(optional("@"), $.identifier),
        )
      )),
      "|"
    ),

    option: $ => seq(
      "&", $.identifier, "=", $._expression
    ),

    indexing: $ => seq(
      choice(
        $.variable,
        $.list,
        $.map,
        $.output_capture,
      ),
      repeat1(seq(
        token.immediate("["),
        alias(repeat1($._expression), $.indices),
        "]"
      )),
    ),

    braced_list: $ => seq(
      "{", repeat($._expression), "}"
    ),

    output_capture: $ => seq(
      "(", alias($._statements, $.chunk), ")"
    ),

    exception_capture: $ => seq(
      "?(", alias($._statements, $.chunk), ")"
    ),

    variable: $ => choice(
      seq("$", optional("@"), $.identifier),
    ),

    number: $ => {
      const decimal = /\d(_?\d)*/
      const integer = choice(
        decimal,
        seq(choice("0x", "0X"), /[\da-fA-F](_?[\da-fA-F])*/),
        seq(choice("0o", "0O"), /[0-7](_?[0-7])*/),
        seq(choice('0b', '0B'), /[0-1](_?[0-1])*/),
      )
      return token(seq(
        optional(choice("+", "-")),
        choice(
          integer,
          seq(integer, "/", integer),
          seq(
            choice(
              seq(decimal, optional("."), optional(decimal)),
              seq(".", decimal)
            ),
            optional(seq(/[eE][+-]?/, decimal))
          ),
          "Inf",
          "NaN"
        )
      ))
    },

    _string_like: $ => choice($.string, $.bareword),

    string: $ => token(choice(
      seq("'", /([^']|'')*/, "'"),
      seq('"', /([^"]|\\")*/, '"')
    )),

    bareword: $ => /[\p{L}\p{N}!%+,./:@\\_~=-]+/,

    wildcard: $ => seq(
      choice("*", "**", "?"),
      repeat(seq(
        token.immediate("["),
        alias($._expression, $.modifier),
        "]"
      ))
    ),

    list: $ => seq("[", repeat($._expression), "]"),

    map: $ => seq("[", repeat1($.pair), "]"),

    pair: $ => seq(
      "&",
      field("key", $.identifier),
      "=",
      field("value", $._expression)
    ),
  }
});
