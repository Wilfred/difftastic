const
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

    function_declaration: $ => NOT_IMPLEMENTED,

    method_declaration: $ => NOT_IMPLEMENTED,

    type_declaration: $ => NOT_IMPLEMENTED,

    identifier_list: $ => seq(
      $.identifier,
      repeat(seq(',', $.identifier))
    ),

    expression_list: $ => seq(
      $._expression,
      repeat(seq(',', $._expression))
    ),

    _type: $ => choice(
      $.identifier
    ),

    _expression: $ => choice(
      $.unary_expression,
      $.binary_expression,
      $._primary_expression
    ),

    unary_expression: $ => NOT_IMPLEMENTED,

    binary_expression: $ => NOT_IMPLEMENTED,

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
      repeat(choice(unicodeChar, newline)),
      '`'
    )),

    interpreted_string_literal: $ => token(seq(
      '"',
      repeat(choice(unicodeValue, byteValue)),
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
