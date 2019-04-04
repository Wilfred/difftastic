const PREC = {
  times: 6,
  plus: 5,
  lazy_or: 4,
  lazy_and: 3,
  arrow: 2,
  assign: 1,
  pair: 0,
};

module.exports =
grammar({
  name: 'julia',

  inline: $ => [
    $._terminator,
    $._expression_list,
    $._definition,
    $._statement,
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

    import_statement: $ => seq(
      choice(
        'using',
        'import'
      ),
      choice($.identifier, $.field_expression),
      optional($.import_list)
    ),

    import_list: $ => seq(
      token.immediate(':'),
      prec.left(sep1(',', $.identifier))
    ),

    // Expressions

    _expression: $ => choice(
      $._statement,
      $._definition,
      $.parenthesized_expression,
      $.typed_expression,
      $.pair_expression,
      $.field_expression,
      $.call_expression,
      $.binary_expression,
      $.assignment_expression,
      $.parameterized_identifier,
      $.identifier,
      $.number,
      $.string
    ),

    parenthesized_expression: $ => prec(-1, seq(
      '(', $._expression, ')'
    )),

    field_expression: $ => seq(
      choice($.identifier, $.field_expression),
      '.',
      $.identifier
    ),

    typed_expression: $ => seq(
      choice(
        $._expression
      ),
      choice('::', '<:'),
      choice($.identifier, $.parameterized_identifier)
    ),

    parameterized_identifier: $ => seq(
      $.identifier,
      $.type_argument_list
    ),

    type_argument_list: $ => seq(
      '{',
      sep1(',', choice($._expression)),
      '}'
    ),

    call_expression: $ => seq(
      $._expression,
      $.argument_list
    ),

    argument_list: $ => seq(
      '(',
      sep(',', $._expression),
      ')'
    ),

    assignment_expression: $ => prec.right(PREC.assign, seq(
      $._expression,
      $._assign_operator,
      $._expression
    )),

    binary_expression: $ => choice(
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

    // Tokens

    identifier: $ => /[a-zA-Z]\w*/,

    number: $ => /\d+/,

    string: $ => token(seq(
      '"',
      repeat(choice(/[^"\\\n]/, /\\./)),
      '"'
    )),

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
