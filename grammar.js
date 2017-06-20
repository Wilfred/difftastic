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
      $.namespace_definition,
      $.using_declaration
    ),

    _type_specifier: ($, original) => choice(
      original,
      $.template_call
    ),

    _expression: ($, original) => choice(
      original,
      $.template_call,
      $.scoped_identifier
    ),

    template_call: $ => seq(
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      '<',
      commaSep1(choice(
        $.type_name,
        $.parenthesized_expression
      )),
      '>'
    ),

    return_statement: ($, original) => choice(
      original,
      seq(
        'return',
        $.initializer_list,
        ';'
      )
    ),

    namespace_definition: $ => seq(
      'namespace',
      optional($.identifier),
      $.declaration_list
    ),

    using_declaration: $ => seq(
      'using',
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      ';'
    ),

    scoped_identifier: $ => seq(
      optional(choice(
        $.scoped_identifier,
        $.identifier
      )),
      '::',
      $.identifier
    )
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
