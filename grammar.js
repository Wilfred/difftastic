const
  PREC = {
    multiplicative: 5,
    additive: 4,
    comparative: 3,
    and: 2,
    or: 1
  },

  multiplicative_operator = choice('*', '/', '%', '<<', '>>', '&', '&^'),
  additive_operator = choice('+', '-', '|', '^'),
  comparative_operator = choice('==', '!=', '<', '<=', '>', '>='),
  and_operator = '&&',
  or_operator = '||',

  unicodeLetter = /[a-zA-Z]/,
  unicodeDigit = /[0-9]/,
  unicodeChar = /./,
  unicodeValue = unicodeChar,

  hexDigit = /[0-7]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  hexByteValue = seq('\\', 'x', hexDigit, hexDigit),
  octalByteValue = seq('\\', octalDigit, octalDigit, octalDigit)
  byteValue = choice(octalByteValue, hexByteValue),

  hexLiteral = token(seq('0', choice('x', 'X'), repeat1(hexDigit))),
  octalLiteral = token(seq('0', repeat(octalDigit))),
  decimalLiteral = token(seq(/[1-9]/, repeat(decimalDigit))),

  newline = '\n',
  letter = choice(unicodeLetter, '_'),

  terminator = token(choice(newline, ';'))

const NOT_IMPLEMENTED = choice()

module.exports = grammar({
  name: 'go',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    source_file: $ => seq(
      $.package_clause,
      repeat($.import_declaration),
      repeat($._top_level_declaration)
    ),

    package_clause: $ => seq(
      'package',
      $.identifier
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
      optional(choice($.identifier, '.')),
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
      $.identifier_list,
      optional($._type),
      '=',
      $.expression_list
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
      $.identifier_list,
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
      $.identifier,
      $.parameters,
      optional(choice($.parameters, $._type)),
      optional($.block)
    ),

    method_declaration: $ => seq(
      'func',
      $.parameters,
      $.identifier,
      $.parameters,
      optional(choice($.parameters, $._type)),
      optional($.block)
    ),

    parameters: $ => seq(
      '(',
      optional($._parameter_list),
      ')'
    ),

    _parameter_list: $ => commaSepTrailing($._parameter_list, choice(
      $.identifier,
      $.parameter_declaration
    )),

    parameter_declaration: $ => seq(
      $.identifier,
      $._type
    ),

    block: $ => seq('{', '}'),

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

    type_spec: $ => seq($.identifier, $._type),

    identifier_list: $ => seq(
      $.identifier,
      repeat(seq(',', $.identifier))
    ),

    expression_list: $ => seq(
      $._expression,
      repeat(seq(',', $._expression))
    ),

    _type: $ => choice(
      $.identifier,
      $.qualified_identifier,
      $.pointer_type,
      $.struct_type,
      $.interface_type,
      $.array_type,
      $.slice_type,
      $.map_type
    ),

    pointer_type: $ => seq('*', $._type),

    array_type: $ => seq(
      '[',
      $._expression,
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
      repeat(seq($.field_declaration, terminator)),
      '}'
    ),

    field_declaration: $ => seq(
      choice(
        seq($.identifier_list, $._type),
        seq(optional('*'), $.identifier)
      ),
      optional($._string_literal)
    ),

    interface_type: $ => seq(
      'interface',
      '{',
      repeat(seq(
        choice($.identifier, $.method_spec),
        terminator
      )),
      '}'
    ),

    method_spec: $ => seq(
      $.identifier,
      $.parameters,
      optional(choice($.parameters, $._type))
    ),

    map_type: $ => seq(
      'map',
      '[',
      $._type,
      ']',
      $._type
    ),

    qualified_identifier: $ => seq(
      $.identifier,
      '.',
      $.identifier
    ),

    _expression: $ => choice(
      $.unary_expression,
      $.binary_expression,
      $._primary_expression
    ),

    unary_expression: $ => NOT_IMPLEMENTED,

    binary_expression: $ => choice(
      prec.left(PREC.multiplicative, seq($._expression, multiplicative_operator, $._expression)),
      prec.left(PREC.additive, seq($._expression, additive_operator, $._expression)),
      prec.left(PREC.comparative, seq($._expression, comparative_operator, $._expression)),
      prec.left(PREC.and, seq($._expression, and_operator, $._expression)),
      prec.left(PREC.or, seq($._expression, or_operator, $._expression))
    ),

    _primary_expression: $ => choice(
      // Basic literal
      $._string_literal,
      $.int_literal,
      $.float_literal,

      // Operand name
      $.identifier
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
      repeat(/[^`\n]/),
      '`'
    )),

    interpreted_string_literal: $ => token(seq(
      '"',
      repeat(/[^"\n]/),
      '"'
    )),

    int_literal: $ => choice(decimalLiteral, octalLiteral, hexLiteral),

    float_literal: $ => NOT_IMPLEMENTED,

    comment: $ => token(seq(
      '//',
      /.*/
    ))
  }
})

function commaSepTrailing (recurSymbol, rule) {
  return choice(rule, seq(recurSymbol, ',', rule))
}
