module.exports = grammar({
  name: "cmake",

  rules: {
    source_file: ($) => repeat($.command_invocation),

    line_ending: ($) => $.newline,
    seperation: ($) => choice($.space, $.line_ending),
    space: ($) => /[ \t]+/,
    newline: ($) => /\n+/,
    identifier: ($) => /[A-Za-z_][A-Za-z0-9_]*/,
    integer: ($) => /[+-]*\d+/,

    escape_sequence: ($) => choice($._escape_identity, $._escape_encoded, $._escape_semicolon),
    _escape_identity: ($) => /\\[^A-Za-z0-9;]/,
    _escape_encoded: ($) => choice("\\t", "\\r", "\\n"),
    _escape_semicolon: ($) => ";",

    variable: ($) => prec.left(repeat1(choice(/[a-zA-Z0-9/_.+-]/, $.escape_sequence))),
    variable_ref: ($) => choice($.normal_var, $.env_var, $.cache_var),
    normal_var: ($) => seq("${", $.variable, "}"),
    env_var: ($) => seq("$ENV{", $.variable, "}"),
    cache_var: ($) => seq("$CACHE{", $.variable, "}"),

    argument: ($) => choice($.bracket_argument, $.quoted_argument, $.unquoted_argument),

    bracket_argument: ($) => seq($._bracket_open, optional($.bracket_content), $._bracket_close),
    _bracket_open: ($) => seq("[", repeat("="), "["),
    bracket_content: ($) => repeat1(/[^\]]/),
    _bracket_close: ($) => seq("]", repeat("="), "]"),

    quoted_argument: ($) => seq('"', optional($.quoted_element), '"'),
    quoted_element: ($) =>
      repeat1(choice($.variable_ref, /[^\\"]/, $.escape_sequence, seq("\\", $.newline))),

    unquoted_argument: ($) => repeat1(choice($.variable_ref, /[^ ()#\"\\]/, $.escape_sequence)),

    arguments: ($) => seq($.argument, repeat($._seperated_arguments)),
    _seperated_arguments: ($) => prec.left(seq(repeat1($.seperation), optional($.argument))),

    foreach_loop: ($) =>
      seq(
        repeat($.space),
        "foreach",
        repeat($.seperation),
        "(",
        repeat($.seperation),
        choice($.foreach_range, $.foreach_lists_items, $.foreach_iter),
        ")",
        repeat($.command_invocation),
        repeat($.space),
        "endforeach",
        repeat($.seperation),
        "(",
        optional($.variable),
        ")"
      ),

    foreach_range: ($) => choice($.foreach_range_stop, $.foreach_range_full),
    foreach_range_stop: ($) =>
      seq(
        field("loop_var", $.variable),
        repeat1($.seperation),
        seq("RANGE", optional($.seperation)),
        optional(field("stop", $.integer))
      ),
    foreach_range_full: ($) =>
      seq(
        field("loop_var", $.variable),
        repeat1($.seperation),
        /RANGE[ \t\n]+/,
        field("start", $.integer),
        field("stop", $.integer),
        optional(seq(repeat1($.seperation), field("step", $.integer)))
      ),

    foreach_lists_items: ($) =>
      seq(
        field("loop_var", $.variable),
        "IN",
        repeat(seq(repeat1($.seperation), choice($.foreach_lists)))
      ),
    foreach_lists: ($) =>
      prec.left(seq("LISTS", optional(seq(repeat1($.seperation), $.variable)))),
    // foreach_items: ($) => prec.left(seq("ITEMS", repeat(seq(repeat1($.seperation), $.argument)))),

    foreach_iter: ($) =>
      seq(field("loop_var", $.variable), optional(seq(repeat1($.seperation), $.arguments))),

    normal_command: ($) =>
      seq(
        repeat($.space),
        $.identifier,
        repeat($.space),
        "(",
        repeat($.seperation),
        optional($.arguments),
        ")"
      ),

    command_invocation: ($) => choice($.normal_command, $.foreach_loop),
  },
});
