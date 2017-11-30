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
      $.boolean_literal,
      $.character_literal,
      $.string_literal,
      $.null_literal
    )

    integer_literal: $ => choice(
      $.decimal_integer_literal,
      $.hex_integer_literal,
      $.octal_integer_literal,
      $.binary_integer_literal
    ),

    decimal_integer_literal: $ => repeat1(/[0-9]+_?/),

    hex_integer_literal: $ => seq(
        choice('0x', '0X'),
        repeat1(/_?[A-Fa-f0-9]+/)
      ),

    // how does this not get parsed as regular integers?
    octal_integer_literal: $ => seq(
        choice('0o', '0O'),
        repeat1(/_?[0-7]+/)
      ),

    binary_integer_literal: $ => seq(
      choice('0b', '0B'),
      repeat1(/_?[01]+/)
    ),

    floating_point_literal: $ => choice(
      $.decimal_floating_point_literal
      $.hexadecimal_floating_point_literal
    ),

    decimal_floating_point_literal: $ => seq(
      choice(
        seq(repeat(/[0-9]+_?/), '.', repeat(/[0-9]+_?/), optional(/[eE]/), optional(/[\+-]/), repeat(/[0-9]+_?/)),
        seq(repeat(/[0-9]+_?/), /[eE]/, optional(/[\+-]/), repeat1(/[0-9]+_?/))
      )
    ),

    hexidecimal_floating_point_literal: $ => seq(
      choice(
        seq(choice('0x', '0X'), repeat(/_?[A-Fa-f0-9]+/), '.', repeat(/_?[A-Fa-f0-9]+/), optional(/[eE]/), optional(/[\+-]/), repeat(/[0-9]+_?/)),
        seq(choice('0x', '0X'), repeat(/_?[A-Fa-f0-9]+/), /[eE]/, optional(/[\+-]/), repeat(/_?[A-Fa-f0-9]+/))
      )
    )

    comment: $ => /\/\*.*\*\//,

  }
});
