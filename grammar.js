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
    [$.qualified_variable_symbol, $.constructor_identifier],
    [$.qualified_variable_identifier, $.constructor_identifier],
    [$.tuple, $.parenthesized_constructor]
  ],

  rules: {
    module: $ => choice(
      seq(
        'module',
        $.module_identifier,
        optional($.module_exports),
        'where',
        $.declarations
      ),
      repeat(seq($._declaration, choice(';', $._layout_semicolon)))
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
      $.module_identifier,
      optional(seq(
        'as',
        $.module_identifier
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
      $.type_class_instance,
      $.default,
      $.foreign,
      $.function_declaration,
      $._general_declaration,
      $._identifier,

      // TODO - remove
      $._expression
    ),

    function_declaration: $ => seq(
      $.function_head,
      $.function_body
    ),

    function_head: $ => prec.left(choice(
      seq($._variable, repeat1($._function_pattern))
    )),

    function_body: $ => seq(
      '=',
      repeat(choice($._identifier, $._literal, $.general_constructor))
    ),

    _function_pattern: $ => choice(
      $.as_pattern,
      $._literal,
      $.wildcard,
      $._identifier,
      seq(choice($._identifier, $.simple_type), '{', optional($.labels), '}'),
      $.parenthesized_pattern,
      $.tuple_pattern,
      $.list_constructor
    ),

    parenthesized_pattern: $ => seq(
      '(',
      $._pattern,
    parenthesized_pattern: $ => seq(
      '(',
      choice($._function_pattern, $._pattern, $.list_constructor),
      ')'
    ),

    _pattern: $ => prec.right(1, choice(
      $.negative_literal,
      $.general_constructor,
      seq($._function_pattern, $._op, $._function_pattern)
    )),

    negative_literal: $ => seq(
      '-',
      '(',
      $._literal,
      ')'
    ),

    general_constructor: $ => prec.right(seq(
      $.constructor_identifier,
      repeat1($.variable_identifier)
    )),

    as_pattern: $ => prec.right(1, seq(
      $._variable,
      '@',
      $._function_pattern
    )),

    labels: $ => commaSep1($.label),

    label: $ => seq(
      $._identifier,
      '=',
      $._literal
    ),

    _fpat: $ => seq($._identifier, '=', $._pat),

    _pat: $ => prec.right(choice(
      seq(
        $._lpat,
        $._qconop,
        $._pat
      ),
      $._lpat
    )),

    _qconop: $ => choice(
      $.constructor_symbol,
      seq('`', $._identifier, '`')
    ),

    _lpat: $ => prec(1, choice(
      $._function_pattern,
      seq('-','(',$._literal,')'),
      seq($._identifier, repeat1($._function_pattern))
    )),

    wildcard: $ => '_',

    _variable: $ => choice(
      $.variable_identifier,
      $.qualified_variable_identifier,
    ),

    qualified_variable_identifier: $ => seq(
      $._constructor_pattern,
      $._variable_pattern
    ),

    qualified_variable_symbol: $ => seq(
      $._constructor_pattern,
      $._variable_symbol
    ),

    _expression: $ => choice(
      $._literal,
      $._variable,
      $.do_expression
    ),

    foreign: $ => seq(
      'foreign',
      choice($.foreign_export, $.foreign_import),
      $.calling_convention,
      optional($.safety),
      optional($.string),
      $.type_signature
    ),

    foreign_import: $ => 'import',
    foreign_export: $ => 'export',

    calling_convention: $ => choice(
      'ccall',
      'stdcall',
      'cplusplus',
      'jvm',
      'dotnet'
    ),

    safety: $ => choice(
      'unsafe',
      'safe'
    ),

    default: $ => seq(
      'default',
      '(',
      optional(commaSep1($._identifier)),
      ')'
    ),

    do_expression: $ => seq(
      'do',
      $.statement_list
    ),

    statement_list: $ => choice(
      seq('{', repeat($._statement), '}'),
      seq($._layout_open_brace, repeat($._statement), $._layout_close_brace)
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
      $.general_declarations
    ),

    general_declarations: $ => choice(
      seq(
        '{',
        repeat(seq($._general_declaration, choice(';', $._layout_semicolon))),
        '}'
      ),
      seq(
        $._layout_open_brace,
        repeat(seq($._general_declaration, choice(';', $._layout_semicolon))),
        $._layout_close_brace
      )
    ),

    type_class_instance: $ => seq(
      'instance',
      optional($.context),
      $.constructor_identifier,
      repeat($.variable_identifier),
      'where',
      $.general_declarations
    ),

    // TODO: Make general declarations representative of the spec.
    _general_declaration: $ => choice(
      $.type_signature,
      $.fixity
    ),

    fixity: $ => seq(
      choice('infixl', 'infixr', 'infix'),
      optional($.integer),
      commaSep1($._op)
    ),

    _op: $ => choice(
      $.variable_symbol,
      $.constructor_symbol,
      seq(
        '`',
        $._identifier,
        '`'
      )
    ),

    variable_symbol: $ => prec.right(seq($._variable_symbol, repeat($._variable_symbol))),
    constructor_symbol: $ => prec.right(seq(':', repeat($._constructor_symbol))),

    type_signature: $ => seq(
      $._identifier,
      '::',
      optional($.context),
      $.type
    ),

    type: $ => seq(
      choice(
        $._generic_type_constructor,
        alias($.variable_identifier, $.type_variable),
        $.tuple,
        $.list,
        $.parenthesized_constructor
      ),
      optional(seq('->', $.type))
    ),

    _generic_type_constructor: $ => choice(
      $._type_constructors,
      $.unit_type,
      $.list_constructor,
      $.function_constructor,
      $.tupling_constructor
    ),

    unit_type: $ => '()',
    list_constructor: $ => '[]',
    function_constructor: $ => '(->)',
    tupling_constructor: $ => seq('(', ',', repeat(','), ')'),

    tuple: $ => seq(
      '(',
      commaSep1($.type),
      ')'
    ),

    list: $ => seq(
      '[',
      repeat1($.type),
      ']'
    ),

    parenthesized_constructor: $ => seq(
      '(',
      $.type,
      ')'
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
        seq('(', commaSep1($.class), ')')
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
      optional($.context),
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
      $.type
    ),

    _literal: $ => choice(
      $.integer,
      $.float,
      $.string,
      $.char
    ),

    _identifier: $ => prec(1, choice(
      $.variable_identifier,
      $.constructor_identifier
    )),

    simple_type: $ => prec.right(seq(
      alias($.constructor_identifier, $.type_constructor),
      alias(repeat($.variable_identifier), $.type_variable)
    )),

    variable_identifier: $ => $._variable_pattern,
    _variable_pattern: $ => /[_a-z](\w|')*/,

    constructor_identifier: $ => prec.left($._constructor_pattern),
    _constructor_pattern: $ => /[A-Z](\w|'|)*/,

    _type_constructors: $ => prec.right(choice(
      $.qualified_type_constructor,
      seq(
        alias($._constructor_pattern, $.type_constructor),
        repeat($.variable_identifier)
      )
    )),

    qualified_type_constructor: $ => prec.right(seq(
      $.module_identifier,
      repeat(seq('.', $.module_identifier)),
      optional('.'),
      $.constructor_identifier,
      repeat($.variable_identifier)
    )),

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
      '!',
      '#',
      '$',
      '%',
      '&',
      '⋆',
      '+',
      '.',
      '/',
      '<',
      '=',
      '>',
      '?',
      '@',
      '^',
      '|',
      '-',
      '~',
      ':',
      '\\'
    ),

    _variable_symbol: $ => choice(
      '!',
      '#',
      '$',
      '%',
      '&',
      '⋆',
      '+',
      '.',
      '/',
      '<',
      '>',
      '?',
      '^',
      '-'
    ),

    _constructor_symbol: $ => prec(1, choice(
      '!',
      '#',
      '$',
      '%',
      '&',
      '⋆',
      '+',
      '.',
      '/',
      '<',
      '>',
      '?',
      '^',
      '-',
      ':'
    )),

    _reserved_operator: $ => choice(
      '..',
      ':',
      '::',
      '=',
      '\\',
      '|',
      '<-',
      '->',
      '@',
      '~',
      '=>'
    ),

    _special: $ => choice(
      '(',
      ')',
      ';',
      '[',
      ']',
      '`',
      '{',
      '}'
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
    _hexidecimal_literal: $ => token(hexLiteral),

    fields: $ => seq(
      '{',
      commaSep1($.field),
      '}'
    )
  }
})

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
