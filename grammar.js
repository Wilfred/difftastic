module.exports = grammar({
  name: "godot_resource",
  word: ($) => $._identifier,
  extras: ($) => [$.comment, /[\s\uFEFF\u2060\u200B]|\\\r?\n/],

  externals: ($) => [$.string],

  rules: {
    resource: ($) => seq(repeat($.property), repeat($.section)),

    // -----------------------------------------------------------------------------
    // -                                     Atoms                                 -
    // -----------------------------------------------------------------------------

    _identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,
    identifier: ($) => $._identifier,
    comment: ($) => token(seq(";", /.*/)),

    true: ($) => "true",
    false: ($) => "false",
    null: ($) => "null",

    float: ($) => {
      const digits = repeat1(/-?[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        choice(
          seq(digits, ".", optional(digits), optional(exponent)),
          seq(optional(digits), ".", digits, optional(exponent)),
          seq(digits, exponent),
        ),
      );
    },

    integer: ($) =>
      token(
        choice(
          seq(choice("0x", "0X"), repeat1(/_?[A-Fa-f0-9]+/)),
          seq(choice("0o", "0O"), repeat1(/_?[0-7]+/)),
          seq(choice("0b", "0B"), repeat1(/_?[0-1]+/)),
          repeat1(/-?[0-9]+_?/),
        ),
      ),

    // -----------------------------------------------------------------------------
    // -                                   Compound                                -
    // -----------------------------------------------------------------------------

    _value: ($) =>
      choice(
        $.float,
        $.integer,
        $.string,
        $.true,
        $.false,
        $.null,
        $.dictionary,
        $.array,
        $.constructor,
        $.identifier,
      ),

    // -----------------------------------------------------------------------------
    // -                                   Sections                                -
    // -----------------------------------------------------------------------------

    // e.g.
    // [gd_scene load_steps=10 format=2]
    // [node name="main" type="Node"]
    section: ($) =>
      seq(
        "[",
        $.identifier,
        optional($._attributes),
        "]",
        optional($._properties),
      ),

    // e.g.
    // name="main"
    // id=1
    _attributes: ($) => repeat1($.attribute),
    attribute: ($) => seq($.identifier, "=", $._value),

    // e.g.
    // script = ExtResource( 1 )
    // 0/texture = ExtResource( 2 )
    _properties: ($) => repeat1($.property),
    property: ($) => seq($.path, "=", $._value),
    path: ($) => /[a-zA-Z_0-9][a-zA-Z_/0-9]*/,

    // -----------------------------------------------------------------------------
    // -                                 Data Structs                              -
    // -----------------------------------------------------------------------------

    pair: ($) => seq($.string, ":", $._value),

    dictionary: ($) => seq("{", optional(commaSep1($.pair)), "}"),

    array: ($) => seq("[", optional(commaSep1($._value)), "]"),

    // -----------------------------------------------------------------------------
    // -                                  Constructor                              -
    // -----------------------------------------------------------------------------

    arguments: ($) =>
      seq("(", optional(commaSep1(choice($._value, $.pair))), ")"),

    constructor: ($) => seq($.identifier, $.arguments),
  }, // end rules
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
