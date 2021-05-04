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
    $._definition,
    $._statement,
  ],

  supertypes: $ => [
    $._statement,
    $._definition,
    $._expression,
    $._primary_expression,
  ],

  externals: $ => [
    $.block_comment,
    $.triple_string,
    $._immediate_paren,
  ],

  conflicts: $ => [
    // Arrow functions vs tuples
    [$._primary_expression, $.parameter_list],
    [$._primary_expression, $.spread_parameter],
    [$._primary_expression, $.typed_parameter],
    [$._primary_expression, $.named_field],
    [$._primary_expression, $.named_field, $.optional_parameter],
    [$.named_field, $.optional_parameter],
  ],

  supertypes: $ => [
    $._expression,
    $._statement,
    $._definition,
  ],

  extras: $ => [
    /\s/,
    $.comment,
    $.block_comment,
  ],

  rules: {
    source_file: $ => optional($._expression_list),

    _expression_list: $ => seq(
      sep1($._terminator, choice(
        $._expression,
        $.assignment_expression,
        $.bare_tuple_expression
      )),
      optional($._terminator)
    ),

    // Definitions

    _definition: $ => choice(
      $.abstract_definition,
      $.primitive_definition,
      $.struct_definition,
      $.module_definition,
      $.function_definition,
      $.macro_definition
    ),

    function_definition: $ => seq(
      'function',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      field('parameters', $.parameter_list),
      optional($._expression_list),
      'end'
    ),

    abstract_definition: $ => seq(
      'abstract',
      'type',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      optional($.subtype_clause),
      'end'
    ),

    primitive_definition: $ => seq(
      'primitive',
      'type',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      optional($.subtype_clause),
      alias(/[1-9][0-9]*/, $.number),
      'end'
    ),

    struct_definition: $ => seq(
      optional('mutable'),
      'struct',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      optional($.subtype_clause),
      optional($._expression_list),
      'end'
    ),

    module_definition: $ => seq(
      'module',
      field('name', $.identifier),
      optional($._expression_list),
      'end'
    ),

    macro_definition: $ => seq(
      'macro',
      field('name', choice($.identifier, $.operator)),
      field('parameters', $.parameter_list),
      optional($._expression_list),
      'end'
    ),

    parameter_list: $ => seq(
      '(',
      sep(',', choice(
        $.identifier,
        $.spread_parameter,
        $.optional_parameter,
        $.typed_parameter
      )),
      optional($.keyword_parameters),
      ')'
    ),

    keyword_parameters: $ => seq(
      ';',
      sep1(',', choice(
        $.identifier,
        $.spread_parameter,
        $.optional_parameter,
        $.typed_parameter
      ))
    ),

    optional_parameter: $ => seq(
      choice($.identifier, $.typed_parameter),
      '=',
      $._expression
    ),

    spread_parameter: $ => seq($.identifier, '...'),

    typed_parameter: $ => seq(
      $.identifier,
      '::',
      choice($.identifier, $.parameterized_identifier)
    ),

    type_parameter_list: $ => seq(
      '{',
      sep1(',', choice($.identifier, $.constrained_parameter)),
      '}'
    ),

    constrained_parameter: $ => seq(
      field('name', $.identifier),
      '<:',
      field('value', $._expression)
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
      $.return_statement,
      $.import_statement,
      $.export_statement
    ),

    if_statement: $ => seq(
      'if',
      field('condition', $._expression),
      optional($._terminator),
      optional($._expression_list),
      field('alternative', repeat($.elseif_clause)),
      field('alternative', optional($.else_clause)),
      'end'
    ),

    elseif_clause: $ => seq(
      'elseif',
      field('condition', $._expression),
      optional($._terminator),
      optional($._expression_list)
    ),

    else_clause: $ => seq(
      'else',
      optional($._expression_list)
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
      sep1(',', $.for_binding),
      optional($._terminator),
      optional($._expression_list),
      'end'
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $._expression),
      optional($._terminator),
      optional($._expression_list),
      'end'
    ),

    break_statement: $ => 'break',

    continue_statement: $ => 'continue',

    return_statement: $ => prec.right(-2, seq(
      'return',
      optional(choice(
        $._expression,
        $.bare_tuple_expression
      ))
    )),

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

    variable_declaration: $ => prec.right(seq(
      $.identifier,
      optional(seq('=', $._expression))
    )),

    quote_statement: $ => seq(
      'quote',
      optional($._expression_list),
      'end'
    ),

    import_statement: $ => prec.right(seq(
      choice('using', 'import'),
      sep1(',', choice(
        $.identifier,
        $.scoped_identifier,
        $.selected_import
      ))
    )),

    selected_import: $ => seq(
      choice($.identifier, $.scoped_identifier),
      token.immediate(':'),
      prec.right(sep1(',', choice(
        $.identifier,
        $.macro_identifier
      )))
    ),

    scoped_identifier: $ => prec(PREC.dot, seq(
      optional(choice($.identifier, $.scoped_identifier)),
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
      $.typed_expression,
      $.compound_expression,
      $.pair_expression,
      alias(':', $.operator),
      $.macro_expression,
      $.unary_expression,
      $.binary_expression,
      $.ternary_expression,
      $.generator_expression,
      $.function_expression,
      $.coefficient_expression,
      $.spread_expression,
      $.range_expression,
      $.quote_expression,
      $.interpolation_expression,
      $.number,
      $._primary_expression,
    ),

    _primary_expression: $ => choice(
      $.identifier,
      $.operator,
      $.string,
      $.command_string,
      $.character,
      $.triple_string,
      $.array_expression,
      $.array_comprehension_expression,
      $.matrix_expression,
      $.call_expression,
      $.field_expression,
      $.parenthesized_expression,
      $.subscript_expression,
      $.parameterized_identifier,
      $.tuple_expression,
      $.broadcast_call_expression,
    ),

    bare_tuple_expression: $ => prec(-1, seq(
      $._expression,
      repeat1(prec(-1, seq(',', $._expression)))
    )),

    operator: $ => choice('+', $._plus_operator, $._times_operator, $._power_operator),

    parenthesized_expression: $ => prec(1, seq(
      '(', choice($._expression_list, $.spread_expression), ')'
    )),

    field_expression: $ => prec(PREC.dot, seq(
      $._primary_expression,
      '.',
      $.identifier
    )),

    subscript_expression: $ => seq(
      $._primary_expression,
      token.immediate('['),
      sep(',', $._expression),
      optional(','),
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
      $._primary_expression,
      $._immediate_paren,
      choice($.argument_list, $.generator_expression),
      optional($.do_clause)
    )),

    broadcast_call_expression: $ => prec(PREC.call, seq(
      $._primary_expression,
      '.',
      $._immediate_paren,
      choice($.argument_list, $.generator_expression),
      optional($.do_clause)
    )),

    macro_expression: $ => prec.right(seq(
      $.macro_identifier,
      optional(choice(
        seq($._immediate_paren, $.argument_list),
        $.macro_argument_list
      ))
    )),

    macro_argument_list: $ => prec(-1, repeat1(prec(-1, $._expression))),

    argument_list: $ => seq(
      '(',
      sep(',', choice(
        $._expression,
        alias($.named_field, $.named_argument)
      )),
      optional(seq(
        ';',
        sep1(',', alias($.named_field, $.named_argument))
      )),
      optional(','),
      ')'
    ),

    do_clause: $ => seq(
      'do',
      $._expression_list,
      'end'
    ),

    named_field: $ => seq(
      $.identifier,
      '=',
      $._expression
    ),

    spread_expression: $ => prec(PREC.dot, seq($._expression, '...')),

    assignment_expression: $ => prec.right(PREC.assign, seq(
      choice(
        $._expression,
        $.bare_tuple_expression
      ),
      choice($._assign_operator, '='),
      choice(
        $._expression,
        $.assignment_expression,
        $.bare_tuple_expression
      )
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
      prec.right(PREC.pipe_left, seq(
        $._expression,
        '<|',
        $._expression
      )),
      prec.left(PREC.pipe_right, seq(
        $._expression,
        '|>',
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

    ternary_expression: $ => prec.right(PREC.conditional, seq(
      $._expression,
      '?',
      $._expression,
      ':',
      $._expression
    )),

    pair_expression: $ => prec.right(PREC.pair, seq(
      $._expression,
      '=>',
      $._expression
    )),

    tuple_expression: $ => seq(
      '(',
      choice(
        optional(','),
        seq(
          choice($._expression, $.named_field),
          ','
        ),
        seq(
          choice($._expression, $.named_field),
          repeat1(seq(',', choice($._expression, $.named_field))),
          optional(',')
        )
      ),
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

    generator_expression: $ => seq(
      '(',
      $._expression,
      $._comprehension_clause,
      ')'
    ),

    array_comprehension_expression: $ => seq(
      '[',
      $._expression,
      $._comprehension_clause,
      ']'
    ),

    _comprehension_clause: $ => seq(
      $.for_clause,
      repeat(choice(
        $.for_clause,
        $.if_clause
      ))
    ),

    if_clause: $ => seq(
      'if',
      $._expression
    ),

    for_clause: $ => seq(
      'for',
      sep1(',', $.for_binding)
    ),

    for_binding: $ => seq(
      choice($.identifier, $.tuple_expression),
      choice('in', '=', '∈'),
      $._expression
    ),

    function_expression: $ => prec.right(PREC.arrow,
      choice(
        seq(
          'function',
          $.parameter_list,
          choice(
            $._expression,
            $.assignment_expression
          ),
          'end'
        ),
        seq(
          choice(
            $.identifier,
            $.parameter_list,
          ),
          '->',
          choice(
            $._expression,
            $.assignment_expression
          )))),

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

    interpolation_expression: $ => prec.left(PREC.colon_quote, seq(
      '$',
      $._expression
    )),

    // Tokens

    macro_identifier: $ => seq('@', choice(
      $.identifier,
      $.operator,
      alias('.', $.operator)
    )),

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

      // First char: ASCII letter, Greek letter, Extended Latin letter, or ∇
      // Remaining characters: not delimiter, not operator
      return new RegExp(`[_a-zA-ZͰ-ϿĀ-ſ∇][^"'\\s\\.\\-\\[\\]${operatorCharacters}]*`)
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

    string: $ => seq(
      choice(
        '"',
        seq(
          field('prefix', $.identifier),
          token.immediate('"')
        )
      ),
      optional(token.immediate(repeat1(choice(
        /[^"\\\n]/,
        /\\./
      )))),
      token.immediate('"'),
    ),

    command_string: $ => token(seq(
      '`',
      repeat(choice(/[^`\\\n]/, /\\./)),
      '`'
    )),

    character: $ => token(seq(
      "'",
      choice(/\\./, /[^'\\]/),
      "'",
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
