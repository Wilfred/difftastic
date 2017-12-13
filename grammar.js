const
  digit = /[0-9]/,
  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimals = repeat1(digit),

  hexidecimal = seq(choice('x', 'X'), repeat1(hexDigit)),
  octadecimal = seq(choice('o', 'O'), repeat1(octalDigit)),

  decimalLiteral = seq(digit, repeat(digit)),
  hexLiteral     = seq('0', hexidecimal),
  octalLiteral   = seq('0', octadecimal),

  exponent = seq(
    choice('e', 'E'),
    optional(choice('+', '-')),
    repeat1(decimalLiteral)
  ),

  floatLiteral = choice(
    seq(decimals, '.', optional(decimals), optional(exponent)),
    seq(decimals, exponent)
  )

module.exports = grammar({
  name: 'haskell',

  extras: $ => [
    $.comment,
    /\s|\\n/
  ],

  rules: {
    program: $ => seq(repeat($._statement)),

    _statement: $ => choice(
      $._literal,
      $._identifier,
      $.module,
      $.import_declaration
    ),

    module: $ => prec.right(seq(
      'module',
      $.module_identifier,
      optional($.module_export_declarations),
      'where',
      alias(repeat($._statement), $.module_body)
    )),

    module_export_declarations: $ => seq(
      '(',
      optional(commaSep1($.export_declaration)),
      ')'
    ),

    export_declaration: $ => prec.left(seq(
      $._identifier,
      optional(
        seq(
          '(',
          choice('..', commaSep1($._identifier)),
          ')'
        )
      )
    )),

    import_declaration: $ => seq(
      'import',
      optional('qualified'),
      $._identifier,
      optional(seq(
        'as',
        $._identifier
      )),
      optional($.import_specification)
    ),

    import_specification: $ => seq(
      optional('hiding'),
      '(',
      optional(
        commaSep1(choice(
          $._identifier,
          seq(
            $._identifier,
            '(',
            choice('..', commaSep1($._identifier)),
            ')'
          )
        ))
      ),
      ')'
    ),

    _literal: $ => choice(
      $.integer,
      $.float,
      $.string,
      $.char
    ),

    _identifier: $ => choice(
      $.variable_identifier,
      $.constructor_identifier,
      $.reserved_identifier,
      $.module_identifier
    ),

    // TODO: type variables -> variable identifiers
    variable_identifier: $ => /[_a-z](\w|')*/,

    // TODO: type constructors -> constructor identifiers
    // TODO: type classes      -> constructor identifiers
    constructor_identifier: $ => /[A-Z](\w|')*/,

    module_identifier: $ => /[A-Z](\w|'|\.)*/,

    reserved_identifier: $ => choice(
      'case',
      'class',
      'data',
      'default',
      'deriving',
      'do',
      'else',
      'foreign',
      'if',
      'in',
      'infix',
      'infixl',
      'infixr',
      'instance',
      'let',
      'newtype',
      'of',
      'then',
      'type',
      'where',
      '_'
    ),

    comment: $ => token(prec(-2, choice(
      seq('--', /.*/),
      seq(
        /{-.*\r?\n/,
        repeat(choice(
          /[^-]/,
          /-[^}]/
        )),
        /-}\r?\n/
      )
    ))),

    integer: $ => choice(
      $._integer_literal,
      $._octal_literal,
      $._hexidecimal_literal
    ),

    float: $ => token(floatLiteral),

    char: $ => seq(
      "'",
      choice(
        $._graphic,
        $._space,
        $._escape,
        '"',
        '\''
      ),
      "'"
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        $._graphic,
        $._escape,
        $._gap,
        "'"
      )),
      '"'
    ),

    // TODO: add any unicode character defined as whitespace
    _gap: $ => choice(
      $._space,
      $._newline,
      $._tab,
      $._vertical_tab
    ),

    _graphic: $ => choice(
      $._small,
      $._large,
      $._symbol,
      digit,
      $._special
    ),

    // TODO: any lowercase unicode letter
    _small: $ => choice(
      /[a-z]/,
      '_'
    ),

    // TODO: any uppercase or titlecase unicode letter
    _large: $ => choice(
      $._ascii_large
    ),

    _ascii_large: $ => /[A-Z]/,

    // TODO: any Unicode symol or punctuation
    _symbol: $ => choice(
      '!', '#', '$', '%', '&', '⋆', '+', '.', '/', '<', '=', '>', '?', '@', '^', '|', '-', '~', ':', '\\'
    ),

    _special: $ => choice(
      '(', ')', ';', '[', ']', '`', '{', '}'
    ),

    _space: $ => ' ',

    _newline: $ => '\n',

    _tab: $ => '\t',

    _vertical_tab: $ => '\v',

    _escape: $ => prec(1, seq(
      '\\',
      choice(
        $._char_escape,
        $._ascii,
        digit,
        hexidecimal,
        octadecimal
      )
    )),

    _char_escape: $ => choice(
      'a',
      'b',
      'f',
      'n',
      'r',
      't',
      'v',
      '\\',
      '"',
      "'",
      '&'
    ),

    _ascii: $ => choice(
      seq('^', $._cntrl),
      'NUL',
      'SOH',
      'STX',
      'ETX',
      'EOT',
      'ENQ',
      'ACK',
      'BEL',
      'BS',
      'HT',
      'LF',
      'VT',
      'FF',
      'CR',
      'SO',
      'SI',
      'DLE',
      'DC1',
      'DC2',
      'DC3',
      'DC4',
      'NAK',
      'SYN',
      'ETB',
      'CAN',
      'EM',
      'SUB',
      'ESC',
      'FS',
      'GS',
      'RS',
      'US',
      'SP',
      'DEL'
    ),

    _cntrl: $ => choice(
      $._ascii_large,
      '@',
      '[',
      ']',
      '\\',
      '^',
      '_'
    ),

    _integer_literal: $ => token(decimalLiteral),
    _octal_literal:   $ => token(octalLiteral),
    _hexidecimal_literal: $ => token(hexLiteral)
  }
})

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
