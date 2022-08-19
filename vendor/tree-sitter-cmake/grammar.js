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
  extras: (_) => [],

  rules: {
    source_file: ($) => repeat($._untrimmed_command_invocation),

    escape_sequence: ($) => choice($._escape_identity, $._escape_encoded, $._escape_semicolon),
    _escape_identity: (_) => /\\[^A-Za-z0-9;]/,
    _escape_encoded: (_) => choice("\\t", "\\r", "\\n"),
    _escape_semicolon: (_) => ";",

    variable: ($) => prec.left(repeat1(choice(/[a-zA-Z0-9/_.+-]/, $.escape_sequence, $.variable_ref))),
    variable_ref: ($) => choice($.normal_var, $.env_var, $.cache_var),
    normal_var: ($) => seq("$", "{", $.variable, "}"),
    env_var: ($) => seq("$", "ENV", "{", $.variable, "}"),
    cache_var: ($) => seq("$", "CACHE", "{", $.variable, "}"),

    gen_exp: ($) => seq("$", "<", optional($._gen_exp_content), ">"),
    _gen_exp_content: ($) => seq($.argument, optional($._gen_exp_arguments)),
    _gen_exp_arguments: ($) => seq(":", repeat(seq($.argument, optional(/[,;]/)))),

    argument: ($) => choice($.bracket_argument, $.quoted_argument, $.unquoted_argument),
    _untrimmed_argument: ($) => choice(/\s/, $.bracket_comment, $.line_comment, $.argument, $._paren_argument),
    _paren_argument: ($) => seq("(", repeat($._untrimmed_argument), ")"),

    quoted_argument: ($) => seq('"', optional($.quoted_element), '"'),
    quoted_element: ($) => repeat1(choice($.variable_ref, $.gen_exp, $._quoted_text, $.escape_sequence)),
    _quoted_text: ($) => prec.left(repeat1(choice('$', /[^\\"]/))),

    unquoted_argument: ($) => prec.right(repeat1(choice($.variable_ref, $.gen_exp, $._unquoted_text, $.escape_sequence))),
    _unquoted_text: ($) => prec.left(repeat1(choice('$', /[^()#"\\']/))),

    if_command: ($) => command($.if, repeat($._untrimmed_argument)),
    elseif_command: ($) => command($.elseif, repeat($._untrimmed_argument)),
    else_command: ($) => command($.else, repeat($._untrimmed_argument)),
    endif_command: ($) => command($.endif, repeat($._untrimmed_argument)),
    if_condition: ($) =>
      seq(
        $.if_command,
        repeat(choice($._untrimmed_command_invocation, $.elseif_command, $.else_command)),
        $.endif_command
      ),

    foreach_command: ($) => command($.foreach, repeat($._untrimmed_argument)),
    endforeach_command: ($) => command($.endforeach, optional($.argument)),
    foreach_loop: ($) => seq($.foreach_command, repeat($._untrimmed_command_invocation), $.endforeach_command),

    while_command: ($) => command($.while, repeat($._untrimmed_argument)),
    endwhile_command: ($) => command($.endwhile, optional(seq(/\s*/, $.argument, /\s*/))),
    while_loop: ($) => seq($.while_command, repeat($._untrimmed_command_invocation), $.endwhile_command),

    function_command: ($) => command($.function, repeat($._untrimmed_argument)),
    endfunction_command: ($) => command($.endfunction, repeat($._untrimmed_argument)),
    function_def: ($) => seq($.function_command, repeat($._untrimmed_command_invocation), $.endfunction_command),

    macro_command: ($) => command($.macro, repeat($._untrimmed_argument)),
    endmacro_command: ($) => command($.endmacro, repeat($._untrimmed_argument)),
    macro_def: ($) => seq($.macro_command, repeat($._untrimmed_command_invocation), $.endmacro_command),

    normal_command: ($) => command($.identifier, repeat($._untrimmed_argument)),

    _command_invocation: ($) =>
      choice($.normal_command, $.if_condition, $.foreach_loop, $.while_loop, $.function_def, $.macro_def),
    _untrimmed_command_invocation: ($) => choice(/\s/, $.bracket_comment, $.line_comment, $._command_invocation),

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
  return seq(name_rule, repeat(/[\t ]/), "(", arg_rule, ")");
}
