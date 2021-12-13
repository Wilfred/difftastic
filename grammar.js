const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "gleam",
  extras: ($) => [";", NEWLINE, /\s/],
  rules: {
    /* General rules */
    source_file: ($) =>
      optional(
        seq(
          series_of(choice($.target_group, $._statement), NEWLINE),
          optional(NEWLINE)
        )
      ),
    _statement: ($) =>
      choice(
        $.import,
        $.public_constant,
        $.constant
        /* $.type, */
        /* $.function */
      ),

    /* Target groups */
    target_group: ($) =>
      seq(
        "if",
        field("target", $.target),
        "{",
        optional(seq(series_of($._statement, NEWLINE), optional(NEWLINE))),
        "}"
      ),
    target: ($) => choice("erlang", "javascript"),

    /* Import statements */
    import: ($) =>
      seq(
        "import",
        field("module", $.module),
        optional(
          seq(
            ".",
            "{",
            $.unqualified_import,
            repeat(seq(",", $.unqualified_import)),
            "}"
          )
        ),
        optional(seq("as", field("alias", $.alias)))
      ),
    module: ($) => seq($._name, repeat(seq("/", $._name))),
    unqualified_import: ($) =>
      choice(
        seq(
          $._name,
          optional(seq("as", field("alias", alias($._name, $.alias))))
        ),
        seq(
          $._upname,
          optional(seq("as", field("alias", alias($._upname, $.alias))))
        )
      ),
    alias: ($) => $._name,

    /* Constant statements */
    public_constant: ($) => seq("pub", $._constant),
    constant: ($) => $._constant,
    _constant: ($) =>
      seq(
        "const",
        field("name", alias($._name, $.identifier)),
        optional($._const_type_annotation),
        "=",
        field("value", $._literal)
      ),

    /* Special constant types */
    _const_type_annotation: ($) => seq(":", field("type", $._const_type)),
    _const_type: ($) =>
      choice(
        $.type_hole,
        alias($.const_tuple_type, $.tuple_type),
        alias($.const_fn_type, $.fn_type),
        alias($.const_type_constructor, $.type_constructor),
        alias($.const_remote_type_constructor, $.remote_type_constructor)
      ),
    const_tuple_type: ($) =>
      seq("#", "(", optional(series_of($._const_type, ",")), ")"),
    const_fn_type: ($) =>
      seq(
        "fn",
        "(",
        series_of(alias($._const_type, $.argument_type), ","),
        ")",
        "->",
        alias($._const_type, $.return_type)
      ),
    const_type_constructor: ($) => $._const_type_constructor,
    const_remote_type_constructor: ($) =>
      seq($._name, ".", $._const_type_constructor),
    _const_type_constructor: ($) =>
      seq($._upname, optional(seq("(", series_of($._const_type, ","), ")"))),

    /* Literals */
    _literal: ($) =>
      choice(
        $.string,
        $.float,
        $.integer,
        $.tuple,
        $.list
        // $.bitstring,
        // $.record,
        // $.remote_record
      ),
    string: ($) => /\"(?:\\[efnrt\"\\]|[^\"])*\"/,
    float: ($) => /-?[0-9_]+\.[0-9_]+/,
    integer: ($) => /-?[0-9_]+/,
    tuple: ($) => seq("#", "(", series_of($._literal, ","), ")"),
    list: ($) => seq("[", series_of($._literal, ","), "]"),

    /* Types */
    type_var: ($) => $._name,
    type_hole: ($) => $._discard_name,

    /* Reused types from the Gleam lexer */
    _discard_name: ($) => /_[_0-9a-z]*/,
    _name: ($) => /[_a-z][_0-9a-z]*/,
    _upname: ($) => /[A-Z][0-9a-zA-Z]*/,
  },
});

// Shamelessly stolen "sep1" from tree-sitter-elixir, renamed to match a similar
// function in the Gleam parser.
// https://github.com/elixir-lang/tree-sitter-elixir/blob/de3ec57591aebf451e710fc9c984cf601258baf5/grammar.js#L817-L819
function series_of(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
