module.exports = function defineGrammar(dialect) {
  return grammar(require('tree-sitter-javascript/grammar'), {
    name: dialect,

    externals: ($, previous) => previous.concat([
      // Allow the external scanner to tell whether it is parsing an expression
      // or a type by checking the validity of this binary operator. This is
      // needed because the rules for automatic semicolon insertion are
      // slightly different when parsing types. Any binary-only operator would
      // work.
      '||',
      $._function_signature_automatic_semicolon,
    ]),

    supertypes: ($, previous) => previous.concat([
      $._primary_type,
    ]),

    precedences: ($, previous) => previous.concat([
      [
        'call',
        'unary',
        'binary_as',
        $.await_expression,
        $.arrow_function,
      ],
      [
        $.intersection_type,
        $.union_type,
        $.conditional_type,
        $.function_type,
        'binary_as',
        $.type_predicate,
        $.readonly_type
      ],
      [$.mapped_type_clause, $.primary_expression],
      [$.accessibility_modifier, $.primary_expression],
      ['unary_void', $.expression],
      ['extends_type', $.primary_expression],
      ['unary', 'assign'],
      ['declaration', $.expression],
      [$.predefined_type, $.unary_expression],
      [$._type, $.flow_maybe_type],
      [$.tuple_type, $.array_type, $.pattern, $._type],
      [$.readonly_type, $.pattern],
      [$.readonly_type, $.primary_expression],
      [$.type_query, $.subscript_expression, $.expression],
      [$.nested_type_identifier, $.generic_type, $._primary_type, $.lookup_type, $.index_type_query, $._type],
    ]),

    conflicts: ($, previous) => previous.concat([
      [$.call_expression, $.binary_expression],
      [$.call_expression, $.binary_expression, $.unary_expression],
      [$.call_expression, $.binary_expression, $.update_expression],
      [$.call_expression, $.binary_expression, $.type_assertion],

      [$.nested_identifier, $.nested_type_identifier, $.primary_expression],
      [$.nested_identifier, $.nested_type_identifier],
      [$.nested_identifier, $.member_expression],

      [$.primary_expression, $.array_type],
      [$.primary_expression, $.array_type, $.tuple_type],

      [$._call_signature, $.function_type],
      [$._call_signature, $.constructor_type],

      [$._primary_type, $.type_parameter],
      [$.jsx_opening_element, $.type_parameter],
      [$.jsx_opening_element, $.type_parameter, $._primary_type],
      [$.jsx_opening_element, $.generic_type],
      [$.jsx_namespace_name, $._primary_type],

      [$.primary_expression, $._parameter_name],
      [$.primary_expression, $._parameter_name, $.predefined_type],
      [$.primary_expression, $._parameter_name, $._primary_type],
      [$.primary_expression, $._parameter_name, $.array_type, $.tuple_type],
      [$.primary_expression, $.literal_type],
      [$.primary_expression, $._primary_type],
      [$.primary_expression, $.generic_type],
      [$.primary_expression, $.predefined_type],
      [$.primary_expression, $.pattern, $._primary_type],
      [$.primary_expression, $.pattern, $.predefined_type],
      [$._parameter_name, $.predefined_type],
      [$._parameter_name, $._primary_type],
      [$._parameter_name, $.assignment_expression],
      [$._parameter_name, $.pattern],
      [$.pattern, $._primary_type],
      [$.pattern, $.predefined_type],

      [$.optional_tuple_parameter, $._primary_type],
      [$.optional_tuple_parameter, $._primary_type, $.primary_expression],
      [$.rest_pattern, $._primary_type, $.primary_expression],
      [$.rest_pattern, $._primary_type],

      [$.object, $.object_type],
      [$.object, $._property_name],
      [$.object, $.object_pattern, $.object_type],
      [$.object, $.object_pattern, $._property_name],
      [$.object_pattern, $.object_type],
      [$.object_pattern, $.object_type],
      [$.object_pattern, $._property_name],

      [$.array, $.tuple_type],
      [$.array, $.array_pattern, $.tuple_type],
      [$.array_pattern, $.tuple_type],
    ]),

    inline: ($, previous) => previous
      .filter(rule => ![
        '_formal_parameter',
        '_call_signature'
      ].includes(rule.name))
      .concat([
        $._type_identifier,
        $._enum_member,
        $._jsx_start_opening_element,
      ]),

    rules: {
      public_field_definition: $ => seq(
        optional('declare'),
        optional($.accessibility_modifier),
        choice(
          seq(optional('static'), optional('readonly')),
          seq(optional('abstract'), optional('readonly')),
          seq(optional('readonly'), optional('abstract')),
        ),
        field('name', $._property_name),
        optional(choice('?', '!')),
        field('type', optional($.type_annotation)),
        optional($._initializer)
      ),

      // override original catch_clause, add optional type annotation
      catch_clause: $ => seq(
        'catch',
        optional(
          seq(
            '(',
            field(
              'parameter',
              choice($.identifier, $._destructuring_pattern)
            ),
            optional(
              // only types that resolve to 'any' or 'unknown' are supported
              // by the language but it's simpler to accept any type here.
              field('type', $.type_annotation),
            ),
            ')'
          )
        ),
        field('body', $.statement_block)
      ),

      call_expression: $ => choice(
        prec('call', seq(
          field('function', $.expression),
          field('type_arguments', optional($.type_arguments)),
          field('arguments', choice($.arguments, $.template_string))
        )),
        prec('member', seq(
          field('function', $.primary_expression),
          '?.',
          field('type_arguments', optional($.type_arguments)),
          field('arguments', $.arguments)
        ))
      ),

      new_expression: $ => prec.right('new', seq(
        'new',
        field('constructor', $.primary_expression),
        field('type_arguments', optional($.type_arguments)),
        field('arguments', optional($.arguments))
      )),

      _augmented_assignment_lhs: ($, previous) => choice(previous, $.non_null_expression),

      _lhs_expression: ($, previous) => choice(previous, $.non_null_expression),

      primary_expression: ($, previous) => choice(
        previous,
        $.non_null_expression,
      ),

      // If the dialect is regular typescript, we exclude JSX expressions and
      // include type assertions. If the dialect is TSX, we do the opposite.
      expression: ($, previous) => {
        const choices = [
          $.as_expression,
          $.internal_module,
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

      _jsx_start_opening_element: $ => seq(
        '<',
        choice(
          field('name', choice(
            $._jsx_identifier,
            $.jsx_namespace_name
          )),
          seq(
            field('name', choice(
              $.identifier,
              $.nested_identifier
            )),
            field('type_arguments', optional($.type_arguments))
          )
        ),
        repeat(field('attribute', $._jsx_attribute))
      ),

      // This rule is only referenced by expression when the dialect is 'tsx'
      jsx_opening_element: $ => prec.dynamic(-1, seq(
        $._jsx_start_opening_element,
        '>'
      )),

      // tsx only. See jsx_opening_element.
      jsx_self_closing_element: $ => prec.dynamic(-1, seq(
        $._jsx_start_opening_element,
        '/',
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

      export_statement: ($, previous) => choice(
        previous,
        seq('export', 'type', $.export_clause),
        seq('export', '=', $.identifier, $._semicolon),
        seq('export', 'as', 'namespace', $.identifier, $._semicolon),
        seq('export', 'default', $.function_signature)
      ),

      non_null_expression: $ => prec.left('unary', seq(
        $.expression, '!'
      )),

      variable_declarator: $ => choice(
        seq(
          field('name', choice($.identifier, $._destructuring_pattern)),
          field('type', optional($.type_annotation)),
          optional($._initializer)
        ),
        prec('declaration', seq(
          field('name', $.identifier),
          '!',
          field('type', $.type_annotation)
        ))
      ),

      method_signature: $ => seq(
        optional($.accessibility_modifier),
        optional('static'),
        optional('readonly'),
        optional('async'),
        optional(choice('get', 'set', '*')),
        field('name', $._property_name),
        optional('?'),
        $._call_signature
      ),

      abstract_method_signature: $ => seq(
        optional($.accessibility_modifier),
        'abstract',
        optional(choice('get', 'set', '*')),
        field('name', $._property_name),
        optional('?'),
        $._call_signature
      ),

      parenthesized_expression: ($, previous) => seq(
        '(',
        choice(
          seq($.expression, optional($.type_annotation)),
          $.sequence_expression
        ),
        ')'
      ),

      _formal_parameter: $ => choice(
        $.required_parameter,
        $.optional_parameter
      ),

      function_signature: $ => seq(
        optional('async'),
        'function',
        field('name', $.identifier),
        $._call_signature,
        choice($._semicolon, $._function_signature_automatic_semicolon),
      ),

      class_body: $ => seq(
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
        optional('readonly'),
        optional('async'),
        optional(choice('get', 'set', '*')),
        field('name', $._property_name),
        optional('?'),
        $._call_signature,
        field('body', $.statement_block)
      )),

      declaration: ($, previous) => choice(
        previous,
        $.function_signature,
        $.abstract_class_declaration,
        $.module,
        prec('declaration', $.internal_module),
        $.type_alias_declaration,
        $.enum_declaration,
        $.interface_declaration,
        $.import_alias,
        $.ambient_declaration
      ),

      type_assertion: $ => prec.left('unary', seq(
        $.type_arguments,
        $.expression
      )),

      as_expression: $ => prec.left('binary_as', seq(
        $.expression,
        'as',
        choice($._type, $.template_string)
      )),

      class_heritage: $ => choice(
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
          $.declaration,
          seq('global', $.statement_block),
          seq('module', '.', alias($.identifier, $.property_identifier), ':', $._type, $._semicolon)
        )
      ),

      class: $ => prec('literal', seq(
        repeat(field('decorator', $.decorator)),
        'class',
        field('name', optional($._type_identifier)),
        field('type_parameters', optional($.type_parameters)),
        optional($.class_heritage),
        field('body', $.class_body)
      )),

      abstract_class_declaration: $ => prec('declaration', seq(
        repeat(field('decorator', $.decorator)),
        'abstract',
        'class',
        field('name', $._type_identifier),
        field('type_parameters', optional($.type_parameters)),
        optional($.class_heritage),
        field('body', $.class_body)
      )),

      class_declaration: $ => prec.left('declaration', seq(
        repeat(field('decorator', $.decorator)),
        'class',
        field('name', $._type_identifier),
        field('type_parameters', optional($.type_parameters)),
        optional($.class_heritage),
        field('body', $.class_body),
        optional($._automatic_semicolon)
      )),

      module: $ => seq(
        'module',
        $._module
      ),

      internal_module: $ => seq(
        'namespace',
        $._module
      ),

      _module: $ => prec.right(seq(
        field('name', choice($.string, $.identifier, $.nested_identifier)),
        field('body', optional($.statement_block))
      )),

      import_alias: $ => seq(
        'import',
        $.identifier,
        '=',
        choice($.identifier, $.nested_identifier),
        $._semicolon
      ),

      nested_type_identifier: $ => prec('member', seq(
        field('module', choice($.identifier, $.nested_identifier)),
        '.',
        field('name', $._type_identifier)
      )),

      interface_declaration: $ => seq(
        'interface',
        field('name', $._type_identifier),
        field('type_parameters', optional($.type_parameters)),
        optional($.extends_clause),
        field('body', $.object_type)
      ),

      extends_clause: $ => prec('extends_type', seq(
        'extends',
        commaSep1(choice(
          prec('extends_type', choice(
            $._type_identifier,
            $.nested_type_identifier,
            $.generic_type
          )),
          $.expression
        ))
      )),

      enum_declaration: $ => seq(
        optional('const'),
        'enum',
        field('name', $.identifier),
        field('body', $.enum_body)
      ),

      enum_body: $ => seq(
        '{',
        optional(seq(
          sepBy1(',', choice(
            $._property_name,
            $.enum_assignment
          )),
          optional(',')
        )),
        '}'
      ),

      enum_assignment: $ => seq(
        $._property_name,
        $._initializer
      ),

      type_alias_declaration: $ => seq(
        'type',
        field('name', $._type_identifier),
        field('type_parameters', optional($.type_parameters)),
        '=',
        field('value', $._type),
        $._semicolon
      ),

      accessibility_modifier: $ => choice(
        'public',
        'private',
        'protected'
      ),

      required_parameter: $ => seq(
        $._parameter_name,
        optional($.type_annotation),
        optional($._initializer)
      ),

      optional_parameter: $ => seq(
        $._parameter_name,
        '?',
        optional($.type_annotation),
        optional($._initializer)
      ),

      _parameter_name: $ => seq(
        repeat(field('decorator', $.decorator)),
        optional($.accessibility_modifier),
        optional('readonly'),
        choice($.pattern, $.this)
      ),

      omitting_type_annotation: $ => seq('-?:', $._type),
      opting_type_annotation: $ => seq('?:', $._type),
      type_annotation: $ => seq(':', $._type),

      asserts: $ => seq(
        ':',
        'asserts',
        choice($.type_predicate, $.identifier, $.this)
      ),

      _type: $ => choice(
        $._primary_type,
        $.union_type,
        $.intersection_type,
        $.function_type,
        $.readonly_type,
        $.constructor_type,
        $.infer_type
      ),

      tuple_parameter: $ => seq(
        choice($.identifier, $.rest_pattern),
        $.type_annotation
      ),

      optional_tuple_parameter: $ => seq(
        $.identifier,
        '?',
        $.type_annotation
      ),

      optional_type: $ => seq($._type, '?'),
      rest_type: $ => seq('...', $._type),

      _tuple_type_member: $ => choice(
        alias($.tuple_parameter, $.required_parameter),
        alias($.optional_tuple_parameter, $.optional_parameter),
        $.optional_type,
        $.rest_type,
        $._type,
      ),

      constructor_type: $ => prec.left(seq(
        'new',
        optional($.type_parameters),
        $.formal_parameters,
        '=>',
        $._type
      )),

      _primary_type: $ => choice(
        $.parenthesized_type,
        $.predefined_type,
        $._type_identifier,
        $.nested_type_identifier,
        $.generic_type,
        $.object_type,
        $.array_type,
        $.tuple_type,
        $.flow_maybe_type,
        $.type_query,
        $.index_type_query,
        $.this,
        $.existential_type,
        $.literal_type,
        $.lookup_type,
        $.conditional_type,
      ),

      infer_type: $ => seq("infer", $._type_identifier),

      conditional_type: $ => prec.left(seq(
        field('left', $._type),
        'extends',
        field('right', $._type),
        '?',
        field('consequence', $._type),
        ':',
        field('alternative', $._type)
      )),

      generic_type: $ => prec('call', seq(
        choice(
          $._type_identifier,
          $.nested_type_identifier
        ),
        $.type_arguments
      )),

      type_predicate: $ => seq(
        choice($.identifier, $.this),
        'is',
        $._type
      ),

      type_predicate_annotation: $ => seq(
        seq(':', $.type_predicate)
      ),

      type_query: $ => prec.right(seq(
        'typeof',
        choice($.primary_expression, $.generic_type),
      )),

      index_type_query: $ => seq(
        'keyof',
        $._primary_type,
      ),

      lookup_type: $ => seq(
        $._primary_type,
        '[',
        $._type,
        ']'
      ),

      mapped_type_clause: $ => seq(
        $._type_identifier,
        'in',
        $._type,
      ),

      literal_type: $ => choice(
        alias($._number, $.unary_expression),
        $.number,
        $.string,
        $.true,
        $.false
      ),

      _number: $ => prec.left(1, seq(
        field('operator', choice('-', '+')),
        field('argument', $.number)
      )),

      existential_type: $ => '*',

      flow_maybe_type: $ => prec.right(seq( '?', $._primary_type)),

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

      call_signature: $ => $._call_signature,

      property_signature: $ => seq(
        optional($.accessibility_modifier),
        optional('static'),
        optional('readonly'),
        field('name', $._property_name),
        optional('?'),
        field('type', optional($.type_annotation))
      ),

      _call_signature: $ => seq(
        field('type_parameters', optional($.type_parameters)),
        field('parameters', $.formal_parameters),
        field('return_type', optional(
          choice($.type_annotation, $.asserts, $.type_predicate_annotation)
        ))
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
        optional(
          seq(
            field("sign", optional("-")),
            'readonly'
          )
        ),
        '[',
        choice(
          seq(
            choice(
              $.identifier,
              alias($._reserved_identifier, $.identifier)
            ),
            ':',
            $._type,
          ),
          $.mapped_type_clause
        ),
        ']',
        choice(
          $.type_annotation,
          $.omitting_type_annotation,
          $.opting_type_annotation
        )
      ),

      array_type: $ => seq($._primary_type, '[', ']'),
      tuple_type: $ => seq(
        '[', commaSep($._tuple_type_member), optional(','), ']'
      ),
      readonly_type: $ => seq('readonly', $._type),

      union_type: $ => prec.left(seq(optional($._type), '|', $._type)),
      intersection_type: $ => prec.left(seq(optional($._type), '&', $._type)),

      function_type: $ => prec.left(seq(
        optional($.type_parameters),
        $.formal_parameters,
        '=>',
        choice($._type, $.type_predicate),
      )),

      _type_identifier: $ => alias($.identifier, $.type_identifier),

      _reserved_identifier: ($, previous) => choice(
        'declare',
        'namespace',
        'type',
        'public',
        'private',
        'protected',
        'readonly',
        'module',
        'any',
        'number',
        'boolean',
        'string',
        'symbol',
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
