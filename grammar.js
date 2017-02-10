module.exports = grammar(require('../tree-sitter-javascript/grammar'), {
  name: 'typescript',

  conflicts: ($, previous) => previous.concat([

    // TODO - Not sure why these signatures
    [$._expression, $.property_signature],
    [$._expression, $.property_signature, $._property_definition_list],
    [$._expression, $.method_definition, $.method_signature],
    [$._expression, $.method_signature],
    [$._expression, $.method_signature, $.property_signature],

  ]),

  rules: {
    _formal_parameter: ($, oldRule) => choice(
      oldRule,
      $.required_parameter
    ),

    required_parameter: $ => seq(
      optional($.accessibility_modifier),
      $.identifier,
      $.type_annotation
    ),

    accessibility_modifier: $ => choice(
      'public',
      'private',
      'protected'
    ),

    type_annotation: $ => seq(
      ':', $.type
    ),

    type: $ => choice(
      $.primary_type
      // $.union_or_intersection_type,
      // $.function_type
      // $.constructor_type
    ),

    union_or_intersection_type: $ => choice(
      $.union_type,
      $.intersection_or_primary_type
    ),

    intersection_or_primary_type: $ => choice(
      $.intersection_type,
      $.primary_type
    ),

    primary_type: $ => choice(
      $.parenthesized_type,
      $.predefined_type,
      $._type_reference,
      $.object_type,
      $.array_type,
      $.tuple_type
      // $.type_query,
      // $.this_type
    ),

    parenthesized_type: $ => seq(
      '(', $.type, ')'
    ),

    predefined_type: $ => choice(
      'any',
      'number',
      'boolean',
      'string',
      'symbol',
      'void'
    ),

    _type_reference: $ => seq(
      choice($.identifier, $.qualified_type_name),
      optional($.type_arguments)
    ),

    type_arguments: $ => seq(
      '<', commaSep1($.type), '>'
    ),

    qualified_type_name: $ => choice(
      seq($._type_reference, '.', $.identifier)
    ),

    object_type: $ => seq(
      '{', optional($.type_body), '}'
    ),

    type_body: $ => choice(
      seq($.type_member_list, optional(';')),
      seq($.type_member_list, optional(','))
    ),

    type_member_list: $ => choice(
      $.type_member,
      seq($.type_member_list, ';', $.type_member),
      seq($.type_member_list, ',', $.type_member)
    ),

    type_member: $ => choice(
      $.property_signature,
      $.call_signature,
      $.construct_signature,
      $.index_signature,
      $.method_signature
    ),

    property_signature: $ => seq(
      $.identifier, optional('?'), optional($.type_annotation)
    ),

    call_signature: $ => seq(
      optional($.type_parameters),
      $.formal_parameters, optional($.type_annotation)
    ),

    type_parameters: $ => seq(
      '<', commaSep1($.identifier), '>'
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
      $.identifier, optional('?'), $.call_signature
    ),

    array_type: $ => seq(
      $.primary_type, '[', ']'
    ),

    tuple_type: $ => seq(
      '[', $.tuple_element_types, ']'
    ),

    tuple_element_types: $ => commaSep1(
      $.tuple_element_type
    ),

    tuple_element_type: $ => $.type,

    union_type: $ => seq(
      $.union_or_intersection_type, '|', $.intersection_or_primary_type
    ),

    intersection_type: $ => seq(
      $.intersection_or_primary_type, '&', $.primary_type
    ),

    function_type: $ => seq(
      // optional($.type_parameters),
      // '(',
      // optional($.parameter_list),
      // ')',
      $.formal_parameters,
      '=>',
      $.type
    )
  }
});

function commaSep1 (rule) {
  return sepBy1(',', rule);
}

function sepBy1 (sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy (sep, rule) {
  return optional(sepBy1(sep, rule));
}
