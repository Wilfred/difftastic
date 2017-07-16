module.exports = grammar({
  name: 'bash',

  inline: $ => [
    $.statement,
    $.terminator,
    $.expression,
    $._variable_name
  ],

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

    // Statements

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
      $.word,
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
      $.expression,
      optional($.terminator),
      'in',
      $.terminator,
      repeat($.case_item),
      'esac'
    ),

    case_item: $ => seq(
      $.expression,
      ')',
      repeat($._terminated_statement),
      ';;'
    ),

    function_definition: $ => seq(
      optional('function'),
      rename($.leading_word, 'command_name'),
      '(',
      ')',
      $.compound_statement
    ),

    compound_statement: $ => seq(
      '{',
      repeat($._terminated_statement),
      '}'
    ),

    subshell: $ => seq(
      '(',
      repeat($._terminated_statement),
      ')'
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

    bracket_command: $ => choice(
      seq('[', repeat1($.expression), ']'),
      seq('[[', repeat1($.expression), ']]')
    ),

    // Commands

    command: $ => prec.left(seq(
      repeat(choice(
        $.environment_variable_assignment,
        $.file_redirect
      )),
      choice(
        rename(choice($.leading_word), 'command_name'),
        ':',
        $.string,
        $.raw_string,
        $.command_substitution
      ),
      optional(seq(
        /\s+/,
        repeat($.expression)
      )),
      repeat(choice(
        $.file_redirect,
        $.heredoc_redirect
      ))
    )),

    environment_variable_assignment: $ => seq(
      rename($.leading_word, 'variable_name'),
      '=',
      choice(
        $.expression,
        $._empty_value
      )
    ),

    file_redirect: $ => seq(
      optional($.file_descriptor),
      choice('<', '>', '>>', '&>', '&>>', '<&', '>&'),
      $.expression
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
          $.simple_expansion,
          $._heredoc_middle
        )),
        $._heredoc_end
      )
    ),

    // Expressions

    expression: $ => choice(
      $.word,
      $.string,
      $.raw_string,
      $.expansion,
      $.simple_expansion,
      $.command_substitution
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"$]+/,
        $.expansion,
        $.simple_expansion,
        $.command_substitution
      )),
      '"'
    ),

    raw_string: $ => /'[^']*'/,

    simple_expansion: $ => seq(
      '$',
      choice(
        rename($.simple_variable_name, 'variable_name'),
        $.special_variable_name
      )
    ),

    expansion: $ => seq(
      '${',
      $._variable_name,
      optional(seq(
        choice(':', ':?', '=', ':-'),
        $.expression
      )),
      '}'
    ),

    _variable_name: $ => choice(
      rename($.leading_word, 'variable_name'),
      $.special_variable_name
    ),

    command_substitution: $ => choice(
      seq('$(', $.command, ')'),
      seq('`', $.command, '`')
    ),

    leading_word: $ => /[^`"\\\s#=|;:{}()]+/,

    word: $ => /[^"`#\\\s$<>{}&;()]+/,

    comment: $ => /#.*/,

    simple_variable_name: $ => /\w+/,

    special_variable_name: $ => choice('*', '@', '#', '?', '-', '$', '!', '0', '_'),

    terminator: $ => choice(';', ';;', '\n', '&'),
  }
});
