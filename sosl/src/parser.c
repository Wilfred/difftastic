#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 504
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 271
#define ALIAS_COUNT 2
#define TOKEN_COUNT 159
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_header_comment_token1 = 2,
  anon_sym_SLASH_SLASH_SLASH = 3,
  aux_sym_find_clause_token1 = 4,
  aux_sym_in_clause_token1 = 5,
  aux_sym_in_clause_token2 = 6,
  aux_sym_in_type_token1 = 7,
  aux_sym_in_type_token2 = 8,
  aux_sym_in_type_token3 = 9,
  aux_sym_in_type_token4 = 10,
  aux_sym_in_type_token5 = 11,
  sym_term_separator_start = 12,
  sym_term_separator_end = 13,
  sym_term = 14,
  aux_sym_returning_clause_token1 = 15,
  anon_sym_COMMA = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  aux_sym_using_clause_token1 = 19,
  aux_sym_using_clause_token2 = 20,
  anon_sym_EQ = 21,
  aux_sym_with_division_expression_token1 = 22,
  aux_sym_with_highlight_token1 = 23,
  aux_sym_with_metadata_expression_token1 = 24,
  aux_sym_with_network_expression_token1 = 25,
  aux_sym_with_pricebook_expression_token1 = 26,
  aux_sym_with_snippet_expression_token1 = 27,
  aux_sym_with_snippet_expression_token2 = 28,
  aux_sym_with_spell_correction_expression_token1 = 29,
  aux_sym_sosl_with_clause_token1 = 30,
  aux_sym_count_expression_token1 = 31,
  aux_sym_select_clause_token1 = 32,
  aux_sym_soql_using_clause_token1 = 33,
  aux_sym_using_scope_type_token1 = 34,
  aux_sym_using_scope_type_token2 = 35,
  aux_sym_using_scope_type_token3 = 36,
  aux_sym_using_scope_type_token4 = 37,
  aux_sym_using_scope_type_token5 = 38,
  aux_sym_using_scope_type_token6 = 39,
  aux_sym_using_scope_type_token7 = 40,
  aux_sym_type_of_clause_token1 = 41,
  aux_sym_type_of_clause_token2 = 42,
  aux_sym_when_expression_token1 = 43,
  aux_sym_when_expression_token2 = 44,
  aux_sym_else_expression_token1 = 45,
  aux_sym_group_by_clause_token1 = 46,
  aux_sym_group_by_clause_token2 = 47,
  aux_sym__group_by_expression_token1 = 48,
  aux_sym__group_by_expression_token2 = 49,
  aux_sym_for_clause_token1 = 50,
  aux_sym_for_type_token1 = 51,
  aux_sym_for_type_token2 = 52,
  aux_sym_for_type_token3 = 53,
  aux_sym_having_clause_token1 = 54,
  aux_sym_having_and_expression_token1 = 55,
  aux_sym_having_or_expression_token1 = 56,
  aux_sym_having_not_expression_token1 = 57,
  aux_sym_from_clause_token1 = 58,
  aux_sym_storage_alias_token1 = 59,
  aux_sym_fields_type_token1 = 60,
  aux_sym_fields_type_token2 = 61,
  aux_sym_where_clause_token1 = 62,
  aux_sym_soql_with_type_token1 = 63,
  aux_sym_soql_with_type_token2 = 64,
  aux_sym_soql_with_type_token3 = 65,
  aux_sym_with_user_id_type_token1 = 66,
  aux_sym_with_record_visibility_expression_token1 = 67,
  aux_sym_with_record_visibility_param_token1 = 68,
  aux_sym_with_record_visibility_param_token2 = 69,
  aux_sym_with_record_visibility_param_token3 = 70,
  aux_sym_with_data_cat_expression_token1 = 71,
  aux_sym_with_data_cat_expression_token2 = 72,
  aux_sym_with_data_cat_filter_type_token1 = 73,
  aux_sym_with_data_cat_filter_type_token2 = 74,
  aux_sym_with_data_cat_filter_type_token3 = 75,
  aux_sym_with_data_cat_filter_type_token4 = 76,
  aux_sym_limit_clause_token1 = 77,
  aux_sym_offset_clause_token1 = 78,
  aux_sym_update_type_token1 = 79,
  aux_sym_update_type_token2 = 80,
  aux_sym_order_by_clause_token1 = 81,
  aux_sym_order_direction_token1 = 82,
  aux_sym_order_direction_token2 = 83,
  aux_sym_order_null_direciton_token1 = 84,
  aux_sym_order_null_direciton_token2 = 85,
  aux_sym_order_null_direciton_token3 = 86,
  aux_sym_geo_location_type_token1 = 87,
  aux_sym_function_expression_token1 = 88,
  anon_sym_DOT = 89,
  aux_sym_all_rows_clause_token1 = 90,
  aux_sym_boolean_token1 = 91,
  aux_sym_boolean_token2 = 92,
  anon_sym_BANG_EQ = 93,
  anon_sym_LT_GT = 94,
  anon_sym_LT = 95,
  anon_sym_LT_EQ = 96,
  anon_sym_GT = 97,
  anon_sym_GT_EQ = 98,
  aux_sym_value_comparison_operator_token1 = 99,
  aux_sym_set_comparison_operator_token1 = 100,
  aux_sym_set_comparison_operator_token2 = 101,
  aux_sym_date_literal_token1 = 102,
  aux_sym_date_literal_token2 = 103,
  aux_sym_date_literal_token3 = 104,
  aux_sym_date_literal_token4 = 105,
  aux_sym_date_literal_token5 = 106,
  aux_sym_date_literal_token6 = 107,
  aux_sym_date_literal_token7 = 108,
  aux_sym_date_literal_token8 = 109,
  aux_sym_date_literal_token9 = 110,
  aux_sym_date_literal_token10 = 111,
  aux_sym_date_literal_token11 = 112,
  aux_sym_date_literal_token12 = 113,
  aux_sym_date_literal_token13 = 114,
  aux_sym_date_literal_token14 = 115,
  aux_sym_date_literal_token15 = 116,
  aux_sym_date_literal_token16 = 117,
  aux_sym_date_literal_token17 = 118,
  aux_sym_date_literal_token18 = 119,
  aux_sym_date_literal_token19 = 120,
  aux_sym_date_literal_token20 = 121,
  aux_sym_date_literal_token21 = 122,
  aux_sym_date_literal_token22 = 123,
  aux_sym_date_literal_token23 = 124,
  aux_sym_date_literal_with_param_token1 = 125,
  anon_sym_COLON = 126,
  aux_sym_function_name_token1 = 127,
  aux_sym_function_name_token2 = 128,
  aux_sym_function_name_token3 = 129,
  aux_sym_function_name_token4 = 130,
  aux_sym_function_name_token5 = 131,
  aux_sym_function_name_token6 = 132,
  aux_sym_function_name_token7 = 133,
  aux_sym_function_name_token8 = 134,
  aux_sym_function_name_token9 = 135,
  aux_sym_function_name_token10 = 136,
  aux_sym_function_name_token11 = 137,
  aux_sym_function_name_token12 = 138,
  aux_sym_function_name_token13 = 139,
  aux_sym_function_name_token14 = 140,
  aux_sym_function_name_token15 = 141,
  aux_sym_function_name_token16 = 142,
  aux_sym_function_name_token17 = 143,
  aux_sym_function_name_token18 = 144,
  aux_sym_function_name_token19 = 145,
  aux_sym_function_name_token20 = 146,
  aux_sym_function_name_token21 = 147,
  aux_sym_function_name_token22 = 148,
  anon_sym_QMARK = 149,
  sym_bound_apex_expression = 150,
  aux_sym_null_literal_token1 = 151,
  sym_string_literal = 152,
  sym_int = 153,
  sym_decimal = 154,
  sym_date = 155,
  sym_date_time = 156,
  sym_currency_literal = 157,
  sym_identifier = 158,
  sym_source_file = 159,
  sym_header_comment = 160,
  sym_formatting_comment = 161,
  sym__query_expression = 162,
  sym_sosl_query_body = 163,
  sym_find_clause = 164,
  sym_in_clause = 165,
  sym_in_type = 166,
  sym_returning_clause = 167,
  sym_sobject_return = 168,
  sym_selected_fields = 169,
  sym__selectable_expression = 170,
  sym_using_clause = 171,
  sym_subquery = 172,
  sym_with_division_expression = 173,
  sym_with_highlight = 174,
  sym_with_metadata_expression = 175,
  sym_with_network_expression = 176,
  sym_with_pricebook_expression = 177,
  sym_with_snippet_expression = 178,
  sym_with_spell_correction_expression = 179,
  sym_sosl_with_type = 180,
  sym_sosl_with_clause = 181,
  sym_soql_query_body = 182,
  sym_count_expression = 183,
  sym_select_clause = 184,
  sym_soql_using_clause = 185,
  sym_using_scope_type = 186,
  sym_type_of_clause = 187,
  sym_when_expression = 188,
  sym_else_expression = 189,
  sym_group_by_clause = 190,
  sym__group_by_expression = 191,
  sym_for_clause = 192,
  sym_for_type = 193,
  sym_having_clause = 194,
  sym__having_boolean_expression = 195,
  sym_having_and_expression = 196,
  sym_having_or_expression = 197,
  sym_having_not_expression = 198,
  sym__having_condition_expression = 199,
  sym_having_comparison_expression = 200,
  sym__having_comparison = 201,
  sym__having_value_comparison = 202,
  sym__having_set_comparison = 203,
  sym_from_clause = 204,
  sym_storage_identifier = 205,
  sym_storage_alias = 206,
  sym_fields_expression = 207,
  sym_fields_type = 208,
  sym_where_clause = 209,
  sym__boolean_expression = 210,
  sym_and_expression = 211,
  sym_or_expression = 212,
  sym_not_expression = 213,
  sym__condition_expression = 214,
  sym_comparison_expression = 215,
  sym__comparison = 216,
  sym__value_comparison = 217,
  sym__set_comparison = 218,
  sym_soql_with_clause = 219,
  sym_soql_with_type = 220,
  sym_with_user_id_type = 221,
  sym_with_record_visibility_expression = 222,
  sym_with_record_visibility_param = 223,
  sym_with_data_cat_expression = 224,
  sym_with_data_cat_filter = 225,
  sym_with_data_cat_filter_type = 226,
  sym_limit_clause = 227,
  sym_offset_clause = 228,
  sym_update_clause = 229,
  sym_update_type = 230,
  sym_alias_expression = 231,
  sym_order_by_clause = 232,
  sym_order_expression = 233,
  sym_order_direction = 234,
  sym_order_null_direciton = 235,
  sym_geo_location_type = 236,
  sym__value_expression = 237,
  sym_function_expression = 238,
  sym_dotted_identifier = 239,
  sym_field_identifier = 240,
  sym_field_list = 241,
  sym_boolean = 242,
  sym_value_comparison_operator = 243,
  sym_set_comparison_operator = 244,
  sym_date_literal = 245,
  sym_date_literal_with_param = 246,
  sym_function_name = 247,
  sym_null_literal = 248,
  sym__soql_literal = 249,
  aux_sym_sosl_query_body_repeat1 = 250,
  aux_sym_sosl_query_body_repeat2 = 251,
  aux_sym_returning_clause_repeat1 = 252,
  aux_sym_selected_fields_repeat1 = 253,
  aux_sym_type_of_clause_repeat1 = 254,
  aux_sym__group_by_expression_repeat1 = 255,
  aux_sym__group_by_expression_repeat2 = 256,
  aux_sym_for_clause_repeat1 = 257,
  aux_sym_having_and_expression_repeat1 = 258,
  aux_sym_having_or_expression_repeat1 = 259,
  aux_sym__having_set_comparison_repeat1 = 260,
  aux_sym_from_clause_repeat1 = 261,
  aux_sym_and_expression_repeat1 = 262,
  aux_sym_or_expression_repeat1 = 263,
  aux_sym_with_record_visibility_expression_repeat1 = 264,
  aux_sym_with_data_cat_expression_repeat1 = 265,
  aux_sym_with_data_cat_filter_repeat1 = 266,
  aux_sym_update_clause_repeat1 = 267,
  aux_sym_order_by_clause_repeat1 = 268,
  aux_sym_dotted_identifier_repeat1 = 269,
  aux_sym_field_list_repeat1 = 270,
  anon_alias_sym_COUNT = 271,
  anon_alias_sym_NOT_IN = 272,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_header_comment_token1] = "header_comment_token1",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [aux_sym_find_clause_token1] = "FIND",
  [aux_sym_in_clause_token1] = "IN",
  [aux_sym_in_clause_token2] = "FIELDS",
  [aux_sym_in_type_token1] = "ALL",
  [aux_sym_in_type_token2] = "EMAIL",
  [aux_sym_in_type_token3] = "NAME",
  [aux_sym_in_type_token4] = "PHONE",
  [aux_sym_in_type_token5] = "SIDEBAR",
  [sym_term_separator_start] = "term_separator_start",
  [sym_term_separator_end] = "term_separator_end",
  [sym_term] = "term",
  [aux_sym_returning_clause_token1] = "RETURNING",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_using_clause_token1] = "USING",
  [aux_sym_using_clause_token2] = "ListView",
  [anon_sym_EQ] = "=",
  [aux_sym_with_division_expression_token1] = "DIVISION",
  [aux_sym_with_highlight_token1] = "HIGHLIGHT",
  [aux_sym_with_metadata_expression_token1] = "METADATA",
  [aux_sym_with_network_expression_token1] = "NETWORK",
  [aux_sym_with_pricebook_expression_token1] = "PricebookId",
  [aux_sym_with_snippet_expression_token1] = "SNIPPET",
  [aux_sym_with_snippet_expression_token2] = "target_length",
  [aux_sym_with_spell_correction_expression_token1] = "SPELL_CORRECTION",
  [aux_sym_sosl_with_clause_token1] = "WITH",
  [aux_sym_count_expression_token1] = "function_name",
  [aux_sym_select_clause_token1] = "SELECT",
  [aux_sym_soql_using_clause_token1] = "USING_SCOPE",
  [aux_sym_using_scope_type_token1] = "delegated",
  [aux_sym_using_scope_type_token2] = "everything",
  [aux_sym_using_scope_type_token3] = "mine",
  [aux_sym_using_scope_type_token4] = "mine_and_my_groups",
  [aux_sym_using_scope_type_token5] = "my_territory",
  [aux_sym_using_scope_type_token6] = "my_team_territory",
  [aux_sym_using_scope_type_token7] = "team",
  [aux_sym_type_of_clause_token1] = "TYPEOF",
  [aux_sym_type_of_clause_token2] = "END",
  [aux_sym_when_expression_token1] = "WHEN",
  [aux_sym_when_expression_token2] = "THEN",
  [aux_sym_else_expression_token1] = "ELSE",
  [aux_sym_group_by_clause_token1] = "GROUP_BY",
  [aux_sym_group_by_clause_token2] = "GROUP_BY",
  [aux_sym__group_by_expression_token1] = "function_name",
  [aux_sym__group_by_expression_token2] = "function_name",
  [aux_sym_for_clause_token1] = "FOR",
  [aux_sym_for_type_token1] = "UPDATE",
  [aux_sym_for_type_token2] = "REFERENCE",
  [aux_sym_for_type_token3] = "VIEW",
  [aux_sym_having_clause_token1] = "HAVING",
  [aux_sym_having_and_expression_token1] = "AND",
  [aux_sym_having_or_expression_token1] = "OR",
  [aux_sym_having_not_expression_token1] = "NOT",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_storage_alias_token1] = "AS",
  [aux_sym_fields_type_token1] = "CUSTOM",
  [aux_sym_fields_type_token2] = "STANDARD",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_soql_with_type_token1] = "Security_Enforced",
  [aux_sym_soql_with_type_token2] = "User_Mode",
  [aux_sym_soql_with_type_token3] = "System_Mode",
  [aux_sym_with_user_id_type_token1] = "UserId",
  [aux_sym_with_record_visibility_expression_token1] = "RecordVisibilityContext",
  [aux_sym_with_record_visibility_param_token1] = "maxDescriptorPerRecord",
  [aux_sym_with_record_visibility_param_token2] = "supportsDomains",
  [aux_sym_with_record_visibility_param_token3] = "supportsDelegates",
  [aux_sym_with_data_cat_expression_token1] = "DATA_CATEGORY",
  [aux_sym_with_data_cat_expression_token2] = "DATA_CATEGORY",
  [aux_sym_with_data_cat_filter_type_token1] = "AT",
  [aux_sym_with_data_cat_filter_type_token2] = "ABOVE",
  [aux_sym_with_data_cat_filter_type_token3] = "BELOW",
  [aux_sym_with_data_cat_filter_type_token4] = "ABOVE_OR_BELOW",
  [aux_sym_limit_clause_token1] = "LIMIT",
  [aux_sym_offset_clause_token1] = "OFFSET",
  [aux_sym_update_type_token1] = "TRACKING",
  [aux_sym_update_type_token2] = "VIEWSTAT",
  [aux_sym_order_by_clause_token1] = "ORDER_BY",
  [aux_sym_order_direction_token1] = "ASC",
  [aux_sym_order_direction_token2] = "DESC",
  [aux_sym_order_null_direciton_token1] = "NULLS_FIRST",
  [aux_sym_order_null_direciton_token2] = "NULLS_FIRST",
  [aux_sym_order_null_direciton_token3] = "NULLS_LAST",
  [aux_sym_geo_location_type_token1] = "function_name",
  [aux_sym_function_expression_token1] = "function_name",
  [anon_sym_DOT] = ".",
  [aux_sym_all_rows_clause_token1] = "ALL_ROWS",
  [aux_sym_boolean_token1] = "TRUE",
  [aux_sym_boolean_token2] = "FALSE",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_value_comparison_operator_token1] = "LIKE",
  [aux_sym_set_comparison_operator_token1] = "INCLUDES",
  [aux_sym_set_comparison_operator_token2] = "EXCLUDES",
  [aux_sym_date_literal_token1] = "YESTERDAY",
  [aux_sym_date_literal_token2] = "TODAY",
  [aux_sym_date_literal_token3] = "TOMORROW",
  [aux_sym_date_literal_token4] = "LAST_WEEK",
  [aux_sym_date_literal_token5] = "THIS_WEEK",
  [aux_sym_date_literal_token6] = "NEXT_WEEK",
  [aux_sym_date_literal_token7] = "LAST_MONTH",
  [aux_sym_date_literal_token8] = "THIS_MONTH",
  [aux_sym_date_literal_token9] = "NEXT_MONTH",
  [aux_sym_date_literal_token10] = "LAST_90_DAYS",
  [aux_sym_date_literal_token11] = "NEXT_90_DAYS",
  [aux_sym_date_literal_token12] = "THIS_QUARTER",
  [aux_sym_date_literal_token13] = "LAST_QUARTER",
  [aux_sym_date_literal_token14] = "NEXT_QUARTER",
  [aux_sym_date_literal_token15] = "THIS_YEAR",
  [aux_sym_date_literal_token16] = "LAST_YEAR",
  [aux_sym_date_literal_token17] = "NEXT_YEAR",
  [aux_sym_date_literal_token18] = "THIS_FISCAL_QUARTER",
  [aux_sym_date_literal_token19] = "LAST_FISCAL_QUARTER",
  [aux_sym_date_literal_token20] = "NEXT_FISCAL_QUARTER",
  [aux_sym_date_literal_token21] = "THIS_FISCAL_YEAR",
  [aux_sym_date_literal_token22] = "LAST_FISCAL_YEAR",
  [aux_sym_date_literal_token23] = "NEXT_FISCAL_YEAR",
  [aux_sym_date_literal_with_param_token1] = "date_literal",
  [anon_sym_COLON] = ":",
  [aux_sym_function_name_token1] = "AVG",
  [aux_sym_function_name_token2] = "COUNT_DISTINCT",
  [aux_sym_function_name_token3] = "MIN",
  [aux_sym_function_name_token4] = "MAX",
  [aux_sym_function_name_token5] = "SUM",
  [aux_sym_function_name_token6] = "GROUPING",
  [aux_sym_function_name_token7] = "FORMAT",
  [aux_sym_function_name_token8] = "convertCurrency",
  [aux_sym_function_name_token9] = "toLabel",
  [aux_sym_function_name_token10] = "CALENDAR_MONTH",
  [aux_sym_function_name_token11] = "CALENDAR_QUARTER",
  [aux_sym_function_name_token12] = "CALENDAR_YEAR",
  [aux_sym_function_name_token13] = "DAY_IN_MONTH",
  [aux_sym_function_name_token14] = "DAY_IN_WEEK",
  [aux_sym_function_name_token15] = "DAY_IN_YEAR",
  [aux_sym_function_name_token16] = "DAY_ONLY",
  [aux_sym_function_name_token17] = "FISCAL_MONTH",
  [aux_sym_function_name_token18] = "FISCAL_QUARTER",
  [aux_sym_function_name_token19] = "FISCAL_YEAR",
  [aux_sym_function_name_token20] = "HOUR_IN_DAY",
  [aux_sym_function_name_token21] = "WEEK_IN_MONTH",
  [aux_sym_function_name_token22] = "WEEK_IN_YEAR",
  [anon_sym_QMARK] = "\?",
  [sym_bound_apex_expression] = "bound_apex_expression",
  [aux_sym_null_literal_token1] = "NULL",
  [sym_string_literal] = "string_literal",
  [sym_int] = "int",
  [sym_decimal] = "decimal",
  [sym_date] = "date",
  [sym_date_time] = "date_time",
  [sym_currency_literal] = "currency_literal",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_header_comment] = "header_comment",
  [sym_formatting_comment] = "formatting_comment",
  [sym__query_expression] = "_query_expression",
  [sym_sosl_query_body] = "sosl_query_body",
  [sym_find_clause] = "find_clause",
  [sym_in_clause] = "in_clause",
  [sym_in_type] = "in_type",
  [sym_returning_clause] = "returning_clause",
  [sym_sobject_return] = "sobject_return",
  [sym_selected_fields] = "selected_fields",
  [sym__selectable_expression] = "_selectable_expression",
  [sym_using_clause] = "using_clause",
  [sym_subquery] = "subquery",
  [sym_with_division_expression] = "with_division_expression",
  [sym_with_highlight] = "with_highlight",
  [sym_with_metadata_expression] = "with_metadata_expression",
  [sym_with_network_expression] = "with_network_expression",
  [sym_with_pricebook_expression] = "with_pricebook_expression",
  [sym_with_snippet_expression] = "with_snippet_expression",
  [sym_with_spell_correction_expression] = "with_spell_correction_expression",
  [sym_sosl_with_type] = "with_type",
  [sym_sosl_with_clause] = "with_clause",
  [sym_soql_query_body] = "soql_query_body",
  [sym_count_expression] = "count_expression",
  [sym_select_clause] = "select_clause",
  [sym_soql_using_clause] = "using_clause",
  [sym_using_scope_type] = "using_scope_type",
  [sym_type_of_clause] = "type_of_clause",
  [sym_when_expression] = "when_expression",
  [sym_else_expression] = "else_expression",
  [sym_group_by_clause] = "group_by_clause",
  [sym__group_by_expression] = "_group_by_expression",
  [sym_for_clause] = "for_clause",
  [sym_for_type] = "for_type",
  [sym_having_clause] = "having_clause",
  [sym__having_boolean_expression] = "_having_boolean_expression",
  [sym_having_and_expression] = "having_and_expression",
  [sym_having_or_expression] = "having_or_expression",
  [sym_having_not_expression] = "having_not_expression",
  [sym__having_condition_expression] = "_having_condition_expression",
  [sym_having_comparison_expression] = "having_comparison_expression",
  [sym__having_comparison] = "_having_comparison",
  [sym__having_value_comparison] = "_having_value_comparison",
  [sym__having_set_comparison] = "_having_set_comparison",
  [sym_from_clause] = "from_clause",
  [sym_storage_identifier] = "storage_identifier",
  [sym_storage_alias] = "storage_alias",
  [sym_fields_expression] = "fields_expression",
  [sym_fields_type] = "fields_type",
  [sym_where_clause] = "where_clause",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_and_expression] = "and_expression",
  [sym_or_expression] = "or_expression",
  [sym_not_expression] = "not_expression",
  [sym__condition_expression] = "_condition_expression",
  [sym_comparison_expression] = "comparison_expression",
  [sym__comparison] = "_comparison",
  [sym__value_comparison] = "_value_comparison",
  [sym__set_comparison] = "_set_comparison",
  [sym_soql_with_clause] = "with_clause",
  [sym_soql_with_type] = "with_type",
  [sym_with_user_id_type] = "with_user_id_type",
  [sym_with_record_visibility_expression] = "with_record_visibility_expression",
  [sym_with_record_visibility_param] = "with_record_visibility_param",
  [sym_with_data_cat_expression] = "with_data_cat_expression",
  [sym_with_data_cat_filter] = "with_data_cat_filter",
  [sym_with_data_cat_filter_type] = "with_data_cat_filter_type",
  [sym_limit_clause] = "limit_clause",
  [sym_offset_clause] = "offset_clause",
  [sym_update_clause] = "update_clause",
  [sym_update_type] = "update_type",
  [sym_alias_expression] = "alias_expression",
  [sym_order_by_clause] = "order_by_clause",
  [sym_order_expression] = "order_expression",
  [sym_order_direction] = "order_direction",
  [sym_order_null_direciton] = "order_null_direciton",
  [sym_geo_location_type] = "geo_location_type",
  [sym__value_expression] = "_value_expression",
  [sym_function_expression] = "function_expression",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_field_identifier] = "field_identifier",
  [sym_field_list] = "field_list",
  [sym_boolean] = "boolean",
  [sym_value_comparison_operator] = "value_comparison_operator",
  [sym_set_comparison_operator] = "set_comparison_operator",
  [sym_date_literal] = "date_literal",
  [sym_date_literal_with_param] = "date_literal_with_param",
  [sym_function_name] = "function_name",
  [sym_null_literal] = "null_literal",
  [sym__soql_literal] = "_soql_literal",
  [aux_sym_sosl_query_body_repeat1] = "sosl_query_body_repeat1",
  [aux_sym_sosl_query_body_repeat2] = "sosl_query_body_repeat2",
  [aux_sym_returning_clause_repeat1] = "returning_clause_repeat1",
  [aux_sym_selected_fields_repeat1] = "selected_fields_repeat1",
  [aux_sym_type_of_clause_repeat1] = "type_of_clause_repeat1",
  [aux_sym__group_by_expression_repeat1] = "_group_by_expression_repeat1",
  [aux_sym__group_by_expression_repeat2] = "_group_by_expression_repeat2",
  [aux_sym_for_clause_repeat1] = "for_clause_repeat1",
  [aux_sym_having_and_expression_repeat1] = "having_and_expression_repeat1",
  [aux_sym_having_or_expression_repeat1] = "having_or_expression_repeat1",
  [aux_sym__having_set_comparison_repeat1] = "_having_set_comparison_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_and_expression_repeat1] = "and_expression_repeat1",
  [aux_sym_or_expression_repeat1] = "or_expression_repeat1",
  [aux_sym_with_record_visibility_expression_repeat1] = "with_record_visibility_expression_repeat1",
  [aux_sym_with_data_cat_expression_repeat1] = "with_data_cat_expression_repeat1",
  [aux_sym_with_data_cat_filter_repeat1] = "with_data_cat_filter_repeat1",
  [aux_sym_update_clause_repeat1] = "update_clause_repeat1",
  [aux_sym_order_by_clause_repeat1] = "order_by_clause_repeat1",
  [aux_sym_dotted_identifier_repeat1] = "dotted_identifier_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [anon_alias_sym_COUNT] = "COUNT",
  [anon_alias_sym_NOT_IN] = "NOT_IN",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_header_comment_token1] = aux_sym_header_comment_token1,
  [anon_sym_SLASH_SLASH_SLASH] = anon_sym_SLASH_SLASH_SLASH,
  [aux_sym_find_clause_token1] = aux_sym_find_clause_token1,
  [aux_sym_in_clause_token1] = aux_sym_in_clause_token1,
  [aux_sym_in_clause_token2] = aux_sym_in_clause_token2,
  [aux_sym_in_type_token1] = aux_sym_in_type_token1,
  [aux_sym_in_type_token2] = aux_sym_in_type_token2,
  [aux_sym_in_type_token3] = aux_sym_in_type_token3,
  [aux_sym_in_type_token4] = aux_sym_in_type_token4,
  [aux_sym_in_type_token5] = aux_sym_in_type_token5,
  [sym_term_separator_start] = sym_term_separator_start,
  [sym_term_separator_end] = sym_term_separator_end,
  [sym_term] = sym_term,
  [aux_sym_returning_clause_token1] = aux_sym_returning_clause_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_using_clause_token1] = aux_sym_using_clause_token1,
  [aux_sym_using_clause_token2] = aux_sym_using_clause_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_with_division_expression_token1] = aux_sym_with_division_expression_token1,
  [aux_sym_with_highlight_token1] = aux_sym_with_highlight_token1,
  [aux_sym_with_metadata_expression_token1] = aux_sym_with_metadata_expression_token1,
  [aux_sym_with_network_expression_token1] = aux_sym_with_network_expression_token1,
  [aux_sym_with_pricebook_expression_token1] = aux_sym_with_pricebook_expression_token1,
  [aux_sym_with_snippet_expression_token1] = aux_sym_with_snippet_expression_token1,
  [aux_sym_with_snippet_expression_token2] = aux_sym_with_snippet_expression_token2,
  [aux_sym_with_spell_correction_expression_token1] = aux_sym_with_spell_correction_expression_token1,
  [aux_sym_sosl_with_clause_token1] = aux_sym_sosl_with_clause_token1,
  [aux_sym_count_expression_token1] = sym_function_name,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
  [aux_sym_soql_using_clause_token1] = aux_sym_soql_using_clause_token1,
  [aux_sym_using_scope_type_token1] = aux_sym_using_scope_type_token1,
  [aux_sym_using_scope_type_token2] = aux_sym_using_scope_type_token2,
  [aux_sym_using_scope_type_token3] = aux_sym_using_scope_type_token3,
  [aux_sym_using_scope_type_token4] = aux_sym_using_scope_type_token4,
  [aux_sym_using_scope_type_token5] = aux_sym_using_scope_type_token5,
  [aux_sym_using_scope_type_token6] = aux_sym_using_scope_type_token6,
  [aux_sym_using_scope_type_token7] = aux_sym_using_scope_type_token7,
  [aux_sym_type_of_clause_token1] = aux_sym_type_of_clause_token1,
  [aux_sym_type_of_clause_token2] = aux_sym_type_of_clause_token2,
  [aux_sym_when_expression_token1] = aux_sym_when_expression_token1,
  [aux_sym_when_expression_token2] = aux_sym_when_expression_token2,
  [aux_sym_else_expression_token1] = aux_sym_else_expression_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
  [aux_sym_group_by_clause_token2] = aux_sym_group_by_clause_token1,
  [aux_sym__group_by_expression_token1] = sym_function_name,
  [aux_sym__group_by_expression_token2] = sym_function_name,
  [aux_sym_for_clause_token1] = aux_sym_for_clause_token1,
  [aux_sym_for_type_token1] = aux_sym_for_type_token1,
  [aux_sym_for_type_token2] = aux_sym_for_type_token2,
  [aux_sym_for_type_token3] = aux_sym_for_type_token3,
  [aux_sym_having_clause_token1] = aux_sym_having_clause_token1,
  [aux_sym_having_and_expression_token1] = aux_sym_having_and_expression_token1,
  [aux_sym_having_or_expression_token1] = aux_sym_having_or_expression_token1,
  [aux_sym_having_not_expression_token1] = aux_sym_having_not_expression_token1,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_storage_alias_token1] = aux_sym_storage_alias_token1,
  [aux_sym_fields_type_token1] = aux_sym_fields_type_token1,
  [aux_sym_fields_type_token2] = aux_sym_fields_type_token2,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_soql_with_type_token1] = aux_sym_soql_with_type_token1,
  [aux_sym_soql_with_type_token2] = aux_sym_soql_with_type_token2,
  [aux_sym_soql_with_type_token3] = aux_sym_soql_with_type_token3,
  [aux_sym_with_user_id_type_token1] = aux_sym_with_user_id_type_token1,
  [aux_sym_with_record_visibility_expression_token1] = aux_sym_with_record_visibility_expression_token1,
  [aux_sym_with_record_visibility_param_token1] = aux_sym_with_record_visibility_param_token1,
  [aux_sym_with_record_visibility_param_token2] = aux_sym_with_record_visibility_param_token2,
  [aux_sym_with_record_visibility_param_token3] = aux_sym_with_record_visibility_param_token3,
  [aux_sym_with_data_cat_expression_token1] = aux_sym_with_data_cat_expression_token1,
  [aux_sym_with_data_cat_expression_token2] = aux_sym_with_data_cat_expression_token1,
  [aux_sym_with_data_cat_filter_type_token1] = aux_sym_with_data_cat_filter_type_token1,
  [aux_sym_with_data_cat_filter_type_token2] = aux_sym_with_data_cat_filter_type_token2,
  [aux_sym_with_data_cat_filter_type_token3] = aux_sym_with_data_cat_filter_type_token3,
  [aux_sym_with_data_cat_filter_type_token4] = aux_sym_with_data_cat_filter_type_token4,
  [aux_sym_limit_clause_token1] = aux_sym_limit_clause_token1,
  [aux_sym_offset_clause_token1] = aux_sym_offset_clause_token1,
  [aux_sym_update_type_token1] = aux_sym_update_type_token1,
  [aux_sym_update_type_token2] = aux_sym_update_type_token2,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_order_direction_token1] = aux_sym_order_direction_token1,
  [aux_sym_order_direction_token2] = aux_sym_order_direction_token2,
  [aux_sym_order_null_direciton_token1] = aux_sym_order_null_direciton_token1,
  [aux_sym_order_null_direciton_token2] = aux_sym_order_null_direciton_token1,
  [aux_sym_order_null_direciton_token3] = aux_sym_order_null_direciton_token3,
  [aux_sym_geo_location_type_token1] = sym_function_name,
  [aux_sym_function_expression_token1] = sym_function_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_all_rows_clause_token1] = aux_sym_all_rows_clause_token1,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_value_comparison_operator_token1] = aux_sym_value_comparison_operator_token1,
  [aux_sym_set_comparison_operator_token1] = aux_sym_set_comparison_operator_token1,
  [aux_sym_set_comparison_operator_token2] = aux_sym_set_comparison_operator_token2,
  [aux_sym_date_literal_token1] = aux_sym_date_literal_token1,
  [aux_sym_date_literal_token2] = aux_sym_date_literal_token2,
  [aux_sym_date_literal_token3] = aux_sym_date_literal_token3,
  [aux_sym_date_literal_token4] = aux_sym_date_literal_token4,
  [aux_sym_date_literal_token5] = aux_sym_date_literal_token5,
  [aux_sym_date_literal_token6] = aux_sym_date_literal_token6,
  [aux_sym_date_literal_token7] = aux_sym_date_literal_token7,
  [aux_sym_date_literal_token8] = aux_sym_date_literal_token8,
  [aux_sym_date_literal_token9] = aux_sym_date_literal_token9,
  [aux_sym_date_literal_token10] = aux_sym_date_literal_token10,
  [aux_sym_date_literal_token11] = aux_sym_date_literal_token11,
  [aux_sym_date_literal_token12] = aux_sym_date_literal_token12,
  [aux_sym_date_literal_token13] = aux_sym_date_literal_token13,
  [aux_sym_date_literal_token14] = aux_sym_date_literal_token14,
  [aux_sym_date_literal_token15] = aux_sym_date_literal_token15,
  [aux_sym_date_literal_token16] = aux_sym_date_literal_token16,
  [aux_sym_date_literal_token17] = aux_sym_date_literal_token17,
  [aux_sym_date_literal_token18] = aux_sym_date_literal_token18,
  [aux_sym_date_literal_token19] = aux_sym_date_literal_token19,
  [aux_sym_date_literal_token20] = aux_sym_date_literal_token20,
  [aux_sym_date_literal_token21] = aux_sym_date_literal_token21,
  [aux_sym_date_literal_token22] = aux_sym_date_literal_token22,
  [aux_sym_date_literal_token23] = aux_sym_date_literal_token23,
  [aux_sym_date_literal_with_param_token1] = sym_date_literal,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_function_name_token1] = aux_sym_function_name_token1,
  [aux_sym_function_name_token2] = aux_sym_function_name_token2,
  [aux_sym_function_name_token3] = aux_sym_function_name_token3,
  [aux_sym_function_name_token4] = aux_sym_function_name_token4,
  [aux_sym_function_name_token5] = aux_sym_function_name_token5,
  [aux_sym_function_name_token6] = aux_sym_function_name_token6,
  [aux_sym_function_name_token7] = aux_sym_function_name_token7,
  [aux_sym_function_name_token8] = aux_sym_function_name_token8,
  [aux_sym_function_name_token9] = aux_sym_function_name_token9,
  [aux_sym_function_name_token10] = aux_sym_function_name_token10,
  [aux_sym_function_name_token11] = aux_sym_function_name_token11,
  [aux_sym_function_name_token12] = aux_sym_function_name_token12,
  [aux_sym_function_name_token13] = aux_sym_function_name_token13,
  [aux_sym_function_name_token14] = aux_sym_function_name_token14,
  [aux_sym_function_name_token15] = aux_sym_function_name_token15,
  [aux_sym_function_name_token16] = aux_sym_function_name_token16,
  [aux_sym_function_name_token17] = aux_sym_function_name_token17,
  [aux_sym_function_name_token18] = aux_sym_function_name_token18,
  [aux_sym_function_name_token19] = aux_sym_function_name_token19,
  [aux_sym_function_name_token20] = aux_sym_function_name_token20,
  [aux_sym_function_name_token21] = aux_sym_function_name_token21,
  [aux_sym_function_name_token22] = aux_sym_function_name_token22,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_bound_apex_expression] = sym_bound_apex_expression,
  [aux_sym_null_literal_token1] = aux_sym_null_literal_token1,
  [sym_string_literal] = sym_string_literal,
  [sym_int] = sym_int,
  [sym_decimal] = sym_decimal,
  [sym_date] = sym_date,
  [sym_date_time] = sym_date_time,
  [sym_currency_literal] = sym_currency_literal,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_header_comment] = sym_header_comment,
  [sym_formatting_comment] = sym_formatting_comment,
  [sym__query_expression] = sym__query_expression,
  [sym_sosl_query_body] = sym_sosl_query_body,
  [sym_find_clause] = sym_find_clause,
  [sym_in_clause] = sym_in_clause,
  [sym_in_type] = sym_in_type,
  [sym_returning_clause] = sym_returning_clause,
  [sym_sobject_return] = sym_sobject_return,
  [sym_selected_fields] = sym_selected_fields,
  [sym__selectable_expression] = sym__selectable_expression,
  [sym_using_clause] = sym_using_clause,
  [sym_subquery] = sym_subquery,
  [sym_with_division_expression] = sym_with_division_expression,
  [sym_with_highlight] = sym_with_highlight,
  [sym_with_metadata_expression] = sym_with_metadata_expression,
  [sym_with_network_expression] = sym_with_network_expression,
  [sym_with_pricebook_expression] = sym_with_pricebook_expression,
  [sym_with_snippet_expression] = sym_with_snippet_expression,
  [sym_with_spell_correction_expression] = sym_with_spell_correction_expression,
  [sym_sosl_with_type] = sym_sosl_with_type,
  [sym_sosl_with_clause] = sym_sosl_with_clause,
  [sym_soql_query_body] = sym_soql_query_body,
  [sym_count_expression] = sym_count_expression,
  [sym_select_clause] = sym_select_clause,
  [sym_soql_using_clause] = sym_using_clause,
  [sym_using_scope_type] = sym_using_scope_type,
  [sym_type_of_clause] = sym_type_of_clause,
  [sym_when_expression] = sym_when_expression,
  [sym_else_expression] = sym_else_expression,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym__group_by_expression] = sym__group_by_expression,
  [sym_for_clause] = sym_for_clause,
  [sym_for_type] = sym_for_type,
  [sym_having_clause] = sym_having_clause,
  [sym__having_boolean_expression] = sym__having_boolean_expression,
  [sym_having_and_expression] = sym_having_and_expression,
  [sym_having_or_expression] = sym_having_or_expression,
  [sym_having_not_expression] = sym_having_not_expression,
  [sym__having_condition_expression] = sym__having_condition_expression,
  [sym_having_comparison_expression] = sym_having_comparison_expression,
  [sym__having_comparison] = sym__having_comparison,
  [sym__having_value_comparison] = sym__having_value_comparison,
  [sym__having_set_comparison] = sym__having_set_comparison,
  [sym_from_clause] = sym_from_clause,
  [sym_storage_identifier] = sym_storage_identifier,
  [sym_storage_alias] = sym_storage_alias,
  [sym_fields_expression] = sym_fields_expression,
  [sym_fields_type] = sym_fields_type,
  [sym_where_clause] = sym_where_clause,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_and_expression] = sym_and_expression,
  [sym_or_expression] = sym_or_expression,
  [sym_not_expression] = sym_not_expression,
  [sym__condition_expression] = sym__condition_expression,
  [sym_comparison_expression] = sym_comparison_expression,
  [sym__comparison] = sym__comparison,
  [sym__value_comparison] = sym__value_comparison,
  [sym__set_comparison] = sym__set_comparison,
  [sym_soql_with_clause] = sym_sosl_with_clause,
  [sym_soql_with_type] = sym_sosl_with_type,
  [sym_with_user_id_type] = sym_with_user_id_type,
  [sym_with_record_visibility_expression] = sym_with_record_visibility_expression,
  [sym_with_record_visibility_param] = sym_with_record_visibility_param,
  [sym_with_data_cat_expression] = sym_with_data_cat_expression,
  [sym_with_data_cat_filter] = sym_with_data_cat_filter,
  [sym_with_data_cat_filter_type] = sym_with_data_cat_filter_type,
  [sym_limit_clause] = sym_limit_clause,
  [sym_offset_clause] = sym_offset_clause,
  [sym_update_clause] = sym_update_clause,
  [sym_update_type] = sym_update_type,
  [sym_alias_expression] = sym_alias_expression,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_order_expression] = sym_order_expression,
  [sym_order_direction] = sym_order_direction,
  [sym_order_null_direciton] = sym_order_null_direciton,
  [sym_geo_location_type] = sym_geo_location_type,
  [sym__value_expression] = sym__value_expression,
  [sym_function_expression] = sym_function_expression,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_field_identifier] = sym_field_identifier,
  [sym_field_list] = sym_field_list,
  [sym_boolean] = sym_boolean,
  [sym_value_comparison_operator] = sym_value_comparison_operator,
  [sym_set_comparison_operator] = sym_set_comparison_operator,
  [sym_date_literal] = sym_date_literal,
  [sym_date_literal_with_param] = sym_date_literal_with_param,
  [sym_function_name] = sym_function_name,
  [sym_null_literal] = sym_null_literal,
  [sym__soql_literal] = sym__soql_literal,
  [aux_sym_sosl_query_body_repeat1] = aux_sym_sosl_query_body_repeat1,
  [aux_sym_sosl_query_body_repeat2] = aux_sym_sosl_query_body_repeat2,
  [aux_sym_returning_clause_repeat1] = aux_sym_returning_clause_repeat1,
  [aux_sym_selected_fields_repeat1] = aux_sym_selected_fields_repeat1,
  [aux_sym_type_of_clause_repeat1] = aux_sym_type_of_clause_repeat1,
  [aux_sym__group_by_expression_repeat1] = aux_sym__group_by_expression_repeat1,
  [aux_sym__group_by_expression_repeat2] = aux_sym__group_by_expression_repeat2,
  [aux_sym_for_clause_repeat1] = aux_sym_for_clause_repeat1,
  [aux_sym_having_and_expression_repeat1] = aux_sym_having_and_expression_repeat1,
  [aux_sym_having_or_expression_repeat1] = aux_sym_having_or_expression_repeat1,
  [aux_sym__having_set_comparison_repeat1] = aux_sym__having_set_comparison_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_and_expression_repeat1] = aux_sym_and_expression_repeat1,
  [aux_sym_or_expression_repeat1] = aux_sym_or_expression_repeat1,
  [aux_sym_with_record_visibility_expression_repeat1] = aux_sym_with_record_visibility_expression_repeat1,
  [aux_sym_with_data_cat_expression_repeat1] = aux_sym_with_data_cat_expression_repeat1,
  [aux_sym_with_data_cat_filter_repeat1] = aux_sym_with_data_cat_filter_repeat1,
  [aux_sym_update_clause_repeat1] = aux_sym_update_clause_repeat1,
  [aux_sym_order_by_clause_repeat1] = aux_sym_order_by_clause_repeat1,
  [aux_sym_dotted_identifier_repeat1] = aux_sym_dotted_identifier_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [anon_alias_sym_COUNT] = anon_alias_sym_COUNT,
  [anon_alias_sym_NOT_IN] = anon_alias_sym_NOT_IN,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_find_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token5] = {
    .visible = true,
    .named = false,
  },
  [sym_term_separator_start] = {
    .visible = true,
    .named = true,
  },
  [sym_term_separator_end] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_returning_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_division_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_highlight_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_metadata_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_network_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_pricebook_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_snippet_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_snippet_expression_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_spell_correction_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sosl_with_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_count_expression_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_select_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_using_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_of_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_of_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_when_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_when_expression_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_else_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_by_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__group_by_expression_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__group_by_expression_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_for_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_and_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_or_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_not_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_storage_alias_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fields_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fields_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_with_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_with_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_with_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_user_id_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_record_visibility_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_record_visibility_param_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_record_visibility_param_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_record_visibility_param_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_expression_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_limit_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_offset_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_update_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_update_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_direction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_null_direciton_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_null_direciton_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_null_direciton_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_geo_location_type_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_expression_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_all_rows_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_comparison_operator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_comparison_operator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_comparison_operator_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token18] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token19] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token20] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token21] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token22] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token23] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_with_param_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token18] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token19] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token20] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token21] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_name_token22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_bound_apex_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_null_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_currency_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_formatting_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__query_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_sosl_query_body] = {
    .visible = true,
    .named = true,
  },
  [sym_find_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_in_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_in_type] = {
    .visible = true,
    .named = true,
  },
  [sym_returning_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sobject_return] = {
    .visible = true,
    .named = true,
  },
  [sym_selected_fields] = {
    .visible = true,
    .named = true,
  },
  [sym__selectable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_using_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_subquery] = {
    .visible = true,
    .named = true,
  },
  [sym_with_division_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_highlight] = {
    .visible = true,
    .named = true,
  },
  [sym_with_metadata_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_network_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_pricebook_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_snippet_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_spell_correction_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sosl_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sosl_with_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_soql_query_body] = {
    .visible = true,
    .named = true,
  },
  [sym_count_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_soql_using_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_using_scope_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_of_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_when_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__group_by_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_for_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_type] = {
    .visible = true,
    .named = true,
  },
  [sym_having_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__having_boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_having_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_having_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_having_not_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__having_condition_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_having_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__having_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__having_value_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__having_set_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_fields_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_fields_type] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_not_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__condition_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__value_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__set_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym_soql_with_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_soql_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_with_user_id_type] = {
    .visible = true,
    .named = true,
  },
  [sym_with_record_visibility_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_record_visibility_param] = {
    .visible = true,
    .named = true,
  },
  [sym_with_data_cat_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_data_cat_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_with_data_cat_filter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_update_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_update_type] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_order_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_order_null_direciton] = {
    .visible = true,
    .named = true,
  },
  [sym_geo_location_type] = {
    .visible = true,
    .named = true,
  },
  [sym__value_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_value_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_set_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_date_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_date_literal_with_param] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__soql_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_sosl_query_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sosl_query_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_returning_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selected_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_of_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__group_by_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__group_by_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_having_and_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_having_or_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__having_set_comparison_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_and_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_or_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_record_visibility_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_data_cat_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_update_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_COUNT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_NOT_IN] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_COUNT,
  },
  [2] = {
    [0] = anon_alias_sym_NOT_IN,
    [1] = anon_alias_sym_NOT_IN,
  },
  [3] = {
    [1] = aux_sym_order_by_clause_token1,
  },
  [4] = {
    [0] = aux_sym_soql_using_clause_token1,
  },
  [5] = {
    [0] = aux_sym_order_null_direciton_token3,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_string_literal_character_set_1(int32_t c) {
  return (c < 'T'
    ? (c < 'B'
      ? (c < '%'
        ? c == '"'
        : (c <= '%' || c == '\''))
      : (c <= 'B' || (c < 'N'
        ? c == 'F'
        : (c <= 'N' || c == 'R'))))
    : (c <= 'U' || (c < 'f'
      ? (c < '_'
        ? c == '\\'
        : (c <= '_' || c == 'b'))
      : (c <= 'f' || (c < 'r'
        ? c == 'n'
        : (c <= 'r' || (c >= 't' && c <= 'u')))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(879);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(906);
      if (lookahead == ')') ADVANCE(907);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '-') ADVANCE(864);
      if (lookahead == '.') ADVANCE(1001);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(1038);
      if (lookahead == '<') ADVANCE(1007);
      if (lookahead == '=') ADVANCE(911);
      if (lookahead == '>') ADVANCE(1009);
      if (lookahead == '?') ADVANCE(1085);
      if (lookahead == '{') ADVANCE(897);
      if (lookahead == '}') ADVANCE(898);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(99);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(258);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(87);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(375);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(386);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(266);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '-') ADVANCE(864);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(594);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(390);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1095);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(876);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(1089);
      if (lookahead == '\\') ADVANCE(875);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(906);
      if (lookahead == ')') ADVANCE(907);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(674);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(540);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(544);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(638);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(805);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(415);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(906);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(906);
      if (lookahead == '-') ADVANCE(864);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1182);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1268);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1232);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1298);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1233);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(906);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1183);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1268);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1232);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1240);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1298);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1234);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(906);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1183);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1268);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1232);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1298);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1234);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(907);
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '.') ADVANCE(1001);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1242);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1270);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1170);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1252);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(907);
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '.') ADVANCE(1001);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1276);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1170);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1279);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(1086);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '.') ADVANCE(1001);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(870);
      if (lookahead == 'Z') ADVANCE(1102);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(856);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(880);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(885);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(901);
      if (lookahead == '\\') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(902);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1113);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1183);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1268);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1232);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1238);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1298);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1234);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(862);
      if (lookahead == '1') ADVANCE(857);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(863);
      if (lookahead == '3') ADVANCE(855);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(866);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(858);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(867);
      END_STATE();
    case 27:
      if (lookahead == '9') ADVANCE(24);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(421);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(810);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(309);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 28:
      if (lookahead == '9') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(422);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(583);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(811);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(310);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(861);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(859);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(860);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(1005);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'V') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'Z') ADVANCE(1102);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(856);
      END_STATE();
    case 48:
      if (lookahead == 'Z') ADVANCE(1102);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'Z') ADVANCE(1102);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(485);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(728);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(455);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(491);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(492);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(493);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(609);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(204);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(765);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(362);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(467);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(138);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(300);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(402);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(405);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(217);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(225);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(223);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(778);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(494);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(611);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(612);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(613);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(610);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(744);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(820);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(833);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(977);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(834);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(505);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(272);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(600);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(835);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(846);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(793);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(851);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(717);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 161:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(963);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(979);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 162:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(232);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(771);
      END_STATE();
    case 163:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(557);
      END_STATE();
    case 164:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 165:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(289);
      END_STATE();
    case 166:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(406);
      END_STATE();
    case 167:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(992);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(991);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(478);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(720);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(553);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(281);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(802);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(844);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(646);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(581);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(804);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(794);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(956);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(935);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(972);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(966);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(926);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(916);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(969);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(974);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(392);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(574);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(807);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(302);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(391);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(573);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(806);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(301);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(690);
      END_STATE();
    case 209:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      END_STATE();
    case 210:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 211:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 220:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(824);
      END_STATE();
    case 222:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(136);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(424);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(588);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(814);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(327);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(335);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1011);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1003);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1004);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(970);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(971);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(942);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(385);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(451);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 323:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 334:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 342:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 344:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(958);
      END_STATE();
    case 345:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(933);
      END_STATE();
    case 346:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 347:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(715);
      END_STATE();
    case 348:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(567);
      END_STATE();
    case 349:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(423);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(585);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(812);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(312);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 350:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1039);
      END_STATE();
    case 351:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(377);
      END_STATE();
    case 352:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(908);
      END_STATE();
    case 353:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(955);
      END_STATE();
    case 354:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1051);
      END_STATE();
    case 355:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(987);
      END_STATE();
    case 356:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(904);
      END_STATE();
    case 357:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(927);
      END_STATE();
    case 358:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      END_STATE();
    case 359:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(541);
      END_STATE();
    case 360:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 361:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(761);
      END_STATE();
    case 362:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(661);
      END_STATE();
    case 363:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 364:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 365:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 366:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(920);
      END_STATE();
    case 367:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1020);
      END_STATE();
    case 368:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1022);
      END_STATE();
    case 369:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1021);
      END_STATE();
    case 370:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1065);
      END_STATE();
    case 371:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1073);
      END_STATE();
    case 372:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(918);
      END_STATE();
    case 373:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1081);
      END_STATE();
    case 374:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1059);
      END_STATE();
    case 375:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 376:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      END_STATE();
    case 377:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(459);
      END_STATE();
    case 378:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(693);
      END_STATE();
    case 379:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(738);
      END_STATE();
    case 380:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(708);
      END_STATE();
    case 381:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 394:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 395:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 397:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 398:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 403:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 404:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 405:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 406:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 407:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 408:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(751);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(711);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 419:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(716);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(785);
      END_STATE();
    case 421:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 423:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      END_STATE();
    case 425:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(915);
      END_STATE();
    case 426:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1017);
      END_STATE();
    case 427:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1019);
      END_STATE();
    case 428:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1018);
      END_STATE();
    case 429:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1067);
      END_STATE();
    case 430:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(403);
      END_STATE();
    case 431:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(234);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 432:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(234);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(399);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      END_STATE();
    case 433:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(693);
      END_STATE();
    case 434:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(708);
      END_STATE();
    case 435:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(404);
      END_STATE();
    case 436:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(709);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(259);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(709);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(892);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1088);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1057);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(548);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(688);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 467:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 469:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(797);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 471:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 472:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(808);
      END_STATE();
    case 473:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 474:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 475:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 476:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1049);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1049);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(604);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(961);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(932);
      END_STATE();
    case 481:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 482:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(965);
      END_STATE();
    case 483:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 484:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 485:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 486:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(575);
      END_STATE();
    case 487:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 488:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 489:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(853);
      END_STATE();
    case 490:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 491:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(314);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      END_STATE();
    case 492:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(587);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(813);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 493:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(589);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 494:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(590);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(815);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(337);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1044);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(936);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(919);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1043);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(823);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(755);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(758);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(763);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 535:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 537:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 538:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 539:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1037);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(796);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(728);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(466);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(828);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(457);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 575:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 576:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 577:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 578:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(799);
      END_STATE();
    case 579:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 580:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 581:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 582:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 583:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 584:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(803);
      END_STATE();
    case 585:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 586:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 587:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 588:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 589:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 590:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 591:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 592:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(940);
      END_STATE();
    case 593:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(943);
      END_STATE();
    case 594:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 595:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 596:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(939);
      END_STATE();
    case 597:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 598:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      END_STATE();
    case 599:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(698);
      END_STATE();
    case 600:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 601:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(244);
      END_STATE();
    case 602:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 603:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(602);
      END_STATE();
    case 604:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 605:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 606:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 607:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 608:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(782);
      END_STATE();
    case 609:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(806);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 610:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(814);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(335);
      END_STATE();
    case 611:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(816);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 612:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(817);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 613:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(818);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(340);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(989);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1029);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1030);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1028);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1069);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1077);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1026);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1027);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1025);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1083);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1063);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1075);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1061);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1035);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1036);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1034);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1032);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1031);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(957);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 648:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 651:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(845);
      END_STATE();
    case 652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 654:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 655:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 656:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 657:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 658:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 659:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 660:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 661:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 662:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(708);
      END_STATE();
    case 663:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 664:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 665:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 666:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 667:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 668:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(607);
      END_STATE();
    case 669:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 670:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 671:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 672:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 673:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(777);
      END_STATE();
    case 674:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 675:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 676:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 677:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 678:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 679:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 680:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 681:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 682:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 683:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 684:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(789);
      END_STATE();
    case 685:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 686:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(791);
      END_STATE();
    case 687:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 688:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1002);
      END_STATE();
    case 689:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(993);
      END_STATE();
    case 690:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(890);
      END_STATE();
    case 691:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1013);
      END_STATE();
    case 692:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1012);
      END_STATE();
    case 693:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1037);
      END_STATE();
    case 694:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1023);
      END_STATE();
    case 695:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1024);
      END_STATE();
    case 696:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(975);
      END_STATE();
    case 697:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(976);
      END_STATE();
    case 698:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(929);
      END_STATE();
    case 699:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 700:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 701:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 702:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      END_STATE();
    case 703:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      END_STATE();
    case 704:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 705:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 706:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 707:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(775);
      END_STATE();
    case 708:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 709:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      END_STATE();
    case 710:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(731);
      END_STATE();
    case 711:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      END_STATE();
    case 712:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 713:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 714:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 715:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 716:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(779);
      END_STATE();
    case 717:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(741);
      END_STATE();
    case 718:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(772);
      END_STATE();
    case 719:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(772);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(389);
      END_STATE();
    case 720:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(767);
      END_STATE();
    case 721:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(773);
      END_STATE();
    case 722:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 723:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      END_STATE();
    case 724:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      END_STATE();
    case 725:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 726:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(746);
      END_STATE();
    case 728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(959);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(996);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(923);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(994);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(983);
      END_STATE();
    case 733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1053);
      END_STATE();
    case 734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(924);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(917);
      END_STATE();
    case 737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(988);
      END_STATE();
    case 738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(913);
      END_STATE();
    case 739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1041);
      END_STATE();
    case 740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(973);
      END_STATE();
    case 741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(995);
      END_STATE();
    case 742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      END_STATE();
    case 743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(822);
      END_STATE();
    case 746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      END_STATE();
    case 751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      END_STATE();
    case 752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 753:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      END_STATE();
    case 754:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 755:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 756:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      END_STATE();
    case 758:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 759:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      END_STATE();
    case 760:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 761:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 762:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 763:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      END_STATE();
    case 764:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 765:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 766:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 767:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 768:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 769:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 770:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 771:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      END_STATE();
    case 772:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 773:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 774:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 775:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 776:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 777:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 778:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      END_STATE();
    case 779:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      END_STATE();
    case 780:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 781:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 782:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      END_STATE();
    case 783:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      END_STATE();
    case 784:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 785:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      END_STATE();
    case 786:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 787:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 788:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 789:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 790:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 791:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 792:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 793:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      END_STATE();
    case 794:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      END_STATE();
    case 795:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 796:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(592);
      END_STATE();
    case 797:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(593);
      END_STATE();
    case 798:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 799:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      END_STATE();
    case 800:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 801:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(606);
      END_STATE();
    case 802:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 803:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 804:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      END_STATE();
    case 805:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 806:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 807:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 808:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 809:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      END_STATE();
    case 810:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 811:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 812:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 813:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 814:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 815:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 816:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 817:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 818:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 819:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 820:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(395);
      END_STATE();
    case 821:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(240);
      END_STATE();
    case 822:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(413);
      END_STATE();
    case 823:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 824:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(416);
      END_STATE();
    case 825:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(954);
      END_STATE();
    case 826:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(981);
      END_STATE();
    case 827:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(910);
      END_STATE();
    case 828:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1016);
      END_STATE();
    case 829:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(982);
      END_STATE();
    case 830:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 831:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(556);
      END_STATE();
    case 832:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(721);
      END_STATE();
    case 833:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1047);
      END_STATE();
    case 834:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 835:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1046);
      END_STATE();
    case 836:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(740);
      END_STATE();
    case 837:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 838:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1015);
      END_STATE();
    case 839:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(978);
      END_STATE();
    case 840:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1071);
      END_STATE();
    case 841:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1014);
      END_STATE();
    case 842:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1079);
      END_STATE();
    case 843:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(930);
      END_STATE();
    case 844:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1055);
      END_STATE();
    case 845:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(931);
      END_STATE();
    case 846:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 847:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 848:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(693);
      END_STATE();
    case 849:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(694);
      END_STATE();
    case 850:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(743);
      END_STATE();
    case 851:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(695);
      END_STATE();
    case 852:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 853:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 854:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(708);
      END_STATE();
    case 855:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1101);
      END_STATE();
    case 856:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(874);
      END_STATE();
    case 857:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(15);
      END_STATE();
    case 858:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(29);
      END_STATE();
    case 859:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(868);
      END_STATE();
    case 860:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(869);
      END_STATE();
    case 861:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(873);
      END_STATE();
    case 862:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 863:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1101);
      END_STATE();
    case 864:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      END_STATE();
    case 865:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1100);
      END_STATE();
    case 866:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1101);
      END_STATE();
    case 867:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 868:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 869:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1102);
      END_STATE();
    case 870:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 871:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 872:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1104);
      END_STATE();
    case 873:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 874:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 875:
      if (sym_string_literal_character_set_1(lookahead)) ADVANCE(2);
      END_STATE();
    case 876:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 877:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 878:
      if (eof) ADVANCE(879);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == ')') ADVANCE(907);
      if (lookahead == ',') ADVANCE(905);
      if (lookahead == '.') ADVANCE(1001);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(1007);
      if (lookahead == '=') ADVANCE(911);
      if (lookahead == '>') ADVANCE(1009);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(569);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(677);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(545);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(878)
      END_STATE();
    case 879:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(885);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(902);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_find_clause_token1);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_in_clause_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_in_clause_token2);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_in_clause_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_in_type_token1);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_in_type_token2);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_in_type_token3);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_in_type_token4);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_in_type_token5);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_term_separator_start);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_term_separator_end);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(901);
      if (lookahead == '\\') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(902);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(902);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(902);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '\\') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '\\') ADVANCE(903);
      if (lookahead != 0) ADVANCE(902);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_returning_clause_token1);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_using_clause_token2);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_with_division_expression_token1);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_with_highlight_token1);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_with_metadata_expression_token1);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_with_network_expression_token1);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_with_pricebook_expression_token1);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_with_snippet_expression_token1);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_with_snippet_expression_token2);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_with_spell_correction_expression_token1);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_sosl_with_clause_token1);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_sosl_with_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_count_expression_token1);
      if (lookahead == '_') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_count_expression_token1);
      if (lookahead == '_') ADVANCE(211);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token1);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token2);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token3);
      if (lookahead == '_') ADVANCE(117);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token4);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token5);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token6);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token7);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token2);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_when_expression_token1);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_when_expression_token2);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_else_expression_token1);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__group_by_expression_token1);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__group_by_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__group_by_expression_token2);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__group_by_expression_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_for_type_token2);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(773);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_having_and_expression_token1);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_having_or_expression_token1);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_having_or_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_having_not_expression_token1);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_having_not_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_fields_type_token1);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_fields_type_token2);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token1);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token2);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token3);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_with_user_id_type_token1);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_expression_token1);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token1);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token2);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token3);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token1);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token2);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token1);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token2);
      if (lookahead == '_') ADVANCE(561);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token3);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token4);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_update_type_token1);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_update_type_token2);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_order_null_direciton_token1);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_order_null_direciton_token2);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_order_null_direciton_token3);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_order_null_direciton_token3);
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_all_rows_clause_token1);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1008);
      if (lookahead == '>') ADVANCE(1006);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1010);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_value_comparison_operator_token1);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token1);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token2);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_date_literal_token1);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_date_literal_token2);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_date_literal_token3);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_date_literal_token4);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_date_literal_token5);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_date_literal_token6);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_date_literal_token7);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_date_literal_token8);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_date_literal_token9);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_date_literal_token10);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_date_literal_token11);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_date_literal_token12);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_date_literal_token13);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_date_literal_token14);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_date_literal_token15);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_date_literal_token16);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_date_literal_token17);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_date_literal_token18);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_date_literal_token19);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_date_literal_token20);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_date_literal_token21);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_date_literal_token22);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_date_literal_token23);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_date_literal_with_param_token1);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_function_name_token1);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_function_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_function_name_token2);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_function_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_function_name_token3);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_function_name_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_function_name_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_function_name_token4);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_function_name_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_function_name_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_function_name_token5);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_function_name_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_function_name_token6);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_function_name_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_function_name_token7);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_function_name_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_function_name_token8);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_function_name_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_function_name_token9);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_function_name_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_function_name_token10);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_function_name_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_function_name_token11);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_function_name_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_function_name_token12);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_function_name_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_function_name_token13);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_function_name_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_function_name_token14);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_function_name_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_function_name_token15);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_function_name_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_function_name_token16);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_function_name_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_function_name_token17);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_function_name_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_function_name_token18);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_function_name_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_function_name_token19);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_function_name_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_function_name_token20);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_function_name_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_function_name_token21);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_function_name_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_function_name_token22);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_function_name_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_bound_apex_expression);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(993);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1090);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1093);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1098);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1100);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1104);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1215);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1309);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1197);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1171);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1153);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1221);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1244);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1158);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1245);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1304);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1246);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1247);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1305);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1196);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 878},
  [38] = {.lex_state = 878},
  [39] = {.lex_state = 878},
  [40] = {.lex_state = 878},
  [41] = {.lex_state = 878},
  [42] = {.lex_state = 878},
  [43] = {.lex_state = 878},
  [44] = {.lex_state = 878},
  [45] = {.lex_state = 878},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 878},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 878},
  [56] = {.lex_state = 878},
  [57] = {.lex_state = 878},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 878},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 878},
  [66] = {.lex_state = 878},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 878},
  [71] = {.lex_state = 878},
  [72] = {.lex_state = 878},
  [73] = {.lex_state = 878},
  [74] = {.lex_state = 878},
  [75] = {.lex_state = 878},
  [76] = {.lex_state = 878},
  [77] = {.lex_state = 878},
  [78] = {.lex_state = 878},
  [79] = {.lex_state = 878},
  [80] = {.lex_state = 878},
  [81] = {.lex_state = 878},
  [82] = {.lex_state = 878},
  [83] = {.lex_state = 878},
  [84] = {.lex_state = 878},
  [85] = {.lex_state = 878},
  [86] = {.lex_state = 878},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 878},
  [90] = {.lex_state = 878},
  [91] = {.lex_state = 878},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 878},
  [94] = {.lex_state = 878},
  [95] = {.lex_state = 878},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 878},
  [98] = {.lex_state = 878},
  [99] = {.lex_state = 878},
  [100] = {.lex_state = 878},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 878},
  [104] = {.lex_state = 878},
  [105] = {.lex_state = 878},
  [106] = {.lex_state = 878},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 878},
  [109] = {.lex_state = 878},
  [110] = {.lex_state = 878},
  [111] = {.lex_state = 878},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 878},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 878},
  [116] = {.lex_state = 878},
  [117] = {.lex_state = 878},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 878},
  [120] = {.lex_state = 878},
  [121] = {.lex_state = 878},
  [122] = {.lex_state = 878},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 878},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 878},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 878},
  [131] = {.lex_state = 878},
  [132] = {.lex_state = 878},
  [133] = {.lex_state = 878},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 878},
  [144] = {.lex_state = 878},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 878},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 878},
  [149] = {.lex_state = 878},
  [150] = {.lex_state = 878},
  [151] = {.lex_state = 878},
  [152] = {.lex_state = 878},
  [153] = {.lex_state = 878},
  [154] = {.lex_state = 878},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 878},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 878},
  [159] = {.lex_state = 878},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 878},
  [163] = {.lex_state = 878},
  [164] = {.lex_state = 878},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 878},
  [168] = {.lex_state = 878},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 878},
  [171] = {.lex_state = 878},
  [172] = {.lex_state = 878},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 878},
  [176] = {.lex_state = 878},
  [177] = {.lex_state = 878},
  [178] = {.lex_state = 878},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 878},
  [183] = {.lex_state = 878},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 878},
  [187] = {.lex_state = 878},
  [188] = {.lex_state = 878},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 878},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 878},
  [195] = {.lex_state = 878},
  [196] = {.lex_state = 878},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 878},
  [199] = {.lex_state = 878},
  [200] = {.lex_state = 878},
  [201] = {.lex_state = 878},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 878},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 878},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 878},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 878},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 878},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 878},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 878},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 878},
  [223] = {.lex_state = 878},
  [224] = {.lex_state = 878},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 878},
  [231] = {.lex_state = 878},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 878},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 878},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 878},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 878},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 878},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 3},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 3},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 3},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 3},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 3},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 3},
  [318] = {.lex_state = 3},
  [319] = {.lex_state = 3},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 3},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 3},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 4},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 3},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 4},
  [379] = {.lex_state = 4},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 4},
  [385] = {.lex_state = 4},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 4},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 4},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 5},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 4},
  [433] = {.lex_state = 4},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 4},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 4},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 881},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 19},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 4},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 4},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 5},
  [497] = {.lex_state = 881},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_formatting_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_find_clause_token1] = ACTIONS(1),
    [aux_sym_in_clause_token1] = ACTIONS(1),
    [aux_sym_in_clause_token2] = ACTIONS(1),
    [aux_sym_in_type_token1] = ACTIONS(1),
    [aux_sym_in_type_token2] = ACTIONS(1),
    [aux_sym_in_type_token3] = ACTIONS(1),
    [aux_sym_in_type_token4] = ACTIONS(1),
    [aux_sym_in_type_token5] = ACTIONS(1),
    [sym_term_separator_start] = ACTIONS(1),
    [sym_term_separator_end] = ACTIONS(1),
    [aux_sym_returning_clause_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_using_clause_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_with_division_expression_token1] = ACTIONS(1),
    [aux_sym_with_highlight_token1] = ACTIONS(1),
    [aux_sym_with_metadata_expression_token1] = ACTIONS(1),
    [aux_sym_with_network_expression_token1] = ACTIONS(1),
    [aux_sym_with_pricebook_expression_token1] = ACTIONS(1),
    [aux_sym_with_snippet_expression_token1] = ACTIONS(1),
    [aux_sym_with_snippet_expression_token2] = ACTIONS(1),
    [aux_sym_with_spell_correction_expression_token1] = ACTIONS(1),
    [aux_sym_sosl_with_clause_token1] = ACTIONS(1),
    [aux_sym_count_expression_token1] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
    [aux_sym_soql_using_clause_token1] = ACTIONS(1),
    [aux_sym_using_scope_type_token1] = ACTIONS(1),
    [aux_sym_using_scope_type_token2] = ACTIONS(1),
    [aux_sym_using_scope_type_token3] = ACTIONS(1),
    [aux_sym_using_scope_type_token4] = ACTIONS(1),
    [aux_sym_using_scope_type_token5] = ACTIONS(1),
    [aux_sym_using_scope_type_token6] = ACTIONS(1),
    [aux_sym_using_scope_type_token7] = ACTIONS(1),
    [aux_sym_type_of_clause_token1] = ACTIONS(1),
    [aux_sym_type_of_clause_token2] = ACTIONS(1),
    [aux_sym_when_expression_token1] = ACTIONS(1),
    [aux_sym_when_expression_token2] = ACTIONS(1),
    [aux_sym_else_expression_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token2] = ACTIONS(1),
    [aux_sym__group_by_expression_token1] = ACTIONS(1),
    [aux_sym__group_by_expression_token2] = ACTIONS(1),
    [aux_sym_for_clause_token1] = ACTIONS(1),
    [aux_sym_for_type_token1] = ACTIONS(1),
    [aux_sym_for_type_token2] = ACTIONS(1),
    [aux_sym_for_type_token3] = ACTIONS(1),
    [aux_sym_having_clause_token1] = ACTIONS(1),
    [aux_sym_having_and_expression_token1] = ACTIONS(1),
    [aux_sym_having_or_expression_token1] = ACTIONS(1),
    [aux_sym_having_not_expression_token1] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_storage_alias_token1] = ACTIONS(1),
    [aux_sym_fields_type_token1] = ACTIONS(1),
    [aux_sym_fields_type_token2] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_soql_with_type_token1] = ACTIONS(1),
    [aux_sym_soql_with_type_token2] = ACTIONS(1),
    [aux_sym_soql_with_type_token3] = ACTIONS(1),
    [aux_sym_with_user_id_type_token1] = ACTIONS(1),
    [aux_sym_with_record_visibility_expression_token1] = ACTIONS(1),
    [aux_sym_with_record_visibility_param_token1] = ACTIONS(1),
    [aux_sym_with_record_visibility_param_token2] = ACTIONS(1),
    [aux_sym_with_record_visibility_param_token3] = ACTIONS(1),
    [aux_sym_with_data_cat_expression_token1] = ACTIONS(1),
    [aux_sym_with_data_cat_expression_token2] = ACTIONS(1),
    [aux_sym_with_data_cat_filter_type_token1] = ACTIONS(1),
    [aux_sym_with_data_cat_filter_type_token2] = ACTIONS(1),
    [aux_sym_with_data_cat_filter_type_token3] = ACTIONS(1),
    [aux_sym_with_data_cat_filter_type_token4] = ACTIONS(1),
    [aux_sym_limit_clause_token1] = ACTIONS(1),
    [aux_sym_offset_clause_token1] = ACTIONS(1),
    [aux_sym_update_type_token1] = ACTIONS(1),
    [aux_sym_update_type_token2] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_order_direction_token2] = ACTIONS(1),
    [aux_sym_order_null_direciton_token1] = ACTIONS(1),
    [aux_sym_order_null_direciton_token2] = ACTIONS(1),
    [aux_sym_order_null_direciton_token3] = ACTIONS(1),
    [aux_sym_geo_location_type_token1] = ACTIONS(1),
    [aux_sym_function_expression_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_all_rows_clause_token1] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_value_comparison_operator_token1] = ACTIONS(1),
    [aux_sym_set_comparison_operator_token1] = ACTIONS(1),
    [aux_sym_set_comparison_operator_token2] = ACTIONS(1),
    [aux_sym_date_literal_token1] = ACTIONS(1),
    [aux_sym_date_literal_token2] = ACTIONS(1),
    [aux_sym_date_literal_token3] = ACTIONS(1),
    [aux_sym_date_literal_token4] = ACTIONS(1),
    [aux_sym_date_literal_token5] = ACTIONS(1),
    [aux_sym_date_literal_token6] = ACTIONS(1),
    [aux_sym_date_literal_token7] = ACTIONS(1),
    [aux_sym_date_literal_token8] = ACTIONS(1),
    [aux_sym_date_literal_token9] = ACTIONS(1),
    [aux_sym_date_literal_token10] = ACTIONS(1),
    [aux_sym_date_literal_token11] = ACTIONS(1),
    [aux_sym_date_literal_token12] = ACTIONS(1),
    [aux_sym_date_literal_token13] = ACTIONS(1),
    [aux_sym_date_literal_token14] = ACTIONS(1),
    [aux_sym_date_literal_token15] = ACTIONS(1),
    [aux_sym_date_literal_token16] = ACTIONS(1),
    [aux_sym_date_literal_token17] = ACTIONS(1),
    [aux_sym_date_literal_token18] = ACTIONS(1),
    [aux_sym_date_literal_token19] = ACTIONS(1),
    [aux_sym_date_literal_token20] = ACTIONS(1),
    [aux_sym_date_literal_token21] = ACTIONS(1),
    [aux_sym_date_literal_token22] = ACTIONS(1),
    [aux_sym_date_literal_token23] = ACTIONS(1),
    [aux_sym_date_literal_with_param_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_function_name_token1] = ACTIONS(1),
    [aux_sym_function_name_token2] = ACTIONS(1),
    [aux_sym_function_name_token3] = ACTIONS(1),
    [aux_sym_function_name_token4] = ACTIONS(1),
    [aux_sym_function_name_token5] = ACTIONS(1),
    [aux_sym_function_name_token6] = ACTIONS(1),
    [aux_sym_function_name_token7] = ACTIONS(1),
    [aux_sym_function_name_token8] = ACTIONS(1),
    [aux_sym_function_name_token9] = ACTIONS(1),
    [aux_sym_function_name_token10] = ACTIONS(1),
    [aux_sym_function_name_token11] = ACTIONS(1),
    [aux_sym_function_name_token12] = ACTIONS(1),
    [aux_sym_function_name_token13] = ACTIONS(1),
    [aux_sym_function_name_token14] = ACTIONS(1),
    [aux_sym_function_name_token15] = ACTIONS(1),
    [aux_sym_function_name_token16] = ACTIONS(1),
    [aux_sym_function_name_token17] = ACTIONS(1),
    [aux_sym_function_name_token18] = ACTIONS(1),
    [aux_sym_function_name_token19] = ACTIONS(1),
    [aux_sym_function_name_token20] = ACTIONS(1),
    [aux_sym_function_name_token21] = ACTIONS(1),
    [aux_sym_function_name_token22] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_bound_apex_expression] = ACTIONS(1),
    [aux_sym_null_literal_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_date_time] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(490),
    [sym_header_comment] = STATE(260),
    [sym_formatting_comment] = STATE(1),
    [sym__query_expression] = STATE(488),
    [sym_sosl_query_body] = STATE(486),
    [sym_find_clause] = STATE(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_find_clause_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      sym_bound_apex_expression,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    STATE(2), 1,
      sym_formatting_comment,
    STATE(329), 1,
      sym__soql_literal,
    STATE(365), 1,
      sym_select_clause,
    STATE(463), 1,
      sym_soql_query_body,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(76), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [73] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(25), 1,
      sym_bound_apex_expression,
    STATE(3), 1,
      sym_formatting_comment,
    STATE(348), 1,
      sym__soql_literal,
    STATE(365), 1,
      sym_select_clause,
    STATE(501), 1,
      sym_soql_query_body,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(76), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [146] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(31), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(33), 1,
      sym_bound_apex_expression,
    ACTIONS(35), 1,
      aux_sym_null_literal_token1,
    STATE(4), 1,
      sym_formatting_comment,
    STATE(323), 1,
      sym__soql_literal,
    ACTIONS(27), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(39), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(319), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(29), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [210] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(31), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(35), 1,
      aux_sym_null_literal_token1,
    ACTIONS(41), 1,
      sym_bound_apex_expression,
    STATE(5), 1,
      sym_formatting_comment,
    STATE(289), 1,
      sym__soql_literal,
    ACTIONS(27), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(39), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(319), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(29), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [274] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(43), 1,
      sym_bound_apex_expression,
    STATE(6), 1,
      sym_formatting_comment,
    STATE(344), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(76), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [338] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym_in_clause_token2,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_count_expression_token1,
    ACTIONS(51), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(53), 1,
      aux_sym_function_expression_token1,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(7), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym__value_expression,
    STATE(271), 1,
      sym_dotted_identifier,
    STATE(327), 1,
      sym__selectable_expression,
    STATE(419), 1,
      sym_count_expression,
    STATE(492), 1,
      sym_function_name,
    STATE(270), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(160), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [412] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(59), 1,
      sym_bound_apex_expression,
    STATE(8), 1,
      sym_formatting_comment,
    STATE(79), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(76), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [476] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(61), 1,
      sym_bound_apex_expression,
    STATE(9), 1,
      sym_formatting_comment,
    STATE(152), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(76), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [540] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(63), 1,
      sym_bound_apex_expression,
    STATE(10), 1,
      sym_formatting_comment,
    STATE(339), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(76), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [604] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(65), 1,
      sym_bound_apex_expression,
    STATE(11), 1,
      sym_formatting_comment,
    STATE(371), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(76), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [668] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym_in_clause_token2,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(69), 1,
      aux_sym_function_expression_token1,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(12), 1,
      sym_formatting_comment,
    STATE(88), 1,
      sym_selected_fields,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(129), 1,
      sym__value_expression,
    STATE(161), 1,
      sym__selectable_expression,
    STATE(459), 1,
      sym_function_name,
    STATE(125), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(160), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [742] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(13), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(51), 1,
      sym__value_expression,
    STATE(235), 1,
      sym__condition_expression,
    STATE(312), 1,
      sym_comparison_expression,
    STATE(470), 1,
      sym__boolean_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(168), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [815] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(14), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(51), 1,
      sym__value_expression,
    STATE(235), 1,
      sym__condition_expression,
    STATE(312), 1,
      sym_comparison_expression,
    STATE(449), 1,
      sym__boolean_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(168), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [888] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(75), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(47), 1,
      sym__value_expression,
    STATE(73), 1,
      sym__condition_expression,
    STATE(106), 1,
      sym_comparison_expression,
    STATE(167), 1,
      sym__boolean_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(168), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [961] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym_in_clause_token2,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(69), 1,
      aux_sym_function_expression_token1,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(16), 1,
      sym_formatting_comment,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(129), 1,
      sym__value_expression,
    STATE(165), 1,
      sym__selectable_expression,
    STATE(459), 1,
      sym_function_name,
    STATE(125), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(160), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1032] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym_in_clause_token2,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(53), 1,
      aux_sym_function_expression_token1,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    STATE(17), 1,
      sym_formatting_comment,
    STATE(165), 1,
      sym__selectable_expression,
    STATE(268), 1,
      sym__value_expression,
    STATE(271), 1,
      sym_dotted_identifier,
    STATE(492), 1,
      sym_function_name,
    STATE(270), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(160), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(18), 1,
      sym_formatting_comment,
    ACTIONS(85), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    ACTIONS(83), 30,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
      aux_sym_date_literal_with_param_token1,
      sym_bound_apex_expression,
      aux_sym_null_literal_token1,
      sym_string_literal,
      sym_date_time,
  [1148] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(91), 1,
      aux_sym_function_expression_token1,
    STATE(19), 1,
      sym_formatting_comment,
    STATE(48), 1,
      sym_function_expression,
    STATE(236), 1,
      sym__having_condition_expression,
    STATE(299), 1,
      sym_having_comparison_expression,
    STATE(471), 1,
      sym__having_boolean_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(222), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(93), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1211] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(91), 1,
      aux_sym_function_expression_token1,
    STATE(20), 1,
      sym_formatting_comment,
    STATE(48), 1,
      sym_function_expression,
    STATE(236), 1,
      sym__having_condition_expression,
    STATE(299), 1,
      sym_having_comparison_expression,
    STATE(474), 1,
      sym__having_boolean_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(222), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(93), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1274] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(89), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(91), 1,
      aux_sym_function_expression_token1,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_formatting_comment,
    STATE(49), 1,
      sym_function_expression,
    STATE(109), 1,
      sym__having_condition_expression,
    STATE(146), 1,
      sym_having_comparison_expression,
    STATE(212), 1,
      sym__having_boolean_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(222), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(93), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1337] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(47), 1,
      sym__value_expression,
    STATE(106), 1,
      sym_comparison_expression,
    STATE(122), 1,
      sym__condition_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1399] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(47), 1,
      sym__value_expression,
    STATE(106), 1,
      sym_comparison_expression,
    STATE(121), 1,
      sym__condition_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1461] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(24), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(51), 1,
      sym__value_expression,
    STATE(312), 1,
      sym_comparison_expression,
    STATE(377), 1,
      sym__condition_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1523] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(47), 1,
      sym__value_expression,
    STATE(106), 1,
      sym_comparison_expression,
    STATE(143), 1,
      sym__condition_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1585] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(26), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(163), 1,
      sym__group_by_expression,
    STATE(494), 1,
      sym_function_name,
    ACTIONS(97), 2,
      aux_sym__group_by_expression_token1,
      aux_sym__group_by_expression_token2,
    STATE(127), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1642] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(27), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(98), 1,
      sym__value_expression,
    STATE(170), 1,
      sym_order_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1698] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(28), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(98), 1,
      sym__value_expression,
    STATE(215), 1,
      sym_order_expression,
    STATE(494), 1,
      sym_function_name,
    STATE(44), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1754] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(69), 1,
      aux_sym_function_expression_token1,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(29), 1,
      sym_formatting_comment,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(430), 1,
      sym__value_expression,
    STATE(459), 1,
      sym_function_name,
    STATE(125), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1807] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(69), 1,
      aux_sym_function_expression_token1,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(30), 1,
      sym_formatting_comment,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(459), 1,
      sym_function_name,
    STATE(480), 1,
      sym__value_expression,
    STATE(125), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1860] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(69), 1,
      aux_sym_function_expression_token1,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(31), 1,
      sym_formatting_comment,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(459), 1,
      sym_function_name,
    STATE(468), 1,
      sym__value_expression,
    STATE(125), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1913] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(91), 1,
      aux_sym_function_expression_token1,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_formatting_comment,
    STATE(49), 1,
      sym_function_expression,
    STATE(146), 1,
      sym_having_comparison_expression,
    STATE(209), 1,
      sym__having_condition_expression,
    STATE(494), 1,
      sym_function_name,
    ACTIONS(93), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [1965] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(91), 1,
      aux_sym_function_expression_token1,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_formatting_comment,
    STATE(49), 1,
      sym_function_expression,
    STATE(146), 1,
      sym_having_comparison_expression,
    STATE(199), 1,
      sym__having_condition_expression,
    STATE(494), 1,
      sym_function_name,
    ACTIONS(93), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [2017] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(91), 1,
      aux_sym_function_expression_token1,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_formatting_comment,
    STATE(49), 1,
      sym_function_expression,
    STATE(146), 1,
      sym_having_comparison_expression,
    STATE(198), 1,
      sym__having_condition_expression,
    STATE(494), 1,
      sym_function_name,
    ACTIONS(93), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [2069] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_function_expression_token1,
    STATE(35), 1,
      sym_formatting_comment,
    STATE(48), 1,
      sym_function_expression,
    STATE(299), 1,
      sym_having_comparison_expression,
    STATE(376), 1,
      sym__having_condition_expression,
    STATE(494), 1,
      sym_function_name,
    ACTIONS(93), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [2121] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      aux_sym_function_expression_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(36), 1,
      sym_formatting_comment,
    STATE(42), 1,
      sym_dotted_identifier,
    STATE(494), 1,
      sym_function_name,
    STATE(149), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(55), 22,
      aux_sym_function_name_token1,
      aux_sym_function_name_token2,
      aux_sym_function_name_token3,
      aux_sym_function_name_token4,
      aux_sym_function_name_token5,
      aux_sym_function_name_token6,
      aux_sym_function_name_token7,
      aux_sym_function_name_token8,
      aux_sym_function_name_token9,
      aux_sym_function_name_token10,
      aux_sym_function_name_token11,
      aux_sym_function_name_token12,
      aux_sym_function_name_token13,
      aux_sym_function_name_token14,
      aux_sym_function_name_token15,
      aux_sym_function_name_token16,
      aux_sym_function_name_token17,
      aux_sym_function_name_token18,
      aux_sym_function_name_token19,
      aux_sym_function_name_token20,
      aux_sym_function_name_token21,
      aux_sym_function_name_token22,
  [2171] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_formatting_comment,
    STATE(38), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(99), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direciton_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [2214] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_DOT,
    STATE(38), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(105), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direciton_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [2255] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(39), 1,
      sym_formatting_comment,
    ACTIONS(105), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direciton_token1,
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [2293] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(40), 1,
      sym_formatting_comment,
    ACTIONS(112), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direciton_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [2333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(41), 1,
      sym_formatting_comment,
    ACTIONS(116), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direciton_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [2367] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(42), 1,
      sym_formatting_comment,
    ACTIONS(112), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direciton_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [2401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(43), 1,
      sym_formatting_comment,
    ACTIONS(120), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direciton_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [2435] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(44), 1,
      sym_formatting_comment,
    ACTIONS(124), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_not_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direciton_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [2467] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 1,
      aux_sym_using_clause_token1,
    ACTIONS(132), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(134), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(140), 1,
      aux_sym_where_clause_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    STATE(45), 1,
      sym_formatting_comment,
    STATE(50), 1,
      sym_soql_using_clause,
    STATE(56), 1,
      sym_where_clause,
    STATE(65), 1,
      sym_soql_with_clause,
    STATE(90), 1,
      sym_group_by_clause,
    STATE(117), 1,
      sym_order_by_clause,
    STATE(182), 1,
      sym_limit_clause,
    STATE(230), 1,
      sym_offset_clause,
    STATE(297), 1,
      sym_for_clause,
    STATE(441), 1,
      sym_update_clause,
  [2531] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(148), 1,
      aux_sym_with_division_expression_token1,
    ACTIONS(150), 1,
      aux_sym_with_highlight_token1,
    ACTIONS(152), 1,
      aux_sym_with_metadata_expression_token1,
    ACTIONS(154), 1,
      aux_sym_with_network_expression_token1,
    ACTIONS(156), 1,
      aux_sym_with_pricebook_expression_token1,
    ACTIONS(158), 1,
      aux_sym_with_snippet_expression_token1,
    ACTIONS(160), 1,
      aux_sym_with_spell_correction_expression_token1,
    ACTIONS(162), 1,
      aux_sym_with_data_cat_expression_token1,
    STATE(46), 1,
      sym_formatting_comment,
    STATE(237), 1,
      sym_sosl_with_type,
    STATE(239), 8,
      sym_with_division_expression,
      sym_with_highlight,
      sym_with_metadata_expression,
      sym_with_network_expression,
      sym_with_pricebook_expression,
      sym_with_snippet_expression,
      sym_with_spell_correction_expression,
      sym_with_data_cat_expression,
  [2575] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(164), 1,
      aux_sym_in_clause_token1,
    ACTIONS(168), 1,
      aux_sym_having_not_expression_token1,
    STATE(8), 1,
      sym_value_comparison_operator,
    STATE(47), 1,
      sym_formatting_comment,
    STATE(108), 1,
      sym__comparison,
    STATE(340), 1,
      sym_set_comparison_operator,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(83), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(166), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2617] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(164), 1,
      aux_sym_in_clause_token1,
    ACTIONS(168), 1,
      aux_sym_having_not_expression_token1,
    STATE(5), 1,
      sym_value_comparison_operator,
    STATE(48), 1,
      sym_formatting_comment,
    STATE(296), 1,
      sym__having_comparison,
    STATE(367), 1,
      sym_set_comparison_operator,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(295), 2,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(166), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2659] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(164), 1,
      aux_sym_in_clause_token1,
    ACTIONS(168), 1,
      aux_sym_having_not_expression_token1,
    STATE(9), 1,
      sym_value_comparison_operator,
    STATE(49), 1,
      sym_formatting_comment,
    STATE(158), 1,
      sym__having_comparison,
    STATE(380), 1,
      sym_set_comparison_operator,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(162), 2,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(166), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2701] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(132), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(134), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(140), 1,
      aux_sym_where_clause_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_formatting_comment,
    STATE(57), 1,
      sym_where_clause,
    STATE(66), 1,
      sym_soql_with_clause,
    STATE(84), 1,
      sym_group_by_clause,
    STATE(130), 1,
      sym_order_by_clause,
    STATE(177), 1,
      sym_limit_clause,
    STATE(253), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(390), 1,
      sym_update_clause,
  [2759] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(164), 1,
      aux_sym_in_clause_token1,
    ACTIONS(168), 1,
      aux_sym_having_not_expression_token1,
    STATE(4), 1,
      sym_value_comparison_operator,
    STATE(51), 1,
      sym_formatting_comment,
    STATE(283), 1,
      sym_set_comparison_operator,
    STATE(305), 1,
      sym__comparison,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(336), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(166), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2801] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(164), 1,
      aux_sym_in_clause_token1,
    ACTIONS(168), 1,
      aux_sym_having_not_expression_token1,
    STATE(8), 1,
      sym_value_comparison_operator,
    STATE(52), 1,
      sym_formatting_comment,
    STATE(232), 1,
      sym__comparison,
    STATE(340), 1,
      sym_set_comparison_operator,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(83), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(166), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2843] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(107), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(53), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(105), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2871] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(54), 1,
      sym_formatting_comment,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(99), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(183), 1,
      aux_sym_having_or_expression_token1,
    STATE(55), 1,
      sym_formatting_comment,
    ACTIONS(181), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2927] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(132), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(134), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_formatting_comment,
    STATE(66), 1,
      sym_soql_with_clause,
    STATE(84), 1,
      sym_group_by_clause,
    STATE(130), 1,
      sym_order_by_clause,
    STATE(177), 1,
      sym_limit_clause,
    STATE(253), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(390), 1,
      sym_update_clause,
  [2979] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(132), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(134), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_formatting_comment,
    STATE(63), 1,
      sym_soql_with_clause,
    STATE(94), 1,
      sym_group_by_clause,
    STATE(131), 1,
      sym_order_by_clause,
    STATE(191), 1,
      sym_limit_clause,
    STATE(223), 1,
      sym_offset_clause,
    STATE(302), 1,
      sym_for_clause,
    STATE(386), 1,
      sym_update_clause,
  [3031] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(58), 1,
      sym_formatting_comment,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(189), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [3061] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      aux_sym_in_clause_token1,
    ACTIONS(195), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(197), 1,
      aux_sym_sosl_with_clause_token1,
    STATE(59), 1,
      sym_formatting_comment,
    STATE(62), 1,
      sym_in_clause,
    STATE(68), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(107), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(208), 1,
      sym_returning_clause,
    STATE(247), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_sosl_with_clause,
    STATE(284), 1,
      sym_offset_clause,
    STATE(458), 1,
      sym_update_clause,
  [3113] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(60), 1,
      sym_formatting_comment,
    ACTIONS(107), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
    ACTIONS(105), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [3138] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(61), 1,
      sym_formatting_comment,
    STATE(72), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(203), 9,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3171] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(195), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(197), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_formatting_comment,
    STATE(67), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(101), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(208), 1,
      sym_returning_clause,
    STATE(229), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_sosl_with_clause,
    STATE(314), 1,
      sym_offset_clause,
    STATE(422), 1,
      sym_update_clause,
  [3217] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(134), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_formatting_comment,
    STATE(81), 1,
      sym_group_by_clause,
    STATE(116), 1,
      sym_order_by_clause,
    STATE(175), 1,
      sym_limit_clause,
    STATE(224), 1,
      sym_offset_clause,
    STATE(334), 1,
      sym_for_clause,
    STATE(413), 1,
      sym_update_clause,
  [3263] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(205), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(64), 1,
      sym_formatting_comment,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(215), 9,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3291] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(134), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_formatting_comment,
    STATE(84), 1,
      sym_group_by_clause,
    STATE(130), 1,
      sym_order_by_clause,
    STATE(177), 1,
      sym_limit_clause,
    STATE(253), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(390), 1,
      sym_update_clause,
  [3337] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(134), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_formatting_comment,
    STATE(94), 1,
      sym_group_by_clause,
    STATE(131), 1,
      sym_order_by_clause,
    STATE(191), 1,
      sym_limit_clause,
    STATE(223), 1,
      sym_offset_clause,
    STATE(302), 1,
      sym_for_clause,
    STATE(386), 1,
      sym_update_clause,
  [3383] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(195), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(197), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_formatting_comment,
    STATE(114), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(141), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(208), 1,
      sym_returning_clause,
    STATE(242), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_sosl_with_clause,
    STATE(350), 1,
      sym_offset_clause,
    STATE(396), 1,
      sym_update_clause,
  [3429] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(195), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(197), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_formatting_comment,
    STATE(101), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(141), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(208), 1,
      sym_returning_clause,
    STATE(229), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_sosl_with_clause,
    STATE(314), 1,
      sym_offset_clause,
    STATE(422), 1,
      sym_update_clause,
  [3475] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(69), 1,
      sym_formatting_comment,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(189), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [3499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(221), 1,
      aux_sym_having_or_expression_token1,
    STATE(70), 1,
      sym_formatting_comment,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3522] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(225), 1,
      aux_sym_having_or_expression_token1,
    STATE(71), 1,
      sym_formatting_comment,
    ACTIONS(223), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3545] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      sym_formatting_comment,
    STATE(75), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(227), 10,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3570] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(231), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(233), 1,
      aux_sym_having_or_expression_token1,
    STATE(73), 1,
      sym_formatting_comment,
    STATE(105), 1,
      aux_sym_or_expression_repeat1,
    STATE(110), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(229), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3599] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_from_clause_repeat1,
    STATE(74), 1,
      sym_formatting_comment,
    ACTIONS(201), 10,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(75), 2,
      sym_formatting_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(213), 10,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(240), 1,
      aux_sym_having_or_expression_token1,
    STATE(76), 1,
      sym_formatting_comment,
    ACTIONS(238), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3670] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(244), 1,
      aux_sym_having_or_expression_token1,
    STATE(77), 1,
      sym_formatting_comment,
    ACTIONS(242), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(248), 1,
      aux_sym_having_or_expression_token1,
    STATE(78), 1,
      sym_formatting_comment,
    ACTIONS(246), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3716] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(252), 1,
      aux_sym_having_or_expression_token1,
    STATE(79), 1,
      sym_formatting_comment,
    ACTIONS(250), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3738] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(256), 1,
      aux_sym_having_or_expression_token1,
    STATE(80), 1,
      sym_formatting_comment,
    ACTIONS(254), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3760] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_formatting_comment,
    STATE(120), 1,
      sym_order_by_clause,
    STATE(200), 1,
      sym_limit_clause,
    STATE(240), 1,
      sym_offset_clause,
    STATE(358), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [3800] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(262), 1,
      aux_sym_having_and_expression_token1,
    STATE(82), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3822] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(267), 1,
      aux_sym_having_or_expression_token1,
    STATE(83), 1,
      sym_formatting_comment,
    ACTIONS(265), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3844] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_formatting_comment,
    STATE(131), 1,
      sym_order_by_clause,
    STATE(191), 1,
      sym_limit_clause,
    STATE(223), 1,
      sym_offset_clause,
    STATE(302), 1,
      sym_for_clause,
    STATE(386), 1,
      sym_update_clause,
  [3884] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(85), 1,
      sym_formatting_comment,
    ACTIONS(269), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3904] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(86), 1,
      sym_formatting_comment,
    ACTIONS(271), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3924] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(87), 1,
      sym_formatting_comment,
    STATE(92), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(112), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [3950] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(140), 1,
      aux_sym_where_clause_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      aux_sym_using_clause_token1,
    STATE(88), 1,
      sym_formatting_comment,
    STATE(128), 1,
      sym_using_clause,
    STATE(193), 1,
      sym_where_clause,
    STATE(256), 1,
      sym_order_by_clause,
    STATE(330), 1,
      sym_limit_clause,
    STATE(397), 1,
      sym_offset_clause,
  [3990] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(281), 1,
      aux_sym_having_or_expression_token1,
    STATE(89), 1,
      sym_formatting_comment,
    ACTIONS(279), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4012] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_formatting_comment,
    STATE(130), 1,
      sym_order_by_clause,
    STATE(177), 1,
      sym_limit_clause,
    STATE(253), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(390), 1,
      sym_update_clause,
  [4052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(285), 1,
      aux_sym_having_and_expression_token1,
    STATE(82), 1,
      aux_sym_with_data_cat_expression_repeat1,
    STATE(91), 1,
      sym_formatting_comment,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4076] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(92), 1,
      sym_formatting_comment,
    STATE(96), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(99), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4102] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(289), 1,
      aux_sym_having_or_expression_token1,
    STATE(93), 1,
      sym_formatting_comment,
    ACTIONS(287), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4124] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_formatting_comment,
    STATE(116), 1,
      sym_order_by_clause,
    STATE(175), 1,
      sym_limit_clause,
    STATE(224), 1,
      sym_offset_clause,
    STATE(334), 1,
      sym_for_clause,
    STATE(413), 1,
      sym_update_clause,
  [4164] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(95), 1,
      sym_formatting_comment,
    ACTIONS(213), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4184] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(107), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(96), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(105), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4208] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(285), 1,
      aux_sym_having_and_expression_token1,
    STATE(91), 1,
      aux_sym_with_data_cat_expression_repeat1,
    STATE(97), 1,
      sym_formatting_comment,
    ACTIONS(294), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4232] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(300), 1,
      aux_sym_order_null_direciton_token1,
    STATE(98), 1,
      sym_formatting_comment,
    STATE(144), 1,
      sym_order_direction,
    STATE(217), 1,
      sym_order_null_direciton,
    ACTIONS(298), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(296), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4260] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(304), 1,
      aux_sym_having_and_expression_token1,
    STATE(99), 2,
      sym_formatting_comment,
      aux_sym_and_expression_repeat1,
    ACTIONS(302), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(309), 1,
      aux_sym_having_or_expression_token1,
    STATE(100), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
    ACTIONS(307), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4302] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(197), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_formatting_comment,
    STATE(181), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(242), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_sosl_with_clause,
    STATE(350), 1,
      sym_offset_clause,
    STATE(396), 1,
      sym_update_clause,
  [4339] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(162), 1,
      aux_sym_with_data_cat_expression_token1,
    ACTIONS(314), 1,
      aux_sym_with_user_id_type_token1,
    ACTIONS(316), 1,
      aux_sym_with_record_visibility_expression_token1,
    STATE(102), 1,
      sym_formatting_comment,
    STATE(183), 1,
      sym_soql_with_type,
    ACTIONS(312), 3,
      aux_sym_soql_with_type_token1,
      aux_sym_soql_with_type_token2,
      aux_sym_soql_with_type_token3,
    STATE(187), 3,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [4368] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(103), 1,
      sym_formatting_comment,
    ACTIONS(260), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4387] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(104), 1,
      sym_formatting_comment,
    ACTIONS(318), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4406] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(233), 1,
      aux_sym_having_or_expression_token1,
    STATE(100), 1,
      aux_sym_or_expression_repeat1,
    STATE(105), 1,
      sym_formatting_comment,
    ACTIONS(320), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(324), 1,
      aux_sym_having_or_expression_token1,
    STATE(106), 1,
      sym_formatting_comment,
    ACTIONS(322), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4450] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(197), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym_formatting_comment,
    STATE(181), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(229), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_sosl_with_clause,
    STATE(314), 1,
      sym_offset_clause,
    STATE(422), 1,
      sym_update_clause,
  [4487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(328), 1,
      aux_sym_having_or_expression_token1,
    STATE(108), 1,
      sym_formatting_comment,
    ACTIONS(326), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4508] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(332), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(334), 1,
      aux_sym_having_or_expression_token1,
    STATE(109), 1,
      sym_formatting_comment,
    STATE(159), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(164), 1,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(330), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4535] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(231), 1,
      aux_sym_having_and_expression_token1,
    STATE(99), 1,
      aux_sym_and_expression_repeat1,
    STATE(110), 1,
      sym_formatting_comment,
    ACTIONS(336), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4558] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(111), 1,
      sym_formatting_comment,
    ACTIONS(338), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(112), 1,
      sym_formatting_comment,
    ACTIONS(107), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
    ACTIONS(105), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(342), 1,
      aux_sym_having_or_expression_token1,
    STATE(113), 1,
      sym_formatting_comment,
    ACTIONS(340), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4619] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(197), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_formatting_comment,
    STATE(181), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(226), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_sosl_with_clause,
    STATE(355), 1,
      sym_offset_clause,
    STATE(476), 1,
      sym_update_clause,
  [4656] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(115), 1,
      sym_formatting_comment,
    ACTIONS(346), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4675] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_formatting_comment,
    STATE(200), 1,
      sym_limit_clause,
    STATE(240), 1,
      sym_offset_clause,
    STATE(358), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [4709] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_formatting_comment,
    STATE(177), 1,
      sym_limit_clause,
    STATE(253), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(390), 1,
      sym_update_clause,
  [4743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(118), 1,
      sym_formatting_comment,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(116), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    STATE(119), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(351), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4783] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_formatting_comment,
    STATE(194), 1,
      sym_limit_clause,
    STATE(244), 1,
      sym_offset_clause,
    STATE(354), 1,
      sym_for_clause,
    STATE(389), 1,
      sym_update_clause,
  [4817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(355), 1,
      aux_sym_having_or_expression_token1,
    STATE(121), 1,
      sym_formatting_comment,
    ACTIONS(307), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4837] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(122), 1,
      sym_formatting_comment,
    ACTIONS(302), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4855] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(123), 1,
      sym_formatting_comment,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(112), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4875] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(124), 1,
      sym_formatting_comment,
    ACTIONS(359), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4897] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(125), 1,
      sym_formatting_comment,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(124), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4917] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(126), 1,
      sym_formatting_comment,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(120), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4937] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(127), 1,
      sym_formatting_comment,
    ACTIONS(361), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4959] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(140), 1,
      aux_sym_where_clause_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_formatting_comment,
    STATE(185), 1,
      sym_where_clause,
    STATE(245), 1,
      sym_order_by_clause,
    STATE(310), 1,
      sym_limit_clause,
    STATE(429), 1,
      sym_offset_clause,
  [4993] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(369), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(371), 1,
      sym_identifier,
    STATE(129), 1,
      sym_formatting_comment,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(367), 5,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5017] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_formatting_comment,
    STATE(191), 1,
      sym_limit_clause,
    STATE(223), 1,
      sym_offset_clause,
    STATE(302), 1,
      sym_for_clause,
    STATE(386), 1,
      sym_update_clause,
  [5051] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_formatting_comment,
    STATE(175), 1,
      sym_limit_clause,
    STATE(224), 1,
      sym_offset_clause,
    STATE(334), 1,
      sym_for_clause,
    STATE(413), 1,
      sym_update_clause,
  [5085] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(132), 1,
      sym_formatting_comment,
    ACTIONS(373), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5103] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(133), 1,
      sym_formatting_comment,
    ACTIONS(375), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5121] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(134), 1,
      sym_formatting_comment,
    ACTIONS(377), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5138] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(135), 1,
      sym_formatting_comment,
    ACTIONS(379), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5155] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(136), 1,
      sym_formatting_comment,
    ACTIONS(381), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5172] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(137), 1,
      sym_formatting_comment,
    ACTIONS(383), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5189] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(387), 1,
      aux_sym_using_scope_type_token3,
    STATE(132), 1,
      sym_using_scope_type,
    STATE(138), 1,
      sym_formatting_comment,
    ACTIONS(385), 6,
      aux_sym_using_scope_type_token1,
      aux_sym_using_scope_type_token2,
      aux_sym_using_scope_type_token4,
      aux_sym_using_scope_type_token5,
      aux_sym_using_scope_type_token6,
      aux_sym_using_scope_type_token7,
  [5210] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_formatting_comment,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_formatting_comment,
    STATE(147), 1,
      aux_sym_returning_clause_repeat1,
    ACTIONS(393), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5250] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(399), 1,
      aux_sym_returning_clause_token1,
    STATE(208), 1,
      sym_returning_clause,
    STATE(141), 2,
      sym_formatting_comment,
      aux_sym_sosl_query_body_repeat1,
    ACTIONS(397), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5271] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      sym_formatting_comment,
    STATE(166), 1,
      aux_sym_selected_fields_repeat1,
    ACTIONS(404), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5292] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(143), 1,
      sym_formatting_comment,
    ACTIONS(406), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5309] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(300), 1,
      aux_sym_order_null_direciton_token1,
    STATE(144), 1,
      sym_formatting_comment,
    STATE(203), 1,
      sym_order_null_direciton,
    ACTIONS(408), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5330] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(145), 1,
      sym_formatting_comment,
    ACTIONS(410), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5347] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(414), 1,
      aux_sym_having_or_expression_token1,
    STATE(146), 1,
      sym_formatting_comment,
    ACTIONS(412), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_formatting_comment,
    STATE(157), 1,
      aux_sym_returning_clause_repeat1,
    ACTIONS(416), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(420), 1,
      aux_sym_having_or_expression_token1,
    STATE(148), 1,
      sym_formatting_comment,
    ACTIONS(418), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5406] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(149), 1,
      sym_formatting_comment,
    ACTIONS(351), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5423] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(424), 1,
      aux_sym_having_or_expression_token1,
    STATE(150), 1,
      sym_formatting_comment,
    ACTIONS(422), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(428), 1,
      aux_sym_having_or_expression_token1,
    STATE(151), 1,
      sym_formatting_comment,
    ACTIONS(426), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5461] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(432), 1,
      aux_sym_having_or_expression_token1,
    STATE(152), 1,
      sym_formatting_comment,
    ACTIONS(430), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(436), 1,
      aux_sym_having_or_expression_token1,
    STATE(153), 2,
      sym_formatting_comment,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(434), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(441), 1,
      aux_sym_having_and_expression_token1,
    STATE(154), 2,
      sym_formatting_comment,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(439), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5518] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(155), 1,
      sym_formatting_comment,
    ACTIONS(444), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5535] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(448), 1,
      aux_sym_having_or_expression_token1,
    STATE(156), 1,
      sym_formatting_comment,
    ACTIONS(446), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5554] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(157), 2,
      sym_formatting_comment,
      aux_sym_returning_clause_repeat1,
    ACTIONS(450), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(457), 1,
      aux_sym_having_or_expression_token1,
    STATE(158), 1,
      sym_formatting_comment,
    ACTIONS(455), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(332), 1,
      aux_sym_having_and_expression_token1,
    STATE(154), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(159), 1,
      sym_formatting_comment,
    ACTIONS(459), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5613] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(160), 1,
      sym_formatting_comment,
    ACTIONS(365), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5630] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_selected_fields_repeat1,
    STATE(161), 1,
      sym_formatting_comment,
    ACTIONS(461), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(465), 1,
      aux_sym_having_or_expression_token1,
    STATE(162), 1,
      sym_formatting_comment,
    ACTIONS(463), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5670] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(469), 1,
      aux_sym_having_clause_token1,
    STATE(163), 1,
      sym_formatting_comment,
    STATE(201), 1,
      sym_having_clause,
    ACTIONS(467), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5691] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(334), 1,
      aux_sym_having_or_expression_token1,
    STATE(153), 1,
      aux_sym_having_or_expression_repeat1,
    STATE(164), 1,
      sym_formatting_comment,
    ACTIONS(471), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5712] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(165), 1,
      sym_formatting_comment,
    ACTIONS(473), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5729] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(166), 2,
      sym_formatting_comment,
      aux_sym_selected_fields_repeat1,
    ACTIONS(473), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5748] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(167), 1,
      sym_formatting_comment,
    ACTIONS(478), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5765] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(168), 1,
      sym_formatting_comment,
    ACTIONS(229), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5782] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(169), 1,
      sym_formatting_comment,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      aux_sym_in_clause_token1,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5798] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_formatting_comment,
    STATE(195), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(484), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5818] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(171), 1,
      sym_formatting_comment,
    ACTIONS(486), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_null_direciton_token1,
  [5834] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(172), 2,
      sym_formatting_comment,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(491), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5852] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(173), 1,
      sym_formatting_comment,
    ACTIONS(493), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5868] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(174), 1,
      sym_formatting_comment,
    ACTIONS(495), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5884] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym_formatting_comment,
    STATE(240), 1,
      sym_offset_clause,
    STATE(358), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [5912] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(176), 1,
      sym_formatting_comment,
    ACTIONS(497), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5928] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_formatting_comment,
    STATE(223), 1,
      sym_offset_clause,
    STATE(302), 1,
      sym_for_clause,
    STATE(386), 1,
      sym_update_clause,
  [5956] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(178), 1,
      sym_formatting_comment,
    ACTIONS(499), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5972] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(179), 1,
      sym_formatting_comment,
    ACTIONS(501), 7,
      ts_builtin_sym_end,
      aux_sym_in_clause_token1,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5988] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(180), 1,
      sym_formatting_comment,
    STATE(255), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(505), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6012] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(509), 1,
      aux_sym_sosl_with_clause_token1,
    STATE(248), 1,
      sym_sosl_with_clause,
    STATE(181), 2,
      sym_formatting_comment,
      aux_sym_sosl_query_body_repeat2,
    ACTIONS(507), 4,
      ts_builtin_sym_end,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6032] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_formatting_comment,
    STATE(253), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(390), 1,
      sym_update_clause,
  [6060] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(183), 1,
      sym_formatting_comment,
    ACTIONS(512), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6076] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(184), 1,
      sym_formatting_comment,
    ACTIONS(514), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6092] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_formatting_comment,
    STATE(233), 1,
      sym_order_by_clause,
    STATE(285), 1,
      sym_limit_clause,
    STATE(462), 1,
      sym_offset_clause,
  [6120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(186), 1,
      sym_formatting_comment,
    ACTIONS(518), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6136] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(187), 1,
      sym_formatting_comment,
    ACTIONS(520), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6152] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(188), 1,
      sym_formatting_comment,
    ACTIONS(522), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6168] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(189), 1,
      sym_formatting_comment,
    ACTIONS(450), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6184] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(190), 1,
      sym_formatting_comment,
    ACTIONS(524), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6200] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_formatting_comment,
    STATE(224), 1,
      sym_offset_clause,
    STATE(334), 1,
      sym_for_clause,
    STATE(413), 1,
      sym_update_clause,
  [6228] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(192), 1,
      sym_formatting_comment,
    ACTIONS(526), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6244] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(146), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_formatting_comment,
    STATE(245), 1,
      sym_order_by_clause,
    STATE(310), 1,
      sym_limit_clause,
    STATE(429), 1,
      sym_offset_clause,
  [6272] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_formatting_comment,
    STATE(231), 1,
      sym_offset_clause,
    STATE(341), 1,
      sym_for_clause,
    STATE(403), 1,
      sym_update_clause,
  [6300] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(195), 1,
      sym_formatting_comment,
    ACTIONS(530), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6320] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(196), 1,
      sym_formatting_comment,
    ACTIONS(532), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6336] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(197), 1,
      sym_formatting_comment,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6352] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(198), 1,
      sym_formatting_comment,
    ACTIONS(439), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(536), 1,
      aux_sym_having_or_expression_token1,
    STATE(199), 1,
      sym_formatting_comment,
    ACTIONS(434), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6386] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_formatting_comment,
    STATE(244), 1,
      sym_offset_clause,
    STATE(354), 1,
      sym_for_clause,
    STATE(389), 1,
      sym_update_clause,
  [6414] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(201), 1,
      sym_formatting_comment,
    ACTIONS(538), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6429] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(540), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(542), 1,
      aux_sym_when_expression_token1,
    ACTIONS(544), 1,
      aux_sym_else_expression_token1,
    STATE(202), 1,
      sym_formatting_comment,
    STATE(216), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(315), 1,
      sym_when_expression,
    STATE(424), 1,
      sym_else_expression,
  [6454] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(203), 1,
      sym_formatting_comment,
    ACTIONS(546), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_formatting_comment,
    ACTIONS(548), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6486] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(205), 1,
      sym_formatting_comment,
    ACTIONS(552), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6501] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_DOT,
    STATE(206), 1,
      sym_formatting_comment,
    STATE(211), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(99), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6522] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(207), 1,
      sym_formatting_comment,
    ACTIONS(556), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6541] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(208), 1,
      sym_formatting_comment,
    ACTIONS(558), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6556] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(209), 1,
      sym_formatting_comment,
    ACTIONS(560), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6571] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_DOT,
    STATE(206), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(210), 1,
      sym_formatting_comment,
    ACTIONS(112), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_DOT,
    STATE(211), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(105), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6611] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(212), 1,
      sym_formatting_comment,
    ACTIONS(565), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6626] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(213), 1,
      sym_formatting_comment,
    ACTIONS(567), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6641] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(569), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(571), 1,
      sym_bound_apex_expression,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(214), 1,
      sym_formatting_comment,
    STATE(478), 1,
      sym_field_identifier,
    STATE(493), 1,
      sym_geo_location_type,
  [6666] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(215), 1,
      sym_formatting_comment,
    ACTIONS(491), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6681] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(542), 1,
      aux_sym_when_expression_token1,
    ACTIONS(544), 1,
      aux_sym_else_expression_token1,
    ACTIONS(573), 1,
      aux_sym_type_of_clause_token2,
    STATE(216), 1,
      sym_formatting_comment,
    STATE(225), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(315), 1,
      sym_when_expression,
    STATE(447), 1,
      sym_else_expression,
  [6706] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(217), 1,
      sym_formatting_comment,
    ACTIONS(408), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6721] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(569), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(571), 1,
      sym_bound_apex_expression,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(218), 1,
      sym_formatting_comment,
    STATE(477), 1,
      sym_geo_location_type,
    STATE(478), 1,
      sym_field_identifier,
  [6746] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(219), 1,
      sym_formatting_comment,
    ACTIONS(575), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6761] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(569), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(571), 1,
      sym_bound_apex_expression,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(220), 1,
      sym_formatting_comment,
    STATE(478), 1,
      sym_field_identifier,
    STATE(495), 1,
      sym_geo_location_type,
  [6786] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(221), 1,
      sym_formatting_comment,
    STATE(455), 1,
      sym_in_type,
    ACTIONS(577), 5,
      aux_sym_in_type_token1,
      aux_sym_in_type_token2,
      aux_sym_in_type_token3,
      aux_sym_in_type_token4,
      aux_sym_in_type_token5,
  [6803] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(222), 1,
      sym_formatting_comment,
    ACTIONS(330), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6818] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_formatting_comment,
    STATE(334), 1,
      sym_for_clause,
    STATE(413), 1,
      sym_update_clause,
  [6840] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym_formatting_comment,
    STATE(358), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [6862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(581), 1,
      aux_sym_when_expression_token1,
    STATE(315), 1,
      sym_when_expression,
    ACTIONS(579), 2,
      aux_sym_type_of_clause_token2,
      aux_sym_else_expression_token1,
    STATE(225), 2,
      sym_formatting_comment,
      aux_sym_type_of_clause_repeat1,
  [6880] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_formatting_comment,
    STATE(335), 1,
      sym_offset_clause,
    STATE(412), 1,
      sym_update_clause,
  [6902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(227), 1,
      sym_formatting_comment,
    ACTIONS(107), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(105), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      sym_formatting_comment,
    STATE(255), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(505), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6936] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(229), 1,
      sym_formatting_comment,
    STATE(350), 1,
      sym_offset_clause,
    STATE(396), 1,
      sym_update_clause,
  [6958] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      sym_formatting_comment,
    STATE(361), 1,
      sym_for_clause,
    STATE(390), 1,
      sym_update_clause,
  [6980] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym_formatting_comment,
    STATE(338), 1,
      sym_for_clause,
    STATE(407), 1,
      sym_update_clause,
  [7002] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(232), 1,
      sym_formatting_comment,
    ACTIONS(588), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7016] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym_formatting_comment,
    STATE(291), 1,
      sym_limit_clause,
    STATE(446), 1,
      sym_offset_clause,
  [7038] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(234), 1,
      sym_formatting_comment,
    ACTIONS(592), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_offset_clause_token1,
  [7052] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(594), 1,
      aux_sym_having_or_expression_token1,
    STATE(110), 1,
      aux_sym_and_expression_repeat1,
    STATE(235), 1,
      sym_formatting_comment,
    STATE(307), 1,
      aux_sym_or_expression_repeat1,
  [7074] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(596), 1,
      aux_sym_having_or_expression_token1,
    STATE(159), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(236), 1,
      sym_formatting_comment,
    STATE(298), 1,
      aux_sym_having_or_expression_repeat1,
  [7096] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(237), 1,
      sym_formatting_comment,
    ACTIONS(598), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7110] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(238), 1,
      sym_formatting_comment,
    ACTIONS(600), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7124] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(239), 1,
      sym_formatting_comment,
    ACTIONS(602), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7138] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_formatting_comment,
    STATE(354), 1,
      sym_for_clause,
    STATE(389), 1,
      sym_update_clause,
  [7160] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(241), 1,
      sym_formatting_comment,
    ACTIONS(604), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7174] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(242), 1,
      sym_formatting_comment,
    STATE(355), 1,
      sym_offset_clause,
    STATE(476), 1,
      sym_update_clause,
  [7196] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(243), 1,
      sym_formatting_comment,
    ACTIONS(606), 5,
      anon_sym_RPAREN,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [7210] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      sym_formatting_comment,
    STATE(341), 1,
      sym_for_clause,
    STATE(403), 1,
      sym_update_clause,
  [7232] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_formatting_comment,
    STATE(285), 1,
      sym_limit_clause,
    STATE(462), 1,
      sym_offset_clause,
  [7254] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(246), 1,
      sym_formatting_comment,
    ACTIONS(608), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7268] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      sym_formatting_comment,
    STATE(314), 1,
      sym_offset_clause,
    STATE(422), 1,
      sym_update_clause,
  [7290] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(248), 1,
      sym_formatting_comment,
    ACTIONS(610), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7304] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(249), 1,
      sym_formatting_comment,
    ACTIONS(612), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7318] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(250), 1,
      sym_formatting_comment,
    ACTIONS(614), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7332] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(251), 1,
      sym_formatting_comment,
    ACTIONS(616), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7346] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(620), 1,
      aux_sym_with_data_cat_filter_type_token2,
    STATE(252), 1,
      sym_formatting_comment,
    STATE(378), 1,
      sym_with_data_cat_filter_type,
    ACTIONS(618), 3,
      aux_sym_with_data_cat_filter_type_token1,
      aux_sym_with_data_cat_filter_type_token3,
      aux_sym_with_data_cat_filter_type_token4,
  [7364] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_for_clause_token1,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym_formatting_comment,
    STATE(302), 1,
      sym_for_clause,
    STATE(386), 1,
      sym_update_clause,
  [7386] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(254), 2,
      sym_formatting_comment,
      aux_sym_field_list_repeat1,
    ACTIONS(556), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7402] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_field_list_repeat1,
    STATE(255), 1,
      sym_formatting_comment,
    ACTIONS(625), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7420] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(142), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_formatting_comment,
    STATE(310), 1,
      sym_limit_clause,
    STATE(429), 1,
      sym_offset_clause,
  [7442] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      sym_formatting_comment,
    STATE(274), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(629), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(258), 1,
      sym_formatting_comment,
    STATE(331), 1,
      sym_for_type,
    ACTIONS(631), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [7474] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(633), 1,
      sym_bound_apex_expression,
    ACTIONS(635), 1,
      sym_identifier,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(259), 1,
      sym_formatting_comment,
    STATE(498), 1,
      sym_field_identifier,
  [7493] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_find_clause_token1,
    STATE(59), 1,
      sym_find_clause,
    STATE(260), 1,
      sym_formatting_comment,
    STATE(473), 1,
      sym__query_expression,
    STATE(486), 1,
      sym_sosl_query_body,
  [7512] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(64), 1,
      sym_storage_identifier,
    STATE(69), 1,
      sym_dotted_identifier,
    STATE(95), 1,
      sym_storage_alias,
    STATE(261), 1,
      sym_formatting_comment,
  [7531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(257), 1,
      sym_for_type,
    STATE(262), 1,
      sym_formatting_comment,
    ACTIONS(631), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [7546] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(263), 1,
      sym_formatting_comment,
    STATE(415), 1,
      sym_fields_type,
    ACTIONS(639), 3,
      aux_sym_in_type_token1,
      aux_sym_fields_type_token1,
      aux_sym_fields_type_token2,
  [7561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(264), 2,
      sym_formatting_comment,
      aux_sym_update_clause_repeat1,
  [7576] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(646), 1,
      sym_bound_apex_expression,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(265), 1,
      sym_formatting_comment,
    STATE(425), 1,
      sym_field_identifier,
  [7595] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_update_clause_repeat1,
    STATE(266), 1,
      sym_formatting_comment,
    ACTIONS(648), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(652), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(267), 1,
      sym_formatting_comment,
    STATE(369), 1,
      sym_with_record_visibility_param,
    ACTIONS(654), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [7629] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      aux_sym_from_clause_token1,
    ACTIONS(369), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(371), 1,
      sym_identifier,
    STATE(268), 1,
      sym_formatting_comment,
  [7648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    ACTIONS(659), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
    STATE(269), 2,
      sym_formatting_comment,
      aux_sym_for_clause_repeat1,
  [7663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      sym_formatting_comment,
    ACTIONS(124), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7678] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      sym_formatting_comment,
    ACTIONS(112), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7693] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(61), 1,
      sym_storage_identifier,
    STATE(69), 1,
      sym_dotted_identifier,
    STATE(74), 1,
      sym_storage_alias,
    STATE(272), 1,
      sym_formatting_comment,
  [7712] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(273), 1,
      sym_formatting_comment,
    ACTIONS(661), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
  [7725] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_for_clause_repeat1,
    STATE(274), 1,
      sym_formatting_comment,
    ACTIONS(663), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7742] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      sym_formatting_comment,
    ACTIONS(120), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7757] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      sym_formatting_comment,
    ACTIONS(116), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7772] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(652), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(277), 1,
      sym_formatting_comment,
    STATE(325), 1,
      sym_with_record_visibility_param,
    ACTIONS(654), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [7789] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_update_clause_repeat1,
    STATE(278), 1,
      sym_formatting_comment,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7806] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(667), 1,
      sym_bound_apex_expression,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(279), 1,
      sym_formatting_comment,
    STATE(499), 1,
      sym_field_identifier,
  [7825] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(280), 1,
      sym_formatting_comment,
    ACTIONS(556), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7838] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(281), 1,
      sym_formatting_comment,
    ACTIONS(246), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7850] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(282), 1,
      sym_formatting_comment,
    ACTIONS(242), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      sym_bound_apex_expression,
    STATE(283), 1,
      sym_formatting_comment,
    STATE(318), 1,
      sym_subquery,
  [7878] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(284), 1,
      sym_formatting_comment,
    STATE(422), 1,
      sym_update_clause,
  [7894] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym_formatting_comment,
    STATE(446), 1,
      sym_offset_clause,
  [7910] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(286), 1,
      sym_formatting_comment,
    ACTIONS(418), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7922] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(287), 1,
      sym_formatting_comment,
    ACTIONS(422), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7934] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(288), 1,
      sym_formatting_comment,
    ACTIONS(426), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7946] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(289), 1,
      sym_formatting_comment,
    ACTIONS(430), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(673), 1,
      aux_sym_having_or_expression_token1,
    STATE(290), 2,
      sym_formatting_comment,
      aux_sym_having_or_expression_repeat1,
  [7972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_formatting_comment,
    STATE(421), 1,
      sym_offset_clause,
  [7988] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(292), 1,
      sym_formatting_comment,
    ACTIONS(446), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8000] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(293), 1,
      sym_formatting_comment,
    ACTIONS(678), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8012] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      sym_formatting_comment,
    STATE(321), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [8028] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(295), 1,
      sym_formatting_comment,
    ACTIONS(463), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8040] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(296), 1,
      sym_formatting_comment,
    ACTIONS(455), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      sym_formatting_comment,
    STATE(390), 1,
      sym_update_clause,
  [8068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      aux_sym_having_or_expression_token1,
    STATE(290), 1,
      aux_sym_having_or_expression_repeat1,
    STATE(298), 1,
      sym_formatting_comment,
  [8084] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(299), 1,
      sym_formatting_comment,
    ACTIONS(412), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8096] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      aux_sym_from_clause_token1,
    STATE(300), 1,
      sym_formatting_comment,
    STATE(311), 1,
      aux_sym_selected_fields_repeat1,
  [8112] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      aux_sym_having_or_expression_token1,
    STATE(301), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
  [8126] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym_formatting_comment,
    STATE(413), 1,
      sym_update_clause,
  [8142] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(303), 1,
      sym_formatting_comment,
    ACTIONS(340), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8154] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(304), 1,
      sym_formatting_comment,
    ACTIONS(287), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8166] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(305), 1,
      sym_formatting_comment,
    ACTIONS(326), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8178] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      sym_formatting_comment,
    STATE(322), 1,
      aux_sym__having_set_comparison_repeat1,
  [8194] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(594), 1,
      aux_sym_having_or_expression_token1,
    STATE(301), 1,
      aux_sym_or_expression_repeat1,
    STATE(307), 1,
      sym_formatting_comment,
  [8210] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(308), 1,
      sym_formatting_comment,
    ACTIONS(695), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [8222] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(309), 1,
      sym_formatting_comment,
    ACTIONS(279), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      sym_formatting_comment,
    STATE(462), 1,
      sym_offset_clause,
  [8250] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(473), 1,
      aux_sym_from_clause_token1,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(311), 2,
      sym_formatting_comment,
      aux_sym_selected_fields_repeat1,
  [8264] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(312), 1,
      sym_formatting_comment,
    ACTIONS(322), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8276] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(313), 2,
      sym_formatting_comment,
      aux_sym_with_record_visibility_expression_repeat1,
  [8290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      sym_formatting_comment,
    STATE(396), 1,
      sym_update_clause,
  [8306] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(315), 1,
      sym_formatting_comment,
    ACTIONS(705), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [8318] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(707), 1,
      sym_identifier,
    STATE(228), 1,
      sym_dotted_identifier,
    STATE(316), 1,
      sym_formatting_comment,
    STATE(443), 1,
      sym_field_list,
  [8334] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(317), 1,
      sym_formatting_comment,
    ACTIONS(181), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8346] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(318), 1,
      sym_formatting_comment,
    ACTIONS(254), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8358] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(319), 1,
      sym_formatting_comment,
    ACTIONS(238), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8370] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_with_data_cat_filter_repeat1,
    STATE(320), 1,
      sym_formatting_comment,
  [8386] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(321), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_filter_repeat1,
  [8400] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(322), 2,
      sym_formatting_comment,
      aux_sym__having_set_comparison_repeat1,
  [8414] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(323), 1,
      sym_formatting_comment,
    ACTIONS(250), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8426] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(324), 1,
      sym_formatting_comment,
    ACTIONS(223), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8438] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      sym_formatting_comment,
    STATE(346), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [8454] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(635), 1,
      sym_identifier,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(326), 1,
      sym_formatting_comment,
    STATE(347), 1,
      sym_field_identifier,
  [8470] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(725), 1,
      aux_sym_from_clause_token1,
    STATE(300), 1,
      aux_sym_selected_fields_repeat1,
    STATE(327), 1,
      sym_formatting_comment,
  [8486] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(328), 1,
      sym_formatting_comment,
    ACTIONS(219), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8498] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym_formatting_comment,
    STATE(333), 1,
      aux_sym__having_set_comparison_repeat1,
  [8514] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      sym_formatting_comment,
    STATE(429), 1,
      sym_offset_clause,
  [8530] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(331), 1,
      sym_formatting_comment,
    ACTIONS(659), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [8542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(278), 1,
      sym_update_type,
    STATE(332), 1,
      sym_formatting_comment,
    ACTIONS(729), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [8556] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(333), 1,
      sym_formatting_comment,
  [8572] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      sym_formatting_comment,
    STATE(434), 1,
      sym_update_clause,
  [8588] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    STATE(335), 1,
      sym_formatting_comment,
    STATE(435), 1,
      sym_update_clause,
  [8604] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(336), 1,
      sym_formatting_comment,
    ACTIONS(265), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8616] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(337), 1,
      sym_formatting_comment,
  [8632] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      sym_formatting_comment,
    STATE(410), 1,
      sym_update_clause,
  [8648] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(339), 1,
      sym_formatting_comment,
  [8664] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      sym_bound_apex_expression,
    STATE(80), 1,
      sym_subquery,
    STATE(340), 1,
      sym_formatting_comment,
  [8680] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      sym_formatting_comment,
    STATE(407), 1,
      sym_update_clause,
  [8696] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(251), 1,
      sym_boolean,
    STATE(342), 1,
      sym_formatting_comment,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [8710] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(343), 1,
      sym_formatting_comment,
    STATE(368), 1,
      sym_boolean,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [8724] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      sym_formatting_comment,
    STATE(349), 1,
      aux_sym__having_set_comparison_repeat1,
  [8740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(345), 1,
      sym_formatting_comment,
    STATE(352), 1,
      sym_update_type,
    ACTIONS(729), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [8754] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      aux_sym_with_record_visibility_expression_repeat1,
    STATE(346), 1,
      sym_formatting_comment,
  [8770] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_formatting_comment,
    STATE(360), 1,
      aux_sym__group_by_expression_repeat2,
  [8786] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(348), 1,
      sym_formatting_comment,
  [8802] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(349), 1,
      sym_formatting_comment,
  [8818] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(350), 1,
      sym_formatting_comment,
    STATE(476), 1,
      sym_update_clause,
  [8834] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    STATE(351), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat2,
  [8848] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(352), 1,
      sym_formatting_comment,
    ACTIONS(641), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8860] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    STATE(353), 1,
      sym_formatting_comment,
    STATE(365), 1,
      sym_select_clause,
    STATE(501), 1,
      sym_soql_query_body,
  [8876] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      sym_formatting_comment,
    STATE(403), 1,
      sym_update_clause,
  [8892] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(355), 1,
      sym_formatting_comment,
    STATE(412), 1,
      sym_update_clause,
  [8908] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(356), 1,
      sym_formatting_comment,
    ACTIONS(762), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [8920] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(635), 1,
      sym_identifier,
    STATE(123), 1,
      sym_dotted_identifier,
    STATE(357), 1,
      sym_formatting_comment,
    STATE(363), 1,
      sym_field_identifier,
  [8936] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      sym_formatting_comment,
    STATE(389), 1,
      sym_update_clause,
  [8952] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(707), 1,
      sym_identifier,
    STATE(228), 1,
      sym_dotted_identifier,
    STATE(308), 1,
      sym_field_list,
    STATE(359), 1,
      sym_formatting_comment,
  [8968] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      aux_sym__group_by_expression_repeat2,
    STATE(360), 1,
      sym_formatting_comment,
  [8984] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      aux_sym_for_type_token1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      sym_formatting_comment,
    STATE(386), 1,
      sym_update_clause,
  [9000] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(362), 1,
      sym_formatting_comment,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9011] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(363), 1,
      sym_formatting_comment,
    ACTIONS(760), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9022] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(766), 1,
      sym_identifier,
    STATE(280), 1,
      sym_dotted_identifier,
    STATE(364), 1,
      sym_formatting_comment,
  [9035] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(768), 1,
      aux_sym_from_clause_token1,
    STATE(45), 1,
      sym_from_clause,
    STATE(365), 1,
      sym_formatting_comment,
  [9048] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(770), 1,
      sym_term_separator_start,
    ACTIONS(772), 1,
      sym_bound_apex_expression,
    STATE(366), 1,
      sym_formatting_comment,
  [9061] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(776), 1,
      sym_bound_apex_expression,
    STATE(367), 1,
      sym_formatting_comment,
  [9074] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(368), 1,
      sym_formatting_comment,
    ACTIONS(778), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9085] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(369), 1,
      sym_formatting_comment,
    ACTIONS(703), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(780), 1,
      sym_identifier,
    STATE(140), 1,
      sym_sobject_return,
    STATE(370), 1,
      sym_formatting_comment,
  [9109] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(371), 1,
      sym_formatting_comment,
    ACTIONS(719), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(372), 1,
      sym_formatting_comment,
    ACTIONS(782), 2,
      sym_bound_apex_expression,
      sym_int,
  [9131] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(373), 1,
      sym_formatting_comment,
    ACTIONS(784), 2,
      sym_bound_apex_expression,
      sym_int,
  [9142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(786), 1,
      aux_sym_order_null_direciton_token2,
    ACTIONS(788), 1,
      aux_sym_order_null_direciton_token3,
    STATE(374), 1,
      sym_formatting_comment,
  [9155] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(375), 1,
      sym_formatting_comment,
    ACTIONS(790), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [9166] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(376), 1,
      sym_formatting_comment,
    ACTIONS(434), 2,
      anon_sym_RPAREN,
      aux_sym_having_or_expression_token1,
  [9177] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(377), 1,
      sym_formatting_comment,
    ACTIONS(307), 2,
      anon_sym_RPAREN,
      aux_sym_having_or_expression_token1,
  [9188] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      sym_identifier,
    STATE(378), 1,
      sym_formatting_comment,
  [9201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(780), 1,
      sym_identifier,
    STATE(189), 1,
      sym_sobject_return,
    STATE(379), 1,
      sym_formatting_comment,
  [9214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_bound_apex_expression,
    STATE(380), 1,
      sym_formatting_comment,
  [9227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(381), 1,
      sym_formatting_comment,
    ACTIONS(800), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [9238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(103), 1,
      sym_with_data_cat_filter,
    STATE(382), 1,
      sym_formatting_comment,
  [9251] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(383), 1,
      sym_formatting_comment,
    ACTIONS(804), 2,
      sym_bound_apex_expression,
      sym_string_literal,
  [9262] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(384), 1,
      sym_formatting_comment,
    ACTIONS(806), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [9273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(97), 1,
      sym_with_data_cat_filter,
    STATE(385), 1,
      sym_formatting_comment,
  [9286] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      sym_formatting_comment,
  [9296] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(808), 1,
      sym_identifier,
    STATE(387), 1,
      sym_formatting_comment,
  [9306] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(810), 1,
      sym_identifier,
    STATE(388), 1,
      sym_formatting_comment,
  [9316] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_formatting_comment,
  [9326] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_formatting_comment,
  [9336] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    STATE(391), 1,
      sym_formatting_comment,
  [9346] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(814), 1,
      aux_sym_using_clause_token2,
    STATE(392), 1,
      sym_formatting_comment,
  [9356] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym_formatting_comment,
  [9366] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(818), 1,
      anon_sym_LPAREN,
    STATE(394), 1,
      sym_formatting_comment,
  [9376] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(820), 1,
      aux_sym_group_by_clause_token2,
    STATE(395), 1,
      sym_formatting_comment,
  [9386] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(396), 1,
      sym_formatting_comment,
  [9396] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_formatting_comment,
  [9406] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(822), 1,
      sym_identifier,
    STATE(398), 1,
      sym_formatting_comment,
  [9416] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(824), 1,
      sym_int,
    STATE(399), 1,
      sym_formatting_comment,
  [9426] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(826), 1,
      sym_int,
    STATE(400), 1,
      sym_formatting_comment,
  [9436] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(828), 1,
      aux_sym_with_snippet_expression_token2,
    STATE(401), 1,
      sym_formatting_comment,
  [9446] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(830), 1,
      sym_string_literal,
    STATE(402), 1,
      sym_formatting_comment,
  [9456] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      sym_formatting_comment,
  [9466] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(832), 1,
      sym_int,
    STATE(404), 1,
      sym_formatting_comment,
  [9476] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      sym_formatting_comment,
  [9486] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      sym_formatting_comment,
  [9496] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      sym_formatting_comment,
  [9506] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      sym_formatting_comment,
  [9516] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(840), 1,
      aux_sym_in_clause_token1,
    STATE(409), 1,
      sym_formatting_comment,
  [9526] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      sym_formatting_comment,
  [9536] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(844), 1,
      sym_string_literal,
    STATE(411), 1,
      sym_formatting_comment,
  [9546] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    STATE(412), 1,
      sym_formatting_comment,
  [9556] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      sym_formatting_comment,
  [9566] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      sym_formatting_comment,
  [9576] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_formatting_comment,
  [9586] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
    STATE(416), 1,
      sym_formatting_comment,
  [9596] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(853), 1,
      anon_sym_EQ,
    STATE(417), 1,
      sym_formatting_comment,
  [9606] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(418), 1,
      sym_formatting_comment,
  [9616] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(725), 1,
      aux_sym_from_clause_token1,
    STATE(419), 1,
      sym_formatting_comment,
  [9626] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(857), 1,
      sym_identifier,
    STATE(420), 1,
      sym_formatting_comment,
  [9636] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_formatting_comment,
  [9646] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(422), 1,
      sym_formatting_comment,
  [9656] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(423), 1,
      sym_formatting_comment,
  [9666] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(573), 1,
      aux_sym_type_of_clause_token2,
    STATE(424), 1,
      sym_formatting_comment,
  [9676] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      sym_formatting_comment,
  [9686] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(865), 1,
      anon_sym_EQ,
    STATE(426), 1,
      sym_formatting_comment,
  [9696] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(867), 1,
      sym_string_literal,
    STATE(427), 1,
      sym_formatting_comment,
  [9706] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(869), 1,
      sym_decimal,
    STATE(428), 1,
      sym_formatting_comment,
  [9716] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      sym_formatting_comment,
  [9726] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      sym_formatting_comment,
  [9736] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      sym_formatting_comment,
  [9746] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(875), 1,
      sym_identifier,
    STATE(432), 1,
      sym_formatting_comment,
  [9756] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(877), 1,
      sym_identifier,
    STATE(433), 1,
      sym_formatting_comment,
  [9766] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_formatting_comment,
  [9776] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(879), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      sym_formatting_comment,
  [9786] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      sym_formatting_comment,
  [9796] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    STATE(437), 1,
      sym_formatting_comment,
  [9806] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(885), 1,
      sym_string_literal,
    STATE(438), 1,
      sym_formatting_comment,
  [9816] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(887), 1,
      aux_sym_soql_using_clause_token1,
    STATE(439), 1,
      sym_formatting_comment,
  [9826] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(889), 1,
      aux_sym_group_by_clause_token2,
    STATE(440), 1,
      sym_formatting_comment,
  [9836] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_formatting_comment,
  [9846] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(891), 1,
      aux_sym_when_expression_token2,
    STATE(442), 1,
      sym_formatting_comment,
  [9856] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(893), 1,
      aux_sym_type_of_clause_token2,
    STATE(443), 1,
      sym_formatting_comment,
  [9866] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    STATE(444), 1,
      sym_formatting_comment,
  [9876] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    STATE(445), 1,
      sym_formatting_comment,
  [9886] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_formatting_comment,
  [9896] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(899), 1,
      aux_sym_type_of_clause_token2,
    STATE(447), 1,
      sym_formatting_comment,
  [9906] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(901), 1,
      sym_identifier,
    STATE(448), 1,
      sym_formatting_comment,
  [9916] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      sym_formatting_comment,
  [9926] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(905), 1,
      aux_sym_with_data_cat_expression_token2,
    STATE(450), 1,
      sym_formatting_comment,
  [9936] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(907), 1,
      anon_sym_EQ,
    STATE(451), 1,
      sym_formatting_comment,
  [9946] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(909), 1,
      anon_sym_EQ,
    STATE(452), 1,
      sym_formatting_comment,
  [9956] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(453), 1,
      sym_formatting_comment,
  [9966] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(913), 1,
      anon_sym_EQ,
    STATE(454), 1,
      sym_formatting_comment,
  [9976] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(915), 1,
      aux_sym_in_clause_token2,
    STATE(455), 1,
      sym_formatting_comment,
  [9986] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(917), 1,
      aux_sym_in_clause_token2,
    STATE(456), 1,
      sym_formatting_comment,
  [9996] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(919), 1,
      sym_term_separator_end,
    STATE(457), 1,
      sym_formatting_comment,
  [10006] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(458), 1,
      sym_formatting_comment,
  [10016] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
    STATE(459), 1,
      sym_formatting_comment,
  [10026] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(923), 1,
      anon_sym_COLON,
    STATE(460), 1,
      sym_formatting_comment,
  [10036] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(925), 1,
      anon_sym_EQ,
    STATE(461), 1,
      sym_formatting_comment,
  [10046] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym_formatting_comment,
  [10056] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      sym_formatting_comment,
  [10066] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(929), 1,
      sym_identifier,
    STATE(464), 1,
      sym_formatting_comment,
  [10076] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(931), 1,
      sym_int,
    STATE(465), 1,
      sym_formatting_comment,
  [10086] = 3,
    ACTIONS(933), 1,
      aux_sym_header_comment_token1,
    ACTIONS(935), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(466), 1,
      sym_formatting_comment,
  [10096] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(937), 1,
      aux_sym_from_clause_token1,
    STATE(467), 1,
      sym_formatting_comment,
  [10106] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_formatting_comment,
  [10116] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(941), 1,
      anon_sym_LPAREN,
    STATE(469), 1,
      sym_formatting_comment,
  [10126] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_formatting_comment,
  [10136] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_formatting_comment,
  [10146] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym_formatting_comment,
  [10156] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
    STATE(473), 1,
      sym_formatting_comment,
  [10166] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      sym_formatting_comment,
  [10176] = 3,
    ACTIONS(935), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(953), 1,
      sym_term,
    STATE(475), 1,
      sym_formatting_comment,
  [10186] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(476), 1,
      sym_formatting_comment,
  [10196] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    STATE(477), 1,
      sym_formatting_comment,
  [10206] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(478), 1,
      sym_formatting_comment,
  [10216] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(959), 1,
      sym_identifier,
    STATE(479), 1,
      sym_formatting_comment,
  [10226] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      sym_formatting_comment,
  [10236] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym_formatting_comment,
  [10246] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(965), 1,
      sym_identifier,
    STATE(482), 1,
      sym_formatting_comment,
  [10256] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(967), 1,
      anon_sym_COLON,
    STATE(483), 1,
      sym_formatting_comment,
  [10266] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(969), 1,
      aux_sym_find_clause_token1,
    STATE(484), 1,
      sym_formatting_comment,
  [10276] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(485), 1,
      sym_formatting_comment,
  [10286] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
    STATE(486), 1,
      sym_formatting_comment,
  [10296] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(975), 1,
      sym_string_literal,
    STATE(487), 1,
      sym_formatting_comment,
  [10306] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(977), 1,
      ts_builtin_sym_end,
    STATE(488), 1,
      sym_formatting_comment,
  [10316] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(979), 1,
      anon_sym_LPAREN,
    STATE(489), 1,
      sym_formatting_comment,
  [10326] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(981), 1,
      ts_builtin_sym_end,
    STATE(490), 1,
      sym_formatting_comment,
  [10336] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(983), 1,
      sym_string_literal,
    STATE(491), 1,
      sym_formatting_comment,
  [10346] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(985), 1,
      anon_sym_LPAREN,
    STATE(492), 1,
      sym_formatting_comment,
  [10356] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(987), 1,
      anon_sym_COMMA,
    STATE(493), 1,
      sym_formatting_comment,
  [10366] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
    STATE(494), 1,
      sym_formatting_comment,
  [10376] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      sym_formatting_comment,
  [10386] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(993), 1,
      sym_decimal,
    STATE(496), 1,
      sym_formatting_comment,
  [10396] = 3,
    ACTIONS(935), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(995), 1,
      aux_sym_header_comment_token1,
    STATE(497), 1,
      sym_formatting_comment,
  [10406] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      sym_formatting_comment,
  [10416] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    STATE(499), 1,
      sym_formatting_comment,
  [10426] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1001), 1,
      anon_sym_EQ,
    STATE(500), 1,
      sym_formatting_comment,
  [10436] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      sym_formatting_comment,
  [10446] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym_formatting_comment,
  [10456] = 1,
    ACTIONS(1007), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 412,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 540,
  [SMALL_STATE(11)] = 604,
  [SMALL_STATE(12)] = 668,
  [SMALL_STATE(13)] = 742,
  [SMALL_STATE(14)] = 815,
  [SMALL_STATE(15)] = 888,
  [SMALL_STATE(16)] = 961,
  [SMALL_STATE(17)] = 1032,
  [SMALL_STATE(18)] = 1103,
  [SMALL_STATE(19)] = 1148,
  [SMALL_STATE(20)] = 1211,
  [SMALL_STATE(21)] = 1274,
  [SMALL_STATE(22)] = 1337,
  [SMALL_STATE(23)] = 1399,
  [SMALL_STATE(24)] = 1461,
  [SMALL_STATE(25)] = 1523,
  [SMALL_STATE(26)] = 1585,
  [SMALL_STATE(27)] = 1642,
  [SMALL_STATE(28)] = 1698,
  [SMALL_STATE(29)] = 1754,
  [SMALL_STATE(30)] = 1807,
  [SMALL_STATE(31)] = 1860,
  [SMALL_STATE(32)] = 1913,
  [SMALL_STATE(33)] = 1965,
  [SMALL_STATE(34)] = 2017,
  [SMALL_STATE(35)] = 2069,
  [SMALL_STATE(36)] = 2121,
  [SMALL_STATE(37)] = 2171,
  [SMALL_STATE(38)] = 2214,
  [SMALL_STATE(39)] = 2255,
  [SMALL_STATE(40)] = 2293,
  [SMALL_STATE(41)] = 2333,
  [SMALL_STATE(42)] = 2367,
  [SMALL_STATE(43)] = 2401,
  [SMALL_STATE(44)] = 2435,
  [SMALL_STATE(45)] = 2467,
  [SMALL_STATE(46)] = 2531,
  [SMALL_STATE(47)] = 2575,
  [SMALL_STATE(48)] = 2617,
  [SMALL_STATE(49)] = 2659,
  [SMALL_STATE(50)] = 2701,
  [SMALL_STATE(51)] = 2759,
  [SMALL_STATE(52)] = 2801,
  [SMALL_STATE(53)] = 2843,
  [SMALL_STATE(54)] = 2871,
  [SMALL_STATE(55)] = 2901,
  [SMALL_STATE(56)] = 2927,
  [SMALL_STATE(57)] = 2979,
  [SMALL_STATE(58)] = 3031,
  [SMALL_STATE(59)] = 3061,
  [SMALL_STATE(60)] = 3113,
  [SMALL_STATE(61)] = 3138,
  [SMALL_STATE(62)] = 3171,
  [SMALL_STATE(63)] = 3217,
  [SMALL_STATE(64)] = 3263,
  [SMALL_STATE(65)] = 3291,
  [SMALL_STATE(66)] = 3337,
  [SMALL_STATE(67)] = 3383,
  [SMALL_STATE(68)] = 3429,
  [SMALL_STATE(69)] = 3475,
  [SMALL_STATE(70)] = 3499,
  [SMALL_STATE(71)] = 3522,
  [SMALL_STATE(72)] = 3545,
  [SMALL_STATE(73)] = 3570,
  [SMALL_STATE(74)] = 3599,
  [SMALL_STATE(75)] = 3624,
  [SMALL_STATE(76)] = 3647,
  [SMALL_STATE(77)] = 3670,
  [SMALL_STATE(78)] = 3693,
  [SMALL_STATE(79)] = 3716,
  [SMALL_STATE(80)] = 3738,
  [SMALL_STATE(81)] = 3760,
  [SMALL_STATE(82)] = 3800,
  [SMALL_STATE(83)] = 3822,
  [SMALL_STATE(84)] = 3844,
  [SMALL_STATE(85)] = 3884,
  [SMALL_STATE(86)] = 3904,
  [SMALL_STATE(87)] = 3924,
  [SMALL_STATE(88)] = 3950,
  [SMALL_STATE(89)] = 3990,
  [SMALL_STATE(90)] = 4012,
  [SMALL_STATE(91)] = 4052,
  [SMALL_STATE(92)] = 4076,
  [SMALL_STATE(93)] = 4102,
  [SMALL_STATE(94)] = 4124,
  [SMALL_STATE(95)] = 4164,
  [SMALL_STATE(96)] = 4184,
  [SMALL_STATE(97)] = 4208,
  [SMALL_STATE(98)] = 4232,
  [SMALL_STATE(99)] = 4260,
  [SMALL_STATE(100)] = 4281,
  [SMALL_STATE(101)] = 4302,
  [SMALL_STATE(102)] = 4339,
  [SMALL_STATE(103)] = 4368,
  [SMALL_STATE(104)] = 4387,
  [SMALL_STATE(105)] = 4406,
  [SMALL_STATE(106)] = 4429,
  [SMALL_STATE(107)] = 4450,
  [SMALL_STATE(108)] = 4487,
  [SMALL_STATE(109)] = 4508,
  [SMALL_STATE(110)] = 4535,
  [SMALL_STATE(111)] = 4558,
  [SMALL_STATE(112)] = 4577,
  [SMALL_STATE(113)] = 4598,
  [SMALL_STATE(114)] = 4619,
  [SMALL_STATE(115)] = 4656,
  [SMALL_STATE(116)] = 4675,
  [SMALL_STATE(117)] = 4709,
  [SMALL_STATE(118)] = 4743,
  [SMALL_STATE(119)] = 4763,
  [SMALL_STATE(120)] = 4783,
  [SMALL_STATE(121)] = 4817,
  [SMALL_STATE(122)] = 4837,
  [SMALL_STATE(123)] = 4855,
  [SMALL_STATE(124)] = 4875,
  [SMALL_STATE(125)] = 4897,
  [SMALL_STATE(126)] = 4917,
  [SMALL_STATE(127)] = 4937,
  [SMALL_STATE(128)] = 4959,
  [SMALL_STATE(129)] = 4993,
  [SMALL_STATE(130)] = 5017,
  [SMALL_STATE(131)] = 5051,
  [SMALL_STATE(132)] = 5085,
  [SMALL_STATE(133)] = 5103,
  [SMALL_STATE(134)] = 5121,
  [SMALL_STATE(135)] = 5138,
  [SMALL_STATE(136)] = 5155,
  [SMALL_STATE(137)] = 5172,
  [SMALL_STATE(138)] = 5189,
  [SMALL_STATE(139)] = 5210,
  [SMALL_STATE(140)] = 5229,
  [SMALL_STATE(141)] = 5250,
  [SMALL_STATE(142)] = 5271,
  [SMALL_STATE(143)] = 5292,
  [SMALL_STATE(144)] = 5309,
  [SMALL_STATE(145)] = 5330,
  [SMALL_STATE(146)] = 5347,
  [SMALL_STATE(147)] = 5366,
  [SMALL_STATE(148)] = 5387,
  [SMALL_STATE(149)] = 5406,
  [SMALL_STATE(150)] = 5423,
  [SMALL_STATE(151)] = 5442,
  [SMALL_STATE(152)] = 5461,
  [SMALL_STATE(153)] = 5480,
  [SMALL_STATE(154)] = 5499,
  [SMALL_STATE(155)] = 5518,
  [SMALL_STATE(156)] = 5535,
  [SMALL_STATE(157)] = 5554,
  [SMALL_STATE(158)] = 5573,
  [SMALL_STATE(159)] = 5592,
  [SMALL_STATE(160)] = 5613,
  [SMALL_STATE(161)] = 5630,
  [SMALL_STATE(162)] = 5651,
  [SMALL_STATE(163)] = 5670,
  [SMALL_STATE(164)] = 5691,
  [SMALL_STATE(165)] = 5712,
  [SMALL_STATE(166)] = 5729,
  [SMALL_STATE(167)] = 5748,
  [SMALL_STATE(168)] = 5765,
  [SMALL_STATE(169)] = 5782,
  [SMALL_STATE(170)] = 5798,
  [SMALL_STATE(171)] = 5818,
  [SMALL_STATE(172)] = 5834,
  [SMALL_STATE(173)] = 5852,
  [SMALL_STATE(174)] = 5868,
  [SMALL_STATE(175)] = 5884,
  [SMALL_STATE(176)] = 5912,
  [SMALL_STATE(177)] = 5928,
  [SMALL_STATE(178)] = 5956,
  [SMALL_STATE(179)] = 5972,
  [SMALL_STATE(180)] = 5988,
  [SMALL_STATE(181)] = 6012,
  [SMALL_STATE(182)] = 6032,
  [SMALL_STATE(183)] = 6060,
  [SMALL_STATE(184)] = 6076,
  [SMALL_STATE(185)] = 6092,
  [SMALL_STATE(186)] = 6120,
  [SMALL_STATE(187)] = 6136,
  [SMALL_STATE(188)] = 6152,
  [SMALL_STATE(189)] = 6168,
  [SMALL_STATE(190)] = 6184,
  [SMALL_STATE(191)] = 6200,
  [SMALL_STATE(192)] = 6228,
  [SMALL_STATE(193)] = 6244,
  [SMALL_STATE(194)] = 6272,
  [SMALL_STATE(195)] = 6300,
  [SMALL_STATE(196)] = 6320,
  [SMALL_STATE(197)] = 6336,
  [SMALL_STATE(198)] = 6352,
  [SMALL_STATE(199)] = 6368,
  [SMALL_STATE(200)] = 6386,
  [SMALL_STATE(201)] = 6414,
  [SMALL_STATE(202)] = 6429,
  [SMALL_STATE(203)] = 6454,
  [SMALL_STATE(204)] = 6469,
  [SMALL_STATE(205)] = 6486,
  [SMALL_STATE(206)] = 6501,
  [SMALL_STATE(207)] = 6522,
  [SMALL_STATE(208)] = 6541,
  [SMALL_STATE(209)] = 6556,
  [SMALL_STATE(210)] = 6571,
  [SMALL_STATE(211)] = 6592,
  [SMALL_STATE(212)] = 6611,
  [SMALL_STATE(213)] = 6626,
  [SMALL_STATE(214)] = 6641,
  [SMALL_STATE(215)] = 6666,
  [SMALL_STATE(216)] = 6681,
  [SMALL_STATE(217)] = 6706,
  [SMALL_STATE(218)] = 6721,
  [SMALL_STATE(219)] = 6746,
  [SMALL_STATE(220)] = 6761,
  [SMALL_STATE(221)] = 6786,
  [SMALL_STATE(222)] = 6803,
  [SMALL_STATE(223)] = 6818,
  [SMALL_STATE(224)] = 6840,
  [SMALL_STATE(225)] = 6862,
  [SMALL_STATE(226)] = 6880,
  [SMALL_STATE(227)] = 6902,
  [SMALL_STATE(228)] = 6918,
  [SMALL_STATE(229)] = 6936,
  [SMALL_STATE(230)] = 6958,
  [SMALL_STATE(231)] = 6980,
  [SMALL_STATE(232)] = 7002,
  [SMALL_STATE(233)] = 7016,
  [SMALL_STATE(234)] = 7038,
  [SMALL_STATE(235)] = 7052,
  [SMALL_STATE(236)] = 7074,
  [SMALL_STATE(237)] = 7096,
  [SMALL_STATE(238)] = 7110,
  [SMALL_STATE(239)] = 7124,
  [SMALL_STATE(240)] = 7138,
  [SMALL_STATE(241)] = 7160,
  [SMALL_STATE(242)] = 7174,
  [SMALL_STATE(243)] = 7196,
  [SMALL_STATE(244)] = 7210,
  [SMALL_STATE(245)] = 7232,
  [SMALL_STATE(246)] = 7254,
  [SMALL_STATE(247)] = 7268,
  [SMALL_STATE(248)] = 7290,
  [SMALL_STATE(249)] = 7304,
  [SMALL_STATE(250)] = 7318,
  [SMALL_STATE(251)] = 7332,
  [SMALL_STATE(252)] = 7346,
  [SMALL_STATE(253)] = 7364,
  [SMALL_STATE(254)] = 7386,
  [SMALL_STATE(255)] = 7402,
  [SMALL_STATE(256)] = 7420,
  [SMALL_STATE(257)] = 7442,
  [SMALL_STATE(258)] = 7459,
  [SMALL_STATE(259)] = 7474,
  [SMALL_STATE(260)] = 7493,
  [SMALL_STATE(261)] = 7512,
  [SMALL_STATE(262)] = 7531,
  [SMALL_STATE(263)] = 7546,
  [SMALL_STATE(264)] = 7561,
  [SMALL_STATE(265)] = 7576,
  [SMALL_STATE(266)] = 7595,
  [SMALL_STATE(267)] = 7612,
  [SMALL_STATE(268)] = 7629,
  [SMALL_STATE(269)] = 7648,
  [SMALL_STATE(270)] = 7663,
  [SMALL_STATE(271)] = 7678,
  [SMALL_STATE(272)] = 7693,
  [SMALL_STATE(273)] = 7712,
  [SMALL_STATE(274)] = 7725,
  [SMALL_STATE(275)] = 7742,
  [SMALL_STATE(276)] = 7757,
  [SMALL_STATE(277)] = 7772,
  [SMALL_STATE(278)] = 7789,
  [SMALL_STATE(279)] = 7806,
  [SMALL_STATE(280)] = 7825,
  [SMALL_STATE(281)] = 7838,
  [SMALL_STATE(282)] = 7850,
  [SMALL_STATE(283)] = 7862,
  [SMALL_STATE(284)] = 7878,
  [SMALL_STATE(285)] = 7894,
  [SMALL_STATE(286)] = 7910,
  [SMALL_STATE(287)] = 7922,
  [SMALL_STATE(288)] = 7934,
  [SMALL_STATE(289)] = 7946,
  [SMALL_STATE(290)] = 7958,
  [SMALL_STATE(291)] = 7972,
  [SMALL_STATE(292)] = 7988,
  [SMALL_STATE(293)] = 8000,
  [SMALL_STATE(294)] = 8012,
  [SMALL_STATE(295)] = 8028,
  [SMALL_STATE(296)] = 8040,
  [SMALL_STATE(297)] = 8052,
  [SMALL_STATE(298)] = 8068,
  [SMALL_STATE(299)] = 8084,
  [SMALL_STATE(300)] = 8096,
  [SMALL_STATE(301)] = 8112,
  [SMALL_STATE(302)] = 8126,
  [SMALL_STATE(303)] = 8142,
  [SMALL_STATE(304)] = 8154,
  [SMALL_STATE(305)] = 8166,
  [SMALL_STATE(306)] = 8178,
  [SMALL_STATE(307)] = 8194,
  [SMALL_STATE(308)] = 8210,
  [SMALL_STATE(309)] = 8222,
  [SMALL_STATE(310)] = 8234,
  [SMALL_STATE(311)] = 8250,
  [SMALL_STATE(312)] = 8264,
  [SMALL_STATE(313)] = 8276,
  [SMALL_STATE(314)] = 8290,
  [SMALL_STATE(315)] = 8306,
  [SMALL_STATE(316)] = 8318,
  [SMALL_STATE(317)] = 8334,
  [SMALL_STATE(318)] = 8346,
  [SMALL_STATE(319)] = 8358,
  [SMALL_STATE(320)] = 8370,
  [SMALL_STATE(321)] = 8386,
  [SMALL_STATE(322)] = 8400,
  [SMALL_STATE(323)] = 8414,
  [SMALL_STATE(324)] = 8426,
  [SMALL_STATE(325)] = 8438,
  [SMALL_STATE(326)] = 8454,
  [SMALL_STATE(327)] = 8470,
  [SMALL_STATE(328)] = 8486,
  [SMALL_STATE(329)] = 8498,
  [SMALL_STATE(330)] = 8514,
  [SMALL_STATE(331)] = 8530,
  [SMALL_STATE(332)] = 8542,
  [SMALL_STATE(333)] = 8556,
  [SMALL_STATE(334)] = 8572,
  [SMALL_STATE(335)] = 8588,
  [SMALL_STATE(336)] = 8604,
  [SMALL_STATE(337)] = 8616,
  [SMALL_STATE(338)] = 8632,
  [SMALL_STATE(339)] = 8648,
  [SMALL_STATE(340)] = 8664,
  [SMALL_STATE(341)] = 8680,
  [SMALL_STATE(342)] = 8696,
  [SMALL_STATE(343)] = 8710,
  [SMALL_STATE(344)] = 8724,
  [SMALL_STATE(345)] = 8740,
  [SMALL_STATE(346)] = 8754,
  [SMALL_STATE(347)] = 8770,
  [SMALL_STATE(348)] = 8786,
  [SMALL_STATE(349)] = 8802,
  [SMALL_STATE(350)] = 8818,
  [SMALL_STATE(351)] = 8834,
  [SMALL_STATE(352)] = 8848,
  [SMALL_STATE(353)] = 8860,
  [SMALL_STATE(354)] = 8876,
  [SMALL_STATE(355)] = 8892,
  [SMALL_STATE(356)] = 8908,
  [SMALL_STATE(357)] = 8920,
  [SMALL_STATE(358)] = 8936,
  [SMALL_STATE(359)] = 8952,
  [SMALL_STATE(360)] = 8968,
  [SMALL_STATE(361)] = 8984,
  [SMALL_STATE(362)] = 9000,
  [SMALL_STATE(363)] = 9011,
  [SMALL_STATE(364)] = 9022,
  [SMALL_STATE(365)] = 9035,
  [SMALL_STATE(366)] = 9048,
  [SMALL_STATE(367)] = 9061,
  [SMALL_STATE(368)] = 9074,
  [SMALL_STATE(369)] = 9085,
  [SMALL_STATE(370)] = 9096,
  [SMALL_STATE(371)] = 9109,
  [SMALL_STATE(372)] = 9120,
  [SMALL_STATE(373)] = 9131,
  [SMALL_STATE(374)] = 9142,
  [SMALL_STATE(375)] = 9155,
  [SMALL_STATE(376)] = 9166,
  [SMALL_STATE(377)] = 9177,
  [SMALL_STATE(378)] = 9188,
  [SMALL_STATE(379)] = 9201,
  [SMALL_STATE(380)] = 9214,
  [SMALL_STATE(381)] = 9227,
  [SMALL_STATE(382)] = 9238,
  [SMALL_STATE(383)] = 9251,
  [SMALL_STATE(384)] = 9262,
  [SMALL_STATE(385)] = 9273,
  [SMALL_STATE(386)] = 9286,
  [SMALL_STATE(387)] = 9296,
  [SMALL_STATE(388)] = 9306,
  [SMALL_STATE(389)] = 9316,
  [SMALL_STATE(390)] = 9326,
  [SMALL_STATE(391)] = 9336,
  [SMALL_STATE(392)] = 9346,
  [SMALL_STATE(393)] = 9356,
  [SMALL_STATE(394)] = 9366,
  [SMALL_STATE(395)] = 9376,
  [SMALL_STATE(396)] = 9386,
  [SMALL_STATE(397)] = 9396,
  [SMALL_STATE(398)] = 9406,
  [SMALL_STATE(399)] = 9416,
  [SMALL_STATE(400)] = 9426,
  [SMALL_STATE(401)] = 9436,
  [SMALL_STATE(402)] = 9446,
  [SMALL_STATE(403)] = 9456,
  [SMALL_STATE(404)] = 9466,
  [SMALL_STATE(405)] = 9476,
  [SMALL_STATE(406)] = 9486,
  [SMALL_STATE(407)] = 9496,
  [SMALL_STATE(408)] = 9506,
  [SMALL_STATE(409)] = 9516,
  [SMALL_STATE(410)] = 9526,
  [SMALL_STATE(411)] = 9536,
  [SMALL_STATE(412)] = 9546,
  [SMALL_STATE(413)] = 9556,
  [SMALL_STATE(414)] = 9566,
  [SMALL_STATE(415)] = 9576,
  [SMALL_STATE(416)] = 9586,
  [SMALL_STATE(417)] = 9596,
  [SMALL_STATE(418)] = 9606,
  [SMALL_STATE(419)] = 9616,
  [SMALL_STATE(420)] = 9626,
  [SMALL_STATE(421)] = 9636,
  [SMALL_STATE(422)] = 9646,
  [SMALL_STATE(423)] = 9656,
  [SMALL_STATE(424)] = 9666,
  [SMALL_STATE(425)] = 9676,
  [SMALL_STATE(426)] = 9686,
  [SMALL_STATE(427)] = 9696,
  [SMALL_STATE(428)] = 9706,
  [SMALL_STATE(429)] = 9716,
  [SMALL_STATE(430)] = 9726,
  [SMALL_STATE(431)] = 9736,
  [SMALL_STATE(432)] = 9746,
  [SMALL_STATE(433)] = 9756,
  [SMALL_STATE(434)] = 9766,
  [SMALL_STATE(435)] = 9776,
  [SMALL_STATE(436)] = 9786,
  [SMALL_STATE(437)] = 9796,
  [SMALL_STATE(438)] = 9806,
  [SMALL_STATE(439)] = 9816,
  [SMALL_STATE(440)] = 9826,
  [SMALL_STATE(441)] = 9836,
  [SMALL_STATE(442)] = 9846,
  [SMALL_STATE(443)] = 9856,
  [SMALL_STATE(444)] = 9866,
  [SMALL_STATE(445)] = 9876,
  [SMALL_STATE(446)] = 9886,
  [SMALL_STATE(447)] = 9896,
  [SMALL_STATE(448)] = 9906,
  [SMALL_STATE(449)] = 9916,
  [SMALL_STATE(450)] = 9926,
  [SMALL_STATE(451)] = 9936,
  [SMALL_STATE(452)] = 9946,
  [SMALL_STATE(453)] = 9956,
  [SMALL_STATE(454)] = 9966,
  [SMALL_STATE(455)] = 9976,
  [SMALL_STATE(456)] = 9986,
  [SMALL_STATE(457)] = 9996,
  [SMALL_STATE(458)] = 10006,
  [SMALL_STATE(459)] = 10016,
  [SMALL_STATE(460)] = 10026,
  [SMALL_STATE(461)] = 10036,
  [SMALL_STATE(462)] = 10046,
  [SMALL_STATE(463)] = 10056,
  [SMALL_STATE(464)] = 10066,
  [SMALL_STATE(465)] = 10076,
  [SMALL_STATE(466)] = 10086,
  [SMALL_STATE(467)] = 10096,
  [SMALL_STATE(468)] = 10106,
  [SMALL_STATE(469)] = 10116,
  [SMALL_STATE(470)] = 10126,
  [SMALL_STATE(471)] = 10136,
  [SMALL_STATE(472)] = 10146,
  [SMALL_STATE(473)] = 10156,
  [SMALL_STATE(474)] = 10166,
  [SMALL_STATE(475)] = 10176,
  [SMALL_STATE(476)] = 10186,
  [SMALL_STATE(477)] = 10196,
  [SMALL_STATE(478)] = 10206,
  [SMALL_STATE(479)] = 10216,
  [SMALL_STATE(480)] = 10226,
  [SMALL_STATE(481)] = 10236,
  [SMALL_STATE(482)] = 10246,
  [SMALL_STATE(483)] = 10256,
  [SMALL_STATE(484)] = 10266,
  [SMALL_STATE(485)] = 10276,
  [SMALL_STATE(486)] = 10286,
  [SMALL_STATE(487)] = 10296,
  [SMALL_STATE(488)] = 10306,
  [SMALL_STATE(489)] = 10316,
  [SMALL_STATE(490)] = 10326,
  [SMALL_STATE(491)] = 10336,
  [SMALL_STATE(492)] = 10346,
  [SMALL_STATE(493)] = 10356,
  [SMALL_STATE(494)] = 10366,
  [SMALL_STATE(495)] = 10376,
  [SMALL_STATE(496)] = 10386,
  [SMALL_STATE(497)] = 10396,
  [SMALL_STATE(498)] = 10406,
  [SMALL_STATE(499)] = 10416,
  [SMALL_STATE(500)] = 10426,
  [SMALL_STATE(501)] = 10436,
  [SMALL_STATE(502)] = 10446,
  [SMALL_STATE(503)] = 10456,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_comparison_operator, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_comparison_operator, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(479),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_expression, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_expression, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(482),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(261),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_literal, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__soql_literal, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_literal, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_literal, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2), SHIFT_REPEAT(382),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comparison, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 5),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 5),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(432),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2), SHIFT_REPEAT(22),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(23),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_boolean_expression, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2), SHIFT_REPEAT(36),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_using_clause, 3, .production_id = 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_type, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returning_clause, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 2), SHIFT_REPEAT(370),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selected_fields, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returning_clause, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 4),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_value_comparison, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_value_comparison, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(33),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2), SHIFT_REPEAT(34),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_returning_clause_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_returning_clause_repeat1, 2), SHIFT_REPEAT(379),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_comparison_expression, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_having_comparison_expression, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_and_expression, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selected_fields, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_comparison, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_comparison, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_or_expression, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2), SHIFT_REPEAT(16),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_clause, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2), SHIFT_REPEAT(28),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 7),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_clause, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 2),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 2), SHIFT_REPEAT(46),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_clause, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_type, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 6),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 9),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, .production_id = 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 8),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_snippet_expression, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direciton, 2, .production_id = 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_not_expression, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(464),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_clause, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direciton, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2), SHIFT_REPEAT(423),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 5),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_network_expression, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_with_clause, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_snippet_expression, 6),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_with_type, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_highlight, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_division_expression, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_metadata_expression, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_pricebook_expression, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_spell_correction_expression, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(364),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2), SHIFT_REPEAT(345),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2), SHIFT_REPEAT(258),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(35),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_type, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(24),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2), SHIFT_REPEAT(17),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2), SHIFT_REPEAT(267),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2), SHIFT_REPEAT(387),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__having_set_comparison_repeat1, 2), SHIFT_REPEAT(11),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__having_set_comparison_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 6),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat2, 2), SHIFT_REPEAT(357),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat2, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_type, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_param, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 2, .production_id = 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter_type, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 11),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_type, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 1), SHIFT(436),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 7),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_type, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_expression, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [981] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatting_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sosl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
