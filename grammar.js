function imm(x) {
  return token.immediate(x);
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
  ],

  words: $ => $.identifier,

  inline: $ => [ $._module_elem ],

  supertypes: $ => [ $._module_elem ],

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
        // $.type_defns
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

    value_declaration: $ =>
      choice(
        $._function_or_value_defn,
        $.do
      ),

    do: $ => seq( "do", $._expression),

    _function_or_value_defn: $ =>
      seq(
        "let",
        choice(
          $._function_or_value_defn_body,
          seq("rec", $._function_or_value_defn_body, repeat1(seq("and", $._function_or_value_defn_body)))
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
        alias($._expression, $.defn_body),
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
      seq(
        optional("mutable"),
        optional($.access_modifier),
        $._pattern,
        optional($.type_arguments),
        optional(seq(":", $.type))
      ),

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
          alias($._const, $.const_pattern),
          $.identifier_pattern,
          $.as_pattern,
          $.disjunct_pattern,
          $.conjunct_pattern,
          $.cons_pattern,
          prec.left(2,
            seq(
              $._pattern,
              repeat1(seq(",", $._pattern)),
          )),
          seq("(", $._pattern, ")"),
          $.list_pattern,
          $.array_pattern,
          $.record_pattern,
          $.typed_pattern,
          prec.left(seq($.attributes, $._pattern)),
          // :? atomic-type
          // :? atomic-type as ident
      ),

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
        $._const,
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
          $._const
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
        $._const,
        $.let_expression,
        prec.right(2, seq($._expression, $._expression)),
        seq("(", $._expression, ")"),
        $._long_identifier_or_op,
        $.dot_expression,
        $.index_expression,
        $.mutate_expression,
        prec.right(3, seq($._expression, repeat1(seq(",", $._expression)))),
        $.list_expression,
        $.array_expression,
        seq("upcast", $._expression),
        seq("downcast", $._expression),
      ),

    let_expression: $ =>
      seq(
        $._function_or_value_defn,
        $._virtual_open_section,
        $._expression,
        $._virtual_end_section,
      ),

    list_expression: $ =>
      seq(
        "[",
        optional($._virtual_open_section),
        repeat(seq($._expression, optional(";"))),
        optional($._virtual_end_section),
        "]",
      ),

    array_expression: $ =>
      seq(
        "[|",
        optional($._virtual_open_section),
        repeat(seq($._expression, optional(";"))),
        optional($._virtual_end_section),
        "|]",
      ),

    mutate_expression: $ =>
      prec.left(3,
        seq(
          $._expression,
          "<-",
          $._expression,
        )
      ),

    index_expression: $ =>
      prec.left(2,
        seq(
          $._expression,
          optional("."),
          "[",
          $._expression,
          "]",
        )
      ),

    dot_expression: $ =>
      seq(
        $._expression,
        ".",
        $._long_identifier_or_op,
      ),
    //
    // Expressions (END)
    //

    //
    // Attributes (BEGIN)
    //
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
      $.identifier
    ),
    //
    // Attributes (END)
    //

    //
    // Type rules (BEGIN)
    //
    type: $ =>
      prec.left(4,
        choice(
          $.long_identifier,
          seq($.long_identifier, "<", $.type_attributes, ">"),
          seq($.long_identifier, "<", ">"),
          seq("(", $.type, ")"),
          seq($.type, "->", $.type),
          seq($.type, repeat1(seq("*", $.type))),
          seq($.type, $.long_identifier),
          seq($.type, "[", repeat(","), "]"),
          seq($.type, $.type_arguments),
          $.type_argument,
          seq($.type_argument, ":>", $.type),
          seq("#", $.type),
        )
      ),

    type_attribute: $ =>
      choice(
        $.type,
        // measure
        // static-parameter
      ),
    type_attributes: $ => seq($.type_attribute, repeat(seq(",", $.type_attribute))),

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
        // static-typars : (member-sig)
        seq($.type_argument, ":", "(", "new", ":", "unit", "->", "'T", ")"),
        seq($.type_argument, ":", "struct"),
        seq($.type_argument, ":", "not", "struct"),
        seq($.type_argument, ":", "enum", "<", $.type, ">"),
        seq($.type_argument, ":", "unmanaged"),
        seq($.type_argument, ":", "delegate", "<", $.type, ",", $.type, ">"),
      ),

    type_argument_constraints: $ =>
      seq(
        "when",
        $.constraint,
        repeat(seq("and", $.constraint))
      ),

    type_argument: $ =>
      seq(
        optional($.attributes),
        choice(
          "_",
          seq("'", $.identifier),
          seq("^", $.identifier),
        ),
      ),

    static_type_argument: $ =>
      choice(
        seq("^", $.identifier),
        seq("^", $.identifier, repeat(seq("or", "^", $.identifier)))
      ),

    type_arguments: $ =>
      seq(
        "<",
        $.type_argument,
        repeat(seq(",", $.type_argument)),
        optional($.type_argument_constraints),
        ">"
      ),

    type_definition: $ =>
      $.abbrev_type_defn,
      // record-type-defn
      // union-type-defn
      // anon-type-defn
      // class-type-defn
      // struct-type-defn
      // interface-type-defn
      // enum-type-defn
      // delegate-type-defn
      // type-extension

    type_name: $ =>
      seq(
        optional($.attributes),
        optional($.access_modifier),
        $.identifier,
        optional($.type_arguments)
      ),

    abbrev_type_defn: $ =>
      seq(
        $.type_name,
        "=",
        $.type,
      ),

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

    _newline: $ => choice('\n', '\r\n'),
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
      seq(/[0-9]+/, optional(imm(/\.[0-9]*/)), imm(/[eE]/), optional(imm(/[+-]/)), imm(/[0-9]+/)))),
    //
    // Constants (END)
    //

    block_comment: $ => seq("(*", $._block_comment_content, "*)"),
    line_comment: $ => token(seq("//", repeat(/[^\n\r]/))),
  }

});
