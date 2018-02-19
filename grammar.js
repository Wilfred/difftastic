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
    $.raw_string_literal,
  ],

  inline: $ => [
    $._type_identifier,
    $._field_identifier,
    $._non_special_token,
    $._declaration_statement,
    $._expression_ending_with_block
  ],

  conflicts: $ => [
    [$.visibility_modifier]
  ],

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

    _tokens: $ => prec.left(-1, choice(
      $.token_tree,
      $.token_repetition,
      $._non_special_token
    )),

    token_tree: $ => choice(
      seq('(', repeat($._tokens), ')'),
      seq('[', repeat($._tokens), ']'),
      seq('{', repeat($._tokens), '}')
    ),

    token_repetition: $ => seq(
      '$', '(', repeat($._tokens), ')', optional(/[^+*]+/), choice('+', '*')
    ),

    _non_special_token: $ => choice(
      $.identifier,
      $.metavariable,
      $._literal,
      'if',
      'let',
      'match',
      'loop',
      'for',
      'while',
      'let',
      'fn',
      'static',
      $.mutable_specifier,
      $.unsafe,
      '->',
      '=>',
      '=',
      'pub',
      "?", "'",
      '*', '/', '%',
      '&&', '||', '|', '&', '^',
      '+=', '-=', '*=', '/=', '%=', '&=', '|=', '^=', '<<=', '>>=',
      '+', '-',
      '==', '!=', '<', '>', '<=', '>=',
      '>>', '<<',
      '~', '!',
      ',', '.', ':', ';',
      '#', '@',
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
      $.identifier,
      optional(choice(
        seq('=', $._literal),
        seq('(', sepBy(',', $.meta_item), optional(','), ')')
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
        $.field_declaration_list,
        seq($.ordered_field_declaration_list, ';'),
        ';'
      )
    ),

    union_item: $ => seq(
      optional($.visibility_modifier),
      'union',
      $._type_identifier,
      optional($.type_parameters),
      choice(
        $.field_declaration_list,
        seq($.ordered_field_declaration_list, ';'),
        ';'
      )
    ),

    enum_item: $ => seq(
      optional($.visibility_modifier),
      'enum',
      $._type_identifier,
      optional($.type_parameters),
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
      sepBy(',', seq(optional($.visibility_modifier), $._type)),
      optional(','),
      ')'
    ),

    extern_crate_declaration: $ => seq(
      optional($.visibility_modifier),
      'extern',
      'crate',
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
      '=',
      $._expression,
      ';'
    ),

    static_item: $ => seq(
      optional($.visibility_modifier),
      'static',
      $.identifier,
      ':',
      $._type,
      '=',
      $._expression,
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
      optional($.unsafe),
      optional($.visibility_modifier),
      optional($.extern_modifier),
      'fn',
      $.identifier,
      optional($.type_parameters),
      $.parameters,
      optional(seq(
        '->',
        choice($.abstract_return_type, $.empty_type, $._type)
      )),
      optional($.where_clause),
      $.block
    ),

    function_signature_item: $ => seq(
      optional($.visibility_modifier),
      'fn',
      $.identifier,
      optional($.type_parameters),
      $.parameters,
      optional(seq(
        '->',
        choice($.abstract_return_type, $.empty_type, $._type)
      )),
      optional($.where_clause),
      ';'
    ),

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
        $.generic_type
      ),
      $.trait_bounds
    ),

    abstract_return_type: $ => seq(
      'impl',
      choice(
        $._type_identifier,
        $.scoped_type_identifier,
        $.generic_type
      )
    ),

    impl_item: $ => seq(
      optional($.unsafe),
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
      'trait',
      $._type_identifier,
      optional($.type_parameters),
      optional($.trait_bounds),
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

    type_parameters: $ => seq(
      '<',
      sepBy1(',', choice(
        $.lifetime,
        $._type_identifier,
        $.constrained_type_parameter,
        $.optional_type_parameter
      )),
      '>'
    ),

    constrained_type_parameter: $ => seq(
      choice($.lifetime, $._type_identifier),
      $.trait_bounds
    ),

    optional_type_parameter: $ => seq(
      $._type_identifier,
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
      seq(
        repeat($.path),
        choice(
          choice(
            $.identifier,
            seq($.identifier, 'as', $.identifier)
          ),
          seq(
            '{',
            sepBy(',', choice(
              $.identifier,
              $.self,
              seq($.identifier, 'as', $.identifier)
            )),
            '}'
          ),
          '*'
        )
      ),
      ';'
    ),

    parameters: $ => seq(
      '(',
      sepBy(',', choice($.self_parameter, $.parameter, $._type, $.variadic_parameter)),
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
        $.identifier,
        alias(choice(...primitive_types), $.identifier)
      ),
      ':',
      $._type
    ),

    path: $ => seq(
      choice($.identifier, $.self),
      '::'
    ),

    extern_modifier: $ => seq(
      'extern',
      optional($.string_literal)
    ),

    visibility_modifier: $ => seq(
      'pub',
      optional(seq(
        '(',
        optional('in'),
        choice(
          'crate',
          $.self,
          $.super
        ),
        ')'
      ))
    ),

    // Section - Types

    _type: $ => choice(
      $.reference_type,
      $.pointer_type,
      $.generic_type,
      $.scoped_type_identifier,
      $.tuple_type,
      $.unit_type,
      $.array_type,
      $.function_type,
      $._type_identifier,
      $.macro_invocation,
      alias(choice(...primitive_types), $.primitive_type)
    ),

    qualified_type: $ => seq(
      '<',
      $._type,
      'as',
      $._type,
      '>'
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
      optional($.unsafe),
      optional($.extern_modifier),
      prec(PREC.call, seq(
        choice(
          $._type_identifier,
          $.scoped_identifier,
          'fn'
        ),
        $.parameters
      )),
      optional(seq(
        '->',
        $._type
      ))
    ),

    tuple_type: $ => seq(
      '(',
      sepBy1(',', $._type),
      ')'
    ),

    unit_type: $ => seq('(', ')'),

    generic_function: $ => seq(
      choice(
        $.identifier,
        $.scoped_identifier,
        $.field_expression
      ),
      '::',
      $.type_arguments
    ),

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

    bounded_type: $ => seq(
      choice(
        $._type_identifier,
        $.scoped_identifier,
        $.generic_type,
        $.lifetime
      ),
      repeat1(seq(
        '+',
        choice(
          $._type_identifier,
          $.scoped_identifier,
          $.generic_type,
          $.lifetime
        )
      ))
    ),

    type_arguments: $ => seq(
      '<',
      sepBy1(',', choice(
        $._type,
        $.bounded_type,
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

    unsafe: $ => 'unsafe',

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
      $.self,
      $.scoped_identifier,
      $.generic_function,
      $.field_expression,
      $.array_expression,
      $.tuple_expression,
      prec(1, $.macro_invocation),
      $.unit_expression,
      $._expression_ending_with_block,
      $.break_expression,
      $.continue_expression,
      $._index_expression,
      $.metavariable,
      $.closure_expression,
      seq('(', $._expression, ')'),
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

    scoped_identifier: $ => prec(-1, seq(
      optional(choice(
        $.self,
        $.identifier,
        $.scoped_identifier,
        $.qualified_type,
        alias($.generic_type_with_turbofish, $.generic_type)
      )),
      '::',
      $.identifier
    )),

    scoped_type_identifier_in_expression_position: $ => prec(-2, seq(
      optional(choice(
        $.self,
        $.identifier,
        $.scoped_identifier,
        $.qualified_type,
        alias($.generic_type_with_turbofish, $.generic_type)
      )),
      '::',
      $._type_identifier
    )),

    scoped_type_identifier: $ => seq(
      optional(choice(
        $.self,
        $.identifier,
        $.scoped_identifier,
        $.qualified_type,
        alias($.generic_type_with_turbofish, $.generic_type),
        $.generic_type
      )),
      '::',
      $._type_identifier
    ),

    range_expression: $ => prec.left(PREC.range, choice(
      seq($._expression, '..', $._expression),
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

    return_expression: $ => prec.left(seq(
      'return', optional($._expression))
    ),

    call_expression: $ => prec(PREC.call, seq(
      $._expression,
      $.arguments
    )),

    arguments: $ => seq(
      '(',
      sepBy(',', $._expression),
      optional(','),
      ')'
    ),

    array_expression: $ => seq(
      '[',
      choice(
        seq($._expression, ';', $._expression),
        seq(sepBy(',' ,$._expression), optional(','))
      ),
      ']'
    ),

    tuple_expression: $ => seq(
      '(',
      seq($._expression, ','),
      repeat(seq($._expression, ',')),
      optional($._expression),
      ')'
    ),

    unit_expression: $ => '()',

    struct_expression: $ => seq(
      choice(
        $._type_identifier,
        alias($.scoped_type_identifier_in_expression_position, $.scoped_type_identifier)
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

    field_initializer: $ => seq($._field_identifier, ':', $._expression),

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
      '{',
      repeat($.match_arm),
      alias($.last_match_arm, $.match_arm),
      '}'
    ),

    match_arm: $ => seq(
      repeat($.attribute_item),
      $.match_pattern,
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
      $.closure_parameters,
      choice($.block, $._expression)
    )),

    closure_parameters: $ => seq(
      '|',
      sepBy(',', choice($._pattern, $.mut_pattern, $.parameter)),
      '|'
    ),

    loop_label: $ => seq('\'', $.identifier),

    break_expression: $ => prec.left(seq('break', optional($.loop_label))),

    continue_expression: $ => prec.left(seq('continue', optional($.loop_label))),

    _index_expression: $ => prec(PREC.call, seq($._expression, '[', $._expression, ']')),

    field_expression: $ => prec(PREC.field, seq(
      $._expression,
      '.',
      choice(
        $._field_identifier,
        alias($._integer_literal, $.number_literal)
      )
    )),

    unsafe_block: $ => seq(
      $.unsafe,
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
      $._literal,
      $.identifier,
      $.scoped_identifier,
      $.tuple_pattern,
      $.tuple_struct_pattern,
      $.struct_pattern,
      $.ref_pattern,
      $.captured_pattern,
      $.reference_pattern,
      $.remaining_field_pattern,
      '_'
    ),

    tuple_pattern: $ => seq(
      '(',
      sepBy(',', $._pattern),
      ')'
    ),

    tuple_struct_pattern: $ => seq(
      choice(
        $.identifier,
        $.scoped_identifier
      ),
      '(',
      sepBy(',', choice($._pattern, $.mut_pattern)),
      ')'
    ),

    struct_pattern: $ => seq(
      choice(
        $.identifier,
        $.scoped_identifier
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
        seq($.identifier, ':', $._pattern)
      )
    ),

    remaining_field_pattern: $ => '..',

    mut_pattern: $ => seq(
      $.mutable_specifier,
      $._pattern
    ),

    ref_pattern: $ => seq(
      'ref',
      optional($.mutable_specifier),
      $._pattern
    ),

    captured_pattern: $ => seq(
      $.identifier,
      '@',
      $._pattern
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
      $.number_literal
    ),

    number_literal: $ => {
      const exponent = token(seq(
        choice('e', 'E'),
        optional(choice('+', '-')),
        repeat(choice(/[0-9]/, '_'))
      ))

      return prec.right(seq(
        $._integer_literal,
        optional(choice(
          exponent,
          seq(
            '.',
            optional(/[0-9_]+/),
            optional(exponent)
          )
        )),
        optional(choice(...numeric_types))
      ))
    },

    _integer_literal: $ => token(choice(
      seq(/[0-9]/, repeat(choice(/[0-9]/, '_'))),
      seq('0x', repeat(choice(/[0-9a-fA-F]/, '_'))),
      seq('0b', repeat(choice(/[01]/, '_'))),
      seq('0o', repeat(choice(/[0-7]/, '_')))
    )),

    string_literal: $ => token(seq(
      optional('b'),
      '"',
      repeat(choice(
        seq('\\', choice(/./, '\n', /x[0-9a-fA-F][0-9a-fA-F]/)),
        /[^\\"]/
      )),
      '"'
    )),

    char_literal: $ => token(seq(
      optional('b'),
      '\'',
      optional(choice(
        seq('\\', choice(/./, '\n', /x[0-9a-fA-F][0-9a-fA-F]/)),
        /[^\\']/
      )),
      '\''
    )),

    boolean_literal: $ => choice('true', 'false'),

    comment: $ => choice(
      $.line_comment,
      $.block_comment
    ),

    line_comment: $ => token(seq(
      '//', /.*/
    )),

    // Regex to match a C-style multiline comment
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    block_comment: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )),

    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

    _type_identifier: $ => alias($.identifier, $.type_identifier),
    _field_identifier: $ => alias($.identifier, $.field_identifier),

    self: $ => 'self',

    super: $ => 'super',

    metavariable: $ => /\$[a-zA-Z_]\w*/
  }
})

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
