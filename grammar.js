const PREC = {
  DOT: 17,
  SELECT: 16,
  POSTFIX: 16,
  PREFIX: 15,
  UNARY: 15,
  CAST: 14,
  MULT: 13,
  ADD: 12,
  SHIFT: 11,
  REL: 10,
  EQUAL: 9,
  AND: 8,
  XOR: 7,
  OR: 6,
  LOGAND: 5,
  LOGOR: 4,
  COND: 3,
  ASSIGN: 2,
  SEQ: 1
};

module.exports = grammar({
  name: 'c_sharp',

  extras: $ => [
    $.comment,
    /[\s\u00A0\uFEFF\u3000]+/,
    $.preprocessor_call
  ],

  supertypes: $ => [
    $._declaration,
    $._expression,
    $._statement,
    $._type,
  ],

  externals: $ => [
    $._preproc_directive_end,
  ],

  conflicts: $ => [
    [$.block, $.initializer_expression],

    [$.element_access_expression, $.enum_member_declaration],

    [$.event_declaration, $.variable_declarator],

    [$.nullable_type, $.binary_expression],

    [$._name, $._expression],
    [$._simple_name, $.type_parameter],
    [$._simple_name, $.generic_name],
    [$._simple_name, $.constructor_declaration],

    [$.qualified_name, $.explicit_interface_specifier],
    [$.qualified_name, $.member_access_expression],

    [$.from_clause, $._reserved_identifier],

    [$._type, $.array_creation_expression],
    [$._type, $.stack_alloc_array_creation_expression],

    [$.parameter_modifier, $.this_expression],
    [$.parameter, $._simple_name],
    [$.parameter, $.tuple_element, $.declaration_expression],
    [$.tuple_element, $.variable_declarator],
  ],

  inline: $ => [
    $.return_type,
    $._identifier_or_global,
  ],

  word: $ => $.identifier,

  rules: {
    // Intentionally deviates from spec so that we can syntax highlight fragments of code
    compilation_unit: $ => repeat($._declaration),

    _declaration: $ => choice(
      $.global_attribute_list,
      $.class_declaration,
      $.constructor_declaration,
      $.conversion_operator_declaration,
      $.delegate_declaration,
      $.destructor_declaration,
      $.enum_declaration,
      $.event_declaration,
      $.extern_alias_directive,
      $.event_field_declaration,
      $.field_declaration,
      $.indexer_declaration,
      $.interface_declaration,
      $.method_declaration,
      $.namespace_declaration,
      $.operator_declaration,
      $.property_declaration,
      $.struct_declaration,
      $.using_directive,
    ),

    extern_alias_directive: $ => seq('extern', 'alias', $.identifier, ';'),

    using_directive: $ => seq(
      'using',
      optional(choice(
        'static',
        $.name_equals
      )),
      $._name,
      ';'
    ),

    name_equals: $ => prec(1, seq($._identifier_or_global, '=')),

    _name: $ => choice(
      $.alias_qualified_name,
      $.qualified_name,
      $._simple_name
    ),

    alias_qualified_name: $ => seq($._identifier_or_global, '::', $._simple_name),

    _simple_name: $ => choice(
      $.generic_name,
      $._identifier_or_global
    ),

    generic_name: $ => seq($.identifier, $.type_argument_list),

    // Intentionally different from Roslyn to avoid non-matching
    // omitted_type_argument in a lot of unnecessary places.
    type_argument_list: $ => seq(
      '<',
      choice(
        repeat(','),
        commaSep1($._type),
      ),
      '>'
    ),

    qualified_name: $ => prec(PREC.DOT, seq($._name, '.', $._simple_name)),

    attribute_list: $ => seq('[', optional($.attribute_target_specifier), commaSep1($.attribute), ']'),

    attribute_target_specifier: $ => seq(
      choice('field', 'event', 'method', 'param', 'property', 'return', 'type'),
      ':'
    ),

    attribute: $ => seq(
      field('name', $._name),
      optional($.attribute_argument_list)
    ),

    attribute_argument_list: $ => seq(
      '(',
      commaSep($.attribute_argument),
      ')'
    ),

    attribute_argument: $ => seq(
      optional(choice($.name_equals,$.name_colon)),
      $._expression
    ),

    global_attribute_list: $ => seq(
      '[',
      choice('assembly', 'module'),
      ':',
      commaSep($.attribute),
      ']'
    ),

    name_colon: $ => seq($._identifier_or_global, ':'),

    event_field_declaration: $ => prec.dynamic(1, seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'event',
      $.variable_declaration,
      ';'
    )),

    modifier: $ => prec.right(choice(
      'abstract',
      'async',
      'const',
      'extern',
      'fixed',
      'internal',
      'new',
      'override',
      'partial',
      'private',
      'protected',
      'public',
      'readonly',
      'ref',
      'sealed',
      'static',
      'unsafe',
      'virtual',
      'volatile'
    )),

    variable_declaration: $ => seq(
      field('type', $._type),
      commaSep1($.variable_declarator)
    ),

    variable_declarator: $ => seq(
      choice($.identifier, $.tuple_pattern),
      optional($.bracketed_argument_list),
      optional($.equals_value_clause)
    ),

    bracketed_argument_list: $ => seq(
      '[',
      commaSep1($.argument),
      ']'
    ),

    tuple_pattern: $ => seq(
      '(',
      commaSep1(choice($.identifier, $.discard)),
      ')'
    ),

    argument: $ => prec(1, seq(
      optional($.name_colon),
      optional(choice('ref', 'out', 'in')),
      choice(
        $._expression,
        $.declaration_expression
      )
    )),

    equals_value_clause: $ => seq('=', $._expression),

    field_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      $.variable_declaration,
      ';'
    ),

    constructor_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      optional($.constructor_initializer),
      $._function_body
    ),

    // Params varies quite a lot from grammar.txt as that handles neither 'out' nor 'params' or arrays...

    parameter_list: $ => seq(
      '(',
      optional($._formal_parameter_list),
      ')'
    ),

    _formal_parameter_list: $ => commaSep1(choice(
      $.parameter,
      $.parameter_array
    )),

    parameter: $ => seq(
      repeat($.attribute_list),
      optional($.parameter_modifier),
      optional(field('type', $._type)),
      field('name', $.identifier),
      optional($.equals_value_clause)
    ),

    parameter_modifier: $ => prec.right(choice('ref', 'out', 'this', 'in')),

    parameter_array: $ => seq(
      repeat($.attribute_list),
      'params',
      $.array_type,
      $.identifier
    ),

    constructor_initializer: $ => seq(
      ':',
      choice('base', 'this'),
      $.argument_list
    ),

    argument_list: $ => seq('(', commaSep($.argument), ')'),

    block: $ => seq('{', repeat($._statement), '}'),

    arrow_expression_clause: $ => seq('=>', $._expression),

    conversion_operator_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      choice(
        'implicit',
        'explicit'
      ),
      'operator',
      field('type', $._type),
      field('parameters', $.parameter_list),
      $._function_body,
    ),

    _function_body: $ => choice(
      field('body', $.block),
      seq(field('body', $.arrow_expression_clause), ';'),
      ';' // Only applies to interfaces
    ),

    destructor_declaration: $ => seq(
      repeat($.attribute_list),
      optional('extern'),
      '~',
      $.identifier,
      $.parameter_list,
      $._function_body
    ),

    method_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      field('type', $.return_type),
      optional($.explicit_interface_specifier),
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('parameters', $.parameter_list),
      repeat($.type_parameter_constraints_clause),
      $._function_body,
    ),

    explicit_interface_specifier: $ => prec(PREC.DOT, seq($._name, '.')),

    type_parameter_list: $ => seq('<', commaSep1($.type_parameter), '>'),

    type_parameter: $ => seq(
      optional($.attribute_list),
      optional(choice('in', 'out')),
      $.identifier
    ),

    type_parameter_constraints_clause: $ => seq(
      'where', $._identifier_or_global, ':', commaSep1($.type_parameter_constraint)
    ),

    type_parameter_constraint: $ => choice(
      'class',
      'struct',
      'unmanaged',
      $.constructor_constraint,
      $.type_constraint
    ),

    constructor_constraint: $ => seq('new', '(', ')'),

    type_constraint: $ => $._type,

    operator_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      field('type', $._type),
      'operator',
      field('operator', $._overloadable_operator),
      field('parameters', $.parameter_list),
      $._function_body,
    ),

    _overloadable_operator: $ => choice(
      '!',
      '~',
      '++',
      '--',
      'true',
      'false',
      '+', '-',
      '*', '/',
      '%', '^',
      '|', '&',
      '<<', '>>',
      '==', '!=',
      '>', '<',
      '>=', '<='
    ),

    event_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'event',
      field('type', $._type),
      optional($.explicit_interface_specifier),
      field('name', $.identifier),
      choice(
        field('accessors', $.accessor_list),
        ';'
      )
    ),

    accessor_list: $ => seq(
      '{',
      repeat($.accessor_declaration),
      '}'
    ),

    accessor_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      choice('get', 'set', 'add', 'remove', $.identifier),
      $._function_body
    ),

    indexer_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      field('type', $._type),
      optional($.explicit_interface_specifier),
      'this',
      field('parameters', $.bracketed_parameter_list),
      choice(
        field('accessors', $.accessor_list),
        seq(field('value', $.arrow_expression_clause), ';')
      )
    ),

    bracketed_parameter_list: $ => seq('[', commaSep1($.parameter), ']'),

    property_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      field('type', $._type),
      optional($.explicit_interface_specifier),
      field('name', $.identifier),
      choice(
        seq(
          field('accessors', $.accessor_list),
          optional(seq('=', field('value', $._expression), ';'))
        ), // grammar.txt does not allow bodyless properties.
        seq(
          field('value', $.arrow_expression_clause),
          ';'
        )
      ),
    ),

    enum_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'enum',
      field('name', $.identifier),
      field('bases', optional($.base_list)),
      field('body', $.enum_member_declaration_list),
      optional(';')
    ),

    base_list: $ => seq(':', commaSep1($._type)),

    enum_member_declaration_list: $ => seq(
      '{',
      commaSep($.enum_member_declaration),
      optional(','),
      '}',
    ),

    enum_member_declaration: $ => seq(
      repeat($.attribute_list),
      field('name', $.identifier),
      optional(seq('=', field('value', $._expression)))
    ),

    class_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'class',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('bases', optional($.base_list)),
      repeat($.type_parameter_constraints_clause),
      field('body', $.declaration_list),
      optional(';')
    ),

    declaration_list: $ => seq(
      '{',
      repeat($._declaration),
      '}'
    ),

    interface_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'interface',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('bases', optional($.base_list)),
      repeat($.type_parameter_constraints_clause),
      field('body', $.declaration_list),
      optional(';')
    ),

    struct_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'struct',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('bases', optional($.base_list)),
      repeat($.type_parameter_constraints_clause),
      field('body', $.declaration_list),
      optional(';')
    ),

    delegate_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'delegate',
      field('type', $.return_type),
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('parameters', $.parameter_list),
      repeat($.type_parameter_constraints_clause),
      ';'
    ),

    namespace_declaration: $ => seq(
      'namespace',
      field('name', $._name),
      field('body', $.declaration_list),
      optional(';')
    ),

    _type: $ => choice(
      $.implicit_type,
      $.array_type,
      $._name,
      $.nullable_type,
      $.pointer_type,
      $.predefined_type,
      $.tuple_type,  // TODO: Conflicts with everything
    ),

    implicit_type: $ => 'var',

    array_type: $ => prec(PREC.POSTFIX, seq(
      field('type', $._type),
      field('rank', $.array_rank_specifier)
    )),

    // grammar.txt marks this non-optional and includes omitted_array_size_expression in
    // expression but we can't match empty rules.
    array_rank_specifier: $ => seq('[', commaSep(optional($._expression)), ']'),

    // When used in a nullable type, the '?' operator binds tighter than the
    // binary operators `as` and `is`. But in a conditional expression, the `?`
    // binds *looser*. This weird double precedence is required in order to
    // preserve the conflict, so that `?` can be used in both ways, depending
    // on what follows.
    nullable_type: $ => choice(
      prec(PREC.EQUAL + 1, seq($._type, '?')),
      prec(PREC.COND - 1, seq($._type, '?'))
    ),

    pointer_type: $ => prec(PREC.POSTFIX, seq($._type, '*')),

    predefined_type: $ => token(choice(
      'bool',
      'byte',
      'char',
      'decimal',
      'double',
      'float',
      'int',
      'long',
      'object',
      'sbyte',
      'short',
      'string',
      'uint',
      'ulong',
      'ushort',
      // void is handled in return_type for better matching
    )),

    ref_type: $ => seq(
      'ref',
      optional('readonly'),
      $._type
    ),

    tuple_type: $ => seq(
      '(',
      $.tuple_element,
      repeat1(seq(
        ',',
        $.tuple_element,
      )),
      ')'
    ),

    tuple_element: $ => seq(
      field('type', $._type),
      field('name', optional($.identifier))
    ),

    _statement: $ => choice(
      $.block,
      $.break_statement,
      $.checked_statement,
      $.continue_statement,
      $.do_statement,
      $.empty_statement,
      $.expression_statement,
      $.fixed_statement,
      $.for_each_statement,
      $.for_statement,
      $.goto_statement,
      $.if_statement,
      $.labeled_statement,
      $.local_declaration_statement,
      $.local_function_statement,
      $.lock_statement,
      $.return_statement,
      $.switch_statement,
      $.throw_statement,
      $.try_statement,
      $.unsafe_statement,
      $.using_statement,
      $.while_statement,
      $.yield_statement,
    ),

    break_statement: $ => seq('break', ';'),

    checked_statement: $ => seq(choice('checked', 'unchecked'), $.block),

    continue_statement: $ => seq('continue', ';'),

    do_statement: $ => seq('do', $._statement, 'while', '(', $._expression, ')', ';'),

    empty_statement: $ => ';',

    expression_statement: $ => seq($._expression, ';'),

    fixed_statement: $ => seq('fixed', '(', $.variable_declaration, ')', $._statement),

    for_statement: $ => seq(
      'for',
      '(',
      field('initializer', optional(choice($.variable_declaration, commaSep1($._expression)))),
      ';',
      field('condition', optional($._expression)),
      ';',
      field('update', optional(commaSep1($._expression))),
      ')',
      field('body', $._statement)
    ),

    // Combines for_each_statement and for_each_variable_statement from grammar.txt
    for_each_statement: $ => seq(
      optional('await'),
      'foreach',
      '(',
      choice(
        seq(
          field('type', $._type),
          field('left', $.identifier)
        ), // for_each_statement
        field('left', $._expression), // for_each_variable_statement
      ),
      'in',
      field('right', $._expression),
      ')',
      field('body', $._statement)
    ),

    // grammar.txt one doesn't seem to make sense so we do this instead
    goto_statement: $ => seq(
      'goto',
      choice(
        alias($.identifier, $.label_name),
        seq('case', $._expression),
        'default'
      ),
      ';'
    ),

    if_statement: $ => prec.right(seq(
      'if',
      '(',
      field('condition', $._expression),
      ')',
      field('consequence', $._statement),
      optional(seq(
        'else',
        field('alternative', $._statement)
      ))
    )),

    labeled_statement: $ => seq(
      alias($.identifier, $.label_name),
      ':',
      $._statement
    ),

    local_declaration_statement: $ => seq(
      optional('await'),
      optional('using'),
      repeat($.modifier),
      $.variable_declaration,
      ';'
    ),

    local_function_statement: $ => seq(
      repeat($.modifier),
      field('type', $.return_type),
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('parameters', $.parameter_list),
      repeat($.type_parameter_constraints_clause),
      $._function_body
    ),

    lock_statement: $ => seq('lock', '(', $._expression, ')', $._statement),

    return_statement: $ => seq('return', optional($._expression), ';'),

    switch_statement: $ => seq(
      'switch',
      '(',
      field('value', $._expression),
      ')',
      field('body', $.switch_body)
    ),

    switch_body: $ => seq(
      '{',
      repeat($.switch_section),
      '}'
    ),

    switch_section: $ => prec.left(seq(
      repeat1(choice( // switch_label
        $.case_switch_label,
        $.case_pattern_switch_label,
        $.default_switch_label
      )),
      repeat1($._statement)
    )),

    case_pattern_switch_label: $ => seq(
      'case',
      $._pattern,
      optional($.when_clause),
      ':'
    ),

    _pattern: $ => choice(
      $.constant_pattern,
      $.declaration_pattern,
      $.discard,
//      $.recursive_pattern,
      $.var_pattern
    ),

    constant_pattern: $ => prec.right($._expression),

    declaration_pattern: $ => seq(
      field('type', $._type),
      $._variable_designation
    ),

    _variable_designation: $ => choice(
      $.discard,
      $.parenthesized_variable_designation,
      $.identifier
    ),

    discard: $ => '_',

    parenthesized_variable_designation: $ => seq(
      '(',
      commaSep($._variable_designation),
      ')'
    ),

    // TODO: Matches everything as optional which won't work.
    // Figure out valid combinations with at least one item to remove ambiguity.
    recursive_pattern: $ => seq(
      optional($._type),
      optional($.positional_pattern_clause),
      optional($.property_pattern_clause),
      optional($._variable_designation)
    ),

    positional_pattern_clause: $ => seq('(', commaSep($.subpattern), ')'),

    subpattern: $ => seq(
      optional($.name_colon),
      $._pattern
    ),

    property_pattern_clause: $ => seq(
      '{',
      commaSep($.subpattern),
      '}'
    ),

    var_pattern: $ => prec(1, seq('var', $._variable_designation)),

    when_clause: $ => seq('when', $._expression),

    case_switch_label: $ => prec.left(1, seq('case', $._expression, ':')),

    default_switch_label: $ => prec.left(1, seq('default', ':')),

    throw_statement: $ => seq('throw', optional($._expression), ';'),

    try_statement: $ => seq(
      'try',
      field('body', $.block),
      repeat($.catch_clause),
      optional($.finally_clause),
    ),

    catch_clause: $ => seq(
      'catch',
      optional($.catch_declaration),
      optional($.catch_filter_clause),
      field('body', $.block)
    ),

    catch_declaration: $ => seq(
      '(',
      field('type', $._type),
      field('name', optional($.identifier)),
      ')'
    ),

    catch_filter_clause: $ => seq('when', '(', $._expression, ')'),

    finally_clause: $ => seq('finally', $.block),

    unsafe_statement: $ => seq('unsafe', $.block),

    using_statement: $ => seq(
      optional('await'),
      'using',
      '(',
      choice($.variable_declaration, $._expression),
      ')',
      field('body', $._statement)
    ),

    while_statement: $ => seq('while', '(', $._expression, ')', $._statement),

    yield_statement: $ => seq(
      'yield',
      choice( // grammar.txt incorrectly allows "break expression", we do not.
        seq('return', $._expression),
        'break'
      ),
      ';'
    ),

    anonymous_method_expression: $ => seq(
      optional('async'),
      'delegate',
      optional($.parameter_list),
      $.block
    ),

    lambda_expression: $ => prec(-1, seq(
      optional('async'),
      choice($.parameter_list, $.identifier),
      '=>',
      field('body', choice($.block, $._expression))
    )),

    anonymous_object_creation_expression: $ => seq(
      'new',
      '{',
      commaSep($._anonymous_object_member_declarator),
      optional(','),
      '}'
    ),

    _anonymous_object_member_declarator: $ => choice(
      prec.dynamic(PREC.ASSIGN, seq($.name_equals, $._expression)),
      $._expression
    ),

    array_creation_expression: $ => seq(
      'new',
      $.array_type,
      optional($.initializer_expression)
    ),

    initializer_expression: $ => seq(
      '{',
      commaSep($._expression),
      optional(','),
      '}'
    ),

    assignment_expression: $ => prec.right(seq(
      field('left', $._expression),
      $.assignment_operator,
      field('right', $._expression)
    )),

    assignment_operator: $ => choice('=', '+=', '-=', '*=', '/=', '%=', '&=', '^=', '|=', '<<=', '>>=', '??='),

    await_expression: $ => prec.right(PREC.UNARY, seq('await', $._expression)),

    cast_expression: $ => prec.right(PREC.CAST, seq(
      '(',
      field('type', $._type),
      ')',
      field('value', $._expression)
    )),

    checked_expression: $ => choice(
      seq('checked', '(', $._expression, ')'),
      seq('unchecked', '(', $._expression, ')')
    ),

    conditional_access_expression: $ => prec.right(seq(
      field('condition', $._expression),
      '?',
      field('value', $._expression)
    )),

    conditional_expression: $ => prec.right(PREC.COND, seq(
      field('condition', $._expression),
      '?',
      field('consequence', $._expression),
      ':',
      field('alternative', $._expression)
    )),

    declaration_expression: $ => seq(
      field('type', $._type),
      field('name', $.identifier)
    ),

    default_expression: $ => prec.right(seq(
      'default',
      optional(seq(
        '(',
        field('type', $._type),
        ')'
      ))
    )),

    element_access_expression: $ => seq(
      field('expression', $._expression),
      field('subscript', $.bracketed_argument_list)
    ),

    element_binding_expression: $ => $.bracketed_argument_list,

    implicit_array_creation_expression: $ => seq(
      'new',
      '[',
      repeat(','),
      ']',
      $.initializer_expression
    ),

    implicit_stack_alloc_array_creation_expression: $ => seq(
      'stackalloc',
      '[',
      ']',
      $.initializer_expression
    ),

    base_expression: $ => 'base',

    this_expression: $ => 'this',

    interpolated_string_expression: $ => choice(
      seq('$"', repeat($._interpolated_string_content), '"'),
      seq('$@"', repeat($._interpolated_verbatim_string_content), '"'),
    ),

    _interpolated_string_content: $ => choice(
      $.interpolated_string_text,
      $.interpolation
    ),

    _interpolated_verbatim_string_content: $ => choice(
      $.interpolated_verbatim_string_text,
      $.interpolation
    ),

    interpolated_string_text: $ => choice(
      '{{',
      token.immediate(prec(1, /[^{"\\\n]+/)),
      $.escape_sequence
    ),

    interpolated_verbatim_string_text: $ => choice(/[^{"]+/, '""'),

    interpolation: $ => seq(
      '{',
      $._expression,
      optional($.interpolation_alignment_clause),
      optional($.interpolation_format_clause),
      '}'
    ),

    interpolation_alignment_clause: $ => seq(',', $._expression),

    interpolation_format_clause: $ => seq(':', /[^}"]+/),

    invocation_expression: $ => seq(
      field('function', $._expression),
      field('arguments', $.argument_list)
    ),

    is_pattern_expression: $ => prec.left(PREC.EQUAL, seq(
      field('expression', $._expression),
      'is',
      field('pattern', $._pattern)
    )),

    make_ref_expression: $ => seq(
      '__makeref',
      '(',
      $._expression,
      ')'
    ),

    member_access_expression: $ => prec(PREC.DOT, seq(
      field('expression', choice($._expression, $._type, $._name)),
      choice('.', '->'),
      field('name', $._simple_name)
    )),

    member_binding_expression: $ => seq(
      '.',
      $._simple_name,
    ),

    object_creation_expression: $ => prec.right(seq(
      'new',
      field('type', $._type),
      field('arguments', optional($.argument_list)),
      field('initializer', optional($.initializer_expression))
    )),

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    postfix_unary_expression: $ => prec.left(PREC.POSTFIX, choice(
      seq($._expression, '++'),
      seq($._expression, '--'),
      seq($._expression, '!')
    )),

    prefix_unary_expression: $ => prec.right(PREC.UNARY, choice(
      ...[
        '!',
        '&',
        '*',
        '+',
        '++',
        '-',
        '--',
        '^',
        '~'
      ].map(operator => seq(operator, $._expression)))),

    query_expression: $ => seq($.from_clause, $._query_body),

    from_clause: $ => seq(
      'from',
      optional($._type),
      $.identifier,
      'in',
      $._expression
    ),

    _query_body: $ => prec.right(seq(
      repeat($._query_clause), // grammar.txt is incorrect with '+'
      $._select_or_group_clause,
      optional($.query_continuation)
    )),

    _query_clause: $ => choice(
      $.from_clause,
      $.join_clause,
      $.let_clause,
      $.order_by_clause,
      $.where_clause
    ),

    join_clause: $ => seq(
      'join',
      optional($._type),
      $.identifier,
      'in',
      $._expression,
      'on',
      $._expression,
      'equals',
      $._expression,
      optional($.join_into_clause)
    ),

    join_into_clause: $ => seq('into', $.identifier),

    let_clause: $ => seq(
      'let',
      $.identifier,
      '=',
      $._expression
    ),

    order_by_clause: $ => seq(
      'orderby',
      commaSep1($._ordering)
    ),

    _ordering: $ => seq(
      $._expression,
      optional(choice('ascending', 'descending'))
    ),

    where_clause: $ => seq('where', $._expression),

    _select_or_group_clause: $ => choice(
      $.group_clause,
      $.select_clause
    ),

    group_clause: $ => prec.left(PREC.SELECT, seq(
      'group',
      $._expression,
      'by',
      $._expression
    )),

    select_clause: $ => prec.left(PREC.SELECT, seq('select', $._expression)),

    query_continuation: $ => seq('into', $.identifier, $._query_body),

    range_expression: $ => prec.right(seq(
      optional($._expression),
      '..',
      optional($._expression)
    )),

    ref_expression: $ => prec.right(seq('ref', $._expression)),

    ref_type_expression: $ => seq(
      '__reftype',
      '(',
      $._expression,
      ')'
    ),

    ref_value_expression: $ => seq(
      '__refvalue',
      '(',
      field('value', $._expression),
      ',',
      field('type', $._type),
      ')'
    ),

    size_of_expression: $ => seq(
      'sizeof',
      '(',
      $._type,
      ')'
    ),

    stack_alloc_array_creation_expression: $ => seq(
      'stackalloc',
      $.array_type,
      optional($.initializer_expression)
    ),

    switch_expression: $ => seq(
      $._expression,
      'switch',
      '{',
      commaSep($.switch_expression_arm),
      '}',
    ),

    switch_expression_arm: $ => seq(
      $._pattern,
      optional($.when_clause),
      '=>',
      $._expression
    ),

    throw_expression: $ => prec.right(seq('throw', $._expression)),

    tuple_expression: $ => seq(
      '(',
      $.argument,
      repeat1(seq(
        ',',
        $.argument,
      )),
      ')'
    ),

    type_of_expression: $ => seq('typeof', '(', $._type, ')'),

    // TODO: Expressions need work on precedence and conflicts.

    _expression: $ => choice(
      $.anonymous_method_expression,
      $.anonymous_object_creation_expression,
      $.array_creation_expression,
      $.assignment_expression,
      $.await_expression,
      $.base_expression,
      $.binary_expression,
      $.cast_expression,
      $.checked_expression,
      $.conditional_access_expression,
      $.conditional_expression,
      $.default_expression,
      $.element_access_expression,
      $.element_binding_expression,
      $.implicit_array_creation_expression,
      $.implicit_stack_alloc_array_creation_expression,
      $.initializer_expression,
      $.interpolated_string_expression,
      $.invocation_expression,
      $.is_pattern_expression,
      $.lambda_expression,
      $.make_ref_expression,
      $.member_access_expression,
      $.member_binding_expression,
      $.object_creation_expression,
      $.parenthesized_expression,
      $.postfix_unary_expression,
      $.prefix_unary_expression,
      $.query_expression,
      $.range_expression,
      $.ref_expression,
      $.ref_type_expression,
      $.ref_value_expression,
      $.size_of_expression,
      $.stack_alloc_array_creation_expression,
      $.switch_expression,
      $.this_expression,
      $.throw_expression,
      $.tuple_expression,
      $.type_of_expression,

      $._simple_name,
      alias($._reserved_identifier, $.identifier),
      $._literal
    ),

    binary_expression: $ => choice(
      ...[
        ['&&', PREC.LOGAND],
        ['||', PREC.LOGOR],
        ['>>', PREC.SHIFT],
        ['<<', PREC.SHIFT],
        ['&', PREC.AND],
        ['^', PREC.OR],
        ['|', PREC.OR],
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULT],
        ['/', PREC.MULT],
        ['%', PREC.MULT],
        ['<', PREC.REL],
        ['<=', PREC.REL],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
        ['>=', PREC.REL],
        ['>', PREC.REL],
        ['??', PREC.EQUAL],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ).concat(
        prec.left(PREC.EQUAL, seq(
          field('left', $._expression),
          field('operator', choice('is', 'as')),
          field('right', $._type)
        ))
      )
    ),

    identifier: $ => token(seq(optional('@'), /[a-zA-Z_][a-zA-Z_0-9]*/)), // identifier_token in Roslyn
    global: $ => 'global',
    _identifier_or_global: $ => choice($.global, $.identifier),

    // Literals - grammar.txt is useless here as it just refs to lexical specification

    _literal: $ => choice(
      $.null_literal,
      $.boolean_literal,
      $.character_literal,
      // Don't combine real and integer literals together
      $.real_literal,
      $.integer_literal,
      // Or strings and verbatim strings
      $.string_literal,
      $.verbatim_string_literal
    ),

    boolean_literal: $ => choice(
      'true',
      'false'
    ),

    character_literal: $ => seq(
      "'",
      choice(token.immediate(/[^'\\]/), $.escape_sequence),
      "'"
    ),

    escape_sequence: $ => token(choice(
      /\\x[0-9a-fA-F][0-9a-fA-F]?[0-9a-fA-F]?[0-9a-fA-F]?/,
      /\\u[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
      /\\U[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
      /\\[^xuU]/,
    )),

    integer_literal: $ => token(seq(
      choice(
        (/[0-9_]+/), // Decimal
        (/0[xX][0-9a-fA-F_]+/), // Hex
        (/0[bB][01_]+/) // Binary
      ),
      optional(/u|U|l|L|ul|UL|uL|Ul|lu|LU|Lu|lU/)
    )),

    null_literal: $ => 'null',

    real_literal: $ => {
      const suffix = /[fFdDmM]/;
      const exponent = /[eE][+-]?[0-9_]+/;
      return token(choice(
        seq(
          (/[0-9_]+/),
          '.',
          (/[0-9_]+/),
          optional(exponent),
          optional(suffix)
        ),
        seq(
          '.',
          (/[0-9_]+/),
          optional(exponent),
          optional(suffix)
        ),
        seq(
          (/[0-9_]+/),
          exponent,
          optional(suffix)
        ),
        seq(
          (/[0-9_]+/),
          suffix
        )
      ))
    },

    string_literal: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^"\\\n]+/)),
        $.escape_sequence
      )),
      '"'
    ),

    verbatim_string_literal: $ => token(seq(
      '@"',
      repeat(choice(
        /[^"]/,
        '""',
      )),
      '"'
    )),

    // Comments

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        repeat(choice(
          /[^*]/,
          /\*[^/]/
        )),
        '*/'
      )
    )),

    // Custom non-Roslyn additions beyond this point that will not sync up with grammar.txt
    _reserved_identifier: $ => choice(
      'from'
    ),

    // We use this instead of type so 'void' is only treated as type in the right contexts
    return_type: $ => choice($._type, $.void_keyword),
    void_keyword: $ => 'void',

    preprocessor_call: $ => seq(
      $.preprocessor_directive,
      repeat(choice(
        $.identifier,
        $._literal,
        token(prec(-1, /[^\s]+/))
      )),
      $._preproc_directive_end
    ),

    preprocessor_directive: $ => /#[a-z]\w*/,
  }
})

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function commaSep1(rule) {
  return seq(
    rule,
    repeat(seq(
      ',',
      rule
    ))
  )
}
