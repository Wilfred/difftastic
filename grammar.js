const C = require("tree-sitter-c/grammar")

const PREC = Object.assign(C.PREC, {
  LAMBDA: 18
})

module.exports = grammar(C, {
  name: 'cpp',

  conflicts: ($, original) => original.concat([
    // foo < bar
    //  ^
    // This could be:
    //   * a template name in a declaration:
    //       vector<int> x;
    //   * the name of a variable being compared:
    //       a < b ? a : b;
    [$.template_call, $._expression],
    [$.template_call, $.field_expression],

    // Foo (b) ...
    //  ^
    // This could be:
    //   * the constructor name in a constructor definition:
    //       Foo() {}
    //   * the name of a function being called:
    //       Foo("hi");
    //   * the type name in a declaration with a parenthesized name:
    //       Foo (x) = 1;
    //   * the name of a macro that defines a type:
    //       Array(int) x;
    [$._declarator, $._expression],
    [$._declarator, $._type_specifier, $._expression],
    [$._declarator, $._type_specifier, $._expression, $.macro_type_specifier],

    [$._declarator, $.compound_literal_expression],
    [$._declarator, $.labeled_statement],
  ]),

  rules: {
    _top_level_item: ($, original) => choice(
      original,
      $.namespace_definition,
      $.using_declaration,
      $.alias_declaration,
      $.template_declaration
    ),

    // Types

    _type_specifier: ($, original) => choice(
      original,
      $.class_specifier,
      $.scoped_identifier,
      $.template_call,
      $.auto
    ),

    class_specifier: $ => prec.left(seq(
      'class',
      choice(
        $.identifier,
        seq(
          optional($.identifier),
          $.member_declaration_list
        )
      )
    )),

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
      'typename',
      $.identifier
    ),

    function_definition: ($, original) => choice(
      original,
      seq(
        optional($._declaration_specifiers),
        prec(1, seq(
          $._declarator,
          $.member_initializer_list
        )),
        $.compound_statement
      )
    ),

    member_initializer_list: $ => seq(
      ':',
      commaSep1($.member_initializer)
    ),

    member_initializer: $ => prec(1, seq(
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      choice(
        $.initializer_list,
        $.argument_list
      )
    )),

    member_declaration_list: $ => seq(
      '{',
      repeat(choice(
        $.member_declaration,
        $.function_definition,
        $.access_specifier
      )),
      '}'
    ),

    access_specifier: $ => seq(
      choice(
        'public',
        'private',
        'protected'
      ),
      ':'
    ),

    _declarator: ($, original) => choice(
      original,
      $.reference_declarator,
      $.scoped_identifier,
      $.template_call,
      $.operator_name,
      $.destructor_name
    ),

    function_declarator: ($, original) => seq(
      original,
      repeat(choice(
        $.type_qualifier,
        $.noexcept,
        $.trailing_return_type
      ))
    ),

    abstract_function_declarator: ($, original) => prec.right(seq(
      original,
      repeat(choice(
        $.type_qualifier,
        $.noexcept
      )),
      optional($.trailing_return_type)
    )),

    trailing_return_type: $ => prec.right(seq(
      '->',
      $._type_specifier,
      optional($._abstract_declarator)
    )),

    noexcept: $ => 'noexcept',

    _abstract_declarator: ($, original) => choice(
      original,
      $.abstract_reference_declarator
    ),

    // When used in a trailing return type, these specifiers can now occur immediately before
    // a compound statement. This introduces a conflict
    union_specifier: ($, original) => prec.left(original),
    struct_specifier: ($, original) => prec.left(original),
    enum_specifier: ($, original) => prec.left(original),

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

    alias_declaration: $ => seq(
      'using',
      $.identifier,
      '=',
      $.type_name,
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
      $._declaration_specifiers,
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
      $.delete_expression,
      $.lambda_expression
    ),

    new_expression: $ => seq(
      'new',
      optional($.parenthesized_expression),
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      optional($.new_declarator),
      choice(
        $.argument_list,
        $.initializer_list
      )
    ),

    new_declarator: $ => seq(
      '[',
      $._expression,
      ']',
      optional($.new_declarator)
    ),

    delete_expression: $ => seq(
      optional('::'),
      'delete',
      optional(seq('[', ']')),
      $._expression
    ),

    field_expression: ($, original) => choice(
      original,
      seq(
        prec(PREC.FIELD, seq(
          $._expression,
          choice('.', '->')
        )),
        choice($.destructor_name, $.template_call)
      )
    ),

    lambda_expression: $ => seq(
      $.lambda_capture_specifier,
      $.abstract_function_declarator,
      $.compound_statement
    ),

    lambda_capture_specifier: $ => prec(PREC.LAMBDA, seq(
      '[',
      choice(
        $.lambda_default_capture,
        commaSep($._expression)
      ),
      ']'
    )),

    lambda_default_capture: $ => choice('=', '&'),

    argument_list: $ => seq('(', commaSep(choice($._expression, $.initializer_list)), ')'),

    destructor_name: $ => prec(1, seq(
      '~',
      $.identifier
    )),

    compound_literal_expression: ($, original) => choice(
      original,
      seq(
        choice(
          $.identifier,
          $.template_call,
          $.scoped_identifier
        ),
        $.initializer_list
      )
    ),

    scoped_identifier: $ => prec(1, seq(
      optional(choice(
        $.scoped_identifier,
        $.identifier,
        $.template_call
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
