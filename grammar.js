const PREC = [
  'assign',
  'pair',
  'conditional',
  'lazy_or',
  'lazy_and',
  'arrow',
  'comparison',
  'pipe_left',
  'pipe_right',
  'colon_quote',
  'colon_range',
  'plus',
  'bitshift',
  'times',
  'rational',
  'power',
  'call',
  'decl',
  'dot',
  'postfix',
  'prefix',
].reduce((result, name, index) => {
  result[name] = index + 10;
  return result;
}, {});

const ARROW_OPERATORS = `
  ← → ↔ ↚ ↛ ↞ ↠ ↢ ↣ ↦ ↤ ↮ ⇎ ⇍ ⇏ ⇐ ⇒ ⇔ ⇴ ⇶
  ⇷ ⇸ ⇹ ⇺ ⇻ ⇼ ⇽ ⇾ ⇿ ⟵ ⟶ ⟷ ⟹ ⟺ ⟻ ⟼ ⟽ ⟾
  ⟿ ⤀ ⤁ ⤂ ⤃ ⤄ ⤅ ⤆ ⤇ ⤌ ⤍ ⤎ ⤏ ⤐ ⤑ ⤔ ⤕ ⤖ ⤗ ⤘
  ⤝ ⤞ ⤟ ⤠ ⥄ ⥅ ⥆ ⥇ ⥈ ⥊ ⥋ ⥎ ⥐ ⥒ ⥓ ⥖ ⥗ ⥚ ⥛ ⥞ ⥟
  ⥢ ⥤ ⥦ ⥧ ⥨ ⥩ ⥪ ⥫ ⥬ ⥭ ⥰ ⧴ ⬱ ⬰ ⬲ ⬳ ⬴ ⬵ ⬶ ⬷
  ⬸ ⬹ ⬺ ⬻ ⬼ ⬽ ⬾ ⬿ ⭀ ⭁ ⭂ ⭃ ⭄ ⭇ ⭈ ⭉ ⭊ ⭋ ⭌ ￩ ￫
  ⇜ ⇝ ↜ ↝ ↩ ↪ ↫ ↬ ↼ ↽ ⇀ ⇁ ⇄ ⇆ ⇇ ⇉ ⇋ ⇌ ⇚ ⇛ ⇠ ⇢
`;

const ASSIGN_OPERATORS = `
  = += -= *= /= //= |\=| ^= ÷= %= <<= >>= >>>= ||=| &= ⊻= ≔ ⩴ ≕
`;

const COMPARISON_OPERATORS = `
  > < >= ≥ <= ≤ == === ≡ != ≠ !== ≢ ∈ ∉ ∋ ∌ ⊆ ⊈ ⊂ ⊄ ⊊ ∝ ∊ ∍ ∥ ∦ ∷ ∺ ∻ ∽ ∾ ≁
  ≃ ≂ ≄ ≅ ≆ ≇ ≈ ≉ ≊ ≋ ≌ ≍ ≎ ≐ ≑ ≒ ≓ ≖ ≗ ≘ ≙ ≚ ≛ ≜ ≝ ≞ ≟ ≣ ≦ ≧ ≨ ≩ ≪ ≫ ≬ ≭
  ≮ ≯ ≰ ≱ ≲ ≳ ≴ ≵ ≶ ≷ ≸ ≹ ≺ ≻ ≼ ≽ ≾ ≿ ⊀ ⊁ ⊃ ⊅ ⊇ ⊉ ⊋ ⊏ ⊐ ⊑ ⊒ ⊜ ⊩ ⊬ ⊮ ⊰ ⊱
  ⊲ ⊳ ⊴ ⊵ ⊶ ⊷ ⋍ ⋐ ⋑ ⋕ ⋖ ⋗ ⋘ ⋙ ⋚ ⋛ ⋜ ⋝ ⋞ ⋟ ⋠ ⋡ ⋢ ⋣ ⋤ ⋥ ⋦ ⋧ ⋨ ⋩ ⋪ ⋫
  ⋬ ⋭ ⋲ ⋳ ⋴ ⋵ ⋶ ⋷ ⋸ ⋹ ⋺ ⋻ ⋼ ⋽ ⋾ ⋿ ⟈ ⟉ ⟒ ⦷ ⧀ ⧁ ⧡ ⧣ ⧤ ⧥ ⩦ ⩧ ⩪ ⩫ ⩬ ⩭ ⩮ ⩯
  ⩰ ⩱ ⩲ ⩳ ⩵ ⩶ ⩷ ⩸ ⩹ ⩺ ⩻ ⩼ ⩽ ⩾ ⩿ ⪀ ⪁ ⪂ ⪃ ⪄ ⪅ ⪆ ⪇ ⪈ ⪉ ⪊ ⪋ ⪌ ⪍ ⪎ ⪏ ⪐ ⪑ ⪒ ⪓ ⪔
  ⪕ ⪖ ⪗ ⪘ ⪙ ⪚ ⪛ ⪜ ⪝ ⪞ ⪟ ⪠ ⪡ ⪢ ⪣ ⪤ ⪥ ⪦ ⪧ ⪨ ⪩ ⪪ ⪫ ⪬ ⪭ ⪮ ⪯ ⪰ ⪱ ⪲ ⪳ ⪴ ⪵ ⪶ ⪷ ⪸
  ⪹ ⪺ ⪻ ⪼ ⪽ ⪾ ⪿ ⫀ ⫁ ⫂ ⫃ ⫄ ⫅ ⫆ ⫇ ⫈ ⫉ ⫊ ⫋ ⫌ ⫍ ⫎ ⫏ ⫐ ⫑ ⫒ ⫓ ⫔ ⫕ ⫖ ⫗ ⫘ ⫙ ⫷ ⫸
  ⫹ ⫺ ⊢ ⊣ ⟂
`;

const PLUS_OPERATORS = `
  + - |\|| ⊕ ⊖ ⊞ ⊟ |++| ∪ ∨ ⊔ ± ∓ ∔ ∸ ≂ ≏ ⊎ ⊻ ⊽ ⋎ ⋓ ⧺ ⧻ ⨈
  ⨢ ⨣ ⨤ ⨥ ⨦ ⨧ ⨨ ⨩ ⨪ ⨫ ⨬ ⨭ ⨮ ⨹ ⨺ ⩁ ⩂ ⩅ ⩊ ⩌ ⩏ ⩐ ⩒ ⩔ ⩖ ⩗ ⩛ ⩝ ⩡ ⩢ ⩣
`;

const TIMES_OPERATORS = `
  * / ÷ % & ⋅ ∘ × \\ ∩ ∧ ⊗ ⊘ ⊙ ⊚ ⊛ ⊠ ⊡ ⊓ ∗ ∙
  ∤ ⅋ ≀ ⊼ ⋄ ⋆ ⋇ ⋉ ⋊ ⋋ ⋌ ⋏ ⋒ ⟑ ⦸ ⦼ ⦾ ⦿ ⧶ ⧷ ⨇ ⨰
  ⨱ ⨲ ⨳ ⨴ ⨵ ⨶ ⨷ ⨸ ⨻ ⨼ ⨽ ⩀ ⩃ ⩄ ⩋ ⩍ ⩎ ⩑ ⩓ ⩕ ⩘
  ⩚ ⩜ ⩞ ⩟ ⩠ ⫛ ⊍ ▷ ⨝ ⟕ ⟖ ⟗
`;

const POWER_OPERATORS = `
  ^ ↑ ↓ ⇵ ⟰ ⟱ ⤈ ⤉ ⤊ ⤋ ⤒ ⤓ ⥉ ⥌ ⥍ ⥏ ⥑ ⥔ ⥕ ⥘ ⥙ ⥜ ⥝ ⥠ ⥡ ⥣ ⥥ ⥮ ⥯ ￪ ￬
`;

module.exports =
grammar({
  name: 'julia',

  word: $ => $.identifier,

  inline: $ => [
    $._terminator,
    $._expression_list,
    $._definition,
    $._statement,
  ],

  externals: $ => [
    $.triple_string,
  ],

  conflicts: $ => [
    [$.parameter_list, $._expression],
  ],

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => optional($._expression_list),

    _expression_list: $ => seq(
      sep1($._terminator, $._expression),
      optional($._terminator)
    ),

    // Definitions

    _definition: $ => choice(
      $.struct_definition,
      $.module_definition,
      $.function_definition
    ),

    function_definition: $ => seq(
      'function',
      $.identifier,
      $.parameter_list,
      optional($._expression_list),
      'end'
    ),

    struct_definition: $ => seq(
      optional('mutable'),
      'struct',
      $.identifier,
      optional($.type_parameter_list),
      optional($.subtype_clause),
      optional($._expression_list),
      'end'
    ),

    module_definition: $ => seq(
      'module',
      $.identifier,
      optional($._expression_list),
      'end'
    ),

    parameter_list: $ => seq(
      '(',
      sep(',', $.identifier),
      ')'
    ),

    type_parameter_list: $ => seq(
      '{',
      sep1(',', choice($.identifier, $.constrained_parameter)),
      '}'
    ),

    constrained_parameter: $ => seq(
      $.identifier,
      '<:',
      $._expression
    ),

    subtype_clause: $ => seq(
      '<:',
      $._expression
    ),

    // Statements

    _statement: $ => choice(
      $.if_statement,
      $.try_statement,
      $.for_statement,
      $.while_statement,
      $.let_statement,
      $.const_statement,
      $.quote_statement,
      $.break_statement,
      $.continue_statement,
      $.import_statement,
      $.export_statement
    ),

    if_statement: $ => seq(
      'if',
      $._expression,
      optional($._terminator),
      optional($._expression_list),
      repeat($.elseif_clause),
      optional($.else_clause),
      'end'
    ),

    elseif_clause: $ => seq(
      'elseif',
      $._expression,
      $._expression_list
    ),

    else_clause: $ => seq(
      'else',
      $._expression_list
    ),

    try_statement: $ => seq(
      'try',
      optional($._expression_list),
      optional($.catch_clause),
      optional($.finally_clause),
      'end'
    ),

    catch_clause: $ => prec(1, seq(
      'catch',
      optional($.identifier),
      optional($._terminator),
      optional($._expression_list),
    )),

    finally_clause: $ => seq(
      'finally',
      optional($._terminator),
      optional($._expression_list),
    ),

    for_statement: $ => seq(
      'for',
      choice($.identifier, $.tuple_expression),
      choice('in', '=', '∈'),
      $._expression,
      optional($._terminator),
      optional($._expression_list),
      'end'
    ),

    while_statement: $ => seq(
      'while',
      $._expression,
      optional($._terminator),
      optional($._expression_list),
      'end'
    ),

    break_statement: $ => 'break',

    continue_statement: $ => 'continue',

    let_statement: $ => seq(
      'let',
      sep1(',', $.variable_declaration),
      optional($._terminator),
      optional($._expression_list),
      'end'
    ),

    const_statement: $ => seq(
      'const',
      prec.right(sep1(',', $.variable_declaration))
    ),

    variable_declaration: $ => seq(
      $.identifier,
      optional(seq('=', $._expression))
    ),

    quote_statement: $ => seq(
      'quote',
      optional($._expression_list),
      'end'
    ),

    import_statement: $ => prec.right(seq(
      choice('using', 'import'),
      sep1(',', choice($.identifier, $.scoped_identifier, $.selected_import))
    )),

    selected_import: $ => seq(
      choice($.identifier, $.scoped_identifier),
      token.immediate(':'),
      prec.right(sep1(',', $.identifier))
    ),

    scoped_identifier: $ => prec(PREC.dot, seq(
      choice($.identifier, $.scoped_identifier),
      '.',
      $.identifier
    )),

    export_statement: $ => prec.right(seq(
      'export',
      sep1(',', $.identifier)
    )),

    // Expressions

    _expression: $ => choice(
      $._statement,
      $._definition,
      $.parenthesized_expression,
      $.typed_expression,
      $.compound_expression,
      $.pair_expression,
      $.field_expression,
      $.subscript_expression,
      $.macro_expression,
      $.call_expression,
      $.broadcast_call_expression,
      $.unary_expression,
      $.binary_expression,
      $.assignment_expression,
      $.parameterized_identifier,
      $.array_expression,
      $.matrix_expression,
      $.tuple_expression,
      $.function_expression,
      $.coefficient_expression,
      $.spread_expression,
      $.range_expression,
      $.quote_expression,
      $.identifier,
      $.operator,
      $.number,
      $.string,
      $.triple_string,
    ),

    operator: $ => choice(':', '+', $._plus_operator, $._times_operator, $._power_operator),

    parenthesized_expression: $ => prec(1, seq(
      '(', $._expression_list, ')'
    )),

    field_expression: $ => prec(PREC.dot, seq(
      choice(
        $.identifier,
        $.array_expression,
        $.tuple_expression,
        $.field_expression,
        $.call_expression,
        $.parenthesized_expression
      ),
      '.',
      $.identifier
    )),

    subscript_expression: $ => seq(
      choice(
        $.identifier,
        $.array_expression,
        $.tuple_expression,
        $.field_expression,
        $.call_expression,
        $.parenthesized_expression
      ),
      token.immediate('['),
      $._expression,
      ']'
    ),

    typed_expression: $ => prec(PREC.decl, seq(
      $._expression,
      choice('::', '<:'),
      choice($.identifier, $.parameterized_identifier)
    )),

    parameterized_identifier: $ => seq(
      choice($.identifier, $.field_expression),
      $.type_argument_list
    ),

    type_argument_list: $ => seq(
      '{',
      sep1(',', choice($._expression)),
      '}'
    ),

    compound_expression: $ => seq(
      'begin',
      $._expression_list,
      'end'
    ),

    call_expression: $ => prec(PREC.call, seq(
      choice(
        $.identifier,
        $.field_expression,
        $.call_expression,
        $.parenthesized_expression
      ),
      $.argument_list
    )),

    broadcast_call_expression: $ => prec(PREC.call, seq(
      choice(
        $.identifier,
        $.field_expression,
        $.call_expression
      ),
      '.',
      $.argument_list
    )),

    macro_expression: $ => seq(
      '@',
      $.identifier,
      choice(
        $.argument_list,
        $.macro_argument_list
      )
    ),

    macro_argument_list: $ => prec(-1, repeat1(prec(-1, $._expression))),

    argument_list: $ => seq(
      token.immediate('('),
      sep(',', $._expression),
      ')'
    ),

    spread_expression: $ => prec(PREC.dot, seq($._expression, '...')),

    assignment_expression: $ => prec.right(PREC.assign, seq(
      $._expression,
      $._assign_operator,
      $._expression
    )),

    unary_expression: $ => choice(
      prec(PREC.prefix, seq(
        choice('>:', '+', '-', '!', '~', '¬', '√', '∛', '∜'),
        $._expression
      )),
      prec(PREC.postfix, seq(
        $._expression,
        choice("'", ".'")
      ))
    ),

    binary_expression: $ => choice(
      prec.left(PREC.power, seq(
        $._expression,
        $._power_operator,
        $._expression
      )),
      prec.left(PREC.times, seq(
        $._expression,
        $._times_operator,
        $._expression
      )),
      prec.left(PREC.plus, seq(
        $._expression,
        choice('+', $._plus_operator),
        $._expression
      )),
      prec.right(PREC.arrow, seq(
        $._expression,
        $._arrow_operator,
        $._expression
      )),
      prec.left(PREC.comparison, seq(
        $._expression,
        choice('in', 'isa', $._comparison_operator),
        $._expression
      )),
      prec.left(PREC.lazy_or, seq(
        $._expression,
        '||',
        $._expression
      )),
      prec.left(PREC.lazy_and, seq(
        $._expression,
        '&&',
        $._expression
      ))
    ),

    pair_expression: $ => prec.right(PREC.pair, seq(
      $._expression,
      '=>',
      $._expression
    )),

    tuple_expression: $ => seq(
      '(',
      optional(sep1(',', $._expression)),
      optional(','),
      ')'
    ),

    array_expression: $ => seq(
      '[',
      sep(',', $._expression),
      optional(','),
      ']'
    ),

    matrix_expression: $ => prec(-1, seq(
      '[',
      sep(';', $.matrix_row),
      optional(';'),
      ']'
    )),

    matrix_row: $ => repeat1(prec(-1, $._expression)),

    function_expression: $ => prec.right(PREC.arrow, seq(
      choice(
        $.identifier,
        $.parameter_list,
      ),
      '->',
      $._expression
    )),

    range_expression: $ => prec.left(PREC.colon_range, seq(
      $._expression,
      ':',
      $._expression
    )),

    coefficient_expression: $ => prec(PREC.call, seq(
      $.number,
      choice(
        $.parenthesized_expression,
        $.identifier
      )
    )),

    quote_expression: $ => prec.left(PREC.colon_quote, seq(
      ':',
      $._expression
    )),

    // Tokens

    identifier: $ => {
      const operators = [
        ',',
        ';',
        ':',
        '(', ')',
        '{', '}',
        '&',
        '|',
        '$',
        ARROW_OPERATORS,
        ASSIGN_OPERATORS,
        COMPARISON_OPERATORS,
        PLUS_OPERATORS,
        POWER_OPERATORS,
        TIMES_OPERATORS,
      ];

      const operatorCharacters = operators
        .join(' ')
        .trim()
        .replace(/\s+/g, '')
        .replace(/-/g, '')
        .replace(/\\/g, '\\\\')
        .replace(/!/g, '');

      // First char: ASCII letter, Greek letter, or Extended Latin letter
      // Remaining characters: not delimiter, not operator
      return new RegExp(`[a-zA-ZͰ-ϿĀ-ſ][^\\s\\.\\-\\[\\]${operatorCharacters}]*`)
    },

    number: $ => {
      const decimal = /[0-9][0-9_]*/;
      const hexadecimal = /[0-9a-fA-F][0-9a-fA-F_]*/;
      return token(seq(
        choice(
          seq(/0[xX]/, hexadecimal),
          seq(decimal, optional('.'), optional(decimal)),
          seq('.', decimal)
        ),
        optional(/[eE][+-]?\d+/)
      ))
    },

    string: $ => token(seq(
      '"',
      repeat(choice(/[^"\\\n]/, /\\./)),
      '"'
    )),

    _power_operator: $ => token(addDots(POWER_OPERATORS)),

    _times_operator: $ => token(addDots(TIMES_OPERATORS)),

    _plus_operator: $ => token(choice('$', addDots(PLUS_OPERATORS))),

    _arrow_operator: $ => token(choice('--', '-->', addDots(ARROW_OPERATORS))),

    _comparison_operator: $ => token(choice(
      '|<:|', '|>:|', addDots(COMPARISON_OPERATORS)
    )),

    _assign_operator: $ => token(choice(':=', '~', '$=', addDots(ASSIGN_OPERATORS))),

    _terminator: $ => choice('\n', ';'),

    comment: $ => token(seq('#', /.*/))
  }
});

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

function addDots(operatorString) {
  const operators = operatorString.trim().split(/\s+/)
  return seq(optional('.'), choice(...operators))
}
