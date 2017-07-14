module.exports = grammar({
  name: 'bash',

  inline: $ => [$.control_operator],

  rules: {
    program: $ => repeat($.command),

    command: $ => seq(
      choice(
        $.simple_command,
        $.pipeline,
        $.list
      ),
      $.control_operator
    ),

    simple_command: $ => seq(
      repeat($.environment_variable_assignment),
      rename($.leading_word, 'command_name'),
      optional(seq(
        /\s+/,
        repeat(rename($.word, 'argument'))
      ))
    ),

    pipeline: $ => prec.left(seq(
      $.simple_command,
      choice('|', '|&'),
      $.simple_command
    )),

    list: $ => prec.left(seq(
      choice(
        $.simple_command,
        $.list,
        $.pipeline
      ),
      choice('&&', ';'),
      choice(
        $.simple_command,
        $.pipeline
      )
    )),

    environment_variable_assignment: $ => seq(
      rename($.leading_word, 'variable_name'),
      '=',
      rename($.word, 'argument')
    ),

    leading_word: $ => /[^\s=|;]+/,

    word: $ => /[^\s]+/,

    control_operator: $ => choice(
      '\n',
      ';;'
    )
  }
});
