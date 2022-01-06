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

  unicodeLetter = /\p{L}/,
  unicodeDigit = /[0-9]/,
  unicodeChar = /./,
  unicodeValue = unicodeChar,
  letter = choice(unicodeLetter, '_'),

  newline = '\n',
  terminator = choice(newline, ';'),

  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  binaryDigit = /[01]/,

  hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit))),
  octalDigits = seq(octalDigit, repeat(seq(optional('_'), octalDigit))),
  decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit))),
  binaryDigits = seq(binaryDigit, repeat(seq(optional('_'), binaryDigit))),

  hexLiteral = seq('0', choice('x', 'X'), optional('_'), hexDigits),
  octalLiteral = seq('0', optional(choice('o', 'O')), optional('_'), octalDigits),
  decimalLiteral = choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
  binaryLiteral = seq('0', choice('b', 'B'), optional('_'), binaryDigits),

  intLiteral = choice(binaryLiteral, decimalLiteral, octalLiteral, hexLiteral),

  decimalExponent = seq(choice('e', 'E'), optional(choice('+', '-')), decimalDigits),
  decimalFloatLiteral = choice(
    seq(decimalDigits, '.', optional(decimalDigits), optional(decimalExponent)),
    seq(decimalDigits, decimalExponent),
    seq('.', decimalDigits, optional(decimalExponent)),
  ),

  hexExponent = seq(choice('p', 'P'), optional(choice('+', '-')), decimalDigits),
  hexMantissa = choice(
    seq(optional('_'), hexDigits, '.', optional(hexDigits)),
    seq(optional('_'), hexDigits),
    seq('.', hexDigits),
  ),
  hexFloatLiteral = seq('0', choice('x', 'X'), hexMantissa, hexExponent),

  floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral),

  imaginaryLiteral = seq(choice(decimalDigits, intLiteral, floatLiteral), 'i')

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
    $._top_level_declaration,
    $._string_literal,
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$._simple_type, $._expression],
    [$.qualified_type, $._expression],
    [$.generic_type, $._expression],
    [$.generic_type, $._simple_type],
    [$.parameter_declaration, $.type_arguments],
    [$.parameter_declaration, $._simple_type, $._expression],
    [$.parameter_declaration, $.generic_type, $._expression],
    [$.parameter_declaration, $._expression],
    [$.func_literal, $.function_type],
    [$.function_type],
    [$.parameter_declaration, $._simple_type],
  ],

  supertypes: $ => [
    $._expression,
    $._type,
    $._simple_type,
    $._statement,
    $._simple_statement,
  ],

  rules: {
    source_file: $ => repeat(choice(
      seq($._statement, terminator),
      seq($._top_level_declaration, optional(terminator)),
    )),

    _top_level_declaration: $ => choice(
      $.package_clause,
      $.function_declaration,
      $.method_declaration,
      $.import_declaration
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
      optional(field('name', choice(
        $.dot,
        $.blank_identifier,
        $._package_identifier
      ))),
      field('path', $._string_literal)
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
      field('name', commaSep1($.identifier)),
      optional(seq(
        optional(field('type', $._type)),
        '=',
        field('value', $.expression_list)
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
      field('name', commaSep1($.identifier)),
      choice(
        seq(
          field('type', $._type),
          optional(seq('=', field('value', $.expression_list)))
        ),
        seq('=', field('value', $.expression_list))
      )
    ),

    function_declaration: $ => prec.right(1, seq(
      'func',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('parameters', $.parameter_list),
      field('result', optional(choice($.parameter_list, $._simple_type))),
      field('body', optional($.block))
    )),

    method_declaration: $ => prec.right(1, seq(
      'func',
      field('receiver', $.parameter_list),
      field('name', $._field_identifier),
      field('parameters', $.parameter_list),
      field('result', optional(choice($.parameter_list, $._simple_type))),
      field('body', optional($.block))
    )),

    type_parameter_list: $ => seq(
      '[',
      commaSep1($.parameter_declaration),
      optional(','),
      ']'
    ),

    parameter_list: $ => seq(
      '(',
      optional(seq(
        commaSep(choice($.parameter_declaration, $.variadic_parameter_declaration)),
        optional(',')
      )),
      ')'
    ),

    parameter_declaration: $ => seq(
      field('name', commaSep($.identifier)),
      field('type', $._type)
    ),

    variadic_parameter_declaration: $ => seq(
      field('name', optional($.identifier)),
      '...',
      field('type', $._type)
    ),

    type_alias: $ => seq(
      field('name', $._type_identifier),
      '=',
      field('type', $._type)
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
      field('name', $._type_identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('type', $._type)
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
      $.generic_type,
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

    generic_type: $ => seq(
      field('type', $._type_identifier),
      field('type_arguments', $.type_arguments),
    ),

    type_arguments: $ => prec.dynamic(2, seq(
      '[',
       commaSep1($._type),
       optional(','),
      ']'
    )),

    pointer_type: $ => prec(PREC.unary, seq('*', $._type)),

    array_type: $ => seq(
      '[',
      field('length', $._expression),
      ']',
      field('element', $._type)
    ),

    implicit_length_array_type: $ => seq(
      '[',
      '...',
      ']',
      field('element', $._type)
    ),

    slice_type: $ => seq(
      '[',
      ']',
      field('element', $._type)
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
          field('name', commaSep1($._field_identifier)),
          field('type', $._type)
        ),
        seq(
          optional('*'),
          field('type', choice(
            $._type_identifier,
            $.qualified_type
          ))
        )
      ),
      field('tag', optional($._string_literal))
    ),

    interface_type: $ => seq(
      'interface',
      '{',
      optional(seq(
        $._interface_body,
        repeat(seq(terminator, $._interface_body)),
        optional(terminator)
      )),
      '}'
    ),

    _interface_body: $ => choice(
       $.method_spec, $.interface_type_name, $.constraint_elem
    ),

    interface_type_name: $ => choice($._type_identifier, $.qualified_type),

    constraint_elem: $ => seq(
      $.constraint_term,
      repeat(seq('|', $.constraint_term))
    ),

    constraint_term: $ => prec(-1, seq(
      optional('~'),
      $._type_identifier,
    )),

    method_spec: $ => seq(
      field('name', $._field_identifier),
      field('parameters', $.parameter_list),
      field('result', optional(choice($.parameter_list, $._simple_type)))
    ),

    map_type: $ => seq(
      'map',
      '[',
      field('key', $._type),
      ']',
      field('value', $._type)
    ),

    channel_type: $ => choice(
      seq('chan', field('value', $._type)),
      seq('chan', '<-', field('value', $._type)),
      prec(PREC.unary, seq('<-', 'chan', field('value', $._type)))
    ),

    function_type: $ => seq(
      'func',
      field('parameters', $.parameter_list),
      field('result', optional(choice($.parameter_list, $._simple_type)))
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
      field('channel', $._expression),
      '<-',
      field('value', $._expression)
    ),

    receive_statement: $ => seq(
      optional(seq(
        field('left', $.expression_list),
        choice('=', ':=')
      )),
      field('right', $._expression)
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
      field('left', $.expression_list),
      field('operator', choice(...assignment_operators)),
      field('right', $.expression_list)
    ),

    short_var_declaration: $ => seq(
      // TODO: this should really only allow identifier lists, but that causes
      // conflicts between identifiers as expressions vs identifiers here.
      field('left', $.expression_list),
      ':=',
      field('right', $.expression_list)
    ),

    labeled_statement: $ => seq(
      field('label', alias($.identifier, $.label_name)),
      ':',
      $._statement
    ),

    empty_labeled_statement: $ => seq(
      field('label', alias($.identifier, $.label_name)),
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
      optional(seq(
        field('initializer', $._simple_statement),
        ';'
      )),
      field('condition', $._expression),
      field('consequence', $.block),
      optional(seq(
        'else',
        field('alternative', choice($.block, $.if_statement))
      ))
    ),

    for_statement: $ => seq(
      'for',
      optional(choice($._expression, $.for_clause, $.range_clause)),
      field('body', $.block)
    ),

    for_clause: $ => seq(
      field('initializer', optional($._simple_statement)),
      ';',
      field('condition', optional($._expression)),
      ';',
      field('update', optional($._simple_statement))
    ),

    range_clause: $ => seq(
      optional(seq(
        field('left', $.expression_list),
        choice('=', ':=')
      )),
      'range',
      field('right', $._expression)
    ),

    expression_switch_statement: $ => seq(
      'switch',
      optional(seq(
        field('initializer', $._simple_statement),
        ';'
      )),
      field('value', optional($._expression)),
      '{',
      repeat(choice($.expression_case, $.default_case)),
      '}'
    ),

    expression_case: $ => seq(
      'case',
      field('value', $.expression_list),
      ':',
      optional($._statement_list)
    ),

    default_case: $ => seq(
      'default',
      ':',
      optional($._statement_list)
    ),

    type_switch_statement: $ => seq(
      'switch',
      $._type_switch_header,
      '{',
      repeat(choice($.type_case, $.default_case)),
      '}'
    ),

    _type_switch_header: $ => seq(
      optional(seq(
        field('initializer', $._simple_statement),
        ';'
      )),
      optional(seq(field('alias', $.expression_list), ':=')),
      field('value', $._expression),
      '.',
      '(',
      'type',
      ')'
    ),

    type_case: $ => seq(
      'case',
      field('type', commaSep1($._type)),
      ':',
      optional($._statement_list)
    ),

    select_statement: $ => seq(
      'select',
      '{',
      repeat(choice($.communication_case, $.default_case)),
      '}'
    ),

    communication_case: $ => seq(
      'case',
      field('communication', choice($.send_statement, $.receive_statement)),
      ':',
      optional($._statement_list)
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
      $.iota,
      $.parenthesized_expression
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    call_expression: $ => prec(PREC.primary, choice(
      seq(
        field('function', alias(choice('new', 'make'), $.identifier)),
        field('arguments', alias($.special_argument_list, $.argument_list))
      ),
      seq(
        field('function', $._expression),
        field('type_arguments', optional($.type_arguments)),
        field('arguments', $.argument_list)
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
      field('operand', $._expression),
      '.',
      field('field', $._field_identifier)
    )),

    index_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '[',
      field('index', $._expression),
      ']'
    )),

    slice_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '[',
      choice(
        seq(
          field('start', optional($._expression)),
          ':',
          field('end', optional($._expression))
        ),
        seq(
          field('start', optional($._expression)),
          ':',
          field('end', $._expression),
          ':',
          field('capacity', $._expression)
        )
      ),
      ']'
    )),

    type_assertion_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '.',
      '(',
      field('type', $._type),
      ')'
    )),

    type_conversion_expression: $ => prec.dynamic(-1, seq(
      field('type', $._type),
      '(',
      field('operand', $._expression),
      optional(','),
      ')'
    )),

    composite_literal: $ => prec(PREC.composite_literal, seq(
      field('type', choice(
        $.map_type,
        $.slice_type,
        $.array_type,
        $.implicit_length_array_type,
        $.struct_type,
        $._type_identifier,
        $.generic_type,
        $.qualified_type
      )),
      field('body', $.literal_value)
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
      field('parameters', $.parameter_list),
      field('result', optional(choice($.parameter_list, $._simple_type))),
      field('body', $.block)
    ),

    unary_expression: $ => prec(PREC.unary, seq(
      field('operator', choice('+', '-', '!', '^', '*', '&', '<-')),
      field('operand', $._expression)
    )),

    binary_expression: $ => {
      const table = [
        [PREC.multiplicative, choice(...multiplicative_operators)],
        [PREC.additive, choice(...additive_operators)],
        [PREC.comparative, choice(...comparative_operators)],
        [PREC.and, '&&'],
        [PREC.or, '||'],
      ];

      return choice(...table.map(([precedence, operator]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ));
    },

    qualified_type: $ => seq(
      field('package', $._package_identifier),
      '.',
      field('name', $._type_identifier)
    ),

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
        token.immediate(prec(1, /[^"\n\\]+/)),
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

    int_literal: $ => token(intLiteral),

    float_literal: $ => token(floatLiteral),

    imaginary_literal: $ => token(imaginaryLiteral),

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
    iota: $ => 'iota',

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
