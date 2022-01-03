const PREC = {
  DOT: 18,
  INVOCATION: 18,
  POSTFIX: 18,
  PREFIX: 17,
  UNARY: 17,
  CAST: 17,
  RANGE: 16,
  SWITCH: 15,
  WITH: 14,
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
  COALESCING: 3,
  COND: 2,
  ASSIGN: 1,
  SELECT: 0,
};

const decimalDigitSequence = /([0-9][0-9_]*[0-9]|[0-9])/;

module.exports = grammar({
  name: 'c_sharp',

  extras: $ => [
    $.comment,
    /[\s\u00A0\uFEFF\u3000]+/,
    $._preprocessor_call
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

    [$.event_declaration, $.variable_declarator],

    [$.nullable_type, $.as_expression],
    [$.nullable_type, $.is_expression, $.type_pattern],
    [$.nullable_type, $.as_expression, $.type_pattern],

    [$.type_pattern, $.declaration_pattern],
    [$.type_pattern, $.declaration_pattern, $.recursive_pattern],
    [$.type_pattern, $.tuple_element],

    [$._name, $._expression],
    [$._simple_name, $.type_parameter],
    [$._simple_name, $.generic_name],
    [$._simple_name, $.constructor_declaration],
    [$._simple_name, $.name_colon],

    [$.qualified_name, $.explicit_interface_specifier],
    [$.qualified_name, $.member_access_expression],

    [$._contextual_keywords, $.from_clause],
    [$._contextual_keywords, $.global],
    [$._contextual_keywords, $.accessor_declaration],
    [$._contextual_keywords, $.type_parameter_constraint],

    [$._type, $.array_creation_expression],
    [$._type, $.stack_alloc_array_creation_expression],
    [$._type, $._nullable_base_type],
    [$._type, $._nullable_base_type, $.array_creation_expression],
    [$._nullable_base_type, $.stack_alloc_array_creation_expression],

    [$.parameter, $.this_expression],
    [$.parameter, $._simple_name],
    [$.parameter, $.tuple_element],
    [$.parameter, $.tuple_element, $.declaration_expression],
    [$.parameter, $._pattern],
    [$.parameter, $.declaration_expression],

    [$.tuple_element],
    [$.tuple_element, $.declaration_expression],
    [$.tuple_element, $.variable_declarator],

    [$.array_creation_expression, $.element_access_expression],

    [$.constant_pattern, $._name],
    [$.constant_pattern, $._name, $._expression],
    [$.constant_pattern, $._expression],
  ],

  inline: $ => [
    $.return_type,
    $._identifier_or_global,
  ],

  word: $ => $._identifier_token,

  rules: {
    compilation_unit: $ => seq(
      repeat($.extern_alias_directive),
      repeat($.using_directive),
      repeat($.global_attribute_list),
      choice(
        seq(repeat($.global_statement), repeat($._namespace_member_declaration)),
        $.file_scoped_namespace_declaration
      )
    ),

    global_statement: $ => $._statement,

    _declaration: $ => choice(
      $.class_declaration,
      $.constructor_declaration,
      $.conversion_operator_declaration,
      $.delegate_declaration,
      $.destructor_declaration,
      $.enum_declaration,
      $.event_declaration,
      $.event_field_declaration,
      $.field_declaration,
      $.indexer_declaration,
      $.interface_declaration,
      $.method_declaration,
      $.namespace_declaration,
      $.operator_declaration,
      $.property_declaration,
      $.record_declaration,
      $.record_struct_declaration,
      $.struct_declaration,
      $.using_directive,
    ),

    _namespace_member_declaration: $ => choice(
      $.namespace_declaration,
      $._type_declaration
    ),

    _type_declaration: $ => choice(
      $.class_declaration,
      $.struct_declaration,
      $.interface_declaration,
      $.enum_declaration,
      $.delegate_declaration,
      $.record_declaration,
      $.record_struct_declaration
    ),

    extern_alias_directive: $ => seq('extern', 'alias', $.identifier, ';'),

    using_directive: $ => seq(
      optional('global'),
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

    attribute_list: $ => seq(
      '[',
      optional($.attribute_target_specifier),
      commaSep1($.attribute),
      optional(','),
      ']'
    ),

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
      optional(choice($.name_equals, $.name_colon)),
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
      prec(1, 'ref'), //make sure that 'ref' is treated as a modifier for local variable declarations instead of as a ref expression
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
      commaSep1(choice($.identifier, $.discard, $.tuple_pattern)),
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
      $._parameter_array
    )),

    parameter: $ => seq(
      repeat($.attribute_list),
      optional(alias(choice('ref', 'out', 'this', 'in'), $.parameter_modifier)),
      optional(field('type', $._type)),
      field('name', $.identifier),
      optional($.equals_value_clause)
    ),

    parameter_modifier: $ => choice('ref', 'out', 'this', 'in'),

    _parameter_array: $ => seq(
      repeat($.attribute_list),
      'params',
      choice($.array_type, $.nullable_type),
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
      repeat($.attribute_list),
      optional(choice('in', 'out')),
      $.identifier
    ),

    type_parameter_constraints_clause: $ => seq(
      'where',
      field('target', $._identifier_or_global),
      ':',
      field('constraints', commaSep1($.type_parameter_constraint)),
    ),

    type_parameter_constraint: $ => choice(
      seq('class', optional('?')),
      'struct',
      'notnull',
      'unmanaged',
      $.constructor_constraint,
      $.type_constraint
    ),

    constructor_constraint: $ => seq('new', '(', ')'),

    type_constraint: $ => field('type', $._type),

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
      choice('get', 'set', 'add', 'remove', 'init', $.identifier),
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

    bracketed_parameter_list: $ => seq('[', $._formal_parameter_list, ']'),

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

    record_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'record',
      optional('class'),
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('parameters', optional($.parameter_list)),
      field('bases', optional(alias($.record_base, $.base_list))),
      repeat($.type_parameter_constraints_clause),
      field('body', $._record_body),
    ),

    record_struct_declaration: $ => seq(
      repeat($.attribute_list),
      repeat($.modifier),
      'record',
      'struct',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('parameters', optional($.parameter_list)),
      field('bases', optional(alias($.record_base, $.base_list))),
      repeat($.type_parameter_constraints_clause),
      field('body', $._record_body),
    ),

    record_base: $ => choice(
      seq(':', commaSep1($.identifier)),
      seq(':', $.primary_constructor_base_type, optional(seq(',', commaSep1($.identifier)))),
    ),

    primary_constructor_base_type: $ => seq(
      $.identifier,
      $.argument_list
    ),

    _record_body: $ => choice(
      $.declaration_list,
      ';'
    ),

    namespace_declaration: $ => seq(
      'namespace',
      field('name', $._name),
      field('body', $.declaration_list),
      optional(';')
    ),

    file_scoped_namespace_declaration: $ => seq(
      'namespace',
      field('name', $._name),
      ';',
      repeat($.extern_alias_directive),
      repeat($.using_directive),
      repeat($._type_declaration)
    ),

    _type: $ => choice(
      $.implicit_type,
      $.array_type,
      $._name,
      $.nullable_type,
      $.pointer_type,
      $.function_pointer_type,
      $.predefined_type,
      $.tuple_type,
    ),

    implicit_type: $ => 'var',

    array_type: $ => prec(PREC.POSTFIX, seq(
      field('type', $._type),
      field('rank', $.array_rank_specifier)
    )),

    // grammar.txt marks this non-optional and includes omitted_array_size_expression in
    // expression but we can't match empty rules.
    array_rank_specifier: $ => seq('[', commaSep(optional($._expression)), ']'),

    nullable_type: $ => seq($._nullable_base_type, '?'),

    _nullable_base_type: $ => choice(
      $.array_type,
      $._name,
      $.pointer_type,
      $.function_pointer_type,
      $.predefined_type,
      $.tuple_type
    ),

    pointer_type: $ => prec(PREC.POSTFIX, seq($._type, '*')),

    function_pointer_type: $ => seq(
      'delegate',
      '*',
      optional($.function_pointer_calling_convention),
      '<',
      commaSep1($.function_pointer_parameter),
      '>'
    ),

    function_pointer_calling_convention: $ => choice(
      'managed',
      seq(
        'unmanaged',
        optional($.function_pointer_unmanaged_calling_convention_list)
      )
    ),

    function_pointer_unmanaged_calling_convention_list: $ => seq(
      '[', commaSep1($.function_pointer_unmanaged_calling_convention), ']'
    ),

    function_pointer_unmanaged_calling_convention: $ => choice(
      'Cdecl',
      'Stdcall',
      'Thiscall',
      'Fastcall',
      $.identifier
    ),

    function_pointer_parameter: $ => seq(
      optional(choice('ref', 'out', 'in', seq('ref', 'readonly'))),
      choice($._type, $.void_keyword)
    ),

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
      'nint',
      'nuint'
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
      ',',
      commaSep1($.tuple_element),
      ')'
    ),

    tuple_element: $ => prec.left(seq(
      field('type', $._type),
      field('name', optional($.identifier))
    )),

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
          field('left', choice($.identifier, $.tuple_pattern)),
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
      repeat($.attribute_list),
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
      choice(
        seq(
          '(',
          field('value', $._expression),
          ')',
        ),
        field('value', $.tuple_expression)
      ),
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
      $.recursive_pattern,
      $.var_pattern,
      $.negated_pattern,
      $.parenthesized_pattern,
      $.relational_pattern,
      $.binary_pattern,
      $.type_pattern
    ),

    type_pattern: $ => $._type,

    parenthesized_pattern: $ => seq('(', $._pattern, ')'),

    relational_pattern: $ => prec.left(choice(
      seq('<', $._expression),
      seq('<=', $._expression),
      seq('>', $._expression),
      seq('>=', $._expression)
    )),

    negated_pattern: $ => seq('not', $._pattern),

    binary_pattern: $ => choice(
      prec.left(PREC.AND, seq(
        field('left', $._pattern),
        field('operator', 'and'),
        field('right', $._pattern)
      )),
      prec.left(PREC.OR, seq(
        field('left', $._pattern),
        field('operator', 'or'),
        field('right', $._pattern)
      )),
    ),

    //We may need to expand this list if more things can be evaluated at compile time
    constant_pattern: $ => choice(
      $.binary_expression,
      $.default_expression,
      $.interpolated_string_expression,
      $.parenthesized_expression,
      $.postfix_unary_expression,
      $.prefix_unary_expression,
      $.size_of_expression,
      $.tuple_expression,
      $.type_of_expression,
      $.member_access_expression,
      $.invocation_expression,
      $.cast_expression,

      $._simple_name,
      $._literal
    ),

    declaration_pattern: $ => seq(
      field('type', $._type),
      $._variable_designation
    ),

    _variable_designation: $ => prec(1, choice(
      $.discard,
      $.parenthesized_variable_designation,
      $.identifier
    )),

    discard: $ => '_',

    parenthesized_variable_designation: $ => seq(
      '(',
      commaSep($._variable_designation),
      ')'
    ),

    recursive_pattern: $ => prec.left(seq(
      optional($._type),
      choice(
        seq(
          $.positional_pattern_clause,
          optional($.property_pattern_clause)
        ),
        $.property_pattern_clause
      ),
      optional($._variable_designation)
    )),

    positional_pattern_clause: $ => prec(1, seq(
      '(',
      optional(seq($.subpattern, ',', commaSep1($.subpattern))),// we really should allow single sub patterns, but that causes conficts, and will rarely be used
      ')',
    )),

    expression_colon: $ => seq($._expression, ':'),

    subpattern: $ => seq(
      optional($.expression_colon),
      $._pattern
    ),

    property_pattern_clause: $ => prec(1, seq(
      '{',
      commaSep($.subpattern),
      optional(','),
      '}',
    )),

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
      optional('static'),
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

    implicit_object_creation_expression: $ => seq(
      'new',
      $.argument_list,
      optional($.initializer_expression)
    ),

    _anonymous_object_member_declarator: $ => choice(
      prec.dynamic(PREC.ASSIGN, seq($.name_equals, $._expression)),
      $._expression
    ),

    array_creation_expression: $ => prec.dynamic(PREC.UNARY, seq(
      'new',
      $.array_type,
      optional($.initializer_expression)
    )),

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

    conditional_access_expression: $ => prec.right(PREC.COND, seq(
      field('condition', $._expression),
      '?',
      choice($.member_binding_expression, $.element_binding_expression)
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

    element_access_expression: $ => prec.right(PREC.UNARY, seq(
      field('expression', $._expression),
      field('subscript', $.bracketed_argument_list)
    )),

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
      seq('@$"', repeat($._interpolated_verbatim_string_content), '"'),
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
      $._interpolated_string_text_fragment,
      $.escape_sequence
    ),

    _interpolated_string_text_fragment: $ => token.immediate(prec(1, /[^{"\\\n]+/)),

    interpolated_verbatim_string_text: $ => choice(
      '{{',
      $._interpolated_verbatim_string_text_fragment,
      '""'
    ),

    _interpolated_verbatim_string_text_fragment: $ => token.immediate(prec(1, /[^{"]+/)),

    interpolation: $ => seq(
      '{',
      $._expression,
      optional($.interpolation_alignment_clause),
      optional($.interpolation_format_clause),
      '}'
    ),

    interpolation_alignment_clause: $ => seq(',', $._expression),

    interpolation_format_clause: $ => seq(':', /[^}"]+/),

    invocation_expression: $ => prec(PREC.INVOCATION, seq(
      field('function', $._expression),
      field('arguments', $.argument_list)
    )),

    is_pattern_expression: $ => prec.left(PREC.REL, seq(
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
      field('expression', choice($._expression, $.predefined_type, $._name)),
      choice('.', '->'),
      field('name', $._simple_name)
    )),

    member_binding_expression: $ => seq(
      '.',
      field('name', $._simple_name),
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

    group_clause: $ => prec.right(PREC.SELECT, seq(
      'group',
      $._expression,
      'by',
      $._expression
    )),

    select_clause: $ => prec.right(PREC.SELECT, seq('select', $._expression)),

    query_continuation: $ => seq('into', $.identifier, $._query_body),

    range_expression: $ => prec.right(PREC.RANGE, seq(
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

    switch_expression: $ => prec(PREC.SWITCH, seq(
      $._expression,
      'switch',
      '{',
      commaSep($.switch_expression_arm),
      optional(','),
      '}',
    )),

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

    with_expression: $ => prec.left(PREC.WITH,
      seq($._expression, 'with', '{', optional($.with_initializer_expression), '}')),

    with_initializer_expression: $ => commaSep1($.simple_assignment_expression),

    simple_assignment_expression: $ => seq($.identifier, '=', $._expression),

    _expression: $ => choice(
      $.anonymous_method_expression,
      $.anonymous_object_creation_expression,
      $.array_creation_expression,
      $.as_expression,
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
      $.implicit_object_creation_expression,
      $.implicit_stack_alloc_array_creation_expression,
      $.initializer_expression,
      $.interpolated_string_expression,
      $.invocation_expression,
      $.is_expression,
      $.is_pattern_expression,
      $.lambda_expression,
      $.make_ref_expression,
      $.member_access_expression,
      // $.member_binding_expression, // Not needed as handled directly in $.conditional_access_expression
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
      $.with_expression,

      $._simple_name,
      $._literal
    ),

    binary_expression: $ => choice(
      ...[
        ['&&', PREC.LOGAND], // logical_and_expression
        ['||', PREC.LOGOR], // logical_or_expression
        ['>>', PREC.SHIFT], // right_shift_expression
        ['<<', PREC.SHIFT], // left_shift_expression
        ['&', PREC.AND],  // bitwise_and_expression
        ['^', PREC.XOR], // exclusive_or_expression
        ['|', PREC.OR], // bitwise_or_expression
        ['+', PREC.ADD], // add_expression
        ['-', PREC.ADD], // subtract_expression
        ['*', PREC.MULT], // multiply_expression
        ['/', PREC.MULT], // divide_expression
        ['%', PREC.MULT], // modulo_expression
        ['<', PREC.REL], // less_than_expression
        ['<=', PREC.REL], // less_than_or_equal_expression
        ['==', PREC.EQUAL], // equals_expression
        ['!=', PREC.EQUAL], // not_equals_expression
        ['>=', PREC.REL], // greater_than_or_equal_expression
        ['>', PREC.REL] //  greater_than_expression
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ),
      prec.right(PREC.COALESCING, seq(
        field('left', $._expression),
        field('operator', '??'), // coalesce_expression
        field('right', $._expression)
      ))
    ),

    as_expression: $ => prec.left(PREC.REL, seq(
      field('left', $._expression),
      field('operator', 'as'),
      field('right', $._type)
    )),

    is_expression: $ => prec.left(PREC.REL, seq(
      field('left', $._expression),
      field('operator', 'is'),
      field('right', $._type)
    )),

    // Unicode categories: L = Letter, Nl Letter_Number, = Nd = Decimal_Number, Pc = Connector_Punctuation, Cf = Format, Mn = Nonspacing_Mark, Mc = Spacing_Mark
    _identifier_token: $ => token(seq(optional('@'), /[\p{L}\p{Nl}_][\p{L}\p{Nl}\p{Nd}\p{Pc}\p{Cf}\p{Mn}\p{Mc}]*/)),
    identifier: $ => choice($._identifier_token, $._contextual_keywords),

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
        decimalDigitSequence, // Decimal
        (/0[xX][0-9a-fA-F_]*[0-9a-fA-F]+/), // Hex
        (/0[bB][01_]*[01]+/) // Binary
      ),
      optional(/u|U|l|L|ul|UL|uL|Ul|lu|LU|Lu|lU/)
    )),

    null_literal: $ => 'null',

    real_literal: $ => {
      const suffix = /[fFdDmM]/;
      const exponent = /[eE][+-]?[0-9][0-9_]*/;
      return token(choice(
        seq(
          decimalDigitSequence,
          '.',
          decimalDigitSequence,
          optional(exponent),
          optional(suffix)
        ),
        seq(
          '.',
          decimalDigitSequence,
          optional(exponent),
          optional(suffix)
        ),
        seq(
          decimalDigitSequence,
          exponent,
          optional(suffix)
        ),
        seq(
          decimalDigitSequence,
          suffix
        )
      ))
    },

    string_literal: $ => seq(
      '"',
      repeat(choice(
        $._string_literal_fragment,
        $.escape_sequence
      )),
      '"'
    ),

    _string_literal_fragment: $ => token.immediate(prec(1, /[^"\\\n]+/)),

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
      seq('//', /[^\n\r]*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    // Custom non-Roslyn additions beyond this point that will not sync up with grammar.txt

    // Contextual keywords - keywords that can also be identifiers...
    _contextual_keywords: $ => choice(
      // LINQ comprehension syntax
      'ascending',
      'by',
      'descending',
      'equals',
      'from',
      'group',
      'into',
      'join',
      'let',
      'on',
      'orderby',
      'select',
      'where',

      // Property/event handlers
      'add',
      'get',
      'remove',
      'set',

      // Async - These need to be more contextual
      // 'async',
      // 'await',

      // Misc
      'global',
      'alias',
      'dynamic',
      'nameof',
      'notnull',
      'unmanaged',
      'when',
      'yield'
    ),

    // We use this instead of type so 'void' is only treated as type in the right contexts
    return_type: $ => choice($._type, $.void_keyword),
    void_keyword: $ => 'void',

    _preprocessor_call: $ => seq(
      $._preproc_directive_start,
      choice(
        $.nullable_directive,
        $.define_directive,
        $.undef_directive,
        $.if_directive,
        $.else_directive,
        $.elif_directive,
        $.endif_directive,
        $.region_directive,
        $.endregion_directive,
        $.error_directive,
        $.warning_directive,
        $.line_directive,
        $.pragma_directive
      ),
      $._preproc_directive_end
    ),

    _preproc_directive_start: $ => /#[ \t]*/,

    nullable_directive: $ => seq(
      'nullable',
      choice('disable', 'enable', 'restore'),
      optional(choice('annotations', 'warnings'))
    ),

    // Preprocessor

    define_directive: $ => seq('define', $.identifier),
    undef_directive: $ => seq('undef', $.identifier),
    if_directive: $ => seq('if', $._preproc_expression),
    else_directive: $ => 'else',
    elif_directive: $ => seq('elif', $._preproc_expression),
    endif_directive: $ => 'endif',
    region_directive: $ => seq('region', optional($.preproc_message)),
    endregion_directive: $ => seq('endregion', optional($.preproc_message)),
    error_directive: $ => seq('error', $.preproc_message),
    warning_directive: $ => seq('warning', $.preproc_message),
    line_directive: $ => seq('line',
      choice(
        'default',
        'hidden',
        seq($.preproc_integer_literal, optional($.preproc_string_literal))
      )
    ),
    pragma_directive: $ => seq('pragma',
      choice(
        seq('warning',
          choice('disable', 'restore'),
          commaSep(
            choice(
              $.identifier,
              alias($.preproc_integer_literal, $.integer_literal),
            ))),
        seq('checksum', $.preproc_string_literal, $.preproc_string_literal, $.preproc_string_literal)
      )
    ),

    preproc_message: $ => /[^\n\r]+/,
    preproc_integer_literal: $ => /[0-9]+/,
    preproc_string_literal: $ => /"[^"]*"/,

    _preproc_expression: $ => choice(
      $.identifier,
      $.boolean_literal,
      alias($.preproc_integer_literal, $.integer_literal),
      alias($.preproc_string_literal, $.verbatim_string_literal),
      alias($.preproc_unary_expression, $.prefix_unary_expression),
      alias($.preproc_binary_expression, $.binary_expression),
      alias($.preproc_parenthesized_expression, $.parenthesized_expression)
    ),

    preproc_parenthesized_expression: $ => seq(
      '(',
      $._preproc_expression,
      ')'
    ),

    preproc_unary_expression: $ => prec.left(PREC.UNARY, seq(
      field('operator', '!'),
      field('argument', $._preproc_expression)
    )),

    preproc_binary_expression: $ => {
      const table = [
        ['||', PREC.LOGOR],
        ['&&', PREC.LOGAND],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $._preproc_expression),
          field('operator', operator),
          field('right', $._preproc_expression)
        ))
      }));
    },
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
