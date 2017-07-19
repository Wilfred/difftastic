const
  PREC = {
    primary: 7,
    unary: 6,
    multiplicative: 5,
    additive: 4,
    comparative: 3,
    and: 2,
    or: 1
  },

  multiplicative_operator = token(choice('*', '/', '%', '<<', '>>', '&', '&^')),
  additive_operator = token(choice('+', '-', '|', '^')),
  comparative_operator = token(choice('==', '!=', '<', '<=', '>', '>=')),
  and_operator = '&&',
  or_operator = '||',

  unicodeLetter = /[a-zA-Zα-ωΑ-Ωµ]/,
  unicodeDigit = /[0-9]/,
  unicodeChar = /./,
  unicodeValue = unicodeChar,

  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  hexByteValue = seq('\\', 'x', hexDigit, hexDigit),
  octalByteValue = seq('\\', octalDigit, octalDigit, octalDigit)
  byteValue = choice(octalByteValue, hexByteValue),

  newline = '\n',
  letter = choice(unicodeLetter, '_'),

  decimals = repeat1(decimalDigit),
  exponent = seq(
    choice('e', 'E'),
    optional(choice('+', '-')),
    repeat1(decimalDigit)
  ),

  hexLiteral = seq('0', choice('x', 'X'), repeat1(hexDigit)),
  octalLiteral = seq('0', repeat(octalDigit)),
  decimalLiteral = seq(/[1-9]/, repeat(decimalDigit)),
  floatLiteral = choice(
    seq(decimals, '.', optional(decimals), optional(exponent)),
    seq(decimals, exponent),
    seq('.', decimals, optional(exponent))
  ),

  terminator = choice(newline, ';')

module.exports = grammar({
  name: 'go',

  extras: $ => [
    $.comment,
    /\s/
  ],

  inline: $ => [
    $._type,
  ],

  conflicts: $ => [
    [$._simple_type, $._expression],
    [$.qualified_type, $._expression],
    [$.func_literal, $.function_type],
    [$.function_type],
    [$._parameter_list, $._simple_type],
    [$.composite_literal, $._expression]
  ],

  rules: {
    source_file: $ => seq(
      $.package_clause,
      repeat(seq($.import_declaration, terminator)),
      repeat(seq($._top_level_declaration, terminator))
    ),

    package_clause: $ => seq(
      'package',
      rename($.identifier, 'package_name')
    ),

    import_declaration: $ => seq(
      'import',
      choice(
        $.import_spec,
        seq(
          '(',
          repeat(seq(
            $.import_spec,
            terminator
          )),
          ')'
        )
      )
    ),

    import_spec: $ => seq(
      optional(choice(
        rename($.identifier, 'package_name'),
        '.'
      )),
      $._string_literal
    ),

    _top_level_declaration: $ => choice(
      $._declaration,
      $.function_declaration,
      $.method_declaration
    ),

    _declaration: $ => choice(
      $.const_declaration,
      $.type_declaration,
      $.var_declaration
    ),

    const_declaration: $ => seq(
      'const',
      choice(
        $.const_spec,
        seq(
          '(',
          repeat(seq($.const_spec, terminator)),
          ')'
        )
      )
    ),

    const_spec: $ => seq(
      commaSep1(rename($.identifier, 'variable_name')),
      optional(seq(
        optional($._type),
        '=',
        $.expression_list
      ))
    ),

    var_declaration: $ => seq(
      'var',
      choice(
        $.var_spec,
        seq(
          '(',
          repeat(seq($.var_spec, terminator)),
          ')'
        )
      )
    ),

    var_spec: $ => seq(
      commaSep1(rename($.identifier, 'variable_name')),
      choice(
        seq(
          $._type,
          optional(seq('=', $.expression_list))
        ),
        seq('=', $.expression_list)
      )
    ),

    function_declaration: $ => seq(
      'func',
      rename($.identifier, 'variable_name'),
      $.parameters,
      optional(choice($.parameters, $._simple_type)),
      optional($.block)
    ),

    method_declaration: $ => seq(
      'func',
      $.parameters,
      rename($.identifier, 'field_name'),
      $.parameters,
      optional(choice($.parameters, $._simple_type)),
      optional($.block)
    ),

    parameters: $ => seq(
      '(',
      optional($._parameter_list),
      ')'
    ),

    _parameter_list: $ => sepTrailing(',', $._parameter_list, choice(
      rename($.identifier, 'variable_name'),
      $.parameter_declaration
    )),

    parameter_declaration: $ => seq(
      optional(rename($.identifier, 'variable_name')),
      optional('...'),
      $._type
    ),

    type_declaration: $ => seq(
      'type',
      choice(
        $.type_spec,
        seq(
          '(',
          repeat(seq($.type_spec, terminator)),
          ')'
        )
      )
    ),

    type_spec: $ => seq(
      rename($.identifier, 'type_name'),
      $._type
    ),

    field_name_list: $ => commaSep1(rename($.identifier, 'field_name')),

    expression_list: $ => commaSep1($._expression),

    _type: $ => choice(
      $._simple_type,
      $.parenthesized_type
    ),

    parenthesized_type: $ => seq('(', $._type, ')'),

    _simple_type: $ => choice(
      rename($.identifier, 'type_name'),
      $.qualified_type,
      $.pointer_type,
      $.struct_type,
      $.interface_type,
      $.array_type,
      $.slice_type,
      $.map_type,
      $.channel_type,
      $.function_type
    ),

    pointer_type: $ => prec(PREC.unary, seq('*', $._type)),

    array_type: $ => seq(
      '[',
      $._expression,
      ']',
      $._type
    ),

    implicit_length_array_type: $ => seq(
      '[',
      '...',
      ']',
      $._type
    ),

    slice_type: $ => seq(
      '[',
      ']',
      $._type
    ),

    struct_type: $ => seq(
      'struct',
      '{',
      optional($._field_declaration_list),
      '}'
    ),

    _field_declaration_list: $ => sepTrailing(terminator, $._field_declaration_list, $.field_declaration),

    field_declaration: $ => seq(
      choice(
        seq(
          commaSep1(rename($.identifier, 'field_name')),
          $._type
        ),
        seq(
          optional('*'),
          choice(
            rename($.identifier, 'type_name'),
            $.qualified_type
          )
        )
      ),
      optional($._string_literal)
    ),

    interface_type: $ => seq(
      'interface',
      '{',
      optional($._method_spec_list),
      '}'
    ),

    _method_spec_list: $ => sepTrailing(terminator, $._method_spec_list, choice(
      rename($.identifier, 'type_name'),
      $.qualified_type,
      $.method_spec
    )),

    method_spec: $ => seq(
      rename($.identifier, 'field_name'),
      $.parameters,
      optional(choice($.parameters, $._simple_type))
    ),

    map_type: $ => seq(
      'map',
      '[',
      $._type,
      ']',
      $._type
    ),

    channel_type: $ => choice(
      prec(5, seq('chan', $._type)),
      seq('chan', '<-', $._type),
      seq('<-', 'chan', $._type)
    ),

    function_type: $ => seq(
      'func',
      $.parameters,
      optional(choice($.parameters, $._simple_type))
    ),

    block: $ => seq(
      '{',
      optional($._statement_list),
      '}'
    ),

    _statement_list: $ => sepTrailing(terminator, $._statement_list, $._statement),

    _statement: $ => choice(
      $._declaration,
      $._simple_statement,
      $.return_statement,
      $.go_statement,
      $.defer_statement,
      $.if_statement,
      $.for_statement,
      $.expression_switch_statement,
      $.type_switch_statement,
      $.select_statement,
      $.label_statement,
      $.fallthrough_statement,
      $.break_statement,
      $.continue_statement,
      $.goto_statement,
      $.block,
      $.empty_statement
    ),

    empty_statement: $ => ';',

    _simple_statement: $ => choice(
      $._expression,
      $.send_statement,
      $.inc_statement,
      $.dec_statement,
      $.assignment_statement,
      $.short_var_declaration
    ),

    send_statement: $ => seq(
      $._expression,
      '<-',
      $._expression
    ),

    receive_statement: $ => seq(
      optional(seq(
        $.expression_list,
        choice('=', ':=')
      )),
      $._expression
    ),

    inc_statement: $ => seq(
      $._expression,
      '++'
    ),

    dec_statement: $ => seq(
      $._expression,
      '--'
    ),

    assignment_statement: $ => seq(
      $.expression_list,
      choice(
        $._assignment_operator,
        '='
      ),
      $.expression_list
    ),

    short_var_declaration: $ => seq(
      // TODO: this should really only allow identifier lists, but that causes
      // conflicts between identifiers as expressions vs identifiers here.
      $.expression_list,
      ':=',
      $.expression_list
    ),

    label_statement: $ => seq(rename($.identifier, 'label_name'), ':'),

    fallthrough_statement: $ => 'fallthrough',

    break_statement: $ => seq('break', optional(rename($.identifier, 'label_name'))),

    continue_statement: $ => seq('continue', optional(rename($.identifier, 'label_name'))),

    goto_statement: $ => seq('goto', rename($.identifier, 'label_name')),

    return_statement: $ => seq('return', optional($.expression_list)),

    go_statement: $ => seq('go', $._expression),

    defer_statement: $ => seq('defer', $._expression),

    if_statement: $ => seq(
      'if',
      optional(seq($._simple_statement, ';')),
      $._expression,
      $.block,
      optional(seq(
        'else',
        choice($.block, $.if_statement)
      ))
    ),

    for_statement: $ => seq(
      'for',
      optional(choice($._expression, $.for_clause, $.range_clause)),
      $.block
    ),

    for_clause: $ => seq(
      optional($._simple_statement),
      ';',
      optional($._expression),
      ';',
      optional($._simple_statement)
    ),

    range_clause: $ => seq(
      optional(seq(
        $.expression_list,
        choice('=', ':=')
      )),
      'range',
      $._expression
    ),

    expression_switch_statement: $ => seq(
      'switch',
      optional(seq($._simple_statement, ';')),
      optional($._expression),
      '{',
      repeat($.expression_case_clause),
      '}'
    ),

    expression_case_clause: $ => seq(
      $.expression_case,
      ':',
      optional($._statement_list)
    ),

    expression_case: $ => choice(
      seq('case', $.expression_list),
      'default'
    ),

    type_switch_statement: $ => seq(
      'switch',
      optional(seq(
        $._simple_statement,
        ';'
      )),
      $._type_switch_guard,
      '{',
      repeat($.type_case_clause),
      '}'
    ),

    _type_switch_guard: $ => seq(
      optional(seq($.expression_list, ':=' )),
      $._expression, '.', '(', 'type', ')'
    ),

    type_case_clause: $ => seq(
      $.type_case,
      ':',
      optional($._statement_list)
    ),

    type_case: $ => choice(
      seq('case', commaSep1($._type)),
      'default'
    ),

    select_statement: $ => seq(
      'select',
      '{',
      repeat($.communication_clause),
      '}'
    ),

    communication_clause: $ => seq(
      $.communication_case,
      ':',
      optional($._statement_list)
    ),

    communication_case: $ => choice(
      seq('case', choice($.send_statement, $.receive_statement)),
      'default'
    ),

    _expression: $ => choice(
      $.unary_expression,
      $.binary_expression,
      $.selector_expression,
      $.index_expression,
      $.slice_expression,
      $.call_expression,
      $.type_assertion_expression,
      $.type_conversion_expression,
      rename(choice(
        $.identifier,
        'new',
        'make'
      ), 'variable_name'),
      $.composite_literal,
      $.func_literal,
      $._string_literal,
      $.int_literal,
      $.float_literal,
      $.imaginary_literal,
      $.rune_literal,
      $.parenthesized_expression
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    call_expression: $ => prec(PREC.primary, choice(
      seq(
        rename(choice(
          'new',
          'make'
        ), 'variable_name'),
        '(',
        $._type,
        optional(seq(',', commaSep1($._expression))),
        ')'
      ),
      seq(
        $._expression,
        '(',
        optional($._argument_list),
        optional(seq('...', optional(','))),
        ')'
      )
    )),

    _argument_list: $ => sepTrailing(',', $._argument_list, $._expression),

    selector_expression: $ => prec(PREC.primary, seq(
      $._expression,
      '.',
      rename($.identifier, 'field_name')
    )),

    index_expression: $ => prec(PREC.primary, seq(
      $._expression,
      '[',
      $._expression,
      ']'
    )),

    slice_expression: $ => prec(PREC.primary, seq(
      $._expression,
      '[',
      choice(
        seq(optional($._expression), ':', optional($._expression)),
        seq(optional($._expression), ':', $._expression, ':', $._expression)
      ),
      ']'
    )),

    type_assertion_expression: $ => prec(PREC.primary, seq(
      $._expression,
      '.',
      '(',
      $._type,
      ')'
    )),

    type_conversion_expression: $ => seq(
      $._type,
      '(',
      $._expression,
      optional(','),
      ')'
    ),

    composite_literal: $ => seq(
      choice(
        $.map_type,
        $.slice_type,
        $.array_type,
        $.implicit_length_array_type,
        $.struct_type,
        rename($.identifier, 'type_name'),
        $.qualified_type
      ),
      $.literal_value
    ),

    literal_value: $ => seq(
      '{',
      optional($._element_list),
      '}'
    ),

    _element_list: $ => sepTrailing(',', $._element_list, choice(
      $.element,
      $.keyed_element
    )),

    keyed_element: $ => seq(
      choice(
        seq($._expression, ':'),
        seq($.literal_value, ':'),
        prec(1, seq(rename($.identifier, 'field_name'), ':'))
      ),
      choice(
        $._expression,
        $.literal_value
      )
    ),

    element: $ => choice(
      $._expression,
      $.literal_value
    ),

    func_literal: $ => seq(
      'func',
      $.parameters,
      optional(choice($.parameters, $._simple_type)),
      $.block
    ),

    unary_expression: $ => prec(PREC.unary, seq(
      choice('+', '-', '!', '^', '*', '&', '<-'),
      $._expression
    )),

    binary_expression: $ => choice(
      prec.left(PREC.multiplicative, seq($._expression, multiplicative_operator, $._expression)),
      prec.left(PREC.additive, seq($._expression, additive_operator, $._expression)),
      prec.left(PREC.comparative, seq($._expression, comparative_operator, $._expression)),
      prec.left(PREC.and, seq($._expression, and_operator, $._expression)),
      prec.left(PREC.or, seq($._expression, or_operator, $._expression))
    ),

    qualified_type: $ => seq(
      rename($.identifier, 'package_name'),
      '.',
      rename($.identifier, 'type_name')
    ),

    identifier: $ => token(seq(
      letter,
      repeat(choice(letter, unicodeDigit))
    )),

    _string_literal: $ => choice(
      $.raw_string_literal,
      $.interpreted_string_literal
    ),

    raw_string_literal: $ => token(seq(
      '`',
      repeat(/[^`]/),
      '`'
    )),

    interpreted_string_literal: $ => token(seq(
      '"',
      repeat(choice(
        /[^"\n\\]/,
        seq('\\', /./)
      )),
      '"'
    )),

    int_literal: $ => token(choice(decimalLiteral, octalLiteral, hexLiteral)),

    float_literal: $ => token(floatLiteral),

    imaginary_literal: $ => token(seq(
      choice(floatLiteral, repeat1(decimalDigit)),
      'i'
    )),

    rune_literal: $ => token(seq(
      "'",
      choice(
        /[^'\\]/,
        seq(
          '\\',
          choice(
            seq('x', hexDigit, hexDigit),
            seq(octalDigit, octalDigit, octalDigit),
            seq('u', hexDigit, hexDigit, hexDigit, hexDigit),
            seq('U', hexDigit, hexDigit, hexDigit, hexDigit, hexDigit, hexDigit, hexDigit, hexDigit),
            seq(choice('a', 'b', 'f', 'n', 'r', 't', 'v', '\\', "'", '"'))
          )
        )
      ),
      "'"
    )),

    _assignment_operator: $ => token(seq(
      optional(choice(multiplicative_operator, additive_operator)),
      '='
    )),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
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

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function sepTrailing (separator, recurSymbol, rule) {
  return choice(rule, seq(rule, separator, optional(recurSymbol)))
}
