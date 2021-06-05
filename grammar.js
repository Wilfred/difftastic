function caseInsensitive(keyword) {
  const result = new RegExp(
    keyword
      .split("")
      .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join(""),
  );
  return alias(result, keyword);
}

module.exports = grammar({
  name: "sql",
  extras: $ => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/],
  rules: {
    source_file: $ => repeat($._statement),
    _statement: $ =>
      seq(
        choice(
          $.select_statement,
          $.create_type_statement,
          $.create_domain_statement,
          $.create_index_statement,
          $.create_table_statement,
          $.create_function_statement,
        ),
        optional(";"),
      ),
    create_function_statement: $ =>
      seq(
        caseInsensitive("CREATE FUNCTION"),
        $.identifier,
        $.create_function_parameters,
        caseInsensitive("RETURNS"),
        $._create_function_return_type,
        repeat(
          choice(
            $._function_language,
            $._function_body,
            alias($._function_optimizer_hint, $.optimizer_hint),
          ),
        ),
      ),
    _function_optimizer_hint: $ =>
      choice(
        caseInsensitive("VOLATILE"),
        caseInsensitive("IMMUTABLE"),
        caseInsensitive("STABLE"),
      ),
    _function_language: $ =>
      seq(caseInsensitive("LANGUAGE"), alias($.identifier, $.language)),
    _create_function_return_type: $ =>
      choice($._type, $.setof, $.constrained_type),
    setof: $ =>
      seq(caseInsensitive("SETOF"), choice($._type, $.constrained_type)),
    constrained_type: $ =>
      seq(seq($._type, alias(caseInsensitive("NOT NULL"), $.not_null))),
    create_function_parameter: $ =>
      seq(
        optional($.identifier),
        choice($._type, $.constrained_type),
        optional(seq("=", alias($._expression, $.default))),
      ),
    create_function_parameters: $ =>
      seq("(", commaSep1($.create_function_parameter), ")"),
    _function_body: $ =>
      seq(caseInsensitive("AS"), alias($.string, $.function_body)),
    create_domain_statement: $ =>
      seq(
        caseInsensitive("CREATE DOMAIN"),
        $.identifier,
        optional(
          seq(
            caseInsensitive("AS"),
            $._type,
            repeat(choice($.null_constraint, $.check_constraint)),
          ),
        ),
      ),
    create_type_statement: $ =>
      seq(
        caseInsensitive("CREATE TYPE"),
        $.identifier,
        caseInsensitive("AS"),
        $.parameters,
      ),
    create_index_statement: $ =>
      seq(
        caseInsensitive("CREATE"),
        optional($.unique_constraint),
        caseInsensitive("INDEX"),
        field("name", $.identifier),
        caseInsensitive("ON"),
        field("table", $.identifier),
        optional($.using_clause),
        $.index_table_parameters,
        optional($.where_clause),
      ),
    create_table_column_parameter: $ =>
      seq(
        field("name", $.identifier),
        field("type", $._type),
        repeat(
          choice(
            $.column_default,
            $.primary_key_constraint,
            $.check_constraint,
            $.references_constraint,
            $.unique_constraint,
            $.null_constraint,
            $.named_constraint,
          ),
        ),
      ),
    named_constraint: $ => seq("CONSTRAINT", $.identifier),
    column_default: $ =>
      seq(
        caseInsensitive("DEFAULT"),
        // TODO: this should be specific variable-free expression https://www.postgresql.org/docs/9.1/sql-createtable.html
        // TODO: simple expression to use for check and default
        choice(
          choice(
            $._parenthesized_expression,
            $.string,
            $.identifier,
            $.function_call,
          ),
          $.type_cast,
        ),
      ),
    create_table_parameters: $ =>
      seq(
        "(",
        commaSep1(choice($.create_table_column_parameter, $._table_constraint)),
        ")",
      ),
    _table_constraint: $ =>
      choice(
        alias($.table_constraint_foreign_key, $.foreign_key),
        alias($.table_constraint_unique, $.unique),
        alias($.table_constraint_primary_key, $.primary_key),
        alias($.table_constraint_check, $.check),
      ),
    table_constraint_check: $ => seq(caseInsensitive("CHECK"), $._expression),
    table_constraint_foreign_key: $ =>
      seq(
        caseInsensitive("FOREIGN KEY"),
        "(",
        commaSep1($.identifier),
        ")",
        $.references_constraint,
      ),
    table_constraint_unique: $ =>
      seq(caseInsensitive("UNIQUE"), "(", commaSep1($.identifier), ")"),
    table_constraint_primary_key: $ =>
      seq(caseInsensitive("PRIMARY KEY"), "(", commaSep1($.identifier), ")"),
    primary_key_constraint: $ => caseInsensitive("PRIMARY KEY"),
    create_table_statement: $ =>
      seq(
        caseInsensitive("CREATE TABLE"),
        $.identifier,
        $.create_table_parameters,
      ),
    using_clause: $ =>
      seq(caseInsensitive("USING"), field("type", $.identifier)),
    index_table_parameters: $ =>
      seq("(", commaSep1(choice($._expression, $.ordered_expression)), ")"),
    select_statement: $ =>
      seq(
        $.select_clause,
        optional($.from_clause),
        optional($.where_clause),
        optional($.group_by_clause),
        optional($.order_by_clause),
      ),
    group_by_clause_body: $ => commaSep1($._expression),
    group_by_clause: $ =>
      seq(caseInsensitive("GROUP BY"), $.group_by_clause_body),
    order_by_clause_body: $ => commaSep1($._expression),
    order_by_clause: $ =>
      seq(caseInsensitive("ORDER BY"), $.order_by_clause_body),
    where_clause: $ => seq(caseInsensitive("WHERE"), $._expression),
    _aliased_expression: $ =>
      seq($._expression, caseInsensitive("AS"), $.identifier),
    _aliasable_expression: $ =>
      choice($._expression, alias($._aliased_expression, $.alias)),
    select_clause_body: $ => commaSep1($._aliasable_expression),
    select_clause: $ =>
      seq(caseInsensitive("SELECT"), optional($.select_clause_body)),
    from_clause: $ =>
      seq(caseInsensitive("FROM"), commaSep1($._aliasable_expression)),
    in_expression: $ =>
      prec.left(
        1,
        seq(
          $._expression,
          optional(caseInsensitive("NOT")),
          caseInsensitive("IN"),
          $.tuple,
        ),
      ),
    tuple: $ =>
      seq(
        // TODO: maybe collapse with function arguments, but make sure to preserve clarity
        "(",
        field("elements", commaSep1($._expression)),
        ")",
      ),
    // TODO: named constraints
    references_constraint: $ =>
      seq(
        caseInsensitive("REFERENCES"),
        $.identifier, // table_name
        optional(seq("(", commaSep1($.identifier), ")")),
        // seems like a case for https://github.com/tree-sitter/tree-sitter/issues/130
        optional(
          choice(
            seq($.on_update_action, $.on_delete_action),
            seq($.on_delete_action, $.on_update_action),
          ),
        ),
      ),
    on_update_action: $ =>
      seq(caseInsensitive("ON UPDATE"), field("action", $._constraint_action)),
    on_delete_action: $ =>
      seq(caseInsensitive("ON DELETE"), field("action", $._constraint_action)),
    _constraint_action: $ =>
      choice(
        caseInsensitive("RESTRICT"),
        caseInsensitive("CASCADE"),
        caseInsensitive("SET NULL"),
      ),
    unique_constraint: $ => caseInsensitive("UNIQUE"),
    null_constraint: $ => seq(optional(caseInsensitive("NOT")), $.NULL),
    check_constraint: $ => seq(caseInsensitive("CHECK"), $._expression),
    _constraint: $ =>
      seq(
        choice($.null_constraint, $.check_constraint),
        optional($.check_constraint),
      ),
    parameter: $ => seq($.identifier, $._type),
    parameters: $ => seq("(", commaSep1($.parameter), ")"),
    function_call: $ =>
      seq(
        field("function", $.identifier),
        "(",
        optional(field("arguments", commaSep1($._expression))),
        ")",
      ),
    comparison_operator: $ =>
      prec.left(
        1,
        seq(
          $._expression,
          field("operator", choice("<", "<=", "<>", "=", ">", ">=")),
          $._expression,
        ),
      ),
    _parenthesized_expression: $ => seq("(", $._expression, ")"),
    is_expression: $ =>
      prec.left(
        1,
        seq(
          $._expression,
          caseInsensitive("is"),
          optional(caseInsensitive("not")),
          choice($.NULL, $.TRUE, $.FALSE, $.distinct_from),
        ),
      ),
    distinct_from: $ =>
      prec.left(seq(caseInsensitive("DISTINCT FROM"), $._expression)),
    boolean_expression: $ =>
      choice(
        prec.left(4, seq($._expression, caseInsensitive("AND"), $._expression)),
        prec.left(3, seq($._expression, caseInsensitive("OR"), $._expression)),
      ),
    NULL: $ => caseInsensitive("NULL"),
    TRUE: $ => caseInsensitive("TRUE"),
    FALSE: $ => caseInsensitive("FALSE"),
    number: $ => /\d+/,
    identifier: $ => /[a-zA-Z0-9_]+[.a-zA-Z0-9_]*/,
    string: $ =>
      choice(
        seq("'", field("content", /[^']*/), "'"),
        seq("$$", field("content", /(\$?[^$]+)+/), "$$"), // FIXME empty string test, maybe read a bit more into c comments answer
      ),
    field_access: $ => seq($.identifier, "->>", $.string),
    ordered_expression: $ =>
      seq(
        $._expression,
        field("order", choice(caseInsensitive("ASC"), caseInsensitive("DESC"))),
      ),
    _type_alias: $ => alias($.identifier, $.type),
    array_type: $ => seq($._type, "[", "]"),
    _type: $ => choice($._type_alias, $.array_type),
    type_cast: $ =>
      seq(
        // TODO: should be moved to basic expression or somethign
        choice(
          $._parenthesized_expression,
          $.string,
          $.identifier,
          $.function_call,
        ),
        "::",
        $._type,
      ),
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ =>
      token(
        choice(seq("--", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
    binary_expression: $ =>
      prec.left(
        choice(
          seq($._expression, "~", $._expression),
          seq($._expression, "+", $._expression),
        ),
      ),
    _expression: $ =>
      choice(
        $.function_call,
        $.string,
        $.field_access,
        $.TRUE,
        $.FALSE,
        $.NULL,
        $.identifier,
        $.number,
        $.comparison_operator,
        $.in_expression,
        $.is_expression,
        $.boolean_expression,
        $._parenthesized_expression,
        $.type_cast,
        $.binary_expression,
      ),
  },
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
