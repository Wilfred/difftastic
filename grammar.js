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
    [$._variable_symbol, $._extra_variable_symbol],
    [$._expression, $.function_head]
  ],

  rules: {
    module: $ => choice(
      seq(
        'module',
        $.module_identifier,
        optional($.module_exports),
        $.where
      ),
      repeat(seq($._declaration, choice(';', $._layout_semicolon)))
    ),

    _declarations: $ => prec.right(choice(
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
    )),

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

    import: $ => prec.right(seq(
      'import',
      alias(optional('qualified'), $.qualified),
      choice(
        $.module_identifier,
        $.import_alias
      ),
      optional(choice($.import_specification, $.hidden_import_specification))
    )),

    import_specification: $ => $._import_specification,

    _import_specification: $ => seq(
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

    import_alias: $ => seq(
      $.module_identifier,
      'as',
      $.module_identifier
    ),

    hidden_import_specification: $ => seq(
      'hiding',
      $._import_specification
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
      $.type_signature,
      $.fixity,
      $.function_declaration,
      $._statement
    ),

    function_declaration: $ => seq(
      $.function_head,
      $.function_body
    ),

    function_head: $ => seq(
      alias($._identifier, $.function_identifier),
      repeat($._expression)
    ),

    function_body: $ => prec.right(seq(
      '=',
      repeat($._statement)
    )),

    where: $ => seq(
      'where',
      $._declarations
    ),

    field_labels: $ => seq(
      '{',
      optional(commaSep1($.field_label)),
      '}'
    ),

    irrefutable: $ => seq(
      '~',
      $._expression
    ),

    parenthesized: $ => seq(
      '(',
      $._statement,
      ')'
    ),

    negative_literal: $ => prec(1, seq('-', '(', $._literal, ')')),

    as: $ => prec.right(1, seq(
      $._identifier,
      '@',
      $._expression
    )),

    field_label: $ => seq(
      $._identifier,
      '=',
      $._literal
    ),

    wildcard: $ => '_',

    _variable: $ => choice(
      $.variable_identifier,
      $.qualified_variable_identifier,
      $.variable_symbol,
      $.qualified_variable_symbol
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
      $._identifier,
      $.do_expression,
      $.as,
      $.wildcard,
      $.parenthesized,
      $.irrefutable,
      $.binary,
      $._empty,
      $.where
    ),

    _empty: $ => ';',

    binary: $ => prec.left(1, seq(
      $._expression,
      $._op,
      $._expression
    )),

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

    _statement: $ => choice(
      $._expression,
      $.if_statement
    ),

    if_statement: $ => seq(
      'if',
      alias($._statement, $.condition),
      optional($._empty),
      'then',
      alias($._statement, $.then_clause),
      optional($._empty),
      'else',
      alias($._statement, $.else_clause)
    ),

    type_class: $ => seq(
      'class',
      optional($.context),
      $._identifier,
      $.where
    ),

    type_class_instance: $ => seq(
      'instance',
      optional($.context),
      $._identifier,
      $.where
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

    variable_symbol: $ => prec.right(choice(
      seq('(', repeat1($._extra_variable_symbol), ')'),
      repeat1($._variable_symbol)
    )),

    constructor_symbol: $ => prec.right(seq(':', repeat($._constructor_symbol))),

    type_signature: $ => seq(
      $.function_identifier,
      '::',
      optional($.context),
      $._type
    ),

    function_identifier: $ => commaSep1($._identifier),

    _type: $ => seq(
      $._expression,
      optional(seq('->', $._type))
    ),

    unit_type: $ => '()',
    list_constructor: $ => '[]',
    function_constructor: $ => '(->)',
    tupling_constructor: $ => seq('(', ',', repeat(','), ')'),

    tuple: $ => seq(
      '(',
      commaSep1($._expression),
      ')'
    ),

    list: $ => seq(
      '[',
      optional(commaSep1($._expression)),
      ']'
    ),

    algebraic_datatype: $ => seq(
      'data',
      optional($.context),
      $._identifier,
      optional('='),
      optional($.constructors),
      optional($.deriving)
    ),

    context: $ => prec(1, seq(
      choice(
        $._identifier,
        seq('(', commaSep1($._identifier), ')')
      ),
      '=>'
    )),

    constructors: $ => seq(
      $._identifier,
      repeat(seq('|', $._identifier))
    ),

    constructor: $ => prec.right(choice(
      seq(
        $.constructor_identifier,
        choice(
          $.fields,
          $.field_labels,
          repeat(choice($.strict, $._identifier)),
          prec.dynamic(5, seq('(', commaSep1($._identifier), ')')),
          repeat($._primary_literal),
          seq('(', alias('..', $.all_constructors), ')'),
          seq('(', repeat($._variable), ')')
        )
      ),
      seq('(', $.constructor, ')'),
      $.unit_type,
      $.list_constructor,
      $.function_constructor,
      $.tupling_constructor,
    )),

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
      $._identifier,
      '=',
      $._identifier,
      optional($.deriving)
    ),

    field: $ => seq(
      commaSep1($.variable_identifier),
      '::',
      choice(
        $.strict,
        $._identifier
      )
    ),

    strict: $ => prec(1, seq(
      '!',
      $._identifier
    )),

    type_synonym: $ => seq(
      'type',
      $._identifier,
      '=',
      $._type
    ),

    _literal: $ => choice(
      $._primary_literal,
      $.list,
      $.negative_literal,
      $.tuple
    ),

    _primary_literal: $ => choice(
      $.integer,
      $.float,
      $.string,
      $.char
    ),

    _identifier: $ => prec.left(1, choice(
      $.constructor,
      $._variable
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

    _extra_variable_symbol: $ => choice(
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
      '='
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
