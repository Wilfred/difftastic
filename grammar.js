const PREC = {
  ASSIGNMENT: -1,
  CONDITIONAL: -2,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SIZEOF: 8,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  CAST: 12,
  UNARY: 13,
  CALL: 14,
  FIELD: 15,
  SUBSCRIPT: 16
};

module.exports = grammar({
  name: 'c',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  inline: $ => [
    $._statement,
    $._top_level_item,
    $._compound_statement_item,
    $._type_identifier,
    $._field_identifier,
    $._statement_identifier,
  ],

  conflicts: $ => [
    [$._type_specifier, $._declarator],
    [$._type_specifier, $._declarator, $.macro_type_specifier],
    [$._type_specifier, $._expression],
    [$._type_specifier, $._expression, $.macro_type_specifier],
    [$._type_specifier, $.macro_type_specifier],
    [$.sized_type_specifier],
  ],

  rules: {
    translation_unit: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $.function_definition,
      $.linkage_specification,
      $.declaration,
      $.type_definition,
      $._empty_declaration,
      $.preproc_if,
      $.preproc_ifdef,
      $.preproc_include,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_call
    ),

    _compound_statement_item: $ => choice(
      $._statement,
      $.declaration,
      $.type_definition,
      $._empty_declaration,
      alias($.preproc_if_in_compound_statement, $.preproc_if),
      alias($.preproc_ifdef_in_compound_statement, $.preproc_ifdef),
      $.preproc_include,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_call
    ),

    // Preprocesser

    preproc_include: $ => seq(
      preprocessor('include'),
      choice($.string_literal, $.system_lib_string)
    ),

    preproc_def: $ => seq(
      preprocessor('define'),
      $.identifier,
      optional(seq(/[ \t]+/, $.preproc_arg)),
      '\n'
    ),

    preproc_function_def: $ => seq(
      preprocessor('define'),
      $.identifier,
      $.preproc_params,
      optional($.preproc_arg),
      '\n'
    ),

    preproc_params: $ => seq(
      '(', commaSep(choice($.identifier, '...')), ')'
    ),

    preproc_call: $ => seq(
      $.preproc_directive,
      $.preproc_arg
    ),

    preproc_if: $ => seq(
      preprocessor('if'),
      $.preproc_arg,
      repeat($._top_level_item),
      optional(choice($.preproc_else, $.preproc_elif)),
      preprocessor('endif')
    ),

    preproc_if_in_compound_statement: $ => seq(
      preprocessor('if'),
      $.preproc_arg,
      repeat($._compound_statement_item),
      optional(choice(
        alias($.preproc_else_in_compound_statement, $.preproc_else),
        alias($.preproc_elif_in_compound_statement, $.preproc_elif)
      )),
      preprocessor('endif')
    ),

    preproc_ifdef: $ => seq(
      choice(preprocessor('ifdef'), preprocessor('ifndef')),
      $.identifier,
      repeat($._top_level_item),
      optional(choice($.preproc_else, $.preproc_elif)),
      preprocessor('endif')
    ),

    preproc_ifdef_in_compound_statement: $ => seq(
      choice(preprocessor('ifdef'), preprocessor('ifndef')),
      $.identifier,
      repeat($._compound_statement_item),
      optional(choice(
        alias($.preproc_else_in_compound_statement, $.preproc_else),
        alias($.preproc_elif_in_compound_statement, $.preproc_elif)
      )),
      preprocessor('endif')
    ),

    preproc_elif: $ => seq(
      preprocessor('elif'),
      $.preproc_arg,
      repeat($._top_level_item),
      optional(choice($.preproc_elif, $.preproc_else))
    ),

    preproc_elif_in_compound_statement: $ => seq(
      preprocessor('elif'),
      $.preproc_arg,
      repeat($._compound_statement_item),
      optional(choice(
        alias($.preproc_elif_in_compound_statement, $.preproc_elif),
        alias($.preproc_else_in_compound_statement, $.preproc_else)
      ))
    ),

    preproc_else: $ => seq(
      preprocessor('else'),
      repeat($._top_level_item)
    ),

    preproc_else_in_compound_statement: $ => seq(
      preprocessor('else'),
      repeat($._compound_statement_item)
    ),

    preproc_directive: $ => /#[ \t]*\a\w*/,
    preproc_arg: $ => token(prec(-1, repeat1(choice(/./, '\\\n')))),

    // Main Grammar

    function_definition: $ => seq(
      $._declaration_specifiers,
      $._declarator,
      $.compound_statement
    ),

    declaration: $ => seq(
      $._declaration_specifiers,
      commaSep1(choice(
        $._declarator,
        $.init_declarator
      )),
      ';'
    ),

    type_definition: $ => seq(
      'typedef',
      repeat($.type_qualifier),
      $._type_specifier,
      $._type_declarator,
      ';'
    ),

    _declaration_specifiers: $ => seq(
      repeat(choice(
        $.storage_class_specifier,
        $.type_qualifier
      )),
      $._type_specifier,
      repeat(choice(
        $.storage_class_specifier,
        $.type_qualifier
      ))
    ),

    linkage_specification: $ => seq(
      'extern',
      $.string_literal,
      choice(
        $.function_definition,
        $.declaration,
        $.declaration_list
      )
    ),

    declaration_list: $ => seq(
      '{',
      repeat($._top_level_item),
      '}'
    ),

    _declarator: $ => choice(
      $.pointer_declarator,
      $.function_declarator,
      $.array_declarator,
      seq('(', $._declarator, ')'),
      $.identifier
    ),

    _field_declarator: $ => choice(
      alias($.pointer_field_declarator, $.pointer_declarator),
      alias($.function_field_declarator, $.function_declarator),
      alias($.array_field_declarator, $.array_declarator),
      seq('(', $._field_declarator, ')'),
      $._field_identifier
    ),

    _type_declarator: $ => choice(
      alias($.pointer_type_declarator, $.pointer_declarator),
      alias($.function_type_declarator, $.function_declarator),
      alias($.array_type_declarator, $.array_declarator),
      seq('(', $._type_declarator, ')'),
      $._type_identifier
    ),

    _abstract_declarator: $ => choice(
      $.abstract_pointer_declarator,
      $.abstract_function_declarator,
      $.abstract_array_declarator,
      prec(1, seq('(', $._abstract_declarator, ')'))
    ),

    pointer_declarator: $ => prec.right(seq('*', $._declarator)),
    pointer_field_declarator: $ => prec.right(seq('*', $._field_declarator)),
    pointer_type_declarator: $ => prec.right(seq('*', $._type_declarator)),
    abstract_pointer_declarator: $ => prec.right(seq('*', optional($._abstract_declarator))),

    function_declarator: $ => prec(1, seq($._declarator, $.parameter_list)),
    function_field_declarator: $ => prec(1, seq($._field_declarator, $.parameter_list)),
    function_type_declarator: $ => prec(1, seq($._type_declarator, $.parameter_list)),
    abstract_function_declarator: $ => prec(1, seq(optional($._abstract_declarator), $.parameter_list)),

    array_declarator: $ => prec(1, seq(
      $._declarator,
      '[',
      optional($._declaration_specifiers),
      optional($._expression),
      ']'
    )),
    array_field_declarator: $ => prec(1, seq(
      $._field_declarator,
      '[',
      optional($._declaration_specifiers),
      optional($._expression),
      ']'
    )),
    array_type_declarator: $ => prec(1, seq(
      $._type_declarator,
      '[',
      optional($._declaration_specifiers),
      optional($._expression),
      ']'
    )),
    abstract_array_declarator: $ => prec(1, seq(
      optional($._abstract_declarator),
      '[',
      optional($._declaration_specifiers),
      optional($._expression),
      ']'
    )),

    init_declarator: $ => seq(
      $._declarator,
      '=',
      choice($.initializer_list, $._expression)
    ),

    compound_statement: $ => seq(
      '{',
      repeat($._compound_statement_item),
      '}'
    ),

    storage_class_specifier: $ => choice(
      'extern',
      'static' ,
      'auto',
      'register',
      'inline'
    ),

    type_qualifier: $ => choice(
      'const',
      'restrict',
      'volatile'
    ),

    _type_specifier: $ => choice(
      $.struct_specifier,
      $.union_specifier,
      $.enum_specifier,
      $.macro_type_specifier,
      $.sized_type_specifier,
      $.primitive_type,
      $._type_identifier
    ),

    sized_type_specifier: $ => seq(
      repeat1(choice(
        'unsigned',
        'long',
        'short'
      )),
      optional(choice(
        prec.dynamic(-1, $._type_identifier),
        $.primitive_type
      ))
    ),

    primitive_type: $ => token(prec(1, choice(
      'bool',
      'char',
      'int',
      'float',
      'double',
      'void',
      /u?int(8|16|32|64|ptr)_t/,
      /s?size_t/
    ))),

    enum_specifier: $ => seq(
      'enum',
      choice(
        seq(
          $._type_identifier,
          optional($.enumerator_list)
        ),
        $.enumerator_list
      )
    ),

    enumerator_list: $ => seq(
      '{',
      commaSep($.enumerator),
      optional(','),
      '}'
    ),

    struct_specifier: $ => seq(
      'struct',
      choice(
        seq(
          $._type_identifier,
          optional($.field_declaration_list)
        ),
        $.field_declaration_list
      )
    ),

    union_specifier: $ => seq(
      'union',
      choice(
        seq(
          $._type_identifier,
          optional($.field_declaration_list)
        ),
        $.field_declaration_list
      )
    ),

    field_declaration_list: $ => seq(
      '{',
      repeat($.field_declaration),
      '}'
    ),

    field_declaration: $ => seq(
      $._declaration_specifiers,
      commaSep($._field_declarator),
      optional(seq(':', $._expression)),
      ';'
    ),

    enumerator: $ => seq(
      $.identifier,
      optional(seq('=', $._expression))
    ),

    parameter_list: $ => prec.dynamic(1, seq(
      '(',
      commaSep(choice($.parameter_declaration, '...')),
      ')'
    )),

    parameter_declaration: $ => seq(
      $._declaration_specifiers,
      optional(choice($._declarator, $._abstract_declarator))
    ),

    // Statements

    _statement: $ => choice(
      $.labeled_statement,
      $.compound_statement,
      $.expression_statement,
      $.if_statement,
      $.switch_statement,
      $.case_statement,
      $.do_statement,
      $.while_statement,
      $.for_statement,
      $.return_statement,
      $.break_statement,
      $.continue_statement,
      $.goto_statement
    ),

    labeled_statement: $ => seq(
      $._statement_identifier,
      ':',
      $._statement
    ),

    expression_statement: $ => seq(
      optional(choice(
        $._expression,
        $.comma_expression
      )),
      ';'
    ),

    if_statement: $ => prec.right(seq(
      'if',
      '(', $._expression, ')',
      $._statement,
      optional(seq(
        'else',
        $._statement
      ))
    )),

    switch_statement: $ => seq(
      'switch',
      '(', $._expression, ')',
      $._statement
    ),

    case_statement: $ => seq(
      choice(
        seq('case', $._expression),
        'default'
      ),
      ':',
      choice(
        $._statement,
        $.declaration,
        $.type_definition
      )
    ),

    while_statement: $ => seq(
      'while',
      '(', $._expression, ')',
      $._statement
    ),

    do_statement: $ => seq(
      'do',
      $._statement,
      'while',
      '(', $._expression, ')'
    ),

    for_statement: $ => seq(
      'for',
      '(',
      choice(
        $.declaration,
        seq(optional($._expression), ';')
      ),
      optional($._expression), ';',
      commaSep($._expression),
      ')',
      $._statement
    ),

    return_statement: $ => seq(
      'return',
      optional($._expression),
      ';'
    ),

    break_statement: $ => seq(
      'break', ';'
    ),

    continue_statement: $ => seq(
      'continue', ';'
    ),

    goto_statement: $ => seq(
      'goto',
      $._statement_identifier,
      ';'
    ),

    // Expressions

    _expression: $ => choice(
      $.conditional_expression,
      $.assignment_expression,
      $.logical_expression,
      $.bitwise_expression,
      $.equality_expression,
      $.relational_expression,
      $.shift_expression,
      $.math_expression,
      $.cast_expression,
      $.pointer_expression,
      $.sizeof_expression,
      $.subscript_expression,
      $.call_expression,
      $.field_expression,
      $.compound_literal_expression,
      $.identifier,
      $.number_literal,
      $.string_literal,
      $.true,
      $.false,
      $.null,
      $.concatenated_string,
      $.char_literal,
      $.parenthesized_expression
    ),

    comma_expression: $ => seq(
      $._expression,
      ',',
      choice($._expression, $.comma_expression)
    ),

    conditional_expression: $ => prec.right(PREC.CONDITIONAL, seq(
      $._expression,
      '?',
      $._expression,
      ':',
      $._expression
    )),

    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      $._expression,
      choice(
        '=',
        '*=',
        '/=',
        '%=',
        '+=',
        '-=',
        '<<=',
        '>>=',
        '&=',
        '^=',
        '|='
      ),
      $._expression
    )),

    pointer_expression: $ => choice(
      prec.left(PREC.UNARY, seq('*', $._expression)),
      prec.left(PREC.UNARY, seq('&', $._expression))
    ),

    logical_expression: $ => choice(
      prec.left(PREC.LOGICAL_OR, seq($._expression, '||', $._expression)),
      prec.left(PREC.LOGICAL_AND, seq($._expression, '&&', $._expression)),
      prec.left(PREC.UNARY, seq('!', $._expression))
    ),

    bitwise_expression: $ => choice(
      prec.left(PREC.INCLUSIVE_OR, seq($._expression, '|', $._expression)),
      prec.left(PREC.EXCLUSIVE_OR, seq($._expression, '^', $._expression)),
      prec.left(PREC.BITWISE_AND, seq($._expression, '&', $._expression)),
      prec.left(PREC.UNARY, seq('~', $._expression))
    ),

    equality_expression: $ => prec.left(PREC.EQUAL, seq(
      $._expression, choice('==', '!='), $._expression
    )),

    relational_expression: $ => prec.left(PREC.RELATIONAL, seq(
      $._expression, choice('<', '>', '<=', '>='), $._expression
    )),

    shift_expression: $ => prec.left(PREC.SHIFT, seq(
      $._expression, choice('<<', '>>'), $._expression)
    ),

    math_expression: $ => choice(
      prec.left(PREC.ADD, seq($._expression, '+', $._expression)),
      prec.left(PREC.ADD, seq($._expression, '-', $._expression)),
      prec.left(PREC.MULTIPLY, seq($._expression, '*', $._expression)),
      prec.left(PREC.MULTIPLY, seq($._expression, '/', $._expression)),
      prec.left(PREC.MULTIPLY, seq($._expression, '%', $._expression)),
      prec.right(PREC.UNARY, seq('-', $._expression)),
      prec.right(PREC.UNARY, seq('+', $._expression)),
      prec.right(PREC.UNARY, seq(choice('--', '++'), $._expression)),
      prec.right(PREC.UNARY, seq($._expression, choice('++', '--')))
    ),

    cast_expression: $ => prec(PREC.CAST, seq(
      '(',
      $.type_descriptor,
      ')',
      $._expression
    )),

    type_descriptor: $ => seq(
      repeat($.type_qualifier),
      $._type_specifier,
      optional($._abstract_declarator)
    ),

    sizeof_expression: $ => prec(PREC.SIZEOF, seq(
      'sizeof',
      choice(
        $._expression,
        seq('(', $.type_descriptor, ')')
      )
    )),

    subscript_expression: $ => prec(PREC.SUBSCRIPT, seq(
      $._expression, '[', $._expression, ']')
    ),

    call_expression: $ => prec(PREC.CALL, seq($._expression, $.argument_list)),

    argument_list: $ => prec.dynamic(1, seq('(', commaSep($._expression), ')')),

    field_expression: $ => seq(
      prec(PREC.FIELD, seq(
        $._expression,
        choice('.', '->')
      )),
      $._field_identifier
    ),

    compound_literal_expression: $ => seq(
      '(',
      $.type_descriptor,
      ')',
      $.initializer_list
    ),

    parenthesized_expression: $ => seq(
      '(',
      choice($._expression, $.comma_expression),
      ')'
    ),

    initializer_list: $ => seq(
      '{',
      optional(seq(
        $._initializer_list_contents,
        optional(',')
      )),
      '}'
    ),

    _initializer_list_contents: $ => commaSepTrailing(
      $._initializer_list_contents,
      seq(
        optional(seq(repeat1($.designator), '=')),
        choice($._expression, $.initializer_list)
      )
    ),

    designator: $ => choice(
      seq('[', $._expression, ']'),
      seq('.', $._field_identifier)
    ),

    initializer: $ => choice(
      $._expression,
      $.initializer_list
    ),

    number_literal: $ => token(seq(
      choice(
        /\d+(\.\d+)?/,
        /\d+u/,
        seq('0x', /[0-9a-fA-f]+/),
        seq('0b', /[01]+/)
      ),
      repeat(choice('u', 'l', 'U', 'L'))
    )),

    char_literal: $ => token(seq(
      '\'',
      choice(
        seq(optional('\\'), /[^']/),
        seq('\\', '\'')
      ),
      '\''
    )),

    concatenated_string: $ => seq(
      $.string_literal,
      repeat1($.string_literal)
    ),

    string_literal: $ => token(seq(
      '"',
      repeat(choice(/[^\\"\n]/, /\\./)),
      '"')
    ),

    system_lib_string: $ => token(seq(
      '<',
      repeat(choice(/[^>]/, '\\>')),
      '>')
    ),

    identifier: $ => /[\a_][\a\d_]*/,

    true: $ => token(prec(1, choice('TRUE', 'true'))),
    false: $ => token(prec(1, choice('FALSE', 'false'))),
    null: $ => 'NULL',

    _type_identifier: $ => alias($.identifier, $.type_identifier),
    _field_identifier: $ => alias($.identifier, $.field_identifier),
    _statement_identifier: $ => alias($.identifier, $.statement_identifier),

    _empty_declaration: $ => seq(
      $._declaration_specifiers,
      ';'
    ),

    macro_type_specifier: $ => seq(
      $.identifier,
      '(',
      $.type_descriptor,
      ')'
    ),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
});

module.exports.PREC = PREC

function preprocessor (command) {
  return alias(new RegExp('#[ \t]*' + command), '#' + command)
}

function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSepTrailing (recurSymbol, rule) {
  return choice(rule, seq(recurSymbol, ',', rule))
}
