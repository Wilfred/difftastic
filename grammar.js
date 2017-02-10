const PREC = {
  union: 2,
  intersection: 2
};

module.exports = grammar(require('../tree-sitter-javascript/grammar'), {
  name: 'typescript',

  conflicts: ($, previous) => previous.concat([

    // TODO - Figure out why these are needed.
    [$._pattern, $._type_reference],
    [$._expression, $._type_reference],
    [$._expression, $._pattern, $._type_reference],
    [$._property_definition_list, $.property_signature],

  ]),

  rules: {

    // Overrides

    _pattern: ($, previous) => seq(
      previous,
      optional($.type_annotation)
    ),

    // Additions

    type_annotation: $ => seq(
      ':', $._type
    ),

    _type: $ => choice(
      $._primary_type,
      $.union_type,
      $.intersection_type
      // $.function_type
      // $.constructor_type
    ),

    _primary_type: $ => choice(
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

    _type_reference: $ => seq(
      choice($.identifier, $.qualified_type_name),
      optional($.type_arguments)
    ),

    type_arguments: $ => seq(
      '<', commaSep1($._type), '>'
    ),

    qualified_type_name: $ => choice(
      seq($._type_reference, '.', $.identifier)
    ),

    object_type: $ => seq(
      '{', optional($._type_body), '}'
    ),

    _type_body: $ => choice(
      seq($._type_member_list, optional(';')),
      seq($._type_member_list, optional(','))
    ),

    _type_member_list: $ => choice(
      $._type_member,
      seq($._type_member_list, ';', $._type_member),
      seq($._type_member_list, ',', $._type_member)
    ),

    _type_member: $ => choice(
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
      $._primary_type, '[', ']'
    ),

    tuple_type: $ => seq(
      '[', commaSep1($._type), ']'
    ),

    union_type: $ => prec.left(PREC.union, seq(
      $._type, '|', $._type
    )),

    intersection_type: $ => prec.left(PREC.intersection, seq(
      $._type, '&', $._type
    )),

    function_type: $ => seq(
      // optional($.type_parameters),
      // '(',
      // optional($.parameter_list),
      // ')',
      $.formal_parameters,
      '=>',
      $._type
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
