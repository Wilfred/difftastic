const PREC = {
  prefix: 19,
  dot: 18,
  hash: 17,
  app: 16,
  neg: 15,
  pow: 14,
  mult: 13,
  add: 12,
  cons: 11,
  concat: 10,
  rel: 9,
  and: 8,
  or: 7,
  prod: 6,
  assign: 5,
  if: 4,
  seq: 3,
  match: 2
}

const OP_CHAR = /[!$%&*+\-./:<=>?@^|~]/
const NUMBER = token(choice(
  /[0-9][0-9_]*(\.[0-9_]*)?([eE][+\-]?[0-9][0-9_]*)?[g-zG-Z]?/,
  /0[xX][0-9A-Fa-f][0-9A-Fa-f_]*(\.[0-9A-Fa-f_]*)?([pP][+\-]?[0-9][0-9_]*)?[g-zG-Z]?/,
  /0[oO][0-7][0-7_]*[g-zG-Z]?/,
  /0[bB][01][01_]*[g-zG-Z]?/
))

const COMMENT = $ => seq(
  '(*',
  repeat(choice(
    alias($._comment, $.comment),
    /'([^'\\]|\\[\\"'ntbr ]|\\[0-9][0-9][0-9]|\\x[0-9A-Fa-f][0-9A-Fa-f]|\\o[0-3][0-7][0-7])'/,
    /"([^\\"]|\\(.|\n))*"/,
    $._quoted_string,
    /[A-Za-z_][a-zA-Z0-9_']*/,
    /[^('"{*A-Za-z_]+/,
    '(', "'", '{', '*'
  )),
  '*)'
)

module.exports = grammar({
  name: 'ocaml',

  extras: $ => [
    /\s/,
    $.comment,
    $.line_number_directive
  ],

  inline: $ => [
    $._seq_expression,
    $._pow_operator,
    $._mult_operator,
    $._label_name,
    $._field_name,
    $._class_name,
    $._method_name,
    $._module_name,
    $._module_type_name,
    $._type_constructor,
    $._instance_variable_name,
    $._constructor_name,
  ],

  word: $ => $._identifier,

  rules: {
    compilation_unit: $ => seq(
      optional($.shebang),
      optional($._definitions)
    ),

    shebang: $ => /#!.*/,

    _definitions: $ => choice(
      repeat1(';;'),
      seq(
        repeat(';;'),
        choice($._module_item, $.toplevel_directive, seq($._seq_expression, repeat($.item_attribute))),
        repeat(choice(
          seq(repeat(';;'), choice($._module_item, $.toplevel_directive)),
          seq(repeat1(';;'), seq($._seq_expression, repeat($.item_attribute)))
        )),
        repeat(';;')
      )
    ),

    _specifications: $ => choice(
      repeat1(';;'),
      seq(
        repeat1(seq(repeat(';;'), $._module_item)),
        repeat(';;')
      )
    ),

    // Toplevel

    toplevel_directive: $ => seq(
      $.directive,
      optional(choice(
        $._constant,
        $.value_path,
        $._simple_module_expression
      ))
    ),

    // Module items

    _module_item: $ => choice(
      $.value_specification,
      $.value_definition,
      $.external,
      $.type_definition,
      $.exception_definition,
      $.module_definition,
      $.module_type_definition,
      $.open_statement,
      $.include_statement,
      $.class_definition,
      $.class_type_definition,
      $.floating_attribute,
      $.item_extension
    ),

    value_specification: $ => seq(
      'val',
      optional($._extension_attribute),
      $.value_name,
      ':',
      $._type,
      repeat($.item_attribute)
    ),

    value_definition: $ => seq(
      choice(
        seq('let', optional($._extension_attribute), optional('rec')),
        $.let_operator
      ),
      sep1(
        choice(
          seq('and', repeat($.attribute)),
          $.and_operator
        ),
        $.let_binding
      )
    ),

    let_binding: $ => seq(
      $._pattern_no_exn,
      repeat($.parameter),
      optional(seq(':', $._poly_type)),
      optional(seq(':>', $._type)),
      '=',
      $._seq_expression,
      repeat($.item_attribute)
    ),

    parameter: $ => choice(
      $._simple_pattern,
      $.label,
      seq(
        $.label,
        token.immediate(':'),
        $._simple_pattern
      ),
      seq(
        choice('~', '?'),
        '(',
        $._label_name,
        optional(seq(':', $._type)),
        optional(seq('=', $._seq_expression)),
        ')'
      ),
      seq(
        $.label,
        token.immediate(':'),
        '(',
        $._pattern,
        optional(seq(':', $._type)),
        seq('=', $._seq_expression),
        ')'
      ),
      parenthesize($.abstract_type)
    ),

    external: $ => seq(
      'external',
      optional($._extension_attribute),
      $.value_name,
      ':',
      $._type,
      '=',
      repeat1($.string),
      repeat($.item_attribute)
    ),

    type_definition: $ => seq(
      'type', optional($._extension_attribute), optional('nonrec'),
      sep1(seq('and', repeat($.attribute)), $.type_binding)
    ),

    type_binding: $ => seq(
      optional($.type_params),
      choice(
        seq(
          $._type_constructor,
          optional($._type_equation),
          optional(seq(
            '=',
            optional('private'),
            choice(
              $.variant_declaration,
              $.record_declaration,
              '..'
            )
          )),
          repeat($.type_constraint)
        ),
        seq(
          $.type_constructor_path,
          seq(
            '+=',
            optional('private'),
            $.variant_declaration,
          )
        )
      ),
      repeat($.item_attribute)
    ),

    type_params: $ => choice(
      $._type_param,
      parenthesize(sep1(',', $._type_param))
    ),

    _type_param: $ => seq(
      optional(choice('+', '-')),
      choice(
        $.type_variable,
        alias('_', $.type_variable)
      )
    ),

    _type_equation: $ => seq(
      choice('=', ':='),
      optional('private'),
      $._type
    ),

    variant_declaration: $ => choice(
      seq('|', sep('|', $.constructor_declaration)),
      sep1('|', $.constructor_declaration)
    ),

    constructor_declaration: $ => seq(
      choice(
        $._constructor_name,
        seq('[', ']'),
        seq('(', ')'),
        'true',
        'false'
      ),
      optional(choice(
        seq('of', $.constructor_argument),
        seq(':', $._simple_type),
        seq(':', $.constructor_argument, '->', $._simple_type),
        seq('=', $.constructor_path)
      )),
      repeat($.attribute)
    ),

    constructor_argument: $ => choice(
      sep1('*', $._simple_type),
      $.record_declaration
    ),

    record_declaration: $ => seq(
      '{',
      sep1(seq(';', repeat($.attribute)), $.field_declaration),
      optional(seq(';', repeat($.attribute))),
      '}'
    ),

    field_declaration: $ => seq(
      optional('mutable'),
      $._field_name,
      ':',
      $._poly_type,
    ),

    type_constraint: $ => seq(
      'constraint',
      $._type,
      '=',
      $._type
    ),

    exception_definition: $ => seq(
      'exception',
      optional($._extension_attribute),
      $.constructor_declaration,
      repeat($.item_attribute)
    ),

    module_definition: $ => seq(
      'module', optional($._extension_attribute), optional('rec'),
      sep1(seq('and', repeat($.attribute)), $.module_binding)
    ),

    module_binding: $ => seq(
      choice($._module_name, alias('_', $.module_name)),
      repeat($.module_parameter),
      optional(seq(':', $._module_type)),
      optional(seq('=', $._simple_module_expression)),
      repeat($.item_attribute)
    ),

    module_parameter: $ => parenthesize(optional(seq(
      choice($._module_name, alias('_', $.module_name)),
      ':',
      $._module_type
    ))),

    module_type_definition: $ => seq(
      'module', 'type',
      optional($._extension_attribute),
      $._module_type_name,
      optional(seq('=', $._module_type)),
      repeat($.item_attribute)
    ),

    open_statement: $ => seq(
      'open',
      optional('!'),
      optional($._extension_attribute),
      $._simple_module_expression,
      repeat($.item_attribute)
    ),

    include_statement: $ => seq(
      'include',
      optional($._extension_attribute),
      choice($._module_type, $._simple_module_expression),
      repeat($.item_attribute)
    ),

    class_definition: $ => seq(
      'class', optional($._extension_attribute),
      sep1(seq('and', repeat($.attribute)), $.class_binding)
    ),

    class_binding: $ => prec.right(seq(
      optional('virtual'),
      optional(seq(
        '[',
        sep1(',', $.type_variable),
        ']'
      )),
      $._class_name,
      repeat($.parameter),
      optional(seq(':', $._class_type)),
      optional(seq('=', $._class_expression)),
      repeat($.item_attribute)
    )),

    class_type_definition: $ => seq(
      'class', 'type', optional($._extension_attribute),
      sep1(seq('and', repeat($.attribute)), $.class_type_binding)
    ),

    class_type_binding: $ => seq(
      optional('virtual'),
      optional(seq(
        '[',
        sep1(',', $.type_variable),
        ']'
      )),
      $._class_name,
      '=',
      $._simple_class_type,
      repeat($.item_attribute)
    ),

    // Module types

    _module_type: $ => prec.right(seq(
      choice(
        $.module_type_path,
        $.signature,
        $.module_type_constraint,
        $.module_type_of,
        $.functor_type,
        $.parenthesized_module_type,
        $.extension
      ),
      repeat($.attribute)
    )),

    signature: $ => seq(
      'sig',
      repeat($.attribute),
      optional($._specifications),
      'end'
    ),

    module_type_constraint: $ => prec.right(seq(
      $._module_type,
      'with',
      sep1('and', choice(
        seq(
          'type',
          optional($.type_params),
          $.type_constructor_path,
          $._type_equation,
          repeat($.type_constraint)
        ),
        seq(
          'module',
          $._simple_module_expression,
          choice('=', ':='),
          $._simple_module_expression
        )
      ))
    )),

    module_type_of: $ => seq(
      'module', 'type', 'of',
      repeat($.attribute),
      $._simple_module_expression
    ),

    functor_type: $ => prec.right(seq(
      choice(
        seq(
          'functor',
          repeat($.attribute),
          repeat($.module_parameter)
        ),
        $._module_type
      ),
      '->',
      $._module_type
    )),

    parenthesized_module_type: $ => parenthesize($._module_type),

    // Module expressions

    _simple_module_expression: $ => prec.dynamic(1, prec.right(seq(
      choice(
        $._module_name,
        $.structure,
        $.functor,
        $.module_application,
        $.submodule,
        $.typed_module_expression,
        $.parenthesized_module_expression,
        $.extension
      ),
      repeat($.attribute)
    ))),

    _module_expression: $ => choice(
        $._simple_module_expression,
        $.packed_module
      ),

    structure: $ => seq(
      'struct',
      repeat($.attribute),
      optional($._definitions),
      'end'
    ),

    functor: $ => seq(
      'functor',
      repeat($.attribute),
      repeat($.module_parameter),
      '->',
      $._simple_module_expression
    ),

    module_application: $ => prec(2, seq(
      $._simple_module_expression,
      parenthesize(optional($._module_expression))
    )),

    submodule: $ => prec.left(1, seq(
      $._simple_module_expression, '.', $._simple_module_expression
    )),

    typed_module_expression: $ => parenthesize(seq(
      $._simple_module_expression,
      ':',
      $._module_type
    )),

    packed_module: $ => seq(
      'val',
      repeat($.attribute),
      $._expression,
      optional(seq(':', $._module_type)),
      optional(seq(':>', $._module_type))
    ),

    parenthesized_module_expression: $ => parenthesize($._module_expression),

    // Class types

    _simple_class_type: $ => prec.right(seq(
      choice(
        $.class_type_path,
        $.instantiated_class_type,
        $.class_body_type,
        $.let_open_class_type,
        $.extension
      ),
      repeat($.attribute)
    )),

    _class_type: $ => prec.right(seq(
      choice(
        $._simple_class_type,
        $.class_function_type,
      ),
      repeat($.attribute)
    )),

    instantiated_class_type: $ => seq(
      '[',
      sep1(',', $._type),
      ']',
      $.class_type_path
    ),

    class_body_type: $ => seq(
      'object',
      repeat($.attribute),
      optional(parenthesize($._type)),
      repeat(choice(
        $._class_field_specification,
        $.floating_attribute
      )),
      'end'
    ),

    _class_field_specification: $ => seq(
      choice(
        $.inheritance_specification,
        $.instance_variable_specification,
        $.method_specification,
        $.type_parameter_constraint,
        $.item_extension
      ),
      repeat($.item_attribute)
    ),

    inheritance_specification: $ => seq(
      'inherit',
      repeat($.attribute),
      $._simple_class_type
    ),

    instance_variable_specification: $ => seq(
      'val',
      repeat($.attribute),
      repeat(choice('mutable', 'virtual')),
      $._instance_variable_name,
      ':',
      $._type
    ),

    method_specification: $ => seq(
      'method',
      repeat($.attribute),
      repeat(choice('private', 'virtual')),
      $._method_name,
      ':',
      $._poly_type
    ),

    type_parameter_constraint: $ => seq(
      'constraint',
      repeat($.attribute),
      $._type,
      '=',
      $._type
    ),

    let_open_class_type: $ => prec.right(PREC.match, seq(
      'let',
      $.open_statement,
      'in',
      $._simple_class_type
    )),

    class_function_type: $ => prec.right(PREC.seq, seq(
      optional(seq(
        optional('?'),
        $._label_name,
        ':'
      )),
      $._simple_or_tuple_type,
      '->',
      $._class_type
    )),

    // Class expressions

    _simple_class_expression: $ => choice(
      $.class_path,
      $.instantiated_class,
      $.object_expression,
      $.typed_class_expression,
      $.parenthesized_class_expression
    ),

    _class_expression: $ => prec.right(seq(
      choice(
        $._simple_class_expression,
        $.class_function,
        $.class_application,
        $.let_class_expression,
        $.let_open_class_expression,
        $.extension
      ),
      repeat($.attribute)
    )),

    instantiated_class: $ => seq(
      '[',
      sep1(',', $._type),
      ']',
      $.class_path
    ),

    typed_class_expression: $ => parenthesize(seq(
      $._class_expression,
      ':',
      $._class_type
    )),

    class_function: $ => prec.right(PREC.match, seq(
      'fun',
      repeat($.attribute),
      repeat1($.parameter),
      '->',
      $._class_expression
    )),

    class_application: $ => prec.right(PREC.app, seq(
      $._simple_class_expression,
      repeat1($._argument)
    )),

    let_class_expression: $ => prec.right(PREC.match, seq(
      $.value_definition,
      'in',
      $._class_expression
    )),

    _class_field: $ => seq(
      choice(
        $.inheritance_definition,
        $.instance_variable_definition,
        $.method_definition,
        $.type_parameter_constraint,
        $.class_initializer,
        $.item_extension
      ),
      repeat($.item_attribute)
    ),

    inheritance_definition: $ => seq(
      'inherit',
      optional('!'),
      repeat($.attribute),
      $._class_expression,
      optional(seq('as', $.value_name))
    ),

    instance_variable_definition: $ => seq(
      'val',
      optional('!'),
      repeat($.attribute),
      repeat(choice('mutable', 'virtual')),
      $._instance_variable_name,
      optional(seq(':', $._type)),
      optional(seq(':>', $._type)),
      optional(seq('=', $._seq_expression)),
    ),

    method_definition: $ => seq(
      'method',
      optional('!'),
      repeat($.attribute),
      repeat(choice('private', 'virtual')),
      $._method_name,
      repeat($.parameter),
      optional(seq(':', $._poly_type)),
      optional(seq('=', $._seq_expression))
    ),

    class_initializer: $ => seq(
      'initializer',
      repeat($.attribute),
      $._seq_expression
    ),

    let_open_class_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.open_statement,
      'in',
      $._class_expression
    )),

    parenthesized_class_expression: $ => parenthesize($._class_expression),

    // Types

    _poly_type: $ => seq(
      optional(seq($.polymorphic_types, '.')),
      $._type
    ),

    polymorphic_types: $ => choice(
      repeat1($.type_variable),
      $.abstract_type
    ),

    abstract_type: $ => seq('type', repeat1($._type_constructor)),

    _simple_type: $ => choice(
      $.type_variable,
      $.type_constructor_path,
      $.constructed_type,
      $.polymorphic_variant_type,
      $.package_type,
      $.hash_type,
      $.object_type,
      $.parenthesized_type,
      $.extension
    ),

    _simple_or_tuple_type: $ => prec(1, choice(
      $._simple_type,
      $.tuple_type
    )),

    _type: $ => prec.right(seq(
      choice(
        $._simple_or_tuple_type,
        $.function_type,
        $.aliased_type
      ),
      repeat($.attribute)
    )),

    function_type: $ => prec.right(PREC.seq, seq(
      choice($._typed_label, $._type),
      '->',
      $._type
    )),

    _typed_label: $ => prec.left(PREC.seq, seq(
      optional('?'),
      $._label_name,
      ':',
      $._type
    )),

    tuple_type: $ => prec(PREC.prod, seq(
      choice(
        $._simple_type,
        $.tuple_type
      ),
      '*',
      $._simple_type
    )),

    constructed_type: $ => prec(PREC.app, seq(
      choice(
        $._simple_type,
        parenthesize(sep1(',', $._type))
      ),
      $.type_constructor_path
    )),

    aliased_type: $ => prec(PREC.match, seq(
      $._type,
      'as',
      $.type_variable
    )),

    polymorphic_variant_type: $ => choice(
      seq('[', optional('|'), sep1('|', $._tag_spec), ']'),
      seq('[>', optional('|'), sep('|', $._tag_spec), ']'),
      seq('[<', optional('|'), sep1('|', $._tag_spec), optional(seq('>', repeat1($.tag))), ']'),
    ),

    _tag_spec: $ => choice(
      $._simple_type,
      $.tag_specification
    ),

    tag_specification: $ => seq(
      $.tag,
      optional(seq(
        'of',
        optional('&'),
        sep1('&', $._type)
      )),
      repeat($.attribute)
    ),

    package_type: $ => parenthesize(seq(
      'module',
      optional($._extension_attribute),
      $._module_type
    )),

    object_type: $ => seq(
      '<',
      optional(choice(
        seq(
          sep1(';', choice(
            $.method_type,
            $._simple_type
          )),
          optional(seq(
            ';',
            repeat($.attribute),
            optional('..')
          ))
        ),
        '..'
      )),
      '>'
    ),

    method_type: $ => seq(
      $._method_name,
      ':',
      $._poly_type
    ),

    hash_type: $ => prec(PREC.hash, seq(
      optional(choice(
        $._simple_type,
        parenthesize(sep1(',', $._type))
      )),
      '#',
      $.class_path
    )),

    parenthesized_type: $ => parenthesize($._type),

    // Expressions

    _simple_expression: $ => choice(
      $.value_path,
      $._constant,
      seq('begin', optional($._extension_attribute), $._seq_expression, 'end'),
      $.typed_expression,
      $.constructor_path,
      $.tag,
      $.list_expression,
      $.array_expression,
      $.record_expression,
      $.prefix_expression,
      alias($._hash_expression, $.infix_expression),
      $.field_get_expression,
      $.array_get_expression,
      $.string_get_expression,
      $.bigarray_get_expression,
      $.coercion_expression,
      $.local_open_expression,
      $.package_expression,
      $.new_expression,
      $.object_copy_expression,
      $.method_invocation,
      $.parenthesized_expression,
      $.ocamlyacc_value,
      $.extension
    ),

    _expression: $ => prec.right(seq(
      choice(
        $._simple_expression,
        $.product_expression,
        $.cons_expression,
        $.application_expression,
        $.infix_expression,
        alias($._sign_expression, $.prefix_expression),
        $.set_expression,
        $.if_expression,
        $.while_expression,
        $.for_expression,
        $.match_expression,
        $.function_expression,
        $.fun_expression,
        $.try_expression,
        $.let_expression,
        $.assert_expression,
        $.lazy_expression,
        $.let_module_expression,
        $.let_open_expression,
        $.let_exception_expression,
        $.object_expression
      ),
      repeat($.attribute)
    )),

    _seq_expression: $ => choice(
      $._expression,
      $.sequence_expression
    ),

    typed_expression: $ => parenthesize(seq(
      $._seq_expression,
      ':',
      $._type
    )),

    product_expression: $ => prec.left(PREC.prod, seq(
      $._expression,
      ',',
      $._expression
    )),

    cons_expression: $ => prec.right(PREC.cons, seq(
      $._expression,
      '::',
      $._expression
    )),

    list_expression: $ => seq(
      '[',
      optional(seq(
        sep1(';', $._expression),
        optional(';')
      )),
      ']'
    ),

    array_expression: $ => seq(
      '[|',
      optional(seq(
        sep1(';', $._expression),
        optional(';')
      )),
      '|]'
    ),

    record_expression: $ => seq(
      '{',
      optional(seq($._simple_expression, 'with')),
      sep1(';', $.field_expression),
      optional(';'),
      '}'
    ),

    field_expression: $ => prec.left(PREC.seq, seq(
      $.field_path,
      optional(seq(':', $._type)),
      optional(seq('=', $._expression))
    )),

    application_expression: $ => prec.right(PREC.app, seq(
      $._simple_expression,
      repeat1($._argument)
    )),

    _argument: $ => choice(
      $._simple_expression,
      $.label,
      $.labeled_argument
    ),

    labeled_argument: $ => seq(
      $.label,
      token.immediate(':'),
      $._simple_expression
    ),

    prefix_expression: $ => prec(PREC.prefix, seq(
      $.prefix_operator,
      $._simple_expression
    )),

    _sign_expression: $ => prec(PREC.neg, seq(
      alias($._sign_operator, $.prefix_operator),
      $._expression
    )),

    _hash_expression: $ => prec.left(PREC.hash, seq(
      $._simple_expression,
      alias($._hash_operator, $.infix_operator),
      $._simple_expression
    )),

    infix_expression: $ => {
      const table = [
        {
          operator: $._pow_operator,
          precedence: PREC.pow,
          associativity: 'right'
        },
        {
          operator: $._mult_operator,
          precedence: PREC.mult,
          associativity: 'left'
        },
        {
          operator: $._add_operator,
          precedence: PREC.add,
          associativity: 'left'
        },
        {
          operator: $._concat_operator,
          precedence: PREC.concat,
          associativity: 'right'
        },
        {
          operator: $._rel_operator,
          precedence: PREC.rel,
          associativity: 'left'
        },
        {
          operator: $._and_operator,
          precedence: PREC.and,
          associativity: 'right'
        },
        {
          operator: $._or_operator,
          precedence: PREC.or,
          associativity: 'right'
        },
        {
          operator: $._assign_operator,
          precedence: PREC.assign,
          associativity: 'right'
        }
      ]

      return choice(...table.map(({operator, precedence, associativity}) =>
        prec[associativity](precedence, seq(
          $._expression,
          alias(operator, $.infix_operator),
          $._expression
        ))
      ))
    },

    field_get_expression: $ => prec.left(PREC.dot, seq(
      $._simple_expression,
      '.',
      $.field_path
    )),

    array_get_expression: $ => prec(PREC.dot, seq(
      $._simple_expression,
      '.',
      optional($.indexing_operator_path),
      '(',
      $._seq_expression,
      ')'
    )),

    string_get_expression: $ => prec(PREC.dot, seq(
      $._simple_expression,
      '.',
      optional($.indexing_operator_path),
      '[',
      $._seq_expression,
      ']'
    )),

    bigarray_get_expression: $ => prec(PREC.dot, seq(
      $._simple_expression,
      '.',
      optional($.indexing_operator_path),
      '{',
      $._seq_expression,
      '}'
    )),

    set_expression: $ => prec.right(PREC.assign, seq(
      choice(
        $.field_get_expression,
        $.array_get_expression,
        $.string_get_expression,
        $.bigarray_get_expression,
        $._instance_variable_name
      ),
      '<-',
      $._expression
    )),

    if_expression: $ => prec.right(PREC.if, seq(
      'if',
      optional($._extension_attribute),
      $._seq_expression,
      $.then_clause,
      optional($.else_clause)
    )),

    then_clause: $ => seq(
      'then',
      $._expression
    ),

    else_clause: $ => seq(
      'else',
      $._expression
    ),

    while_expression: $ => seq(
      'while',
      optional($._extension_attribute),
      $._seq_expression,
      $.do_clause
    ),

    do_clause: $ => seq(
      'do',
      optional($._seq_expression),
      'done'
    ),

    for_expression: $ => seq(
      'for',
      optional($._extension_attribute),
      $.value_name,
      '=',
      $._seq_expression,
      choice('to', 'downto'),
      $._seq_expression,
      $.do_clause
    ),

    sequence_expression: $ => prec.right(PREC.seq, seq(
      $._expression,
      ';',
      optional(seq(
        optional(seq('%', $.attribute_id)),
        $._seq_expression
      ))
    )),

    match_expression: $ => prec.right(PREC.match, seq(
      choice(
        seq('match', optional($._extension_attribute)),
        $.match_operator
      ),
      $._seq_expression,
      'with',
      $._match_cases
    )),

    _match_cases: $ => prec.right(seq(
      optional('|'),
      sep1('|', $.match_case)
    )),

    match_case: $ => seq(
      $._pattern,
      optional(seq('when', $._seq_expression)),
      '->',
      choice($._seq_expression, $.refutation_case)
    ),

    refutation_case: $ => '.',

    function_expression: $ => prec.right(PREC.match, seq(
      'function',
      optional($._extension_attribute),
      $._match_cases
    )),

    fun_expression: $ => prec.right(PREC.match, seq(
      'fun',
      optional($._extension_attribute),
      repeat1($.parameter),
      optional(seq(':', $._simple_type)),
      '->',
      $._seq_expression
    )),

    try_expression: $ => prec.right(PREC.match, seq(
      'try',
      optional($._extension_attribute),
      $._seq_expression,
      'with',
      $._match_cases
    )),

    let_expression: $ => prec.right(PREC.match, seq(
      $.value_definition,
      'in',
      $._seq_expression
    )),

    coercion_expression: $ => parenthesize(seq(
      $._expression,
      optional(seq(':', $._type)),
      ':>',
      $._type
    )),

    assert_expression: $ => prec.left(PREC.app, seq(
      'assert',
      optional($._extension_attribute),
      $._simple_expression
    )),

    lazy_expression: $ => prec.left(PREC.app, seq(
      'lazy',
      optional($._extension_attribute),
      $._simple_expression
    )),

    let_module_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.module_definition,
      'in',
      $._seq_expression
    )),

    let_open_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.open_statement,
      'in',
      $._seq_expression
    )),

    local_open_expression: $ => seq(
      $._module_name,
      '.',
      choice(
        parenthesize(optional($._seq_expression)),
        $.list_expression,
        $.array_expression,
        $.record_expression,
        $.object_copy_expression,
        $.local_open_expression
      )
    ),

    package_expression: $ => parenthesize(seq(
      'module',
      optional($._extension_attribute),
      $._simple_module_expression,
      optional(seq(':', $._module_type))
    )),

    let_exception_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.exception_definition,
      'in',
      $._seq_expression
    )),

    new_expression: $ => seq(
      'new',
      optional($._extension_attribute),
      $.class_path
    ),

    object_copy_expression: $ => seq(
      '{<',
      sep(';', seq(
        $._instance_variable_name,
        optional(seq('=', $._expression))
      )),
      optional(';'),
      '>}'
    ),

    method_invocation: $ => prec(PREC.hash, seq(
      $._simple_expression,
      '#',
      $._method_name
    )),

    object_expression: $ => seq(
      'object',
      optional($._extension_attribute),
      optional(parenthesize(seq(
        $._pattern,
        optional(seq(':', $._type))
      ))),
      repeat(choice(
        $._class_field,
        $.floating_attribute
      )),
      'end'
    ),

    parenthesized_expression: $ => parenthesize($._seq_expression),

    ocamlyacc_value: $ => /\$[0-9]+/,

    // Patterns

    _simple_pattern: $ => choice(
      $.value_name,
      $._signed_constant,
      $.typed_pattern,
      $.constructor_path,
      $.tag,
      $.polymorphic_pattern,
      $.record_pattern,
      $.list_pattern,
      $.array_pattern,
      $.local_open_pattern,
      $.package_pattern,
      $.parenthesized_pattern,
      $.extension
    ),

    _pattern: $ => prec.right(seq(
      choice(
        $._simple_pattern,
        $.alias_pattern,
        $.or_pattern,
        $.constructor_pattern,
        $.tag_pattern,
        $.tuple_pattern,
        $.cons_pattern,
        $.range_pattern,
        $.lazy_pattern,
        $.exception_pattern
      ),
      repeat($.attribute)
    )),

    _pattern_no_exn: $ => prec.right(seq(
      choice(
        $._simple_pattern,
        alias($._alias_pattern_no_exn, $.alias_pattern),
        alias($._or_pattern_no_exn, $.or_pattern),
        $.constructor_pattern,
        $.tag_pattern,
        alias($._tuple_pattern_no_exn, $.tuple_pattern),
        alias($._cons_pattern_no_exn, $.cons_pattern),
        $.range_pattern,
        $.lazy_pattern
      ),
      repeat($.attribute)
    )),

    alias_pattern: $ => prec.left(PREC.match, seq(
      $._pattern,
      'as',
      $.value_name
    )),

    _alias_pattern_no_exn: $ => prec.left(PREC.match, seq(
      $._pattern_no_exn,
      'as',
      $.value_name
    )),

    typed_pattern: $ => parenthesize(seq(
      $._pattern,
      ':',
      $._type
    )),

    or_pattern: $ => prec.left(PREC.seq, seq(
      $._pattern,
      '|',
      $._pattern
    )),

    _or_pattern_no_exn: $ => prec.left(PREC.seq, seq(
      $._pattern_no_exn,
      '|',
      $._pattern
    )),

    constructor_pattern: $ => prec.right(PREC.app, seq(
      $.constructor_path,
      $._pattern
    )),

    tag_pattern: $ => prec.right(PREC.app, seq(
      $.tag,
      $._pattern
    )),

    polymorphic_pattern: $ => seq('#', $.type_constructor_path),

    tuple_pattern: $ => prec.left(PREC.prod, seq(
      $._pattern,
      ',',
      $._pattern
    )),

    _tuple_pattern_no_exn: $ => prec.left(PREC.prod, seq(
      $._pattern_no_exn,
      ',',
      $._pattern
    )),

    record_pattern: $ => seq(
      '{',
      sep1(';', $.field_pattern),
      optional(seq(';', '_')),
      optional(';'),
      '}'
    ),

    field_pattern: $ => seq(
      $.field_path,
      optional(seq(':', $._type)),
      optional(seq('=', $._pattern))
    ),

    list_pattern: $ => seq(
      '[',
      optional(seq(
        sep1(';', $._pattern),
        optional(';')
      )),
      ']'
    ),

    cons_pattern: $ => prec.right(PREC.cons, seq(
      $._pattern,
      '::',
      $._pattern
    )),

    _cons_pattern_no_exn: $ => prec.right(PREC.cons, seq(
      $._pattern_no_exn,
      '::',
      $._pattern
    )),

    array_pattern: $ => seq(
      '[|',
      optional(seq(
        sep1(';', $._pattern),
        optional(';')
      )),
      '|]'
    ),

    range_pattern: $ => prec(PREC.dot, seq(
      $._signed_constant,
      '..',
      $._signed_constant
    )),

    lazy_pattern: $ => prec(PREC.hash, seq(
      'lazy',
      optional($._extension_attribute),
      $._pattern
    )),

    local_open_pattern: $ => seq(
      $._module_name,
      '.',
      choice(
        parenthesize(optional($._pattern)),
        $.list_pattern,
        $.array_pattern,
        $.record_pattern,
        $.local_open_pattern
      )
    ),

    package_pattern: $ => parenthesize(seq(
      'module',
      optional($._extension_attribute),
      choice($._module_name, alias('_', $.module_name)),
      optional(seq(':', $._module_type))
    )),

    parenthesized_pattern: $ => parenthesize($._pattern),

    exception_pattern: $ => seq(
      'exception',
      optional($._extension_attribute),
      $._pattern
    ),

    // Attributes and extensions

    attribute: $ => seq('[@', $.attribute_id, optional($.attribute_payload), ']'),

    item_attribute: $ => seq('[@@', $.attribute_id, optional($.attribute_payload), ']'),

    floating_attribute: $ => seq('[@@@', $.attribute_id, optional($.attribute_payload), ']'),

    attribute_payload: $ => choice(
      $._definitions,
      seq(':', choice($._type, $._specifications)),
      seq('?', $._pattern, optional(seq('when', $._seq_expression)))
    ),

    extension: $ => seq('[%', $.attribute_id, optional($.attribute_payload), ']'),

    item_extension: $ => seq('[%%', $.attribute_id, optional($.attribute_payload), ']'),

    _extension_attribute: $ => prec.right(choice(
      seq('%', $.attribute_id),
      $.attribute,
      seq($._extension_attribute, repeat1($.attribute))
    )),

    // Constants

    _signed_constant: $ => choice(
      $._constant,
      alias($._signed_number, $.number)
    ),

    _constant: $ => choice(
      $.number,
      $.character,
      $.string,
      alias($._quoted_string, $.quoted_string),
      $.boolean,
      $.unit
    ),

    number: $ => NUMBER,

    _signed_number: $ => seq(choice('+', '-'), NUMBER),

    character: $ => seq(
      "'",
      choice(
        /[^\\']/,
        $.escape_sequence
      ),
      "'"
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate('(*'),
        /[^\\"%@]+|%|@/,
        $.escape_sequence,
        alias(/\\u\{[0-9A-Fa-f]+\}/, $.escape_sequence),
        alias(/\\\n[\t ]*/, $.escape_sequence),
        $.conversion_specification,
        $.pretty_printing_indication
      )),
      '"'
    ),

    escape_sequence: $ => choice(
      /\\[\\"'ntbr ]/,
      /\\[0-9][0-9][0-9]/,
      /\\x[0-9A-Fa-f][0-9A-Fa-f]/,
      /\\o[0-3][0-7][0-7]/
    ),

    conversion_specification: $ => token(seq(
      '%',
      optional(/[\-0+ #]/),
      optional(/[1-9][0-9]*|\*/),
      optional(/\.([0-9]*|\*)/),
      choice(
        /[diunlLNxXosScCfFeEgGhHbBat!%@,]/,
        /[lnL][diuxXo]/
      )
    )),

    pretty_printing_indication: $ => /@([\[\], ;.{}?]|\\n|<[0-9]+>)/,

    boolean: $ => choice('true', 'false'),

    unit: $ => choice(
      seq('(', ')'),
      seq('begin', 'end')
    ),

    // Operators

    prefix_operator: $ => token(choice(
      seq('!', choice(optional(/[!$%&*+\-./:<>?@^|~]/), repeat2(OP_CHAR))),
      seq(/[~?]/, repeat1(OP_CHAR))
    )),

    _sign_operator: $ => choice('+', '-', '+.', '-.'),

    infix_operator: $ => choice(
      $._hash_operator,
      $._pow_operator,
      $._mult_operator,
      $._add_operator,
      $._concat_operator,
      $._rel_operator,
      $._and_operator,
      $._or_operator,
      $._assign_operator
    ),

    _hash_operator: $ => /#[#!$%&*+\-./:<=>?@^|~]+/,

    _pow_operator: $ => choice(
      token(seq('**', repeat(OP_CHAR))),
      'lsl', 'lsr', 'asr'
    ),

    _mult_operator: $ => choice(
      token(seq(/[*/%]/, repeat(OP_CHAR))),
      'mod', 'land', 'lor', 'lxor'
    ),

    _add_operator: $ => token(choice(
      seq('+', repeat(OP_CHAR)),
      seq('-', choice(optional(/[!$%&*+\-./:<=?@^|~]/), repeat2(OP_CHAR))),
    )),

    _concat_operator: $ => token(
      seq(/[@^]/, repeat(OP_CHAR))
    ),

    _rel_operator: $ => token(choice(
      seq(/[=>$]/, repeat(OP_CHAR)),
      seq('<', choice(optional(/[!$%&*+./:<=>?@^|~]/), repeat2(OP_CHAR))),
      seq('&', choice(/[!$%*+\-./:<=>?@^|~]/, repeat2(OP_CHAR))),
      seq('|', choice(/[!$%&*+\-./:<=>?@^~]/, repeat2(OP_CHAR))),
      '!='
    )),

    _and_operator: $ => choice('&', '&&'),

    _or_operator: $ => choice('or', '||'),

    _assign_operator: $ => choice(':='),

    indexing_operator: $ => token(
      seq(/[!$%&*+\-/:=>?@^|]/, repeat(OP_CHAR))
    ),

    indexing_operator_path: $ => choice(
      $.indexing_operator,
      seq($._module_name, '.', $.indexing_operator_path)
    ),

    let_operator: $ => token(
      seq('let', /[$&*+\-/<=>@^|]/, repeat(OP_CHAR))
    ),

    and_operator: $ => token(
      seq('and', /[$&*+\-/<=>@^|]/, repeat(OP_CHAR))
    ),

    match_operator: $ => token(
      seq('match', /[$&*+\-/<=>@^|]/, repeat(OP_CHAR))
    ),

    // Names

    value_name: $ => choice(
      $._identifier,
      parenthesize(choice(
        $.prefix_operator,
        alias($._sign_operator, $.infix_operator),
        $.infix_operator,
        seq(
          '.',
          $.indexing_operator,
          choice(
            seq('(', optional(seq(';', '..')), ')'),
            seq('[', optional(seq(';', '..')), ']'),
            seq('{', optional(seq(';', '..')), '}')
          ),
          optional('<-')
        ),
        $.let_operator,
        $.and_operator,
        $.match_operator
      ))
    ),

    value_path: $ => choice(
      $.value_name,
      seq($._module_name, '.', $.value_path)
    ),

    module_type_path: $ => choice(
      $._module_type_name,
      seq($._simple_module_expression, '.', $._module_type_name)
    ),

    field_path: $ => choice(
      $._field_name,
      seq($._module_name, '.', $.field_path)
    ),

    constructor_path: $ => prec.right(choice(
      $._constructor_name,
      seq($._module_name, '.', $.constructor_path)
    )),

    _extended_module_name: $ => seq(
      $._module_name,
      repeat(parenthesize($.module_path))
    ),

    module_path: $ => choice(
      $._extended_module_name,
      seq($._extended_module_name, '.', $.module_path)
    ),

    type_constructor_path: $ => choice(
      $._type_constructor,
      seq($._extended_module_name, '.', $.type_constructor_path)
    ),

    class_type_path: $ => prec(1, choice(
      $._class_name,
      seq($._extended_module_name, '.', $.class_type_path)
    )),

    class_path: $ => choice(
      $._class_name,
      seq($._module_name, '.', $.class_path)
    ),

    _label_name: $ => alias($._identifier, $.label_name),
    _field_name: $ => alias($._identifier, $.field_name),
    _class_name: $ => alias($._identifier, $.class_name),
    _method_name: $ => alias($._identifier, $._method_name),
    _type_constructor: $ => alias($._identifier, $.type_constructor),
    _instance_variable_name: $ => alias($._identifier, $.instance_variable_name),

    _module_name: $ => alias($._capitalized_identifier, $.module_name),
    _module_type_name: $ => alias(choice($._capitalized_identifier, $._identifier), $.module_type_name),
    _constructor_name: $ => choice(
      alias($._capitalized_identifier, $.constructor_name),
      parenthesize(alias('::', $.constructor_name))
    ),

    _identifier: $ => /[a-z_][a-zA-Z0-9_']*/,
    _capitalized_identifier: $ => /[A-Z][a-zA-Z0-9_']*/,

    label: $ => seq(choice('~', '?'), $._label_name),
    directive: $ => seq('#', choice($._identifier, $._capitalized_identifier)),
    type_variable: $ => seq("'", choice($._identifier, $._capitalized_identifier)),
    tag: $ => seq('`', choice($._identifier, $._capitalized_identifier)),
    attribute_id: $ => sep1('.', choice($._identifier, $._capitalized_identifier)),

    // Comments

    _comment: COMMENT,

    comment: COMMENT
  },

  conflicts: $ => [
    [$._module_type, $._simple_module_expression],
    [$._simple_module_expression, $.module_type_path],
    [$._simple_class_type, $._simple_type]
  ],

  externals: $ => [
    $._quoted_string,
    $.line_number_directive
  ]
})

function sep(delimiter, rule) {
  return optional(sep1(delimiter, rule))
}

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}

function repeat2(rule) {
  return seq(rule, repeat1(rule))
}

function parenthesize(rule) {
  return seq('(', rule, ')')
}
