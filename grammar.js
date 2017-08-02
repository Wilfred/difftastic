const PREC = {
  ACCESSIBILITY: 1,
  DEFINITION: 1,
  DECLARATION: 1,
  INTERSECTION: 2,
  UNION: 2,
  PLUS: 4,
  REL: 5,
  TIMES: 6,
  TYPEOF: 7,
  NEG: 9,
  INC: 10,
  NON_NULL_ASSERTION_OP: 10,
  FUNCTION_CALL: 12,
  ARRAY_TYPE: 13,
  MEMBER: 13,
  AS_EXPRESSION: 14,
  TYPE_ASSERTION: 15
};

module.exports = grammar(require('tree-sitter-javascript/grammar'), {
  name: 'typescript',

  externals: $ => [
    $._automatic_semicolon
  ],

  conflicts: ($, previous) => previous.concat([

    // TODO - Figure out why these are needed.
    [$.required_parameter, $.assignment],
    [$.required_parameter, $._expression],
    [$.required_parameter, $._primary_type],

    [$.identifier, $.predefined_type],

    // ( foo ? )
    //       ^ expression or optional parameter?
    [$._expression, $.optional_parameter],

    // foo: "string"
    //      ^ expression or literal type?
    [$._expression, $.literal_type],

    [$.method_signature, $.method_definition, $._expression],

    [$._expression, $._type_member, $.method_signature],

    // parenthesized_type starting with object type or function type starting with a destructuring pattern?
    [$._expression, $._primary_type],

    [$._expression, $.required_parameter, $._primary_type],

    [$._expression, $.property_signature],

    [$._expression, $.property_signature, $.method_signature],

    [$._expression, $.property_signature, $._property_definition_list],

    [$.property_signature, $._property_definition_list],

    // < Type >
    //       ^ jsx_opening_element or type_parameter?
    [$.jsx_opening_element, $.type_parameter],

    [$.this_type, $.this_expression],

    [$.required_parameter, $._entity_name],
    [$._expression, $.required_parameter, $._entity_name],
    [$._expression, $._entity_name],

    [$._expression, $.type_query],

    // let x: (string)
    //               ^ parenthesized_type or function_type
    [$.parameter_identifier, $.predefined_type],

    [$._entity_name, $.type_parameter],

    [$.jsx_opening_element, $._entity_name],
    [$.jsx_opening_element, $._entity_name, $.type_parameter],

    [$.type_reference],

    [$.function_call, $.math_op, $.rel_op],
    [$.function_call, $.bitwise_op, $.rel_op],
    [$.function_call, $.void_op, $.rel_op],
    [$.function_call, $.new_expression, $.rel_op],
    [$.function_call, $.bool_op, $.rel_op],
    [$.function_call, $.rel_op, $.type_op],

    [$._expression, $.method_signature],

    [$._property_definition_list, $._property_name],
    [$._property_definition_list, $._property_name, $._expression],

    [$.call_signature, $.function_type],
    [$.constructor_type, $.call_signature],

    [$._module, $._entity_name],

    [$._expression, $.import_alias],
  ]),

  rules: {

    // Overrides
    public_field_definition: ($, previous) => seq(
      optional($.accessibility_modifier),
      optional('abstract'),
      optional('static'),
      optional($.readonly),
      $._property_name,
      optional('?'),
      optional($.type_annotation),
      optional($._initializer)
    ),

    _element_list: $ => seq(
      optional(','),
      commaSep1Trailing($._element_list, choice(
        $._expression,
        $.spread_element,
        $._empty_element
      ))
    ),

    _empty_element: $ => seq(''),

    function_call: ($, previous) => prec(PREC.FUNCTION_CALL, seq(
      choice($._expression, $.super, $.function),
      optional($.type_arguments),
      choice($.arguments, $.template_string)
    )),

    _expression: ($, previous) => choice(
      $.type_assertion,
      $.as_expression,
      $.non_null_assertion_op,
      $.import_alias,
      $.internal_module,
      $.super,
      $.abstract_class,
      previous
    ),

    type_op: ($, previous) => choice(
      prec(PREC.TYPEOF, seq('typeof', $.anonymous_class)),
      previous
    ),

    // Override import and export to support Flow 'import type' statements
    import_statement: ($, previous) => seq(
      'import',
      optional(choice('type', 'typeof')),
      choice(
        seq($.import_clause, $._from_clause),
        $.import_require_clause,
        $.string
      ),
      $._semicolon
    ),

    non_null_assertion_op: $ => prec.left(PREC.NON_NULL_ASSERTION_OP, seq(
      $._expression, '!'
    )),

    export_statement: ($, previous) => choice(
      seq('export', '*', $._from_clause, $._semicolon),
      seq('export', $.export_clause, $._from_clause, $._semicolon),
      seq('export', $.export_clause, $._semicolon),
      seq('export', $._declaration),
      seq('export', 'default', $.anonymous_class),
      seq('export', 'default', $._expression, $._semicolon),
      seq('export', '=', $.identifier, $._semicolon),
      seq('export', 'as', 'namespace', $.identifier, $._semicolon),
      seq('export', $.import_alias)
    ),

    variable_declarator: ($, previous) => choice(
      seq($.identifier, optional($.type_annotation), optional($._initializer)),
      seq($._destructuring_pattern, optional($.type_annotation), $._initializer)
    ),

    abstract_method_definition: $ => seq(
      optional($.accessibility_modifier),
      'abstract',
      optional('static'),
      optional(choice('get', 'set', '*')),
      optional($.readonly),
      $._property_name,
      $.call_signature,
      $._semicolon
    ),

    _paren_expression: ($, previous) => seq(
      '(', choice(seq($._expression, optional($.type_annotation)), $.comma_op), ')'
    ),

    formal_parameters: ($, previous) => seq(
      '(',
      commaSep($._parameter),
      ')'
    ),

    ambient_function: $ => seq(
      'function',
      $.identifier,
      $.call_signature,
      $._semicolon
    ),

    function: ($, previous) => seq(
      optional('async'),
      'function',
      optional($.identifier),
      $.call_signature,
      $.statement_block
    ),

    generator_function: ($, prev) => seq(
      'function',
      '*',
      optional($.identifier),
      $.call_signature,
      $.statement_block
    ),

    arrow_function: $ => seq(
      choice(
        $.identifier,
        $.call_signature,
        alias($._reserved_identifier, $.identifier)
      ),
      '=>',
      choice(
        $._expression,
        $.statement_block
      )
    ),

    class_body: ($, previous) => seq(
      '{',
      repeat(
        choice(
          seq($.method_definition, optional(';')),
          $.abstract_method_definition,
          seq($.public_field_definition, $._semicolon),
          seq($.index_signature, $._semicolon)
        )
      ),
      '}'
    ),

    method_definition: $ => prec.left(PREC.DEFINITION, seq(
      optional($.accessibility_modifier),
      optional('static'),
      optional($.readonly),
      optional('async'),
      optional(choice('get', 'set', '*')),
      $._property_name,
      $.call_signature,
      optional($.statement_block)
    )),

    // A function, generator, class, or variable declaration
    _declaration: ($, previous) => prec(PREC.DECLARATION, choice(
      $.export_statement,
      $.import_alias,
      $.function,
      $.internal_module,
      $.ambient_function,
      $.generator_function,
      $.class,
      $.module,
      $.variable_declaration,
      $.lexical_declaration,
      $.type_alias_declaration,
      $.enum_declaration,
      $.interface_declaration,
      $.ambient_declaration
    )),

    type_assertion: $ => prec(PREC.TYPE_ASSERTION, seq(
      $.type_arguments,
      $._expression
    )),

    as_expression: $ => prec.left(PREC.AS_EXPRESSION, seq(
      optional($._expression),
      'as',
      choice($._type, $.template_string)
    )),

    class_heritage: ($, previous) => choice(
      seq($.extends_clause, optional($.implements_clause)),
      $.implements_clause
    ),

    // Additions

    import_require_clause: $ => seq($.identifier, '=', 'require', '(', $.string, ')'),

    implements_clause: $ => seq(
      'implements',
      commaSep1($.type_reference)
    ),

    ambient_declaration: $ => seq(
      'declare',
      choice(
        $._declaration,
        seq('global', $.statement_block)
      )
    ),

    abstract_class: ($, previous) => seq(
      'abstract',
      'class',
      $.identifier,
      optional($.type_parameters),
      optional($.class_heritage),
      $.class_body
    ),

    class: ($, previous) => seq(
      'class',
      $.identifier,
      optional($.type_parameters),
      optional($.class_heritage),
      $.class_body
    ),

    module: $ => seq(
      'module',
      $._module
    ),

    internal_module: $ => seq(
      'namespace',
      $._module
    ),

    _module: $ => prec.right(seq(
      choice($.string, $.identifier, $._entity_name),
      optional($.statement_block)
    )),

    _initializer: $ => seq(
      '=', choice($._expression, $.anonymous_class)
    ),

    import_alias: $ => seq(
      'import',
      $.identifier,
      '=',
      $._entity_name,
      $._semicolon
    ),

    _entity_name: $ => prec.right(sepBy1('.', $.identifier)),

    interface_declaration: $ => seq(
      'interface',
      $.identifier,
      optional($.type_parameters),
      optional($.extends_clause),
      $.object_type
    ),

    extends_clause: $ => seq(
      'extends',
      sepBy1(',', $.type_reference)
    ),

    enum_declaration: $ => seq(
      optional('const'),
      'enum',
      $.identifier,
      $.enum_body
    ),

    enum_body: $ => seq(
      '{',
      optional(seq(sepBy1(',', $._enum_member), optional(','))),
      '}'
    ),

    _enum_member: $ => choice(
      $._property_name,
      $.enum_assignment
    ),

    enum_assignment: $ => seq(
      $._property_name,
      $._initializer
    ),

    type_alias_declaration: $ => seq(
      'type',
      $.identifier,
      optional($.type_parameters),
      '=',
      $._type,
      $._semicolon
    ),

    accessibility_modifier: $ => prec.left(PREC.ACCESSIBILITY, choice(
      'public',
      'private',
      'protected'
    )),

    readonly: $ => 'readonly',

    _parameter: $ => choice(
      $.required_parameter,
      $.rest_parameter,
      $.optional_parameter
    ),

    parameter_identifier: $ => choice(
      'any',
      'number',
      'boolean',
      'string',
      'symbol',
      'void'
    ),

    required_parameter: $ => choice(
      seq(
        optional($.accessibility_modifier),
        choice($.identifier, $._destructuring_pattern, $.parameter_identifier),
        optional($.type_annotation),
        optional($._initializer)
      )
    ),

    optional_parameter: $ => seq(
      optional($.accessibility_modifier),
      choice($.identifier, $._destructuring_pattern),
      '?',
      optional($.type_annotation),
      optional($._initializer)
    ),

    rest_parameter: $ => seq(
      '...',
      $.identifier,
      optional($.type_annotation)
    ),

    type_annotation: $ => seq(
      ':', choice($._type, $._empty_element)
    ),

    _type: $ => choice(
      $._primary_type,
      $.union_type,
      $.intersection_type,
      $.function_type,
      $.constructor_type
    ),

    constructor_type: $ => seq(
      'new',
      optional($.type_parameters),
      $.formal_parameters,
      '=>',
      $._type
    ),

    _primary_type: $ => choice(
      $.parenthesized_type,
      $.predefined_type,
      $.type_reference,
      $.type_predicate,
      $.object_type,
      $.array_type,
      $.tuple_type,
      $.flow_maybe_type,
      $.type_query,
      $.index_type_query,
      $.this_type,
      $.existential_type,
      $.literal_type
    ),

    type_predicate: $ => seq(
      $.identifier,
      'is',
      $._type
    ),

    type_query: $ => seq(
      'typeof',
      $._entity_name
    ),

    index_type_query: $ => seq(
      'keyof',
      $._entity_name
    ),

    literal_type: $ => choice($.number, $.string, $.true, $.false),

    existential_type: $ => '*',

    this_type: $ => 'this',

    flow_maybe_type: $ => prec.right(seq( '?', $._primary_type )),

    parenthesized_type: $ => seq(
      '(', $._type, ')'
    ),

    predefined_type: $ => choice(
      'any',
      'number',
      'boolean',
      'string',
      'symbol',
      'void'
    ),

    type_arguments: $ => seq(
      '<', commaSep1($._type), '>'
    ),

    type_reference: $ => seq(
      $._entity_name,
      optional($.type_arguments)
    ),

    object_type: $ => seq(
      choice('{', '{|'), optional($._type_body), choice('}','|}')
    ),

    _type_body: $ => choice(
      $._type_member,
      seq(sepBy1(choice(',', $._semicolon), $._type_member), optional(choice(',', $._semicolon)))
    ),

    _type_member: $ => prec.right(choice(
      $.export_statement,
      $.property_signature,
      $.call_signature,
      $.construct_signature,
      $.index_signature,
      $.method_signature
    )),

    property_signature: $ => seq(
      optional($.accessibility_modifier),
      optional('static'),
      optional($.readonly),
      $._property_name,
      optional('?'),
      optional($.type_annotation)),

    call_signature: $ => seq(
      optional($.type_parameters),
      $.formal_parameters,
      optional($.type_annotation)
    ),

    type_parameters: $ => seq(
      '<', commaSep1($.type_parameter), '>'
    ),

    type_parameter: $ => seq(
      $.identifier,
      optional($.constraint)
    ),

    constraint: $ => seq(
      choice('extends', ':'),
      $._type
    ),

    construct_signature: $ => seq(
      'new',
      optional($.type_parameters),
      $.formal_parameters,
      optional($.type_annotation)
    ),

    index_signature: $ => choice(
      seq('[', $.identifier, ':', 'string', ']', $.type_annotation),
      seq('[', $.identifier, ':', 'number', ']', $.type_annotation)
    ),

    method_signature: $ => seq(
      optional($.accessibility_modifier),
      optional('static'),
      optional($.readonly),
      $._property_name,
      optional('?'),
      $.call_signature),

    array_type: $ => prec.right(PREC.ARRAY_TYPE, seq(
      $._primary_type, '[', ']'
    )),

    tuple_type: $ => seq(
      '[', commaSep1($._type), ']'
    ),

    union_type: $ => prec.left(PREC.UNION, seq(
      $._type, '|', $._type
    )),

    intersection_type: $ => prec.left(PREC.INTERSECTION, seq(
      $._type, '&', $._type
    )),

    function_type: $ => seq(
      optional($.type_parameters),
      $.formal_parameters,
      '=>',
      $._type
    ),

    _reserved_identifier: ($, previous) => choice('declare', 'namespace', 'type', 'public', 'private', 'protected', 'module', previous)
  }
});

function commaSep1 (rule) {
  return sepBy1(',', rule);
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}

function sepBy1 (sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function commaSep1Trailing(recurSymbol, rule) {
  return seq(rule, optional(seq(',', optional(recurSymbol))))
}
