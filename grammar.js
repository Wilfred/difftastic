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

const IDENT = /[a-zA-Z_][a-zA-Z0-9_']*/
const CAPITALIZED_IDENT = /[A-Z][a-zA-Z0-9_']*/
const LOWERCASE_IDENT = /[a-z_][a-zA-Z0-9_']*/
const OP_CHAR = /[!$%&*+\-./:<=>?@^|~]/
const NUMBER = token(choice(
  /[0-9][0-9_]*(\.[0-9_]*)?([eE][+\-]?[0-9][0-9_]*)?[g-zG-Z]?/,
  /0[xX][0-9A-Fa-f][0-9A-Fa-f_]*(\.[0-9A-Fa-f_]*)?([pP][+\-]?[0-9][0-9_]*)?[g-zG-Z]?/,
  /0[oO][0-7][0-7_]*[g-zG-Z]?/,
  /0[bB][01][01_]*[g-zG-Z]?/
))

module.exports = grammar({
  name: 'ocaml',

  extras: $ => [
    /\s/,
    $.comment,
    $.line_number_directive
  ],

  inline: $ => [
    $._seq_expression
  ],

  rules: {
    compilation_unit: $ => seq(
      optional($.shebang),
      optional($._definitions)
    ),

    shebang: $ => /#!.*/,

    _definitions: $ => seq(
      repeat(';;'),
      choice($._module_item, $.toplevel_directive, seq($._seq_expression, repeat($.item_attribute))),
      repeat(choice(
        seq(repeat(';;'), choice($._module_item, $.toplevel_directive)),
        seq(repeat1(';;'), seq($._seq_expression, repeat($.item_attribute)))
      )),
      repeat(';;')
    ),

    // Toplevel

    toplevel_directive: $ => seq(
      $.directive,
      optional(choice(
        $._constant,
        $.value_path,
        $._module_expression
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
      $.floating_attribute,
      $.item_extension
    ),

    value_specification: $ => seq(
      'val',
      optional($._extension_attribute),
      $.value_name,
      ':',
      $._type_expression,
      repeat($.item_attribute)
    ),

    value_definition: $ => seq(
      'let', optional($._extension_attribute), optional('rec'),
      sep1(seq('and', repeat($.attribute)), $.let_binding)
    ),

    let_binding: $ => seq(
      $._pattern,
      repeat($.parameter),
      optional(seq(':', $._poly_type_expression)),
      optional(seq(':>', $._type_expression)),
      '=',
      $._seq_expression,
      repeat($.item_attribute)
    ),

    parameter: $ => choice(
      $._simple_pattern,
      $.label,
      seq(alias($._label_colon, $.label), $._simple_pattern),
      seq(
        choice('~', '?'),
        '(',
        $._label_name,
        optional(seq(':', $._type_expression)),
        optional(seq('=', $._seq_expression)),
        ')'
      ),
      seq(
        alias($._label_colon, $.label),
        '(',
        $._pattern,
        optional(seq(':', $._type_expression)),
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
      $._type_expression,
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
          $.type_constructor,
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
      $._type_expression
    ),

    variant_declaration: $ => seq(
      optional('|'),
      sep1('|', $.constructor_declaration)
    ),

    constructor_declaration: $ => seq(
      choice(
        $.constructor_name,
        seq('[', ']'),
        parenthesize('::')
      ),
      optional(choice(
        seq(
          'of',
          choice(
            sep1('*', $._simple_type_expression),
            $.record_declaration
          )
        ),
        seq(':', $._type_expression),
        seq('=', $.constructor_path)
      )),
      repeat($.attribute)
    ),

    record_declaration: $ => seq(
      '{',
      sep1(seq(';', repeat($.attribute)), $.field_declaration),
      optional(seq(';', repeat($.attribute))),
      '}'
    ),

    field_declaration: $ => seq(
      optional('mutable'),
      $.field_name,
      ':',
      $._poly_type_expression,
    ),

    type_constraint: $ => seq(
      'constraint',
      $.type_variable,
      '=',
      $._type_expression
    ),

    exception_definition: $ => seq(
      'exception',
      $.constructor_declaration,
      repeat($.item_attribute)
    ),

    module_definition: $ => seq(
      'module', optional($._extension_attribute), optional('rec'),
      sep1(seq('and', repeat($.attribute)), $.module_binding)
    ),

    module_binding: $ => seq(
      $.module_name,
      repeat($.module_parameter),
      optional(seq(':', $._module_type)),
      optional(seq('=', $._module_expression)),
      repeat($.item_attribute)
    ),

    module_parameter: $ => parenthesize(optional(seq(
      choice($.module_name, alias('_', $.module_name)),
      ':',
      $._module_type
    ))),

    module_type_definition: $ => seq(
      'module', 'type',
      optional($._extension_attribute),
      $.module_type_name,
      optional(seq('=', $._module_type)),
      repeat($.item_attribute)
    ),

    open_statement: $ => seq(
      /open!?/,
      optional($._extension_attribute),
      $._module_expression,
      repeat($.item_attribute)
    ),

    include_statement: $ => seq(
      'include',
      optional($._extension_attribute),
      choice($._module_type, $._module_expression),
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
        $.extension,
        parenthesize($._module_type)
      ),
      repeat($.attribute)
    )),

    signature: $ => seq(
      'sig',
      repeat($.attribute),
      optional($._definitions),
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
          $._module_expression,
          choice('=', ':='),
          $._module_expression
        )
      ))
    )),

    module_type_of: $ => seq(
      'module', 'type', 'of',
      repeat($.attribute),
      $._module_expression
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

    // Module expressions

    _module_expression: $ => prec.right(seq(
      choice(
        $.module_name,
        $.structure,
        $.functor,
        $.module_application,
        $.submodule,
        $.typed_module_expression,
        $.packed_module,
        $.extension,
        parenthesize($._module_expression)
      ),
      repeat($.attribute)
    )),

    structure: $ => seq(
      'struct',
      repeat($.attribute),
      optional($._definitions),
      'end'
    ),

    functor: $ => seq(
      'functor',
      repeat($.module_parameter),
      '->',
      $._module_expression
    ),

    module_application: $ => prec(2, seq(
      $._module_expression,
      parenthesize(optional($._module_expression))
    )),

    submodule: $ => prec.left(1, seq(
      $._module_expression, '.', $._module_expression
    )),

    typed_module_expression: $ => parenthesize(seq(
      $._module_expression,
      ':',
      $._module_type
    )),

    packed_module: $ => parenthesize(seq(
      'val',
      repeat($.attribute),
      $._expression,
      optional(seq(':', $._module_type)),
      optional(seq(':>', $._module_type))
    )),

    // Types

    _poly_type_expression: $ => seq(
      optional(seq($.polymorphic_types, '.')),
      $._type_expression
    ),

    polymorphic_types: $ => choice(
      repeat1($.type_variable),
      $.abstract_type
    ),

    abstract_type: $ => seq('type', repeat1($.type_constructor)),

    _simple_type_expression: $ => choice(
      $.type_variable,
      $.type_constructor_path,
      $.constructed_type,
      $.polymorphic_variant_type,
      $.package_type,
      parenthesize($._type_expression),
      $.extension
    ),

    _type_expression: $ => prec.right(seq(
      choice(
        $._simple_type_expression,
        $.function_type,
        $.tuple_type,
        $.aliased_type
      ),
      repeat($.attribute)
    )),

    function_type: $ => prec.right(PREC.seq, seq(
      choice($._typed_label, $._type_expression),
      '->',
      $._type_expression
    )),

    _typed_label: $ => prec.left(PREC.seq, seq(
      optional('?'),
      $._label_name,
      ':',
      $._type_expression
    )),

    tuple_type: $ => prec.left(PREC.prod, seq(
      $._type_expression,
      '*',
      $._type_expression
    )),

    constructed_type: $ => prec(PREC.app, seq(
      choice(
        $._simple_type_expression,
        parenthesize(sep1(',', $._type_expression))
      ),
      $.type_constructor_path
    )),

    aliased_type: $ => prec(PREC.match, seq(
      $._type_expression,
      'as',
      $.type_variable
    )),

    polymorphic_variant_type: $ => seq(
      '[',
      choice(
        seq(optional('|'), sep1('|', $._tag_spec)),
        seq('>', optional('|'), sep('|', $._tag_spec)),
        seq(
          '<',
          optional('|'),
          sep1('|', $._tag_spec),
          optional(seq('>', repeat1($.tag)))
        ),
      ),
      ']'
    ),

    _tag_spec: $ => choice(
      $._simple_type_expression,
      $.tag_specification
    ),

    tag_specification: $ => seq(
      $.tag,
      optional(seq(
        'of',
        optional('&'),
        sep1('&', $._type_expression)
      )),
      repeat($.attribute)
    ),

    package_type: $ => parenthesize(seq(
      'module',
      optional($._extension_attribute),
      $._module_type
    )),

    // Expressions

    _simple_expression: $ => choice(
      $.value_path,
      $._constant,
      parenthesize($._seq_expression),
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
        $.let_exception_expression
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
      $._type_expression
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
      optional(seq(':', $._type_expression)),
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
      alias($._label_colon, $.label),
      $._simple_expression
    ),

    prefix_expression: $ => prec(PREC.prefix, seq(
      $.prefix_operator,
      $._simple_expression
    )),

    _sign_expression: $ => prec(PREC.neg, seq(
      alias($._sign_operator, $.prefix_operator),
      $._simple_expression
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
      optional($.dot_operator_path),
      '(',
      $._seq_expression,
      ')'
    )),

    string_get_expression: $ => prec(PREC.dot, seq(
      $._simple_expression,
      '.',
      optional($.dot_operator_path),
      '[',
      $._seq_expression,
      ']'
    )),

    bigarray_get_expression: $ => prec(PREC.dot, seq(
      $._simple_expression,
      '.',
      optional($.dot_operator_path),
      '{',
      $._seq_expression,
      '}'
    )),

    set_expression: $ => prec.right(PREC.assign, seq(
      choice(
        $.field_get_expression,
        $.array_get_expression,
        $.string_get_expression,
        $.bigarray_get_expression
      ),
      '<-',
      $._expression
    )),

    if_expression: $ => prec.right(PREC.if, seq(
      'if',
      optional($._extension_attribute),
      $._seq_expression,
      'then',
      $._expression,
      optional(seq(
        'else',
        $._expression
      ))
    )),

    while_expression: $ => seq(
      'while',
      optional($._extension_attribute),
      $._seq_expression,
      'do',
      $._seq_expression,
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
      'do',
      $._seq_expression,
      'done'
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
      'match',
      optional($._extension_attribute),
      $._seq_expression,
      'with',
      $._match_cases
    )),

    _match_cases: $ => prec.right(seq(
      optional('|'),
      sep1('|', $.match_case)
    )),

    match_case: $ => seq(
      $._pattern_or_exception,
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
      optional(seq(':', $._simple_type_expression)),
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
      optional(seq(':', $._type_expression)),
      ':>',
      $._type_expression
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
      $.module_name,
      '.',
      choice(
        parenthesize($._seq_expression),
        $.list_expression,
        $.array_expression,
        $.record_expression,
        $.local_open_expression
      )
    ),

    package_expression: $ => parenthesize(seq(
      'module',
      optional($._extension_attribute),
      $._module_expression,
      optional(seq(':', $._module_type))
    )),

    let_exception_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.exception_definition,
      'in',
      $._seq_expression
    )),

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
      parenthesize($._pattern),
      $.extension
    ),

    _pattern_or_exception: $ => choice(
      $._pattern,
      seq($.exception_pattern, repeat($.attribute))
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
        $.lazy_pattern
      ),
      repeat($.attribute)
    )),

    alias_pattern: $ => prec.left(PREC.match, seq(
      $._pattern,
      'as',
      $.value_name
    )),

    typed_pattern: $ => parenthesize(seq(
      $._pattern,
      ':',
      $._type_expression
    )),

    or_pattern: $ => prec.left(PREC.seq, seq(
      $._pattern,
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

    record_pattern: $ => seq(
      '{',
      sep1(';', $.field_pattern),
      optional(seq(';', '_')),
      optional(';'),
      '}'
    ),

    field_pattern: $ => seq(
      $.field_path,
      optional(seq(':', $._type_expression)),
      optional(seq('=', $._pattern))
    ),

    list_pattern: $ => seq(
      '[',
      optional(
        sep1(';', $._pattern),
        optional(';')
      ),
      ']'
    ),

    cons_pattern: $ => prec.right(PREC.cons, seq(
      $._pattern,
      '::',
      $._pattern
    )),

    array_pattern: $ => seq(
      '[|',
      optional(
        sep1(';', $._pattern),
        optional(';')
      ),
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
      $.module_name,
      '.',
      choice(
        parenthesize($._pattern),
        $.list_pattern,
        $.array_pattern,
        $.record_pattern,
        $.local_open_pattern
      )
    ),

    package_pattern: $ => parenthesize(seq(
      'module',
      optional($._extension_attribute),
      $.module_name,
      optional(seq(':', $._module_type))
    )),

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
      seq(':', choice($._type_expression, $._module_item)),
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
      $.quoted_string,
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
        /[^\\"]/,
        $.escape_sequence,
        alias(/\\u\{[0-9A-Fa-f]+\}/, $.escape_sequence),
        alias(/\\\n[\t ]*/, $.escape_sequence)
      )),
      '"'
    ),

    escape_sequence: $ => choice(
      /\\[\\"'ntbr ]/,
      /\\[0-9][0-9][0-9]/,
      /\\x[0-9A-Fa-f][0-9A-Fa-f]/,
      /\\o[0-3][0-7][0-7]/
    ),

    boolean: $ => choice('true', 'false'),

    unit: $ => choice(
      seq('(', ')'),
      seq('begin', 'end')
    ),

    // Names

    directive: $ => seq('#', IDENT),

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

    _pow_operator: $ => token(choice(
      seq('**', repeat(OP_CHAR)),
      'lsl', 'lsr', 'asr'
    )),

    _mult_operator: $ => token(choice(
      seq(/[*/%]/, repeat(OP_CHAR)),
      'mod', 'land', 'lor', 'lxor'
    )),

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

    _and_operator: $ => /&&?/,

    _or_operator: $ => choice('or', '||'),

    _assign_operator: $ => choice('<-', ':='),

    dot_operator: $ => token(
      seq(/[!$%&*+\-/:=>?@^|~]/, repeat(OP_CHAR))
    ),

    dot_operator_path: $ => choice(
      $.dot_operator,
      seq($.module_name, '.', $.dot_operator_path)
    ),

    value_name: $ => choice(
      LOWERCASE_IDENT,
      parenthesize(choice(
        $.prefix_operator,
        alias($._sign_operator, $.infix_operator),
        $.infix_operator,
        seq('.', $.dot_operator, '(', ')', optional('<-'))
      ))
    ),

    value_path: $ => choice(
      $.value_name,
      seq($.module_name, '.', $.value_path)
    ),

    module_name: $ => prec(1, CAPITALIZED_IDENT),

    module_type_name: $ => choice(CAPITALIZED_IDENT, LOWERCASE_IDENT),

    module_type_path: $ => choice(
      $.module_type_name,
      seq($._module_expression, '.', $.module_type_name)
    ),

    _label_name: $ => alias(LOWERCASE_IDENT, $.label),

    label: $ => token(seq(
      /[?~]/,
      LOWERCASE_IDENT
    )),

    _label_colon: $ => token(seq(
      /[?~]/,
      LOWERCASE_IDENT,
      ':'
    )),

    field_name: $ => LOWERCASE_IDENT,

    field_path: $ => choice(
      $.field_name,
      seq($.module_name, '.', $.field_path)
    ),

    constructor_name: $ => CAPITALIZED_IDENT,

    constructor_path: $ => prec.right(choice(
      $.constructor_name,
      seq($.module_name, '.', $.constructor_path)
    )),

    type_constructor: $ => LOWERCASE_IDENT,

    _extended_module_name: $ => seq(
      $.module_name,
      repeat(parenthesize($.module_path))
    ),

    module_path: $ => choice(
      $._extended_module_name,
      seq($._extended_module_name, '.', $.module_path)
    ),

    type_constructor_path: $ => choice(
      $.type_constructor,
      seq($._extended_module_name, '.', $.type_constructor_path)
    ),

    type_variable: $ => token(seq("'", IDENT)),

    tag: $ => token(seq('`', IDENT)),

    attribute_id: $ => sep1('.', IDENT)
  },

  conflicts: $ => [
    [$._module_type, $._module_expression]
  ],

  externals: $ => [
    $.comment,
    $.quoted_string,
    '"',
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
