module.exports = grammar({
  name: 'CMake',

  rules: {
    source_file: $ => repeat($.command_invocation),

    line_ending: $ => $.newline,
    space: $ => /[ \t]+/,
    newline: $ => /\n/,
    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,
    argument: $ => /[^ ()#\"\\]+/,

    command_invocation: $ => seq(
      repeat($.space),
      $.identifier,
      repeat($.space),
      $.parameter_list,
    ),
    parameter_list: $ => seq(
      '(',
      repeat($.argument),
      ')'
    )
  }
})
