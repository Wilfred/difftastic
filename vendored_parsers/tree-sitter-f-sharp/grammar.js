function imm(x) {
  return token.immediate(x);
}

const PREC = {
  SEQ_EXPR: 1,
  APP_EXPR: 16,
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
  ELSE_EXPR: 11,
  INTERFACE: 12,
  COMMA: 13,
  DOTDOT: 14,
  PREFIX_EXPR: 0,
  SPECIAL_INFIX: 16,
  LARROW: 16,
  TUPLE_EXPR: 16,
  CE_EXPR: 17,
  SPECIAL_PREFIX: 17,
  DO_EXPR: 17,
  IF_EXPR: 18,
  NEW_OBJ: 18,
  DOT: 19,
  INDEX_EXPR: 20,
  PAREN_APP: 21,
  TYPED_EXPR: 22,
  PAREN_EXPR: 21,
  DOTDOT_SLICE: 22,
}

module.exports = grammar({
  name: 'fsharp',

  // The external scanner (scanner.cc) allows us to inject "dummy" tokens into the grammar.
  // These tokens are used to track the indentation-based scoping used in F#
  externals: $ => [
    $._virtual_open_section, // Signal the external scanner that a new indentation scope should be opened. Add the indetation size to the stack.
    $._virtual_end_section, // end an indentation scope, popping the indentation off the stack.
    $._virtual_end_decl, // end an indentation scope with equal alignment, popping the indentation off the stack.
    $.block_comment_content
  ],

  extras: $ => [
    /[ \s\f\uFEFF\u2060\u200B]|\\\r?n/,
  ],

  conflicts: $ => [
    [$.long_identifier, $._identifier_or_op],
    [$.type_argument, $.static_type_argument],
    [$.symbolic_op, $.infix_op],
    [$.union_type_case, $.long_identifier],
  ],

  words: $ => $.identifier,

  inline: $ => [ $._module_elem, $._infix_or_prefix_op, $._base_call, $.access_modifier, $._quote_op_left, $._quote_op_right, $._inner_literal_expressions, $._expression_or_range, $._infix_expression_inner, $._seq_expressions, $._seq_inline],

  supertypes: $ => [ $._module_elem, $._pattern, $._expression_inner, $._type_defn_body ],

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
        optional($.access_modifier),
        field("name", $.long_identifier),
        repeat($._module_elem)
      ),

    _module_elem: $ =>
      choice(
        $.block_comment,
        $.line_comment,
        $.value_declaration,
        $.module_defn,
        $.module_abbrev,
        $.import_decl,
        $.compiler_directive_decl,
        $.fsi_directive_decl,
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
       )),

    compiler_directive_decl: $ =>
      seq(
        "#nowarn",
        repeat($.string),
      ),


    fsi_directive_decl: $ =>
      choice(
        seq("#r", repeat($.string)),
        seq("#load", repeat($.string)),
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
      prec.left(
      seq(
        $.type,
        optional($._expressions),
      )),

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
        $._expressions,
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
        ),
      ),

    _function_or_value_defn_body: $ =>
      seq(
        choice(
          $.function_declaration_left,
          $.value_declaration_left,
        ),
        "=",
        $._virtual_open_section,
        field("body", $._expressions),
        $._virtual_end_section,
      ),

    function_declaration_left: $ =>
      prec.left(2,seq(
        optional("inline"),
        optional($.access_modifier),
        $._identifier_or_op,
        optional($.type_arguments),
        $.argument_patterns,
        optional(seq(":", $.type))
      )),

    value_declaration_left: $ =>
      prec.left(2,seq(
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

    attribute_pattern: $ => prec.left(seq($.attributes, $._pattern)),

    paren_pattern: $ => seq("(", $._virtual_open_section, $._pattern, $._virtual_end_section, ")"),

    repeat_pattern: $ =>
      prec.right(
      seq(
        $._pattern, ",",
        repeat(prec.right(seq($._virtual_end_decl, $._pattern, ","))),
        $._pattern
      )),

    identifier_pattern: $ =>
      prec.left(
        seq($.long_identifier, optional($._pattern_param), optional($._pattern)),
      ),

    as_pattern: $ => prec.left(0,seq($._pattern, "as", $.identifier)),
    cons_pattern: $ => prec.left(0,seq($._pattern, "::", $._pattern)),
    disjunct_pattern: $ => prec.left(0,seq($._pattern, "|", $._pattern)),
    conjunct_pattern: $ => prec.left(0,seq($._pattern, "&", $._pattern)),
    typed_pattern: $ => prec.left(3,seq($._pattern, ":", $.type)),

    argument_patterns: $ => repeat1($._atomic_pattern),

    field_pattern: $ => prec(1, seq($.long_identifier, '=', $._pattern)),

    _atomic_pattern: $ =>
      choice(
        "null",
        "_",
        $.const,
        $.long_identifier,
        $.list_pattern,
        $.record_pattern,
        $.array_pattern,
        seq("(", $._virtual_open_section, $._pattern, $._virtual_end_section, ")"),
        // :? atomic_type
      ),

    list_pattern: $ => choice(
      seq('[', ']'),
      seq('[', $._pattern, repeat(seq(";", $._pattern)), ']')),
    array_pattern: $ => choice(
      seq('[|', '|]'),
      seq('[|', $._pattern, repeat(seq(";", $._pattern)), '|]')),
    record_pattern: $ =>
      prec.left(
        seq(
        '{', $.field_pattern, repeat(seq(";", $.field_pattern)))),

    _pattern_param: $ =>
      prec(2,
        choice(
          $.const,
          $.long_identifier,
          // seq($.long_identifier, $._pattern_param),
          // seq($._pattern_param, ":", $.type),
          // seq(
          //   "[",
          //   $._pattern_param,
          //   repeat(seq($._seperator, $._pattern_param)),
          //   "]",
          // ),
          // seq(
          //   "(",
          //   $._pattern_param,
          //   repeat(seq($._seperator, $._pattern_param)),
          //   ")",
          // ),
          // seq("<@", $._expression_inner, "@>"),
          // seq("<@@", $._expression_inner, "@@>"),
          "null",
        )
      ),
    //
    // Pattern rules (END)
    //

    //
    // Expressions (BEGIN)
    //
    //

    _seq_infix: $ =>
      prec.right(
      seq(
        $._expression_inner,
        repeat1(
          seq(
            $._virtual_end_decl,
            $.infix_op,
            $._expressions,
          ),
        ),
      )),

    _seq_expressions: $ =>
      seq(
        $._expression_inner,
        repeat(seq($._virtual_end_decl, $._expressions)),
      ),

    _expressions: $ =>
      prec.left(PREC.SEQ_EXPR,
        choice(
          alias($._seq_infix, $.infix_expression),
          $._seq_expressions,
        ),
      ),

    _expression_inner: $ =>
      choice(
        $.line_comment,
        $.block_comment,
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
        $.call_expression,
        $.tuple_expression,
        $.application_expression,
        $.return_expression,
        $.yield_expression,
        // (static-typars : (member-sig) expr)
      ),

    application_expression: $ =>
      prec.right(PREC.APP_EXPR,
        seq(
          $._expression_inner,
          repeat1($._expression_inner),
        )
      ),

    call_expression: $ =>
      prec.right(PREC.PAREN_APP+100,
        seq(
          $._expression_inner,
          imm("("),
          optional($._expressions),
          ")",
        )
      ),

    tuple_expression: $ =>
      prec.left(PREC.TUPLE_EXPR,
      seq(
        $._expression_inner,
        repeat1(prec.left(PREC.TUPLE_EXPR, seq(",", $._expression_inner))),
      )
      ),

    brace_expression: $ =>
      prec(PREC.PAREN_EXPR,
      seq(
        "{",
          choice(
            $.with_field_expression,
            $.field_expression,
            $.object_expression,
          ),
        "}",
      )),

    with_field_expression: $ =>
      seq(
        $._expressions,
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
        $._object_members,
        $._interface_implementations,
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
        choice("lazy", "assert", "upcast", "downcast", "%", "%%", $.prefix_op),
        $._expression_inner,
      )),

    return_expression: $ =>
      prec.left(PREC.SPECIAL_PREFIX,
      seq(
        choice("return", "return!"),
        $._expression_inner,
      )),

    yield_expression: $ =>
      prec.left(PREC.SPECIAL_PREFIX,
      seq(
        choice("yield", "yield!"),
        $._expression_inner,
      )),

    ce_expression: $ =>
      prec(PREC.CE_EXPR,
      seq(
        $._expression_inner,
        "{",
          $._virtual_open_section,
          $._comp_or_range_expression,
          $._virtual_end_section,
        "}",
      )),

    infix_expression: $ =>
      prec.right(PREC.SPECIAL_INFIX,
      seq(
        $._expression_inner,
        $.infix_op,
        $._expression_inner,
      )),

    literal_expression: $ =>
      prec(PREC.PAREN_EXPR,
      choice(
        seq("<@", $._expression_inner, "@>"),
        seq("<@@", $._expression_inner, "@@>"),
      )),

    typecast_expression: $ =>
      prec(PREC.SPECIAL_INFIX,
      seq(
        $._expression_inner,
        choice(
          ":",
          ":>",
          ":?",
          ":?>"
        ),
        $.type
      )),

    begin_end_expression: $ => prec(PREC.PAREN_EXPR, seq("begin", $._expressions, "end")),

    paren_expression: $ => prec(PREC.PAREN_EXPR, seq("(", $._virtual_open_section, $._expressions, $._virtual_end_section, ")")),

    for_expression: $ =>
      prec.left(
      seq(
        "for",
        choice(
            seq($._pattern, "in", $._expression_or_range),
            seq($.identifier, "=", $._expression_inner, choice("to","downto"), $._expression_inner),
        ),
        "do",
          $._virtual_open_section,
          $._expressions,
          $._virtual_end_section,
        optional("done"),
      )),

    while_expression: $ =>
      prec.left(
      seq(
        "while",
          $._expression_inner,
        "do",
          $._virtual_open_section,
          $._expressions,
          $._virtual_end_section,
        optional("done"),
      )),

    _else_expression: $ =>
      prec(PREC.ELSE_EXPR,
      seq(
        "else",
        $._virtual_open_section,
        field("else_branch", $._expressions),
        $._virtual_end_section,
      )),

    elif_expression: $ =>
      prec(PREC.ELSE_EXPR,
      seq(
        "elif",
        field("guard", $._expression_inner),
        "then",
        $._virtual_open_section,
        field("then", $._expressions),
        $._virtual_end_section,
      )),

    if_expression: $ =>
      prec.left(PREC.IF_EXPR,
      seq(
        "if",
        field("guard", $._expression_inner),
        "then",
        field("then", $._expressions),
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
        $._expressions,
        $._virtual_end_section,
      )),

    try_expression: $ =>
      prec(PREC.MATCH_EXPR,
      seq(
        "try",
        $._virtual_open_section,
        $._expressions,
        $._virtual_end_section,
        choice(
          seq("with", $.rules),
          seq("finally", $._virtual_open_section, $._expressions, $._virtual_end_section),
        ),
      )),

    match_expression: $ =>
      prec(PREC.MATCH_EXPR,
      seq(
        choice("match", "match!"),
        $._expression_inner,
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
        $._expression_inner,
        ")"
      )),

    mutate_expression: $ =>
      prec.right(PREC.LARROW,
      seq(
        field("assignee", $._expression_inner),
        "<-",
        field("value", $._expression_inner),
      )),

    index_expression: $ =>
      prec(PREC.INDEX_EXPR,
      seq(
        $._expression_inner,
        optional(imm(".")),
        imm("["),
        $._virtual_open_section,
        choice(
          field("index", $._expressions),
          $.slice_ranges,
        ),
        $._virtual_end_section,
        "]",
      )),

    dot_expression: $ =>
      prec.right(PREC.DOT,
      seq(
        field("base", $._expression_inner),
        imm("."),
        field("field", $.long_identifier_or_op),
      )),

    typed_expression: $ =>
      prec(PREC.PAREN_EXPR,
      seq(
        $._expression_inner,
        imm("<"),
        optional($.types),
        ">",
      )),

    declaration_expression: $ =>
      prec.right(PREC.LET_EXPR,
      seq(
        choice(
          seq(choice("use", "use!"), $.identifier, "=", $._virtual_open_section, $._expressions, $._virtual_end_section),
          $.function_or_value_defn,
        ),
        $._virtual_open_section,
        field("in", $._expressions),
        $._virtual_end_section,
      )),

    do_expression: $ =>
      prec(PREC.DO_EXPR,
      seq(
        choice("do", "do!"),
        $._virtual_open_section,
        $._expressions,
        $._virtual_end_section,
      )),

    _list_elements: $ =>
      prec.right(PREC.COMMA+100,
        seq(
          $._virtual_open_section,
          $._expression_inner,
          repeat(prec.right(PREC.COMMA+100, seq($._virtual_end_decl, $._expression_inner))),
          $._virtual_end_section,
        ),
      ),

    _list_element: $ =>
      choice(
        $._list_elements,
        $._comp_or_range_expression,
      ),

    list_expression: $ =>
      seq(
        "[",
        optional($._list_element),
        "]",
      ),

    array_expression: $ =>
      seq(
        "[|",
        optional($._list_element),
        "|]",
      ),

    range_expression: $ =>
      prec.left(PREC.DOTDOT,
      seq(
        $._expressions,
        "..",
        $._expressions,
        optional(seq(
          "..",
          $._expressions,
        )))),

    _expression_or_range: $ =>
      choice(
        $._expression_inner,
        $.range_expression,
      ),

    rule: $ =>
      prec.right(
      seq(
        $._pattern,
        "->",
        $._virtual_open_section,
        $._expressions,
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
        $._expressions,
        $.short_comp_expression,
        // $.range_expression, TODO
      ),

    // _comp_expressions: $ =>
    //   choice(
    //     $.let_ce_expressions,
    //     $.do_ce_expressions,
    //     $.use_ce_expressions,
    //     $.yield_ce_expressions,
    //     $.return_ce_expressions,
    //     $.if_ce_expressions,
    //     $.match_ce_expressions,
    //     $.try_ce_expressions,
    //     $.while_expressions,
    //     $.for_ce_expressions,
    //     $.sequential_ce_expressions,
    //     $._expressions,
    //   ),

    // for_ce_expressions: $ =>
    //   prec.left(
    //   seq(
    //     "for",
    //     choice(
    //         seq($._pattern, "in", $._expressions_or_range),
    //         seq($.identifier, "=", $._expressions, "to", $._expression),
    //     ),
    //     "do",
    //       $._virtual_open_section,
    //       $._comp_expressions,
    //       $._virtual_end_section,
    //     optional("done"),
    //   )),
    //
    // try_ce_expressions: $ =>
    //   prec(PREC.MATCH_EXPR,
    //   seq(
    //     "try",
    //     $._virtual_open_section,
    //     $._comp_expressions,
    //     $._virtual_end_section,
    //     choice(
    //       seq("with", $.comp_rules),
    //       seq("finally", $.comp_rules)
    //     ),
    //   )),
    //
    // match_ce_expressions: $ =>
    //   prec(PREC.MATCH_EXPR,
    //   seq(
    //     "match",
    //     $._expressions,
    //     "with",
    //     $.comp_rules,
    //   )),
    //
    // sequential_ce_expressions: $ =>
    //   prec.left(PREC.SEQ_EXPR,
    //   seq(
    //     $._comp_expressions,
    //     repeat1(prec.right(PREC.SEQ_EXPR, seq(choice(";", $._newline), $._comp_expressions))),
    //   )),
    //
    // _else_ce_expressions: $ =>
    //   prec(PREC.ELSE_EXPR,
    //   seq(
    //     "else",
    //     $._virtual_open_section,
    //     field("else_branch", $._comp_expressions),
    //     $._virtual_end_section,
    //   )),
    //
    // elif_ce_expressions: $ =>
    //   prec(PREC.ELSE_EXPR,
    //   seq(
    //     "elif",
    //     $._virtual_open_section,
    //     field("guard", $._expressions),
    //     $._virtual_end_section,
    //     "then",
    //     $._virtual_open_section,
    //     field("then", $._comp_expressions),
    //     $._virtual_end_section,
    //   )),
    //
    // if_ce_expressions: $ =>
    //   prec.left(PREC.IF_EXPR,
    //   seq(
    //     "if",
    //     $._virtual_open_section,
    //     field("guard", $._expressions),
    //     $._virtual_end_section,
    //     "then",
    //     field("then", $._comp_expressions),
    //     repeat($.elif_ce_expressions),
    //     optional($._else_ce_expressions),
    //   )),
    //
    // return_ce_expressions: $ =>
    //   prec.left(PREC.PREFIX_EXPR,
    //   seq(
    //     choice("return!", "return"),
    //     $._expressions,
    //   )),
    //
    // yield_ce_expressions: $ =>
    //   prec.left(PREC.PREFIX_EXPR,
    //   seq(
    //     choice("yield!", "yield"),
    //     $._expressions,
    //   )),
    //
    // do_ce_expressions: $ =>
    //   seq(
    //     choice("do!", "do"),
    //     $._expressions,
    //     $._comp_expressions,
    //   ),
    //
    // use_ce_expressions: $ =>
    //   seq(
    //     choice("use!", "use"),
    //     $._pattern,
    //     "=",
    //     $._virtual_open_section,
    //     $._expressions,
    //     $._virtual_end_section,
    //     $._comp_expressions,
    //   ),
    //
    // let_ce_expressions: $ =>
    //   seq(
    //     choice("let!", "let"),
    //     $._pattern,
    //     "=",
    //     $._virtual_open_section,
    //     $._expressions,
    //     $._virtual_end_section,
    //     $._comp_expressions,
    //   ),

    short_comp_expression: $ =>
      seq(
        "for",
        $._pattern,
        "in",
        $._expression_or_range,
        "->",
        $._expressions,
      ),

    // comp_rule: $ =>
    //   seq(
    //     $._pattern,
    //     "->",
    //     $._comp_expressions,
    //   ),
    //
    // comp_rules: $ =>
    //   prec.left(2,
    //   seq(
    //     optional("|"),
    //     $.comp_rule,
    //     repeat(seq("|", $.comp_rule)),
    //   )),

    slice_ranges: $ =>
      seq($.slice_range, repeat(seq(",", $.slice_range))),

    _slice_range_special: $ =>
      prec.left(PREC.DOTDOT_SLICE,
        choice(
          seq($._expressions, ".."),
          seq("..", $._expressions),
          seq($._expressions, "..", $._expressions),
        )
      ),

    slice_range: $ =>
      choice(
        $._slice_range_special,
        $._expressions,
        "*",
      ),

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
        seq($.static_type_argument, ":", "(", $.trait_member_constraint, ")"),
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
        seq(choice("^", "'"), $.identifier),
        seq(choice("^", "'"), $.identifier, repeat(seq("or", choice("^", "'"), $.identifier)))
      ),

    type_arguments: $ =>
      seq(
        "<",
        $.type_argument_defn,
        repeat(prec.left(PREC.COMMA, seq(",", $.type_argument_defn))),
        optional($.type_argument_constraints),
        ">"
      ),

    trait_member_constraint: $ =>
      seq(
        optional("static"),
        "member",
        $.identifier,
        ':',
        $.type
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
        seq($.const, $._expressions)
      ),

    type_definition: $ =>
      prec.left(seq(
        optional($.attributes),
        "type",
        $._type_defn_body,
        repeat(seq(
          optional($.attributes),
          "and",
          $._type_defn_body,
        )))),

    _type_defn_body: $ =>
      choice(
        $.delegate_type_defn,
        $.record_type_defn,
        $.union_type_defn,
        $.anon_type_defn,
        // $.class_type_defn,
        // $.struct_type_defn,
        // $.interface_type_defn,
        $.enum_type_defn,
        $.type_abbrev_defn,
        $.type_extension,
      ),

    type_name: $ =>
      seq(
        optional($.attributes),
        optional($.access_modifier),
        choice(
            seq($.identifier, optional($.type_arguments)),
            seq(optional($.type_argument), $.identifier) // Covers `type 'a option = Option<'a>`
         ),
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
        $._virtual_open_section,
        $.delegate_signature,
        $._virtual_end_section,
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
        $._virtual_open_section,
        $.type,
        $._virtual_end_section,
      ),

    // class_type_defn: $ =>
    //   seq(
    //     $.type_name,
    //     optional($.primary_constr_args),
    //     "=",
    //     "class",
    //     $.class_type_body,
    //     "end",
    //   ),
    //
    // struct_type_defn: $ =>
    //   seq(
    //     $.type_name,
    //     optional($.primary_constr_args),
    //     "=",
    //     "struct",
    //     $.class_type_body,
    //     "end",
    //   ),
    //
    // interface_type_defn: $ =>
    //   seq(
    //     $.type_name,
    //     optional($.primary_constr_args),
    //     "=",
    //     "interface",
    //     $.class_type_body,
    //     "end",
    //   ),

    _class_type_body_inner: $ =>
      choice(
        $.class_inherits_decl,
        $._class_function_or_value_defn,
        $._type_defn_elements,
      ),

    _class_type_body: $ =>
      seq(
        $._virtual_open_section,
        $._class_type_body_inner,
        repeat(seq($._virtual_end_decl,$._class_type_body_inner)),
        $._virtual_end_section,
      ),

    record_type_defn: $ =>
      prec.left(
      seq(
        $.type_name,
        "=",
        $._virtual_open_section,
        "{",
        $._virtual_open_section,
        $.record_fields,
        $._virtual_end_section,
        "}",
        optional($.type_extension_elements),
        $._virtual_end_section,
      )),

    record_fields: $ =>
      seq(
        $.record_field,
        repeat(seq($._virtual_end_decl, $.record_field)),
        optional(";"),
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
        $._virtual_open_section,
        $.enum_type_cases,
        $._virtual_end_section,
      ),

    enum_type_cases: $ =>
      seq(
        optional("|"),
        $.enum_type_case,
        repeat(seq($._virtual_end_decl, "|", $.enum_type_case))
      ),

    enum_type_case: $ =>
      seq(
        $.identifier,
        "=",
        $.const
      ),

    union_type_defn: $ =>
      prec.left(
      seq(
        $.type_name,
        "=",
        $._virtual_open_section,
        $.union_type_cases,
        optional($.type_extension_elements),
        $._virtual_end_section,
      )),

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
          seq($.identifier, "of", $.union_type_fields),
          seq($.identifier, ":", $.type),
        ))),

    union_type_fields: $ =>
      seq(
        $.union_type_field,
        repeat(seq("*", $.union_type_field)),
      ),

    union_type_field: $ =>
      prec.left(choice(
        $.type,
        seq($.identifier, ":", $.type)
      )),

    anon_type_defn: $ =>
      seq(
        $.type_name,
        $.primary_constr_args,
        "=",
        $._virtual_open_section,
        $._class_type_body,
        $._virtual_end_section,
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

    _class_function_or_value_defn: $ =>
      seq(
        optional($.attributes),
        optional("static"),
        choice(
          $.function_or_value_defn,
          seq("do", $._virtual_open_section, $._expressions, $._virtual_end_section),
        )
      ),

    type_extension_elements: $ =>
      seq(
        choice(
          seq(
            "with",
            $._virtual_open_section,
            $._type_defn_elements,
            $._virtual_end_section,
          ),
          $._type_defn_elements,
        )
      ),

    _type_defn_elements: $ =>
      choice(
        $._member_defns,
        $._interface_implementations,
        // $.interface_signature
      ),

    _interface_implementations: $ => prec.right(repeat1($.interface_implementation)),
    interface_implementation: $ =>
      prec.left(
      seq(
        "interface",
        $.type,
        optional($._object_members),
      )),

    _member_defns: $ =>
      prec.left(
      seq(
        $.member_defn,
        repeat(seq($._virtual_end_decl, $.member_defn)),
      )),

    _object_members: $ =>
      seq(
        "with",
        $._virtual_open_section,
        $._member_defns,
        $._virtual_end_section,
      ),

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
        seq(field("instance", $.identifier), ".", $.identifier),
        $.identifier,
      ),

    _method_defn: $ =>
      choice(
          seq($.property_or_ident, $._pattern, "=", $._virtual_open_section, $._expressions, $._virtual_end_section),
      ),

    _property_defn: $ =>
      seq(
        $.property_or_ident,
        "=",
        $._virtual_open_section,
        $._expressions,
        $._virtual_end_section,
        optional(
          seq(
            "with",
            choice(
              "get",
              "set",
              seq("get", ",", "set"),
              seq("set", ",", "get"),
            )
          )
        ),
      ),

    method_or_prop_defn: $ =>
      prec(3,
        choice(
          seq($.property_or_ident, "with", $._virtual_open_section, $._function_or_value_defns, $._virtual_end_section),
          $._method_defn,
          $._property_defn,
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
        seq($.additional_constr_expr, "then", $._expressions),
        seq("if", $._expressions, "then", $.additional_constr_expr, "else", $.additional_constr_expr),
        seq("let", $._function_or_value_defn_body, "in", $.additional_constr_expr), // TODO: "in" is optional?
        $.additional_constr_init_expr
      ),

    additional_constr_init_expr: $ =>
      choice(
        seq("{", $.class_inherits_decl, $.field_initializers, "}"),
        seq("new", $.type, $._expressions)
      ),

    class_inherits_decl: $ =>
      prec.left(
        seq(
          "inherit",
          $.type,
          $._virtual_open_section,
          optional($._expressions),
          $._virtual_end_section,
        )
      ),

    as_defn: $ => seq("as", $.identifier),

    field_initializer: $ => prec.right(seq($.long_identifier, "=",
      $._virtual_open_section,
      $._expressions,
      $._virtual_end_section,
    )),

    field_initializers: $ =>
      prec.left(PREC.COMMA+100,
      seq(
        $.field_initializer,
        repeat(prec.left(PREC.COMMA+100, seq($._virtual_end_decl, $.field_initializer)))
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
    ),

    _string_elem: $ => choice(
      $._string_char,
      seq('\\', $._string_elem)
    ),
    char: $ => seq("'", $._char_char, imm("'")),
    string: $ => seq('"', repeat($._string_char), imm('"')),
    _verbatim_string_char: $ => choice(
      $._simple_string_char,
      $._non_escape_char,
      '\\',
    ),
    verbatim_string: $ => seq('@"', repeat($._verbatim_string_char), imm('"')),
    bytechar: $ => seq("'", $._char_char, imm("'B")),
    bytearray: $ => seq('"', repeat($._string_char), imm('"B')),
    verbatim_bytearray: $ => seq('@"', repeat($._verbatim_string_char), imm('"B')),
    _simple_or_escape_char: $ => choice($._escape_char, imm(/[^'\\]/)),
    triple_quoted_string: $ => seq('"""', repeat($._simple_or_escape_char), imm('"""')),
    _newline: $ => /\r?\n/,

    unit: $ => seq("(", optional(seq($._virtual_open_section, $._virtual_end_section)), ")"),

    const: $ => choice(
      $.sbyte, $.int16, $.int32, $.int64, $.byte, $.uint16, $.uint32, $.int,
      $.nativeint, $.unativeint, $.decimal,
      $.uint64, $.ieee32, $.ieee64, $.bignum, $.char, $.string,
      $.verbatim_string, $.triple_quoted_string, $.bytearray,
      $.verbatim_bytearray, $.bytechar, "false", "true", $.unit),

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
      prec.left(
      choice(
        $._infix_or_prefix_op,
        repeat1("~"),
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
    _quote_op_left: $ => choice("<@", "<@@"),
    _quote_op_right: $ => choice("@>", "@@>"),
    symbolic_op: $ => choice(
      "?",
      "?<-",
      /[!%&*+-./<=>@^|~][!%&*+-./<=>@^|~?]*/,
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

    ieee32: $ => choice(seq($.float, imm("f")), seq($.xint, imm("lf"))),
    ieee64: $ => seq($.xint, imm("LF")),

    bignum:     $ => seq($.int, imm(/[QRZING]/)),
    decimal:    $ => seq(choice($.float,$.int), imm(/[Mm]/)),

    float: $ => token(choice(
      seq(/[0-9]+/, imm(/\.[0-9]*/)),
      seq(/[0-9]+/, optional(imm(/\.[0-9]*/)), imm(/[eE]/), optional(imm(/[+-]/)), imm(/[0-9]+/)))),
    //
    // Constants (END)
    //

    block_comment: $ => seq("(*", $.block_comment_content, "*)"),
    line_comment: $ => token(seq("//", repeat(/[^\n\r]/))),

    identifier: $ => choice(
      /[_\p{XID_Start}][_'\p{XID_Continue}]*/,
      /``([^`\n\r\t])+``/ //TODO: Not quite the spec
    ),
  }

});
