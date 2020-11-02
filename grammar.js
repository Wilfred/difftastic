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
  SUBSET: 14,
  FLOAT: 15
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
      field('condition', $._expression),
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
        seq($.identifier, '=', $._expression),
        $.dots
    ),

    block: $ => seq(
      '{',
      repeat($._expression),
      '}'
    ),

    arguments: $ => repeat1(
      choice(
        $._argument,
        seq(',', optional($._argument))
      )
    ),

    _argument: $ => choice(
      field('value', $._expression),
      prec.left(PREC.CALL + 1, seq(
        field('name', $.identifier),
        '=',
        field('value', optional($._expression))
    ))),

    call: $ => prec(PREC.CALL, seq(
      field('function', $._expression),
      '(',
      field('arguments', optional($.arguments)),
      ')'
    )),

    _assignment: $ => choice(
      $.equals_assignment,
      $.left_assignment,
      $.right_assignment,
      $.super_assignment
    ),

    left_assignment: $ => prec.right(PREC.ASSIGN,
      seq(
        field('name', $._expression),
        '<-',
        field('value', $._expression)
    )),

    equals_assignment: $ => prec.right(PREC.ASSIGN,
      seq(
        field('name', $._expression),
        '=',
        field('value', $._expression)
    )),

    super_assignment: $ => prec.right(PREC.ASSIGN,
      seq(
        field('name', $._expression),
        '<<-',
      field('value', $._expression)
    )),

    right_assignment: $ => prec.left(PREC.ASSIGN,
      seq(
        field('value', $._expression),
        '->',
      field('name', $._expression)
    )),

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

    dots: $ => '...',

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
      $.float,
      $.string,
      $.call,
      $.function_definition,
      $._assignment,
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
      $.dots,
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

    integer: $ => token(prec(PREC.FLOAT+1,
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
