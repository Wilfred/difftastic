module.exports = grammar({
  name: "cmake",

  rules: {
    source_file: ($) => repeat($._command_invocation),

    escape_sequence: ($) => choice($._escape_identity, $._escape_encoded, $._escape_semicolon),
    _escape_identity: ($) => /\\[^A-Za-z0-9;]/,
    _escape_encoded: ($) => choice("\\t", "\\r", "\\n"),
    _escape_semicolon: ($) => ";",

    variable: ($) => prec.left(repeat1(choice(/[a-zA-Z0-9/_.+-]/, $.escape_sequence))),
    variable_ref: ($) => choice($.normal_var, $.env_var, $.cache_var),
    normal_var: ($) => seq("${", $.variable, "}"),
    env_var: ($) => seq("$ENV", "{", $.variable, "}"),
    cache_var: ($) => seq("$CACHE", "{", $.variable, "}"),

    argument: ($) => choice($.bracket_argument, $.quoted_argument, $.unquoted_argument),

    bracket_argument: ($) => seq($._bracket_open, optional($.bracket_content), $._bracket_close),
    _bracket_open: (_) => seq("[", repeat("="), "["),
    bracket_content: (_) => repeat1(/[^\]]/),
    _bracket_close: (_) => seq("]", repeat("="), "]"),

    quoted_argument: ($) => seq('"', optional($.quoted_element), '"'),
    quoted_element: ($) => repeat1(choice($.variable_ref, /[^\\"]/, $.escape_sequence, seq("\\", newline()))),

    unquoted_argument: ($) => repeat1(choice($.variable_ref, /[^ ()#\"\\]/, $.escape_sequence)),

    foreach_command: ($) => command($.foreach, args(choice($.argument, "IN", "RANGE", "ZIP_LISTS", "LISTS", "ITEMS"))),
    endforeach_command: ($) => command($.endforeach, optional($.argument)),
    foreach_loop: ($) => seq($.foreach_command, repeat($._command_invocation), $.endforeach_command),
    normal_command: ($) => command($.identifier, optional(args($.argument))),

    _command_invocation: ($) => choice($.normal_command, $.foreach_loop),

    ...commandNames("foreach", "endforeach"),
    identifier: ($) => /[A-Za-z_][A-Za-z0-9_]*/,
    integer: ($) => /[+-]*\d+/,
  },
});

function iregex(s) {
  return new RegExp(Array.from(s).reduce((acc, value) => acc + `[${value.toLowerCase()}${value.toUpperCase()}]`, ""));
}

function commandName(name) {
  return { [name]: (_) => iregex(name) };
}

function commandNames(...names) {
  return Object.assign({}, ...names.map(commandName));
}

function args(rule) {
  return seq(rule, repeat(prec.left(seq(repeat1(seperation()), optional(rule)))));
}
function command(name_rule, arg_rule) {
  return seq(name_rule, "(", repeat(seperation()), arg_rule, ")");
}
function seperation() {
  return choice(space(), newline());
}
function space() {
  return /[ \t]+/;
}
function newline() {
  return /\n+/;
}
