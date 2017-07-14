module.exports = grammar({
  name: 'bash',

  inline: $ => [$.statement, $.terminator],

  externals: $ => [
    $._simple_heredoc,
    $._heredoc_beginning,
    $._heredoc_middle,
    $._heredoc_end
  ],

  extras: $ => [
    $.comment,
    token(choice(/\s/, '\\\n')),
  ],

  rules: {
    program: $ => repeat($._terminated_statement),

    _terminated_statement: $ => seq(
      $.statement,
      $.terminator
    ),

    statement: $ => choice(
      $.command,
      $.while_statement,
      $.if_statement,
      $.case_statement,
      $.pipeline,
      $.list
    ),

    while_statement: $ => seq(
      'while',
      $._terminated_statement,
      $.do_group
    ),

    do_group: $ => seq(
      'do',
      repeat($._terminated_statement),
      'done'
    ),

    if_statement: $ => seq(
      'if',
      $._terminated_statement,
      'then',
      repeat($._terminated_statement),
      repeat($.elif_clause),
      optional($.else_clause),
      'fi'
    ),

    elif_clause: $ => seq(
      'elif',
      $._terminated_statement,
      'then',
      repeat($._terminated_statement)
    ),

    else_clause: $ => seq(
      'else',
      repeat($._terminated_statement)
    ),

    case_statement: $ => seq(
      'case',
      rename($.word, 'argument'),
      optional($.terminator),
      'in',
      $.terminator,
      repeat($.case_item),
      'esac'
    ),

    case_item: $ => seq(
      rename($.word, 'argument'),
      ')',
      repeat($._terminated_statement),
      optional(';;')
    ),

    command: $ => seq(
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

    pipeline: $ => prec.left(1, seq(
      $.statement,
      choice('|', '|&'),
      $.statement
    )),

    list: $ => prec.left(seq(
      $.statement,
      choice('&&', '||'),
      $.statement
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

    leading_word: $ => /[^\\\s#=|;:{}]+/,

    word: $ => /[^#\\\s$<>{}&;)]+/,

    comment: $ => /#.*/,

    terminator: $ => choice(';', ';;', '\n'),
  }
});
