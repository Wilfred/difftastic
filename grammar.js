module.exports = grammar({
  name: 'bash',

  inline: $ => [$.control_operator],

  externals: $ => [
    $._simple_heredoc,
    $._heredoc_beginning,
    $._heredoc_middle,
    $._heredoc_end
  ],

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
      repeat(choice(
        $.environment_variable_assignment,
        $.file_redirect
      )),
      rename($.leading_word, 'command_name'),
      optional(seq(
        /\s+/,
        repeat(choice(
          rename($.word, 'argument'),
          $.expansion,
          $.operator_expansion
        ))
      )),
      repeat(choice(
        $.file_redirect,
        $.heredoc_redirect
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

    expansion: $ => seq(
      '$',
      rename($.word, 'variable_name')
    ),

    operator_expansion: $ => seq(
      '${',
      rename($.leading_word, 'variable_name'),
      optional(seq(
        choice(':', ':?', '='),
        rename($.word, 'argument')
      )),
      '}'
    ),

    file_redirect: $ => seq(
      optional($.file_descriptor),
      choice('<', '>', '<&', '>&'),
      choice(
        $.file_descriptor,
        rename($.word, 'file_name')
      )
    ),

    heredoc_redirect: $ => seq(
      choice('<<', '<<-'),
      $.heredoc
    ),

    heredoc: $ => choice(
      $._simple_heredoc,
      seq(
        $._heredoc_beginning,
        repeat(choice(
          $.expansion,
          $.operator_expansion,
          $._heredoc_middle
        )),
        $._heredoc_end
      )
    ),

    file_descriptor: $ => token(prec(1, /\d+/)),

    leading_word: $ => /[^\s=|;:{}]+/,

    word: $ => /[^\s$<>{}&]+/,

    control_operator: $ => choice(
      '\n',
      ';;'
    )
  }
});
