function imm(x) {
  return token.immediate(x);
}

const PREC = {
  SEQ_EXPR: 1,
  THEN_EXPR: 2,
  RARROW: 3,
  INFIX_OP: 4,
  NEW_EXPR: 5,
  LET_EXPR: 6,
  LET_DECL: 7,
  DO_EXPR: 8,
  FUN_EXPR: 8,
  MATCH_EXPR: 8,
  MATCH_DECL: 9,
  DO_DECL: 10,
  IF_EXPR: 11,
  ELSE_EXPR: 12,
  INTERFACE: 13,
  LARROW: 14,
  TUPLE_EXPR: 15,
  COMMA: 16,
  DOTDOT: 17,
  SPECIAL_INFIX: 18,
  APP_EXPR: 19,
  CE_EXPR: 19,
  PREFIX_EXPR: 19,
  DO_EXPR: 19,
  NEW_OBJ: 20,
  DOT: 21,
  INDEX_EXPR: 22,
  PAREN_APP: 23,
  TYPED_EXPR: 24,
  PAREN_EXPR: 23,
  DOTDOT_SLICE: 24,
}

module.exports = grammar({
  name: 'fsharp',

  externals: $ => [
    $._virtual_open_section,
    $._virtual_end_section,
    $._block_comment_content,
  ],

  extras: $ => [
    $.block_comment,
    $.line_comment,
    /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,
  ],

  conflicts: $ => [
    [$.long_identifier, $._identifier_or_op],
    [$.type_argument, $.static_type_argument],
    [$.symbolic_op, $.infix_op],
    [$.union_type_case, $.long_identifier],
    // [$._comp_expression, $._expression],
  ],

  words: $ => $.identifier,

  inline: $ => [ $._module_elem, $._infix_or_prefix_op, $._base_call, $.access_modifier, $._quote_op_left, $._quote_op_right, $._inner_literal_expression, ],

  supertypes: $ => [ $._module_elem, $._pattern, $._expression ],

  rules: {
    //
    // Top-level rules (BEGIN)
    //
    file: $ =>
      choice(
        $.named_module,
        $.namespace,
        repeat1($._module_elem),
      ),

    namespace: $ =>
      seq(
        "namespace",
        choice(
          "global",
          field("name", $.long_identifier),
        ),
        repeat($._module_elem),
      ),

    named_module: $ =>
      seq(
        "module",
        field("name", $.long_identifier),
        repeat($._module_elem)
      ),

    _module_elem: $ =>
      choice(
        $.value_declaration,
        $.module_defn,
        $.module_abbrev,
        $.import_decl,
        $.compiler_directive_decl,
        $.type_definition,
        // $.exception_defn
      ),

    module_abbrev: $ =>
      seq(
        "module",
        $.identifier,
        "=",
        $._virtual_open_section,
        $.long_identifier,
        $._virtual_end_section,
      ),

    module_defn: $ =>
      prec.left(
        seq(
          optional($.attributes),
          "module",
          optional($.access_modifier),
          $.identifier,
          "=",
          $._virtual_open_section,
          repeat1($._module_elem),
          $._virtual_end_section,
          )
      ),

    compiler_directive_decl: $ =>
      seq(
        imm("#"),
        $.identifier,
        repeat($.string),
      ),

    import_decl: $ =>
      seq(
        "open",
        $.long_identifier,
      ),

    //
    // Attributes (BEGIN)
    //
    attributes: $ => prec.left(repeat1($.attribute_set)),
    attribute_set: $ =>
      seq(
        "[<",
        $.attribute,
        repeat(seq(";", $.attribute)),
        ">]"
      ),
    attribute: $ => seq(
      optional(seq($.attribute_target, ":")),
      $.object_construction
    ),
    attribute_target: $ => choice(
      "assembly",
      "module",
      "return",
      "field",
      "property",
      "param",
      "type",
      "constructor",
      "event"
    ),

    object_construction: $ =>
      seq(
        $.type,
        optional($._expression),
      ),

    //
    // Attributes (END)
    //


    value_declaration: $ =>
      choice(
        prec(PREC.LET_DECL, $.function_or_value_defn),
        prec(PREC.DO_DECL, $.do)
      ),

    do: $ => prec(PREC.DO_EXPR,
      seq(
        "do",
        $._virtual_open_section,
        $._expression,
        $._virtual_end_section,
    )),

    _function_or_value_defns : $ =>
      seq($._function_or_value_defn_body, repeat1(seq("and", $._function_or_value_defn_body))),

    function_or_value_defn: $ =>
      seq(
        choice("let", "let!"),
        choice(
          $._function_or_value_defn_body,
          seq("rec", $._function_or_value_defns)
        )
      ),

    _function_or_value_defn_body: $ =>
      seq(
        choice(
          $.function_declaration_left,
          $.value_declaration_left,
        ),
        "=",
        $._virtual_open_section,
        field("body", $._expression),
        $._virtual_end_section,
      ),

    function_declaration_left: $ =>
      seq(
        optional("inline"),
        optional($.access_modifier),
        $._identifier_or_op,
        optional($.type_arguments),
        $.argument_patterns,
        optional(seq(":", $.type))
      ),

    value_declaration_left: $ =>
      prec(2,
      seq(
        optional("mutable"),
        optional($.access_modifier),
        $._pattern,
        optional($.type_arguments),
        optional(seq(":", $.type))
      )),

    access_modifier: $ => choice("private", "internal", "public"),
    //
    // Top-level rules (END)
    //

    //
    // Pattern rules (BEGIN)
    _pattern: $ =>
        choice(
          alias("null", $.null_pattern),
          alias("_", $.wildcard_pattern),
          alias($.const, $.const_pattern),
          $.identifier_pattern,
          $.as_pattern,
          $.disjunct_pattern,
          $.conjunct_pattern,
          $.cons_pattern,
          $.repeat_pattern,
          $.paren_pattern,
          $.list_pattern,
          $.array_pattern,
          $.record_pattern,
          $.typed_pattern,
          $.attribute_pattern,
          // :? atomic-type
          // :? atomic-type as ident
      ),

    attribute_pattern: $ => seq($.attributes, $._pattern),

    paren_pattern: $ => seq("(", $._pattern, ")"),

    repeat_pattern: $ =>
      prec.left(PREC.COMMA,
      seq(
        $._pattern,
        repeat1(prec.left(PREC.COMMA, seq(",", $._pattern))),
      )),

    identifier_pattern: $ =>
      prec.left(
        seq($.long_identifier, optional($._pattern_param), optional($._pattern)),
      ),

    as_pattern: $ => prec.left(3,seq($._pattern, "as", $.identifier)),
    cons_pattern: $ => prec.left(3,seq($._pattern, "::", $._pattern)),
    disjunct_pattern: $ => prec.left(3,seq($._pattern, "|", $._pattern)),
    conjunct_pattern: $ => prec.left(3,seq($._pattern, "&", $._pattern)),
    typed_pattern: $ => prec.left(3,seq($._pattern, ":", $.type)),

    _argument_pattern: $ => prec.left(2,repeat1($._atomic_pattern)),
    argument_patterns: $ => repeat1($._argument_pattern),

    field_pattern: $ => seq($.long_identifier, '=', $._pattern),

    _atomic_pattern: $ =>
      choice(
        "null",
        "_",
        $.const,
        $.long_identifier,
        $.list_pattern,
        $.record_pattern,
        $.array_pattern,
        seq("(", $._pattern, ")"),
        // :? atomic_type
      ),

    list_pattern: $ => choice(
      seq('[', ']'),
      seq('[', $._pattern, repeat(seq(';', $._pattern)), ']')),
    array_pattern: $ => choice(
      seq('[|', '|]'),
      seq('[|', $._pattern, repeat(seq(';', $._pattern)), '|]')),
    record_pattern: $ =>
      prec.left(
        seq(
        '{', $.field_pattern, repeat(seq(';', $.field_pattern)))),

    _pattern_param: $ =>
      prec(2,
        choice(
          $.const
        )
      ),
    //
    // Pattern rules (END)
    //

    //
    // Expressions (BEGIN)
    //

    _expression: $ =>
      choice(
        $.const,
        $.paren_expression,
        $.begin_end_expression,
        $.long_identifier_or_op,
        $.dot_expression,
        $.typed_expression,
        $.infix_expression,
        $.index_expression,
        $.mutate_expression,
        $.object_instantiation_expression,
        $.list_expression,
        $.array_expression,
        $.ce_expression,
        $.prefixed_expression,
        $.brace_expression,
        // [ comp_or_range_expr ]
        // [| comp_or_range_expr |]
        "null",
        $.typecast_expression,
        $.declaration_expression,
        $.do_expression,
        $.fun_expression,
        $.function_expression,
        $.if_expression,
        $.while_expression,
        $.for_expression,
        $.match_expression,
        $.try_expression,
        $.literal_expression,
        $.sequence_expression,
        $.call_expression,
        $.tuple_expression,
        $.application_expression,
        $.return_expression,
        $.yield_expression,
        // (static-typars : (member-sig) expr)
      ),

    application_expression: $ =>
      prec.left(PREC.APP_EXPR,
        seq(
          $._expression,
          $._expression,
        )
      ),

    sequence_expression: $ =>
        prec.right(PREC.SEQ_EXPR,
        seq(
          $._expression,
          repeat1(prec.right(PREC.SEQ_EXPR, seq(choice(";", $._newline), $._expression))),
        )),

    call_expression: $ =>
      prec(PREC.PAREN_APP,
        seq(
          $._expression,
          imm("("),
          $._expression,
          ")",
        )
      ),

    tuple_expression: $ =>
      prec.left(
      seq(
        $._expression,
        repeat1(prec.left(PREC.TUPLE_EXPR, seq(",", $._expression))),
      )
      ),

    brace_expression: $ =>
      prec(PREC.PAREN_EXPR,
      seq(
        "{",
          $._virtual_open_section,
          choice(
            $.with_field_expression,
            $.field_expression,
            $.object_expression,
          ),
          $._virtual_end_section,
        "}",
      )),

    with_field_expression: $ =>
      seq(
        $._expression,
        "with",
        $._virtual_open_section,
        $.field_initializers,
        $._virtual_end_section,
      ),

    field_expression: $ => $.field_initializers,

    object_expression: $ =>
      prec(PREC.NEW_EXPR,
      seq(
        "new",
        $._base_call,
        $._virtual_open_section,
        $.object_members,
        $.interface_implementations,
        $._virtual_end_section,
      )),

    _base_call: $ =>
      choice(
        $.object_construction,
        seq($.object_construction, "as", $.identifier),
      ),

    prefixed_expression: $ =>
      prec.left(PREC.PREFIX_EXPR,
      seq(
        choice("return", "return!", "yield", "yield!", "lazy", "assert", "upcast", "downcast", "%", "%%", $.prefix_op),
        $._expression,
      )),

    return_expression: $ =>
      prec.left(PREC.PREFIX_EXPR + 1,
      seq(
        choice("return", "return!"),
        $._expression,
      )),

    yield_expression: $ =>
      prec.left(PREC.PREFIX_EXPR + 1,
      seq(
        choice("yield", "yield!"),
        $._expression,
      )),

    ce_expression: $ =>
      prec(PREC.CE_EXPR,
      seq(
        $._expression,
        "{",
        $._virtual_open_section,
        $._comp_or_range_expression,
        $._virtual_end_section,
        "}",
      )),

    infix_expression: $ =>
      prec.left(PREC.SPECIAL_INFIX,
      seq(
        $._expression,
        $.infix_op,
        $._expression,
      )),

    _inner_literal_expression: $ =>
      seq(
        $._virtual_open_section,
        $._expression,
        $._virtual_end_section,
      ),

    literal_expression: $ =>
      prec(PREC.PAREN_EXPR,
      choice(
        seq("<@", $._inner_literal_expression, "@>"),
        seq("<@@", $._inner_literal_expression, "@@>"),
      )),

    typecast_expression: $ =>
      prec(PREC.SPECIAL_INFIX,
      seq(
        $._expression,
        choice(
          ":",
          ":>",
          ":?",
          ":?>"
        ),
        $.type
      )),

    begin_end_expression: $ => prec(PREC.PAREN_EXPR, seq("begin", $._expression, "end")),

    paren_expression: $ => prec(PREC.PAREN_EXPR, seq("(", $._virtual_open_section, $._expression, $._virtual_end_section, ")")),

    for_expression: $ =>
      prec.left(
      seq(
        "for",
        choice(
            seq($._pattern, "in", $._expression_or_range),
            seq($.identifier, "=", $._expression, "to", $._expression),
        ),
        "do",
          $._virtual_open_section,
          $._expression,
          $._virtual_end_section,
        optional("done"),
      )),

    while_expression: $ =>
      prec.left(
      seq(
        "while",
          $._expression,
        "do",
          $._virtual_open_section,
          $._expression,
          $._virtual_end_section,
        optional("done"),
      )),

    _else_expression: $ =>
      prec(PREC.ELSE_EXPR,
      seq(
        "else",
        $._virtual_open_section,
        field("else_branch", $._expression),
        $._virtual_end_section,
      )),

    elif_expression: $ =>
      prec(PREC.ELSE_EXPR,
      seq(
        "elif",
        $._virtual_open_section,
        field("guard", $._expression),
        $._virtual_end_section,
        "then",
        $._virtual_open_section,
        field("then", $._expression),
        $._virtual_end_section,
      )),

    if_expression: $ =>
      prec.left(PREC.IF_EXPR,
      seq(
        "if",
        $._virtual_open_section,
        field("guard", $._expression),
        $._virtual_end_section,
        "then",
        field("then", $._expression),
        repeat($.elif_expression),
        optional($._else_expression),
      )),

    fun_expression: $ =>
      prec.right(PREC.FUN_EXPR,
      seq(
        "fun",
        $.argument_patterns,
        "->",
        $._virtual_open_section,
        $._expression,
        $._virtual_end_section,
      )),

    try_expression: $ =>
      prec(PREC.MATCH_EXPR,
      seq(
        "try",
        $._virtual_open_section,
        $._expression,
        $._virtual_end_section,
        choice(
          seq("with", $.rules),
          seq("finally", $._virtual_open_section, $._expression, $._virtual_end_section),
        ),
      )),

    match_expression: $ =>
      prec(PREC.MATCH_EXPR,
      seq(
        choice("match", "match!"),
        $._expression,
        "with",
        $.rules,
      )),

    function_expression: $ =>
      prec(PREC.MATCH_EXPR,
      seq(
        "function",
        $.rules,
      )),

    object_instantiation_expression: $ =>
      prec(PREC.NEW_OBJ,
      seq(
        "new",
        $.type,
        imm("("),
        $._expression,
        ")"
      )),

    mutate_expression: $ =>
      prec.right(PREC.LARROW,
      seq(
        field("assignee", $._expression),
        "<-",
        $._virtual_open_section,
        field("value", $._expression),
        $._virtual_end_section,
      )),

    index_expression: $ =>
      prec(PREC.INDEX_EXPR,
      seq(
        $._expression,
        optional(imm(".")),
        imm("["),
        choice(
          field("index", $._expression),
          $.slice_ranges,
        ),
        "]",
      )),

    dot_expression: $ =>
      prec.left(PREC.DOT,
      seq(
        field("base", $._expression),
        imm("."),
        field("field", $.long_identifier_or_op),
      )),

    typed_expression: $ =>
      prec(PREC.PAREN_EXPR,
      seq(
        $._expression,
        imm("<"),
        $._virtual_open_section,
        optional($.types),
        $._virtual_end_section,
        ">",
      )),

    declaration_expression: $ =>
      prec(PREC.LET_EXPR,
      seq(
        choice(
            seq(choice("use", "use!"), $.identifier, "=", $._virtual_open_section, $._expression, $._virtual_end_section),
            $.function_or_value_defn,
        ),
        $._virtual_open_section,
        $._expression,
        $._virtual_end_section,
      )),

    do_expression: $ =>
      prec(PREC.DO_EXPR,
      seq(
        choice("do", "do!"),
        $._virtual_open_section,
        $._expression,
        $._virtual_end_section,
      )),

    _list_elements_env: $ =>
      prec.right(PREC.COMMA,
        seq(
          $._expression,
          repeat(prec.right(PREC.COMMA, seq(optional(";"), $._expression))),
        ),
      ),

    _list_elements_basic: $ =>
      prec.right(PREC.COMMA,
        seq(
          $._expression,
          repeat(prec.right(PREC.COMMA, seq(";", $._expression))),
        )
      ),

    _list_elements: $ =>
      choice($._list_elements_env, $._list_elements_env),

    list_expression: $ =>
      seq(
        "[",
        choice(
          optional($._list_elements),
          $._comp_or_range_expression,
        ),
        "]",
      ),

    array_expression: $ =>
      seq(
        "[|",
        $._virtual_open_section,
        choice(
          optional($._list_elements),
          $._comp_or_range_expression,
        ),
        "|]",
        $._virtual_end_section,
      ),

    range_expression: $ =>
      prec.left(PREC.DOTDOT,
      seq(
        $._expression,
        "..",
        $._expression,
        optional(seq(
          "..",
          $._expression,
        )))),

    _expression_or_range: $ =>
      choice(
        $._expression,
        $.range_expression,
      ),

    rule: $ =>
      prec.right(
      seq(
        $._pattern,
        "->",
        $._virtual_open_section,
        $._expression,
        $._virtual_end_section,
      )),

    rules: $ =>
      prec.right(PREC.MATCH_EXPR,
      seq(
      $._virtual_open_section,
        optional("|"),
        $.rule,
        repeat(seq("|", $.rule)),
        $._virtual_end_section,
      )),

    //
    // Expressions (END)
    //

    //
    // Computation expression (BEGIN)
    //

    _comp_or_range_expression: $ =>
      choice(
        $._expression,
        $.short_comp_expression,
        // $.range_expression, TODO
      ),

    // _comp_expression: $ =>
    //   choice(
    //     $.let_ce_expression,
    //     $.do_ce_expression,
    //     $.use_ce_expression,
    //     $.yield_ce_expression,
    //     $.return_ce_expression,
    //     $.if_ce_expression,
    //     $.match_ce_expression,
    //     $.try_ce_expression,
    //     $.while_expression,
    //     $.for_ce_expression,
    //     $.sequential_ce_expression,
    //     $._expression,
    //   ),

    // for_ce_expression: $ =>
    //   prec.left(
    //   seq(
    //     "for",
    //     choice(
    //         seq($._pattern, "in", $._expression_or_range),
    //         seq($.identifier, "=", $._expression, "to", $._expression),
    //     ),
    //     "do",
    //       $._virtual_open_section,
    //       $._comp_expression,
    //       $._virtual_end_section,
    //     optional("done"),
    //   )),
    //
    // try_ce_expression: $ =>
    //   prec(PREC.MATCH_EXPR,
    //   seq(
    //     "try",
    //     $._virtual_open_section,
    //     $._comp_expression,
    //     $._virtual_end_section,
    //     choice(
    //       seq("with", $.comp_rules),
    //       seq("finally", $.comp_rules)
    //     ),
    //   )),
    //
    // match_ce_expression: $ =>
    //   prec(PREC.MATCH_EXPR,
    //   seq(
    //     "match",
    //     $._expression,
    //     "with",
    //     $.comp_rules,
    //   )),
    //
    // sequential_ce_expression: $ =>
    //   prec.left(PREC.SEQ_EXPR,
    //   seq(
    //     $._comp_expression,
    //     repeat1(prec.right(PREC.SEQ_EXPR, seq(choice(";", $._newline), $._comp_expression))),
    //   )),
    //
    // _else_ce_expression: $ =>
    //   prec(PREC.ELSE_EXPR,
    //   seq(
    //     "else",
    //     $._virtual_open_section,
    //     field("else_branch", $._comp_expression),
    //     $._virtual_end_section,
    //   )),
    //
    // elif_ce_expression: $ =>
    //   prec(PREC.ELSE_EXPR,
    //   seq(
    //     "elif",
    //     $._virtual_open_section,
    //     field("guard", $._expression),
    //     $._virtual_end_section,
    //     "then",
    //     $._virtual_open_section,
    //     field("then", $._comp_expression),
    //     $._virtual_end_section,
    //   )),
    //
    // if_ce_expression: $ =>
    //   prec.left(PREC.IF_EXPR,
    //   seq(
    //     "if",
    //     $._virtual_open_section,
    //     field("guard", $._expression),
    //     $._virtual_end_section,
    //     "then",
    //     field("then", $._comp_expression),
    //     repeat($.elif_ce_expression),
    //     optional($._else_ce_expression),
    //   )),
    //
    // return_ce_expression: $ =>
    //   prec.left(PREC.PREFIX_EXPR,
    //   seq(
    //     choice("return!", "return"),
    //     $._expression,
    //   )),
    //
    // yield_ce_expression: $ =>
    //   prec.left(PREC.PREFIX_EXPR,
    //   seq(
    //     choice("yield!", "yield"),
    //     $._expression,
    //   )),
    //
    // do_ce_expression: $ =>
    //   seq(
    //     choice("do!", "do"),
    //     $._expression,
    //     $._comp_expression,
    //   ),
    //
    // use_ce_expression: $ =>
    //   seq(
    //     choice("use!", "use"),
    //     $._pattern,
    //     "=",
    //     $._virtual_open_section,
    //     $._expression,
    //     $._virtual_end_section,
    //     $._comp_expression,
    //   ),
    //
    // let_ce_expression: $ =>
    //   seq(
    //     choice("let!", "let"),
    //     $._pattern,
    //     "=",
    //     $._virtual_open_section,
    //     $._expression,
    //     $._virtual_end_section,
    //     $._comp_expression,
    //   ),

    short_comp_expression: $ =>
      seq(
        "for",
        $._pattern,
        "in",
        $._expression_or_range,
        "->",
        $._expression,
      ),

    // comp_rule: $ =>
    //   seq(
    //     $._pattern,
    //     "->",
    //     $._comp_expression,
    //   ),
    //
    // comp_rules: $ =>
    //   prec.left(2,
    //   seq(
    //     optional("|"),
    //     $.comp_rule,
    //     repeat(seq("|", $.comp_rule)),
    //   )),

    slice_ranges: $ => prec.left(PREC.COMMA,
      seq($.slice_range, repeat(seq(",", $.slice_range)))),

    _slice_range_special: $ =>
      prec.left(PREC.DOTDOT_SLICE,
        choice(
          seq($._expression, ".."),
          seq("..", $._expression),
          seq($._expression, "..", $._expression),
        )
      ),

    slice_range: $ =>
      prec(PREC.DOTDOT_SLICE,
      choice(
        $._slice_range_special,
        $._expression,
        "*",
      )),

    //
    // Computation expression (END)
    //

    //
    // Type rules (BEGIN)
    //
    type: $ =>
      prec(4, choice(
        $.long_identifier,
        prec.right(seq($.long_identifier, "<", optional($.type_attributes), ">")),
        seq("(", $.type, ")"),
        prec.right(seq($.type, "->", $.type)),
        prec.right(seq($.type, repeat1(prec.right(seq("*", $.type))))),
        prec.left(4, seq($.type, $.long_identifier)),
        seq($.type, "[", repeat(","), "]"), // TODO: FIXME
        seq($.type, $.type_argument_defn),
        $.type_argument,
        prec.right(seq($.type_argument, ":>", $.type)),
        prec.right(seq(imm("#"), $.type)),
      )),

    types: $ =>
      seq(
        $.type,
        repeat1(prec.left(PREC.COMMA, seq(",", $.type))),
      ),

    type_attribute: $ =>
      choice(
        $.type,
        // measure
        // static-parameter
      ),
    type_attributes: $ => seq($.type_attribute, repeat(prec.left(PREC.COMMA, seq(",", $.type_attribute)))),

    atomic_type: $ =>
      choice(
        seq("#", $.type),
        $.type_argument,
        seq("(", $.type, ")"),
        $.long_identifier,
        seq($.long_identifier, "<", $.type_attributes, ">"),
      ),

    constraint: $ =>
      choice(
        seq($.type_argument, ":>", $.type),
        seq($.type_argument, ":", "null"),
        seq($.static_type_argument, ":", "(", $.member_signature, ")"),
        seq($.type_argument, ":", "(", "new", ":", "unit", "->", "'T", ")"),
        seq($.type_argument, ":", "struct"),
        seq($.type_argument, ":", "not", "struct"),
        seq($.type_argument, ":", "enum", "<", $.type, ">"),
        seq($.type_argument, ":", "unmanaged"),
        seq($.type_argument, ":", "equality"),
        seq($.type_argument, ":", "comparison"),
        seq($.type_argument, ":", "delegate", "<", $.type, ",", $.type, ">"),
      ),

    type_argument_constraints: $ =>
      seq(
        "when",
        $.constraint,
        repeat(seq("and", $.constraint))
      ),

    type_argument: $ =>
      choice(
        "_",
        seq("'", $.identifier),
        seq("^", $.identifier),
      ),

    type_argument_defn: $ =>
      seq(
        optional($.attributes),
        $.type_argument
      ),

    static_type_argument: $ =>
      choice(
        seq("^", $.identifier),
        seq("^", $.identifier, repeat(seq("or", "^", $.identifier)))
      ),

    type_arguments: $ =>
      seq(
        "<",
        $.type_argument_defn,
        repeat(prec.left(PREC.COMMA, seq(",", $.type_argument_defn))),
        optional($.type_argument_constraints),
        ">"
      ),

    member_signature: $ =>
      seq(
        $.identifier,
        optional($.type_arguments),
        ":",
        $.type,
        optional(
          choice(
            seq("with", "get"),
            seq("with", "set"),
            seq("with", "get", ",", "set"),
            seq("with", "set", ",", "get"),
          )
        )
      ),

    argument_spec: $ =>
      seq(
        optional($.attributes),
        optional($.argument_name_spec),
        $.type,
      ),
    arguments_spec: $ =>
      seq(
        $.argument_spec,
        repeat(seq("*", $.argument_spec))
      ),

    argument_name_spec: $ =>
      seq(
        optional("?"),
        $.identifier,
        ":"
      ),

    interface_spec: $ =>
      seq(
        "interface",
        $.type
      ),

    static_parameter: $ =>
      choice(
        $.static_parameter_value,
        seq("id", "=", $.static_parameter_value)
      ),

    static_parameter_value: $ =>
      choice(
        $.const,
        seq($.const, $._expression)
      ),

    type_definition: $ =>
      seq(
        optional($.attributes),
        "type",
        choice(
          $.delegate_type_defn,
          $.record_type_defn,
          $.union_type_defn,
          $.anon_type_defn,
          $.class_type_defn,
          $.struct_type_defn,
          $.interface_type_defn,
          $.enum_type_defn,
          $.type_abbrev_defn,
          $.type_extension,
        )
      ),

    type_name: $ =>
      seq(
        optional($.attributes),
        optional($.access_modifier),
        $.identifier,
        optional($.type_arguments)
      ),

    type_extension: $ =>
      seq(
        $.type_name,
        $.type_extension_elements,
      ),

    delegate_type_defn: $ =>
      seq(
        $.type_name,
        "=",
        $.delegate_signature,
      ),

    delegate_signature: $ =>
      seq(
        "delegate",
        "of",
        $.type,
      ),

    type_abbrev_defn: $ =>
      seq(
        $.type_name,
        "=",
        $.type,
      ),

    class_type_defn: $ =>
      seq(
        $.type_name,
        optional($.primary_constr_args),
        "=",
        "class",
        $.class_type_body,
        "end",
      ),

    struct_type_defn: $ =>
      seq(
        $.type_name,
        optional($.primary_constr_args),
        "=",
        "struct",
        $.class_type_body,
        "end",
      ),

    interface_type_defn: $ =>
      seq(
        $.type_name,
        optional($.primary_constr_args),
        "=",
        "interface",
        $.class_type_body,
        "end",
      ),

    _class_type_body_inner: $ =>
      choice(
        $.class_inherits_decl,
        $.class_function_or_value_defn,
        $.type_defn_elements,
      ),

    class_type_body: $ =>
      seq(
        $._virtual_open_section,
        repeat1($._class_type_body_inner),
        $._virtual_end_section,
      ),

    _record_type_defn_inner: $ =>
      seq(
        $.record_field,
        repeat(seq(choice(";", $._newline), $.record_field)),
      ),

    record_type_defn: $ =>
      seq(
        $.type_name,
        "=",
        "{",
        $._record_type_defn_inner,
        "}",
        optional($.type_extension_elements)
      ),

    record_fields: $ =>
      seq(
        $.record_field,
        repeat(seq(choice(";", $._newline), $.record_field)),
      ),

    record_field: $ =>
      seq(
        optional($.attributes),
        optional("mutable"),
        optional($.access_modifier),
        $.identifier,
        ":",
        $.type
      ),

    enum_type_defn: $ =>
      seq(
        $.type_name,
        "=",
        $.enum_type_cases,
      ),

    enum_type_cases: $ =>
      seq(
        optional("|"),
        $.enum_type_case,
        repeat(seq("|", $.enum_type_case))
      ),

    enum_type_case: $ =>
      seq(
        $.identifier,
        "=",
        $.const
      ),

    union_type_defn: $ =>
      seq(
        $.type_name,
        "=",
        $.union_type_cases,
        optional($.type_extension_elements),
      ),

    union_type_cases: $ =>
      seq(
        optional("|"),
        $.union_type_case,
        repeat(seq("|", $.union_type_case))
      ),

    union_type_case: $ =>
      prec(8,
      seq(
        optional($.attributes),
        choice(
          $.identifier,
          seq($.identifier, "of", $.union_type_field),
          seq($.identifier, ":", $.type),
        ))),

    union_type_field: $ =>
      choice(
        $.type,
        seq($.identifier, ":", $.type)
      ),

    anon_type_defn: $ =>
      seq(
        $.type_name,
        $.primary_constr_args,
        "=",
        $.class_type_body
      ),

    primary_constr_args: $ =>
      seq(
        optional($.attributes),
        optional($.access_modifier),
        "(",
        optional(seq(
            $.simple_pattern,
            repeat(prec.left(PREC.COMMA, seq(",", $.simple_pattern))))),
        ")"
      ),

    simple_pattern: $ =>
      choice(
        $.identifier,
        seq($.simple_pattern, ":", $.type)
      ),

    class_function_or_value_defn: $ =>
      seq(
        optional($.attributes),
        optional("static"),
        choice(
          $.function_or_value_defn,
          seq("do", $._expression),
        )
      ),

    type_extension_elements: $ =>
      seq(
        "with",
        $._virtual_open_section,
        $.type_defn_elements,
        $._virtual_end_section,
      ),

    type_defn_elements: $ =>
      choice(
        $.member_defn,
        $.interface_implementation,
        // $.interface_signature
      ),

    interface_implementations: $ => prec.right(repeat1($.interface_implementation)),
    interface_implementation: $ =>
      prec.left(
      seq(
        "interface",
        $.type,
        $._virtual_open_section,
        optional($.object_members),
        $._virtual_end_section,
      )),

    object_members: $ =>
      seq(
        "with",
        $._virtual_open_section,
        $.member_defns,
        $._virtual_end_section,
        optional("end")
      ),

    member_defns: $ => repeat1($.member_defn),

    member_defn: $ =>
      seq(
        optional($.attributes),
        choice(
          seq(optional("static"), "member", optional($.access_modifier), $.method_or_prop_defn),
          seq("abstract", optional("member"), optional($.access_modifier), $.member_signature),
          seq("override", optional($.access_modifier), $.method_or_prop_defn),
          seq("default", optional($.access_modifier), $.method_or_prop_defn),
          seq(optional("static"), "val", optional("mutable"), optional($.access_modifier), $.identifier, ":", $.type),
          $.additional_constr_defn,
        ),
      ),

    property_or_ident: $ =>
      choice(
        seq($.identifier, ".", $.identifier),
        $.identifier
      ),

    method_or_prop_defn: $ =>
      prec(3,
        choice(
          seq($.property_or_ident, "with", $._function_or_value_defns),
          seq($.property_or_ident, "=", $._expression),
          seq($.property_or_ident, "=", $._expression, "with", "get"),
          seq($.property_or_ident, "=", $._expression, "with", "set"),
          seq($.property_or_ident, "=", $._expression, "with", "get", ",", "set"),
          seq($.property_or_ident, "=", $._expression, "with", "set", ",", "get"),
        )
      ),

    additional_constr_defn: $ =>
      seq(
        // optional($.attributes),
        optional($.access_modifier),
        "new",
        $._pattern,
        $.as_defn,
        "=",
        // $.additional_constr_expr
      ),

    additional_constr_expr: $ =>
      choice(
        seq($.additional_constr_expr, ";", $.additional_constr_expr),
        seq($.additional_constr_expr, "then", $._expression),
        seq("if", $._expression, "then", $.additional_constr_expr, "else", $.additional_constr_expr),
        seq("let", $._function_or_value_defn_body, "in", $.additional_constr_expr),
        $.additional_constr_init_expr
      ),

    additional_constr_init_expr: $ =>
      choice(
        seq("{", $.class_inherits_decl, $.field_initializers, "}"),
        seq("new", $.type, $._expression)
      ),

    class_inherits_decl: $ =>
      prec.left(
        seq(
          "inherit",
          $.type,
          optional($._expression),
        )
      ),

    as_defn: $ => seq("as", $.identifier),

    field_initializer: $ => prec.right(seq($.long_identifier, "=", $._expression)),

    field_initializers: $ =>
      prec.left(
      seq(
        $.field_initializer,
        repeat(prec.right(PREC.SEQ_EXPR, seq(optional(";"), $.field_initializer)))
      )),

    //
    // Type rules (END)
    //

    //
    // Constants (BEGIN)
    //
    _escape_char: $ => imm(/\\["\'ntbrafv]/),
    _non_escape_char: $ => imm(/\\[^"\'ntbrafv]/),
    // using \u0008 to model \b
    _simple_char_char: $ => imm(/[^\n\t\r\u0008\a\f\v'\\]/),
    _hex_digit_imm: $ => imm(/[0-9a-fA-F]/),
    _digit_char_imm: $ => imm(/[0-9]/),
    _unicodegraph_short: $ => seq(
      imm('\\u'),
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
    ),
    _unicodegraph_long: $ => seq(
      imm('\\U'),
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
    ),
    _trigraph: $ => seq(imm('\\'), $._digit_char_imm, $._digit_char_imm, $._digit_char_imm),

    _char_char: $ => choice(
      $._simple_char_char,
      $._escape_char,
      $._trigraph,
      $._unicodegraph_short
    ),

    // note: \n is allowed in strings
    _simple_string_char: $ => /[^\t\r\u0008\a\f\v\\"]/,
    _string_char: $ => choice(
      $._simple_string_char,
      $._escape_char,
      $._non_escape_char,
      $._trigraph,
      $._unicodegraph_short,
      $._unicodegraph_long,
      $._newline
    ),

    _string_elem: $ => choice(
      $._string_char,
      seq('\\', $._newline, $._string_elem)
    ),
    char: $ => seq("'", $._char_char, imm("'")),
    string: $ => seq('"', repeat($._string_char), imm('"')),
    _verbatim_string_char: $ => choice(
      $._simple_string_char,
      $._non_escape_char,
      $._newline,
      '\\',
      ''
    ),
    verbatim_string: $ => seq('@"', repeat($._verbatim_string_char), imm('"')),
    bytechar: $ => seq("'", $._char_char, imm("'B")),
    bytearray: $ => seq('"', repeat($._string_char), imm('"B')),
    verbatim_bytearray: $ => seq('@"', repeat($._verbatim_string_char), imm('"B')),
    _simple_or_escape_char: $ => choice($._escape_char, imm(/[^'\\]/)),
    triple_quoted_string: $ => seq('"""', repeat($._simple_or_escape_char), imm('"""')),
    _newline: $ => /[\r\n]+/,

    const: $ => choice(
      $.sbyte, $.int16, $.int32, $.int64, $.byte, $.uint16, $.uint32, $.int,
      $.uint64, $.ieee32, $.ieee64, $.bignum, $.char, $.string,
      $.verbatim_string, $.triple_quoted_string, $.bytearray,
      $.verbatim_bytearray, $.bytechar, "false", "true", seq("(", ")")),

    // Identifiers:
    long_identifier_or_op: $ => prec.right(
      alias(
        choice(
          $.long_identifier,
          seq($.long_identifier, ".", $._identifier_or_op),
          $._identifier_or_op
        ),
        $.long_identifier)
    ),

    long_identifier : $ =>
      prec.right(seq($.identifier, repeat(seq(".", $.identifier)))),

    _identifier_or_op: $ => choice(
      $.identifier,
      seq('(', $.op_name, ')'),
      "(*)"
    ),

    identifier: $ => choice(
      /[_\p{XID_Start}][_'\p{XID_Continue}]*/,
      /``([^`\n\r\t])+``/ //TODO: Not quite the spec
    ),

    op_name: $ => choice(
      $.symbolic_op,
      $.range_op_name,
      $.active_pattern_op_name
    ),
    range_op_name: $ => choice(
      "..",
      ".. .."
    ),
    active_pattern_op_name: $ => choice(
      // full pattern
      seq("|", $.identifier, repeat1(seq("|", $.identifier)), "|"),
      // partial pattern
      seq("|", $.identifier, repeat(seq("|", $.identifier)), "|", "_", "|"),
    ),

    _infix_or_prefix_op: $ =>
      choice(
        "+",
        "-",
        "+.",
        "-.",
        "%",
        "&",
        "&&",
      ),

    prefix_op: $ =>
      prec.left(PREC.PREFIX_EXPR,
      choice(
        $._infix_or_prefix_op,
        prec.right(repeat1("~")),
        $.symbolic_op,
      )),

    infix_op: $ =>
      prec(PREC.INFIX_OP,
      choice(
        $._infix_or_prefix_op,
        $.symbolic_op,
        "||",
        "=",
        "!=",
        ":=",
        "::",
        "$",
        "or",
        "?",
      )),

    // Symbolic Operators
    _first_op_char: $ => /[!%&*+-./<=>@^|~]/,
    _op_char: $ => choice($._first_op_char, '?'),
    _quote_op_left: $ => choice("<@", "<@@"),
    _quote_op_right: $ => choice("@>", "@@>"),
    symbolic_op: $ => choice(
      "?",
      "?<-",
      prec.right(seq($._first_op_char, repeat($._op_char))),
      $._quote_op_left,
      $._quote_op_right),

    // Numbers
    _octaldigit_imm: $ => imm(/[0-7]/),
    _bitdigit_imm:   $ => imm(/[0-1]/),
    int:             $ => seq(/[0-9]/, repeat($._digit_char_imm)),
    xint: $ => choice(
      seq(/0[xX]/, repeat1($._hex_digit_imm)),
      seq(/0[oO]/, repeat1($._octaldigit_imm)),
      seq(/0[bB]/, repeat1($._bitdigit_imm)),
    ),

    sbyte:      $ => seq(choice($.int, $.xint), imm('y')),
    byte:       $ => seq(choice($.int, $.xint), imm('uy')),
    int16:      $ => seq(choice($.int, $.xint), imm('s')),
    uint16:     $ => seq(choice($.int, $.xint), imm('us')),
    int32:      $ => seq(choice($.int, $.xint), imm('l')),
    uint32:     $ => seq(choice($.int, $.xint), imm(choice('ul', 'u'))),
    nativeint:  $ => seq(choice($.int, $.xint), imm('n')),
    unativeint: $ => seq(choice($.int, $.xint), imm('un')),
    int64:      $ => seq(choice($.int, $.xint), imm('L')),
    uint64:     $ => seq(choice($.int, $.xint), imm(choice('UL', 'uL'))),

    ieee32: $ => choice(seq($._float, imm("f")), seq($.xint, imm("lf"))),
    ieee64: $ => choice($._float, seq($.xint, imm("LF"))),

    bignum:     $ => seq($.int, imm(/[QRZING]/)),
    decimal:    $ => seq(choice($._float,$.int), imm(/[Mm]/)),

    _float: $ => token(choice(
      seq(/[0-9]+/, imm(/\.[0-9]*/)),
      seq(/[0-9]+/, optional(imm(/\.[0-9]*/)), imm(/[eE]/), optional(imm(/[+-]/)), imm(/[0-9]+/)))),
    //
    // Constants (END)
    //

    block_comment: $ => seq("(*", $._block_comment_content, "*)"),
    line_comment: $ => token(seq("//", repeat(/[^\n\r]/))),
  }

});
