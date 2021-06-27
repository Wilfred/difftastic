commands = [
  "if",
  "elseif",
  "else",
  "endif",
  "foreach",
  "endforeach",
  "while",
  "endwhile",
  "function",
  "endfunction",
  "macro",
  "endmacro",
];

module.exports = grammar({
  name: "cmake",

  externals: ($) => [$.bracket_argument, $.bracket_comment, $.line_comment],
  extras: ($) => [/[\s\n\r]/, $.bracket_comment, $.line_comment],

  rules: {
    source_file: ($) => repeat($._command_invocation),

    escape_sequence: ($) => choice($._escape_identity, $._escape_encoded, $._escape_semicolon),
    _escape_identity: (_) => /\\[^A-Za-z0-9;]/,
    _escape_encoded: (_) => choice("\\t", "\\r", "\\n"),
    _escape_semicolon: (_) => ";",

    variable: ($) => prec.left(repeat1(choice(/[a-zA-Z0-9/_.+-]/, $.escape_sequence))),
    variable_ref: ($) => choice($.normal_var, $.env_var, $.cache_var),
    normal_var: ($) => seq("${", $.variable, "}"),
    env_var: ($) => seq("$ENV", "{", $.variable, "}"),
    cache_var: ($) => seq("$CACHE", "{", $.variable, "}"),

    argument: ($) => choice($.bracket_argument, $.quoted_argument, $.unquoted_argument),

    quoted_argument: ($) => seq('"', optional($.quoted_element), '"'),
    quoted_element: ($) => repeat1(choice($.variable_ref, /[^\\"]/, $.escape_sequence)),

    unquoted_argument: ($) => prec.right(repeat1(choice($.variable_ref, /[^\s\n\r()#\"\\]/, $.escape_sequence))),

    if_command: ($) => command($.if, repeat(choice($.argument))),
    elseif_command: ($) => command($.elseif, repeat(choice($.argument))),
    else_command: ($) => command($.else, optional(choice($.argument))),
    endif_command: ($) => command($.endif, optional(choice($.argument))),
    if_condition: ($) =>
      seq($.if_command, repeat(choice($._command_invocation, $.elseif_command, $.else_command)), $.endif_command),

    foreach_command: ($) => command($.foreach, repeat(choice($.argument))),
    endforeach_command: ($) => command($.endforeach, optional($.argument)),
    foreach_loop: ($) => seq($.foreach_command, repeat($._command_invocation), $.endforeach_command),

    while_command: ($) => command($.while, repeat(choice($.argument))),
    endwhile_command: ($) => command($.endwhile, optional(choice($.argument))),
    while_loop: ($) => seq($.while_command, repeat($._command_invocation), $.endwhile_command),

    function_command: ($) => command($.function, repeat($.argument)),
    endfunction_command: ($) => command($.endfunction, repeat($.argument)),
    function_def: ($) => seq($.function_command, repeat($._command_invocation), $.endfunction_command),

    macro_command: ($) => command($.macro, repeat($.argument)),
    endmacro_command: ($) => command($.endmacro, repeat($.argument)),
    macro_def: ($) => seq($.macro_command, repeat($._command_invocation), $.endmacro_command),

    normal_command: ($) => command($.identifier, repeat($.argument)),

    _command_invocation: ($) =>
      choice($.normal_command, $.if_condition, $.foreach_loop, $.while_loop, $.function_def, $.macro_def),

    ...commandNames(...commands),
    identifier: (_) => /[A-Za-z_][A-Za-z0-9_]*/,
    integer: (_) => /[+-]*\d+/,
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

function command(name_rule, arg_rule) {
  return seq(name_rule, "(", arg_rule, ")");
}
