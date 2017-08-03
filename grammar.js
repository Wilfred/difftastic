module.exports = grammar({
  name: 'json',

  extras: $ => [
    /\s/
  ],

  rules: {
    _value: $ => choice(
      $.object,
      $.array,
      $.number,
      $.string,
      $.true,
      $.false,
      $.null
    ),

    object: $ => seq(
      "{", commaSep($.pair), "}"
    ),

    pair: $ => seq(
      choice($.string, $.number),
      ":",
      $._value
    ),

    array: $ => seq(
      "[", commaSep($._value), "]"
    ),

    string: $ => token(seq('"', repeat(choice(/[^\\"\n]/, /\\./)), '"')),

    number: $ => token(choice(
      seq(
        "0x",
        /[\da-fA-F]+/
      ),
      seq(
        /-?\d+/,
        optional(seq(".", /\d*/))
      )
    )),

    true: $ => "true",

    false: $ => "false",

    null: $ => "null"
  }
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq(",", rule)))
}

function commaSep (rule) {
  return optional(commaSep1(rule))
}
