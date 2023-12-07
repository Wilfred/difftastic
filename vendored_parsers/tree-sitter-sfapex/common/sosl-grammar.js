const { ci, commaJoined1, dialects } = require("./common");

module.exports = function defineGrammar(dialect) {
  const soqlGrammar = require("./soql-grammar")(dialect);
  return {
    /*
    RESOURCES
    https://github.com/forcedotcom/apex-tmLanguage
    https://developer.salesforce.com/docs/atlas.en-us.238.0.soql_sosl.meta/soql_sosl/sforce_api_calls_soql_sosl_intro.htm
    */

    conflicts: soqlGrammar.conflicts,

    rules: {
      _query_expression: ($) => $.sosl_query_body,

      sosl_query_body: ($) =>
        seq(
          $.find_clause,
          optional($.in_clause),
          optional(repeat($.returning_clause)),
          optional(repeat(alias($.sosl_with_clause, $.with_clause))),
          optional($.limit_clause),
          optional($.offset_clause),
          optional($.update_clause)
        ),
      // FIND
      find_clause: ($) =>
        seq(
          ci("FIND"),
          choice(
            $.bound_apex_expression,
            seq($.term_separator_start, $.term, $.term_separator_end)
          )
        ),

      in_clause: ($) => seq(ci("IN"), $.in_type, ci("FIELDS")),
      in_type: ($) =>
        choice(ci("ALL"), ci("EMAIL"), ci("NAME"), ci("PHONE"), ci("SIDEBAR")),

      term_separator_start: ($) => (dialect == dialects.SOSL ? "{" : "'"),
      term_separator_end: ($) => (dialect == dialects.SOSL ? "}" : "'"),
      term: ($) => (dialect == dialects.SOSL ? /(\\\}|[^}])+/ : /(\\\'|[^'])+/),

      returning_clause: ($) =>
        seq(ci("RETURNING"), commaJoined1($.sobject_return)),

      sobject_return: ($) =>
        seq(
          $.identifier,
          optional(
            seq(
              "(",
              $.selected_fields,
              optional($.using_clause),
              optional($.where_clause),
              optional($.order_by_clause),
              optional($.limit_clause),
              optional($.offset_clause),
              ")"
            )
          )
        ),

      selected_fields: ($) => commaJoined1($._selectable_expression),

      _selectable_expression: ($) =>
        choice($._value_expression, $.alias_expression, $.fields_expression),

      using_clause: ($) => seq(ci("USING"), ci("ListView"), "=", $.identifier),

      subquery: ($) => seq("(", $.sosl_query_body, ")"),

      with_division_expression: ($) =>
        seq(
          ci("DIVISION"),
          "=",
          choice($.bound_apex_expression, $.string_literal)
        ),
      with_highlight: ($) => ci("HIGHLIGHT"),
      with_metadata_expression: ($) =>
        seq(ci("METADATA"), "=", $.string_literal),
      with_network_expression: ($) => seq(ci("NETWORK"), $._comparison),
      with_pricebook_expression: ($) =>
        seq(ci("PricebookId"), "=", $.string_literal),
      with_snippet_expression: ($) =>
        seq(
          ci("SNIPPET"),
          optional(seq("(", ci("target_length"), "=", $.int, ")"))
        ),
      with_spell_correction_expression: ($) =>
        seq(ci("SPELL_CORRECTION"), "=", $.boolean),

      sosl_with_type: ($) =>
        choice(
          $.with_data_cat_expression,
          $.with_division_expression,
          $.with_highlight,
          $.with_metadata_expression,
          $.with_network_expression,
          $.with_pricebook_expression,
          $.with_snippet_expression,
          $.with_spell_correction_expression
        ),

      sosl_with_clause: ($) =>
        seq(ci("WITH"), alias($.sosl_with_type, $.with_type)),

      ...soqlGrammar.rules,
    },
  };
};
