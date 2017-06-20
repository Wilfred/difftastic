module.exports = grammar(require("tree-sitter-c/grammar"), {
  name: 'cpp',

  conflicts: ($, original) => original.concat([
    // foo < b
    //  ^-- template name or expression?
    [$.template_call, $._expression],
  ]),

  rules: {
    _top_level_item: ($, original) => choice(
      original,
      $.namespace_definition
    ),

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
    ),

    namespace_definition: $ => seq(
      'namespace',
      optional($.identifier),
      $.declaration_list
    )
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}