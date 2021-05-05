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

    variable_ref: $ => choice(
      $.normal_var,
      $.env_var,
      $.cache_var,
    ),
    _literal_variable: $ => choice(
      /[a-zA-Z0-9/_.+-]/,
      $.escape_sequence,
    ),
    normal_var: $ => seq('${', repeat1($._literal_variable), '}'),
    env_var: $ => seq('$ENV{', repeat1($._literal_variable), '}'),
    cache_var: $ => seq('$CACHE{', repeat1($._literal_variable), '}'),

    argument: $ => choice(
      $.bracket_argument,
      $.quoted_argument,
      $.unquoted_argument,
    ),

    bracket_argument: $ => seq(
      $._bracket_open,
      optional($._bracket_content),
      $._bracket_close,
    ),
    _bracket_open: $ => seq('[', repeat('='), '['),
    _bracket_content: $ => repeat1(/[^\]]/),
    _bracket_close: $ => seq(']', repeat('='), ']'),

    quoted_argument: $ => seq('"', repeat($._quoted_element), '"'),
    _quoted_element: $ => choice(
      $.variable_ref,
      /[^\\"]/,
      $.escape_sequence,
      seq('\\', $.newline),
    ),

    unquoted_argument: $ => repeat1(
      choice(
        $.variable_ref,
        /[^ ()#\"\\]/,
        $.escape_sequence,
      )
    ),

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
