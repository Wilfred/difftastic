module.exports = grammar({
  name: "elm",

  rules: {
    file: $ =>
      repeat(
        choice(
          $.module_declaration,
          $._imports,
          $.type_declaration,
          $.type_alias,
          $._comment
        )
      ),

    type_declaration: $ =>
      seq("type", $.upper_case_identifier, "=", pipeSep1($.union_variant)),

    union_variant: $ => seq($.upper_case_identifier, $.type_ref),

    type_ref: $ =>
      prec.right(
        3,
        seq(
          $.upper_case_qid,
          optional(repeat(choice($.type_ref, "(", $.type_expression, ")")))
        )
      ),

    _comment: $ => choice($.line_comment, $.block_comment),

    block_comment: $ =>
      seq("{-", choice($.block_comment, repeat(choice(/[^-]/, /-[^}]/))), /-}/),

    line_comment: $ => seq("--", /.*/),

    type_alias: $ =>
      seq("type", "alias", $.upper_case_identifier, "=", $._basic_datatypes),

    module_declaration: $ =>
      seq("module", $.upper_case_qid, optional($.exposing_list)),

    _imports: $ =>
      seq($.import_clause, optional($.as_clause), optional($.exposing_list)),

    exposing_list: $ =>
      seq("exposing", seq("(", commaSep1($.exposed_type), ")")),

    as_clause: $ => seq("as", $.upper_case_identifier),

    exposed_type: $ =>
      choice(
        $.upper_case_identifier,
        $.lower_case_identifier,
        $._type_alias_identifier_exposing_all
      ),

    type_annotation: $ => seq($.lower_case_identifier, ":", $.type_expression),

    type_expression: $ => prec.right(2, arrowSep1($.type_ref)),

    value_declaration: $ =>
      seq($.function_declaration_left, "=", choice($.let_in_expression)),

    function_declaration_left: $ =>
      seq($.lower_case_identifier, $.lower_pattern),

    lower_pattern: $ => $.lower_case_identifier,

    let_in_expression: $ =>
      seq("let", repeat($.value_declaration), "in", $.bin_or_expr),

    bin_or_expr: $ => choice($.function_call_expr),

    function_call_expr: $ => seq(repeat($.value_expr), seq("|>", $.value_expr)),

    value_expr: $ => $.value_qid,
    value_qid: $ =>
      choice($.lower_case_identifier, sep1($.upper_case_identifier, ".")),

    import_clause: $ => seq("import", $.upper_case_qid),

    inline_record: $ => seq("{", commaSep1($._assignment), "}"),

    list: $ =>
      choice(seq("[", commaSep1($._basic_datatypes), "]"), seq("[", "]")),

    _assignment: $ =>
      seq($.record_entry, "=", choice($.int, $._func_identifiers)),

    _math_with_model: $ =>
      seq(
        $.func_param,
        choice("+", "-", "*", "/"),
        choice($.int, $._func_identifiers)
      ),

    upper_case_qid: $ => sep1($.upper_case_identifier, "."),

    upper_case_identifier: $ => /[A-Z][\w\d]*/,

    custom_type_variant: $ => /[A-Z][A-Za-z]*/,

    _type_alias_identifier_exposing_all: $ =>
      seq($.upper_case_identifier, "(..)"),

    _func_identifiers: $ =>
      choice($.lower_case_identifier, $._module_func_identifier),

    lower_case_identifier: $ => /[a-z][A-Za-z]*/,

    _module_func_identifier: $ =>
      seq(
        $.upper_case_identifier,
        ".",
        choice($.lower_case_identifier, $.upper_case_identifier)
      ),

    func_param: $ => /[a-z][A-Za-z]*/,

    record_entry: $ => /[a-z][A-Za-z]*/,

    int: $ => /\d+/,

    string: $ =>
      choice(
        seq('"', /[\w &\[{}(=*)+\]!#@-]*/, '"'),
        seq('"""', /[\w\s]*/, '"""')
      ),

    // string: $ => seq(
    //     alias($._string_start, '"'),
    //     repeat(choice($.escape_sequence, $._string_content)),
    //     alias($._string_end, '"')
    //     ),

    // escape_sequence: $ => token(seq(
    //     '\\',
    //     choice(
    //         /u[a-fA-F\d]{4}/,
    //         /U[a-fA-F\d]{8}/,
    //         /x[a-fA-F\d]{2}/,
    //         /o\d{3}/,
    //         /\r\n/,
    //         /[^uxo]/
    //     )
    // )),

    _basic_datatypes: $ =>
      choice($.string, $.int, $.tuple, $.inline_record, $.list),

    tuple: $ =>
      choice(
        seq("(", ")"),
        seq("(", $._basic_datatypes, ",", $._basic_datatypes, ")")
      )
  }
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function pipeSep1(rule) {
  return sep1(rule, "|");
}

function arrowSep1(rule) {
  return sep1(rule, "->");
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
