module.exports = grammar(require("tree-sitter-c/grammar"), {
  name: 'cpp',

  conflicts: ($, original) => original.concat([
    [$.template_call, $._expression],
    [$.template_call, $.relational_expression]
  ]),

  rules: {
    _type_specifier: ($, original) => choice(
      original,
      $.template_call
    ),

    _expression: ($, original) => choice(
      original,
      $.template_call
    ),

    template_call: $ => seq(
      $.identifier,
      '<',
      commaSep1(choice(
        $.type_name,
        $.parenthesized_expression
      )),
      '>'
    )
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}