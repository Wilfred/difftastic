
// The R 4.2.0 syntax table, from ?Syntax:
//
//  ':: :::'           access variables in a namespace
//  '$ @'              component / slot extraction
//  '[ [['             indexing
//  '^'                exponentiation (right to left)
//  '- +'              unary minus and plus
//  ':'                sequence operator
//  '%any% |>'         special operators (including '%%' and '%/%')
//  '* /'              multiply, divide
//  '+ -'              (binary) add, subtract
//  '< > <= >= == !='  ordering and comparison
//  '!'                negation
//  '&  &&'            and
//  '| ||'             or
//  '~'                as in formulae
//  '-> ->>'           rightwards assignment
//  '<- <<-'           assignment (right to left)
//  '='                assignment (right to left)
//  '?'                help (unary and binary)
//
// R also has an operator precedence table defined here:
//
// https://github.com/wch/r-source/blob/36008873fb8ca2af3bdaaff418dbade5f7bce118/src/main/gram.y#L414-L436
//
// However, the effective precedence of '?' and '=' is a bit different, as R
// defines special reduction rules for these operators:
//
// https://github.com/wch/r-source/blob/36008873fb8ca2af3bdaaff418dbade5f7bce118/src/main/gram.y#L440-L453
//
// Rather than try to replicate those reduction rules, we just adjust the
// operator precedence to match the declared precedence in the R syntax table,
// while allowing for R's declared precedence differences between certain
// control flow keywords.
const PREC = {
  COMMENT: -1,
  LOW: 0,
  WHILE: 0,
  FOR: 0,
  REPEAT: 0,
  IF: 1,
  ELSE: 2,
  HELP: 3,
  EQ_ASSIGN: 4,
  LEFT_ASSIGN: 5,
  RIGHT_ASSIGN: 6,
  TILDE: 7,
  OR: 8,
  AND: 9,
  NOT: 10,
  REL: 11,
  PLUS: 12,
  TIMES: 13,
  SPECIAL: 14,
  PIPE: 14,
  PIPEBIND: 15,
  COLON: 16,
  UPLUS: 17,
  EXP: 18,
  SUBSET: 19,
  DOLLAR: 20,
  NS_GET: 21,
  CALL: 22,
  CALL_PIPE: 23,
  FLOAT: 24
}

newline = '\n',
terminator = choice(newline, ';'),

module.exports = grammar({
  name: 'r',

  extras: $ => [
    $.comment,
    /\s/
  ],

  conflicts: ($) => [
    [$._pipe_rhs_argument, $._argument],
    [$.pipe_rhs_arguments, $.arguments]
  ],

  externals: $ => [
    $._raw_string_literal
  ],

  rules: {
    program: $ => repeat(seq($._expression, optional(terminator))),

    _definition: $ => choice(
      $.function_definition,
      $.lambda_function
      // TODO: other kinds of definitions
    ),

    function_definition: $ => prec.left(PREC.LOW, seq(
      'function',
      $.formal_parameters,
      $._expression
    )),

    lambda_function: $ => prec.left(PREC.LOW, seq(
      '\\',
      $.formal_parameters,
      $._expression
    )),

    if: $ => prec.right(PREC.IF, seq(
      'if',
      '(',
      field('condition', $._expression),
      ')',
      field('consequence', $._expression),
      field('alternative', optional(seq('else', $._expression)))
    )),

    while: $ => prec.left(PREC.WHILE, seq(
      'while',
      '(',
      field('condition', $._expression),
      ')',
      field('body', $._expression)
    )),

    repeat: $ => prec.left(PREC.REPEAT, seq(
      'repeat',
      field('body', $._expression)
    )),

    for: $ => prec.left(PREC.FOR, seq(
      'for',
      '(',
      field('name', $.identifier),
      'in',
      field('vector', $._expression),
      ')',
      field('body', $._expression)
    )),

    switch: $ => seq(
      'switch',
      '(',
      field('value', $._expression),
      ',',
      field('body', $.arguments),
      ')'
    ),

    formal_parameters: $ => seq(
      '(',
      optional(seq(
        commaSep1($._formal_parameter),
        optional(',')
      )),
      ')'
    ),

    default_parameter: $ => seq(
      field('name', $.identifier),
      '=',
      field('value', $._expression)
    ),

    _formal_parameter: $ => choice(
      $.identifier,
      $.default_parameter,
      $.dots
    ),

    block: $ => seq(
      '{',
      repeat($._expression),
      '}'
    ),

    arguments: $ => repeat1(choice(
      $._argument, 
      ',',
    )),

    default_argument: $ => prec.right(seq(
      field('name', choice($.identifier, $.string, $.dots)),
      '=',
      field('value', optional($._expression))
    )),

    _argument: $ => prec.left(choice(
      $._expression,
      $.default_argument,
    )),

    call: $ => prec(PREC.CALL, seq(
      field('function', $._expression),
      '(',
      field('arguments', optional($.arguments)),
      ')'
    )),

    _assignment: $ => choice(
      $.equals_assignment,
      $.left_assignment,
      $.left_assignment2,
      $.right_assignment,
      $.super_assignment,
      $.super_right_assignment,
    ),

    left_assignment: $ => prec.right(PREC.LEFT_ASSIGN,
      seq(
        field('name', $._expression),
        '<-',
        field('value', $._expression)
      )),

    left_assignment2: $ => prec.right(PREC.LEFT_ASSIGN,
      seq(
        field('name', $._expression),
        ':=',
        field('value', $._expression)
      )),

    equals_assignment: $ => prec.right(PREC.EQ_ASSIGN,
      seq(
        field('name', $._expression),
        '=',
        field('value', $._expression)
      )),

    super_assignment: $ => prec.right(PREC.LEFT_ASSIGN,
      seq(
        field('name', $._expression),
        '<<-',
        field('value', $._expression)
      )),

    super_right_assignment: $ => prec.left(PREC.RIGHT_ASSIGN,
      seq(
        field('value', $._expression),
        '->>',
        field('name', $._expression)
      )),

    right_assignment: $ => prec.left(PREC.RIGHT_ASSIGN,
      seq(
        field('value', $._expression),
        '->',
        field('name', $._expression)
      )),

    brace_list: $ => seq(
      '{',
      repeat(
        seq($._expression, optional(terminator))
      ),
      '}'
    ),

    paren_list: $ => seq(
      '(',
      repeat(
        $._expression
      ),
      ')'
    ),

    subset: $ => prec(PREC.SUBSET, seq(
      $._expression,
      '[',
      optional($.arguments),
      ']'
    )),

    subset2: $ => prec(PREC.SUBSET, seq(
      $._expression,
      '[[',
      optional($.arguments),
      ']]'
    )),

    dollar: $ => prec.left(PREC.DOLLAR, seq(
      $._expression,
      '$',
      choice(
        $.identifier,
        $.string
      )
    )),

    slot: $ => prec.left(PREC.DOLLAR, seq(
      $._expression,
      '@',
      $.identifier
    )),

    namespace_get: $ => prec.left(PREC.NS_GET, seq(
      field('namespace', $.identifier),
      '::',
      field('function', $.identifier),
    )),

    namespace_get_internal: $ => prec.left(PREC.NS_GET, seq(
      field('namespace', $.identifier),
      ':::',
      field('function', $.identifier),
    )),

    help: $ => prec.left(PREC.HELP, seq(
      $._expression,
      '?',
      $._expression
    )),

    dots: $ => '...',

    placeholder: $ => '_',

    pipe_placeholder_argument: $ => prec.right(seq(
      field('name', $.identifier),
      '=',
      field('value', $.placeholder)
    )),

    _pipe_rhs_argument: $ => prec.right(choice(
      $._expression,
      $.default_argument,
      alias($.pipe_placeholder_argument, $.default_argument)
    )),

    pipe_rhs_arguments: $ => repeat1(choice(
      $._pipe_rhs_argument,
      ','
    )),

    // pipe_rhs is a call function
    pipe_rhs: $ => prec.left(PREC.CALL_PIPE, seq(
      field('function', $._expression),
      '(',
      field('arguments', optional(alias($.pipe_rhs_arguments, $.arguments))),
      ')'
    )),

    pipe: $ => prec.left(PREC.PIPE, seq(
      field('left', $._expression),
      field('operator', '|>'),
      field('right', alias($.pipe_rhs, $.call))
    )),

    unary: $ => {
      const operators = [
        [PREC.UPLUS, choice('-', '+')],
        [PREC.NOT, '!'],
        [PREC.TILDE, '~'],
        [PREC.HELP, '?'],
      ];

      return choice(...operators.map(([precedence, operator]) => prec.left(precedence, seq(
        field('operator', operator),
        field('operand', $._expression)
      ))));
    },

    binary: $ => {
      const operators = [
        [prec.left, PREC.PLUS, choice('+', '-')],
        [prec.left, PREC.TIMES, choice('*', '/')],
        [prec.right, PREC.EXP, '^'],
        [prec.left, PREC.REL, choice('<', '>', '<=', '>=', '==', '!=')],
        [prec.left, PREC.OR, choice('||', '|')],
        [prec.left, PREC.AND, choice('&&', '&')],
        [prec.left, PREC.SPECIAL, $.special],
        [prec.left, PREC.COLON, ':'],
        [prec.left, PREC.TILDE, '~'],
      ];

      return choice(...operators.map(([fn, precedence, operator]) => fn(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression)
      ))));
    },

    break: $ => 'break',

    next: $ => 'next',

    true: $ => 'TRUE',
    false: $ => 'FALSE',
    null: $ => 'NULL',
    inf: $ => 'Inf',
    nan: $ => 'NaN',

    na: $ => choice(
      'NA',
      'NA_character_',
      'NA_complex_',
      'NA_integer_',
      'NA_real_'
    ),

    _expression: $ => prec.right(choice(
      $.identifier,
      $.integer,
      $.float,
      $.complex,
      $.string,
      $.call,
      $.function_definition,
      $.lambda_function,
      $._assignment,
      $.brace_list,
      $.paren_list,
      $.binary,
      $.unary,
      $.pipe,
      $.subset,
      $.subset2,
      $.dollar,
      $.slot,
      $.namespace_get,
      $.namespace_get_internal,
      $.help,
      $.if,
      $.for,
      $.while,
      $.repeat,
      $.switch,
      $.break,
      $.next,
      $.true,
      $.false,
      $.null,
      $.inf,
      $.nan,
      $.na,
      $.dots,
      // ';'
    )),

    identifier: $ =>
      choice(
        /[.\p{XID_Start}][._\p{XID_Continue}]*/,
        seq(
          '`',
          repeat(choice(
            /[^`\\\n]+|\\\r?\n/,
            $.escape_sequence
          )),
          '`'
        )
      ),

    integer: $ => token(prec(PREC.FLOAT + 1,
      seq(
        choice(
          seq(
            choice('0x', '0X'),
            /[A-Fa-f0-9]+/
          ),
          /\d+/
        ),
        'L'
      ))),

    float: $ => {
      const digits = repeat1(/[0-9]/);
      const exponent = seq(/[eE][\+-]?/, digits)

      return token(prec.left(PREC.FLOAT,
        choice(
          seq(digits, optional('.'), optional(digits), optional(exponent)),
          seq(optional(digits), '.', digits, optional(exponent)),
          seq(digits, exponent),
          seq(
            choice('0x', '0X'),
            /[A-Fa-f0-9]+/
          )
        )
      ))
    },

    complex: $ => seq($.float, 'i'),

    comment: $ => token(prec(PREC.COMMENT, seq('#', /.*/))),

    string: $ => choice(
      $._raw_string_literal,
      seq(
        '"',
        repeat(choice(
          /[^"\\\n]+|\\\r?\n/,
          $.escape_sequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          /[^'\\\n]+|\\\r?\n/,
          $.escape_sequence
        )),
        "'"
      )
    ),

    special: $ => seq(
      '%',
      repeat(choice(
        /[^%\\\n]+|\\\r?\n/,
        $.escape_sequence
      )),
      '%'
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    ))
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
