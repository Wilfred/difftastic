const
  PREC = {
    primary: 7,
    unary: 6,
    multiplicative: 5,
    additive: 4,
    comparative: 3,
    and: 2,
    or: 1,
    composite_literal: -1,
  },

  multiplicative_operators = ['*', '/', '%', '<<', '>>', '&', '&^'],
  additive_operators = ['+', '-', '|', '^'],
  comparative_operators = ['==', '!=', '<', '<=', '>', '>='],
  assignment_operators = multiplicative_operators.concat(additive_operators).map(operator => operator + '=').concat('='),

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
    $._type_identifier,
    $._field_identifier,
    $._package_identifier,
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$._simple_type, $._expression],
    [$.qualified_type, $._expression],
    [$.func_literal, $.function_type],
    [$.function_type],
    [$.parameter_declaration, $._simple_type],
  ],

  rules: {
    source_file: $ => repeat(seq(
      $._top_level_declaration,
      optional(terminator)
    )),

    _top_level_declaration: $ => choice(
      $.package_clause,
      $.function_declaration,
      $.method_declaration,
      $.import_declaration,
      $._declaration
    ),

    package_clause: $ => seq(
      'package',
      $._package_identifier
    ),

    import_declaration: $ => seq(
      'import',
      choice(
        $.import_spec,
        $.import_spec_list
      )
    ),

    import_spec: $ => seq(
      optional(choice(
        $.dot,
        $.blank_identifier,
        $._package_identifier
      )),
      $._string_literal
    ),
    dot: $ => '.',
    blank_identifier: $ => '_',

    import_spec_list: $ => seq(
      '(',
      repeat(seq(
        $.import_spec,
        terminator
      )),
      ')'
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

    const_spec: $ => prec.left(seq(
      commaSep1($.identifier),
      optional(seq(
        optional($._type),
        '=',
        $.expression_list
      ))
    )),

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
      commaSep1($.identifier),
      choice(
        seq(
          $._type,
          optional(seq('=', $.expression_list))
        ),
        seq('=', $.expression_list)
      )
    ),

    function_declaration: $ => prec.right(seq(
      'func',
      $.identifier,
      $.parameter_list,
      optional(choice($.parameter_list, $._simple_type)),
      optional($.block)
    )),

    method_declaration: $ => prec.right(seq(
      'func',
      $.parameter_list,
      $._field_identifier,
      $.parameter_list,
      optional(choice($.parameter_list, $._simple_type)),
      optional($.block)
    )),

    parameter_list: $ => seq(
      '(',
      optional(seq(
        commaSep(choice($.parameter_declaration, $.variadic_parameter_declaration)),
        optional(',')
      )),
      ')'
    ),

    parameter_declaration: $ => seq(
      commaSep($.identifier),
      $._type
    ),

    variadic_parameter_declaration: $ => seq(
      optional($.identifier),
      '...',
      $._type
    ),

    type_alias: $ => seq(
      $._type_identifier,
      '=',
      $._type
    ),

    type_declaration: $ => seq(
      'type',
      choice(
        $.type_spec,
        $.type_alias,
        seq(
          '(',
          repeat(seq(choice($.type_spec, $.type_alias), terminator)),
          ')'
        )
      )
    ),

    type_spec: $ => seq(
      $._type_identifier,
      $._type
    ),

    field_name_list: $ => commaSep1($._field_identifier),

    expression_list: $ => commaSep1($._expression),

    _type: $ => choice(
      $._simple_type,
      $.parenthesized_type
    ),

    parenthesized_type: $ => seq('(', $._type, ')'),

    _simple_type: $ => choice(
      prec.dynamic(-1, $._type_identifier),
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
      $.field_declaration_list
    ),

    field_declaration_list: $ => seq(
      '{',
      optional(seq(
        $.field_declaration,
        repeat(seq(terminator, $.field_declaration)),
        optional(terminator)
      )),
      '}'
    ),

    field_declaration: $ => seq(
      choice(
        seq(
          commaSep1($._field_identifier),
          $._type
        ),
        seq(
          optional('*'),
          choice(
            $._type_identifier,
            $.qualified_type
          )
        )
      ),
      optional($._string_literal)
    ),

    interface_type: $ => seq(
      'interface',
      $.method_spec_list
    ),

    method_spec_list: $ => seq(
      '{',
      optional(seq(
        choice($._type_identifier, $.qualified_type, $.method_spec),
        repeat(seq(terminator, choice($._type_identifier, $.qualified_type, $.method_spec))),
        optional(terminator)
      )),
      '}'
    ),

    method_spec: $ => seq(
      $._field_identifier,
      $.parameter_list,
      optional(choice($.parameter_list, $._simple_type))
    ),

    map_type: $ => seq(
      'map',
      '[',
      $._type,
      ']',
      $._type
    ),

    channel_type: $ => choice(
      seq('chan', $._type),
      seq('chan', '<-', $._type),
      prec(PREC.unary, seq('<-', 'chan', $._type))
    ),

    function_type: $ => seq(
      'func',
      $.parameter_list,
      optional(choice($.parameter_list, $._simple_type))
    ),

    block: $ => seq(
      '{',
      optional($._statement_list),
      '}'
    ),

    _statement_list: $ => choice(
      seq(
        $._statement,
        repeat(seq(terminator, $._statement)),
        optional(seq(
          terminator,
          optional(alias($.empty_labeled_statement, $.labeled_statement))
        ))
      ),
      alias($.empty_labeled_statement, $.labeled_statement)
    ),

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
      $.labeled_statement,
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
      choice(...assignment_operators),
      $.expression_list
    ),

    short_var_declaration: $ => seq(
      // TODO: this should really only allow identifier lists, but that causes
      // conflicts between identifiers as expressions vs identifiers here.
      $.expression_list,
      ':=',
      $.expression_list
    ),

    labeled_statement: $ => seq(
      alias($.identifier, $.label_name),
      ':',
      $._statement
    ),

    empty_labeled_statement: $ => seq(
      alias($.identifier, $.label_name),
      ':'
    ),

    // This is a hack to prevent `fallthrough_statement` from being parsed as
    // a single token. For consistency with `break_statement` etc it should
    // be parsed as a parent node that *contains* a `fallthrough` token.
    fallthrough_statement: $ => prec.left('fallthrough'),

    break_statement: $ => seq('break', optional(alias($.identifier, $.label_name))),

    continue_statement: $ => seq('continue', optional(alias($.identifier, $.label_name))),

    goto_statement: $ => seq('goto', alias($.identifier, $.label_name)),

    return_statement: $ => seq('return', optional($.expression_list)),

    go_statement: $ => seq('go', $._expression),

    defer_statement: $ => seq('defer', $._expression),

    if_statement: $ => seq(
      'if',
      optional($.if_initializer),
      $._expression,
      $.block,
      optional($.else_clause)
    ),

    if_initializer: $ => seq($._simple_statement, ';'),

    else_clause: $ => seq(
      'else',
      choice($.block, $.if_statement)
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
      choice($.expression_case, $.default_case),
      optional($._statement_list)
    ),

    expression_case: $ => seq(
      'case',
      $.expression_list,
      ':'
    ),

    default_case: $ => seq(
      'default',
      ':'
    ),

    type_switch_statement: $ => seq(
      'switch',
      optional(seq(
        $._simple_statement,
        ';'
      )),
      $.type_switch_guard,
      '{',
      repeat($.type_case_clause),
      '}'
    ),

    type_switch_guard: $ => seq(
      optional(seq($.expression_list, ':=' )),
      $._expression, '.', '(', 'type', ')'
    ),

    type_case_clause: $ => seq(
      choice($.type_case, $.default_case),
      optional($._statement_list)
    ),

    type_case: $ => seq(
      'case',
      commaSep1($._type),
      ':'
    ),

    select_statement: $ => seq(
      'select',
      '{',
      repeat($.communication_clause),
      '}'
    ),

    communication_clause: $ => seq(
      choice($.communication_case, $.default_case),
      optional($._statement_list)
    ),

    communication_case: $ => seq(
      'case',
      choice($.send_statement, $.receive_statement),
      ':'
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
      $.identifier,
      alias(choice('new', 'make'), $.identifier),
      $.composite_literal,
      $.func_literal,
      $._string_literal,
      $.int_literal,
      $.float_literal,
      $.imaginary_literal,
      $.rune_literal,
      $.nil,
      $.true,
      $.false,
      $.parenthesized_expression
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    call_expression: $ => prec(PREC.primary, choice(
      seq(
        alias(choice('new', 'make'), $.identifier),
        alias($.special_argument_list, $.argument_list)
      ),
      seq(
        $._expression,
        $.argument_list
      )
    )),

    variadic_argument: $ => prec.right(seq(
      $._expression,
      '...'
    )),

    special_argument_list: $ => seq(
      '(',
      $._type,
      repeat(seq(',', $._expression)),
      optional(','),
      ')'
    ),

    argument_list: $ => seq(
      '(',
      optional(seq(
        choice($._expression, $.variadic_argument),
        repeat(seq(',', choice($._expression, $.variadic_argument))),
        optional(',')
      )),
      ')'
    ),

    selector_expression: $ => prec(PREC.primary, seq(
      $._expression,
      '.',
      $._field_identifier
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

    type_conversion_expression: $ => prec.dynamic(-1, seq(
      $._type,
      '(',
      $._expression,
      optional(','),
      ')'
    )),

    composite_literal: $ => prec(PREC.composite_literal, seq(
      choice(
        $.map_type,
        $.slice_type,
        $.array_type,
        $.implicit_length_array_type,
        $.struct_type,
        $._type_identifier,
        $.qualified_type
      ),
      $.literal_value
    )),

    literal_value: $ => seq(
      '{',
      optional(seq(
        choice($.element, $.keyed_element),
        repeat(seq(',', choice($.element, $.keyed_element))),
        optional(',')
      )),
      '}'
    ),

    keyed_element: $ => seq(
      choice(
        seq($._expression, ':'),
        seq($.literal_value, ':'),
        prec(1, seq($._field_identifier, ':'))
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
      $.parameter_list,
      optional(choice($.parameter_list, $._simple_type)),
      $.block
    ),

    unary_expression: $ => prec(PREC.unary, seq(
      choice('+', '-', '!', '^', '*', '&', '<-'),
      $._expression
    )),

    binary_expression: $ => choice(
      prec.left(PREC.multiplicative, seq($._expression, choice(...multiplicative_operators), $._expression)),
      prec.left(PREC.additive, seq($._expression, choice(...additive_operators), $._expression)),
      prec.left(PREC.comparative, seq($._expression, choice(...comparative_operators), $._expression)),
      prec.left(PREC.and, seq($._expression, '&&', $._expression)),
      prec.left(PREC.or, seq($._expression, '||', $._expression))
    ),

    qualified_type: $ => seq($._package_identifier, '.', $._type_identifier),

    identifier: $ => token(seq(
      letter,
      repeat(choice(letter, unicodeDigit))
    )),

    _type_identifier: $ => alias($.identifier, $.type_identifier),
    _field_identifier: $ => alias($.identifier, $.field_identifier),
    _package_identifier: $ => alias($.identifier, $.package_identifier),

    _string_literal: $ => choice(
      $.raw_string_literal,
      $.interpreted_string_literal
    ),

    raw_string_literal: $ => token(seq(
      '`',
      repeat(/[^`]/),
      '`'
    )),

    interpreted_string_literal: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^"\n\\]/)),
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

    nil: $ => 'nil',
    true: $ => 'true',
    false: $ => 'false',

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

function commaSep(rule) {
  return optional(commaSep1(rule))
}
