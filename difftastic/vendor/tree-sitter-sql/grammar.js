const PREC = {
  primary: 8,
  unary: 7,
  exp: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
};
const multiplicative_operators = ["*", "/", "%", "<<", ">>", "&"];
const additive_operators = ["+", "-", "|", "#"];
const comparative_operators = [
  "<",
  "<=",
  "<>",
  "!=",
  "=",
  ">",
  ">=",
  "~",
  "!~",
  "~*",
  "!~*",
];

// Generate case insentitive match for SQL keyword
// In case of multiple word keyword provide a seq matcher
function kw(keyword) {
  if (keyword.toUpperCase() != keyword) {
    throw new Error(`Expected upper case keyword got ${keyword}`);
  }
  const words = keyword.split(" ");
  const regExps = words.map(createCaseInsensitiveRegex);

  return regExps.length == 1
    ? alias(regExps[0], keyword)
    : alias(seq(...regExps), keyword.replace(/ /g, "_"));
}

function createOrReplace(item) {
  if (item.toUpperCase() != item) {
    throw new Error(`Expected upper case item got ${item}`);
  }
  return alias(
    seq(
      createCaseInsensitiveRegex("CREATE"),
      field("replace", optional(createCaseInsensitiveRegex("OR REPLACE"))),
      createCaseInsensitiveRegex(item),
    ),
    `CREATE_OR_REPLACE_${item}`,
  );
}

function createCaseInsensitiveRegex(word) {
  return new RegExp(
    word
      .split("")
      .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join(""),
  );
}

function kv(key, value) {
  return alias(
    value === null
      ? createCaseInsensitiveRegex(key)
      : seq(createCaseInsensitiveRegex(key), "=", field("value", value)),
    key.toLowerCase(),
  );
}

module.exports = grammar({
  name: "sql",
  extras: $ => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/],
  externals: $ => [
    $._dollar_quoted_string_tag,
    $._dollar_quoted_string_content,
    $._dollar_quoted_string_end_tag,
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ =>
      seq(
        choice(
          $.pg_command,
          $.begin_statement,
          $.commit_statement,
          $.rollback_statement,
          $.select_statement,
          $.update_statement,
          $.insert_statement,
          $.delete_statement,
          $.set_statement,
          $.grant_statement,
          $.drop_statement,
          $.create_statement,
          $.alter_statement,
          $.truncate_statement,
          $.create_type_statement,
          $.create_domain_statement,
          $.create_index_statement,
          $.create_table_statement,
          $.create_schema_statement,
          $.create_role_statement,
          $.create_extension_statement,
          $.create_trigger_statement,
          $.create_function_statement,
          $.comment_statement,
          $.create_view_statement,
          $.create_materialized_view_statement,
        ),
        optional(";"),
      ),

    _simple_statement: $ =>
      prec.right(
        seq(
          choice(
            $.pg_command,
            $.select_statement,
            $.update_statement,
            $.insert_statement,
            $.delete_statement,
            $.set_statement,
            $.grant_statement,
            $.drop_statement,
            $.create_statement,
            $.alter_statement,
            $.create_type_statement,
            $.create_domain_statement,
            $.create_table_statement,
            $.create_index_statement,
            $.create_schema_statement,
            $.create_role_statement,
            $.create_extension_statement,
            $.return_statement,
            $.declare_statement,
            $.create_view_statement,
            $.create_materialized_view_statement,
          ),
          optional(";"),
        ),
      ),

    with_clause: $ =>
      seq(kw("WITH"), optional(kw("RECURSIVE")), commaSep1($.cte)),

    cte: $ =>
      seq(
        $.identifier,
        kw("AS"),
        optional(seq(optional(kw("NOT")), kw("MATERIALIZED"))),
        "(",
        choice(
          $.select_statement,
          $.delete_statement,
          $.insert_statement,
          $.update_statement,
        ),
        ")",
      ),

    select_statement: $ => seq(optional($.with_clause), $._select_statement),
    insert_statement: $ => seq(optional($.with_clause), $._insert_statement),
    update_statement: $ => seq(optional($.with_clause), $._update_statement),
    delete_statement: $ => seq(optional($.with_clause), $._delete_statement),

    truncate_statement: $ =>
      seq(
        kw("TRUNCATE"),
        optional(kw("TABLE")),
        optional(kw("ONLY")),
        commaSep1($._identifier),
      ),

    comment_statement: $ =>
      seq(
        kw("COMMENT ON"),
        choice(
          seq(
            choice(kw("COLUMN"), kw("EXTENSION"), kw("SCHEMA"), kw("TABLE")),
            $._identifier,
          ),
          seq(kw("FUNCTION"), $.function_call),
        ),
        kw("IS"),
        choice($.string, $.NULL),
      ),

    begin_statement: $ =>
      seq(kw("BEGIN"), optional(choice(kw("WORK"), kw("TRANSACTION")))),
    commit_statement: $ =>
      seq(kw("COMMIT"), optional(choice(kw("WORK"), kw("TRANSACTION")))),
    rollback_statement: $ =>
      seq(kw("ROLLBACK"), optional(choice(kw("WORK"), kw("TRANSACTION")))),

    create_statement: $ =>
      seq(
        kw("CREATE"),
        optional(choice(kw("TEMP"), kw("TEMPORARY"))),
        choice(alias($.sequence, $.create_sequence)),
      ),
    alter_statement: $ =>
      seq(
        kw("ALTER"),
        choice(
          alias($.sequence, $.alter_sequence),
          $.alter_table,
          alias($.alter_schema, $.schema),
        ),
      ),
    alter_table: $ =>
      seq(
        kw("TABLE"),
        optional(kw("IF EXISTS")),
        optional(kw("ONLY")),
        $._identifier,
        choice($.alter_table_action, $.alter_table_rename_column),
      ),
    alter_schema_rename_action: $ => seq(kw("RENAME TO"), $._identifier),
    alter_owner_action: $ =>
      seq(
        kw("OWNER TO"),
        choice($._identifier, "CURRENT_USER", "CURRENT_ROLE", "SESSION_USER"),
      ),
    alter_schema: $ =>
      seq(
        kw("SCHEMA"),
        $._identifier,
        choice(
          alias($.alter_schema_rename_action, $.rename),
          alias($.alter_owner_action, $.alter_owner),
        ),
      ),
    alter_table_action_alter_column: $ =>
      seq(
        kw("ALTER COLUMN"),
        $._identifier,
        kw("SET DEFAULT"),
        $._column_default_expression,
      ),
    alter_table_action_add: $ =>
      seq(
        kw("ADD"),
        choice(seq(kw("COLUMN"), $.table_column), $._table_constraint),
      ),
    alter_table_action_set: $ => seq(kw("SET"), $._expression),
    alter_table_rename_column: $ =>
      seq(
        kw("RENAME"),
        optional(kw("COLUMN")),
        $._identifier,
        kw("TO"),
        $._identifier,
      ),
    alter_table_action: $ =>
      choice(
        $.alter_table_action_add,
        $.alter_table_action_alter_column,
        $.alter_table_action_set,
        alias($.alter_owner_action, $.alter_owner),
      ),
    sequence: $ =>
      prec.right(
        seq(
          kw("SEQUENCE"),
          optional(seq(kw("IF"), optional(kw("NOT")), kw("EXISTS"))),
          $._identifier,
          optional(seq(kw("AS"), $.type)),
          repeat(
            choice(
              seq(kw("START"), kw("WITH"), $.number),
              seq(kw("INCREMENT"), optional(kw("BY")), $.number),
              seq(kw("NO"), choice(kw("MINVALUE"), kw("MAXVALUE"))),
              seq(kw("CACHE"), $.number),
              seq(kw("OWNED BY"), choice($._identifier)),
            ),
          ),
        ),
      ),
    pg_command: $ => seq(/\\[a-zA-Z]+/, /.*/),

    _compound_statement: $ =>
      prec.right(
        seq(
          optional(seq(field("begin_label", $.identifier), ":")),
          kw("BEGIN"),
          optional(kw("ATOMIC")),
          repeat1($._simple_statement),
          kw("END"),
          optional(field("end_label", $.identifier)),
          optional(";"),
        ),
      ),
    return_statement: $ =>
      seq(kw("RETURN"), choice($._expression, $.select_statement)),
    declare_statement: $ =>
      seq(kw("DECLARE"), $.identifier, $._type, optional($.default_clause)),

    create_function_statement: $ =>
      prec.right(
        seq(
          choice(createOrReplace("FUNCTION"), createOrReplace("PROCEDURE")),
          $._identifier,
          $.create_function_parameters,
          optional(seq(kw("RETURNS"), $._create_function_return_type)),
          repeat(
            choice(
              $._function_language,
              seq(kw("TRANSFORM FOR TYPE"), commaSep1($.identifier)),
              kw("WINDOW"),
              seq(optional(kw("NOT")), kw("LEAKPROOF")),
              seq(kw("COST"), $.number),
              seq(kw("ROWS"), $.number),
              seq(kw("SUPPORT"), $.identifier),
              $.external_hint,
              $.optimizer_hint,
              $.parallel_hint,
              $.null_hint,
              $.deterministic_hint,
              $.sql_hint,
              $.sql_security_hint,
              $.function_body,
            ),
          ),
        ),
      ),
    external_hint: $ =>
      choice(
        seq(optional(kw("EXTERNAL")), kw("SECURITY INVOKER")),
        seq(optional(kw("EXTERNAL")), kw("SECURITY DEFINER")),
      ),
    optimizer_hint: $ => choice(kw("VOLATILE"), kw("IMMUTABLE"), kw("STABLE")),
    parallel_hint: $ =>
      seq(kw("PARALLEL"), choice(kw("SAFE"), kw("UNSAFE"), kw("RESTRICTED"))),
    null_hint: $ =>
      choice(
        kw("CALLED ON NULL INPUT"),
        kw("RETURNS NULL ON NULL INPUT"),
        kw("STRICT"),
      ),
    // MySQL hints
    deterministic_hint: $ => seq(optional(kw("NOT")), kw("DETERMINISTIC")),
    sql_hint: $ =>
      choice(
        kw("CONTAINS SQL"),
        kw("NO SQL"),
        kw("READS SQL DATA"),
        kw("MODIFIES SQL DATA"),
      ),
    sql_security_hint: $ =>
      seq(kw("SQL SECURITY"), choice(kw("DEFINER"), kw("INVOKER"))),

    _function_language: $ =>
      seq(
        kw("LANGUAGE"),
        alias(choice(/[a-zA-Z]+/, /'[a-zA-Z]+'/), $.language),
      ),
    _create_function_return_type: $ =>
      prec.right(choice($.setof, $._type, $.constrained_type)),
    setof: $ =>
      prec.right(seq(kw("SETOF"), choice($._type, $.constrained_type))),
    constrained_type: $ => seq($._type, $.null_constraint),
    create_function_parameter: $ =>
      seq(
        field(
          "argmode",
          optional(choice(kw("IN"), kw("OUT"), kw("INOUT"), kw("VARIADIC"))),
        ),
        optional($.identifier),
        choice($._type, $.constrained_type),
        optional(seq("=", alias($._expression, $.default))),
      ),
    create_function_parameters: $ =>
      seq("(", optional(commaSep1($.create_function_parameter)), ")"),

    function_body: $ =>
      choice(
        $._simple_statement,
        $._compound_statement,
        seq(kw("AS"), field("script", $.string)),
        seq(
          kw("AS"),
          field("obj_file", $.string),
          field("link_symbol", $.string),
        ),
      ),

    create_trigger_statement: $ =>
      seq(
        kw("CREATE"),
        optional(kw("OR REPLACE")),
        optional(kw("CONSTRAINT")),
        kw("TRIGGER"),
        optional(kw("IF NOT EXISTS")),
        field("name", $.identifier),
        $.trigger_time,
        $.trigger_event,
        kw("ON"),
        field("on_table", $._identifier),
        optional($.trigger_reference),
        optional($.trigger_preferencing),
        optional(
          seq(
            kw("FOR"),
            optional(kw("EACH")),
            choice(kw("ROW"), kw("STATEMENT")),
          ),
        ),
        optional($.trigger_condition),
        optional($.trigger_order),
        $.trigger_body,
      ),
    trigger_reference: $ => seq(kw("FROM"), $._identifier),
    trigger_preferencing: $ =>
      seq(
        kw("REFERENCING"),
        repeat1(
          seq(
            choice(kw("NEW"), kw("OLD")),
            kw("TABLE"),
            optional(kw("AS")),
            $.identifier,
          ),
        ),
      ),
    trigger_time: $ => choice(kw("BEFORE"), kw("AFTER"), kw("INSTEAD OF")),
    trigger_event: $ =>
      choice(
        kw("INSERT"),
        kw("DELETE"),
        kw("TRUNCATE"),
        seq(kw("UPDATE"), optional(seq(kw("OF"), repeat1($._identifier)))),
      ),
    // PostgreSQL trigger condition
    trigger_condition: $ => seq(kw("WHEN"), $._expression),
    // MySQL trigger order
    trigger_order: $ =>
      seq(choice(kw("FOLLOWS"), kw("PRECEDES")), $._identifier),
    trigger_body: $ =>
      choice(
        // PostgreSQL style trigger body
        seq(
          kw("EXECUTE"),
          choice(kw("FUNCTION"), kw("PROCEDURE")),
          seq(
            field("function", $.identifier),
            "(",
            optional(field("arguments", commaSep1($.string))),
            ")",
          ),
        ),
        // MySQL style trigger body
        $._simple_statement,
        $._compound_statement,
      ),

    create_extension_statement: $ =>
      prec.right(
        seq(
          kw("CREATE EXTENSION"),
          optional(kw("IF NOT EXISTS")),
          $._identifier,
          optional(kw("WITH")),
          repeat(
            choice(
              seq(kw("SCHEMA"), alias($._identifier, $.schema)),
              seq(kw("VERSION"), alias($.string, $.version)),
              kw("CASCADE"),
            ),
          ),
        ),
      ),
    create_role_statement: $ =>
      prec.right(
        seq(
          kw("CREATE ROLE"),
          $._identifier,
          optional(kw("WITH")),
          optional($._identifier),
        ),
      ),
    create_schema_statement: $ =>
      seq(kw("CREATE SCHEMA"), optional(kw("IF NOT EXISTS")), $._identifier),
    drop_statement: $ =>
      seq(
        kw("DROP"),
        field(
          "kind",
          choice(
            kw("TABLE"),
            kw("VIEW"),
            kw("INDEX"),
            kw("EXTENSION"),
            kw("TABLESPACE"),
            kw("MATERIALIZED VIEW"),
          ),
        ),
        optional(kw("CONCURRENTLY")),
        optional(kw("IF EXISTS")),
        field("target", commaSep1($._identifier)),
        optional(choice(kw("CASCADE"), kw("RESTRICT"))),
      ),
    set_statement: $ =>
      seq(
        kw("SET"),
        field("scope", optional(choice(kw("SESSION"), kw("LOCAL")))),
        $.identifier,
        choice("=", kw("TO")),
        choice($._expression, kw("DEFAULT")),
      ),
    grant_statement: $ =>
      prec.right(
        seq(
          kw("GRANT"),
          choice(
            seq(kw("ALL"), optional(kw("PRIVILEGES"))),
            repeat(
              choice(
                kw("SELECT"),
                kw("INSERT"),
                kw("UPDATE"),
                kw("DELETE"),
                kw("TRUNCATE"),
                kw("REFERENCES"),
                kw("TRIGGER"),
                kw("USAGE"),
              ),
            ),
          ),
          kw("ON"),
          field(
            "type",
            optional(
              choice(kw("SCHEMA"), kw("DATABASE"), kw("SEQUENCE"), kw("TABLE")),
            ),
          ),
          $._identifier,
          kw("TO"),
          choice(seq(optional(kw("GROUP")), $.identifier), kw("PUBLIC")),
          optional(kw("WITH GRANT OPTION")),
        ),
      ),
    create_domain_statement: $ =>
      prec.right(
        seq(
          kw("CREATE DOMAIN"),
          $._identifier,
          optional(
            seq(
              kw("AS"),
              $._type,
              repeat(choice($.null_constraint, $.check_constraint)),
            ),
          ),
        ),
      ),

    create_type_statement: $ =>
      prec.right(
        seq(
          kw("CREATE TYPE"),
          field("type_name", $._identifier),
          optional(
            choice(
              $.type_spec_composite,
              $.type_spec_enum,
              $.type_spec_range,
              $.type_spec_base,
            ),
          ),
        ),
      ),
    type_spec_composite: $ =>
      seq(
        kw("AS"),
        "(",
        commaSep1(seq($.identifier, choice($._type, $.constrained_type))),
        ")",
      ),
    type_spec_enum: $ =>
      seq(kw("AS"), kw("ENUM"), "(", commaSep($.string), ")"),
    type_spec_range: $ =>
      seq(
        kw("AS"),
        kw("RANGE"),
        "(",
        commaSep(
          choice(
            ...[
              "SUBTYPE",
              "SUBTYPE_OPCLASS",
              "COLLATION",
              "CANONICAL",
              "SUBTYPE_DIFF",
              "MULTIRANGE_TYPE_NAME",
            ].map(k => kv(k, $._identifier)),
          ),
        ),
        ")",
      ),
    type_spec_base: $ =>
      seq(
        "(",
        commaSep(
          choice(
            ...[
              ["INPUT", $._identifier],
              ["OUTPUT", $._identifier],
              ["RECEIVE", $._identifier],
              ["SEND", $._identifier],
              ["TYPMOD_IN", $._identifier],
              ["TYPMOD_OUT", $._identifier],
              ["ANALYZE", $._identifier],
              ["SUBSCRIPT", $._identifier],
              ["INTERNALLENGTH", choice($.number, kw("VARIABLE"))],
              ["PASSEDBYVALUE", null],
              ["ALIGNMENT", $._identifier],
              ["STORAGE", $._identifier],
              ["LIKE", $._identifier],
              ["CATEGORY", $.string],
              ["PREFERRED", $.string],
              ["DEFAULT", $._expression],
              ["ELEMENT", $._identifier],
              ["DELIMITER", $.string],
              ["COLLATABLE", $._identifier],
            ].map(([k, v]) => kv(k, v)),
          ),
        ),
        ")",
      ),

    create_index_with_clause: $ =>
      seq(
        kw("WITH"),
        "(",
        field("storage_parameter", $.identifier),
        "=",
        // TODO: Option value be special set e.g. accepting enum with ON, OFF, VALUE
        $._expression,
        ")",
      ),
    create_index_include_clause: $ =>
      seq(kw("INCLUDE"), "(", commaSep1($.identifier), ")"),
    create_index_statement: $ =>
      prec.right(
        seq(
          kw("CREATE"),
          optional($.unique_constraint),
          kw("INDEX"),
          optional(kw("CONCURRENTLY")),
          optional(
            seq(optional(kw("IF NOT EXISTS")), field("name", $.identifier)),
          ),
          kw("ON"),
          optional(kw("ONLY")),
          field("table_name", $._identifier),
          optional($.using_clause),
          $.index_table_parameters,
          optional($.create_index_include_clause),
          optional($.create_index_with_clause),
          optional($.where_clause),
        ),
      ),
    table_column: $ =>
      prec.right(
        seq(
          field("name", $._identifier),
          field("type", $._type),
          repeat(
            choice(
              $.default_clause,
              $.primary_key_constraint,
              $.check_constraint,
              $.references_constraint,
              $.unique_constraint,
              $.null_constraint,
              $.named_constraint,
              $.direction_constraint,
              $.auto_increment_constraint,
            ),
          ),
        ),
      ),
    auto_increment_constraint: _ => kw("AUTO_INCREMENT"),
    direction_constraint: _ => choice(kw("ASC"), kw("DESC")),
    named_constraint: $ => seq("CONSTRAINT", $.identifier),
    _column_default_expression: $ =>
      choice(
        $._parenthesized_expression,
        $.string,
        $.number,
        $.identifier,
        $.function_call,
      ),
    default_clause: $ =>
      seq(
        kw("DEFAULT"),
        // TODO: this should be specific variable-free expression https://www.postgresql.org/docs/9.1/sql-createtable.html
        // TODO: simple expression to use for check and default
        choice($._column_default_expression, $.type_cast),
      ),
    table_parameters: $ =>
      seq(
        "(",
        optional(commaSep1(choice($.table_column, $._table_constraint))),
        ")",
      ),
    mode: $ => choice(kw("NOT DEFERRABLE"), kw("DEFERRABLE")),
    initial_mode: $ =>
      seq(kw("INITIALLY"), choice(kw("DEFERRED"), kw("IMMEDIATE"))),
    _table_constraint: $ =>
      prec.right(
        seq(
          optional(seq(kw("CONSTRAINT"), field("name", $._identifier))),
          choice(
            alias($.table_constraint_foreign_key, $.foreign_key),
            alias($.table_constraint_unique, $.unique),
            alias($.table_constraint_primary_key, $.primary_key),
            alias($.table_constraint_check, $.check),
            alias($.table_constraint_exclude, $.exclude),
          ),
          optional($.mode),
          optional($.initial_mode),
        ),
      ),
    table_constraint_check: $ => seq(kw("CHECK"), $._expression),
    op_class: $ => $._identifier,
    exclude_entry: $ =>
      seq(
        $._identifier,
        optional($.op_class),
        optional(seq(kw("WITH"), $.binary_operator)),
      ),
    table_constraint_exclude: $ =>
      seq(
        kw("EXCLUDE"),
        optional(seq(kw("USING"), $._identifier)),
        "(",
        commaSep1($.exclude_entry),
        ")",
      ),
    table_constraint_foreign_key: $ =>
      seq(
        kw("FOREIGN KEY"),
        "(",
        commaSep1($.identifier),
        ")",
        $.references_constraint,
      ),
    table_constraint_unique: $ =>
      seq(kw("UNIQUE"), "(", commaSep1($._identifier), ")"),
    table_constraint_primary_key: $ =>
      seq(kw("PRIMARY KEY"), "(", commaSep1($._identifier), ")"),
    primary_key_constraint: $ => kw("PRIMARY KEY"),
    create_table_statement: $ =>
      seq(
        kw("CREATE"),
        optional(choice(kw("TEMPORARY"), kw("TEMP"))),
        kw("TABLE"),
        optional(kw("IF NOT EXISTS")),
        $._identifier,
        choice(seq(kw("AS"), $.select_statement), $.table_parameters),
        optional(kw("WITHOUT OIDS")),
      ),
    using_clause: $ => seq(kw("USING"), field("method", $.identifier)),
    index_table_parameters: $ =>
      seq(
        "(",
        commaSep1(
          seq(
            choice($._expression, $.ordered_expression),
            optional($.op_class),
          ),
        ),
        ")",
      ),

    create_view_statement: $ =>
      prec.right(
        seq(
          kw("CREATE"),
          optional(createCaseInsensitiveRegex("OR REPLACE")),
          optional(choice(kw("TEMPORARY"), kw("TEMP"))),
          kw("VIEW"),
          $._identifier,
          optional($.view_columns),
          optional($.view_options),
          $.view_body,
          optional($.view_check_option),
        ),
      ),
    view_columns: $ => seq("(", commaSep1($._identifier), ")"),
    // PostgreSQL currently only support the SECURITY_BARRIER option
    view_option: $ => choice($._identifier, $.assigment_expression),
    view_options: $ => seq(kw("WITH"), "(", commaSep1($.view_option), ")"),
    // MySQL support
    view_check_option: $ =>
      seq(
        kw("WITH"),
        optional(choice(kw("CASCADED"), kw("LOCAL"))),
        kw("CHECK OPTION"),
      ),
    view_body: $ =>
      seq(
        kw("AS"),
        choice($.select_statement, $.select_subexpression, $.values_clause),
      ),

    create_materialized_view_statement: $ =>
      prec.right(
        seq(
          kw("CREATE MATERIALIZED VIEW"),
          optional(kw("IF NOT EXISTS")),
          $._identifier,
          optional($.view_columns),
          optional($.using_clause),
          optional($.view_options),
          optional($.tablespace_hint),
          $.view_body,
          optional($.data_hint),
        ),
      ),
    tablespace_hint: $ => seq(kw("TABLESPACE"), $._identifier),
    data_hint: $ => seq(kw("WITH"), optional(kw("NO")), kw("DATA")),

    // SELECT
    _select_statement: $ =>
      prec.right(
        seq(
          $.select_clause,
          optional($.from_clause),
          optional(repeat($.join_clause)),
          optional($.where_clause),
          optional($.group_by_clause),
          optional(commaSep1($.window_clause)),
          optional($.order_by_clause),
          optional($.limit_clause),
          optional($.offset_clause),
        ),
      ),

    group_by_clause: $ =>
      seq(
        kw("GROUP BY"),
        commaSep1($.group_expression),
        optional($.having_clause),
      ),
    having_clause: $ => seq(kw("HAVING"), $._expression),
    group_expression: $ =>
      choice(
        $._expression,
        $.grouping_sets_clause,
        $.rollup_clause,
        $.cube_clause,
      ),
    grouping_sets_clause: $ =>
      seq(kw("GROUPING SETS"), "(", commaSep1($.expression_list), ")"),
    rollup_clause: $ =>
      seq(
        kw("ROLLUP"),
        "(",
        commaSep1(choice($._expression, $.expression_list)),
        ")",
      ),
    cube_clause: $ =>
      seq(
        kw("CUBE"),
        "(",
        commaSep1(choice($._expression, $.expression_list)),
        ")",
      ),
    expression_list: $ => seq("(", optional(commaSep1($._expression)), ")"),
    order_expression: $ =>
      seq(
        $._expression,
        optional(alias(choice(kw("ASC"), kw("DESC")), $.order)),
        optional(
          alias(
            seq(kw("NULLS"), choice(kw("FIRST"), kw("LAST"))),
            $.nulls_order,
          ),
        ),
      ),
    window_clause: $ =>
      seq(kw("WINDOW"), $.identifier, kw("AS"), $.window_definition),
    order_by_clause: $ => seq(kw("ORDER BY"), commaSep1($.order_expression)),
    limit_clause: $ =>
      seq(
        kw("LIMIT"),
        choice($.number, kw("ALL")),
        optional(seq(",", $.number)), // MySQL LIMIT a, b
      ),
    offset_clause: $ =>
      prec.right(
        seq(kw("OFFSET"), $.number, optional(choice(kw("ROW"), kw("ROWS")))),
      ),
    fetch_clause: $ =>
      seq(
        kw("FETCH"),
        choice(kw("FIRST"), kw("NEXT")),
        optional($.number),
        choice(kw("ROW"), kw("ROWS")),
        kw("ONLY"),
      ),
    where_clause: $ => seq(kw("WHERE"), $._expression),
    _aliased_expression: $ =>
      seq(
        $._expression,
        optional(kw("AS")),
        $.identifier,
        optional(seq("(", commaSep1($.identifier), ")")),
      ),
    _aliasable_expression: $ =>
      prec.right(choice($._expression, alias($._aliased_expression, $.alias))),
    select_clause_body: $ =>
      commaSep1(
        seq(
          $._aliasable_expression,
          optional(seq(kw("INTO"), field("into", $.identifier))),
        ),
      ),
    select_clause: $ =>
      prec.right(seq(kw("SELECT"), optional($.select_clause_body))),
    from_clause: $ => seq(kw("FROM"), commaSep1($._aliasable_expression)),
    join_type: $ =>
      seq(
        choice(
          kw("INNER"),
          seq(
            choice(kw("LEFT"), kw("RIGHT"), kw("FULL")),
            optional(kw("OUTER")),
          ),
        ),
      ),
    join_clause: $ =>
      seq(
        optional($.join_type),
        kw("JOIN"),
        $._aliasable_expression,
        kw("ON"),
        $._expression,
      ),
    select_subexpression: $ =>
      prec(1, seq(optional(kw("LATERAL")), "(", $.select_statement, ")")),

    // UPDATE
    _update_statement: $ =>
      seq(
        kw("UPDATE"),
        $.identifier,
        $.set_clause,
        optional($.from_clause),
        optional($.where_clause),
      ),
    set_clause: $ => seq(kw("SET"), $.set_clause_body),
    set_clause_body: $ => seq(commaSep1($.assigment_expression)),
    assigment_expression: $ => seq($._identifier, "=", $._expression),

    // INSERT
    _insert_statement: $ =>
      seq(
        kw("INSERT"),
        kw("INTO"),
        $._identifier,
        optional(seq("(", commaSep1($._identifier), ")")),
        choice($.values_clause, $.select_statement, $.set_clause),
      ),
    values_clause: $ =>
      seq(
        kw("VALUES"),
        commaSep1($.values_clause_item),
        optional($.order_by_clause),
        optional($.limit_clause),
        optional($.offset_clause),
        optional($.fetch_clause),
      ),
    values_clause_item: $ => seq("(", commaSep1($._expression), ")"),

    // DELETE
    // TODO: support returning clauses
    _delete_statement: $ =>
      seq(kw("DELETE"), $.from_clause, optional($.where_clause)),

    conditional_expression: $ =>
      seq(
        kw("CASE"),
        repeat1(seq(kw("WHEN"), $._expression, kw("THEN"), $._expression)),
        optional(seq(kw("ELSE"), $._expression)),
        kw("END"),
      ),

    in_expression: $ =>
      prec.left(
        PREC.comparative,
        seq($._expression, optional(kw("NOT")), kw("IN"), $.tuple),
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
        kw("REFERENCES"),
        $._identifier,
        optional(seq("(", commaSep1($.identifier), ")")),
        // seems like a case for https://github.com/tree-sitter/tree-sitter/issues/130
        repeat(choice($.on_update_action, $.on_delete_action)),
      ),
    on_update_action: $ =>
      seq(kw("ON UPDATE"), field("action", $._constraint_action)),
    on_delete_action: $ =>
      seq(kw("ON DELETE"), field("action", $._constraint_action)),
    _constraint_action: $ =>
      choice(kw("RESTRICT"), kw("CASCADE"), kw("SET NULL")),
    unique_constraint: $ => kw("UNIQUE"),
    null_constraint: $ => seq(optional(kw("NOT")), $.NULL),
    check_constraint: $ => seq(kw("CHECK"), $._expression),
    _constraint: $ =>
      seq(
        choice($.null_constraint, $.check_constraint),
        optional($.check_constraint),
      ),
    function_call: $ =>
      seq(
        optional(kw("LATERAL")),
        field("function", $._identifier),
        "(",
        optional(field("arguments", $._function_call_arguments)),
        ")",
        optional($.within_group_clause),
        optional($.filter_clause),
        optional($.over_clause),
      ),
    _function_call_arguments: $ =>
      seq(
        optional(choice(kw("ALL"), kw("DISTINCT"))),
        commaSep1($._expression),
        optional($.order_by_clause),
      ),
    within_group_clause: $ =>
      seq(kw("WITHIN GROUP"), "(", $.order_by_clause, ")"),
    filter_clause: $ => seq(kw("FILTER"), "(", $.where_clause, ")"),
    over_clause: $ =>
      seq(kw("OVER"), choice($.identifier, $.window_definition)),
    window_definition: $ =>
      seq(
        "(",
        optional($.partition_by_clause),
        optional($.order_by_clause),
        optional($.frame_clause),
        ")",
      ),
    partition_by_clause: $ => seq(kw("PARTITION BY"), commaSep1($._expression)),
    frame_clause: $ =>
      choice(
        seq(
          $.frame_kind,
          field("frame_start", $.frame_bound),
          optional($.frame_exclusion),
        ),
        seq(
          $.frame_kind,
          kw("BETWEEN"),
          field("frame_start", $.frame_bound),
          kw("AND"),
          field("frame_end", $.frame_bound),
          optional($.frame_exclusion),
        ),
      ),
    frame_kind: $ => choice(kw("RANGE"), kw("ROWS"), kw("GROUPS")),
    frame_bound: $ =>
      choice(
        kw("UNBOUNDED PRECEDING"),
        seq($._expression, kw("PRECEDING")),
        kw("CURRENT ROW"),
        seq($._expression, kw("FOLLOWING")),
        kw("UNBOUNDED FOLLOWING"),
      ),
    frame_exclusion: $ =>
      choice(
        kw("EXCLUDE CURRENT ROW"),
        kw("EXCLUDE GROUP"),
        kw("EXCLUDE TIES"),
        kw("EXCLUDE NO OTHERS"),
      ),

    _parenthesized_expression: $ =>
      prec.left(PREC.unary, seq("(", $._expression, ")")),
    is_expression: $ =>
      prec.left(
        PREC.comparative,
        seq(
          $._expression,
          kw("IS"),
          optional(kw("NOT")),
          choice($.NULL, $.TRUE, $.FALSE, $.distinct_from),
        ),
      ),
    distinct_from: $ => prec.left(seq(kw("DISTINCT FROM"), $._expression)),
    boolean_expression: $ =>
      choice(
        prec.left(PREC.unary, seq(kw("NOT"), $._expression)),
        prec.left(PREC.and, seq($._expression, kw("AND"), $._expression)),
        prec.left(PREC.or, seq($._expression, kw("OR"), $._expression)),
      ),
    at_time_zone_expression: $ =>
      prec.left(
        PREC.primary,
        seq($._expression, kw("AT TIME ZONE"), $._expression),
      ),
    NULL: $ => kw("NULL"),
    TRUE: $ => kw("TRUE"),
    FALSE: $ => kw("FALSE"),

    number: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        seq(
          choice(
            seq(digits, ".", optional(digits), optional(exponent)),
            seq(optional(digits), ".", digits, optional(exponent)),
            seq(digits, exponent),
            seq(digits),
          ),
        ),
      );
    },

    _unquoted_identifier: $ => /[a-zA-Z0-9_]+/,
    _quoted_identifier: $ =>
      choice(
        seq("`", field("name", /[^`]*/), "`"), // MySQL style quoting
        seq('"', field("name", /(""|[^"])*/), '"'), // ANSI QUOTES
      ),
    identifier: $ => choice($._unquoted_identifier, $._quoted_identifier),
    dotted_name: $ => prec.left(PREC.primary, sep2($.identifier, ".")),
    _identifier: $ => choice($.identifier, $.dotted_name),
    string: $ =>
      choice(
        seq("'", field("content", alias(/(''|[^'])*/, $.content)), "'"),
        seq(
          $._dollar_quoted_string_tag,
          field("content", alias($._dollar_quoted_string_content, $.content)),
          $._dollar_quoted_string_end_tag,
        ),
      ),
    json_access: $ =>
      seq(
        $._expression,
        choice("->", "->>", "#>", "#>>"),
        choice($.string, $.number),
      ),
    ordered_expression: $ =>
      seq($._expression, field("order", choice(kw("ASC"), kw("DESC")))),
    type: $ =>
      prec.right(
        seq(
          $._identifier,
          optional(kw("VARYING")), // CHARACTER/BIT VARYING
          optional(kw("PRECISION")), // DOUBLE PRECISION
          optional(seq("(", commaSep1($.number), ")")),
          optional(seq(choice(kw("WITH"), kw("WITHOUT")), kw("TIME ZONE"))), // TIME/TIMESTAMP (n) WITH/WITHOUT TIME ZONE
        ),
      ),
    array_type: $ =>
      prec.right(seq($._type, repeat1(seq("[", optional($.number), "]")))),
    _type: $ => choice($.type, $.array_type),
    type_cast: $ =>
      seq(
        // TODO: should be moved to basic expression or something
        choice(
          $._parenthesized_expression,
          $.string,
          $._identifier,
          $.function_call,
        ),
        "::",
        field("type", $._type),
      ),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ =>
      token(
        choice(seq("--", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
    array_element_access: $ =>
      seq(choice($.identifier, $.argument_reference), "[", $._expression, "]"),

    unary_expression: $ =>
      prec(
        PREC.unary,
        seq(
          field(
            "operator",
            choice(
              "+",
              "-",
              "!!", // Factorial op (Removed in Postgres >= 14)
              "~", // Bitwise not
              "@", // Absolute value
              "|/", // square root
              "||/", // cube root
            ),
          ),
          field("operand", $._expression),
        ),
      ),

    binary_expression: $ => {
      const table = [
        [PREC.exp, "^"],
        [PREC.multiplicative, choice(...multiplicative_operators)],
        [PREC.additive, choice(...additive_operators)],
        [PREC.comparative, choice(...comparative_operators)],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression),
            ),
          ),
        ),
      );
    },

    binary_operator: $ => choice("=", "&&", "||"),
    asterisk_expression: $ => choice("*", seq($._identifier, ".*")),
    interval_expression: $ => seq(token(prec(1, kw("INTERVAL"))), $.string),
    argument_reference: $ => seq("$", /\d+/),
    _expression: $ =>
      choice(
        $.interval_expression,
        $.function_call,
        $.string,
        $.json_access,
        $.TRUE,
        $.FALSE,
        $.NULL,
        $.asterisk_expression,
        $._identifier,
        $.number,
        $.in_expression,
        $.is_expression,
        $.boolean_expression,
        $._parenthesized_expression,
        $.type_cast,
        $.unary_expression,
        $.binary_expression,
        $.conditional_expression,
        $.array_element_access,
        $.argument_reference,
        $.select_subexpression,
        $.at_time_zone_expression,
      ),
  },
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function commaSep(rule) {
  return optional(sep1(rule, ","));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep2(rule, separator) {
  return seq(rule, repeat1(seq(separator, rule)));
}
