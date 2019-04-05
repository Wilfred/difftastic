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
].reduce((result, name, index) => {
  result[name] = index;
  return result;
}, {});

module.exports =
grammar({
  name: 'julia',

  inline: $ => [
    $._terminator,
    $._expression_list,
    $._definition,
    $._statement,
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
      sep1(',', choice($.identifier, $.typed_expression)),
      '}'
    ),

    subtype_clause: $ => prec.left(seq(
      '<:',
      $._expression
    )),

    // Statements

    _statement: $ => choice(
      $.if_statement,
      $.for_statement,
      $.import_statement
    ),

    if_statement: $ => seq(
      'if',
      $._expression,
      $._expression_list,
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

    for_statement: $ => seq(
      'for',
      $.identifier,
      choice('in', '=', '∈'),
      $._expression,
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

    // Expressions

    _expression: $ => choice(
      $._statement,
      $._definition,
      $.parenthesized_expression,
      $.typed_expression,
      $.compound_expression,
      $.pair_expression,
      $.field_expression,
      $.macro_expression,
      $.call_expression,
      $.binary_expression,
      $.assignment_expression,
      $.parameterized_identifier,
      $.array_expression,
      $.tuple_expression,
      $.function_expression,
      $.coefficient_expression,
      $.range_expression,
      $.quote_expression,
      $.identifier,
      $.number,
      $.string
    ),

    parenthesized_expression: $ => prec(1, seq(
      '(', $._expression_list, ')'
    )),

    field_expression: $ => prec(PREC.dot, seq(
      $._expression,
      '.',
      $.identifier
    )),

    typed_expression: $ => prec(PREC.decl, seq(
      choice(
        $._expression
      ),
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
        $.field_expression
      ),
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

    assignment_expression: $ => prec.right(PREC.assign, seq(
      $._expression,
      $._assign_operator,
      $._expression
    )),

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
        $._plus_operator,
        $._expression
      )),
      prec.right(PREC.arrow, seq(
        $._expression,
        $._arrow_operator,
        $._expression
      )),
      prec.left(PREC.comparison, seq(
        $._expression,
        $._comparison_operator,
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

    identifier: $ => /[a-zA-Zα-ωΑ-Ω][a-zA-Zα-ωΑ-Ω\d_'′!\u0304]*/,

    number: $ => choice(
      /\d+\.?/,
      /\d?\.\d+/
    ),

    string: $ => token(seq(
      '"',
      repeat(choice(/[^"\\\n]/, /\\./)),
      '"'
    )),

    _power_operator: $ => token(addDots(`
      ^ ↑ ↓ ⇵ ⟰ ⟱ ⤈ ⤉ ⤊ ⤋ ⤒ ⤓ ⥉ ⥌ ⥍ ⥏ ⥑ ⥔ ⥕ ⥘ ⥙ ⥜ ⥝ ⥠ ⥡ ⥣ ⥥ ⥮ ⥯ ￪ ￬
    `)),

    _times_operator: $ => token(addDots(`
      * / ÷ % & ⋅ ∘ × \\ ∩ ∧ ⊗ ⊘ ⊙ ⊚ ⊛ ⊠ ⊡ ⊓ ∗ ∙
      ∤ ⅋ ≀ ⊼ ⋄ ⋆ ⋇ ⋉ ⋊ ⋋ ⋌ ⋏ ⋒ ⟑ ⦸ ⦼ ⦾ ⦿ ⧶ ⧷ ⨇ ⨰
      ⨱ ⨲ ⨳ ⨴ ⨵ ⨶ ⨷ ⨸ ⨻ ⨼ ⨽ ⩀ ⩃ ⩄ ⩋ ⩍ ⩎ ⩑ ⩓ ⩕ ⩘
      ⩚ ⩜ ⩞ ⩟ ⩠ ⫛ ⊍ ▷ ⨝ ⟕ ⟖ ⟗
    `)),

    _plus_operator: $ => token(choice('$', addDots(`
      + - |\|| ⊕ ⊖ ⊞ ⊟ |++| ∪ ∨ ⊔ ± ∓ ∔ ∸ ≂ ≏ ⊎ ⊻ ⊽ ⋎ ⋓ ⧺ ⧻ ⨈
      ⨢ ⨣ ⨤ ⨥ ⨦ ⨧ ⨨ ⨩ ⨪ ⨫ ⨬ ⨭ ⨮ ⨹ ⨺ ⩁ ⩂ ⩅ ⩊ ⩌ ⩏ ⩐ ⩒ ⩔ ⩖ ⩗ ⩛ ⩝ ⩡ ⩢ ⩣
    `))),

    _arrow_operator: $ => token(choice('--', '-->', addDots(`
      ← → ↔ ↚ ↛ ↞ ↠ ↢ ↣ ↦ ↤ ↮ ⇎ ⇍ ⇏ ⇐ ⇒ ⇔ ⇴ ⇶
      ⇷ ⇸ ⇹ ⇺ ⇻ ⇼ ⇽ ⇾ ⇿ ⟵ ⟶ ⟷ ⟹ ⟺ ⟻ ⟼ ⟽ ⟾
      ⟿ ⤀ ⤁ ⤂ ⤃ ⤄ ⤅ ⤆ ⤇ ⤌ ⤍ ⤎ ⤏ ⤐ ⤑ ⤔ ⤕ ⤖ ⤗ ⤘
      ⤝ ⤞ ⤟ ⤠ ⥄ ⥅ ⥆ ⥇ ⥈ ⥊ ⥋ ⥎ ⥐ ⥒ ⥓ ⥖ ⥗ ⥚ ⥛ ⥞ ⥟
      ⥢ ⥤ ⥦ ⥧ ⥨ ⥩ ⥪ ⥫ ⥬ ⥭ ⥰ ⧴ ⬱ ⬰ ⬲ ⬳ ⬴ ⬵ ⬶ ⬷
      ⬸ ⬹ ⬺ ⬻ ⬼ ⬽ ⬾ ⬿ ⭀ ⭁ ⭂ ⭃ ⭄ ⭇ ⭈ ⭉ ⭊ ⭋ ⭌ ￩ ￫
      ⇜ ⇝ ↜ ↝ ↩ ↪ ↫ ↬ ↼ ↽ ⇀ ⇁ ⇄ ⇆ ⇇ ⇉ ⇋ ⇌ ⇚ ⇛ ⇠ ⇢
    `))),

    _comparison_operator: $ => token(choice('|<:|', '|>:|', 'in', 'isa', addDots(`
      > < >= ≥ <= ≤ == === ≡ != ≠ !== ≢ ∈ ∉ ∋ ∌ ⊆ ⊈ ⊂ ⊄ ⊊ ∝ ∊ ∍ ∥ ∦ ∷ ∺ ∻ ∽ ∾ ≁
      ≃ ≂ ≄ ≅ ≆ ≇ ≈ ≉ ≊ ≋ ≌ ≍ ≎ ≐ ≑ ≒ ≓ ≖ ≗ ≘ ≙ ≚ ≛ ≜ ≝ ≞ ≟ ≣ ≦ ≧ ≨ ≩ ≪ ≫ ≬ ≭
      ≮ ≯ ≰ ≱ ≲ ≳ ≴ ≵ ≶ ≷ ≸ ≹ ≺ ≻ ≼ ≽ ≾ ≿ ⊀ ⊁ ⊃ ⊅ ⊇ ⊉ ⊋ ⊏ ⊐ ⊑ ⊒ ⊜ ⊩ ⊬ ⊮ ⊰ ⊱
      ⊲ ⊳ ⊴ ⊵ ⊶ ⊷ ⋍ ⋐ ⋑ ⋕ ⋖ ⋗ ⋘ ⋙ ⋚ ⋛ ⋜ ⋝ ⋞ ⋟ ⋠ ⋡ ⋢ ⋣ ⋤ ⋥ ⋦ ⋧ ⋨ ⋩ ⋪ ⋫
      ⋬ ⋭ ⋲ ⋳ ⋴ ⋵ ⋶ ⋷ ⋸ ⋹ ⋺ ⋻ ⋼ ⋽ ⋾ ⋿ ⟈ ⟉ ⟒ ⦷ ⧀ ⧁ ⧡ ⧣ ⧤ ⧥ ⩦ ⩧ ⩪ ⩫ ⩬ ⩭ ⩮ ⩯
      ⩰ ⩱ ⩲ ⩳ ⩵ ⩶ ⩷ ⩸ ⩹ ⩺ ⩻ ⩼ ⩽ ⩾ ⩿ ⪀ ⪁ ⪂ ⪃ ⪄ ⪅ ⪆ ⪇ ⪈ ⪉ ⪊ ⪋ ⪌ ⪍ ⪎ ⪏ ⪐ ⪑ ⪒ ⪓ ⪔
      ⪕ ⪖ ⪗ ⪘ ⪙ ⪚ ⪛ ⪜ ⪝ ⪞ ⪟ ⪠ ⪡ ⪢ ⪣ ⪤ ⪥ ⪦ ⪧ ⪨ ⪩ ⪪ ⪫ ⪬ ⪭ ⪮ ⪯ ⪰ ⪱ ⪲ ⪳ ⪴ ⪵ ⪶ ⪷ ⪸
      ⪹ ⪺ ⪻ ⪼ ⪽ ⪾ ⪿ ⫀ ⫁ ⫂ ⫃ ⫄ ⫅ ⫆ ⫇ ⫈ ⫉ ⫊ ⫋ ⫌ ⫍ ⫎ ⫏ ⫐ ⫑ ⫒ ⫓ ⫔ ⫕ ⫖ ⫗ ⫘ ⫙ ⫷ ⫸
      ⫹ ⫺ ⊢ ⊣ ⟂
    `))),

    _assign_operator: $ => token(choice(':=', '~', '$=', addDots(`
      = += -= *= /= //= |\=| ^= ÷= %= <<= >>= >>>= ||=| &= ⊻= ≔ ⩴ ≕
    `))),

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
