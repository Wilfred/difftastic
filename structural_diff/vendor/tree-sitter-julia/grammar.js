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
  'times',
  'rational',
  'bitshift',
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

const ASSIGN_OPERATORS = `
  = += -= *= /= //= \\= ^= ÷= %= <<= >>= >>>= |= &= ⊻= ≔ ⩴ ≕
`;

const ARROW_OPERATORS = `
  ← → ↔ ↚ ↛ ↞ ↠ ↢ ↣ ↦ ↤ ↮ ⇎ ⇍ ⇏ ⇐ ⇒ ⇔ ⇴ ⇶
  ⇷ ⇸ ⇹ ⇺ ⇻ ⇼ ⇽ ⇾ ⇿ ⟵ ⟶ ⟷ ⟹ ⟺ ⟻ ⟼ ⟽ ⟾
  ⟿ ⤀ ⤁ ⤂ ⤃ ⤄ ⤅ ⤆ ⤇ ⤌ ⤍ ⤎ ⤏ ⤐ ⤑ ⤔ ⤕ ⤖ ⤗ ⤘
  ⤝ ⤞ ⤟ ⤠ ⥄ ⥅ ⥆ ⥇ ⥈ ⥊ ⥋ ⥎ ⥐ ⥒ ⥓ ⥖ ⥗ ⥚ ⥛ ⥞ ⥟
  ⥢ ⥤ ⥦ ⥧ ⥨ ⥩ ⥪ ⥫ ⥬ ⥭ ⥰ ⧴ ⬱ ⬰ ⬲ ⬳ ⬴ ⬵ ⬶ ⬷
  ⬸ ⬹ ⬺ ⬻ ⬼ ⬽ ⬾ ⬿ ⭀ ⭁ ⭂ ⭃ ⭄ ⭇ ⭈ ⭉ ⭊ ⭋ ⭌ ￩ ￫
  ⇜ ⇝ ↜ ↝ ↩ ↪ ↫ ↬ ↼ ↽ ⇀ ⇁ ⇄ ⇆ ⇇ ⇉ ⇋ ⇌ ⇚ ⇛ ⇠ ⇢
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

const DOTTY_OPERATORS = '… ⁝ ⋮ ⋱ ⋰ ⋯';

const PLUS_OPERATORS = `
  + - | ⊕ ⊖ ⊞ ⊟ ++ ∪ ∨ ⊔ ± ∓ ∔ ∸ ≂ ≏ ⊎ ⊻ ⊽ ⋎ ⋓ ⧺ ⧻ ⨈
  ⨢ ⨣ ⨤ ⨥ ⨦ ⨧ ⨨ ⨩ ⨪ ⨫ ⨬ ⨭ ⨮ ⨹ ⨺ ⩁ ⩂ ⩅ ⩊ ⩌ ⩏ ⩐ ⩒ ⩔ ⩖ ⩗ ⩛ ⩝ ⩡ ⩢ ⩣
`;

const TIMES_OPERATORS = `
  * / ÷ % & ⋅ ∘ × \\ ∩ ∧ ⊗ ⊘ ⊙ ⊚ ⊛ ⊠ ⊡ ⊓ ∗ ∙
  ∤ ⅋ ≀ ⊼ ⋄ ⋆ ⋇ ⋉ ⋊ ⋋ ⋌ ⋏ ⋒ ⟑ ⦸ ⦼ ⦾ ⦿ ⧶ ⧷ ⨇ ⨰
  ⨱ ⨲ ⨳ ⨴ ⨵ ⨶ ⨷ ⨸ ⨻ ⨼ ⨽ ⩀ ⩃ ⩄ ⩋ ⩍ ⩎ ⩑ ⩓ ⩕ ⩘
  ⩚ ⩜ ⩞ ⩟ ⩠ ⫛ ⊍ ▷ ⨝ ⟕ ⟖ ⟗
`;

const BITSHIFT_OPERATORS = '<< >> >>>';

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
    $._immediate_paren,

    $._string_start,
    $._command_start,
    $._immediate_string_start,
    $._immediate_command_start,
    $._string_end,
    $._command_end,
    $._string_content,
    $._string_content_no_interp,
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
    $.line_comment,
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
      alias(numeral('0-9'), $.integer_literal),
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
      $._primary_expression,
      $._literal,
      $.operator,
    ),

    _primary_expression: $ => choice(
      $.identifier,
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

    operator: $ => choice(
      $._comparison_operator,
      $._dotty_operator,
      $._plus_operator,
      $._times_operator,
      $._rational_operator,
      $._bitshift_operator,
      $._power_operator,
      $._unary_operator,
    ),

    parenthesized_expression: $ => prec(1, seq(
      '(', choice($._expression_list, $.spread_expression), ')'
    )),

    field_expression: $ => prec(PREC.dot, seq(
      $._primary_expression,
      '.',
      $.identifier
    )),

    subscript_expression: $ => seq(
      choice(
        $._primary_expression,
        $._literal,
      ),
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
      choice($._primary_expression, $.operator),
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
      alias(choice($._assign_operator, '='), $.operator),
      choice(
        $._expression,
        $.assignment_expression,
        $.bare_tuple_expression
      )
    )),

    unary_expression: $ => choice(
      prec(PREC.prefix, seq(
        alias($._unary_operator, $.operator),
        $._expression,
      )),
      prec(PREC.postfix, seq($._expression, alias("'", $.operator))),
    ),

    binary_expression: $ => {
      const table = [
        [prec.left, PREC.power, $._power_operator],
        [prec.left, PREC.rational, $._rational_operator],
        [prec.left, PREC.bitshift, $._bitshift_operator],
        [prec.left, PREC.times, $._times_operator],
        [prec.left, PREC.plus, choice('+', $._plus_operator)],
        [prec.left, PREC.colon_range, $._dotty_operator],
        [prec.right, PREC.arrow, $._arrow_operator],
        [prec.right, PREC.pipe_left, '<|'],
        [prec.left, PREC.pipe_right, '|>'],
        [prec.left, PREC.comparison, choice('in', 'isa', $._comparison_operator)],
        [prec.left, PREC.lazy_or, '||'],
        [prec.left, PREC.lazy_and, '&&'],
      ];

      return choice(...table.map(([fn, prec, op]) => fn(prec, seq(
        $._expression,
        alias(op, $.operator),
        $._expression,
      ))));
    },

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
      choice(
        alias(numeral('0-9'), $.integer_literal),
        $.float_literal,
      ),
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
        '$',
        ASSIGN_OPERATORS,
        ARROW_OPERATORS,
        COMPARISON_OPERATORS,
        DOTTY_OPERATORS,
        PLUS_OPERATORS,
        TIMES_OPERATORS,
        BITSHIFT_OPERATORS,
        POWER_OPERATORS
      ];

      const operatorCharacters = operators
        .join(' ')
        .trim()
        .replace(/\s+/g, '')
        .replace(/-/g, '')
        .replace(/\\/g, '\\\\')
        .replace(/!/g, '');

      const start = "[_\\p{L}\\p{Nl}∇]"
      const rest = `[^"'\`\\s\\.\\-\\[\\]${operatorCharacters}]*`
      return new RegExp(start + rest)
    },

    // Literals

    _literal: $ => choice(
      $.integer_literal,
      $.float_literal,
      $.character_literal,
      $.string_literal,
      $.command_literal,
      $.prefixed_string_literal,
      $.prefixed_command_literal,
    ),

    integer_literal: $ => choice(
      token(seq('0b', numeral('01'))),
      token(seq('0o', numeral('0-7'))),
      token(seq('0x', numeral('0-9a-fA-F'))),
      numeral('0-9'),
    ),

    float_literal: $ => {
      const dec = numeral('0-9');
      const hex = numeral('0-9a-fA-F');
      const float = seq(
        choice(
          seq(dec, optional('.'), optional(dec)),
          seq('.', dec),
        ),
        optional(/[eEf][+-]?\d+/), // the exponent doesn't allow underscores
      )
      const hex_float = seq(
        choice(
          seq('0x', hex, optional('.'), optional(hex)),
          seq('0x.', hex),
        ),
        /p[+-]?\d+/, // hex floats must always have an exponent
      )
      return token(choice(float, hex_float))
    },

    escape_sequence: $ => token(seq(
      '\\',
      token.immediate(choice(
        /[uU][0-9a-fA-F]{1,6}/, // unicode codepoints
        /x[0-9a-fA-F]{2}/,
        /["'`$\\abfnrtv]/,
        /[0-7]{1,3}/,
      )),
    )),

    character_literal: $ => seq(
      "'",
      choice(
        $.escape_sequence,
        /[^'\\]/,
      ),
      "'",
    ),

    string_literal: $ => seq(
      $._string_start,
      repeat(choice($._string_content, $.string_interpolation, $.escape_sequence)),
      $._string_end,
    ),

    command_literal: $ => seq(
      $._command_start,
      repeat(choice($._string_content, $.string_interpolation, $.escape_sequence)),
      $._command_end,
    ),

    prefixed_string_literal: $ => seq(
      field('prefix', $.identifier),
      $._immediate_string_start,
      repeat(choice($._string_content_no_interp, $.escape_sequence)),
      $._string_end,
    ),

    prefixed_command_literal: $ => seq(
      field('prefix', $.identifier),
      $._immediate_command_start,
      repeat(choice($._string_content_no_interp, $.escape_sequence)),
      $._command_end,
    ),

    string_interpolation: $ => seq(
      '$',
      choice(
        $.identifier,
        seq('(', $._expression, ')'),
      ),
    ),

    _unary_operator: $ => token(addDots('+ - ! ~ ¬ √ ∛ ∜')),

    _power_operator: $ => token(addDots(POWER_OPERATORS)),

    _bitshift_operator: $ => token(addDots(BITSHIFT_OPERATORS)),

    _rational_operator: $ => token(addDots('//')),

    _times_operator: $ => token(addDots(TIMES_OPERATORS)),

    _plus_operator: $ => token(choice('$', addDots(PLUS_OPERATORS))),

    _dotty_operator: $ => token(choice('..', addDots(DOTTY_OPERATORS))),

    _comparison_operator: $ => token(choice('<:', '>:', addDots(COMPARISON_OPERATORS))),

    _arrow_operator: $ => token(choice('<--', '-->', '<-->', addDots(ARROW_OPERATORS))),

    _assign_operator: $ => token(choice(':=', '~', '$=', addDots(ASSIGN_OPERATORS))),

    _terminator: $ => choice('\n', ';'),

    line_comment: $ => token(seq('#', /.*/))
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

function numeral(range) {
  return RegExp(`[${range}]|([${range}][${range}_]*[${range}])`)
}
