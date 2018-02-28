module.exports = grammar({
  name: 'bash',

  inline: $ => [
    $._statement,
    $._terminator,
    $._expression,
    $._primary_expression,
    $._variable_name,
    $._simple_variable_name,
    $._simple_word,
  ],

  externals: $ => [
    $._simple_heredoc,
    $._heredoc_beginning,
    $._heredoc_middle,
    $._heredoc_end,
    $.file_descriptor,
    $.word,
    $._empty_value,
    $._concat,
    $.variable_name, // Variable name followed by an operator like '=' or '+='
    '\n',
    ']',
    ']]',
    '}',
  ],

  extras: $ => [
    $.comment,
    token(choice(/\s/, '\\\n')),
  ],

  rules: {
    program: $ => repeat($._terminated_statement),

    _terminated_statement: $ => seq(
      $._statement,
      $._terminator
    ),

    // Statements

    _statement: $ => choice(
      $.variable_assignment,
      $.command,
      $.declaration_command,
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
      $._simple_variable_name,
      'in',
      repeat1($._expression),
      $._terminator,
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
      $._expression,
      optional($._terminator),
      'in',
      $._terminator,
      repeat($.case_item),
      'esac'
    ),

    case_item: $ => seq(
      $._expression,
      repeat(seq('|', $._expression)),
      ')',
      repeat($._terminated_statement),
      ';;'
    ),

    function_definition: $ => seq(
      choice(
        seq('function', $._simple_variable_name, optional(seq('(', ')'))),
        seq($._simple_variable_name, '(', ')')
      ),
      $.compound_statement,
      optional($.file_redirect)
    ),

    compound_statement: $ => seq(
      '{',
      repeat($._terminated_statement),
      '}'
    ),

    subshell: $ => seq(
      '(',
      repeat($._terminated_statement),
      $._statement,
      optional($._terminator),
      ')'
    ),

    pipeline: $ => prec.left(1, seq(
      $._statement,
      choice('|', '|&'),
      $._statement
    )),

    list: $ => prec.left(-1, seq(
      $._statement,
      choice('&&', '||'),
      $._statement
    )),

    bracket_command: $ => choice(
      seq('[', repeat1($._expression), ']'),
      seq('[[', repeat1($._expression), ']]')
    ),

    // Commands

    command: $ => prec.left(seq(
      repeat(choice(
        $.variable_assignment,
        $.file_redirect
      )),
      $.command_name,
      repeat($._expression),
      repeat(choice(
        $.file_redirect,
        $.heredoc_redirect
      ))
    )),

    command_name: $ => $._expression,

    variable_assignment: $ => seq(
      choice(
        $.variable_name,
        $.subscript
      ),
      $._assignment
    ),

    declaration_command: $ => seq(
      choice('declare', 'typeset', 'export', 'readonly', 'local'),
      repeat(choice(
        $.word,
        $._simple_variable_name,
        $.variable_assignment
      ))
    ),

    _assignment: $ => seq(
      choice(
        '=',
        '+='
      ),
      choice(
        $._expression,
        $.array,
        $._empty_value
      )
    ),

    subscript: $ => seq(
      $.variable_name,
      '[',
      $._expression,
      ']'
    ),

    file_redirect: $ => prec.left(seq(
      optional($.file_descriptor),
      choice('<', '>', '>>', '&>', '&>>', '<&', '>&'),
      $._expression
    )),

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

    _expression: $ => choice(
      $.concatenation,
      $._primary_expression
    ),

    _primary_expression: $ => choice(
      $.word,
      $._simple_word,
      $.string,
      $.raw_string,
      $.expansion,
      $.simple_expansion,
      $.command_substitution,
      $.process_substitution
    ),

    concatenation: $ => prec(-1, seq(
      $._primary_expression,
      repeat1(seq($._concat, $._primary_expression))
    )),

    string: $ => seq(
      '"',
      repeat(choice(
        $._string_content,
        $.expansion,
        $.simple_expansion,
        $.command_substitution
      )),
      '"'
    ),

    _string_content: $ => /([^"`$]|\\.)*/,

    array: $ => seq(
      '(',
      repeat($._expression),
      ')'
    ),

    raw_string: $ => /'[^']*'/,

    simple_expansion: $ => seq(
      '$',
      $._variable_name
    ),

    expansion: $ => seq(
      '${',
      choice(
        $._variable_name,
        seq('#', $._variable_name),
        seq('#', $._variable_name, '[', '@', ']'),
        seq($._variable_name, '[', '@', ']'),
        seq(
          $._variable_name,
          choice(':', ':?', '=', ':-', '%', '/'),
          optional(seq($._expression, optional($._concat)))
        )
      ),
      '}'
    ),

    _variable_name: $ => choice(
      $._simple_variable_name,
      $.special_variable_name
    ),

    command_substitution: $ => choice(
      seq('$(', $._statement, ')'),
      prec(1, seq('`', $._statement, '`'))
    ),

    process_substitution: $ => seq(
      choice('<(', '>('),
      $._statement,
      ')'
    ),

    comment: $ => token(prec(-1, /#.*/)),

    _simple_variable_name: $ => alias($.identifier, $.variable_name),

    _simple_word: $ => alias($.identifier, $.word),

    identifier: $ => /\w+/,

    special_variable_name: $ => choice('*', '@', '#', '?', '-', '$', '!', '0', '_'),

    _terminator: $ => choice(';', ';;', '\n', '&')
  }
});
