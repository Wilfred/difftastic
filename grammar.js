module.exports = grammar({
  name: 'CMake',

  rules: {
    source_file: $ => repeat($.command_invocation),

    line_ending: $ => $.newline,
    seperation: $ => choice($.space, $.line_ending),
    space: $ => /[ \t]+/,
    newline: $ => /\n/,
    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    argument: $ => choice(
      $.unquoted_argument,
      $.bracket_argument,
    ),

    unquoted_argument: $ => repeat1(/[^ ()#\"\\]/),

    bracket_argument: $ => seq(
      $._bracket_open,
      optional($._bracket_content),
      $._bracket_close,
    ),
    _bracket_open: $ => seq('[', repeat('='), '['),
    _bracket_content: $ => repeat1(/[^\]]/),
    _bracket_close: $ => seq(']', repeat('='), ']'),


    arguments: $ => seq($.argument, repeat($._seperated_arguments)),
    _seperated_arguments: $ => prec.left(seq(
      repeat1($.seperation),
      optional($.argument)
    )),

    command_invocation: $ => seq(
      repeat($.space),
      $.identifier,
      repeat($.space),
      '(',
      repeat($.seperation),
      optional($.arguments),
      ')'
    ),

  }
})
