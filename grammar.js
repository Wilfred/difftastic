module.exports = grammar({
  name: 'CMake',

  rules: {
    source_file: $ => repeat($.command_invocation),

    line_ending: $ => $.newline,
    seperation: $ => choice($.space, $.line_ending),
    space: $ => /[ \t]+/,
    newline: $ => /\n/,
    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    escape_sequence: $ => choice(
      $._escape_identity,
      $._escape_encoded,
      $._escape_semicolon,
    ),
    _escape_identity: $ => /\\[^A-Za-z0-9;]/,
    _escape_encoded: $ => choice('\\t', '\\r', '\\n'),
    _escape_semicolon: $ => '\;',


    argument: $ => choice(
      $.unquoted_argument,
      $.bracket_argument,
    ),

    unquoted_argument: $ => repeat1(
      choice(
        /[^ ()#\"\\]/,
        $.escape_sequence,
      )
    ),

    bracket_argument: $ => seq(
      $._bracket_open,
      optional($._bracket_content),
      $._bracket_close,
    ),
    _bracket_open: $ => seq('[', repeat('='), '['),
    _bracket_content: $ => repeat1(/[^\]]/),
    _bracket_close: $ => seq(']', repeat('='), ']'),


    arguments: $ => seq($.argument, repeat($._seperated_arguments)),
    _seperated_arguments: $ => prec.left(seq(
      repeat1($.seperation),
      optional($.argument)
    )),

    command_invocation: $ => seq(
      repeat($.space),
      $.identifier,
      repeat($.seperation),
      '(',
      repeat($.seperation),
      optional($.arguments),
      ')'
    ),

  }
})
