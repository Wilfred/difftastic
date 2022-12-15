const PREC = {
  end_decl: 0,
  stable_type_id: 1,
  lambda: 1,
  binding_decl: 1,
  binding_def: 2,
  stable_id: 3,
  assign: 3,
  unit: 3,
  ascription: 3,
  postfix: 4,
  infix: 5,
  new: 6,
  prefix: 6,
  compound: 6,
  call: 7,
  field: 7,
}

module.exports = grammar({
  name: 'scala',

  extras: $ => [
    /\s/,
    $.comment
  ],

  supertypes: $ => [
    $.expression,
    $._definition,
    $._pattern,
  ],

  externals: $ => [
    $._automatic_semicolon,
    $._simple_string,
    $._simple_multiline_string,
    $._interpolated_string_middle,
    $._interpolated_string_end,
    $._interpolated_multiline_string_middle,
    $._interpolated_multiline_string_end,
    'else',
    'catch',
    'finally',
    'extends',
    'with',
  ],

  inline: $ => [
    $._pattern,
    $._semicolon,
    $._definition,
    $._type_identifier,
    $._param_type,
    $.literal,
  ],

  conflicts: $ => [
    [$.tuple_type, $.parameter_types],
    [$.binding, $.expression],
  ],

  word: $ => $.identifier,

  rules: {
    compilation_unit: $ => repeat($._top_level_definition),

    _top_level_definition: $ => choice(
      $.package_clause,
      $.package_object,
      $._definition,
    ),

    _definition: $ => choice(
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

    package_identifier: $ => prec.right(sep1(
      '.', $.identifier
    )),

    package_object: $ => seq(
      'package',
      'object',
      $._object_definition
    ),

    import_declaration: $ => prec.left(seq(
      'import',
      sep1(',', $._import_expression)
    )),

    _import_expression: $ => seq(
      field('path', choice($.stable_identifier, $.identifier)),
      optional(seq(
        '.',
        choice(
          $.import_wildcard,
          $.import_selectors
        )
      ))
    ),
    import_wildcard: $ => choice('*', '_', 'given'),
    _import_given_by_type: $ => seq('given', $._type),
    import_selectors: $ => seq(
      '{',
        commaSep1(choice(
          $._import_given_by_type,
          $.import_wildcard,
          $.identifier,
          $.renamed_identifier
        )),
      '}'
    ),

    renamed_identifier: $ => seq(
      field('name', $.identifier),
      choice('=>', 'as'),
      field('alias', choice($.identifier, $.wildcard))
    ),

    object_definition: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      optional('case'),
      'object',
      $._object_definition
    ),

    _object_definition: $ => prec.left(seq(
      field('name', $.identifier),
      field('extend', optional($.extends_clause)),
      field('body', optional($.template_body)),
    )),

    class_definition: $ => prec.right(seq(
      repeat($.annotation),
      optional($.modifiers),
      optional('case'),
      'class',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      optional($.access_modifier),
      field('class_parameters', repeat($.class_parameters)),
      field('extend', optional($.extends_clause)),
      field('body', optional($.template_body))
    )),

    trait_definition: $ => prec.left(seq(
      repeat($.annotation),
       optional($.modifiers),
      'trait',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      field('extend', optional($.extends_clause)),
      field('body', optional($.template_body))
    )),

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

    /*
     * TemplateBody      ::=  :<<< [SelfType] TemplateStat {semi TemplateStat} >>>
     */
    template_body: $ => choice(
      prec.left(PREC.end_decl, seq(
        ':',
        // TODO: self type
        // TODO: indentation. currently second `val` declaration in the block will
        // be treated as a top-level declaration instead of belonging to the template.
        $._block,
        optional($._end_signifier),
      )),
      seq(
        '{',
        // TODO: self type
        optional($._block),
        '}',
      ),
    ),

    _end_signifier: $ => prec.left(PREC.end_decl, seq(
      'end',
      $._end_identifier,
    )),

    annotation: $ => prec.right(seq(
      '@',
      field('name', $._simple_type),
      field('arguments', repeat($.arguments)),
    )),

    val_definition: $ => prec(PREC.binding_def, seq(
      $._start_val,
      field('pattern', $._pattern),
      optional(seq(':', field('type', $._type))),
      '=',
      field('value', $.expression)
    )),

    val_declaration: $ => prec(PREC.binding_decl, seq(
      $._start_val,
      commaSep1(field('name', $.identifier)),
      ':',
      field('type', $._type)
    )),

    _start_val: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'val',
    ),

    var_declaration: $ => prec(PREC.binding_decl, seq(
      $._start_var,
      commaSep1(field('name', $.identifier)),
      ':',
      field('type', $._type)
    )),

    var_definition: $ => prec(PREC.binding_def, seq(
      $._start_var,
      field('pattern', $._pattern),
      optional(seq(':', field('type', $._type))),
      '=',
      field('value', $.expression)
    )),

    _start_var: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'var',
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
      field('name', choice($.identifier, $.operator_identifier)),
      field('type_parameters', optional($.type_parameters)),
      field('parameters', repeat($.parameters)),
      optional(seq(':', field('return_type', $._type))),
      choice(
        seq('=', field('body', $.expression)),
        field('body', $.block)
      )
    ),

    function_declaration: $ => prec.left(seq(
      repeat($.annotation),
      optional($.modifiers),
      'def',
      field('name', choice($.identifier, $.operator_identifier)),
      field('type_parameters', optional($.type_parameters)),
      field('parameters', repeat($.parameters)),
      optional(seq(':', field('return_type', $._type)))
    )),

    modifiers: $ => repeat1(choice(
      'abstract',
      'final',
      'sealed',
      'implicit',
      'lazy',
      'override',
      $.access_modifier,
    )),

    access_modifier: $ => prec.left(seq(
      choice('private', 'protected'),
      optional($.access_qualifier),
    )),

    access_qualifier: $ => seq(
      '[',
      $.identifier,
      ']',
    ),

    extends_clause: $ => prec.left(seq(
      'extends',
      field('type', $._type),
      optional($.arguments)
    )),

    // TODO: Allow only the last parameter list to be implicit.
    class_parameters: $ => prec(1, seq(
      '(',
      optional('implicit'),
      commaSep($.class_parameter),
      ')'
    )),

    // TODO: Allow only the last parameter list to be implicit.
    parameters: $ => seq(
      '(',
      optional('implicit'),
      commaSep($.parameter),
      ')'
    ),

    class_parameter: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      optional(choice('val', 'var')),
      field('name', $.identifier),
      optional(seq(':', field('type', $._type))),
      optional(seq('=', field('default_value', $.expression)))
    ),

    parameter: $ => seq(
      repeat($.annotation),
      field('name', $.identifier),
      optional(seq(':', field('type', $._param_type))),
      optional(seq('=', field('default_value', $.expression)))
    ),

    _block: $ => prec.left(seq(
      sep1($._semicolon, choice(
        $.expression,
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

    stable_type_identifier: $ => prec.left(PREC.stable_type_id, seq(
      choice($.identifier, $.stable_identifier),
      '.',
      $._type_identifier
    )),

    stable_identifier: $ => prec.left(PREC.stable_id, seq(
      choice($.identifier, $.stable_identifier),
      '.',
      $.identifier
    )),

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
      $.stable_identifier,
      $.capture_pattern,
      $.tuple_pattern,
      $.case_class_pattern,
      $.infix_pattern,
      $.alternative_pattern,
      $.typed_pattern,
      $.literal,
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

    capture_pattern: $ => prec(PREC.field, seq(
      field('name', $.identifier),
      '@',
      field('pattern', $._pattern)
    )),

    typed_pattern: $ => prec.right(seq(
      field('pattern', $._pattern),
      ':',
      field('type', $._type)
    )),

    // TODO: Flatten this.
    alternative_pattern: $ => prec.left(-1, seq(
      $._pattern,
      '|',
      $._pattern
    )),

    tuple_pattern: $ => seq(
      '(',
      $._pattern,
      repeat(seq(',', $._pattern)),
      ')'
    ),

    // ---------------------------------------------------------------
    // Expressions

    expression: $ => choice(
      $.if_expression,
      $.match_expression,
      $.try_expression,
      $.call_expression,
      $.generic_function,
      $.assignment_expression,
      $.parenthesized_expression,
      $.interpolated_string_expression,
      $.lambda_expression,
      $.field_expression,
      $.instance_expression,
      $.postfix_expression,
      $.ascription_expression,
      $.infix_expression,
      $.prefix_expression,
      $.tuple_expression,
      $.case_block,
      $.block,
      $.identifier,
      $.literal,
      $.unit,
      $.return_expression,
      $.throw_expression,
      $.while_expression,
      $.do_while_expression,
      $.for_expression,
    ),

    if_expression: $ => prec.right(seq(
      'if',
      field('condition', $.parenthesized_expression),
      field('consequence', $.expression),
      optional(seq(
        'else',
        field('alternative', $.expression)
      ))
    )),

    match_expression: $ => prec.left(PREC.postfix, seq(
      field('value', $.expression),
      'match',
      field('body', $.case_block)
    )),

    try_expression: $ => prec.right(seq(
      'try',
      field('body', $.expression),
      optional($.catch_clause),
      optional($.finally_clause)
    )),

    catch_clause: $ => prec.right(seq('catch', $.case_block)),

    finally_clause: $ => prec.right(seq('finally', $.expression)),

    binding: $ => prec.dynamic(PREC.binding_decl, seq(
      field('name', $.identifier),
      optional(seq(':', field('type', $._param_type))),
    )),

    bindings: $ => seq(
      '(',
      commaSep($.binding),
      ')',
    ),

    lambda_expression: $ => prec.right(PREC.lambda, seq(
      choice(
          $.bindings,
          $.identifier,
      ),
      '=>',
      optional($._block),
    )),

    case_block: $ => choice(
      prec(-1, seq('{', '}')),
      seq('{', repeat1($.case_clause), '}'),
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
      field('condition', $.expression)
    ),

    assignment_expression: $ => prec.right(PREC.assign, seq(
      field('left', $.expression),
      '=',
      field('right', $.expression)
    )),

    generic_function: $ => prec(PREC.call, seq(
      field('function', $.expression),
      field('type_arguments', $.type_arguments)
    )),

    call_expression: $ => prec(PREC.call, seq(
      field('function', $.expression),
      field('arguments', choice($.arguments, $.case_block, $.block)),
    )),

    field_expression: $ => prec(PREC.field, seq(
      field('value', $.expression),
      '.',
      field('field', $.identifier)
    )),

    instance_expression: $ => prec(PREC.new, seq(
      'new',
      $.expression
    )),

    ascription_expression: $ => prec.right(PREC.ascription, seq(
        $.expression,
        ':',
        $._param_type,
    )),

    infix_expression: $ => prec.left(PREC.infix, seq(
      field('left', $.expression),
      field('operator', choice($.identifier, $.operator_identifier)),
      field('right', $.expression)
    )),

    postfix_expression: $ => prec.left(PREC.postfix, seq(
      $.expression,
      choice($.identifier, $.operator_identifier),
    )),

    prefix_expression: $ => prec(PREC.prefix, seq(
      choice('+', '-', '!', '~'),
      $.expression
    )),

    tuple_expression: $ => seq(
      '(',
      $.expression,
      repeat1(seq(',', $.expression)),
      ')'
    ),

    parenthesized_expression: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    type_arguments: $ => seq(
      '[',
      commaSep1($._type),
      ']'
    ),

    arguments: $ => seq(
      '(',
      commaSep($.expression),
      ')'
    ),

    // TODO: Include operators.
    identifier: $ => /[a-zA-Z_]\w*/,

    // workaround for https://github.com/tree-sitter/tree-sitter/issues/867
    _end_identifier: $ => /(end)?[a-zA-Z_]\w*/,

    wildcard: $ => '_',

    operator_identifier: $ => /[^\s\w\(\)\[\]\{\}'"`\.;,]+/,

    literal: $ => choice(
      $.integer_literal,
      $.floating_point_literal,
      $.boolean_literal,
      $.character_literal,
      $.symbol_literal,
      $.string,
      $.null_literal
    ),

    integer_literal: $ => token(
      seq(
        optional(/[-]/),
        choice(
          /[\d]+/,
          /0[xX][\da-fA-F]+/
        ),
        optional(/[lL]/)
      )
    ),

    floating_point_literal: $ => token(
      seq(
        optional(/[-]/),
        choice(
          // digit {digit} ‘.’ digit {digit} [exponentPart] [floatType]
          seq(
            /[\d]+\.[\d]+/,
            optional(/[eE][+-]?[\d]+/),
            optional(/[dfDF]/)
          ),
          // ‘.’ digit {digit} [exponentPart] [floatType]
          seq(
            /\.[\d]+/,
            optional(/[eE][+-]?[\d]+/),
            optional(/[dfDF]/)
          ),
          // digit {digit} exponentPart [floatType]
          seq(
            /[\d]+/,
            /[eE][+-]?[\d]+/,
            optional(/[dfDF]/)
          ),
          // digit {digit} [exponentPart] floatType
          seq(
            /[\d]+/,
            optional(/[eE][+-]?[\d]+/),
            /[dfDF]/
          )
        )
      )
    ),

    boolean_literal: $ => choice('true', 'false'),

    character_literal: $ => token(seq(
      '\'',
      optional(choice(
        seq('\\', choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )),
        /[^\\'\n]/
      )),
      '\''
    )),

    symbol_literal: $ => token(seq(
      "'",
      repeat1(/[^\\'\n]/)
    )),

    interpolated_string_expression: $ => seq(
      $.identifier,
      $.interpolated_string
    ),

    _interpolated_string_start: $ => '"',

    _interpolated_multiline_string_start: $ => '"""',

    interpolation: $ => seq('$', choice($.identifier, $.block)),

    interpolated_string: $ => choice(
      seq(
        $._interpolated_string_start,
        repeat(seq(
          $._interpolated_string_middle,
          $.interpolation
        )),
        $._interpolated_string_end
      ),
      seq(
        $._interpolated_multiline_string_start,
        repeat(seq(
          $._interpolated_multiline_string_middle,
          $.interpolation
        )),
        $._interpolated_multiline_string_end
      )
    ),

    string :$ =>
      choice(
        $._simple_string,
        $._simple_multiline_string
      ),

    _semicolon: $ => choice(
      ';',
      $._automatic_semicolon
    ),

    null_literal: $ => 'null',

    unit: $ => prec(PREC.unit, seq('(', ')')),

    return_expression: $ => prec.left(seq('return', optional($.expression))),

    throw_expression: $ => prec.left(seq('throw', $.expression)),

    while_expression: $ => prec.right(seq(
      'while',
      field('condition', $.parenthesized_expression),
      field('body', $.expression)
    )),

    do_while_expression: $ => prec.right(seq(
      'do',
      field('body', $.expression),
      'while',
      field('condition', $.parenthesized_expression)
    )),

    for_expression: $ => prec.right(seq(
      'for',
      field('enumerators', choice(
        seq("(", $.enumerators, ")"),
        seq("{", $.enumerators, "}")
      )),
      optional('yield'),
      field('body', $.expression)
    )),

    enumerators: $ => seq(
      sep1($._semicolon, $.enumerator),
      optional($._automatic_semicolon)
    ),

    enumerator: $ => seq(
      $._pattern,
      choice('<-', '='),
      $.expression,
      optional($.guard)
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
  return sep1(',', rule)
}

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}
