const PREC = {
  ASSIGN: 0,
  OR: 2,
  AND: 3,
  NOT: 4,
  REL: 5,
  PLUS: 6,
  TIMES: 7,
  SPECIAL: 8,
  NEG: 9,
  EXP: 10,
  DOLLAR: 11,
  NS_GET: 12,
  CALL: 13,
  SUBSET: 14
}

module.exports = grammar({
  name: 'R',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    program: $ => repeat($._expression),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => prec.left(seq(
      'function',
      $.formal_parameters,
      $._expression
    )),

    if: $ => prec.right(seq(
      'if',
      '(',
      field('condition', $._expression),
      ')',
      field('consequence', $._expression),
      field('alternative', optional(seq('else', $._expression)))
    )),

    while: $ => prec.right(seq(
      'while',
      '(',
      field('condition', $.identifier),
      ')',
      field('body', $._expression)
    )),

    repeat: $ => prec.right(seq(
      'repeat',
      field('body', $._expression)
    )),

    for: $ => prec.right(seq(
      'for',
      '(',
      field('name', $.identifier),
      'in',
      field('vector', $._expression),
      ')',
      field('body', $._expression)
    )),

    formal_parameters: $ => seq(
      '(',
      optional(seq(
        commaSep1($._formal_parameter),
        optional(',')
      )),
      ')'
    ),

    _formal_parameter: $ => choice(
        $.identifier,
        seq($.identifier, '=', $._expression)
    ),

    block: $ => seq(
      '{',
      repeat($._expression),
      '}'
    ),

    arguments: $ => repeat1(
      choice(
        $._expression,
        seq(',', optional($._expression))
      )
    ),

    call: $ => prec(PREC.CALL, seq(
      field('function', $._expression),
      '(',
      field('arguments', optional($.arguments)),
      ')'
    )),

    assignment: $ => prec.right(PREC.ASSIGN, choice(
      seq(
        field('left', $._expression),
        choice(
          '=',
          '<-',
          '<<-'
        ),
        field('right', $._expression)
      ),
      prec.left(PREC.ASSIGN,
      seq(
        field('right', $._expression),
        '->',
        field('left', $._expression)
      )))),

    brace_list: $ => seq(
      '{',
      repeat(
        $._expression
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
      $.arguments,
      ']'
    )),

    subset2: $ => prec(PREC.SUBSET, seq(
      $._expression,
      '[[',
      $.arguments,
      ']]'
    )),

    namespace_get: $ => prec(PREC.NS_GET, seq(
      field('namespace', $.identifier),
      '::',
      field('function', $.identifier),
    )),

    return: $ => seq(
      'return',
      '(',
      optional($._expression),
      ')'
    ),

    unary: $ => choice(
      prec.left(PREC.NEG, seq('-', $._expression)),
      prec.left(PREC.NEG, seq('+', $._expression)),
      prec.left(PREC.NOT, seq('!', $._expression))
    ),

    binary: $ => choice(
      prec.left(PREC.PLUS, seq($._expression, '+', $._expression)),
      prec.left(PREC.PLUS, seq($._expression, '-', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '*', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '/', $._expression)),
      prec.right(PREC.EXP, seq($._expression, '^', $._expression)),
      prec.left(PREC.REL, seq($._expression, '<', $._expression)),
      prec.left(PREC.REL, seq($._expression, '>', $._expression)),
      prec.left(PREC.REL, seq($._expression, '<=', $._expression)),
      prec.left(PREC.REL, seq($._expression, '>=', $._expression)),
      prec.left(PREC.REL, seq($._expression, '==', $._expression)),
      prec.left(PREC.REL, seq($._expression, '!=', $._expression)),
      prec.left(PREC.OR, seq($._expression, '||', $._expression)),
      prec.left(PREC.OR, seq($._expression, '|', $._expression)),
      prec.left(PREC.AND, seq($._expression, '&&', $._expression)),
      prec.left(PREC.AND, seq($._expression, '&', $._expression)),
      prec.left(PREC.SPECIAL, seq($._expression, $.special, $._expression)),
      prec.left(PREC.DOLLAR, seq($._expression, '$', $.identifier))
    ),

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

    _expression: $ => choice(
      $.identifier,
      $.integer,
      $.string,
      $.call,
      $.function_definition,
      $.assignment,
      $.brace_list,
      $.paren_list,
      $.binary,
      $.unary,
      $.subset,
      $.subset2,
      $.namespace_get,
      $.if,
      $.for,
      $.while,
      $.repeat,
      $.return,
      $.break,
      $.next,
      $.true,
      $.false,
      $.null,
      $.inf,
      $.nan,
      $.na,
      ';'
    ),

    identifier: $ => choice(
      /[A-Za-z.][A-Za-z0-9_.]*/,
      seq(
        '`',
        repeat(choice(
          /[^`\\\n]+|\\\r?\n/,
          $.escape_sequence
        )),
        '`'
      )
    ),

    integer: $ => /\d+L?/,

    comment: $ => seq('#', /.*/),

    string: $ => choice(
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
