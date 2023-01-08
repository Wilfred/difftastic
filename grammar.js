const PREC = {
  control: 1,
  stable_type_id: 2,
  lambda: 2,
  binding_decl: 2,
  while: 2,
  binding_def: 3,
  assign: 3,
  stable_id: 4,
  unit: 4,
  ascription: 4,
  postfix: 5,
  infix: 6,
  new: 7,
  prefix: 7,
  compound: 7,
  call: 8,
  field: 8,
  end_marker: 9,
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
    $._indent,
    $._interpolated_string_middle,
    $._interpolated_string_end,
    $._interpolated_multiline_string_middle,
    $._interpolated_multiline_string_end,
    $._outdent,
    $._simple_multiline_string,
    $._simple_string,
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
    [$.if_expression, $.expression],
    [$.while_expression, $.expression],
    [$.for_expression, $.infix_expression],
    [$._indentable_expression, $.do_while_expression],
  ],

  word: $ => $._plainid,

  rules: {
    compilation_unit: $ => repeat($._top_level_definition),

    _top_level_definition: $ => choice(
      $.package_clause,
      $.package_object,
      $._definition,
      $._end_marker,
    ),

    _definition: $ => choice(
      $.given_definition,
      $.class_definition,
      $.import_declaration,
      $.object_definition,
      $.enum_definition,
      $.trait_definition,
      $.val_definition,
      $.val_declaration,
      $.var_definition,
      $.var_declaration,
      $.type_definition,
      $.function_definition,
      $.function_declaration,
    ),

    enum_definition: $ => seq(
      'enum',
      $._class_constructor,
      field('extend', optional($.extends_clause)),
      field('derive', optional($.derives_clause)),
      field('body', $.enum_body)
    ),

    _enum_block: $ => prec.left(seq(
      sep1($._semicolon, choice(
        $.enum_case_definitions,
        $.expression,
        $._definition
      )),
      optional($._semicolon),
    )),

    enum_body: $ => choice(
      prec.left(
        PREC.control,
        seq(
          ':', 
          $._indent, 
          $._enum_block, 
          $._outdent
        )
      ),
      seq(
        '{',
        // TODO: self type
        optional($._enum_block),
        '}'
      )
    ),

    enum_case_definitions: $ => seq(
      'case',
      choice(
        commaSep1($.simple_enum_case),
        $.full_enum_case
      )
    ),

    simple_enum_case: $ => field('name', $.identifier),

    full_enum_case: $ => seq(field('name', $.identifier), $._extended_enum_def),

    _extended_enum_def: $ => seq(
      field('type_parameters', optional($.type_parameters)),
      field('class_parameters', repeat1($.class_parameters)),
      field('extend', optional($.extends_clause))
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

    class_definition: $ => prec.left(seq(
      repeat($.annotation),
      optional($.modifiers),
      optional('case'),
      'class',
      $._class_constructor,
      field('extend', optional($.extends_clause)),
      field('body', optional($.template_body))
    )),

    /**
     * ClassConstr       ::=  [ClsTypeParamClause] [ConstrMods] ClsParamClauses
     */
    _class_constructor: $ => prec.right(seq(
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      optional($.access_modifier),
      field('class_parameters', repeat($.class_parameters)),
    )),

    trait_definition: $ => prec.left(seq(
      repeat($.annotation),
       optional($.modifiers),
      'trait',
      $._class_constructor,
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
      prec.left(PREC.control, seq(
        ':',
        // TODO: self type
        $._indent,
        $._block,
        $._outdent,
      )),
      seq(
        '{',
        // TODO: self type
        optional($._block),
        '}',
      ),
    ),

    /*
     * WithTemplateBody  ::=  <<< [SelfType] TemplateStat {semi TemplateStat} >>>
     */
    with_template_body: $ => prec.left(PREC.control, seq(
      // TODO: self type
      $._indent,
      $._block,
      $._outdent,
    )),

    _end_marker: $ => prec.left(PREC.end_marker, seq(
      'end',
      choice(
        'if',
        'while',
        'for',
        'match',
        'try',
        'new',
        'this',
        'given',
        'extension',
        'val',
        alias($.identifier, '_end_ident'),
      ),
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
      field('value', $._indentable_expression)
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
      field('value', $._indentable_expression)
    )),

    _start_var: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'var',
    ),

    type_definition: $ => prec.left(seq(
      repeat($.annotation),
      optional($.modifiers),
      optional($.opaque_modifier),
      'type',
      $._type_constructor,
      '=',
      field('type', $._type)
    )),

    // Created for memory-usage optimization during codegen.
    _type_constructor: $ => prec.left(seq(
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameters)),
      field('bound', optional($.upper_bound)),
      field('bound', optional($.lower_bound)),
    )),

    function_definition: $ => seq(
      repeat($.annotation),
      optional($.modifiers),
      'def',
      $._function_constructor,
      choice(
        seq('=', field('body', $._indentable_expression)),
        field('body', $.block)
      )
    ),

    function_declaration: $ => prec.left(seq(
      repeat($.annotation),
      optional($.modifiers),
      'def',
      $._function_constructor,
    )),

    // Created for memory-usage optimization during codegen.
    _function_constructor: $ => prec.left(seq(
      field('name', choice($.identifier, $.operator_identifier)),
      field('type_parameters', optional($.type_parameters)),
      field('parameters', repeat($.parameters)),
      optional(seq(':', field('return_type', $._type))),
    )),

    opaque_modifier: $ => 'opaque',

    /**
     * GivenDef          ::=  [GivenSig] (AnnotType ['=' Expr] | StructuralInstance)
     * GivenSig          ::=  [id] [DefTypeParamClause] {UsingParamClause} ':'
     */
    given_definition: $ => prec.left(seq(
      repeat($.annotation),
      optional($.modifiers),
      'given',
      $._function_constructor,
      ':',
      choice(
        field('return_type', $._structural_instance),
        seq(
          field('return_type', $._annotated_type),
          '=',
          field('body', $.expression),
        )
      ),
    )),

    /**
     * StructuralInstance ::=  ConstrApp {'with' ConstrApp} ['with' WithTemplateBody]
     */
    _structural_instance: $ => seq(
      choice(
        $._annotated_type,
        $.compound_type,
      ),
      'with',
      field('body', $.with_template_body),
    ),

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

    derives_clause: $ => seq(
      'derives',
      commaSep1(field('type', $._type_identifier))
    ),

    class_parameters: $ => prec(1, seq(
      '(',
      optional(choice('implicit', 'using')),
      commaSep($.class_parameter),
      ')'
    )),

    parameters: $ => seq(
      '(',
      optional(choice('implicit', 'using')),
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
        $._definition,
        $._end_marker,
      )),
      optional($._semicolon),
    )),

    _indentable_expression: $ => choice(
      $.indented_block,
      $.indented_cases,
      $.expression,
    ),

    block: $ => seq(
      '{',
      optional($._block),
      '}'
    ),

    indented_block: $ => prec.left(PREC.control, seq(
      $._indent,
      $._block,
      $._outdent,
      optional($._end_marker),
    )),

    indented_cases: $ => prec.left(PREC.end_marker, seq(
      $._indent,
      repeat1($.case_clause),
      $._outdent,
    )),

    // ---------------------------------------------------------------
    // Types

    _type: $ => choice(
      $.function_type,
      $.compound_type,
      $.infix_type,
      $._annotated_type,
      $.literal_type
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
      $.assignment_expression,
      $.lambda_expression,
      $.postfix_expression,
      $.ascription_expression,
      $.infix_expression,
      $.prefix_expression,
      $.tuple_expression,
      $.case_block,
      $.return_expression,
      $.throw_expression,
      $.while_expression,
      $.do_while_expression,
      $.for_expression,
      $.identifier,
      $.unit,
      $.block,
      $.field_expression,
      $.parenthesized_expression,
      $.interpolated_string_expression,
      $.literal,
      $.instance_expression,
      $.wildcard,
      $.generic_function,
    ),

    lambda_expression: $ => prec.right(PREC.lambda, seq(
      choice(
          $.bindings,
          $.identifier,
          $.wildcard,
      ),
      '=>',
      $._block,
    )),

    if_expression: $ => prec.right(PREC.control, seq(
      'if',
      field('condition', choice(
        $.parenthesized_expression,
        seq($._indentable_expression, 'then'),
      )),
      field('consequence', $._indentable_expression),
      optional(seq(
        'else',
        field('alternative', $._indentable_expression),
      )),
    )),

    /*
     *   MatchClause       ::=  'match' <<< CaseClauses >>>
     */
    match_expression: $ => prec.left(PREC.postfix, seq(
      field('value', $.expression),
      'match',
      field('body', choice($.case_block, $.indented_cases))
    )),

    try_expression: $ => prec.right(PREC.control, seq(
      'try',
      field('body', $._indentable_expression),
      optional($.catch_clause),
      optional($.finally_clause)
    )),

    /*
     *   Catches           ::=  'catch' (Expr | ExprCaseClause)
     */
    catch_clause: $ => prec.right(seq('catch', $._indentable_expression)),

    finally_clause: $ => prec.right(seq('finally', $._indentable_expression)),

    binding: $ => prec.dynamic(PREC.binding_decl, seq(
      field('name', $.identifier),
      optional(seq(':', field('type', $._param_type))),
    )),

    bindings: $ => seq(
      '(',
      commaSep($.binding),
      ')',
    ),

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
    _plainid: $ => /[a-zA-Z_\\$][\w\\$]*/,
    _backquoted_id: $=> /`[^\n`]+`/,
    identifier: $ => choice(
      $._plainid, 
      $._backquoted_id
    ),

    wildcard: $ => '_',

    operator_identifier: $ => /[^\s\w\(\)\[\]\{\}'"`\.;,]+/,

    _non_null_literal: $ => 
      choice(
        $.integer_literal,
        $.floating_point_literal,
        $.boolean_literal,
        $.character_literal,
        $.symbol_literal,
        $.string
      ),

    literal_type: $ => $._non_null_literal,

    literal: $ => choice(
      $._non_null_literal,
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

    /*
     *   Expr1             ::=  'while' '(' Expr ')' {nl} Expr
     *                       |  'while' Expr 'do' Expr
     */
    while_expression: $ => prec(PREC.while, choice(
      prec.right(seq(
        'while',
        field('condition', $.parenthesized_expression),
        field('body', $.expression)
      )),
      prec.right(seq(
        'while',
        field('condition', seq($._indentable_expression, 'do')),
        field('body', $._indentable_expression)
      )),
    )),

    do_while_expression: $ => prec.right(seq(
      'do',
      field('body', $.expression),
      'while',
      field('condition', $.parenthesized_expression)
    )),

    /*
     *  ForExpr           ::=  'for' '(' Enumerators0 ')' {nl} ['do' | 'yield'] Expr
     *                      |  'for' '{' Enumerators0 '}' {nl} ['do' | 'yield'] Expr
     *                      |  'for'     Enumerators0          ('do' | 'yield') Expr
     */
    for_expression: $ => choice(
      prec.right(PREC.control, seq(
        'for',
        field('enumerators', choice(
          seq("(", $.enumerators, ")"),
          seq("{", $.enumerators, "}"),
        )),
        choice(
          seq(field('body', $.expression)),
          seq('yield', field('body', $._indentable_expression)),
        ),
      )),
      prec.right(PREC.control, seq(
        'for',
        field('enumerators', $.enumerators),
        choice(
          seq('do', field('body', $._indentable_expression)),
          seq('yield', field('body', $._indentable_expression)),
        ),
      )),
    ),

    enumerators: $ => choice(
      seq(
        sep1($._semicolon, $.enumerator),
        optional($._automatic_semicolon)
      ),
      seq(
        $._indent,
        sep1($._semicolon, $.enumerator),
        optional($._automatic_semicolon),
        $._outdent,
      ),
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
