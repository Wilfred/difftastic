const PREC = {
  assign: 1,
  infix: 2,
  new: 3,
  prefix: 3,
  compound: 3,
  call: 4,
  field: 4,
}

module.exports = grammar({
  name: 'scala',

  extras: $ => [
    /\s/,
    $.comment
  ],

  supertypes: $ => [
    $._expression,
    $._definition,
    $._pattern,
  ],

  externals: $ => [
    $._automatic_semicolon,
    $._simple_string,
    $._string_start,
    $._string_middle,
    $._string_end,
    $._multiline_string_start,
    $._multiline_string_middle,
    $._multiline_string_end,
    'else',
  ],

  inline: $ => [
    $._pattern,
    $._semicolon,
    $._definition,
    $._type_identifier,
    $._param_type,
  ],

  conflicts: $ => [
    [$.tuple_type, $.parameter_types],
  ],

  word: $ => $.identifier,

  rules: {
    compilation_unit: $ => repeat($._definition),

    _definition: $ => choice(
      $.package_clause,
      $.package_object,
      $.class_definition,
      $.import_declaration,
      $.object_definition,
      $.trait_definition,
      $.val_definition,
      $.val_declaration,
      $.var_definition,
      $.var_declaration,
      $.type_definition,
      $.function_definition,
      $.function_declaration
    ),

    package_clause: $ => seq(
      'package',
      field('name', $.package_identifier),
      // This is slightly more permissive than the EBNF in that it allows any
      // kind of delcaration inside of the package blocks. As we're more
      // concerned with the structure rather than the validity of the program
      // we'll allow it.
      field('body', optional($.template_body))
    ),

    package_identifier: $ => sep1(
      '.', $.identifier
    ),

    package_object: $ => seq(
      'package',
      'object',
      $._object_definition
    ),

    import_declaration: $ => seq(
      'import',
      sep1(',', $._import_expression)
    ),

    _import_expression: $ => seq(
      field('path', choice($.stable_identifier, $.identifier)),
      optional(seq(
        '.',
        choice(
          $.wildcard,
          $.import_selectors
        )
      ))
    ),

    import_selectors: $ => seq(
      '{',
      commaSep1(choice(
        $.identifier,
        $.renamed_identifier
      )),
      '}'
    ),

    renamed_identifier: $ => seq(
      field('name', $.identifier),
      '=>',
      field('alias', choice($.identifier, $.wildcard))
    ),

    object_definition: $ => seq(
      optional('case'),
      'object',
      $._object_definition
    ),

    _object_definition: $ => seq(
      field('name', $.identifier),
      field('extend', optional($.extends_clause)),
      field('body', optional($.template_body)),
    ),

    class_definition: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      optional('case'),
      'class',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      field('class_parameters', repeat($.class_parameters)),
      field('extend', optional($.extends_clause)),
      field('body', optional($.template_body))
    ),

    trait_definition: $ => seq(
      'trait',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      field('extend', optional($.extends_clause)),
      field('body', optional($.template_body))
    ),

    // The EBNF makes a distinction between function type parameters and other
    // type parameters as you can't specify variance on function type
    // parameters. This isn't important to the structure of the AST so we don't
    // make that distinction.
    type_parameters: $ => seq(
      '[',
      commaSep1($._variant_type_parameter),
      ']'
    ),

    _variant_type_parameter: $ => seq(
      repeat($.annotation),
      choice(
        $.covariant_type_parameter,
        $.contravariant_type_parameter,
        $._type_parameter // invariant type parameter
      )
    ),

    covariant_type_parameter: $ => seq(
      '+',
      $._type_parameter
    ),

    contravariant_type_parameter: $ => seq(
      '-',
      $._type_parameter,
    ),

    _type_parameter: $ => seq(
      field('name', choice($.wildcard, $.identifier)),
      field('type_parameters', optional($.type_parameters)),
      field('bound', optional($.upper_bound)),
      field('bound', optional($.lower_bound)),
      field('bound', optional(repeat($.view_bound))),
      field('bound', optional(repeat($.context_bound))),
    ),

    upper_bound: $ => seq('<:', field('type', $._type)),

    lower_bound: $ => seq('>:', field('type', $._type)),

    view_bound: $ => seq('<%', field('type', $._type)),

    context_bound: $ => seq(':', field('type', $._type)),

    template_body: $ => seq(
      '{',
      // TODO: self type
      optional($._block),
      '}'
    ),

    annotation: $ => prec.right(seq(
      '@',
      field('name', $._simple_type),
      field('arguments', repeat($.arguments)),
    )),

    val_definition: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'val',
      field('pattern', $._pattern),
      optional(seq(':', field('type', $._type))),
      '=',
      field('value', $._expression)
    ),

    val_declaration: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'val',
      commaSep1(field('name', $.identifier)),
      ':',
      field('type', $._type)
    ),

    var_declaration: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'var',
      commaSep1(field('name', $.identifier)),
      ':',
      field('type', $._type)
    ),

    var_definition: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'var',
      field('pattern', $._pattern),
      optional(seq(':', field('type', $._type))),
      '=',
      field('value', $._expression)
    ),

    type_definition: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'type',
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameters)),
      '=',
      field('type', $._type)
    ),

    function_definition: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'def',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      field('parameters', repeat($.parameters)),
      optional(seq(':', field('return_type', $._type))),
      choice(
        seq('=', field('body', $._expression)),
        field('body', $.block)
      )
    ),

    function_declaration: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'def',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      field('parameters', repeat($.parameters)),
      optional(seq(':', field('return_type', $._type)))
    ),

    modifiers: $ => repeat1(choice(
      'abstract',
      'final',
      'sealed',
      'implicit',
      'lazy',
      'override',
      'private',
      'protected'
    )),

    extends_clause: $ => seq(
      'extends',
      field('type', $._type),
      optional($.arguments)
    ),

    // TODO: Allow only the last parameter list to be implicit.
    class_parameters: $ => seq(
      '(',
      optional('implicit'),
      commaSep($.class_parameter),
      ')'
    ),

    // TODO: Allow only the last parameter list to be implicit.
    parameters: $ => seq(
      '(',
      optional('implicit'),
      commaSep($.parameter),
      ')'
    ),

    class_parameter: $ => seq(
      repeat($.annotation),
      optional(choice('val', 'var')),
      field('name', $.identifier),
      optional(seq(':', field('type', $._type))),
      optional(seq('=', field('default_value', $._expression)))
    ),

    parameter: $ => seq(
      repeat($.annotation),
      field('name', $.identifier),
      optional(seq(':', field('type', $._param_type))),
      optional(seq('=', field('default_value', $._expression)))
    ),

    _block: $ => prec.left(seq(
      sep1($._semicolon, choice(
        $._expression,
        $._definition
      )),
      optional($._semicolon),
    )),

    block: $ => seq(
      '{',
      optional($._block),
      '}'
    ),

    // ---------------------------------------------------------------
    // Types

    _type: $ => choice(
      $.function_type,
      $.compound_type,
      $.infix_type,
      $._annotated_type,
    ),

    // TODO: Make this a visible type, so that _type can be a supertype.
    _annotated_type: $ => prec.right(seq(
      $._simple_type,
      repeat($.annotation),
    )),

    _simple_type: $ => choice(
      $.generic_type,
      $.projected_type,
      $.tuple_type,
      $.stable_type_identifier,
      $._type_identifier,
    ),

    compound_type: $ => prec(PREC.compound, seq(
      field('base', $._annotated_type),
      repeat1(seq('with', field('extra', $._annotated_type))),
      // TODO: Refinement.
    )),

    infix_type: $ => prec.left(PREC.infix, seq(
      field('left', choice($.compound_type, $.infix_type, $._annotated_type)),
      field('operator', choice($.identifier, $.operator_identifier)),
      field('right', choice($.compound_type, $.infix_type, $._annotated_type))
    )),

    tuple_type: $ => seq(
      '(',
      commaSep1($._type),
      ')',
    ),

    stable_type_identifier: $ => seq(
      choice($.identifier, $.stable_identifier),
      '.',
      $._type_identifier
    ),

    stable_identifier: $ => seq(
      choice($.identifier, $.stable_identifier),
      '.',
      $.identifier
    ),

    generic_type: $ => seq(
      field('type', $._simple_type),
      field('type_arguments', $.type_arguments)
    ),

    projected_type: $ => seq(
      field('type', $._simple_type),
      '#',
      field('selector', $._type_identifier),
    ),

    function_type: $ => prec.right(seq(
      field('parameter_types', $.parameter_types),
      '=>',
      field('return_type', $._type)
    )),

    // Deprioritize against typed_pattern._type.
    parameter_types: $ => prec(-1, choice(
      $._annotated_type,
      // Prioritize a parenthesized param list over a single tuple_type.
      prec.dynamic(1, seq('(', commaSep($._param_type), ')' )),
      $.compound_type,
      $.infix_type,
    )),

    _param_type: $ => choice(
      $._type,
      $.lazy_parameter_type,
      $.repeated_parameter_type,
    ),

    lazy_parameter_type: $ => seq(
      '=>',
      field('type', $._type)
    ),

    repeated_parameter_type: $ => seq(
      field('type', $._type),
      '*',
    ),

    _type_identifier: $ => alias($.identifier, $.type_identifier),

    // ---------------------------------------------------------------
    // Patterns

    _pattern: $ => choice(
      $.identifier,
      $.capture_pattern,
      $.tuple_pattern,
      $.case_class_pattern,
      $.infix_pattern,
      $.alternative_pattern,
      $.typed_pattern,
      $.number,
      $.string,
      $.wildcard
    ),

    case_class_pattern: $ => seq(
      field('type', choice($._type_identifier, $.stable_type_identifier)),
      '(',
      field('pattern', commaSep($._pattern)),
      ')'
    ),

    infix_pattern: $ => prec.left(PREC.infix, seq(
      field('left', $._pattern),
      field('operator', choice($.identifier, $.operator_identifier)),
      field('right', $._pattern),
    )),

    capture_pattern: $ => prec(PREC.assign, seq(
      field('name', $.identifier),
      '@',
      field('pattern', $._pattern)
    )),

    typed_pattern: $ => prec(-1, seq(
      field('pattern', $._pattern),
      ':',
      field('type', $._type)
    )),

    // TODO: Flatten this.
    alternative_pattern: $ => prec.left(-2, seq(
      $._pattern,
      '|',
      $._pattern
    )),

    tuple_pattern: $ => seq(
      '(',
      $._pattern,
      repeat1(seq(',', $._pattern)),
      ')'
    ),

    // ---------------------------------------------------------------
    // Expressions

    _expression: $ => choice(
      $.if_expression,
      $.match_expression,
      $.try_expression,
      $.call_expression,
      $.generic_function,
      $.assignment_expression,
      $.parenthesized_expression,
      $.string_transform_expression,
      $.field_expression,
      $.instance_expression,
      // TODO: postfix and ascription
      $.infix_expression,
      $.prefix_expression,
      $.tuple_expression,
      $.case_block,
      $.block,
      $.identifier,
      $.number,
      $.string
    ),

    if_expression: $ => prec.right(seq(
      'if',
      field('condition', $.parenthesized_expression),
      field('consequence', $._expression),
      optional(seq(
        'else',
        field('alternative', $._expression)
      ))
    )),

    match_expression: $ => seq(
      field('value', $._expression),
      'match',
      field('body', $.case_block)
    ),

    try_expression: $ => prec.right(seq(
      'try',
      field('body', $._expression),
      optional($.catch_clause),
      optional($.finally_clause)
    )),

    catch_clause: $ => prec.right(seq('catch', $.case_block)),

    finally_clause: $ => prec.right(seq('finally', $._expression)),

    case_block: $ => choice(
      prec(-1, seq('{', '}')),
      seq('{', repeat1($.case_clause), '}')
    ),

    case_clause: $ => prec.left(seq(
      'case',
      field('pattern', $._pattern),
      optional($.guard),
      '=>',
      field('body', optional($._block)),
    )),

    guard: $ => seq(
      'if',
      field('condition', $._expression)
    ),

    assignment_expression: $ => prec.right(PREC.assign, seq(
      field('left', $._expression),
      '=',
      field('right', $._expression)
    )),

    generic_function: $ => prec(PREC.call, seq(
      field('function', $._expression),
      field('type_arguments', $.type_arguments)
    )),

    call_expression: $ => prec(PREC.call, seq(
      field('function', $._expression),
      field('arguments', $.arguments),
      field('body', optional(choice($.block, $.case_block)))
    )),

    field_expression: $ => prec(PREC.field, seq(
      field('value', $._expression),
      '.',
      field('field', $.identifier)
    )),

    instance_expression: $ => prec(PREC.new, seq(
      'new',
      $._expression
    )),

    infix_expression: $ => prec.left(PREC.infix, seq(
      field('left', $._expression),
      field('operator', choice($.identifier, $.operator_identifier)),
      field('right', $._expression)
    )),

    prefix_expression: $ => prec(PREC.prefix, seq(
      choice('+', '-', '!', '~'),
      $._expression
    )),

    tuple_expression: $ => seq(
      '(',
      $._expression,
      repeat1(seq(',', $._expression)),
      ')'
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    type_arguments: $ => seq(
      '[',
      commaSep1($._type),
      ']'
    ),

    arguments: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    // TODO: Include operators.
    identifier: $ => /[a-zA-Z_]\w*/,

    wildcard: $ => '_',

    operator_identifier: $ => /[^\s\w\(\)\[\]\{\}'"`\.;,]+/,

    number: $ => /[\d\.]+/,

    string_transform_expression: $ => seq(
      $.identifier,
      $.string
    ),

    string: $ => choice(
      $._simple_string,
      seq(
        $._string_start,
        $.interpolation,
        repeat(seq(
          $._string_middle,
          $.interpolation,
        )),
        $._string_end
      ),
      seq(
        $._multiline_string_start,
        $.interpolation,
        repeat(seq(
          $._multiline_string_middle,
          $.interpolation,
        )),
        $._multiline_string_end
      )
    ),

    interpolation: $ => seq('$', choice($.identifier, $.block)),

    _semicolon: $ => choice(
      ';',
      $._automatic_semicolon
    ),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
})

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function sep(delimiter, rule) {
  return optional(sep1(delimiter, rule))
}

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}
