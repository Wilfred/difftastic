/**
 * @file Bash grammar for tree-sitter
 * @author Max Brunsfeld
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const SPECIAL_CHARACTERS = [
  '\'', '"',
  '<', '>',
  '{', '}',
  '\\[', '\\]',
  '(', ')',
  '`', '$',
  '|', '&', ';',
  '\\',
  '\\s',
];

module.exports = grammar({
  name: 'bash',

  conflicts: $ => [
    [$._expression, $.command_name],
    [$.command, $.variable_assignments],
    [$.compound_statement],
  ],

  inline: $ => [
    $._statement,
    $._terminator,
    $._literal,
    $._statements2,
    $._primary_expression,
    $._simple_variable_name,
    $._multiline_variable_name,
    $._special_variable_name,
    $._c_word,
    $._statement_not_subshell,
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
    $.regex,
    $.extglob_pattern,
    $._bare_dollar,
    '}',
    ']',
    '<<',
    '<<-',
    '\n',
  ],

  extras: $ => [
    $.comment,
    /\s/,
    /\\\r?\n/,
    /\\( |\t|\v|\f)/,
  ],

  supertypes: $ => [
    $._statement,
    $._expression,
    $._primary_expression,
  ],

  word: $ => $.word,

  rules: {
    program: $ => optional($._statements),

    _statements: $ => prec(1, seq(
      repeat(seq(
        $._statement,
        optional(seq('\n', $.heredoc_body)),
        $._terminator,
      )),
      $._statement,
      optional(seq('\n', $.heredoc_body)),
      optional($._terminator),
    )),

    _statements2: $ => repeat1(seq(
      $._statement,
      optional(seq('\n', $.heredoc_body)),
      $._terminator,
    )),

    _terminated_statement: $ => seq(
      $._statement_not_subshell,
      $._terminator,
    ),

    // Statements

    _statement: $ => choice(
      $._statement_not_subshell,
      $.subshell,
    ),

    _statement_not_subshell: $ => choice(
      $.redirected_statement,
      $.variable_assignment,
      $.variable_assignments,
      $.command,
      $.declaration_command,
      $.unset_command,
      $.test_command,
      $.negated_command,
      $.for_statement,
      $.c_style_for_statement,
      $.while_statement,
      $.if_statement,
      $.case_statement,
      $.pipeline,
      $.list,
      $.compound_statement,
      $.function_definition,
    ),

    redirected_statement: $ => prec(-1, seq(
      field('body', $._statement),
      field('redirect', repeat1(choice(
        $.file_redirect,
        $.heredoc_redirect,
        $.herestring_redirect,
      ))),
    )),

    for_statement: $ => seq(
      choice('for', 'select'),
      field('variable', $._simple_variable_name),
      optional(seq(
        'in',
        field('value', repeat1($._literal)),
      )),
      $._terminator,
      field('body', $.do_group),
    ),

    c_style_for_statement: $ => seq(
      'for',
      '((',
      choice($._for_body),
      '))',
      optional(';'),
      field('body', choice(
        $.do_group,
        $.compound_statement,
      )),
    ),
    _for_body: $ => seq(
      field('initializer', commaSep($._c_expression)),
      $._c_terminator,
      field('condition', commaSep($._c_expression)),
      $._c_terminator,
      field('update', commaSep($._c_expression)),
    ),

    _c_expression: $ => choice(
      $._c_expression_not_assignment,
      alias($._c_variable_assignment, $.variable_assignment),
    ),
    _c_expression_not_assignment: $ => choice(
      $._c_word,
      $.simple_expansion,
      $.expansion,
      $.number,
      $.string,
      alias($._c_unary_expression, $.unary_expression),
      alias($._c_binary_expression, $.binary_expression),
      alias($._c_postfix_expression, $.postfix_expression),
      alias($._c_parenthesized_expression, $.parenthesized_expression),
      $.command_substitution,
    ),

    _c_variable_assignment: $ => seq(
      alias($._c_word, $.variable_name),
      '=',
      $._c_expression,
    ),
    _c_unary_expression: $ => prec.left(seq(
      choice('++', '--'),
      $._c_expression_not_assignment,
    )),
    _c_binary_expression: $ => prec.right(seq(
      $._c_expression_not_assignment,
      choice(
        '+=', '-=', '*=', '/=', '%=', '**=',
        '<<=', '>>=', '&=', '^=', '|=',
        '==', '!=', '<=', '>=', '&&', '||',
        '<<', '>>',
        '+', '-', '*', '/', '%', '**',
        '<', '>',
      ),
      $._c_expression_not_assignment,
    )),
    _c_postfix_expression: $ => seq(
      $._c_expression_not_assignment,
      choice('++', '--'),
    ),
    _c_parenthesized_expression: $ => seq(
      '(',
      commaSep1($._c_expression),
      ')',
    ),
    _c_word: $ => alias(/[a-zA-Z_][a-zA-Z0-9_]*/, $.word),

    while_statement: $ => seq(
      choice('while', 'until'),
      field('condition', repeat1($._terminated_statement)),
      field('body', $.do_group),
    ),

    do_group: $ => seq(
      'do',
      optional($._statements2),
      'done',
    ),

    if_statement: $ => seq(
      'if',
      field('condition', $._terminated_statement),
      'then',
      optional($._statements2),
      repeat($.elif_clause),
      optional($.else_clause),
      'fi',
    ),

    elif_clause: $ => seq(
      'elif',
      $._terminated_statement,
      'then',
      optional($._statements2),
    ),

    else_clause: $ => seq(
      'else',
      optional($._statements2),
    ),

    case_statement: $ => seq(
      'case',
      field('value', $._literal),
      optional($._terminator),
      'in',
      optional($._terminator),
      optional(seq(
        repeat($.case_item),
        alias($.last_case_item, $.case_item),
      )),
      'esac',
    ),

    case_item: $ => seq(
      choice(
        seq(
          optional('('),
          field('value', choice($._literal, $.extglob_pattern)),
          repeat(seq('|', field('value', choice($._literal, $.extglob_pattern)))),
          ')',
        ),
      ),
      optional($._statements),
      prec(1, choice(
        field('termination', ';;'),
        field('fallthrough', choice(';&', ';;&')),
      )),
    ),

    last_case_item: $ => seq(
      optional('('),
      field('value', choice($._literal, $.extglob_pattern)),
      repeat(seq('|', field('value', choice($._literal, $.extglob_pattern)))),
      ')',
      optional($._statements),
      optional(prec(1, ';;')),
    ),

    function_definition: $ => prec.right(seq(
      choice(
        seq(
          'function',
          field('name', $.word),
          optional(seq('(', ')')),
        ),
        seq(
          field('name', $.word),
          '(', ')',
        ),
      ),
      field(
        'body',
        choice(
          $.compound_statement,
          $.subshell,
          $.test_command),
      ),
      optional($.file_redirect),
    )),

    compound_statement: $ => seq(
      '{',
      optional(choice($._statements2, seq($._statement, optional($._terminator)))),
      alias(token(prec(-1, '}')), '}'),
    ),

    subshell: $ => seq(
      '(',
      $._statements,
      ')',
    ),

    pipeline: $ => prec.left(1, seq(
      $._statement,
      choice('|', '|&'),
      $._statement,
    )),

    list: $ => prec.left(-1, seq(
      $._statement,
      choice('&&', '||'),
      $._statement,
    )),

    // Commands

    negated_command: $ => seq(
      '!',
      choice(
        prec(2, $.command),
        prec(1, $.variable_assignment),
        $.test_command,
        $.subshell,
      ),
    ),

    test_command: $ => seq(
      choice(
        seq('[', choice($._expression, $.redirected_statement), ']'),
        seq('[[', $._expression, ']]'),
        seq('(', '(', $._expression, '))'),
      ),
    ),

    declaration_command: $ => prec.left(seq(
      choice('declare', 'typeset', 'export', 'readonly', 'local'),
      repeat(choice(
        $._literal,
        $._simple_variable_name,
        $.variable_assignment,
      )),
    )),

    unset_command: $ => prec.left(seq(
      choice('unset', 'unsetenv'),
      repeat(choice(
        $._literal,
        $._simple_variable_name,
      )),
    )),

    command: $ => prec.left(seq(
      repeat(choice(
        $.variable_assignment,
        $.file_redirect,
      )),
      field('name', $.command_name),
      repeat(field('argument', choice(
        $._literal,
        alias($._bare_dollar, '$'),
        seq(
          choice('=~', '=='),
          choice($._literal, $.regex),
        ),
      ))),
    )),

    command_name: $ => $._literal,

    variable_assignment: $ => seq(
      field('name', choice(
        $.variable_name,
        $.subscript,
      )),
      choice(
        '=',
        '+=',
      ),
      field('value', choice(
        $._literal,
        $.array,
        $._empty_value,
        alias($._comment_word, $.word),
      )),
    ),

    variable_assignments: $ => seq($.variable_assignment, repeat1($.variable_assignment)),

    subscript: $ => seq(
      field('name', $.variable_name),
      '[',
      field('index', choice($._literal, $.binary_expression, $.unary_expression, $.parenthesized_expression)),
      optional($._concat),
      ']',
      optional($._concat),
    ),

    file_redirect: $ => prec.left(seq(
      field('descriptor', optional($.file_descriptor)),
      choice('<', '>', '>>', '&>', '&>>', '<&', '>&', '>|'),
      field('destination', repeat1($._literal)),
    )),

    heredoc_redirect: $ => seq(
      field('descriptor', optional($.file_descriptor)),
      choice('<<', '<<-'),
      $.heredoc_start,
    ),

    heredoc_body: $ => choice(
      $._simple_heredoc_body,
      seq(
        $._heredoc_body_beginning,
        repeat(choice(
          $.expansion,
          $.simple_expansion,
          $.command_substitution,
          $._heredoc_body_middle,
        )),
        $._heredoc_body_end,
      ),
    ),

    herestring_redirect: $ => seq(
      field('descriptor', optional($.file_descriptor)),
      '<<<',
      $._literal,
    ),

    // Expressions

    _expression: $ => choice(
      $._literal,
      $.unary_expression,
      $.ternary_expression,
      $.binary_expression,
      $.postfix_expression,
      $.parenthesized_expression,
    ),

    binary_expression: $ => prec.left(2, choice(
      seq(
        field('left', $._expression),
        field('operator', choice(
          '=', '==', '=~', '!=',
          '+', '-', '+=', '-=',
          '*', '/', '*=', '/=',
          '%', '%=', '**',
          '<', '>', '<=', '>=',
          '||', '&&',
          '<<', '>>', '<<=', '>>=',
          '&', '|', '^',
          '&=', '|=', '^=',
          $.test_operator,
        )),
        field('right', $._expression),
      ),
      seq(
        field('left', $._expression),
        field('operator', choice('==', '=~', '!=')),
        field('right', $.regex),
      ),
    )),

    ternary_expression: $ => prec.left(
      seq(
        field('condition', $._expression),
        '?',
        field('consequence', $._expression),
        ':',
        field('alternative', $._expression),
      ),
    ),

    unary_expression: $ => choice(
      prec(1, seq(
        token(prec(1, choice('-', '+', '~', '++', '--'))),
        $._expression,
      )),
      prec.right(1, seq(
        choice('!', $.test_operator),
        $._expression,
      )),
    ),

    postfix_expression: $ => seq(
      $._expression,
      choice('++', '--'),
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')',
    ),

    // Literals

    _literal: $ => choice(
      $.concatenation,
      $._primary_expression,
      alias(prec(-2, repeat1($._special_character)), $.word),
    ),

    _primary_expression: $ => choice(
      $.word,
      alias($.test_operator, $.word),
      $.string,
      $.raw_string,
      $.translated_string,
      $.ansi_c_string,
      $.number,
      $.expansion,
      $.simple_expansion,
      $.command_substitution,
      $.process_substitution,
      $.arithmetic_expansion,
    ),

    arithmetic_expansion: $ => seq('$(', '(', $._expression, '))'),

    concatenation: $ => prec(-1, seq(
      choice(
        $._primary_expression,
        alias($._special_character, $.word),
      ),
      repeat1(seq(
        choice($._concat, alias(/`\s*`/, '``')),
        choice(
          $._primary_expression,
          alias($._special_character, $.word),
          alias($._comment_word, $.word),
        ),
      )),
      optional(seq($._concat, '$')),
    )),

    _special_character: _ => token(prec(-1, choice('{', '}', '[', ']'))),

    string: $ => seq(
      '"',
      repeat(seq(
        choice(
          seq(optional('$'), $._string_content),
          $.expansion,
          $.simple_expansion,
          $.command_substitution,
          $.arithmetic_expansion,
        ),
        optional($._concat),
      )),
      optional('$'),
      '"',
    ),

    _string_content: _ => token(prec(-1, /([^"`$\\]|\\(.|\r?\n))+/)),

    translated_string: $ => seq('$', $.string),

    array: $ => seq(
      '(',
      repeat($._literal),
      ')',
    ),

    raw_string: _ => /'[^']*'/,

    ansi_c_string: _ => /\$'([^']|\\')*'/,

    number: _ => /-?(0x)?[0-9]+(#[0-9A-Za-z@_]+)?/,

    simple_expansion: $ => seq(
      '$',
      choice(
        $._simple_variable_name,
        $._multiline_variable_name,
        $._special_variable_name,
        alias('!', $.special_variable_name),
        alias('#', $.special_variable_name),
      ),
    ),

    string_expansion: $ => seq('$', $.string),

    expansion: $ => seq(
      '${',
      repeat(choice('#', '!', '=')),
      optional($._expansion_body),
      '}',
    ),
    _expansion_body: $ => choice(
      seq(
        $.variable_name,
        '=',
        optional($._literal),
      ),
      seq(
        choice(
          $.subscript,
          $._simple_variable_name,
          $._special_variable_name,
          $.command_substitution,
        ),
        optional(seq(
          token(prec(1, '/')),
          optional($.regex),
        )),
        repeat(prec.right(choice(
          $._literal, $.array,
          ':', ':?', '=', ':-', '%', '-', '#', ';', '|', '(', ')', '<', '>',
        ))),
      ),
    ),

    command_substitution: $ => choice(
      seq('$(', $._statements, ')'),
      seq('$(', $.file_redirect, ')'),
      prec(1, seq('`', $._statements, '`')),
      seq('$`', $._statements, '`'),
    ),

    process_substitution: $ => seq(
      choice('<(', '>('),
      $._statements,
      ')',
    ),

    comment: _ => token(prec(-10, /#.*/)),
    _comment_word: _ => token(prec(-9, seq(
      choice(
        noneOf(...SPECIAL_CHARACTERS),
        seq('\\', noneOf('\\s')),
      ),
      repeat(choice(
        noneOf(...SPECIAL_CHARACTERS),
        seq('\\', noneOf('\\s')),
        '\\ ',
      )),
    ))),

    _simple_variable_name: $ => alias(/\w+/, $.variable_name),
    _multiline_variable_name: $ => alias(
      token(prec(-1, /(\w|\\\r?\n)+/)),
      $.variable_name,
    ),

    _special_variable_name: $ => alias(choice('*', '@', '?', '-', '$', '0', '_'), $.special_variable_name),

    word: _ => token(seq(
      choice(
        noneOf('#', ...SPECIAL_CHARACTERS),
        seq('\\', noneOf('\\s')),
      ),
      repeat(choice(
        noneOf(...SPECIAL_CHARACTERS),
        seq('\\', noneOf('\\s')),
        '\\ ',
      )),
    )),

    test_operator: _ => token(prec(1, seq('-', /[a-zA-Z]+/))),

    _c_terminator: _ => choice(';', '\n', '&'),
    _terminator: _ => choice(';', ';;', '\n', '&'),
  },
});

/**
 * Returns a regular expression that matches any character except the ones
 * provided.
 *
 * @param  {...string} characters
 *
 * @return {RegExp}
 *
 */
function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('');
  return new RegExp('[^' + negatedString + ']');
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
