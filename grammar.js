const PREC = {
  COMMA: -1,
  CAST: -1,
  LOGICAL_OR_2: 1,
  LOGICAL_XOR: 2,
  LOGICAL_AND_2: 3,
  ASSIGNMENT: 4,
  TERNARY: 5,
  NULL_COALESCE: 6,
  LOGICAL_OR_1: 7,
  LOGICAL_AND_1: 8,
  BITWISE_OR: 9,
  BITWISE_XOR: 10,
  BITWISE_AND: 11,
  EQUALITY: 12,
  INEQUALITY: 13,
  SHIFT: 14,
  PLUS: 15,
  TIMES: 16,
  NEG: 17,
  INSTANCEOF: 18,
  INC: 19,
  SCOPE: 20,
  NEW: 21,
  CALL: 22,
  MEMBER: 23,
  DEREF: 24
};

module.exports = grammar({
  name: 'php',

  externals: $ => [
    $._automatic_semicolon,
    $.heredoc,
    $._eof,
  ],

  supertypes: $ => [
    $._statement,
    $._expression,
    $._primary_expression,
    $._type,
    $._literal,
  ],

  word: $ => $.name,

  conflicts: $ => [
    [$.simple_parameter, $.name],
    [$.variadic_parameter, $.name],

    // Do we need these?
    [$.qualified_name, $.namespace_name],
    [$.namespace_name],
    [$.namespace_aliasing_clause, $.name],

    [$.namespace_name_as_prefix],
    [$.namespace_use_declaration, $.namespace_name_as_prefix]
  ],

  inline: $ => [
    $._statement,
    $._semicolon,
    $._member_name,
    $._variable,
    $._callable_variable,
    $._callable_expression,
    $._foreach_value,
    $._literal,
    $._intrinsic,
    $._class_type_designator,
    $._variable_name,
    $._type_name,
  ],

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/,
    $.text_interpolation
  ],

  rules: {
    program: $ => seq(
      optional($.text),
      optional(seq(
        $.php_tag,
        repeat($._statement)
      ))
    ),

    php_tag: $ => /<\?([pP][hH][pP]|=)?/,

    text_interpolation: $ => seq(
      '?>',
      optional($.text),
      choice($.php_tag, $._eof)
    ),

    text: $ => repeat1(choice(
      token(prec(-1, /</)),
      /[^\s<][^<]*/
    )),

    _statement: $ => choice(
      $.empty_statement,
      $.compound_statement,
      $.named_label_statement,
      $.expression_statement,
      $.if_statement,
      $.switch_statement,
      $.while_statement,
      $.do_statement,
      $.for_statement,
      $.foreach_statement,
      $.goto_statement,
      $.continue_statement,
      $.break_statement,
      $.return_statement,
      $.throw_statement,
      $.try_statement,
      $.declare_statement,
      $.echo_statement,
      $.unset_statement,
      $.const_declaration,
      $.function_definition,
      $.class_declaration,
      $.interface_declaration,
      $.trait_declaration,
      $.namespace_definition,
      $.namespace_use_declaration,
      $.global_declaration,
      $.function_static_declaration
    ),

    empty_statement: $ => prec(-1, ';'),

    function_static_declaration: $ => seq(
      keyword('static'),
      commaSep1($.static_variable_declaration),
      $._semicolon
    ),

    static_variable_declaration: $ => seq(
      field('name', $.variable_name),
      optional(seq(
        '=',
        field('value', $._expression)
      ))
    ),

    global_declaration: $ => seq(
      keyword('global'),
      commaSep1($._variable_name),
      $._semicolon
    ),

    namespace_definition: $ => seq(
      keyword('namespace'),
      choice(
        seq(
          field('name', $.namespace_name),
          $._semicolon
        ),
        seq(
          field('name', optional($.namespace_name)),
          field('body', $.compound_statement)
        )
      )
    ),

    namespace_use_declaration: $ => seq(
      keyword('use'),
      optional(choice(keyword('function'), keyword('const'))),
      choice(
        seq(
          commaSep1($.namespace_use_clause),
        ),
        seq(
          optional('\\'),
          $.namespace_name,
          '\\',
          $.namespace_use_group
        )
      ),
      $._semicolon
    ),

    namespace_use_clause: $ => seq(
      $.qualified_name, optional($.namespace_aliasing_clause)
    ),

    qualified_name: $ => seq(
      optional($.namespace_name_as_prefix),
      choice($.name, alias($._reserved_identifier, $.name))
    ),

    namespace_name_as_prefix: $ => choice(
      '\\',
      seq(optional('\\'), $.namespace_name, '\\'),
      seq(keyword('namespace'), '\\'),
      seq(keyword('namespace'), optional('\\'), $.namespace_name, '\\')
    ),

    namespace_name: $ => seq($.name, repeat(seq('\\', $.name))),

    namespace_aliasing_clause: $ => seq(
      keyword('as'),
      $.name
    ),

    namespace_use_group: $ => seq(
      '{',
      commaSep1($.namespace_use_group_clause),
      '}'
    ),

    namespace_use_group_clause: $ => seq(
      optional(choice(keyword('function'), keyword('const'))),
      $.namespace_name,
      optional($.namespace_aliasing_clause)
    ),

    trait_declaration: $ => seq(
      keyword('trait'),
      field('name', $.name),
      field('body', $.declaration_list)
    ),

    interface_declaration: $ => seq(
      keyword('interface'),
      field('name', $.name),
      optional($.base_clause),
      field('body', $.declaration_list)
    ),

    base_clause: $ => seq(
      keyword('extends'),
      commaSep1($.qualified_name)
    ),

    class_declaration: $ => prec.right(seq(
      optional($.class_modifier),
      keyword('class'),
      field('name', $.name),
      optional($.base_clause),
      optional($.class_interface_clause),
      field('body', $.declaration_list),
      optional($._semicolon)
    )),

    declaration_list: $ => seq(
      '{',
      repeat($._member_declaration),
      '}'
    ),

    class_modifier: $ => choice(
      keyword('abstract'),
      keyword('final')
    ),

    class_interface_clause: $ => seq(
      keyword('implements'),
      commaSep1($.qualified_name)
    ),

    _member_declaration: $ => choice(
      $.const_declaration,
      $.property_declaration,
      $.method_declaration,
      $.use_declaration
    ),

    const_declaration: $ => seq(
      optional($.visibility_modifier),
      keyword('const'),
      commaSep1($.const_element),
      $._semicolon
    ),

    property_declaration: $ => seq(
      repeat1($._modifier),
      commaSep1($.property_element),
      $._semicolon
    ),

    _modifier: $ => choice(
      $.var_modifier,
      $.visibility_modifier,
      $.static_modifier,
      $.class_modifier
    ),

    property_element: $ => seq(
      $.variable_name, optional($.property_initializer)
    ),

    property_initializer: $ => seq(
      '=', $._expression
    ),

    method_declaration: $ => seq(
      repeat($._modifier),
      $._function_definition_header,
      choice(
        field('body', $.compound_statement),
        $._semicolon
      )
    ),

    var_modifier: $ => keyword('var', false),
    static_modifier: $ => keyword('static'),

    use_declaration: $ => seq(
      keyword('use'),
      commaSep1($.qualified_name),
      choice($.use_list, $._semicolon)
    ),

    use_list: $ => seq(
      '{',
      repeat(seq(
        choice(
          $.use_instead_of_clause,
          $.use_as_clause
        ),
        $._semicolon
      )),
      '}'
    ),

    use_instead_of_clause: $ => prec.left(seq(
      choice($.class_constant_access_expression, $.name),
      keyword('insteadof'),
      $.name
    )),

    use_as_clause: $ => seq(
      choice($.class_constant_access_expression, $.name),
      keyword('as'),
      choice(
        seq(
          optional($.visibility_modifier),
          $.name
        ),
        seq(
          $.visibility_modifier,
          optional($.name)
        )
      )
    ),

    visibility_modifier: $ => choice(
      keyword('public'),
      keyword('protected'),
      keyword('private')
    ),

    function_definition: $ => seq(
      $._function_definition_header,
      field('body', $.compound_statement)
    ),

    _function_definition_header: $ => seq(
      keyword('function'),
      optional('&'),
      field('name', choice($.name, alias($._reserved_identifier, $.name))),
      field('parameters', $.formal_parameters),
      optional($._return_type)
    ),

    formal_parameters: $ => seq(
      '(',
      commaSep(choice($.simple_parameter, $.variadic_parameter)),
      ')'
    ),

    simple_parameter: $ => seq(
      field('type', optional($._type)),
      optional('&'),
      field('name', $.variable_name),
      optional(seq(
        '=',
        field('default_value', $._expression)
      ))
    ),

    variadic_parameter: $ => seq(
      field('type', optional($._type)),
      optional('&'),
      '...',
      field('name', $.variable_name)
    ),

    _type: $ => choice(
      $.optional_type,
      $._type_name,
      $.primitive_type
    ),

    _type_name: $ => alias($.qualified_name, $.type_name),

    optional_type: $ => seq(
      '?',
      choice(
        $._type_name,
        $.primitive_type
      )
    ),

    primitive_type: $ => choice(
      'array',
      'callable',
      'iterable',
      'bool',
      'float',
      'int',
      'string',
      'void'
    ),

    cast_type: $ => choice(
      'array',
      'binary',
      'bool',
      'boolean',
      'double',
      'int',
      'integer',
      'float',
      'object',
      'real',
      'string',
      'unset'
    ),

    _return_type: $ => seq(':', field('return_type', $._type)),

    const_element: $ => seq(
      choice($.name, alias($._reserved_identifier, $.name)), '=', $._expression
    ),

    echo_statement: $ => seq(
      keyword('echo'), $._expressions, $._semicolon
    ),

    unset_statement: $ => seq(
      'unset', '(', commaSep1($._variable), ')', $._semicolon
    ),

    declare_statement: $ => seq(
      'declare', '(', $.declare_directive, ')',
      choice(
        $._statement,
        seq(':', repeat($._statement), keyword('enddeclare'), $._semicolon),
        $._semicolon)
    ),

    declare_directive: $ => seq(
      choice('ticks', 'encoding', 'strict_types'),
      '=',
      $._literal
    ),

    _literal: $ => choice(
      $.integer,
      $.float,
      $._string,
      $.boolean,
      $.null
    ),

    float: $ => /\d*((\.\d*)?([eE][\+-]?\d+)|(\.\d*)([eE][\+-]?\d+)?)/,

    try_statement:  $ => seq(
      keyword('try'),
      field('body', $.compound_statement),
      repeat1(choice($.catch_clause, $.finally_clause))
    ),

    catch_clause: $ => seq(
      keyword('catch'),
      '(',
      field('type', $._type_name),
      field('name', $.variable_name),
      ')',
      field('body', $.compound_statement)
    ),

    finally_clause: $ => seq(
      keyword('finally'),
      field('body', $.compound_statement)
    ),

    goto_statement: $ => seq(
      keyword('goto'), $.name, $._semicolon
    ),

    continue_statement: $ => seq(
      keyword('continue'), optional($._expression), $._semicolon
    ),

    break_statement: $ => seq(
      keyword('break'), optional($._expression), $._semicolon
    ),

    integer: $ => {
      const decimal = /[1-9]\d*/
      const octal = /0[0-7]*/
      const hex = /0[xX][0-9a-fA-F]+/
      const binary = /0[bB][01]+/
      return token(choice(
        decimal,
        octal,
        hex,
        binary
      ))
  },

    return_statement: $ => seq(
      keyword('return'), optional($._expression), $._semicolon
    ),

    throw_statement: $ => seq(
      keyword('throw'), $._expression, $._semicolon
    ),

    while_statement: $ => seq(
      keyword('while'),
      field('condition', $.parenthesized_expression),
      choice(
        field('body', $._statement),
        seq(
          field('body', $.colon_block),
          keyword('endwhile'),
          $._semicolon
        )
      )
    ),

    do_statement: $ => seq(
      keyword('do'),
      field('body', $._statement),
      keyword('while'),
      field('condition', $.parenthesized_expression),
      $._semicolon
    ),

    for_statement: $ => seq(
      keyword('for'),
      '(',
      optional($._expressions),
      ';',
      optional($._expressions),
      ';',
      optional($._expressions),
      ')',
      choice(
        $._semicolon,
        $._statement,
        seq(':', repeat($._statement), keyword('endfor'), $._semicolon)
      )
    ),

    _expressions: $ => choice(
      $._expression,
      $.sequence_expression
    ),

    sequence_expression: $ => prec(PREC.COMMA, seq(
     $._expression, ',', choice($.sequence_expression, $._expression))
   ),

    foreach_statement: $ => seq(
      keyword('foreach'),
      '(',
      $._expression,
      keyword('as'),
      choice(
        alias($.foreach_pair, $.pair),
        $._foreach_value
      ),
      ')',
      choice(
        $._semicolon,
        field('body', $._statement),
        seq(
          field('body', $.colon_block),
          keyword('endforeach'),
          $._semicolon
        )
      )
    ),

    foreach_pair: $ => seq($._expression, '=>', $._foreach_value),

    _foreach_value: $ => choice(
      seq(optional('&'), $._expression),
      $.list_literal
    ),

    if_statement: $ => prec.right(seq(
      keyword('if'),
      field('condition', $.parenthesized_expression),
      choice(
        seq(
          field('body', $._statement),
          repeat(field('alternative', $.else_if_clause)),
          optional(field('alternative', $.else_clause))
        ),
        seq(
          field('body', $.colon_block),
          repeat(field('alternative', alias($.else_if_clause_2, $.else_if_clause))),
          optional(field('alternative', alias($.else_clause_2, $.else_clause))),
          keyword('endif'),
          $._semicolon
        )
      )
    )),

    colon_block: $ => seq(
      ':',
      repeat($._statement)
    ),

    else_if_clause: $ => seq(
      keyword('elseif'),
      field('condition', $.parenthesized_expression),
      field('body', $._statement)
    ),

    else_clause: $ => seq(
      keyword('else'),
      field('body', $._statement)
    ),

    else_if_clause_2: $ => seq(
      keyword('elseif'),
      field('condition', $.parenthesized_expression),
      field('body', $.colon_block)
    ),

    else_clause_2: $ => seq(
      keyword('else'),
      field('body', $.colon_block)
    ),

    switch_statement: $ => seq(
      keyword('switch'),
      field('condition', $.parenthesized_expression),
      field('body', $.switch_block)
    ),

    switch_block: $ => choice(
      seq(
        '{',
        repeat(choice($.case_statement, $.default_statement)),
        '}'
      ),
      seq(
        ':',
        repeat(choice($.case_statement, $.default_statement)),
        keyword('endswitch'),
        $._semicolon
      )
    ),

    case_statement: $ => seq(
      keyword('case'),
      field('value', $._expression),
      choice(':', ';'),
      repeat($._statement)
    ),

    default_statement: $ => seq(
      keyword('default'),
      choice(':', ';'),
      repeat($._statement)
    ),

    compound_statement: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    named_label_statement: $ => seq(
      $.name,
      ':'
    ),

    expression_statement: $ => seq(
      $._expression,
      $._semicolon
    ),

    _expression: $ => choice(
      $.conditional_expression,
      $.augmented_assignment_expression,
      $.assignment_expression,
      $.yield_expression,
      $._unary_expression,
      $.binary_expression,
      $.include_expression,
      $.include_once_expression,
      $.require_expression,
      $.require_once_expression
    ),

    _unary_expression: $ => choice(
      $.clone_expression,
      $._primary_expression,
      $.exponentiation_expression,
      $.unary_op_expression,
      $.cast_expression
    ),

    unary_op_expression: $ => choice(
      seq('@', $._expression),
      prec.left(PREC.NEG, seq(choice('+', '-', '~', '!'), $._expression))
    ),

    exponentiation_expression: $ => prec.right(PREC.TIMES, seq(
      choice($.clone_expression, $._primary_expression),
      '**',
      choice($.exponentiation_expression, $.clone_expression, $._primary_expression)
    )),

    clone_expression: $ => seq(
      'clone', $._primary_expression
    ),

    _primary_expression: $ => choice(
      $._variable,
      $._literal,
      $.class_constant_access_expression,
      $.qualified_name,
      $.array_creation_expression,
      $.print_intrinsic,
      $.anonymous_function_creation_expression,
      $.object_creation_expression,
      $.update_expression,
      $.shell_command_expression,
      $.parenthesized_expression,
    ),

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    class_constant_access_expression: $ => seq(
      $._scope_resolution_qualifier,
      '::',
      choice($.name, alias($._reserved_identifier, $.name))
    ),

    print_intrinsic: $ => seq(
      'print', $._expression
    ),

    anonymous_function_creation_expression: $ => seq(
      optional(keyword('static')),
      keyword('function'),
      optional('&'),
      field('parameters', $.formal_parameters),
      optional($.anonymous_function_use_clause),
      optional($._return_type),
      field('body', $.compound_statement)
    ),

    anonymous_function_use_clause: $ => seq(
      keyword('use'),
      '(',
      commaSep1(seq(optional('&'), $.variable_name)),
      ')'
    ),

    object_creation_expression: $ => prec.right(PREC.NEW, choice(
      seq(
        'new',
        $._class_type_designator,
        optional($.arguments)
      ),
      seq(
        'new',
        keyword('class'),
        optional($.arguments),
        optional($.base_clause),
        optional($.class_interface_clause),
        $.declaration_list
      )
    )),

    _class_type_designator: $ => choice(
      $.qualified_name,
      $.subscript_expression,
      $.member_access_expression,
      $.scoped_property_access_expression,
      $._variable_name
    ),

    update_expression: $ => prec.left(PREC.INC, choice(
      seq($._variable, '++'),
      seq($._variable, '--'),
      seq('++', $._variable),
      seq('--', $._variable)
    )),

    shell_command_expression: $ => token(seq(
      '`', double_quote_chars(), '`'
    )),

    cast_expression: $ => prec(PREC.CAST, seq(
      '(', field('type', $.cast_type), ')',
      field('value', $._unary_expression)
    )),

    cast_variable: $ => prec(PREC.CAST, seq(
      '(', field('type', $.cast_type), ')',
      field('value', $._variable)
    )),

    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      field('left', choice(
        $._variable,
        $.list_literal,
        $.array_creation_expression
      )),
      '=',
      optional('&'),
      field('right', $._expression)
    )),

    conditional_expression: $ => prec.left(PREC.TERNARY, seq(
      field('condition', $._expression),
      '?',
      field('body', optional($._expression)),
      ':',
      field('alternative', $._expression)
    )),

    augmented_assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      field('left', $._variable),
      field('operator', choice(
        '**=',
        '*=',
        '/=',
        '%=',
        '+=',
        '-=',
        '.=',
        '<<=',
        '>>=',
        '&=',
        '^=',
        '|='
      )),
      field('right', $._expression)
    )),

    _variable: $ => choice(
      alias($.cast_variable, $.cast_expression),
      $._callable_variable,
      $.scoped_property_access_expression,
      $.member_access_expression,
    ),

    member_access_expression: $ => prec(PREC.MEMBER, seq(
      field('object', $._dereferencable_expression),
      '->',
      $._member_name
    )),

    scoped_property_access_expression: $ => prec(PREC.MEMBER, seq(
      field('scope', $._scope_resolution_qualifier),
      '::',
      field('name', $._variable_name)
    )),

    list_literal: $ => seq(
      'list',
      '(',
      commaSep(optional(choice(
        choice($.list_literal, $._variable),
        seq($._expression, '=>', choice($.list_literal, $._variable))
      ))),
      ')'
    ),

    _callable_variable: $ => choice(
      $._variable_name,
      $.subscript_expression,
      $.member_call_expression,
      $.scoped_call_expression,
      $.function_call_expression
    ),

    function_call_expression: $ => prec(PREC.CALL, seq(
      field('function', choice($.qualified_name, $._callable_expression)),
      field('arguments', $.arguments)
    )),

    _callable_expression: $ => choice(
      $._callable_variable,
      $.parenthesized_expression,
      $.array_creation_expression,
      $._string
    ),

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    scoped_call_expression: $ => prec(PREC.CALL, seq(
      field('scope', $._scope_resolution_qualifier),
      '::',
      $._member_name,
      field('arguments', $.arguments)
    )),

    _scope_resolution_qualifier: $ => choice(
      $.relative_scope,
      $.qualified_name,
      $._dereferencable_expression
    ),

    relative_scope: $ => prec(PREC.SCOPE, choice(
      'self',
      'parent',
      keyword('static')
    )),

    arguments: $ => seq(
      '(',
      commaSep(choice($.variadic_unpacking, $._expression)),
      ')'
    ),

    member_call_expression: $ => prec(PREC.CALL, seq(
      field('object', $._dereferencable_expression),
      '->',
      $._member_name,
      field('arguments', $.arguments)
    )),

    variadic_unpacking: $ => seq('...', $._expression),

    _member_name: $ => choice(
      field('name', choice(
        alias($._reserved_identifier, $.name),
        $.name,
        $._variable_name,
      )),
      seq(
        '{',
        field('name', $._expression),
        '}'
      )
    ),

    subscript_expression: $ => seq(
      $._dereferencable_expression,
      choice(
        seq('[', optional($._expression), ']'),
        seq('{', $._expression, '}')
      )
    ),

    _dereferencable_expression: $ => prec(PREC.DEREF, choice(
      $._variable,
      $.class_constant_access_expression,
      $.parenthesized_expression,
      $.array_creation_expression,
      $._string
    )),

    array_creation_expression: $ => choice(
      seq('array', '(', commaSep($.array_element_initializer), optional(','), ')'),
      seq('[', commaSep($.array_element_initializer), optional(','), ']')
    ),

    string: $ => {
      const b_prefix = /[bB]/
      const single_quote_chars = repeat(/\\'|\\\\|\\?[^'\\]/)
      const single_quote_string = seq(
        optional(b_prefix), "'", single_quote_chars, "'"
      )

      const double_quote_string = seq(
        optional(b_prefix), '"', double_quote_chars(), '"'
      )

      return token(choice(
        single_quote_string,
        double_quote_string
        // nowdoc_string,
      ))
    },

    boolean: $ => /[Tt][Rr][Uu][Ee]|[Ff][Aa][Ll][Ss][Ee]/,

    null: $ => keyword('null', false),

    _string: $ => choice($.string, $.heredoc),

    dynamic_variable_name: $ => choice(
      seq('$', $._variable_name),
      seq('$', '{', $._expression, '}')
    ),

    _variable_name: $ => choice($.dynamic_variable_name, $.variable_name),

    variable_name: $ => seq('$', $.name),

    yield_expression: $ => prec.right(seq(
      'yield',
      optional(choice(
        $.array_element_initializer,
        seq('from', $._expression)
      ))
    )),

    array_element_initializer: $ => prec.right(choice(
      seq(optional('&'), $._expression),
      seq($._expression, '=>', optional('&'), $._expression)
    )),

    binary_expression: $ => choice(
      prec(PREC.INSTANCEOF, seq(
        field('left', $._unary_expression),
        field('operator', 'instanceof'),
        field('right', $._class_type_designator)
      )),
      prec.right(PREC.NULL_COALESCE, seq($._expression, '??', $._expression)),
      ...[
        [alias(/and|AND/, 'and'), PREC.LOGICAL_AND_2],
        [alias(/or|OR/, 'or'), PREC.LOGICAL_OR_2],
        [alias(/xor|XOR/, 'xor'), PREC.LOGICAL_XOR],
        ['||', PREC.LOGICAL_OR_1],
        ['&&', PREC.LOGICAL_AND_1],
        ['|', PREC.BITWISE_OR],
        ['^', PREC.BITWISE_XOR],
        ['&', PREC.BITWISE_AND],
        ['==', PREC.EQUALITY],
        ['!=', PREC.EQUALITY],
        ['<>', PREC.EQUALITY],
        ['===', PREC.EQUALITY],
        ['!==', PREC.EQUALITY],
        ['<', PREC.INEQUALITY],
        ['>', PREC.INEQUALITY],
        ['<=', PREC.INEQUALITY],
        ['>=', PREC.INEQUALITY],
        ['<=>', PREC.EQUALITY],
        ['<<', PREC.SHIFT],
        ['>>', PREC.SHIFT],
        ['+', PREC.PLUS],
        ['-', PREC.PLUS],
        ['.', PREC.PLUS],
        ['*', PREC.TIMES],
        ['/', PREC.TIMES],
        ['%', PREC.TIMES],
      ].map(([op, p]) => prec.left(p, seq(
        field('left', $._expression),
        field('operator', op),
        field('right', $._expression)
      )))
    ),

    include_expression: $ => seq(
      keyword('include'),
      $._expression
    ),

    include_once_expression: $ => seq(
      keyword('include_once'),
      $._expression
    ),

    require_expression: $ => seq(
      keyword('require'),
      $._expression
    ),

    require_once_expression: $ => seq(
      keyword('require_once'),
      $._expression
    ),

    name: $ => /[_a-zA-Z\u00A1-\u00ff][_a-zA-Z\u00A1-\u00ff\d]*/,

    _reserved_identifier: $ => choice(
      'self',
      'parent',
      keyword('static')
    ),

    comment: $ => token(choice(
      seq(
        choice('//', '#'),
        repeat(/[^?\r?\n]|\?[^>\r\n]/),
        optional(/\?\r?\n/)
      ),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    _semicolon: $ => choice($._automatic_semicolon, ';')
  }
})

function keyword(word, aliasAsWord = true) {
  let pattern = ''
  for (const letter of word) {
    pattern += `[${letter}${letter.toLocaleUpperCase()}]`
  }
  let result = new RegExp(pattern)
  if (aliasAsWord) result = alias(result, word)
  return result
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}

function double_quote_chars() {
  const dq_simple_escapes = /\\"|\\\\|\\\$|\\e|\\f|\\n|\\r|\\t|\\v/
  const octal_digit = /[0-7]/
  const dq_octal_escapes = seq('\\', octal_digit, optional(octal_digit), optional(octal_digit))
  const hex_digit = /\d|a-f|A-F/
  const dq_hex_escapes = seq(
    /\\[xX]/,
    hex_digit,
    optional(hex_digit)
  )

  const dq_unicode_escapes = seq('\\u{', repeat1(hex_digit), '}')
  const dq_escapes = choice(dq_simple_escapes, dq_octal_escapes, dq_hex_escapes, dq_unicode_escapes)
  return repeat(choice(dq_escapes, /[^"\\]|\\[^"\\$efnrtv0-7]/))
}
