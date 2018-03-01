const SPECIAL_CHARACTERS = [
  "'", '"',
  '<', '>',
  '{', '}',
  '\\[', '\\]',
  '(', ')',
  '`', '$',
  '|', '&', ';',
  '\\',
  '\\s',
  '#',
];

module.exports = grammar({
  name: 'bash',

  inline: $ => [
    $._statement,
    $._terminator,
    $._expression,
    $._primary_expression,
    $._simple_variable_name,
    $._special_variable_name,
  ],

  externals: $ => [
    $._simple_heredoc,
    $._heredoc_beginning,
    $._heredoc_middle,
    $._heredoc_end,
    $.file_descriptor,
    $._empty_value,
    $._concat,
    $.variable_name, // Variable name followed by an operator like '=' or '+='
    '}',
    ']',
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
      $.variable_assignment,
      $.command,
      $.declaration_command,
      $.unset_command,
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
      $.do_group,
      repeat(choice(
        $.file_redirect,
        $.heredoc_redirect,
        $.herestring_redirect
      ))
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
      optional(seq(
        repeat($.case_item),
        alias($.last_case_item, $.case_item),
      )),
      'esac'
    ),

    case_item: $ => seq(
      $._expression,
      repeat(seq('|', $._expression)),
      ')',
      repeat($._terminated_statement),
      ';;'
    ),

    last_case_item: $ => seq(
      $._expression,
      repeat(seq('|', $._expression)),
      ')',
      repeat($._terminated_statement),
      optional(';;')
    ),

    function_definition: $ => seq(
      choice(
        seq('function', $.word, optional(seq('(', ')'))),
        seq($.word, '(', ')')
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

    bracket_command: $ => {
      const contents = repeat1(choice(
        $._expression,
        seq('=~', choice(
          $.regex,
          $._expression
        ))
      ))

      return choice(
        seq('[', contents, ']'),
        seq('[[', contents, ']]')
      )
    },

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
        $.heredoc_redirect,
        $.herestring_redirect
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

    declaration_command: $ => prec.left(seq(
      choice('declare', 'typeset', 'export', 'readonly', 'local'),
      repeat(choice(
        $._expression,
        $._simple_variable_name,
        $.variable_assignment
      ))
    )),

    unset_command: $ => prec.left(seq(
      choice('unset', 'unsetenv'),
      repeat(choice(
        $._expression,
        $._simple_variable_name
      ))
    )),

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
      optional($._concat),
      ']',
      optional($._concat)
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

    herestring_redirect: $ => seq(
      '<<<',
      $._expression
    ),

    // Expressions

    _expression: $ => choice(
      $.concatenation,
      $._primary_expression,
      alias(prec(-2, $._special_characters), $.word)
    ),

    _primary_expression: $ => choice(
      $.word,
      $.string,
      $.raw_string,
      $.expansion,
      $.simple_expansion,
      $.string_expansion,
      $.command_substitution,
      $.process_substitution
    ),

    concatenation: $ => prec(-1, seq(
      choice(
        $._primary_expression,
        $._special_characters,
      ),
      repeat1(prec(-1, seq(
        $._concat,
        choice(
          $._primary_expression,
          $._special_characters,
        )
      ))),
    )),

    _special_characters: $ => token(prec(-1, repeat1(choice('{', '}', '[', ']')))),

    string: $ => seq(
      '"',
      repeat(seq(
        choice(
          seq(optional('$'), $._string_content),
          $.expansion,
          $.simple_expansion,
          $.command_substitution
        ),
        optional($._concat)
      )),
      '"'
    ),

    _string_content: $ => token(prec(-1, /([^"`$]|\\.)+/)),

    array: $ => seq(
      '(',
      repeat($._expression),
      ')'
    ),

    raw_string: $ => /'[^']*'/,

    simple_expansion: $ => seq(
      '$',
      choice(
        $._simple_variable_name,
        $._special_variable_name,
        alias('#', $.special_variable_name)
      )
    ),

    string_expansion: $ => seq('$', $.string),

    expansion: $ => seq(
      '${',
      optional('#'),
      choice(
        seq(
          $.variable_name,
          '=',
          optional($._expression)
        ),
        seq(
          choice(
            $.subscript,
            $._simple_variable_name,
            $._special_variable_name
          ),
          repeat(choice(
            $._expression,
            ':', ':?', '=', ':-', '%', '/', '-', '#'
          ))
        ),
      ),
      '}'
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

    comment: $ => token(prec(-10, /#.*/)),

    _simple_variable_name: $ => alias(/\w+/, $.variable_name),

    _special_variable_name: $ => alias(choice('*', '@', '?', '-', '$', '0', '_'), $.special_variable_name),

    word: $ => token(repeat1(choice(
      noneOf(...SPECIAL_CHARACTERS),
      seq('\\', noneOf('\\s'))
    ))),

    regex: $ => /\S+/,

    _terminator: $ => choice(';', ';;', '\n', '&')
  }
});

function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('')
  return new RegExp('[^' + negatedString + ']')
}
