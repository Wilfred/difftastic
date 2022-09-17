function imm(x) {
  return token.immediate(x);
}

module.exports = grammar({
  name: 'fsharp',

  extras: $ => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
  ],

  conflicts: $ => [
    [$.long_identifier, $._identifier_or_op]
  ],

  externals: $ => [
    $._newline,
    $._dedent,
    $.comment,
    ')',
    ']',
    '}',
    "let",
    "use",
    "=",
    "in",
  ],

  inline: $ => [ $._module_elem ],

  supertypes: $ => [
    $._module_elem,
  ],

  words: $ => $.long_identifiers,

  rules: {
    source_file: $ => choice(
      $._anonymous_module,
      $.named_module,
      $.namespace
    ),

    namespace: $ => repeat1(seq(
      "namespace",
      optional("global"),
      field("name", $.long_identifier),
      repeat1($._module_elem),
      )
    ),

    named_module: $ => seq(
      "module",
      field("name", $.long_identifier),
      repeat1($._module_elem)
    ),

    _anonymous_module: $ => repeat1($._module_elem),

    _module_elem: $ => choice(
      $.module_function_or_value_defn,
      $.module_defn,
      $.import_decl,
      $.module_abbrev,
      $.compiler_directive_decl,
      // TODO:
      // $.type_defns
      // $.exception_defn
    ),

    compiler_directive_decl: $ => seq(
      "#",
      $.identifier,
      repeat($.string)
    ),

    module_abbrev: $ => seq(
      "module",
      $.identifier,
      "=",
      $.long_identifier
    ),

    import_decl: $ => seq(
      "open",
      $.long_identifier,
    ),

    module_defn: $ => prec.left(seq(
      optional($.attributes),
      "module",
      optional($._access),
      $.identifier,
      "=",
      optional("begin"),
      repeat1($._module_elem),
      optional("end"),
    )),

    module_function_or_value_defn: $ => seq(
      optional($.attributes),
      choice(
        seq("let", $.function_defn),
        seq("let", $.value_defn),
        seq("let", optional("rec"), $.function_or_value_defns),
        seq("do", $.do_expr),
      ),
    ),

    do_expr: $ => $._expr,

    function_or_value_defns: $ => seq(
      $._function_or_value_defn, repeat1(seq("and", $._function_or_value_defn))
    ),

    _function_or_value_defn: $ => choice(
      $.function_defn,
      $.value_defn
    ),

    value_defn: $ => seq(
      optional("mutable"),
      optional($._access),
      field("assignee", $._pattern),
      // TODO:
      // optional($.typar_defns),
      // optional($.type),
      "=",
      field("value", $._expr),
      $._dedent,
    ),

    function_defn: $ => seq(
      optional("inline"),
      optional($._access),
      field("name", $._identifier_or_op),
      field("arguments", $.argument_patterns),
      // TODO:
      // optional($.typar_defns),
      // optional($.type),
      "=",
      field("value", $._expr),
      $._dedent,
    ),

    field_pat: $ => seq($.long_identifier, '=', $._pattern),
    _pattern: $ => choice(
      $._const,
      "null",
      "_",
      seq($.attributes, $._pattern),
      // TODO
      $.long_identifier
    ),

    argument_patterns: $ => repeat1($._atomic_pat),

    _atomic_pat: $ => choice(
      "null",
      "_",
      $._const,
      $.long_identifier,
      $.list_pat,
      $.record_pat,
      $.array_pat,
      seq('(', $._pattern, ')'),
      // TODO:
    ),

    list_pat: $ => choice(
      seq('[', ']'),
      seq('[', $._pattern, repeat(seq(';', $._pattern)), ']')),
    array_pat: $ => choice(
      seq('[|', '|]'),
      seq('[|', $._pattern, repeat(seq(';', $._pattern)), '|]')),
    record_pat: $ => seq(
      '{', $.field_pat, repeat(seq(';', $.field_pat))),

    attributes: $ => prec.left(2, repeat1($.attribute_set)),
    attribute_set: $ => seq(
      "[<",
      $.attribute,
      repeat(seq(";", $.attribute)),
      "<]"
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

    object_construction: $ => choice(
      //TODO:
      $.long_identifier
    ),

    _access: $ => choice(
      "private",
      "internal",
      "public"
    ),

    _expr: $ => choice(
      $._const,
      seq("(", $._expr, ")"),
      seq("begin", $._expr, "end"),
      $._long_identifier_or_op,
      $.dot_expression,
      prec.right(2, seq($._expr, $._expr)),
      // $.apply_expression, NOTE: same as sequential expression with whitespace
      // TODO:
      // expr<types>
      // expr infix-op expr
      // prefix-op expr
      $.index_expression,
      // expr.[slice-ranges]
      $.mutate_expression,
      prec.right(3,seq($._expr, repeat1(seq(",", $._expr)))),
      // new type expr
      // { new base-call object-members interface-impls } { field-initializers }
      // { expr with field-initializers }
      $.list_expression,
      $.array_expression,
      // expr { comp-or-range-expr }
      // [ comp-or-range-expr]
      // [| comp-or-range-expr |]
      seq("lazy", $._expr),
      alias("null", $.null),
      // expr : type
      // expr :> type
      // expr :? type
      // expr :?> type
      seq("upcast", $._expr),
      seq("downcast", $._expr),
      seq("let",
        $.function_defn,
        optional("in"),
        $._expr,
        ),
      seq(
        "let",
        $.value_defn,
        choice(
          seq("in", $._expr),
          seq($._expr, $._dedent),
        )),
      seq(
        "let",
        "rec",
        $.function_or_value_defns,
        optional("in"),
        $._expr),
      seq(
        "use",
        $.identifier,
        "=",
        choice(
          seq($._expr, $._dedent),
          seq($._expr, "in")),
        $._expr
      ),
      // fun argument-pats -> expr function rules
      // match expr with rules
      // try expr with rules
      // try expr finally expr
      // if expr then expr elif-branchesopt else-branchopt while expr do expr doneopt
      // for ident = expr to expr do expr doneopt
      // for pat in expr-or-range-expr do expr doneopt
      // assert expr
      // <@ expr @>
      // <@@ expr @@>
      // %expr
      // %%expr
      // (static-typars : (member-sig) expr)
      // expr< >
    ),

    list_expression: $ => seq(
      "[",
      $._expr,
      repeat(seq(";", $._expr)),
      "]",
    ),

    array_expression: $ => seq(
      "[|",
      $._expr,
      repeat(seq(";", $._expr)),
      "|]",
    ),

    mutate_expression: $ => prec.left(3,seq(
      $._expr,
      "<-",
      $._expr,
    )),
    index_expression: $ => prec(2, seq(
      $._expr,
      optional("."),
      "[",
      $._expr,
      "]",
    )),

    apply_expression: $ =>
      prec(2, seq($._expr, "(", $._expr, ")")),

    dot_expression: $ => seq(
      $._expr,
      ".",
      $._long_identifier_or_op
    ),

    null: $ => "null",

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

    _const: $ => choice(
      $.sbyte, $.int16, $.int32, $.int64, $.byte, $.uint16, $.uint32, $.int,
      $.uint64, $.ieee32, $.ieee64, $.bignum, $.char, $.string,
      $.verbatim_string, $.triple_quoted_string, $.bytearray,
      $.verbatim_bytearray, $.bytechar, "false", "true", seq("(", ")")),

    // Identifiers:
    _long_identifier_or_op: $ => prec.right(
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


    // Symbolic Operators
    _first_op_char: $ => /[!%&*+-./<=>@^|~]/,
    _op_char: $ => choice($._first_op_char, '?'),
    _quote_op_left: $ => choice("<@", "<@@"),
    _quote_op_right: $ => choice("@>", "@@>"),
    symbolic_op: $ => choice(
      "?",
      "?<-",
      seq($._first_op_char, repeat($._op_char)),
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
      seq(/[0-9]+/, optional(imm(/\.[0-9]*/)), imm(/[eE]/), optional(imm(/[+-]/)), imm(/[0-9]+/))
    )),
  }

});
