const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "gleam",
  extras: ($) => [";", "\n", "\r\n", /\s/],
  rules: {
    source_file: ($) =>
      repeat(seq(choice($.target_group, $._statement), NEWLINE)),
    target_group: ($) =>
      seq(
        "if",
        field("target", $.target),
        "{",
        field("body", repeat(seq($._statement, NEWLINE))),
        "}"
      ),
    _statement: ($) =>
      choice(
        $.import
        /* $.constant, */
        /* $.type, */
        /* $.function */
      ),
    target: ($) => choice("erlang", "javascript"),
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
    _name: ($) => /[_a-z][_0-9a-z]*/,
    _upname: ($) => /[A-Z][0-9a-zA-Z]*/,
  },
});
