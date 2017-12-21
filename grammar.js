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

  externals: $ => [
    $._layout_semicolon,
    $._layout_open_brace,
    $._layout_close_brace,
  ],

  conflicts: $ => [
    [$.type_class, $.class],
    [$.simple_type, $.class],
  ],

  rules: {
    module: $ => seq(
      'module',
      $.module_identifier,
      optional($.module_exports),
      'where',
      $.declarations
    ),

    declarations: $ => choice(
      seq(
        '{',
        repeat(seq($._declaration, choice(';', $._layout_semicolon))),
        '}'
      ),
      seq(
        $._layout_open_brace,
        repeat(seq($._declaration, choice(';', $._layout_semicolon))),
        $._layout_close_brace
      )
    ),

    module_exports: $ => seq(
      '(',
      optional(commaSep1($.export)),
      ')'
    ),

    export: $ => seq(
      $._identifier,
      optional(
        seq(
          '(',
          choice('..', commaSep1($._identifier)),
          ')'
        )
      )
    ),

    import: $ => seq(
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

    _declaration: $ => choice(
      $.import,
      $.type_synonym,
      $.newtype,
      $.algebraic_datatype,
      $.type_class,
      $.type_signature,
      $.fixity,

      // TODO - remove
      $._expression
    ),

    _expression: $ => choice(
      $._literal,
      $.variable_identifier,
      $.do_expression
    ),

    do_expression: $ => seq(
      'do',
      $.statement_list
    ),

    statement_list: $ => choice(
      seq('{', repeat($._statement), '}'),
      seq($._layout_open_brace, repeat($._statement), $._layout_close_brace),
    ),

    _statement: $ => seq(
      $._expression,
      choice(';', $._layout_semicolon)
    ),

    type_class: $ => seq(
      'class',
      optional($.context),
      $.constructor_identifier,
      repeat($.variable_identifier),
      'where',
      $.declarations
    ),

    fixity: $ => seq(
      choice('infixl', 'infixr', 'infix'),
      optional($.integer),
      commaSep1($._op)
    ),

    _op: $ => choice(
      choice($.variable_symbol, $.constructor_symbol),
      seq(
        '`',
        $._identifier,
        '`'
      )
    ),

    variable_symbol: $ => seq(
      optional('('),
      repeat1($._symbol),
      optional(')')
    ),

    constructor_symbol: $ => prec(1, seq(
      optional('('),
      ':',
      repeat($._symbol),
      optional(')')
    )),

    type_signature: $ => seq(
      repeat1($.variable_identifier),
      '::',
      optional($.context),
      $._type
    ),

    _type: $ => choice(
      $.simple_type,
      $.function_type,
    ),

    function_type: $ => seq(
      $.simple_type,
      '->',
      $._type
    ),

    algebraic_datatype: $ => seq(
      'data',
      optional($.context),
      $.simple_type,
      optional('='),
      optional($.constructors),
      optional($.deriving)
    ),

    context: $ => seq(
      choice(
        $.class,
        seq(
          '(',
          commaSep1($.class),
          ')'
        )
      ),
      '=>'
    ),

    class: $ => choice(
      seq(
        $.constructor_identifier,
        $.variable_identifier
      ),
      seq(
        $.constructor_identifier,
        '(',
        repeat1($.variable_identifier),
        ')'
      )
    ),

    constructors: $ => seq(
      $.constructor,
      repeat(seq('|', $.constructor))
    ),

    constructor: $ => seq(
      $.constructor_identifier,
      optional(choice(
        $.fields,
        repeat(choice($.strict, $._identifier))
      ))
    ),

    deriving: $ => seq(
      'deriving',
      choice(
        $._identifier,
        seq(
          '(',
          commaSep1($._identifier),
          ')'
        )
      )
    ),

    newtype: $ => seq(
      'newtype',
      $.simple_type,
      '=',
      $.new_constructor,
      optional($.deriving)
    ),

    new_constructor: $ => seq(
      $.constructor_identifier,
      choice(
        $._identifier,
        $.fields
      )
    ),

    fields: $ => seq(
      '{',
      commaSep1($.field),
      '}'
    ),

    field: $ => seq(
      commaSep1($.variable_identifier),
      '::',
      choice(
        $.strict,
        $._identifier
      )
    ),

    strict: $ => seq(
      '!',
      $._identifier
    ),

    type_synonym: $ => seq(
      'type',
      $.simple_type,
      '=',
      $._type
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
      $.module_identifier
    ),

    simple_type: $ => seq(
      alias($.constructor_identifier, $.type_constructor),
      alias(repeat($.variable_identifier), $.type_variable)
    ),

    variable_identifier: $ => /[_a-z](\w|')*/,

    constructor_identifier: $ => /[A-Z](\w|'|)*|\[.*\]|\([,]*\)|\(->\)/,

    module_identifier: $ => /[A-Z](\w|'|\.)*/,

    comment: $ => token(choice(
      seq('--', /.*/),
      seq(
        /{-.*\r?\n/,
        repeat(choice(
          /[^-]/,
          /-[^}]/
        )),
        /-}\r?\n/
      )
    )),

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
