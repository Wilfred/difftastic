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
      choice($._expression, $.type_name),
      '>'
    )
  }
});
