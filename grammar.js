const PREC = {
  call: 14,
  field: 13,
  unary: 11,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  bitand: 7,
  bitxor: 6,
  bitor: 5,
  comparative: 4,
  and: 3,
  or: 2,
  range: 1,
  assign: 0,
  closure: -1,
}

const numeric_types = [
  'u8',
  'i8',
  'u16',
  'i16',
  'u32',
  'i32',
  'u64',
  'i64',
  'u128',
  'i128',
  'isize',
  'usize',
  'f32',
  'f64'
]

const primitive_types = numeric_types.concat(['bool', 'str', 'char'])

module.exports = grammar({
  name: 'rust',

  extras: $ => [/\s/, $.line_comment, $.block_comment],

  externals: $ => [
    $._string_content,
    $.raw_string_literal,
    $.float_literal,
    $.block_comment,
  ],

  inline: $ => [
    $._path,
    $._type_identifier,
    $._tokens,
    $._field_identifier,
    $._non_special_token,
    $._declaration_statement,
    $._reserved_identifier,
    $._expression_ending_with_block
  ],

  conflicts: $ => [
    // Local ambiguity due to anonymous types:
    // See https://internals.rust-lang.org/t/pre-rfc-deprecating-anonymous-parameters/3710
    [$._type, $._pattern],
    [$.unit_type, $.tuple_pattern],
    [$.scoped_identifier, $.scoped_type_identifier],
    [$.parameters, $._pattern],
    [$.parameters, $.tuple_struct_pattern],
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $._expression_statement,
      $._declaration_statement
    ),

    empty_statement: $ => ';',

    _expression_statement: $ => choice(
      seq($._expression, ';'),
      prec(1, $._expression_ending_with_block)
    ),

    _declaration_statement: $ => choice(
      $.const_item,
      $.macro_invocation,
      $.macro_definition,
      $.empty_statement,
      $.attribute_item,
      $.inner_attribute_item,
      $.mod_item,
      $.foreign_mod_item,
      $.struct_item,
      $.union_item,
      $.enum_item,
      $.type_item,
      $.function_item,
      $.function_signature_item,
      $.impl_item,
      $.trait_item,
      $.associated_type,
      $.let_declaration,
      $.use_declaration,
      $.extern_crate_declaration,
      $.static_item
    ),

    // Section - Macro definitions

    macro_definition: $ => {
      const rules = seq(
        repeat(seq($.macro_rule, ';')),
        optional($.macro_rule)
      )

      return seq(
        'macro_rules!',
        $.identifier,
        choice(
          seq('(', rules, ')', ';'),
          seq('{', rules, '}')
        )
      )
    },

    macro_rule: $ => seq(
      $.token_tree_pattern,
      '=>',
      $.token_tree
    ),

    _token_pattern: $ => choice(
      $.token_tree_pattern,
      $.token_repetition_pattern,
      $.token_binding_pattern,
      $._non_special_token
    ),

    token_tree_pattern: $ => choice(
      seq('(', repeat($._token_pattern), ')'),
      seq('[', repeat($._token_pattern), ']'),
      seq('{', repeat($._token_pattern), '}')
    ),

    token_binding_pattern: $ => prec(1, seq(
      $.metavariable,
      ':',
      $.fragment_specifier
    )),

    token_repetition_pattern: $ => seq(
      '$', '(', repeat($._token_pattern), ')', optional(/[^+*]+/), choice('+', '*')
    ),

    fragment_specifier: $ => choice(
      'ident', 'path', 'expr', 'ty', 'pat', 'stmt', 'block', 'item', 'meta', 'tt'
    ),

    _tokens: $ => choice(
      $.token_tree,
      $.token_repetition,
      $._non_special_token
    ),

    token_tree: $ => choice(
      seq('(', repeat($._tokens), ')'),
      seq('[', repeat($._tokens), ']'),
      seq('{', repeat($._tokens), '}')
    ),

    token_repetition: $ => seq(
      '$', '(', repeat($._tokens), ')', optional(/[^+*]+/), choice('+', '*')
    ),

    _non_special_token: $ => choice(
      $._literal, $.identifier, $.metavariable, $.mutable_specifier, $.self, $.super, $.crate,
      alias(choice(...primitive_types), $.primitive_type),
      /[/_\-=->,;:::!=?.@*=/='&=#%=^=+<>|~]+/,
      'as', 'async', 'await', 'break', 'const', 'continue', 'default', 'enum', 'fn', 'for', 'if', 'impl',
      'let', 'loop', 'match', 'mod', 'pub', 'return', 'static', 'struct', 'trait', 'type',
      'union', 'unsafe', 'use', 'where', 'while'
    ),

    // Section - Declarations

    attribute_item: $ => seq(
      '#',
      '[',
      $.meta_item,
      ']'
    ),

    inner_attribute_item: $ => seq(
      '#',
      '!',
      '[',
      $.meta_item,
      ']'
    ),

    meta_item: $ => seq(
      $._path,
      optional(choice(
        seq('=', $._literal),
        seq('(', sepBy(',', choice($.meta_item, $._literal)), optional(','), ')')
      ))
    ),

    mod_item: $ => seq(
      optional($.visibility_modifier),
      'mod',
      $.identifier,
      choice(
        ';',
        $.declaration_list
      )
    ),

    foreign_mod_item: $ => seq(
      optional($.visibility_modifier),
      $.extern_modifier,
      choice(
        ';',
        $.declaration_list
      )
    ),

    declaration_list: $ => seq(
      '{',
      repeat($._declaration_statement),
      '}'
    ),

    struct_item: $ => seq(
      optional($.visibility_modifier),
      'struct',
      $._type_identifier,
      optional($.type_parameters),
      choice(
        seq(optional($.where_clause), $.field_declaration_list),
        seq($.ordered_field_declaration_list, optional($.where_clause), ';'),
        ';'
      ),
    ),

    union_item: $ => seq(
      optional($.visibility_modifier),
      'union',
      $._type_identifier,
      optional($.type_parameters),
      optional($.where_clause),
      choice(
        $.field_declaration_list,
        ';'
      )
    ),

    enum_item: $ => seq(
      optional($.visibility_modifier),
      'enum',
      $._type_identifier,
      optional($.type_parameters),
      optional($.where_clause),
      $.enum_variant_list
    ),

    enum_variant_list: $ => seq(
      '{',
      sepBy(',', seq(repeat($.attribute_item), $.enum_variant)),
      optional(','),
      '}'
    ),

    enum_variant: $ => seq(
      optional($.visibility_modifier),
      $.identifier,
      optional(choice(
        $.field_declaration_list,
        $.ordered_field_declaration_list
      )),
      optional(seq(
        '=',
        $._expression
      ))
    ),

    field_declaration_list: $ => seq(
      '{',
      sepBy(',', seq(repeat($.attribute_item), $.field_declaration)),
      optional(','),
      '}'
    ),

    field_declaration: $ => seq(
      optional($.visibility_modifier),
      $._field_identifier,
      ':',
      $._type
    ),

    ordered_field_declaration_list: $ => seq(
      '(',
      sepBy(',', seq(
        repeat($.attribute_item),
        optional($.visibility_modifier),
        $._type
      )),
      optional(','),
      ')'
    ),

    extern_crate_declaration: $ => seq(
      optional($.visibility_modifier),
      'extern',
      $.crate,
      choice(
        $.identifier,
        seq($.identifier, 'as', $.identifier)
      ),
      ';'
    ),

    const_item: $ => seq(
      optional($.visibility_modifier),
      'const',
      $.identifier,
      ':',
      $._type,
      optional(
        seq(
          '=',
          $._expression,
        ),
      ),
      ';'
    ),

    static_item: $ => seq(
      optional($.visibility_modifier),
      'static',

      // Not actual rust syntax, but made popular by the lazy_static crate.
      optional('ref'),

      optional($.mutable_specifier),
      $.identifier,
      ':',
      $._type,
      optional(seq(
        '=',
        $._expression
      )),
      ';'
    ),

    type_item: $ => seq(
      optional($.visibility_modifier),
      'type',
      $._type_identifier,
      optional($.type_parameters),
      '=',
      $._type,
      ';'
    ),

    function_item: $ => seq(
      optional($.visibility_modifier),
      optional($.function_modifiers),
      'fn',
      choice($.identifier, $.metavariable),
      optional($.type_parameters),
      $.parameters,
      optional(seq('->', $._type)),
      optional($.where_clause),
      $.block
    ),

    function_signature_item: $ => seq(
      optional($.visibility_modifier),
      optional($.function_modifiers),
      'fn',
      choice($.identifier, $.metavariable),
      optional($.type_parameters),
      $.parameters,
      optional(seq('->', $._type)),
      optional($.where_clause),
      ';'
    ),

    function_modifiers: $ => repeat1(choice(
      'async',
      'default',
      'const',
      'unsafe',
      $.extern_modifier
    )),

    where_clause: $ => seq(
      'where',
      sepBy1(',', $.where_predicate),
      optional(',')
    ),

    where_predicate: $ => seq(
      choice(
        $.lifetime,
        $._type_identifier,
        $.scoped_type_identifier,
        $.generic_type,
        $.reference_type,
        $.tuple_type,
        $.higher_ranked_trait_bound,
      ),
      $.trait_bounds
    ),

    impl_item: $ => seq(
      optional('unsafe'),
      'impl',
      optional($.type_parameters),
      choice(
        $._type_identifier,
        $.scoped_type_identifier
      ),
      optional($.type_arguments),
      optional($.impl_for_clause),
      optional($.where_clause),
      $.declaration_list
    ),

    trait_item: $ => seq(
      optional($.visibility_modifier),
      optional('unsafe'),
      'trait',
      $._type_identifier,
      optional($.type_parameters),
      optional($.trait_bounds),
      optional($.where_clause),
      $.declaration_list
    ),

    associated_type: $ => seq(
      'type',
      $._type_identifier,
      optional($.trait_bounds),
      ';'
    ),

    trait_bounds: $ => seq(
      ':',
      sepBy1('+', choice(
        $._type,
        $.lifetime,
        $.higher_ranked_trait_bound,
        $.removed_trait_bound
      ))
    ),

    higher_ranked_trait_bound: $ => seq(
      'for',
      $.type_parameters,
      $._type
    ),

    removed_trait_bound: $ => seq(
      '?',
      $._type
    ),

    impl_for_clause: $ => seq(
      'for',
      $._type
    ),

    type_parameters: $ => prec(1, seq(
      '<',
      sepBy1(',', choice(
        $.lifetime,
        $.metavariable,
        $._type_identifier,
        $.constrained_type_parameter,
        $.optional_type_parameter
      )),
      optional(','),
      '>'
    )),

    constrained_type_parameter: $ => seq(
      choice($.lifetime, $._type_identifier),
      $.trait_bounds
    ),

    optional_type_parameter: $ => seq(
      choice(
        $._type_identifier,
        $.constrained_type_parameter
      ),
      '=',
      $._type
    ),

    let_declaration: $ => seq(
      'let',
      optional($.mutable_specifier),
      $._pattern,
      optional(seq(
        ':',
        $._type
      )),
      optional(seq(
        '=',
        $._expression
      )),
      ';'
    ),

    use_declaration: $ => seq(
      optional($.visibility_modifier),
      'use',
      $._use_clause,
      ';'
    ),

    _use_clause: $ => choice(
      $._path,
      $.use_as_clause,
      $.use_list,
      $.scoped_use_list,
      $.use_wildcard
    ),

    scoped_use_list: $ => seq(
      optional($._path),
      '::',
      $.use_list
    ),

    use_list: $ => seq(
      '{',
      sepBy(',', choice(
        $._path,
        $.use_as_clause,
        $.use_list,
        $.scoped_use_list,
      )),
      optional(','),
      '}'
    ),

    use_as_clause: $ => seq(
      $._path,
      'as',
      $.identifier
    ),

    use_wildcard: $ => seq($._path, '::', '*'),

    parameters: $ => seq(
      '(',
      sepBy(',', choice(
        $.parameter,
        $.self_parameter,
        $.variadic_parameter,
        '_',
        $._type
      )),
      optional(','),
      ')'
    ),

    self_parameter: $ => seq(
      optional('&'),
      optional($.lifetime),
      optional($.mutable_specifier),
      $.self
    ),

    variadic_parameter: $ => '...',

    parameter: $ => seq(
      optional($.mutable_specifier),
      choice(
        $._pattern,
        $.self,
        $._reserved_identifier,
      ),
      ':',
      $._type
    ),

    extern_modifier: $ => seq(
      'extern',
      optional($.string_literal)
    ),

    visibility_modifier: $ => prec.right(
      choice(
        $.crate,
        seq(
          'pub',
          optional(seq(
            '(',
            choice(
              $.self,
              $.super,
              $.crate,
              seq('in', $._path)
            ),
            ')'
          )),
        ),
    )),

    // Section - Types

    _type: $ => choice(
      $.abstract_type,
      $.reference_type,
      $.metavariable,
      $.pointer_type,
      $.generic_type,
      $.scoped_type_identifier,
      $.tuple_type,
      $.unit_type,
      $.array_type,
      $.function_type,
      $._type_identifier,
      $.macro_invocation,
      $.empty_type,
      $.dynamic_type,
      $.bounded_type,
      alias(choice(...primitive_types), $.primitive_type)
    ),

    bracketed_type: $ => seq(
      '<',
      choice(
        $._type,
        $.qualified_type
      ),
      '>'
    ),

    qualified_type: $ => seq(
      $._type,
      'as',
      $._type
    ),

    lifetime: $ => seq("'", $.identifier),

    array_type: $ => seq(
      '[',
      $._type,
      optional(seq(
        ';',
        $._expression
      )),
      ']'
    ),

    function_type: $ => seq(
      optional($.function_modifiers),
      prec(PREC.call, seq(
        choice(
          $._type_identifier,
          $.scoped_type_identifier,
          'fn'
        ),
        $.parameters
      )),
      optional(seq('->', $._type))
    ),

    tuple_type: $ => seq(
      '(',
      sepBy1(',', $._type),
      optional(','),
      ')'
    ),

    unit_type: $ => seq('(', ')'),

    generic_function: $ => prec(1, seq(
      choice(
        $.identifier,
        $.scoped_identifier,
        $.field_expression
      ),
      '::',
      $.type_arguments
    )),

    generic_type: $ => prec(1, seq(
      choice(
        $._type_identifier,
        $.scoped_type_identifier
      ),
      $.type_arguments
    )),

    generic_type_with_turbofish: $ => seq(
      choice(
        $._type_identifier,
        $.scoped_identifier
      ),
      '::',
      $.type_arguments
    ),

    bounded_type: $ => prec.left(-1, choice(
      seq($.lifetime, '+', $._type),
      seq($._type, '+', $._type),
      seq($._type, '+', $.lifetime)
    )),

    type_arguments: $ => seq(
      '<',
      sepBy1(',', choice(
        $._type,
        $.type_binding,
        $.lifetime
      )),
      optional(','),
      '>'
    ),

    type_binding: $ => seq(
      $._type_identifier,
      '=',
      $._type
    ),

    reference_type: $ => seq(
      '&',
      optional($.lifetime),
      optional($.mutable_specifier),
      $._type
    ),

    pointer_type: $ => seq(
      '*',
      choice('const', $.mutable_specifier),
      $._type
    ),

    empty_type: $ => '!',

    abstract_type: $ => seq(
      'impl',
      choice(
        $._type_identifier,
        $.scoped_type_identifier,
        $.generic_type
      )
    ),

    dynamic_type: $ => seq(
      'dyn',
      choice(
        $._type_identifier,
        $.scoped_type_identifier,
        $.generic_type
      )
    ),

    mutable_specifier: $ => 'mut',

    // Section - Expressions

    _expression: $ => choice(
      $.unary_expression,
      $.reference_expression,
      $.try_expression,
      $.binary_expression,
      $.range_expression,
      $.call_expression,
      $.return_expression,
      $._literal,
      prec.left($.identifier),
      alias(choice(...primitive_types), $.identifier),
      prec.left($._reserved_identifier),
      $.self,
      $.scoped_identifier,
      $.generic_function,
      $.await_expression,
      $.field_expression,
      $.array_expression,
      $.tuple_expression,
      prec(1, $.macro_invocation),
      $.unit_expression,
      $._expression_ending_with_block,
      $.break_expression,
      $.continue_expression,
      $.index_expression,
      $.metavariable,
      $.closure_expression,
      $.parenthesized_expression,
      $.struct_expression
    ),

    _expression_ending_with_block: $ => choice(
      $.unsafe_block,
      $.block,
      $.if_expression,
      $.if_let_expression,
      $.match_expression,
      $.while_expression,
      $.while_let_expression,
      $.loop_expression,
      $.for_expression
    ),

    macro_invocation: $ => seq(
      $.identifier,
      '!',
      $.token_tree
    ),

    scoped_identifier: $ => seq(
      optional(choice(
        $._path,
        $.bracketed_type,
        alias($.generic_type_with_turbofish, $.generic_type)
      )),
      '::',
      $.identifier
    ),

    scoped_type_identifier_in_expression_position: $ => prec(-2, seq(
      optional(choice(
        $._path,
        alias($.generic_type_with_turbofish, $.generic_type)
      )),
      '::',
      $._type_identifier
    )),

    scoped_type_identifier: $ => seq(
      optional(choice(
        $._path,
        alias($.generic_type_with_turbofish, $.generic_type),
        $.bracketed_type,
        $.generic_type
      )),
      '::',
      $._type_identifier
    ),

    range_expression: $ => prec.left(PREC.range, choice(
      seq($._expression, choice('..', '...', '..='), $._expression),
      seq($._expression, '..'),
      seq('..', $._expression),
      '..'
    )),

    unary_expression: $ => prec(PREC.unary, seq(
      choice('-', '*', '!'),
      $._expression
    )),

    try_expression: $ => seq(
      $._expression,
      '?'
    ),

    reference_expression: $ => prec(PREC.unary, seq(
      '&',
      optional($.mutable_specifier),
      $._expression
    )),

    binary_expression: $ => choice(
      prec.left(PREC.multiplicative, seq($._expression, choice('*', '/', '%'), $._expression)),
      prec.left(PREC.additive, seq($._expression, choice('+', '-'), $._expression)),
      prec.left(PREC.comparative, seq($._expression,  choice('==', '!=', '<', '<=', '>', '>='), $._expression)),
      prec.left(PREC.shift, seq($._expression, choice('<<', '>>'), $._expression)),
      prec.left(PREC.and, seq($._expression, '&&', $._expression)),
      prec.left(PREC.or, seq($._expression, '||', $._expression)),
      prec.left(PREC.bitor, seq($._expression, '|', $._expression)),
      prec.left(PREC.bitand, seq($._expression, '&', $._expression)),
      prec.left(PREC.bitxor, seq($._expression, '^', $._expression)),
      $.assignment_expression,
      $.compound_assignment_expr,
      $.type_cast_expression
    ),

    assignment_expression: $ => prec.left(PREC.assign, seq($._expression, '=', $._expression)),

    compound_assignment_expr: $ => prec.left(PREC.assign, seq(
      $._expression,
      choice('+=', '-=', '*=', '/=', '%=', '&=', '|=', '^=', '<<=', '>>='),
      $._expression
    )),

    type_cast_expression: $ => seq(
      $._expression, 'as', $._type
    ),

    return_expression: $ => choice(
      prec.left(seq('return', $._expression)),
      prec(-1, 'return'),
    ),

    call_expression: $ => prec(PREC.call, seq(
      $._expression,
      $.arguments
    )),

    arguments: $ => seq(
      '(',
      sepBy(',', seq(repeat($.attribute_item), $._expression)),
      optional(','),
      ')'
    ),

    array_expression: $ => seq(
      '[',
      repeat($.attribute_item),
      choice(
        seq($._expression, ';', $._expression),
        seq(sepBy(',' ,$._expression), optional(','))
      ),
      ']'
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    tuple_expression: $ => seq(
      '(',
      repeat($.attribute_item),
      seq($._expression, ','),
      repeat(seq($._expression, ',')),
      optional($._expression),
      ')'
    ),

    unit_expression: $ => seq('(', ')'),

    struct_expression: $ => seq(
      choice(
        $._type_identifier,
        alias($.scoped_type_identifier_in_expression_position, $.scoped_type_identifier),
        $.generic_type_with_turbofish
      ),
      $.field_initializer_list
    ),

    field_initializer_list: $ => seq(
      '{',
      sepBy(',', choice(
        alias($.identifier, $.shorthand_field_identifier),
        $.field_initializer,
        $.base_field_initializer
      )),
      optional(','),
      '}'
    ),

    field_initializer: $ => seq(
      repeat($.attribute_item),
      $._field_identifier,
      ':',
      $._expression
    ),

    base_field_initializer: $ => seq(
      '..',
      $._expression
    ),

    if_expression: $ => seq(
      'if',
      $._expression,
      $.block,
      optional($.else_tail)
    ),

    if_let_expression: $ => seq(
      'if',
      'let',
      $._pattern,
      '=',
      $._expression,
      $.block,
      optional($.else_tail)
    ),

    else_tail: $ => seq(
      'else',
      choice($.block, $.if_expression, $.if_let_expression)
    ),

    match_expression: $ => seq(
      'match',
      $._expression,
      $.match_block
    ),

    match_block: $ => seq(
      '{',
      optional(seq(
        repeat($.match_arm),
        alias($.last_match_arm, $.match_arm)
      )),
      '}'
    ),

    match_arm: $ => seq(
      repeat($.attribute_item),
      choice(
        $.macro_invocation,
        $.match_pattern
      ),
      '=>',
      choice(
        seq($._expression, ','),
        prec(1, $._expression_ending_with_block)
      )
    ),

    last_match_arm: $ => seq(
      repeat($.attribute_item),
      $.match_pattern,
      '=>',
      $._expression,
      optional(',')
    ),

    match_pattern: $ => seq(
      $._pattern,
      repeat(seq('|', $._pattern)),
      optional(seq('if', $._expression))
    ),

    while_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'while',
      $._expression,
      $.block
    ),

    while_let_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'while',
      'let',
      $._pattern,
      '=',
      $._expression,
      $.block
    ),

    loop_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'loop',
      $.block
    ),

    for_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'for',
      $._pattern,
      'in',
      $._expression,
      $.block
    ),

    closure_expression: $ => prec(PREC.closure, seq(
      optional('move'),
      $.closure_parameters,
      choice(
        seq(
          optional(seq('->', $._type)),
          $.block
        ),
        $._expression
      )
    )),

    closure_parameters: $ => seq(
      '|',
      sepBy(',', choice(
        $._pattern,
        $.parameter
      )),
      '|'
    ),

    loop_label: $ => seq('\'', $.identifier),

    break_expression: $ => prec.left(seq('break', optional($.loop_label), optional($._expression))),

    continue_expression: $ => prec.left(seq('continue', optional($.loop_label))),

    index_expression: $ => prec(PREC.call, seq($._expression, '[', $._expression, ']')),

    await_expression: $ => prec(PREC.field, seq(
      $._expression,
      '.',
      'await'
    )),

    field_expression: $ => prec(PREC.field, seq(
      $._expression,
      '.',
      choice(
        $._field_identifier,
        $.integer_literal
      )
    )),

    unsafe_block: $ => seq(
      'unsafe',
      $.block
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      optional($._expression),
      '}'
    ),

    // Section - Patterns

    _pattern: $ => choice(
      $._literal_pattern,
      alias(choice(...primitive_types), $.identifier),
      $.identifier,
      $.scoped_identifier,
      $.tuple_pattern,
      $.tuple_struct_pattern,
      $.struct_pattern,
      $.ref_pattern,
      $.slice_pattern,
      $.captured_pattern,
      $.reference_pattern,
      $.remaining_field_pattern,
      $.mut_pattern,
      $.range_pattern,
      '_'
    ),

    tuple_pattern: $ => seq(
      '(',
      sepBy(',', $._pattern),
      optional(','),
      ')'
    ),

    slice_pattern: $ => seq(
      '[',
      sepBy(',', $._pattern),
      optional(','),
      ']'
    ),

    tuple_struct_pattern: $ => seq(
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      '(',
      sepBy(',', $._pattern),
      optional(','),
      ')'
    ),

    struct_pattern: $ => seq(
      choice(
        $._type_identifier,
        $.scoped_type_identifier
      ),
      '{',
      sepBy(',', choice($.field_pattern, $.remaining_field_pattern)),
      optional(','),
      '}'
    ),

    field_pattern: $ => seq(
      optional('ref'),
      optional($.mutable_specifier),
      choice(
        alias($.identifier, $.shorthand_field_identifier),
        seq($._field_identifier, ':', $._pattern)
      )
    ),

    remaining_field_pattern: $ => '..',

    mut_pattern: $ => prec(-1, seq(
      $.mutable_specifier,
      $._pattern
    )),

    range_pattern: $ => seq(
      choice(
        $._literal_pattern,
        $._path,
      ),
      '...',
      choice(
        $._literal_pattern,
        $._path,
      ),
    ),

    ref_pattern: $ => seq(
      'ref',
      $._pattern
    ),

    captured_pattern: $ => seq(
      $.identifier,
      '@',
      $._pattern,
    ),

    reference_pattern: $ => seq(
      '&',
      optional($.mutable_specifier),
      $._pattern
    ),

    // Section - Literals

    _literal: $ => choice(
      $.string_literal,
      $.raw_string_literal,
      $.char_literal,
      $.boolean_literal,
      $.integer_literal,
      $.float_literal,
    ),

    _literal_pattern: $ => choice(
      $.string_literal,
      $.raw_string_literal,
      $.char_literal,
      $.boolean_literal,
      seq(optional('-'), choice($.integer_literal, $.float_literal)),
    ),

    integer_literal: $ => token(seq(
      choice(
        /[0-9][0-9_]*/,
        /0x[0-9a-fA-F_]+/,
        /0b[01_]+/,
        /0o[0-7_]+/
      ),
      optional(choice(...numeric_types))
    )),

    string_literal: $ => seq(
      alias(/b?"/, '"'),
      repeat(choice(
        $.escape_sequence,
        $._string_content
      )),
      token.immediate('"')
    ),

    char_literal: $ => token(seq(
      optional('b'),
      '\'',
      optional(choice(
        seq('\\', choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )),
        /[^\\']/
      )),
      '\''
    )),

    escape_sequence: $ => token.immediate(
      seq('\\',
        choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )
      )),

    boolean_literal: $ => choice('true', 'false'),

    comment: $ => choice(
      $.line_comment,
      $.block_comment
    ),

    line_comment: $ => token(seq(
      '//', /.*/
    )),

    _path: $ => choice(
      $.self,
      alias(choice(...primitive_types), $.identifier),
      $.metavariable,
      $.super,
      $.crate,
      $.identifier,
      $.scoped_identifier
    ),

    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

    _reserved_identifier: $ => alias(choice(
      'default',
      'union',
    ), $.identifier),

    _type_identifier: $ => alias($.identifier, $.type_identifier),
    _field_identifier: $ => alias($.identifier, $.field_identifier),

    self: $ => 'self',
    super: $ => 'super',
    crate: $ => 'crate',

    metavariable: $ => /\$[a-zA-Z_]\w*/
  }
})

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
