const PREC = {
  ASSIGNMENT: 0, 
  LOGICAL_XOR: 1, 
  LOGICAL_OR: 2, 
  LOGICAL_AND: 3, 
  BITWISE_OR: 4, 
  BITWISE_XOR: 5, 
  BITWISE_AND: 6, 
  EQUALITY: 7, 
  COMPARISON: 8, 
  SHIFT: 9, 
  ADD: 10, 
  MULTIPLY: 11, 
  CAST: 12,
  UNARY: 13, 
}

module.exports = grammar ({

  name: 'hare', 

  extras:  $ => [
    /\s|\\\r?\n/,
    $.comment, 
  ],
  
  conflicts: $ => [
    [$.integer_constant, $.floating_constant],
    [$.identifier], // enum
    [$.bindings], // parenthesized expressions in array/slice specifiers
    [$.for_predicate, $.expression], // second/third production rules in for predicate. 
    [$.if_expression]
  ],

  rules: {

    // The Translation Unit. 
    unit: $ => seq(
      optional($.imports), 
      optional($.declarations),
    ),
    
    // Imports.  
    imports: $ => repeat1($.use_statement),

    use_statement: $ => seq(
      'use', 
      choice(
        seq($.identifier, ';'), 
        seq($.name, '=', $.identifier, ';'),
        seq($.identifier, '::', '{', $.name_list, '}', ';')
      ),
    ),

    name_list: $ => choice(
      seq($.name, optional(',')),
      seq($.name,',', $.name_list)
    ), 

    // Declarations. 
    declarations: $ => repeat1(seq(optional('export'), $.declaration, ';')), 
    
    declaration: $ => choice(
      $.global_declaration, 
      $.constant_declaration, 
      $.type_declaration, 
      $.function_declaration
    ),
    
    global_declaration: $ => choice(
      seq('let', $.global_bindings),
      seq('const', $.global_bindings)
    ),

    global_bindings: $ => 
      seq($.global_binding, optional(seq(',', $.global_bindings))),
    
    global_binding: $ => seq(
      optional($.decl_attr), 
      $.identifier, ':', $.type, optional(seq('=', $.expression))
    ),

    decl_attr: $ => seq(
      '@symbol', '(', $.string_constant, ')'
    ),

    constant_declaration: $ => seq('def', $.constant_bindings), 
    
    constant_bindings: $ => 
      seq($.constant_binding, optional(seq(',', $.constant_bindings))),

    constant_binding: $ => seq(
      $.identifier, ':', $.type, '=', $.expression
    ),
    

    type_declaration: $ => seq('type', $.type_bindings),
    
    type_bindings: $ => choice(
      seq($.identifier, '=', $.type, optional(',')),
      seq($.identifier, '=', $.type, ',', $.type_bindings)
    ),
    
    function_declaration: $ => 
      seq(optional($.fndec_attrs), 'fn', 
        field('name', $.identifier), field('type', $.prototype), 
        optional(seq('=', field('body', $.expression)))
      ),
    
    fndec_attrs: $ => repeat1($.fndec_attr), 

    fndec_attr: $ => choice(
      '@fini',
      '@init',
      '@test',
      $.fntype_attr, 
      $.decl_attr
    ),
    
    fntype_attr: $ => choice(
      '@noreturn',
    ),

    // Types. 
    type: $ => seq($._inner_type, optional('!')),

    _inner_type: $ => seq( optional('const'), $.storage_class),

    storage_class: $ => choice(
      $.scalar_type,
      $.struct_type,
      $.union_type,
      $.tuple_type,
      $.tagged_union_type,
      $.slice_array_type,
      $.function_type,
      $.alias_type,
      $.unwrapped_alias,
    ),
    
    scalar_type: $ => choice(
      $.integer_type, 
      $.floating_type, 
      $.enum_type, 
      $.pointer_type, 
      'rune', 
      'str',
      'bool', 
      'void'
    ),
    
    integer_type: $ => choice(
      'i8',
      'i16',
      'i32',
      'i64',
      'u8',
      'u16',
      'u32',
      'u64',
      'int',
      'uint',
      'size',
      'uintptr',
      'char',
    ),
    
    floating_type: $ => choice(
      'f32', 
      'f64',
    ),
    
    enum_type: $ => choice(
      seq('enum', '{', $.enum_values, '}'), 
      seq('enum', $.integer_type, '{', $.enum_values, '}'),
    ),
    
    enum_values: $ => choice(
      seq($.enum_value, optional(',')), 
      seq($.enum_value, ',', $.enum_values), 
    ),

    enum_value: $ => choice(
      $.name, 
      seq($.name, '=', $.expression)
    ),
    
    pointer_type: $ => choice(
      seq('*', $._inner_type), 
      seq('nullable', '*', $._inner_type)
    ),
    
    struct_type: $ =>seq('struct', '{', $.struct_union_fields, '}'),
    union_type: $ =>seq('union', '{', $.struct_union_fields, '}'),
    
    struct_union_fields: $ => choice(
      seq($.struct_union_field, optional(',')),
      seq($.struct_union_field, ',', $.struct_union_fields)
    ),
    
    struct_union_field: $ => seq(
      optional($.offset_specifier), 
      choice(
        seq($.name, ':', $.type), 
        $.struct_type, 
        $.union_type, 
        $.identifier
      )
    ),
    
    offset_specifier: $ => seq('@offset', '(', $.expression, ')'),

    tuple_type: $ => seq('(', $.tuple_types, ')'), 

    tuple_types: $ => choice(
      seq($.type, ',', $.type, optional(',')), 
      seq($.type, ',', $.tuple_types), 
    ),
    
    tagged_union_type: $ => seq('(', $.tagged_types, ')'),

    tagged_types: $ => seq($.type, '|', $.type, repeat(seq('|', $.type))),
    
    slice_array_type: $ => choice(
      seq('[',']', $._inner_type), 
      seq('[', $.logical_or_expression, ']', $._inner_type), 
      seq('[', '*', ']', $._inner_type), 
      seq('[', '_', ']', $._inner_type)
    ),
    
    function_type: $ => seq(optional($.fntype_attr), 'fn', $.prototype),
    
    prototype: $ => seq('(', optional($.parameter_list), ')', $._inner_type), 
    
    parameter_list: $ => choice(
      seq($.parameters, optional(',')), 
      seq($.parameters, '...', optional(',')),
      seq($.parameters, ',', '...', optional(',')),
    ),
    
    parameters: $ => choice(
      $.parameter, 
      seq($.parameters, ',', $.parameter)
    ),
    
    parameter: $ => choice(
      seq($.name, ':', $.type), 
      seq('_', ':', $.type)
    ),


    alias_type: $ => $.identifier,

    unwrapped_alias: $ => seq('...', $.identifier),


    // Expressions. 
    constant: $ => choice(
      $.integer_constant, 
      $.floating_constant, 
      $.rune_constant, 
      $.string_constant, 
      'true', 
      'false', 
      'null', 
      'void'
    ),

    integer_constant: $ => choice(
      seq('0x', $.hex_digits, optional($.integer_suffix)), 
      seq('0o', $.octal_digits, optional($.integer_suffix)), 
      seq('0b', $.binary_digits, optional($.integer_suffix)), 
      seq($.decimal_digits, optional($.exponent), optional($.integer_suffix)), 
    ),
    
    hex_digits: $ =>  repeat1($.hex_digit),

    hex_digit: $ => choice(
      '0',
      '1',
      '2',
      '3',
      '4',
      '5',
      '6',
      '7',
      '8',
      '9',
      'A',
      'B',
      'C',
      'D',
      'E',
      'F',
      'a',
      'b',
      'c',
      'd',
      'e',
      'f'
    ),
  
    octal_digits: $ => repeat1($.octal_digit),
    octal_digit: $ => choice(
      '0',
      '1',
      '2',
      '3',
      '4',
      '5',
      '6',
      '7',
    ),

    binary_digits: $ => repeat1($.binary_digit), 
    binary_digit: $ => choice('0', '1'),

    decimal_digits: $ => repeat1($.decimal_digit), 
    decimal_digit: $ => choice('0','1', '2', '3', '4', '5', '6', '7', '8', '9'),
    
    integer_suffix: $ => choice(
      'i',
      'u',
      'z',
      'i8',
      'i16',
      'i32',
      'i64',
      'u8',
      'u16',
      'u32',
      'u64',
    ),

    floating_constant: $ => choice(
      seq($.decimal_digits, '.', $.decimal_digits, optional($.exponent), optional($.floating_suffix)),
      seq($.decimal_digits, optional($.exponent), $.floating_suffix),
    ),
    
    exponent: $ => seq('e', $.decimal_digits), 

    floating_suffix: $ => choice(
      'f32', 
      'f64'
    ),
    
    rune_constant: $ => seq("'", $.rune, "'"),

    rune: $ => choice(
      token.immediate(/[^\']/), 
      $.escape_sequence
    ),

    escape_sequence: $ => choice(
      $.named_escape, 
      seq(
        "\\", 
        token.immediate(
          choice(
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/
          )
        )
      )
    ),

    named_escape: $ => seq( 
      '\\', 
      token.immediate(
      choice(
        '0', 
        'n', 
        'r',
        't', 
        'b', 
        'f',
        'a', 
        'v',
        '\\',
        '\'',
        '\"',
      ))
    ),
    
    string_constant: $ => repeat1(seq('"', optional($.string_chars), '"')),
    
    string_chars: $ => repeat1($.string_char),
    string_char: $ => choice(
      token.immediate(/[^\n"]/), 
      $.escape_sequence
    ),
    
    array_literal: $ => seq('[', optional($.array_members), ']'), 
    array_members: $ => choice(
      seq($.expression, optional(',')), 
      seq($.expression, '...', optional(',')), 
      seq($.expression, ',', $.array_members), 
    ),

    enum_literal: $ => seq($.identifier, '::', $.name), 
    
    struct_literal: $ => choice(
      seq('struct', '{', seq($.field_values, optional(',')), '}'),
      seq($.identifier, '{', $.struct_initializer, '}'),
    ),
    
    struct_initializer: $ => choice(
      '...',
      seq($.field_values, optional(seq(',', optional('...')))),
    ),
    
    field_values: $ => choice(
      $.field_value, 
      seq($.field_values, ',', $.field_value),
    ),
    
    field_value: $ => choice(
      seq($.name, '=', $.expression), 
      seq($.name, ':', $.type, '=', $.expression), 
      $.struct_literal
    ),
    
    plain_expression: $ => choice(
      $.identifier, 
      $.constant, 
      $.array_literal, 
      $.enum_literal, 
      $.struct_literal,
    ),

    nested_expression: $ => choice(
      $.plain_expression, 
      seq('(', $.expression, ')'), 
      seq('(', $.tuple_items, ')'), 
    ),

    tuple_items: $ => choice(
      seq($.expression, ',', $.expression, optional(',')), 
      seq($.expression, ',', $.tuple_items), 
    ),
    
    allocation_expression: $ => choice(
      seq('alloc','(', $.expression, ')'),
      seq('alloc','(', $.expression, ',', $.expression, ')'),
      seq('append', '(', $.object_selector, ',', $.append_values, ')'),
      seq('append','(', '*', $.unary_expression, ',', $.append_values,')'),
      seq('free', '(', $.expression, ')'),
      seq('delete', '(', $.slicing_expression, ')'),
      seq('delete', '(', $.indexing_expression, ')')
    ),

    append_values: $ => choice(
      seq($.expression, optional(',')),
      seq('...', $.expression, optional(',')),
      seq($.expression, ',', $.append_values)
    ),


    assertion_expression: $ => choice(
      seq('assert', '(', $.expression, ')'),
      seq('assert', '(', $.expression, ',', $.string_constant, ')'),
      seq('static', 'assert', '(', $.expression, ')'),
      seq('static', 'assert', '(', $.expression ,',', $.string_constant, ')'),
      seq('abort',  '(', optional($.string_constant), ')'),
    ),

    call_expression: $ => seq($.postfix_expression, '(', optional($.argument_list), ')'),
    
    argument_list: $ => choice(
      seq($.expression, optional(',')),
      seq($.expression, '...', optional(',')),
      seq($.expression, ',', $.argument_list),
    ),

    measurement_expression: $ => choice(
      $.size_expression, 
      $.length_expression, 
      $.offset_expression
    ),

    size_expression: $ => seq('size', '(', $.type, ')'),
    
    length_expression: $ => seq('len', '(', $.expression, ')'),
    
    offset_expression: $ => seq('offset', '(', $.field_access_expression, ')'),

    field_access_expression: $ => choice(
      seq($.postfix_expression, field('selector', seq('.', $.name))), 
      seq($.postfix_expression, field('selector', seq('.', $.integer_constant)))
    ),
    
    indexing_expression: $ => seq($.postfix_expression, '[', $.expression, ']'),

    slicing_expression: $ => seq(
      $.postfix_expression, '[', optional($.expression), 
        '..',  optional($.expression), ']'
    ),
    
    error_propagation: $ => seq($.postfix_expression, '?'),

    postfix_expression: $ => choice(
      $.nested_expression,
      $.allocation_expression,
      $.assertion_expression,
      $.call_expression,
      $.field_access_expression,
      $.indexing_expression,
      $.measurement_expression,
      $.slicing_expression,
      $.error_propagation,
    ),

    object_selector: $ => choice(
      $.identifier,
      $.indexing_expression,
      $.field_access_expression
    ),
    
    unary_expression: $ => choice(
      $.postfix_expression, 
      prec.right(PREC.UNARY, 
        seq(
          field('operator', choice('+', '-', '~', '!', '*')),
          field('argument', $.unary_expression)
        )
      ),
      prec.right(PREC.UNARY, 
        seq(
          field('address', '&'), 
          field('argument', $.object_selector)
        )
      )
    ),
    
    cast_expression: $ => choice(
      $.unary_expression, 
      prec.left(PREC.CAST, field('type_cast', seq( $.cast_expression, ':', $.type))),
      prec.left(PREC.CAST, field('as_cast', seq( $.cast_expression, 'as', $.type))),
      prec.left(PREC.CAST, field('is_cast', seq( $.cast_expression, 'is', $.type)))
    ),

    multiplicative_expression: $ => choice(
      $.cast_expression, 
      prec.left(PREC.MULTIPLY, seq($.multiplicative_expression, '*', $.cast_expression)),
      prec.left(PREC.MULTIPLY, seq($.multiplicative_expression, '/', $.cast_expression)),
      prec.left(PREC.MULTIPLY, seq($.multiplicative_expression, '%', $.cast_expression))
    ),

    additive_expression: $ => choice(
      $.multiplicative_expression, 
      prec.left(PREC.ADD, seq($.additive_expression, '+', $.multiplicative_expression)),
      prec.left(PREC.ADD, seq($.additive_expression, '-', $.multiplicative_expression))
    ),
    
    shift_expression: $ => choice(
      $.additive_expression, 
      prec.left(PREC.SHIFT, seq($.multiplicative_expression, '<<', $.cast_expression)),
      prec.left(PREC.SHIFT, seq($.multiplicative_expression, '>>', $.cast_expression))
    ),
    
    and_expression: $ => choice(
      $.shift_expression, 
      prec.left(PREC.BITWISE_AND, seq($.and_expression, '&', $.shift_expression)), 
    ),
    
    exclusive_or_expression: $ => choice(
      $.and_expression, 
      prec.left(PREC.BITWISE_XOR, seq($.exclusive_or_expression, '^', $.and_expression)),
    ),
    inclusive_or_expression: $ => choice(
      $.exclusive_or_expression, 
      prec.left(PREC.BITWISE_OR, seq($.inclusive_or_expression, '|', $.exclusive_or_expression)),
    ),

    comparison_expression: $ => choice(
      $.inclusive_or_expression,
      prec.left(PREC.COMPARISON, seq($.comparison_expression, '<',  $.inclusive_or_expression)),
      prec.left(PREC.COMPARISON, seq($.comparison_expression, '>',  $.inclusive_or_expression)),
      prec.left(PREC.COMPARISON, seq($.comparison_expression, '<=', $.inclusive_or_expression)),
      prec.left(PREC.COMPARISON, seq($.comparison_expression, '>=', $.inclusive_or_expression))
    ),

    equality_expression: $ => choice(
      $.comparison_expression,
      prec.left(PREC.EQUALITY, seq($.equality_expression, '==', $.comparison_expression)),
      prec.left(PREC.EQUALITY, seq($.equality_expression, '!=', $.comparison_expression)),
    ),

    logical_and_expression: $ => choice(
      $.equality_expression,
      prec.left(PREC.LOGICAL_AND, seq($.logical_and_expression, '&&', $.equality_expression)),
    ),

    logical_xor_expression: $ => choice(
      $.logical_and_expression,
      prec.left(PREC.LOGICAL_XOR, seq($.logical_xor_expression, '^^', $.logical_and_expression)),
    ),
    
    logical_or_expression: $ => choice(
      $.logical_xor_expression,
      prec.left(PREC.LOGICAL_OR, seq($.logical_or_expression, '||', $.logical_xor_expression)),
    ),

    if_expression: $ => choice(
      seq('if', $.conditional_branch),
      seq('if', $.conditional_branch, 'else', $.expression)
    ),
  
    conditional_branch: $ => seq('(' , $.expression, ')',  $.expression),
    
    for_loop: $ => seq(
      optional($.label),
      'for', '(', $.for_predicate, ')', $.expression
    ),

    for_predicate: $ => choice(
      $.expression,
      seq(field('binding', $.binding_list), ';', $.expression),
      seq($.expression, ';', field('afterthought', $.expression)),
      seq($.binding_list, ';', $.expression, ';', $.expression),
    ),
    
    label: $ => seq(':', $.name),

    switch_expression: $ => seq(
      'switch', '(', $.expression, ')', '{', $.switch_cases, '}'
    ),

    switch_cases: $ => choice(
      seq($.switch_case, optional(',')), 
      seq($.switch_case, ',', $.switch_cases)
    ),

    switch_case: $ => choice(
     seq($.case_options, '=>', $.expression),
     seq('*', '=>', $.expression),
    ),

    case_options: $ => choice(
      seq($.expression, optional(',')),
      seq($.expression, ',',  $.case_options)
    ),

    match_expression: $ => 
      seq('match', '(', $.expression, ')', '{', $.match_cases,  '}'),
    
    match_cases: $ => choice(
      seq($.match_case, optional(',')), 
      seq($.match_case, ',', $.match_cases)
    ),
        
    match_case: $ => choice(
      seq($.name, ':', $.type, '=>', $.expression),
      seq($.type, '=>', $.expression),
      seq('*', '=>', $.expression)
    ),

    assignment: $ => prec.left(PREC.ASSIGNMENT, 
    choice(
      seq($.object_selector, $.assignment_op, $.expression),
      seq('*', $.unary_expression, $.assignment_op, $.expression),
      seq($.slicing_expression, '=', $.expression)
    )),

    assignment_op: $ => choice(
      '=', '+=', '-=', '*=', '/=', '%=', '<<=', '>>=', '&=', '|=', '^='
    ),

    binding_list: $ => choice(
      seq(optional('static'), 'let', $.bindings),
      seq(optional('static'), 'const', $.bindings),
    ),
    
    bindings: $ => seq($.binding, optional(seq(',', $.bindings))),
    
    binding: $ => choice(
      seq($.name, '=', $.expression),
      seq($.name, ':', $.type, '=',  $.expression),
      seq($.binding_names, '=', $.expression),
      seq($.binding_names, ':', $.type, '=', $.expression),
    ),

    binding_names: $ => choice(
      seq($.name, ',', $.name),
      seq($.name, ',', $.binding_names)
    ),

    deferred_expression: $ => seq('defer', $.expression),

    expression_list: $ => choice(
      seq($.expression, ';'),
      seq($.expression, ';', $.expression_list)
    ),

    control_statement: $ => choice(
      seq('break', optional($.label)),
      seq('continue', optional($.label)),
      seq('return', optional($.expression))
    ),

    expression: $ => choice(
      $.assignment,
      $.binding_list,
      $.deferred_expression,
      $.logical_or_expression,
      $.if_expression,
      $.for_loop,
      $.switch_expression,
      $.match_expression,
      $.control_statement,
      $.compound_expression,
    ),
    
    compound_expression: $ => seq('{', $.expression_list, '}'),

    identifier: $ =>
      seq($.name, optional(seq('::', $.identifier))),

    name: $ => /[a-zA-Z_]\w*/,

    comment: $ => token(seq('//', /(\\(.|\r?\n)|[^\\\n])*/)),

  }
})
