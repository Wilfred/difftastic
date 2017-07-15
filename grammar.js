module.exports = grammar({
  name: 'bash',

  inline: $ => [$.statement, $.terminator, $.value],

  externals: $ => [
    $._simple_heredoc,
    $._heredoc_beginning,
    $._heredoc_middle,
    $._heredoc_end,
    $.file_descriptor,
    $._empty_value
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
      $.environment_variable_assignment,
      $.command,
      $.bracket_command,
      $.for_statement,
      $.while_statement,
      $.if_statement,
      $.case_statement,
      $.pipeline,
      $.list,
      $.subshell,
      $.function_definition
    ),

    for_statement: $ => seq(
      'for',
      rename($.word, 'argument'),
      'in',
      $._terminated_statement,
      $.do_group
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
      $.value,
      optional($.terminator),
      'in',
      $.terminator,
      repeat($.case_item),
      'esac'
    ),

    case_item: $ => seq(
      $.value,
      ')',
      repeat($._terminated_statement),
      ';;'
    ),

    function_definition: $ => seq(
      optional('function'),
      rename($.leading_word, 'command_name'),
      '(',
      ')',
      $.compound_command
    ),

    compound_command: $ => seq(
      '{',
      repeat($._terminated_statement),
      '}'
    ),

    bracket_command: $ => choice(
      seq('[', repeat1($.value), ']'),
      seq('[[', repeat1($.value), ']]')
    ),

    command: $ => seq(
      repeat(choice(
        $.environment_variable_assignment,
        $.file_redirect
      )),
      choice(
        rename(choice($.leading_word), 'command_name'),
        ':',
        $.quoted_argument,
        $.single_quoted_argument,
        $.command_substitution
      ),
      optional(seq(
        /\s+/,
        repeat($.value)
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

    subshell: $ => seq(
      '(',
      repeat($._terminated_statement),
      ')'
    ),

    environment_variable_assignment: $ => seq(
      rename($.leading_word, 'variable_name'),
      '=',
      choice(
        $.value,
        $._empty_value
      )
    ),

    value: $ => choice(
      rename($.word, 'argument'),
      $.command_substitution,
      $.quoted_argument,
      $.single_quoted_argument,
      $.expansion,
      $.operator_expansion
    ),

    quoted_argument: $ => seq(
      '"',
      repeat(choice(
        $._quoted_chars,
        $.expansion,
        $.operator_expansion,
        $.command_substitution
      )),
      '"'
    ),

    _quoted_chars: $ => /[^"$]+/,

    single_quoted_argument: $ => /'[^']*'/,

    expansion: $ => seq(
      '$',
      choice(
        rename($.word, 'variable_name'),
        '$'
      )
    ),

    operator_expansion: $ => seq(
      '${',
      rename($.leading_word, 'variable_name'),
      optional(seq(
        choice(':', ':?', '=', ':-'),
        $.value
      )),
      '}'
    ),

    command_substitution: $ => seq(
      '$(',
      $.command,
      ')'
    ),

    file_redirect: $ => seq(
      optional($.file_descriptor),
      choice('<', '>', '>>', '&>', '&>>', '<&', '>&'),
      $.value
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

    leading_word: $ => /[^"\\\s#=|;:{}()]+/,

    word: $ => /[^"#\\\s$<>{}&;()]+/,

    comment: $ => /#.*/,

    terminator: $ => choice(';', ';;', '\n', '&'),
  }
});
