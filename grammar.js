module.exports = grammar({
  name: 'java',

  extras: $ => [
    $.comment,
    /\s/
  ],
  // what are extras?

  rules: {
    program: $ => repeat(seq($._statement, ';')),
    // program: $ => repeat($.declaration)

    _statement: $ => choice($._literal),

    _literal: $ => choice(
      $.integer_literal,
      $.floating_point_literal,
      // $.boolean_literal,
      // $.character_literal,
      // $.string_literal,
      // $.null_literal
    ),

    // integer literals

    integer_literal: $ => choice(
      $.decimal_integer_literal,
      $.hex_integer_literal,
      $.octal_integer_literal,
      $.binary_integer_literal
    ),

    _digits: $ => token(sep1(/[0-9]+/, /_+/)),

    decimal_integer_literal: $ => token($._digits),

    _hex_digits: $ => token(sep1(/[A-Fa-f0-9]+/, '_')),

    hex_integer_literal: $ => token(seq(
        choice('0x', '0X'),
        $._hex_digits
      )),

    // how does this not get parsed as regular integers?
    octal_integer_literal: $ => token(seq(
      choice('0o', '0O'),
      sep1(/[0-7]+/, '_')
      )),

    binary_integer_literal: $ => token(seq(
      choice('0b', '0B'),
      sep1(/[01]+/, '_')
    )),

    // floating point literals

    floating_point_literal: $ => choice(
      $.decimal_floating_point_literal,
      $.hex_floating_point_literal
    ),

    decimal_floating_point_literal: $ => token(
      choice(
        seq($._digits, '.', optional($._digits), optional((/[eE]/), optional(/[\+-]/), $._digits), optional(/[fFdD]/)),
        seq('.', $._digits, optional((/[eE]/), optional(/[\+-]/), $._digits), optional(/[fFdD]/)),
        seq($._digits, /[eE]/, optional(/[\+-]/), $._digits, optional(/[fFdD]/)),
        seq($._digits, optional((/[eE]/), optional(/[\+-]/), $._digits), (/[fFdD]/))
      )
    ),

    hex_floating_point_literal: $ => token(seq(
      choice('0x', '0X'),
      choice(
        seq($._hex_digits, optional('.')),
        seq(optional($._hex_digits), '.', $._hex_digits)
      ),
      /[eE]/,
      optional(/[+-]/),
      $._digits,
      optional(/[fFdD]/)
    )),

    comment: $ => /\/\*.*\*\//,

  }
});

  function sep1 (rule, separator) {
    return seq(rule, repeat(seq(separator, rule)))
  }
