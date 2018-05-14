const C = require("tree-sitter-c/grammar")

const PREC = Object.assign(C.PREC, {
  LAMBDA: 18
})

module.exports = grammar(C, {
  name: 'cpp',

  externals: $ => [
    $.raw_string_literal
  ],

  conflicts: ($, original) => original.concat([
    [$.template_function, $.template_type],
    [$.template_function, $.template_type, $._expression],
    [$.template_function, $._expression],
    [$.template_method, $.template_type, $.field_expression],
    [$.scoped_type_identifier, $.scoped_identifier],
    [$.scoped_type_identifier, $.scoped_field_identifier],
    [$.comma_expression, $.initializer_list],
    [$.parameter_list, $.argument_list],
  ]),

  inline: ($, original) => original.concat([
    $._namespace_identifier,
  ]),

  rules: {
    _top_level_item: ($, original) => choice(
      original,
      $.namespace_definition,
      $.using_declaration,
      $.alias_declaration,
      $.template_declaration,
      $.template_instantiation,
      $.structured_binding_declaration,
      alias($.constructor_or_destructor_definition, $.function_definition)
    ),

    _compound_statement_item: ($, original) => choice(
      original,
      $.structured_binding_declaration
    ),

    // Types

    _type_specifier: ($, original) => choice(
      original,
      $.class_specifier,
      $.scoped_type_identifier,
      $.template_type,
      $.auto,
      $.dependent_type
    ),

    type_qualifier: ($, original) => choice(
      original,
      'mutable',
      'explicit',
      'constexpr'
    ),

    // When used in a trailing return type, these specifiers can now occur immediately before
    // a compound statement. This introduces a shift/reduce conflict that needs to be resolved
    // with an associativity.
    class_specifier: $ => prec.left(seq(
      'class',
      choice(
        $._class_name,
        seq(
          optional($._class_name),
          optional($.base_class_clause),
          $.field_declaration_list
        )
      )
    )),

    union_specifier: $ => prec.left(seq(
      'union',
      choice(
        $._class_name,
        seq(
          optional($._class_name),
          optional($.base_class_clause),
          $.field_declaration_list
        )
      )
    )),

    struct_specifier: $ => prec.left(seq(
      'struct',
      choice(
        $._class_name,
        seq(
          optional($._class_name),
          optional($.base_class_clause),
          $.field_declaration_list
        )
      )
    )),

    _class_name: $ => choice(
      $._type_identifier,
      $.scoped_type_identifier,
      $.template_type
    ),

    base_class_clause: $ => seq(
      ':',
      commaSep1(seq(
        optional('public'),
        $._class_name
      ))
    ),

    enum_specifier: ($, original) => prec.left(original),

    // The `auto` storage class is removed in C++0x in order to allow for the `auto` type.
    storage_class_specifier: ($, original) => choice(
      ...original.members.filter(member => member.value !== 'auto')
    ),

    auto: $ => 'auto',

    dependent_type: $ => seq(
      'typename',
      $._type_specifier
    ),

    // Declarations

    structured_binding_declaration: $ => seq(
      $._declaration_specifiers,
      choice(
        alias($.structured_binding_reference_declarator, $.reference_declarator),
        $.structured_binding_declarator,
      ),
      choice(
        seq('=', choice($.initializer_list, $._expression)),
        $.initializer_list,
        $.argument_list
      ),
      ';'
    ),

    template_declaration: $ => seq(
      'template',
      $.template_parameter_list,
      choice(
        $.declaration,
        $._empty_declaration,
        $.function_definition
      )
    ),

    template_instantiation: $ => seq(
      'template',
      optional($._declaration_specifiers),
      $._declarator,
      ';'
    ),

    template_parameter_list: $ => seq(
      '<',
      commaSep(choice(
        $.parameter_declaration,
        $.type_parameter_declaration,
        $.optional_type_parameter_declaration
      )),
      '>'
    ),

    type_parameter_declaration: $ => prec(1, seq(
      'typename',
      $._type_identifier
    )),

    optional_type_parameter_declaration: $ => seq(
      'typename',
      $._type_identifier,
      '=',
      $._type_specifier
    ),

    parameter_declaration: ($, original) => choice(
      original,
      seq(
        $._declaration_specifiers,
        $.init_declarator
      )
    ),

    init_declarator: ($, original) => choice(
      original,
      seq(
        $._declarator,
        choice(
          $.argument_list,
          $.initializer_list
        )
      )
    ),

    // Avoid ambiguity between compound statement and initializer list in a construct like:
    //   A b {};
    compound_statement: ($, original) => prec(-1, original),

    field_initializer_list: $ => seq(
      ':',
      commaSep1($.field_initializer)
    ),

    field_initializer: $ => prec(1, seq(
      choice($._field_identifier, $.scoped_field_identifier),
      choice($.initializer_list, $.argument_list)
    )),

    _field_declaration_list_item: ($, original) => choice(
      original,
      $.template_declaration,
      alias($.inline_method_definition, $.function_definition),
      alias($.constructor_or_destructor_definition, $.function_definition),
      alias($.constructor_or_destructor_declaration, $.declaration),
      $.friend_declaration,
      $.access_specifier,
      $.alias_declaration,
      $.using_declaration,
      $.type_definition
    ),

    inline_method_definition: $ => seq(
      $._declaration_specifiers,
      $._field_declarator,
      $.compound_statement
    ),

    constructor_or_destructor_definition: $ => seq(
      repeat(choice(
        $.storage_class_specifier,
        $.type_qualifier
      )),
      prec(1, seq(
        $.function_declarator,
        optional($.field_initializer_list)
      )),
      $.compound_statement
    ),

    constructor_or_destructor_declaration: $ => seq(
      $.function_declarator,
      ';'
    ),

    friend_declaration: $ => seq(
      'friend',
      choice(
        $.declaration,
        $.function_definition,
        seq($.class_specifier, ';')
      )
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
      $.template_function,
      $.operator_name,
      $.destructor_name
    ),

    _field_declarator: ($, original) => choice(
      original,
      alias($.reference_field_declarator, $.reference_declarator),
      $.template_method,
      $.operator_name
    ),

    _abstract_declarator: ($, original) => choice(
      original,
      $.abstract_reference_declarator
    ),

    reference_declarator: $ => prec.right(seq(choice('&', '&&'), $._declarator)),
    reference_field_declarator: $ => prec.right(seq(choice('&', '&&'), $._field_declarator)),
    abstract_reference_declarator: $ => prec.right(seq(choice('&', '&&'), optional($._abstract_declarator))),

    structured_binding_reference_declarator: $ => seq(choice('&', '&&'), $.structured_binding_declarator),
    structured_binding_declarator: $ => seq('[', commaSep1($.identifier), ']'),

    function_declarator: ($, original) => seq(
      original,
      repeat(choice(
        $.type_qualifier,
        $.noexcept,
        $.trailing_return_type
      ))
    ),

    function_field_declarator: ($, original) => seq(
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

    template_type: $ => seq(
      choice($._type_identifier, $.scoped_type_identifier),
      $.template_argument_list
    ),

    template_method: $ => seq(
      choice($._field_identifier, $.scoped_field_identifier),
      $.template_argument_list
    ),

    template_function: $ => seq(
      choice($.identifier, $.scoped_identifier),
      $.template_argument_list
    ),

    template_argument_list: $ => seq(
      '<',
      commaSep(choice(
        $.type_descriptor,
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
      optional('namespace'),
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      ';'
    ),

    alias_declaration: $ => seq(
      'using',
      $._type_identifier,
      '=',
      $.type_descriptor,
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
      $.template_function,
      $.scoped_identifier,
      $.new_expression,
      $.delete_expression,
      $.lambda_expression,
      $.nullptr,
      $.raw_string_literal
    ),

    new_expression: $ => seq(
      'new',
      optional($.parenthesized_expression),
      choice(
        $._type_identifier,
        $.scoped_type_identifier
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
        choice(
          $.destructor_name,
          $.template_method
        )
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

    argument_list: $ => prec.dynamic(1, seq(
      '(',
      commaSep(choice($._expression, $.initializer_list)),
      ')'
    )),

    destructor_name: $ => prec(1, seq('~', $.identifier)),

    compound_literal_expression: ($, original) => choice(
      original,
      seq(
        choice(
          $._type_identifier,
          $.template_type,
          $.scoped_type_identifier
        ),
        $.initializer_list
      )
    ),

    scoped_field_identifier: $ => prec(1, seq(
      optional(choice(
        $._namespace_identifier,
        $.template_type,
        $.scoped_namespace_identifier
      )),
      '::',
      choice($._field_identifier, $.operator_name, $.destructor_name)
    )),

    scoped_identifier: $ => prec(1, seq(
      optional(choice(
        $._namespace_identifier,
        $.template_type,
        $.scoped_namespace_identifier
      )),
      '::',
      choice($.identifier, $.operator_name, $.destructor_name)
    )),

    scoped_type_identifier: $ => prec(1, seq(
      optional(choice(
        $._namespace_identifier,
        $.template_type,
        $.scoped_namespace_identifier
      )),
      '::',
      $._type_identifier
    )),

    scoped_namespace_identifier: $ => prec(2, seq(
      optional(choice(
        $._namespace_identifier,
        $.template_type,
        $.scoped_namespace_identifier
      )),
      '::',
      $._namespace_identifier
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
    )),

    nullptr: $ => 'nullptr',

    _namespace_identifier: $ => alias($.identifier, $.namespace_identifier),

    macro_type_specifier: $ => choice(),
  }
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
