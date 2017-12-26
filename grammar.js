const SPECIAL_CHARACTERS = [
  "'", '"',
  '<', '>',
  '{', '}',
  '(', ')',
  '`', '$',
  '&', ';',
  '\\',
  '\\s',
];

module.exports = grammar({
  name: 'bash',

  inline: $ => [
    $._statement,
    $._terminator,
    $._expression,
    $._variable_name,
  ],

  externals: $ => [
    $._simple_heredoc,
    $._heredoc_beginning,
    $._heredoc_middle,
    $._heredoc_end,
    $.file_descriptor,
    $._empty_value,
    $._concat,
    $.variable_name,
    '\n',
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
      optional('function'),
      $.word,
      optional(seq('(', ')')),
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
        $.environment_variable_assignment,
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

    environment_variable_assignment: $ => seq(
      choice(
        $.variable_name,
        $.subscript
      ),
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
      $.word,
      $.string,
      $.raw_string,
      $.expansion,
      $.simple_expansion,
      $.command_substitution,
      $.process_substitution,
      $.concatenation
    ),

    concatenation: $ => prec(-1, seq(
      choice(
        $.word,
        $.string,
        $.raw_string,
        $.expansion,
        $.simple_expansion,
        $.command_substitution,
        $.process_substitution
      ),
      repeat1(seq(
        $._concat,
        choice(
          $.word,
          $.string,
          $.raw_string,
          $.expansion,
          $.simple_expansion,
          $.command_substitution,
          $.process_substitution
        )
      ))
    )),

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"`$]+/,
        $.expansion,
        $.simple_expansion,
        $.command_substitution
      )),
      '"'
    ),

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
          $._expression
        )
      ),
      '}'
    ),

    _variable_name: $ => choice(
      alias($.simple_variable_name, $.variable_name),
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

    word: $ => token(repeat1(choice(
      noneOf('#', ...SPECIAL_CHARACTERS),
      seq('\\', noneOf('\\s'))
    ))),

    comment: $ => token(prec(-1, /#.*/)),

    simple_variable_name: $ => /\w+/,

    special_variable_name: $ => choice('*', '@', '#', '?', '-', '$', '!', '0', '_'),

    _terminator: $ => choice(';', ';;', '\n', '&')
  }
});

function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('')
  return new RegExp('[^' + negatedString + ']')
}
