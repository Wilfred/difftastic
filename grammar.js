const PREC = {
  range: 15,
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

const built_in_attributes = [
  'cfg',
  'cfg_attr',
  'test',
  'ignore',
  'should_panic',
  'derive',
  'automatically_derived',
  'macro_export',
  'macro_use',
  'proc_macro',
  'proc_macro_derive',
  'proc_macro_attribute',
  'allow',
  'warn',
  'deny',
  'forbid',
  'deprecated',
  'must_use',
  'link',
  'link_name',
  'no_link',
  'repr',
  'crate_type',
  'no_main',
  'export_name',
  'link_section',
  'no_mangle',
  'used',
  'crate_name',
  'inline',
  'cold',
  'no_builtins',
  'target_feature',
  'track_caller',
  'doc',
  'no_std',
  'no_implicit_prelude',
  'path',
  'recursion_limit',
  'type_length_limit',
  'panic_handler',
  'global_allocator',
  'windows_subsystem',
  'feature',
  'non_exhaustive'
]

module.exports = grammar({
  name: 'rust',

  extras: $ => [/\s/, $.line_comment, $.block_comment],

  externals: $ => [
    $._string_content,
    $.raw_string_literal,
    $.float_literal,
    $.block_comment,
  ],

  supertypes: $ => [
    $._expression,
    $._type,
    $._literal,
    $._literal_pattern,
    $._declaration_statement,
    $._pattern,
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
    [$.type_parameters, $.for_lifetimes],
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.expression_statement,
      $._declaration_statement
    ),

    empty_statement: $ => ';',

    expression_statement: $ => choice(
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
        field('name', choice(
          $.identifier,
          $._reserved_identifier,
        )),
        choice(
          seq('(', rules, ')', ';'),
          seq('{', rules, '}')
        )
      )
    },

    macro_rule: $ => seq(
      field('left', $.token_tree_pattern),
      '=>',
      field('right', $.token_tree)
    ),

    _token_pattern: $ => choice(
      $.token_tree_pattern,
      $.token_repetition_pattern,
      $.token_binding_pattern,
      $.metavariable,
      $._non_special_token
    ),

    token_tree_pattern: $ => choice(
      seq('(', repeat($._token_pattern), ')'),
      seq('[', repeat($._token_pattern), ']'),
      seq('{', repeat($._token_pattern), '}')
    ),

    token_binding_pattern: $ => prec(1, seq(
      field('name', $.metavariable),
      ':',
      field('type', $.fragment_specifier)
    )),

    token_repetition_pattern: $ => seq(
      '$', '(', repeat($._token_pattern), ')', optional(/[^+*?]+/), choice('+', '*', '?')
    ),

    fragment_specifier: $ => choice(
      'block', 'expr', 'ident', 'item', 'lifetime', 'literal', 'meta', 'pat',
      'path', 'stmt', 'tt', 'ty', 'vis'
    ),

    _tokens: $ => choice(
      $.token_tree,
      $.token_repetition,
      $.metavariable,
      $._non_special_token
    ),

    token_tree: $ => choice(
      seq('(', repeat($._tokens), ')'),
      seq('[', repeat($._tokens), ']'),
      seq('{', repeat($._tokens), '}')
    ),

    token_repetition: $ => seq(
      '$', '(', repeat($._tokens), ')', optional(/[^+*?]+/), choice('+', '*', '?')
    ),

    // Matches non-delimiter tokens common to both macro invocations and
    // definitions. This is everything except $ and metavariables (which begin
    // with $).
    _non_special_token: $ => choice(
      $._literal, $.identifier, $.mutable_specifier, $.self, $.super, $.crate,
      alias(choice(...primitive_types), $.primitive_type),
      /[/_\-=->,;:::!=?.@*&#%^+<>|~]+/,
      '\'',
      'as', 'async', 'await', 'break', 'const', 'continue', 'default', 'enum', 'fn', 'for', 'if', 'impl',
      'let', 'loop', 'match', 'mod', 'pub', 'return', 'static', 'struct', 'trait', 'type',
      'union', 'unsafe', 'use', 'where', 'while'
    ),

    // Section - Declarations

    attribute_item: $ => seq(
      '#',
      '[',
      $._attr,
      ']'
    ),

    inner_attribute_item: $ => seq(
      '#',
      '!',
      '[',
      $._attr,
      ']'
    ),

    _attr: $ => choice(
      alias($.built_in_attr, $.meta_item),
      alias($.custom_attr, $.attr_item),
    ),

    custom_attr: $ => seq(
      $._path,
      optional(choice(
        seq('=', field('value', $._expression)),
        field('arguments', alias($.delim_token_tree, $.token_tree))
      ))
    ),

    built_in_attr: $ => seq(
      $._built_in_attr_path,
      optional(choice(
        seq('=', field('value', $._expression)),
        field('arguments', $.meta_arguments)
      ))
    ),

    _built_in_attr_path: $ => choice(
      ...built_in_attributes.map(name => alias(name, $.identifier))
    ),

    meta_item: $ => seq(
      $._path,
      optional(choice(
        seq('=', field('value', $._expression)),
        field('arguments', $.meta_arguments)
      ))
    ),

    meta_arguments: $ => seq(
      '(',
      sepBy(',', choice(
        $.meta_item,
        $._literal
      )),
      optional(','),
      ')'
    ),

    mod_item: $ => seq(
      optional($.visibility_modifier),
      'mod',
      field('name', $.identifier),
      choice(
        ';',
        field('body', $.declaration_list)
      )
    ),

    foreign_mod_item: $ => seq(
      optional($.visibility_modifier),
      $.extern_modifier,
      choice(
        ';',
        field('body', $.declaration_list)
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
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameters)),
      choice(
        seq(
          optional($.where_clause),
          field('body', $.field_declaration_list)
        ),
        seq(
          field('body', $.ordered_field_declaration_list),
          optional($.where_clause),
          ';'
        ),
        ';'
      ),
    ),

    union_item: $ => seq(
      optional($.visibility_modifier),
      'union',
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameters)),
      optional($.where_clause),
      field('body', $.field_declaration_list),
    ),

    enum_item: $ => seq(
      optional($.visibility_modifier),
      'enum',
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameters)),
      optional($.where_clause),
      field('body', $.enum_variant_list)
    ),

    enum_variant_list: $ => seq(
      '{',
      sepBy(',', seq(repeat($.attribute_item), $.enum_variant)),
      optional(','),
      '}'
    ),

    enum_variant: $ => seq(
      optional($.visibility_modifier),
      field('name', $.identifier),
      field('body', optional(choice(
        $.field_declaration_list,
        $.ordered_field_declaration_list
      ))),
      optional(seq(
        '=',
        field('value', $._expression)
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
      field('name', $._field_identifier),
      ':',
      field('type', $._type)
    ),

    ordered_field_declaration_list: $ => seq(
      '(',
      sepBy(',', seq(
        repeat($.attribute_item),
        optional($.visibility_modifier),
        field('type', $._type)
      )),
      optional(','),
      ')'
    ),

    extern_crate_declaration: $ => seq(
      optional($.visibility_modifier),
      'extern',
      $.crate,
      field('name', $.identifier),
      optional(seq(
        'as',
        field('alias', $.identifier)
      )),
      ';'
    ),

    const_item: $ => seq(
      optional($.visibility_modifier),
      'const',
      field('name', $.identifier),
      ':',
      field('type', $._type),
      optional(
        seq(
          '=',
          field('value', $._expression),
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
      field('name', $.identifier),
      ':',
      field('type', $._type),
      optional(seq(
        '=',
        field('value', $._expression)
      )),
      ';'
    ),

    type_item: $ => seq(
      optional($.visibility_modifier),
      'type',
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameters)),
      '=',
      field('type', $._type),
      ';'
    ),

    function_item: $ => seq(
      optional($.visibility_modifier),
      optional($.function_modifiers),
      'fn',
      field('name', choice($.identifier, $.metavariable)),
      field('type_parameters', optional($.type_parameters)),
      field('parameters', $.parameters),
      optional(seq('->', field('return_type', $._type))),
      optional($.where_clause),
      field('body', $.block)
    ),

    function_signature_item: $ => seq(
      optional($.visibility_modifier),
      optional($.function_modifiers),
      'fn',
      field('name', choice($.identifier, $.metavariable)),
      field('type_parameters', optional($.type_parameters)),
      field('parameters', $.parameters),
      optional(seq('->', field('return_type', $._type))),
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
      field('left', choice(
        $.lifetime,
        $._type_identifier,
        $.scoped_type_identifier,
        $.generic_type,
        $.reference_type,
        $.pointer_type,
        $.tuple_type,
        $.higher_ranked_trait_bound,
        alias(choice(...primitive_types), $.primitive_type)
      )),
      field('bounds', $.trait_bounds)
    ),

    impl_item: $ => seq(
      optional('unsafe'),
      'impl',
      field('type_parameters', optional($.type_parameters)),
      optional(seq(
        field('trait', choice(
          $._type_identifier,
          $.scoped_type_identifier,
          $.generic_type
        )),
        'for'
      )),
      field('type', $._type),
      optional($.where_clause),
      choice(field('body', $.declaration_list), ';')
    ),

    trait_item: $ => seq(
      optional($.visibility_modifier),
      optional('unsafe'),
      'trait',
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameters)),
      field('bounds', optional($.trait_bounds)),
      optional($.where_clause),
      field('body', $.declaration_list)
    ),

    associated_type: $ => seq(
      'type',
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameters)),
      field('bounds', optional($.trait_bounds)),
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
      field('type_parameters', $.type_parameters),
      field('type', $._type)
    ),

    removed_trait_bound: $ => seq(
      '?',
      $._type
    ),

    type_parameters: $ => prec(1, seq(
      '<',
      sepBy1(',', choice(
        $.lifetime,
        $.metavariable,
        $._type_identifier,
        $.constrained_type_parameter,
        $.optional_type_parameter,
        $.const_parameter,
      )),
      optional(','),
      '>'
    )),

    const_parameter: $ => seq(
      'const',
      field('name', $.identifier),
      ':',
      field('type', $._type),
    ),

    constrained_type_parameter: $ => seq(
      field('left', choice($.lifetime, $._type_identifier)),
      field('bounds', $.trait_bounds)
    ),

    optional_type_parameter: $ => seq(
      field('name', choice(
        $._type_identifier,
        $.constrained_type_parameter
      )),
      '=',
      field('default_type', $._type)
    ),

    let_declaration: $ => seq(
      'let',
      optional($.mutable_specifier),
      field('pattern', $._pattern),
      optional(seq(
        ':',
        field('type', $._type)
      )),
      optional(seq(
        '=',
        field('value', $._expression)
      )),
      ';'
    ),

    use_declaration: $ => seq(
      optional($.visibility_modifier),
      'use',
      field('argument', $._use_clause),
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
      field('path', optional($._path)),
      '::',
      field('list', $.use_list)
    ),

    use_list: $ => seq(
      '{',
      sepBy(',', choice(
        $._use_clause
      )),
      optional(','),
      '}'
    ),

    use_as_clause: $ => seq(
      field('path', $._path),
      'as',
      field('alias', $.identifier)
    ),

    use_wildcard: $ => seq(
      optional(seq($._path, '::')),
      '*'
    ),

    parameters: $ => seq(
      '(',
      sepBy(',', seq(
        optional($.attribute_item),
        choice(
          $.parameter,
          $.self_parameter,
          $.variadic_parameter,
          '_',
          $._type
        ))),
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
      field('pattern', choice(
        $._pattern,
        $.self,
        $._reserved_identifier,
      )),
      ':',
      field('type', $._type)
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
      field('type', $._type),
      'as',
      field('alias', $._type)
    ),

    lifetime: $ => seq("'", $.identifier),

    array_type: $ => seq(
      '[',
      field('element', $._type),
      optional(seq(
        ';',
        field('length', $._expression)
      )),
      ']'
    ),

    for_lifetimes: $ => seq(
      'for',
      '<',
      sepBy1(',', $.lifetime),
      optional(','),
      '>'
    ),

    function_type: $ => seq(
      optional($.for_lifetimes),
      prec(PREC.call, seq(
        choice(
          field('trait', choice(
            $._type_identifier,
            $.scoped_type_identifier
          )),
          seq(
            optional($.function_modifiers),
            'fn'
          )
        ),
        field('parameters', $.parameters)
      )),
      optional(seq('->', field('return_type', $._type)))
    ),

    tuple_type: $ => seq(
      '(',
      sepBy1(',', $._type),
      optional(','),
      ')'
    ),

    unit_type: $ => seq('(', ')'),

    generic_function: $ => prec(1, seq(
      field('function', choice(
        $.identifier,
        $.scoped_identifier,
        $.field_expression
      )),
      '::',
      field('type_arguments', $.type_arguments)
    )),

    generic_type: $ => prec(1, seq(
      field('type', choice(
        $._type_identifier,
        $.scoped_type_identifier
      )),
      field('type_arguments', $.type_arguments)
    )),

    generic_type_with_turbofish: $ => seq(
      field('type', choice(
        $._type_identifier,
        $.scoped_identifier
      )),
      '::',
      field('type_arguments', $.type_arguments)
    ),

    bounded_type: $ => prec.left(-1, choice(
      seq($.lifetime, '+', $._type),
      seq($._type, '+', $._type),
      seq($._type, '+', $.lifetime)
    )),

    type_arguments: $ => seq(
      token(prec(1, '<')),
      sepBy1(',', choice(
        $._type,
        $.type_binding,
        $.lifetime,
        $._literal,
        $.block,
      )),
      optional(','),
      '>'
    ),

    type_binding: $ => seq(
      field('name', $._type_identifier),
      field('type_arguments', optional($.type_arguments)),
      '=',
      field('type', $._type)
    ),

    reference_type: $ => seq(
      '&',
      optional($.lifetime),
      optional($.mutable_specifier),
      field('type', $._type)
    ),

    pointer_type: $ => seq(
      '*',
      choice('const', $.mutable_specifier),
      field('type', $._type)
    ),

    empty_type: $ => '!',

    abstract_type: $ => seq(
      'impl',
      field('trait', choice(
        $._type_identifier,
        $.scoped_type_identifier,
        $.generic_type,
        $.function_type
      ))
    ),

    dynamic_type: $ => seq(
      'dyn',
      field('trait', choice(
        $._type_identifier,
        $.scoped_type_identifier,
        $.generic_type,
        $.function_type
      ))
    ),

    mutable_specifier: $ => 'mut',

    // Section - Expressions

    _expression_except_range: $ => choice(
      $.unary_expression,
      $.reference_expression,
      $.try_expression,
      $.binary_expression,
      $.assignment_expression,
      $.compound_assignment_expr,
      $.type_cast_expression,
      $.call_expression,
      $.return_expression,
      $.yield_expression,
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
      $.break_expression,
      $.continue_expression,
      $.index_expression,
      $.metavariable,
      $.closure_expression,
      $.parenthesized_expression,
      $.struct_expression,
      $._expression_ending_with_block,
    ),

    _expression: $ => choice(
      $._expression_except_range,
      $.range_expression,
    ),

    _expression_ending_with_block: $ => choice(
      $.unsafe_block,
      $.async_block,
      $.block,
      $.if_expression,
      $.if_let_expression,
      $.match_expression,
      $.while_expression,
      $.while_let_expression,
      $.loop_expression,
      $.for_expression,
      $.const_block
    ),

    macro_invocation: $ => seq(
      field('macro', choice(
        $.scoped_identifier,
        $.identifier,
        $._reserved_identifier,
      )),
      '!',
      alias($.delim_token_tree, $.token_tree)
    ),

    delim_token_tree: $ => choice(
      seq('(', repeat($._delim_tokens), ')'),
      seq('[', repeat($._delim_tokens), ']'),
      seq('{', repeat($._delim_tokens), '}')
    ),

    _delim_tokens: $ => choice(
      $._non_delim_token,
      alias($.delim_token_tree, $.token_tree),
    ),

    // Should match any token other than a delimiter.
    _non_delim_token: $ => choice(
      $._non_special_token,
      '$'
    ),

    scoped_identifier: $ => seq(
      field('path', optional(choice(
        $._path,
        $.bracketed_type,
        alias($.generic_type_with_turbofish, $.generic_type)
      ))),
      '::',
      field('name', $.identifier)
    ),

    scoped_type_identifier_in_expression_position: $ => prec(-2, seq(
      field('path', optional(choice(
        $._path,
        alias($.generic_type_with_turbofish, $.generic_type)
      ))),
      '::',
      field('name', $._type_identifier)
    )),

    scoped_type_identifier: $ => seq(
      field('path', optional(choice(
        $._path,
        alias($.generic_type_with_turbofish, $.generic_type),
        $.bracketed_type,
        $.generic_type
      ))),
      '::',
      field('name', $._type_identifier)
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
      field('value', $._expression)
    )),

    binary_expression: $ => {
      const table = [
        [PREC.and, '&&'],
        [PREC.or, '||'],
        [PREC.bitand, '&'],
        [PREC.bitor, '|'],
        [PREC.bitxor, '^'],
        [PREC.comparative, choice('==', '!=', '<', '<=', '>', '>=')],
        [PREC.shift, choice('<<', '>>')],
        [PREC.additive, choice('+', '-')],
        [PREC.multiplicative, choice('*', '/', '%')],
      ];

      return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))));
    },

    assignment_expression: $ => prec.left(PREC.assign, seq(
      field('left', $._expression),
      '=',
      field('right', $._expression)
    )),

    compound_assignment_expr: $ => prec.left(PREC.assign, seq(
      field('left', $._expression),
      field('operator', choice('+=', '-=', '*=', '/=', '%=', '&=', '|=', '^=', '<<=', '>>=')),
      field('right', $._expression)
    )),

    type_cast_expression: $ => seq(
      field('value', $._expression),
      'as',
      field('type', $._type)
    ),

    return_expression: $ => choice(
      prec.left(seq('return', $._expression)),
      prec(-1, 'return'),
    ),

    yield_expression: $ => choice(
      prec.left(seq('yield', $._expression)),
      prec(-1, 'yield'),
    ),

    call_expression: $ => prec(PREC.call, seq(
      field('function', $._expression_except_range),
      field('arguments', $.arguments)
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
        seq(
          $._expression,
          ';',
          field('length', $._expression)
        ),
        seq(
          sepBy(',', $._expression),
          optional(',')
        )
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
      field('name', choice(
        $._type_identifier,
        alias($.scoped_type_identifier_in_expression_position, $.scoped_type_identifier),
        $.generic_type_with_turbofish
      )),
      field('body', $.field_initializer_list)
    ),

    field_initializer_list: $ => seq(
      '{',
      sepBy(',', choice(
        $.shorthand_field_initializer,
        $.field_initializer,
        $.base_field_initializer
      )),
      optional(','),
      '}'
    ),

    shorthand_field_initializer: $ => seq(
      repeat($.attribute_item),
      $.identifier
    ),

    field_initializer: $ => seq(
      repeat($.attribute_item),
      field('name', $._field_identifier),
      ':',
      field('value', $._expression)
    ),

    base_field_initializer: $ => seq(
      '..',
      $._expression
    ),

    if_expression: $ => seq(
      'if',
      field('condition', $._expression),
      field('consequence', $.block),
      optional(field("alternative", $.else_clause))
    ),

    if_let_expression: $ => seq(
      'if',
      'let',
      field('pattern', $._pattern),
      '=',
      field('value', $._expression),
      field('consequence', $.block),
      optional(field('alternative', $.else_clause))
    ),

    else_clause: $ => seq(
      'else',
      choice(
        $.block,
        $.if_expression,
        $.if_let_expression
      )
    ),

    match_expression: $ => seq(
      'match',
      field('value', $._expression),
      field('body', $.match_block)
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
      field('pattern', choice(
        $.macro_invocation,
        $.match_pattern
      )),
      '=>',
      choice(
        seq(field('value', $._expression), ','),
        field('value', prec(1, $._expression_ending_with_block))
      )
    ),

    last_match_arm: $ => seq(
      repeat($.attribute_item),
      field('pattern', $.match_pattern),
      '=>',
      field('value', $._expression),
      optional(',')
    ),

    match_pattern: $ => seq(
      $._pattern,
      optional(seq('if', field('condition', $._expression)))
    ),

    while_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'while',
      field('condition', $._expression),
      field('body', $.block)
    ),

    while_let_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'while',
      'let',
      field('pattern', $._pattern),
      '=',
      field('value', $._expression),
      field('body', $.block)
    ),

    loop_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'loop',
      field('body', $.block)
    ),

    for_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'for',
      field('pattern', $._pattern),
      'in',
      field('value', $._expression),
      field('body', $.block)
    ),

    const_block: $ => seq(
      'const',
      field('body', $.block)
    ),

    closure_expression: $ => prec(PREC.closure, seq(
      optional('move'),
      field('parameters', $.closure_parameters),
      choice(
        seq(
          optional(seq('->', field('return_type', $._type))),
          field('body', $.block)
        ),
        field('body', $._expression)
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
      field('value', $._expression),
      '.',
      field('field', choice(
        $._field_identifier,
        $.integer_literal
      ))
    )),

    unsafe_block: $ => seq(
      'unsafe',
      $.block
    ),

    async_block: $ => seq(
      'async',
      optional("move"),
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
      $.or_pattern,
      $.const_block,
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
      field('type', choice(
        $.identifier,
        $.scoped_identifier
      )),
      '(',
      sepBy(',', $._pattern),
      optional(','),
      ')'
    ),

    struct_pattern: $ => seq(
      field('type', choice(
        $._type_identifier,
        $.scoped_type_identifier
      )),
      '{',
      sepBy(',', choice($.field_pattern, $.remaining_field_pattern)),
      optional(','),
      '}'
    ),

    field_pattern: $ => seq(
      optional('ref'),
      optional($.mutable_specifier),
      choice(
        field('name', alias($.identifier, $.shorthand_field_identifier)),
        seq(
          field('name', $._field_identifier),
          ':',
          field('pattern', $._pattern)
        )
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
      choice('...', '..='),
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

    or_pattern: $ => prec.left(-2, seq(
      $._pattern,
      '|',
      $._pattern,
    )),

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
      $.integer_literal,
      $.float_literal,
      $.negative_literal,
    ),

    negative_literal: $ => seq('-', choice($.integer_literal, $.float_literal)),

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
      $.scoped_identifier,
      $._reserved_identifier,
    ),

    identifier: $ => /(r#)?[_\p{XID_Start}][_\p{XID_Continue}]*/,

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
