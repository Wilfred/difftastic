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
    $._literal,
    $._primary_expression,
    $._simple_variable_name,
    $._special_variable_name,
  ],

  externals: $ => [
    $.heredoc_start,
    $._simple_heredoc_body,
    $._heredoc_body_beginning,
    $._heredoc_body_middle,
    $._heredoc_body_end,
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
      $.test_command,
      $.negated_command,
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
      optional(seq(
        'in',
        repeat1($._literal)
      )),
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
      )),
      optional($.heredoc_body)
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
      $._literal,
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
      $._literal,
      repeat(seq('|', $._literal)),
      ')',
      optional(seq(
        repeat($._terminated_statement),
        optional($._statement)
      )),
      prec(1, ';;')
    ),

    last_case_item: $ => seq(
      $._literal,
      repeat(seq('|', $._literal)),
      ')',
      optional(seq(
        repeat($._terminated_statement),
        optional($._statement)
      )),
      optional(prec(1, ';;'))
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

    // Commands

    negated_command: $ => seq(
      '!',
      choice(
        $.command,
        $.test_command
      )
    ),

    test_command: $ => seq(
      choice(
        seq('[', $._expression, ']'),
        seq('[[', $._expression, ']]')
      ),
      repeat(choice(
        $.file_redirect,
        $.heredoc_redirect,
        $.herestring_redirect
      ))
    ),

    declaration_command: $ => prec.left(seq(
      choice('declare', 'typeset', 'export', 'readonly', 'local'),
      repeat(choice(
        $._literal,
        $._simple_variable_name,
        $.variable_assignment
      ))
    )),

    unset_command: $ => prec.left(seq(
      choice('unset', 'unsetenv'),
      repeat(choice(
        $._literal,
        $._simple_variable_name
      ))
    )),

    command: $ => prec.left(seq(
      repeat(choice(
        $.variable_assignment,
        $.file_redirect
      )),
      $.command_name,
      repeat(choice(
        $._literal,
        seq(
          choice('=~', '=='),
          choice($.regex, $._literal)
        )
      )),
      repeat(choice(
        $.file_redirect,
        $.heredoc_redirect,
        $.herestring_redirect
      )),
      optional($.heredoc_body)
    )),

    command_name: $ => $._literal,

    variable_assignment: $ => seq(
      choice(
        $.variable_name,
        $.subscript
      ),
      choice(
        '=',
        '+='
      ),
      choice(
        $._literal,
        $.array,
        $._empty_value
      )
    ),

    subscript: $ => seq(
      $.variable_name,
      '[',
      $._literal,
      optional($._concat),
      ']',
      optional($._concat)
    ),

    file_redirect: $ => prec.left(seq(
      optional($.file_descriptor),
      choice('<', '>', '>>', '&>', '&>>', '<&', '>&'),
      $._literal
    )),

    heredoc_redirect: $ => seq(
      choice('<<', '<<-'),
      $.heredoc_start
    ),

    heredoc_body: $ => choice(
      $._simple_heredoc_body,
      seq(
        $._heredoc_body_beginning,
        repeat(choice(
          $.expansion,
          $.simple_expansion,
          $._heredoc_body_middle
        )),
        $._heredoc_body_end
      )
    ),

    herestring_redirect: $ => seq(
      '<<<',
      $._literal
    ),

    // Expressions

    _expression: $ => choice(
      $._literal,
      $.unary_expression,
      $.binary_expression,
      $.parenthesized_expression
    ),

    binary_expression: $ => prec.left(choice(
      seq(
        $._expression,
        choice('==', '=', '=~', '!=', '<', '>', '||', '&&', $.test_operator),
        $._expression
      ),
      seq(
        $._expression,
        choice('==', '=~'),
        $.regex
      )
    )),

    unary_expression: $ => prec.right(seq(
      choice('!', $.test_operator),
      $._expression
    )),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    // Literals

    _literal: $ => choice(
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
      repeat($._literal),
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

    string_expansion: $ => seq('$', choice($.string, $.raw_string)),

    expansion: $ => seq(
      '${',
      optional('#'),
      choice(
        seq(
          $.variable_name,
          '=',
          optional($._literal)
        ),
        seq(
          choice(
            $.subscript,
            $._simple_variable_name,
            $._special_variable_name
          ),
          optional(seq(
            token(prec(1, '/')),
            alias($.regex_without_right_brace, $.regex)
          )),
          repeat(choice(
            $._literal,
            ':', ':?', '=', ':-', '%', '-', '#'
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

    test_operator: $ => token(prec(1, seq('-', /[a-zA-Z]+/))),

    regex: $ => /([^"\s]|\\.)([^\s]|\\.)*/,

    regex_without_right_brace: $ => /([^"\s}]|\\.)([^\s}]|\\.)*/,

    _terminator: $ => choice(';', ';;', '\n', '&')
  }
});

function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('')
  return new RegExp('[^' + negatedString + ']')
}
