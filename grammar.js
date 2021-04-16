const DIGITS = token(sep1(/[0-9]+/, /_+/))
const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, '_'))
const PREC = {
  // https://introcs.cs.princeton.edu/java/11precedence/
  COMMENT: 0,      // //  /*  */
  ASSIGN: 1,       // =  += -=  *=  /=  %=  &=  ^=  |=  <<=  >>=  >>>=
  SWITCH_EXP: 1,   // always prefer to parse switch as expression over statement
  DECL: 2,
  ELEMENT_VAL: 2,
  TERNARY: 3,      // ?:
  OR: 4,           // ||
  AND: 5,          // &&
  BIT_OR: 6,       // |
  BIT_XOR: 7,      // ^
  BIT_AND: 8,      // &
  EQUALITY: 9,     // ==  !=
  GENERIC: 10,
  REL: 10,         // <  <=  >  >=  instanceof
  SHIFT: 11,       // <<  >>  >>>
  ADD: 12,         // +  -
  MULT: 13,        // *  /  %
  CAST: 14,        // (Type)
  OBJ_INST: 14,    // new
  UNARY: 15,       // ++a  --a  a++  a--  +  -  !  ~
  ARRAY: 16,       // [Index]
  OBJ_ACCESS: 16,  // .
  PARENS: 16,      // (Expression)
};

module.exports = grammar({
  name: 'java',

  extras: $ => [
    $.comment,
    /\s/
  ],

  supertypes: $ => [
    $.expression,
    $.declaration,
    $.statement,
    $.primary_expression,
    $._literal,
    $._type,
    $._simple_type,
    $._unannotated_type,
  ],

  inline: $ => [
    $._name,
    $._simple_type,
    $._reserved_identifier,
    $._class_body_declaration,
    $._variable_initializer
  ],

  conflicts: $ => [
    [$.modifiers, $.annotated_type, $.receiver_parameter],
    [$.modifiers, $.annotated_type, $.module_declaration, $.package_declaration],
    [$._unannotated_type, $.primary_expression, $.inferred_parameters],
    [$._unannotated_type, $.primary_expression],
    [$._unannotated_type, $.primary_expression, $.scoped_type_identifier],
    [$._unannotated_type, $.scoped_type_identifier],
    [$._unannotated_type, $.generic_type],
    [$.generic_type, $.primary_expression],
    // Only conflicts in switch expressions
    [$.lambda_expression, $.primary_expression],
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat($.statement),

    // Literals

    _literal: $ => choice(
      $.decimal_integer_literal,
      $.hex_integer_literal,
      $.octal_integer_literal,
      $.binary_integer_literal,
      $.decimal_floating_point_literal,
      $.hex_floating_point_literal,
      $.true,
      $.false,
      $.character_literal,
      $.string_literal,
      $.null_literal
    ),

    decimal_integer_literal: $ => token(seq(
      DIGITS,
      optional(choice('l', 'L'))
    )),

    hex_integer_literal: $ => token(seq(
      choice('0x', '0X'),
      HEX_DIGITS,
      optional(choice('l', 'L'))
    )),

    octal_integer_literal: $ => token(seq(
      choice('0o', '0O'),
      sep1(/[0-7]+/, '_'),
      optional(choice('l', 'L'))
    )),

    binary_integer_literal: $ => token(seq(
      choice('0b', '0B'),
      sep1(/[01]+/, '_'),
      optional(choice('l', 'L'))
    )),

    decimal_floating_point_literal: $ => token(choice(
      seq(DIGITS, '.', optional(DIGITS), optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
      seq('.', DIGITS, optional(seq((/[eE]/), optional(choice('-','+')), DIGITS)), optional(/[fFdD]/)),
      seq(DIGITS, /[eEpP]/, optional(choice('-','+')), DIGITS, optional(/[fFdD]/)),
      seq(DIGITS, optional(seq((/[eE]/), optional(choice('-','+')), DIGITS)), (/[fFdD]/))
    )),

    hex_floating_point_literal: $ => token(seq(
      choice('0x', '0X'),
      choice(
        seq(HEX_DIGITS, optional('.')),
        seq(optional(HEX_DIGITS), '.', HEX_DIGITS)
      ),
      optional(seq(
        /[eEpP]/,
        optional(choice('-','+')),
        DIGITS,
        optional(/[fFdD]/)
      ))
    )),

    true: $ => 'true',

    false: $ => 'false',

    character_literal: $ => token(seq(
      "'",
      repeat1(choice(
        /[^\\'\n]/,
        /\\./,
        /\\\n/
      )),
      "'"
    )),

    string_literal: $ => token(choice(
      seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),
      // TODO: support multiline string literals by debugging the following:
      // seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"', '+', /\n/, '"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)))
    )),

    null_literal: $ => 'null',

    // Expressions

    expression: $ => choice(
      $.assignment_expression,
      $.binary_expression,
      $.instanceof_expression,
      $.lambda_expression,
      $.ternary_expression,
      $.update_expression,
      $.primary_expression,
      $.unary_expression,
      $.cast_expression,
      prec(PREC.SWITCH_EXP, $.switch_expression), 
    ),

    cast_expression: $ => prec(PREC.CAST, seq(
      '(',
      sep1(field('type', $._type), '&'),
      ')',
      field('value', $.expression)
    )),

    assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      field('left', choice(
        $.identifier,
        $._reserved_identifier,
        $.field_access,
        $.array_access
      )),
      field('operator', choice('=', '+=', '-=', '*=', '/=', '&=', '|=', '^=', '%=', '<<=', '>>=', '>>>=')),
      field('right', $.expression)
    )),

    binary_expression: $ => choice(
      ...[
      ['>', PREC.REL],
      ['<', PREC.REL],
      ['>=', PREC.REL],
      ['<=', PREC.REL],
      ['==', PREC.EQUALITY],
      ['!=', PREC.EQUALITY],
      ['&&', PREC.AND],
      ['||', PREC.OR],
      ['+', PREC.ADD],
      ['-', PREC.ADD],
      ['*', PREC.MULT],
      ['/', PREC.MULT],
      ['&', PREC.BIT_AND],
      ['|', PREC.BIT_OR],
      ['^', PREC.BIT_XOR],
      ['%', PREC.MULT],
      ['<<', PREC.SHIFT],
      ['>>', PREC.SHIFT],
      ['>>>', PREC.SHIFT],
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq(
        field('left', $.expression),
        field('operator', operator),
        field('right', $.expression)
      ))
    )),

    instanceof_expression: $ => prec(PREC.REL, seq(
      field('left', $.expression),
      'instanceof',
      field('right', $._type)
    )),

    lambda_expression: $ => seq(
      field('parameters', choice(
        $.identifier, $.formal_parameters, $.inferred_parameters
      )),
      '->',
      field('body', choice($.expression, $.block))
    ),

    inferred_parameters: $ => seq(
      '(',
      commaSep1($.identifier),
      ')'
    ),

    ternary_expression: $ => prec.right(PREC.TERNARY, seq(
      field('condition', $.expression),
      '?',
      field('consequence', $.expression),
      ':',
      field('alternative', $.expression)
    )),

    unary_expression: $ => choice(...[
      ['+', PREC.UNARY],
      ['-', PREC.UNARY],
      ['!', PREC.UNARY],
      ['~', PREC.UNARY],
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq(
        field('operator', operator),
        field('operand', $.expression)
      ))
    )),

    update_expression: $ => prec.left(PREC.UNARY, choice(
      // Post (in|de)crement is evaluated before pre (in|de)crement
      seq($.expression, '++'),
      seq($.expression, '--'),
      seq('++', $.expression),
      seq('--', $.expression)
    )),

    primary_expression: $ => choice(
      $._literal,
      $.class_literal,
      $.this,
      $.identifier,
      $._reserved_identifier,
      $.parenthesized_expression,
      $.object_creation_expression,
      $.field_access,
      $.array_access,
      $.method_invocation,
      $.method_reference,
      $.array_creation_expression,
    ),

    array_creation_expression: $ => prec.right(seq(
      'new',
      field('type', $._simple_type),
      choice(
        seq(
          field('dimensions', repeat1($.dimensions_expr)),
          field('dimensions', optional($.dimensions))
        ),
        seq(
          field('dimensions', $.dimensions),
          field('value', $.array_initializer)
        )
      )
    )),

    dimensions_expr: $ => seq(repeat($._annotation), '[', $.expression, ']'),

    parenthesized_expression: $ => seq('(', $.expression, ')'),

    class_literal: $ => seq($._unannotated_type, '.', 'class'),

    object_creation_expression: $ => choice(
      $._unqualified_object_creation_expression,
      seq($.primary_expression, '.', $._unqualified_object_creation_expression)
    ),

    _unqualified_object_creation_expression: $ => prec.right(seq(
      'new',
      field('type_arguments', optional($.type_arguments)),
      field('type', $._simple_type),
      field('arguments', $.argument_list),
      optional($.class_body)
    )),

    field_access: $ => seq(
      field('object', choice($.primary_expression, $.super)),
      optional(seq(
        '.',
        $.super
      )),
      '.',
      field('field', choice($.identifier, $._reserved_identifier, $.this))
    ),

    array_access: $ => seq(
      field('array', $.primary_expression),
      '[',
      field('index', $.expression),
      ']',
    ),

    method_invocation: $ => seq(
      choice(
        field('name', choice($.identifier, $._reserved_identifier)),
        seq(
          field('object', choice($.primary_expression, $.super)),
          '.',
          optional(seq(
            $.super,
            '.'
          )),
          field('type_arguments', optional($.type_arguments)),
          field('name', choice($.identifier, $._reserved_identifier)),
        )
      ),
      field('arguments', $.argument_list)
    ),

    argument_list: $ => seq('(', commaSep($.expression), ')'),

    method_reference: $ => seq(
      choice($._type, $.primary_expression, $.super),
      '::',
      optional($.type_arguments),
      choice('new', $.identifier)
    ),

    type_arguments: $ => seq(
      '<',
      commaSep(choice($._type, $.wildcard)),
      '>'
    ),

    wildcard: $ => seq(
      repeat($._annotation),
      '?',
      optional($._wildcard_bounds)
    ),

    _wildcard_bounds: $ => choice(
      seq('extends', $._type),
      seq($.super, $._type)
    ),

    dimensions: $ => prec.right(repeat1(
      seq(repeat($._annotation), '[', ']')
    )),

    switch_expression: $ => seq(
      'switch',
      field('condition', $.parenthesized_expression),
      field('body', $.switch_block)
    ),

    switch_block: $ => seq(
      '{',
      choice(
        repeat($.switch_block_statement_group), 
        repeat($.switch_rule)
      ),
      '}'
    ),

    switch_block_statement_group: $ => prec.left (seq(
        repeat1(seq($.switch_label, ':')),
        repeat($.statement),
    )),

    switch_rule: $ => seq(
      $.switch_label,
      '->',
      choice($.expression_statement, $.throw_statement, $.block)
     ),

    switch_label: $ => choice(
      seq('case', commaSep1($.expression)),
      'default'
    ),

    // Statements

    statement: $ => choice(
      $.declaration,
      $.expression_statement,
      $.labeled_statement,
      $.if_statement,
      $.while_statement,
      $.for_statement,
      $.enhanced_for_statement,
      $.block,
      ';',
      $.assert_statement,
      $.do_statement,
      $.break_statement,
      $.continue_statement,
      $.return_statement,
      $.yield_statement,
      $.switch_expression, //switch statements and expressions are identical
      $.synchronized_statement,
      $.local_variable_declaration,
      $.throw_statement,
      $.try_statement,
      $.try_with_resources_statement
    ),

    block: $ => seq(
      '{', repeat($.statement), '}'
    ),

    expression_statement: $ => seq(
      $.expression,
      ';'
    ),

    labeled_statement: $ => seq(
      $.identifier, ':', $.statement
    ),

    assert_statement: $ => choice(
      seq('assert', $.expression, ';'),
      seq('assert', $.expression, ':', $.expression, ';')
    ),

    do_statement: $ => seq(
      'do',
      field('body', $.statement),
      'while',
      field('condition', $.parenthesized_expression),
      ';'
    ),

    break_statement: $ => seq('break', optional($.identifier), ';'),

    continue_statement: $ => seq('continue', optional($.identifier), ';'),

    return_statement: $ => seq(
      'return',
      optional($.expression),
      ';'
    ),

    yield_statement: $ => seq(
      'yield',
      $.expression,
      ';'
    ),

    synchronized_statement: $ => seq(
      'synchronized',
      $.parenthesized_expression,
      field('body', $.block)
    ),

    throw_statement: $ => seq('throw', $.expression, ';'),

    try_statement: $ => seq(
      'try',
      field('body', $.block),
      choice(
        repeat1($.catch_clause),
        seq(repeat($.catch_clause), $.finally_clause)
      )
    ),

    catch_clause: $ => seq(
      'catch',
      '(',
      $.catch_formal_parameter,
      ')',
      field('body', $.block)
    ),

    catch_formal_parameter: $ => seq(
      optional($.modifiers),
      $.catch_type,
      $._variable_declarator_id
    ),

    catch_type: $ => sep1($._unannotated_type, '|'),

    finally_clause: $ => seq('finally', $.block),

    try_with_resources_statement: $ => seq(
      'try',
      field('resources', $.resource_specification),
      field('body', $.block),
      repeat($.catch_clause),
      optional($.finally_clause)
    ),

    resource_specification: $ => seq(
      '(', sep1($.resource, ';'), optional(';'), ')'
    ),

    resource: $ => choice(
      seq(
        optional($.modifiers),
        field('type', $._unannotated_type),
        $._variable_declarator_id,
        '=',
        field('value', $.expression)
      ),
      $.identifier,
      $.field_access
    ),

    if_statement: $ => prec.right(seq(
      'if',
      field('condition', $.parenthesized_expression),
      field('consequence', $.statement),
      optional(seq('else', field('alternative', $.statement)))
    )),

    while_statement: $ => seq(
      'while',
      field('condition', $.parenthesized_expression),
      field('body', $.statement)
    ),

    for_statement: $ => seq(
      'for', '(',
      choice(
        field('init', $.local_variable_declaration),
        seq(
          commaSep(field('init', $.expression)),
          ';'
        )
      ),
      field('condition', optional($.expression)), ';',
      commaSep(field('update', $.expression)), ')',
      field('body', $.statement)
    ),

    enhanced_for_statement: $ => seq(
      'for',
      '(',
      optional($.modifiers),
      field('type', $._unannotated_type),
      $._variable_declarator_id,
      ':',
      field('value', $.expression),
      ')',
      field('body', $.statement)
    ),

    // Annotations

    _annotation: $ => choice(
      $.marker_annotation,
      $.annotation
    ),

    marker_annotation: $ => seq(
      '@',
      field('name', $._name)
    ),

    annotation: $ => seq(
      '@',
      field('name', $._name),
      field('arguments', $.annotation_argument_list)
    ),

    annotation_argument_list: $ => seq(
      '(',
      choice(
        $._element_value,
        commaSep($.element_value_pair),
      ),
      ')'
    ),

    element_value_pair: $ => seq(
      field('key', $.identifier),
      '=',
      field('value', $._element_value)
    ),

    _element_value: $ => prec(PREC.ELEMENT_VAL, choice(
      $.expression,
      $.element_value_array_initializer,
      $._annotation
    )),

    element_value_array_initializer: $ => seq(
      '{',
      commaSep($._element_value),
      optional(','),
      '}'
    ),

    // Declarations

    declaration: $ => prec(PREC.DECL, choice(
      $.module_declaration,
      $.package_declaration,
      $.import_declaration,
      $.class_declaration,
      $.interface_declaration,
      $.annotation_type_declaration,
      $.enum_declaration,
    )),

    module_declaration: $ => seq(
      repeat($._annotation),
      optional('open'),
      'module',
      field('name', $._name),
      field('body', $.module_body)
    ),

    module_body: $ => seq(
      '{',
      repeat($.module_directive),
      '}'
    ),

    module_directive: $ => seq(choice(
      seq('requires', repeat($.requires_modifier), $._name),
      seq('exports', $._name, optional('to'), optional($._name), repeat(seq(',', $._name))),
      seq('opens', $._name, optional('to'), optional($._name), repeat(seq(',', $._name))),
      seq('uses', $._name),
      seq('provides', $._name, 'with', $._name, repeat(seq(',', $._name)))
    ), ';'),

    requires_modifier: $ => choice(
      'transitive',
      'static'
    ),

    package_declaration: $ => seq(
      repeat($._annotation),
      'package',
      $._name,
      ';'
    ),

    import_declaration: $ => seq(
      'import',
      optional('static'),
      $._name,
      optional(seq('.', $.asterisk)),
      ';'
    ),

    asterisk: $ => '*',

    enum_declaration: $ => seq(
      optional($.modifiers),
      'enum',
      field('name', $.identifier),
      field('interfaces', optional($.super_interfaces)),
      field('body', $.enum_body)
    ),

    enum_body: $ => seq(
      '{',
      commaSep($.enum_constant),
      optional(','),
      optional($.enum_body_declarations),
      '}'
    ),

    enum_body_declarations: $ => seq(
      ';',
      repeat($._class_body_declaration)
    ),

    enum_constant: $ => (seq(
      optional($.modifiers),
      field('name', $.identifier),
      field('arguments', optional($.argument_list)),
      field('body', optional($.class_body))
    )),

    class_declaration: $ => seq(
      optional($.modifiers),
      'class',
      field('name', $.identifier),
      optional(field('type_parameters', $.type_parameters)),
      optional(field('superclass', $.superclass)),
      optional(field('interfaces', $.super_interfaces)),
      field('body', $.class_body)
    ),

    modifiers: $ => repeat1(choice(
      $._annotation,
      'public',
      'protected',
      'private',
      'abstract',
      'static',
      'final',
      'strictfp',
      'default',
      'synchronized',
      'native',
      'transient',
      'volatile'
    )),

    type_parameters: $ => seq(
      '<', commaSep1($.type_parameter), '>'
    ),

    type_parameter: $ => seq(
      repeat($._annotation),
      $.identifier,
      optional($.type_bound)
    ),

    type_bound: $ => seq('extends', $._type, repeat(seq('&', $._type))),

    superclass: $ => seq(
      'extends',
      $._type
    ),

    super_interfaces: $ => seq(
      'implements',
      $.interface_type_list
    ),

    interface_type_list: $ => seq(
      $._type,
      repeat(seq(',', $._type))
    ),

    class_body: $ => seq(
      '{',
      repeat($._class_body_declaration),
      '}'
    ),

    _class_body_declaration: $ => choice(
      $.field_declaration,
      $.record_declaration,
      $.method_declaration,
      $.class_declaration,
      $.interface_declaration,
      $.annotation_type_declaration,
      $.enum_declaration,
      $.block,
      $.static_initializer,
      $.constructor_declaration,
      ';'
    ),

    static_initializer: $ => seq(
      'static',
      $.block
    ),

    constructor_declaration: $ => seq(
      optional($.modifiers),
      $._constructor_declarator,
      optional($.throws),
      field('body', $.constructor_body)
    ),

    _constructor_declarator: $ => seq(
      field('type_parameters', optional($.type_parameters)),
      field('name', $.identifier),
      field('parameters', $.formal_parameters)
    ),

    constructor_body: $ => seq(
      '{',
      optional($.explicit_constructor_invocation),
      repeat($.statement),
      '}'
    ),

    explicit_constructor_invocation: $ => seq(
      choice(
        seq(
          field('type_arguments', optional($.type_arguments)),
          field('constructor', choice($.this, $.super)),
        ),
        seq(
          field('object', choice($.primary_expression)),
          '.',
          field('type_arguments', optional($.type_arguments)),
          field('constructor', $.super),
        )
      ),
      field('arguments', $.argument_list),
      ';'
    ),

    _name: $ => choice(
      $.identifier,
      $._reserved_identifier,
      $.scoped_identifier
    ),

    scoped_identifier: $ => seq(
      field('scope', $._name),
      '.',
      field('name', $.identifier)
    ),

    field_declaration: $ => seq(
      optional($.modifiers),
      field('type', $._unannotated_type),
      $._variable_declarator_list,
      ';'
    ),

    record_declaration: $ => seq(
      optional($.modifiers),
      'record',
      field('name', $.identifier),
      field('parameters', $.formal_parameters),
      field('body', $.class_body) 
    ),

    annotation_type_declaration: $ => seq(
      optional($.modifiers),
      '@interface',
      field('name', $.identifier),
      field('body', $.annotation_type_body)
    ),

    annotation_type_body: $ => seq(
      '{', repeat(choice(
        $.annotation_type_element_declaration,
        $.constant_declaration,
        $.class_declaration,
        $.interface_declaration,
        $.annotation_type_declaration
      )),
      '}'
    ),

    annotation_type_element_declaration: $ => seq(
      optional($.modifiers),
      field('type', $._unannotated_type),
      field('name', $.identifier),
      '(', ')',
      field('dimensions', optional($.dimensions)),
      optional($._default_value),
      ';'
    ),

    _default_value: $ => seq(
      'default',
      field('value', $._element_value)
    ),

    interface_declaration: $ => seq(
      optional($.modifiers),
      'interface',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      optional($.extends_interfaces),
      field('body', $.interface_body)
    ),

    extends_interfaces: $ => seq(
      'extends',
      $.interface_type_list
    ),

    interface_body: $ => seq(
      '{',
      repeat(choice(
        $.constant_declaration,
        $.enum_declaration,
        $.method_declaration,
        $.class_declaration,
        $.interface_declaration,
        $.annotation_type_declaration,
        ';'
      )),
      '}'
    ),

    constant_declaration: $ => seq(
      optional($.modifiers),
      field('type', $._unannotated_type),
      $._variable_declarator_list,
      ';'
    ),

    _variable_declarator_list: $ => commaSep1(
      field('declarator', $.variable_declarator)
    ),

    variable_declarator: $ => seq(
      $._variable_declarator_id,
      optional(seq('=', field('value', $._variable_initializer)))
    ),

    _variable_declarator_id: $ => seq(
      field('name', choice($.identifier, $._reserved_identifier)),
      field('dimensions', optional($.dimensions))
    ),

    _variable_initializer: $ => choice(
      $.expression,
      $.array_initializer
    ),

    array_initializer: $ => seq(
      '{',
      commaSep($._variable_initializer),
      optional(','),
      '}'
    ),

    // Types

    _type: $ => choice(
      $._unannotated_type,
      $.annotated_type
    ),

    _unannotated_type: $ => choice(
      $._simple_type,
      $.array_type
    ),

    _simple_type: $ => choice(
      $.void_type,
      $.integral_type,
      $.floating_point_type,
      $.boolean_type,
      alias($.identifier, $.type_identifier),
      $.scoped_type_identifier,
      $.generic_type
    ),

    annotated_type: $ => seq(
      repeat1($._annotation),
      $._unannotated_type
    ),

    scoped_type_identifier: $ => seq(
      choice(
        alias($.identifier, $.type_identifier),
        $.scoped_type_identifier,
        $.generic_type
      ),
      '.',
      repeat($._annotation),
      alias($.identifier, $.type_identifier)
    ),

    generic_type: $ => prec.dynamic(PREC.GENERIC, seq(
      choice(
        alias($.identifier, $.type_identifier),
        $.scoped_type_identifier
      ),
      $.type_arguments
    )),

    array_type: $ => seq(
      field('element', $._unannotated_type),
      field('dimensions', $.dimensions)
    ),

    integral_type: $ => choice(
      'byte',
      'short',
      'int',
      'long',
      'char'
    ),

    floating_point_type: $ => choice(
      'float',
      'double'
    ),

    boolean_type: $ => 'boolean',

    void_type: $ => 'void',

    _method_header: $ => seq(
      optional(seq(
        field('type_parameters', $.type_parameters),
        repeat($._annotation)
      )),
      field('type', $._unannotated_type),
      $._method_declarator,
      optional($.throws)
    ),

    _method_declarator: $ => seq(
      field('name', choice($.identifier, $._reserved_identifier)),
      field('parameters', $.formal_parameters),
      field('dimensions', optional($.dimensions))
    ),

    formal_parameters: $ => seq(
      '(',
      optional($.receiver_parameter),
      commaSep(choice($.formal_parameter, $.spread_parameter)),
      ')'
    ),

    formal_parameter: $ => seq(
      optional($.modifiers),
      field('type', $._unannotated_type),
      $._variable_declarator_id
    ),

    receiver_parameter: $ => seq(
      repeat($._annotation),
      $._unannotated_type,
      optional(seq($.identifier, '.')),
      $.this
    ),

    spread_parameter: $ => seq(
      optional($.modifiers),
      $._unannotated_type,
      '...',
      $.variable_declarator
    ),

    throws: $ => seq(
      'throws', commaSep1($._type)
    ),

    local_variable_declaration: $ => seq(
      optional($.modifiers),
      field('type', $._unannotated_type),
      $._variable_declarator_list,
      ';'
    ),

    method_declaration: $ => seq(
      optional($.modifiers),
      $._method_header,
      choice(field('body', $.block), ';')
    ),

    _reserved_identifier: $ => alias(choice(
      'open',
      'module'
    ), $.identifier),

    this: $ => 'this',

    super: $ => 'super',

    // https://docs.oracle.com/javase/specs/jls/se8/html/jls-3.html#jls-IdentifierChars
    identifier: $ => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))),
  }
});

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
