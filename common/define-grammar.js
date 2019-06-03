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
  EXTENDS: 7,
  NEG: 9,
  INC: 10,
  NON_NULL: 10,
  FUNCTION_CALL: 11,
  ARRAY_TYPE: 13,
  MEMBER: 14,
  AS_EXPRESSION: 15,
  TYPE_ASSERTION: 16,
  TYPE_REFERENCE: 16
};

module.exports = function defineGrammar(dialect) {
  return grammar(require('tree-sitter-javascript/grammar'), {
    name: dialect,

    conflicts: ($, previous) => previous.concat([
      [$._expression, $.export_statement],
      [$._expression, $.import_statement],
      [$.call_expression, $.binary_expression],
      [$.call_expression, $.binary_expression, $.unary_expression],
      [$.call_expression, $.binary_expression, $.new_expression],
      [$.call_expression, $.binary_expression, $.update_expression],

      [$.nested_type_identifier, $.nested_identifier],
      [$.nested_type_identifier, $.member_expression],
      [$.nested_identifier, $.member_expression, $.nested_type_identifier],

      [$.generic_type, $._primary_type],
      [$._expression, $._primary_type, $.lookup_type],
      [$._primary_type, $.lookup_type],
      [$._primary_type, $.mapped_type],

      [$.member_expression, $.nested_identifier],

      [$.required_parameter, $._expression],
      [$.required_parameter, $._expression, $._primary_type],
      [$.required_parameter, $.assignment_expression],
      [$.optional_parameter, $._expression],

      [$.required_parameter, $.predefined_type, $._expression],
      [$.required_parameter, $.predefined_type],
      [$.required_parameter, $._primary_type],

      [$._primary_type, $.type_parameter],
      [$.jsx_opening_element, $.type_parameter],
      [$.jsx_namespace_name, $._primary_type],

      [$._expression, $.literal_type],
      [$._expression, $._primary_type],
      [$._expression, $.generic_type],
      [$._expression, $.predefined_type],
      [$.this_type, $.this],
      [$.function_type, $.call_signature],
      [$.constructor_type, $.call_signature],

      [$.object, $._property_name],
      [$.object, $.object_type],
    ]),

    inline: ($, previous) => previous.concat([
      $._type_identifier,
    ]),

    rules: {
      public_field_definition: ($, previous) => seq(
        optional($.accessibility_modifier),
        choice(
          seq(optional('static'), optional($.readonly)),
          seq(optional('abstract'), optional($.readonly)),
          seq(optional($.readonly), optional('abstract')),
        ),
        $._property_name,
        optional(choice('?', '!')),
        optional($.type_annotation),
        optional($._initializer)
      ),

      call_expression: ($, previous) => prec(PREC.FUNCTION_CALL, seq(
        choice($._expression, $.super, $.function),
        optional($.type_arguments),
        choice($.arguments, $.template_string)
      )),

      // If the dialect is regular typescript, we exclude JSX expressions and
      // include type assertions. If the dialect is TSX, we do the opposite.
      _expression: ($, previous) => {
        const choices = [
          $.as_expression,
          $.non_null_expression,
          $.internal_module,
          $.super,
        ];

        if (dialect === 'typescript') {
          choices.push($.type_assertion);
          choices.push(...previous.members.filter(member =>
            member.name !== '_jsx_element' && member.name !== 'jsx_fragment'
          ));
        } else if (dialect === 'tsx') {
          choices.push(...previous.members);
        } else {
          throw new Error(`Unknown dialect ${dialect}`);
        }

        return choice(...choices);
      },

      // This rule is only referenced by _expression when the dialect is 'tsx'
      jsx_opening_element: $ => prec.dynamic(-1, seq(
        '<',
        choice(
          $._jsx_identifier,
          seq($.nested_identifier, optional($.type_arguments)),
          seq($.identifier, optional($.type_arguments)),
          $.jsx_namespace_name,
        ),
        repeat($._jsx_attribute),
        '>'
      )),

      _import_export_specifier: ($, previous) => seq(
        optional(choice('type', 'typeof')),
        previous
      ),

      import_statement: $ => seq(
        'import',
        optional(choice('type', 'typeof')),
        choice(
          seq($.import_clause, $._from_clause),
          $.import_require_clause,
          $.string
        ),
        $._semicolon
      ),

      non_null_expression: $ => prec.left(PREC.NON_NULL, seq(
        $._expression, '!'
      )),

      export_statement: ($, previous) => choice(
        previous,
        seq('export', '=', $.identifier, $._semicolon),
        seq('export', 'as', 'namespace', $.identifier, $._semicolon),
        seq('export', $.import_alias)
      ),

      variable_declarator: ($, previous) => choice(
        seq($.identifier, optional($.type_annotation), optional($._initializer)),
        seq($._destructuring_pattern, optional($.type_annotation), $._initializer)
      ),

      method_signature: $ => seq(
        optional($.accessibility_modifier),
        optional('static'),
        optional($.readonly),
        optional('async'),
        optional(choice('get', 'set', '*')),
        $._property_name,
        optional('?'),
        $.call_signature
      ),

      abstract_method_signature: $ => seq(
        optional($.accessibility_modifier),
        'abstract',
        optional(choice('get', 'set', '*')),
        $._property_name,
        optional('?'),
        $.call_signature
      ),

      parenthesized_expression: ($, previous) => seq(
        '(',
        choice(
          seq($._expression, optional($.type_annotation)),
          $.sequence_expression
        ),
        ')'
      ),

      _formal_parameter: $ => seq(
        repeat($.decorator),
        choice(
          $.required_parameter,
          $.rest_parameter,
          $.optional_parameter
        )
      ),

      function_signature: $ => seq(
        optional('async'),
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
        optional('async'),
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
        repeat(choice(
          $.decorator,
          seq($.method_definition, optional($._semicolon)),
          seq(
            choice(
              $.abstract_method_signature,
              $.index_signature,
              $.method_signature,
              $.public_field_definition
            ),
            choice($._semicolon, ',')
          )
        )),
        '}'
      ),

      method_definition: $ => prec.left(seq(
        optional($.accessibility_modifier),
        optional('static'),
        optional($.readonly),
        optional('async'),
        optional(choice('get', 'set', '*')),
        $._property_name,
        optional('?'),
        $.call_signature,
        $.statement_block
      )),

      _declaration: ($, previous) => prec(PREC.DECLARATION, choice(
        $.export_statement,
        $.function,
        $.internal_module,
        $.function_signature,
        $.generator_function,
        $.abstract_class,
        $.class,
        $.module,
        $.variable_declaration,
        $.lexical_declaration,
        $.type_alias_declaration,
        $.enum_declaration,
        $.interface_declaration,
        $.import_alias,
        $.ambient_declaration
      )),

      type_assertion: $ => prec(PREC.TYPE_ASSERTION, seq(
        $.type_arguments,
        $._expression
      )),

      as_expression: $ => prec.left(PREC.AS_EXPRESSION, seq(
        $._expression,
        'as',
        choice($._type, $.template_string)
      )),

      class_heritage: ($, previous) => choice(
        seq($.extends_clause, optional($.implements_clause)),
        $.implements_clause
      ),

      import_require_clause: $ => seq($.identifier, '=', 'require', '(', $.string, ')'),

      implements_clause: $ => seq(
        'implements',
        commaSep1($._type)
      ),

      ambient_declaration: $ => seq(
        'declare',
        choice(
          $._declaration,
          seq('global', $.statement_block),
          seq('module', '.', alias($.identifier, $.property_identifier), ':', $._type)
        )
      ),

      abstract_class: ($, previous) => seq(
        'abstract',
        'class',
        $._type_identifier,
        optional($.type_parameters),
        optional($.class_heritage),
        $.class_body
      ),

      class: ($, previous) => seq(
        repeat($.decorator),
        'class',
        $._type_identifier,
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
        choice($.string, $.identifier, $.nested_identifier),
        optional($.statement_block)
      )),

      import_alias: $ => seq(
        'import',
        $.identifier,
        '=',
        choice($.identifier, $.nested_identifier),
        $._semicolon
      ),

      nested_type_identifier: $ => prec(PREC.MEMBER, seq(
        choice($.identifier, $.nested_identifier),
        '.',
        $._type_identifier
      )),

      interface_declaration: $ => seq(
        'interface',
        $._type_identifier,
        optional($.type_parameters),
        optional($.extends_clause),
        $.object_type
      ),

      _type_reference: $ => prec(PREC.TYPE_REFERENCE, choice(
        $._type_identifier,
        $.nested_type_identifier,
        $.generic_type
      )),

      extends_clause: $ => prec(PREC.EXTENDS, seq(
        'extends',
        commaSep1(choice($._type_reference, $._expression))
      )),

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
        $._type_identifier,
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

      required_parameter: $ => choice(
        seq(
          optional($.accessibility_modifier),
          optional($.readonly),
          choice(
            $.identifier,
            alias($._reserved_identifier, $.identifier),
            $._destructuring_pattern,
            $.this
          ),
          optional($.type_annotation),
          optional($._initializer)
        )
      ),

      optional_parameter: $ => seq(
        optional($.accessibility_modifier),
        optional($.readonly),
        choice(
          $.identifier,
          alias($._reserved_identifier, $.identifier),
          $._destructuring_pattern
        ),
        '?',
        optional($.type_annotation),
        optional($._initializer)
      ),

      rest_parameter: $ => seq(
        '...',
        $.identifier,
        optional($.type_annotation)
      ),

      type_annotation: $ => seq(':', $._type),

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
        $._type_identifier,
        $.nested_type_identifier,
        $.generic_type,
        $.type_predicate,
        $.object_type,
        $.array_type,
        $.tuple_type,
        $.flow_maybe_type,
        $.type_query,
        $.index_type_query,
        $.this_type,
        $.existential_type,
        $.literal_type,
        $.lookup_type,
        $.mapped_type
      ),

      generic_type: $ => seq(
        choice(
          $._type_identifier,
          $.nested_type_identifier
        ),
        $.type_arguments
      ),

      type_predicate: $ => seq(
        $.identifier,
        'is',
        $._type
      ),

      type_query: $ => prec(PREC.TYPEOF, seq(
        'typeof',
        choice($.identifier, $.nested_identifier)
      )),

      index_type_query: $ => seq(
        'keyof',
        choice($._type_identifier, $.nested_type_identifier)
      ),

      lookup_type: $ => seq(
        choice($._type_identifier, $.nested_type_identifier),
        '[',
        $._type,
        ']'
      ),

      mapped_type: $ => seq(
        choice($._type_identifier, $.nested_type_identifier),
        'in',
        $._type,
      ),

      literal_type: $ => choice(alias($._number, $.unary_expression), $.number, $.string, $.true, $.false),

      _number: $ => prec.left(PREC.NEG, seq(choice('-', '+'), $.number)),

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
        '<', commaSep1($._type), optional(','), '>'
      ),

      object_type: $ => seq(
        choice('{', '{|'),
        optional(seq(
          optional(choice(',', ';')),
          sepBy1(
            choice(',', $._semicolon),
            choice(
              $.export_statement,
              $.property_signature,
              $.call_signature,
              $.construct_signature,
              $.index_signature,
              $.method_signature
            )
          ),
          optional(choice(',', $._semicolon))
        )),
        choice('}', '|}')
      ),

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
        '<', commaSep1($.type_parameter), optional(','), '>'
      ),

      type_parameter: $ => seq(
        $._type_identifier,
        optional($.constraint),
        optional($.default_type)
      ),

      default_type: $ => seq(
        '=',
        $._type
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

      index_signature: $ => seq(
        '[',
        choice(seq(
          choice($.identifier, alias($._reserved_identifier, $.identifier)),
          ':',
          $.predefined_type,
        ), $.mapped_type),
        ']',
        $.type_annotation
      ),

      array_type: $ => prec.right(PREC.ARRAY_TYPE, seq(
        $._primary_type, '[', ']'
      )),

      tuple_type: $ => seq(
        '[', commaSep1($._type), ']'
      ),

      union_type: $ => prec.left(PREC.UNION, seq(
        optional($._type), '|', $._type
      )),

      intersection_type: $ => prec.left(PREC.INTERSECTION, seq(
        optional($._type), '&', $._type
      )),

      function_type: $ => seq(
        optional($.type_parameters),
        $.formal_parameters,
        '=>',
        $._type
      ),

      _type_identifier: $ => alias($.identifier, $.type_identifier),

      _reserved_identifier: ($, previous) => choice(
        'declare',
        'namespace',
        'type',
        'public',
        'private',
        'protected',
        'module',
        'any',
        'number',
        'boolean',
        'string',
        'symbol',
        'void',
        'import',
        'export',
        previous
      ),
    },
  });
}

function commaSep1 (rule) {
  return sepBy1(',', rule);
}

function commaSep (rule) {
  return sepBy(',', rule);
}

function sepBy (sep, rule) {
  return optional(sepBy1(sep, rule))
}

function sepBy1 (sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}
