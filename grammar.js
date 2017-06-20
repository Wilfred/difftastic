const C = require("tree-sitter-c/grammar")

const PREC = C.PREC;

module.exports = grammar(C, {
  name: 'cpp',

  conflicts: ($, original) => original.concat([
    // foo < b
    //  ^-- template name or expression?
    [$.template_call, $._expression],

    // A::A (b) ...
    //   ^-- constructor definition, return type of function w/ parenthesized name,
    //       or function call?
    [$._declarator, $._type_specifier],
    [$._declarator, $._type_specifier, $._expression],

    // A (b)
    // ^-- constructor definition, return type of function w/ parenthesized name,
    //     function call, or macro that defines a type?
    [$._declarator, $._type_specifier, $.macro_type_specifier],
    [$._declarator, $._type_specifier, $._expression, $.macro_type_specifier],
    [$._declarator, $._expression],
  ]),

  rules: {
    _top_level_item: ($, original) => choice(
      original,
      $.namespace_definition,
      $.using_declaration,
      $.template_declaration
    ),

    // Types

    _type_specifier: ($, original) => choice(
      original,
      $.scoped_identifier,
      $.template_call,
      $.auto
    ),

    // The `auto` storage class is removed in C++0x in order to allow for the `auto` type.
    storage_class_specifier: ($, original) => choice(
      ...original.members.filter(member => member.value !== 'auto')
    ),

    auto: $ => 'auto',

    // Declarations

    template_declaration: $ => seq(
      'template',
      $.template_parameter_list,
      choice(
        $.declaration,
        $.function_definition
      )
    ),

    template_parameter_list: $ => seq(
      '<',
      commaSep(choice(
        $.parameter_declaration,
        $.type_parameter_declaration
      )),
      '>'
    ),

    type_parameter_declaration: $ => seq(
      choice(
        'class',
        'typename'
      ),
      $.identifier
    ),

    function_definition: ($, original) => choice(
      original,
      seq(
        $.function_declarator,
        optional($.member_initializer_list),
        $.compound_statement
      )
    ),

    member_initializer_list: $ => seq(
      ':',
      commaSep1($.member_initializer)
    ),

    member_initializer: $ => seq(
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      choice(
        $.initializer_list,
        $.argument_list
      )
    ),

    _declarator: ($, original) => choice(
      original,
      $.reference_declarator,
      $.scoped_identifier,
      $.operator_name,
      $.destructor_name
    ),

    function_declarator: ($, original) => seq(
      original,
      repeat(choice(
        $.type_qualifier,
        $.noexcept
      ))
    ),

    noexcept: $ => 'noexcept',

    _abstract_declarator: ($, original) => choice(
      original,
      $.abstract_reference_declarator
    ),

    reference_declarator: $ => prec.right(seq(
      '&',
      $._declarator
    )),

    abstract_reference_declarator: $ => prec.right(seq(
      '&',
      optional($._abstract_declarator)
    )),

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

    // Statements

    _statement: ($, original) => choice(
      original,
      $.for_range_loop
    ),

    for_range_loop: $ => seq(
      'for',
      '(',
      $.for_range_declaration,
      ':',
      $._expression,
      ')',
      $._statement
    ),

    for_range_declaration: $ => seq(
      optional($._declaration_specifiers),
      $._type_specifier,
      $._declarator
    ),

    return_statement: ($, original) => choice(
      original,
      seq(
        'return',
        $.initializer_list,
        ';'
      )
    ),

    // Expressions

    _expression: ($, original) => choice(
      original,
      $.template_call,
      $.scoped_identifier,
      $.new_expression,
      $.delete_expression
    ),

    new_expression: $ => seq(
      'new',
      optional($.parenthesized_expression),
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      optional($._abstract_declarator),
      choice(
        $.argument_list,
        $.initializer_list
      )
    ),

    delete_expression: $ => seq(
      optional('::'),
      'delete',
      optional(seq('[', ']')),
      $._expression
    ),

    field_expression: ($, original) => choice(
      original,
      prec.left(PREC.FIELD, seq($._expression, '.', $.destructor_name)),
      prec.left(PREC.FIELD, seq($._expression, '->', $.destructor_name))
    ),

    destructor_name: $ => prec(1, seq(
      '~',
      $.identifier
    )),

    compound_literal_expression: ($, original) => choice(
      original,
      seq(
        choice(
          $.identifier,
          $.scoped_identifier
        ),
        $.initializer_list
      )
    ),

    scoped_identifier: $ => prec(1, seq(
      optional(choice(
        $.scoped_identifier,
        $.identifier
      )),
      '::',
      choice(
        $.identifier,
        $.operator_name,
        $.destructor_name
      )
    )),

    operator_name: $ => token(seq(
      'operator',
      choice(
        '+', '-', '*', '/', '%',
        '^', '&', '|', '~',
        '!', '=', '<', '>',
        '+=', '-=', '*=', '/=', '%=', '^=', '&=', '|=',
        '<<', '>>', '>>=', '<<=',
        '==', '!=', '<=', '>=',
        '&&', '||',
        '++', '--',
        ',',
        '->*',
        '->',
        '()', '[]'
      )
    ))
  }
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
