module.exports = grammar({
  name: 'CMake',

  rules: {
    source_file: $ => repeat($.command_invocation),

    line_ending: $ => $.newline,
    space: $ => /[ \t]+/,
    newline: $ => /\n/,
    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,
    argument: $ => /[^ ()#\"\\]+/,
    seperation: $ => choice($.space, $.line_ending),

    arguments: $ => seq($.argument, repeat($._seperated_arguments)),
    _seperated_arguments: $ => prec.left(1, seq(
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
