const PREC = {
  PAREN_DECLARATOR: -10,
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

  word: $ => $.identifier,

  rules: {
    translation_unit: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $.function_definition,
      $.linkage_specification,
      $.declaration,
      $._statement,
      $.type_definition,
      $._empty_declaration,
      $.preproc_if,
      $.preproc_ifdef,
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
      optional($.preproc_arg),
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
      token.immediate('('), commaSep(choice($.identifier, '...')), ')'
    ),

    preproc_call: $ => seq(
      $.preproc_directive,
      optional($.preproc_arg),
      '\n'
    ),

    ...preprocIf('', $ => $._top_level_item),
    ...preprocIf( '_in_field_declaration_list', $ => $._field_declaration_list_item),

    preproc_directive: $ => /#[ \t]*[a-zA-Z]\w*/,
    preproc_arg: $ => token(prec(-1, repeat1(/.|\\\r?\n/))),

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
      commaSep1($._type_declarator),
      ';'
    ),

    _declaration_specifiers: $ => seq(
      repeat(choice(
        $.storage_class_specifier,
        $.type_qualifier,
        $.attribute_specifier
      )),
      $._type_specifier,
      repeat(choice(
        $.storage_class_specifier,
        $.type_qualifier,
        $.attribute_specifier
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

    attribute_specifier: $ => seq(
      '__attribute__',
      seq(
        '(',
        $.argument_list,
        ')'
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
      prec.dynamic(PREC.PAREN_DECLARATOR, seq('(', $._declarator, ')')),
      $.identifier
    ),

    _field_declarator: $ => choice(
      alias($.pointer_field_declarator, $.pointer_declarator),
      alias($.function_field_declarator, $.function_declarator),
      alias($.array_field_declarator, $.array_declarator),
      prec.dynamic(PREC.PAREN_DECLARATOR, seq('(', $._field_declarator, ')')),
      $._field_identifier
    ),

    _type_declarator: $ => choice(
      alias($.pointer_type_declarator, $.pointer_declarator),
      alias($.function_type_declarator, $.function_declarator),
      alias($.array_type_declarator, $.array_declarator),
      prec.dynamic(PREC.PAREN_DECLARATOR, seq('(', $._type_declarator, ')')),
      $._type_identifier
    ),

    _abstract_declarator: $ => choice(
      $.abstract_pointer_declarator,
      $.abstract_function_declarator,
      $.abstract_array_declarator,
      prec(1, seq('(', $._abstract_declarator, ')'))
    ),

    pointer_declarator: $ => prec.dynamic(1, prec.right(seq('*', repeat($.type_qualifier), $._declarator))),
    pointer_field_declarator: $ => prec.dynamic(1, prec.right(seq('*', repeat($.type_qualifier), $._field_declarator))),
    pointer_type_declarator: $ => prec.dynamic(1, prec.right(seq('*', repeat($.type_qualifier), $._type_declarator))),
    abstract_pointer_declarator: $ => prec.dynamic(1, prec.right(seq('*', repeat($.type_qualifier), optional($._abstract_declarator)))),

    function_declarator: $ => prec(1, seq($._declarator, $.parameter_list, repeat($.attribute_specifier))),
    function_field_declarator: $ => prec(1, seq($._field_declarator, $.parameter_list)),
    function_type_declarator: $ => prec(1, seq($._type_declarator, $.parameter_list)),
    abstract_function_declarator: $ => prec(1, seq(optional($._abstract_declarator), $.parameter_list)),

    array_declarator: $ => prec(1, seq(
      $._declarator,
      '[',
      repeat($.type_qualifier),
      optional(choice($._expression, '*')),
      ']'
    )),
    array_field_declarator: $ => prec(1, seq(
      $._field_declarator,
      '[',
      repeat($.type_qualifier),
      optional(choice($._expression, '*')),
      ']'
    )),
    array_type_declarator: $ => prec(1, seq(
      $._type_declarator,
      '[',
      repeat($.type_qualifier),
      optional(choice($._expression, '*')),
      ']'
    )),
    abstract_array_declarator: $ => prec(1, seq(
      optional($._abstract_declarator),
      '[',
      repeat($.type_qualifier),
      optional(choice($._expression, '*')),
      ']'
    )),

    init_declarator: $ => seq(
      $._declarator,
      '=',
      choice($.initializer_list, $._expression)
    ),

    compound_statement: $ => seq(
      '{',
      repeat($._top_level_item),
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
      'volatile',
      'restrict',
      '_Atomic'
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
        'signed',
        'unsigned',
        'long',
        'short'
      )),
      optional(choice(
        prec.dynamic(-1, $._type_identifier),
        $.primitive_type
      ))
    ),

    primitive_type: $ => token(choice(
      'bool',
      'char',
      'int',
      'float',
      'double',
      'void',
      'size_t',
      'ssize_t',
      'intptr_t',
      'uintptr_t',
      'charptr_t',
      ...[8, 16, 32, 64].map(n => `int${n}_t`),
      ...[8, 16, 32, 64].map(n => `uint${n}_t`),
      ...[8, 16, 32, 64].map(n => `char${n}_t`)
    )),

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
      repeat($._field_declaration_list_item),
      '}'
    ),

    _field_declaration_list_item: $ => choice(
      $.field_declaration,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_call,
      alias($.preproc_if_in_field_declaration_list, $.preproc_if),
      alias($.preproc_ifdef_in_field_declaration_list, $.preproc_ifdef),
    ),

    field_declaration: $ => seq(
      $._declaration_specifiers,
      commaSep($._field_declarator),
      optional($.bitfield_clause),
      ';'
    ),

    bitfield_clause: $ => seq(':', $._expression),

    enumerator: $ => seq(
      $.identifier,
      optional(seq('=', $._expression))
    ),

    parameter_list: $ => seq(
      '(',
      commaSep(choice($.parameter_declaration, '...')),
      ')'
    ),

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
      $.parenthesized_expression,
      $._statement,
      optional(seq(
        'else',
        $._statement
      ))
    )),

    switch_statement: $ => seq(
      'switch',
      $.parenthesized_expression,
      alias($.switch_body, $.compound_statement)
    ),

    switch_body: $ => seq(
      '{',
      repeat(choice($.case_statement, $._statement)),
      '}'
    ),

    case_statement: $ => prec.right(seq(
      choice(
        seq('case', $._expression),
        'default'
      ),
      ':',
      repeat(choice(
        $._statement,
        $.declaration,
        $.type_definition
      ))
    )),

    while_statement: $ => seq(
      'while',
      $.parenthesized_expression,
      $._statement
    ),

    do_statement: $ => seq(
      'do',
      $._statement,
      'while',
      $.parenthesized_expression
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
      choice(
        $.identifier,
        $.call_expression,
        $.field_expression,
        $.pointer_expression,
        $.subscript_expression,
        $.parenthesized_expression
      ),
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
      prec.left(PREC.CAST, seq('*', $._expression)),
      prec.left(PREC.CAST, seq('&', $._expression))
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
      repeat($.type_qualifier),
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

    argument_list: $ => seq('(', commaSep($._expression), ')'),

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
      commaSep(choice(
        $.initializer_pair,
        $._expression,
        $.initializer_list
      )),
      optional(','),
      '}'
    ),

    initializer_pair: $ => seq(
      repeat1(choice($.subscript_designator, $.field_designator)),
      '=',
      choice($._expression, $.initializer_list)
    ),

    subscript_designator: $ => seq('[', $._expression, ']'),

    field_designator: $ => seq('.', $._field_identifier),

    number_literal: $ => {
      const separator = "'";
      const hex = /[0-9a-fA-F]/;
      const decimal = /[0-9]/;
      const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
      const decimalDigits = seq(repeat1(decimal), repeat(seq(separator, repeat1(decimal))));
      return token(seq(
        optional(/[-\+]/),
        optional(choice('0x', '0b')),
        choice(
          seq(
            choice(
              decimalDigits,
              seq('0b', decimalDigits),
              seq('0x', hexDigits)
            ),
            optional(seq('.', optional(hexDigits)))
          ),
          seq('.', decimalDigits)
        ),
        optional(seq(
          /[eEpP]/,
          optional(seq(
            optional(/[-\+]/),
            hexDigits
          ))
        )),
        repeat(choice('u', 'l', 'U', 'L', 'f', 'F'))
      ))
    },

    char_literal: $ => seq(
      '\'',
      choice(
        $.escape_sequence,
        token.immediate(/[^\n']/)
      ),
      '\''
    ),

    concatenated_string: $ => seq(
      $.string_literal,
      repeat1($.string_literal)
    ),

    string_literal: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence
      )),
      '"'
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),

    system_lib_string: $ => token(seq(
      '<',
      repeat(choice(/[^>\n]/, '\\>')),
      '>'
    )),

    true: $ => token(choice('TRUE', 'true')),
    false: $ => token(choice('FALSE', 'false')),
    null: $ => 'NULL',

    identifier: $ => /[a-zA-Z_]\w*/,

    _type_identifier: $ => alias($.identifier, $.type_identifier),
    _field_identifier: $ => alias($.identifier, $.field_identifier),
    _statement_identifier: $ => alias($.identifier, $.statement_identifier),

    _empty_declaration: $ => seq(
      $._declaration_specifiers,
      ';'
    ),

    macro_type_specifier: $ => prec.dynamic(-1, seq(
      $.identifier,
      '(',
      $.type_descriptor,
      ')'
    )),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /(\\(.|\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
});

module.exports.PREC = PREC

function preprocIf (suffix, content) {
  function elseBlock ($) {
    return choice(
      suffix ? alias($['preproc_else' + suffix], $.preproc_else) : $.preproc_else,
      suffix ? alias($['preproc_elif' + suffix], $.preproc_elif) : $.preproc_elif,
    );
  }

  return {
    ['preproc_if' + suffix]: $ => seq(
      preprocessor('if'),
      $.preproc_arg,
      repeat(content($)),
      optional(elseBlock($)),
      preprocessor('endif')
    ),

    ['preproc_ifdef' + suffix]: $ => seq(
      choice(preprocessor('ifdef'), preprocessor('ifndef')),
      $.identifier,
      repeat(content($)),
      optional(elseBlock($)),
      preprocessor('endif')
    ),

    ['preproc_else' + suffix]: $ => seq(
      preprocessor('else'),
      repeat(content($))
    ),

    ['preproc_elif' + suffix]: $ => seq(
      preprocessor('elif'),
      $.preproc_arg,
      repeat(content($)),
      optional(elseBlock($)),
    )
  }
}

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
