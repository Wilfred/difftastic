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
#define STATE_COUNT 389
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 234
#define ALIAS_COUNT 2
#define TOKEN_COUNT 141
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_header_comment_token1 = 2,
  anon_sym_SLASH_SLASH_SLASH = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  aux_sym_count_expression_token1 = 6,
  aux_sym_select_clause_token1 = 7,
  anon_sym_COMMA = 8,
  aux_sym_soql_using_clause_token1 = 9,
  aux_sym_soql_using_clause_token2 = 10,
  aux_sym_using_scope_type_token1 = 11,
  aux_sym_using_scope_type_token2 = 12,
  aux_sym_using_scope_type_token3 = 13,
  aux_sym_using_scope_type_token4 = 14,
  aux_sym_using_scope_type_token5 = 15,
  aux_sym_using_scope_type_token6 = 16,
  aux_sym_using_scope_type_token7 = 17,
  aux_sym_type_of_clause_token1 = 18,
  aux_sym_type_of_clause_token2 = 19,
  aux_sym_when_expression_token1 = 20,
  aux_sym_when_expression_token2 = 21,
  aux_sym_else_expression_token1 = 22,
  aux_sym_group_by_clause_token1 = 23,
  aux_sym_group_by_clause_token2 = 24,
  aux_sym__group_by_expression_token1 = 25,
  aux_sym__group_by_expression_token2 = 26,
  aux_sym_for_clause_token1 = 27,
  aux_sym_for_type_token1 = 28,
  aux_sym_for_type_token2 = 29,
  aux_sym_for_type_token3 = 30,
  aux_sym_having_clause_token1 = 31,
  aux_sym_having_and_expression_token1 = 32,
  aux_sym_having_or_expression_token1 = 33,
  aux_sym_having_not_expression_token1 = 34,
  aux_sym_from_clause_token1 = 35,
  aux_sym_storage_alias_token1 = 36,
  aux_sym_fields_expression_token1 = 37,
  aux_sym_fields_type_token1 = 38,
  aux_sym_fields_type_token2 = 39,
  aux_sym_fields_type_token3 = 40,
  aux_sym_where_clause_token1 = 41,
  aux_sym_soql_with_clause_token1 = 42,
  aux_sym_soql_with_type_token1 = 43,
  aux_sym_soql_with_type_token2 = 44,
  aux_sym_soql_with_type_token3 = 45,
  aux_sym_with_user_id_type_token1 = 46,
  anon_sym_EQ = 47,
  aux_sym_with_record_visibility_expression_token1 = 48,
  aux_sym_with_record_visibility_param_token1 = 49,
  aux_sym_with_record_visibility_param_token2 = 50,
  aux_sym_with_record_visibility_param_token3 = 51,
  aux_sym_with_data_cat_expression_token1 = 52,
  aux_sym_with_data_cat_expression_token2 = 53,
  aux_sym_with_data_cat_filter_type_token1 = 54,
  aux_sym_with_data_cat_filter_type_token2 = 55,
  aux_sym_with_data_cat_filter_type_token3 = 56,
  aux_sym_with_data_cat_filter_type_token4 = 57,
  aux_sym_limit_clause_token1 = 58,
  aux_sym_offset_clause_token1 = 59,
  aux_sym_update_type_token1 = 60,
  aux_sym_update_type_token2 = 61,
  aux_sym_order_by_clause_token1 = 62,
  aux_sym_order_direction_token1 = 63,
  aux_sym_order_direction_token2 = 64,
  aux_sym_order_null_direciton_token1 = 65,
  aux_sym_order_null_direciton_token2 = 66,
  aux_sym_order_null_direciton_token3 = 67,
  aux_sym_geo_location_type_token1 = 68,
  aux_sym_function_expression_token1 = 69,
  anon_sym_DOT = 70,
  aux_sym_all_rows_clause_token1 = 71,
  aux_sym_boolean_token1 = 72,
  aux_sym_boolean_token2 = 73,
  anon_sym_BANG_EQ = 74,
  anon_sym_LT_GT = 75,
  anon_sym_LT = 76,
  anon_sym_LT_EQ = 77,
  anon_sym_GT = 78,
  anon_sym_GT_EQ = 79,
  aux_sym_value_comparison_operator_token1 = 80,
  aux_sym_set_comparison_operator_token1 = 81,
  aux_sym_set_comparison_operator_token2 = 82,
  aux_sym_set_comparison_operator_token3 = 83,
  aux_sym_date_literal_token1 = 84,
  aux_sym_date_literal_token2 = 85,
  aux_sym_date_literal_token3 = 86,
  aux_sym_date_literal_token4 = 87,
  aux_sym_date_literal_token5 = 88,
  aux_sym_date_literal_token6 = 89,
  aux_sym_date_literal_token7 = 90,
  aux_sym_date_literal_token8 = 91,
  aux_sym_date_literal_token9 = 92,
  aux_sym_date_literal_token10 = 93,
  aux_sym_date_literal_token11 = 94,
  aux_sym_date_literal_token12 = 95,
  aux_sym_date_literal_token13 = 96,
  aux_sym_date_literal_token14 = 97,
  aux_sym_date_literal_token15 = 98,
  aux_sym_date_literal_token16 = 99,
  aux_sym_date_literal_token17 = 100,
  aux_sym_date_literal_token18 = 101,
  aux_sym_date_literal_token19 = 102,
  aux_sym_date_literal_token20 = 103,
  aux_sym_date_literal_token21 = 104,
  aux_sym_date_literal_token22 = 105,
  aux_sym_date_literal_token23 = 106,
  aux_sym_date_literal_with_param_token1 = 107,
  anon_sym_COLON = 108,
  aux_sym_function_name_token1 = 109,
  aux_sym_function_name_token2 = 110,
  aux_sym_function_name_token3 = 111,
  aux_sym_function_name_token4 = 112,
  aux_sym_function_name_token5 = 113,
  aux_sym_function_name_token6 = 114,
  aux_sym_function_name_token7 = 115,
  aux_sym_function_name_token8 = 116,
  aux_sym_function_name_token9 = 117,
  aux_sym_function_name_token10 = 118,
  aux_sym_function_name_token11 = 119,
  aux_sym_function_name_token12 = 120,
  aux_sym_function_name_token13 = 121,
  aux_sym_function_name_token14 = 122,
  aux_sym_function_name_token15 = 123,
  aux_sym_function_name_token16 = 124,
  aux_sym_function_name_token17 = 125,
  aux_sym_function_name_token18 = 126,
  aux_sym_function_name_token19 = 127,
  aux_sym_function_name_token20 = 128,
  aux_sym_function_name_token21 = 129,
  aux_sym_function_name_token22 = 130,
  anon_sym_QMARK = 131,
  sym_bound_apex_expression = 132,
  aux_sym_null_literal_token1 = 133,
  sym_string_literal = 134,
  sym_int = 135,
  sym_decimal = 136,
  sym_date = 137,
  sym_date_time = 138,
  sym_currency_literal = 139,
  sym_identifier = 140,
  sym_source_file = 141,
  sym_header_comment = 142,
  sym_formatting_comment = 143,
  sym__soql_query_expression = 144,
  sym_subquery = 145,
  sym_soql_query_body = 146,
  sym_count_expression = 147,
  sym_select_clause = 148,
  sym__selectable_expression = 149,
  sym_soql_using_clause = 150,
  sym_using_scope_type = 151,
  sym_type_of_clause = 152,
  sym_when_expression = 153,
  sym_else_expression = 154,
  sym_group_by_clause = 155,
  sym__group_by_expression = 156,
  sym_for_clause = 157,
  sym_for_type = 158,
  sym_having_clause = 159,
  sym__having_boolean_expression = 160,
  sym_having_and_expression = 161,
  sym_having_or_expression = 162,
  sym_having_not_expression = 163,
  sym__having_condition_expression = 164,
  sym_having_comparison_expression = 165,
  sym__having_comparison = 166,
  sym__having_value_comparison = 167,
  sym__having_set_comparison = 168,
  sym_from_clause = 169,
  sym_storage_identifier = 170,
  sym_storage_alias = 171,
  sym_fields_expression = 172,
  sym_fields_type = 173,
  sym_where_clause = 174,
  sym__boolean_expression = 175,
  sym_and_expression = 176,
  sym_or_expression = 177,
  sym_not_expression = 178,
  sym__condition_expression = 179,
  sym_comparison_expression = 180,
  sym__comparison = 181,
  sym__value_comparison = 182,
  sym__set_comparison = 183,
  sym_soql_with_clause = 184,
  sym_soql_with_type = 185,
  sym_with_user_id_type = 186,
  sym_with_record_visibility_expression = 187,
  sym_with_record_visibility_param = 188,
  sym_with_data_cat_expression = 189,
  sym_with_data_cat_filter = 190,
  sym_with_data_cat_filter_type = 191,
  sym_limit_clause = 192,
  sym_offset_clause = 193,
  sym_update_clause = 194,
  sym_update_type = 195,
  sym_alias_expression = 196,
  sym_order_by_clause = 197,
  sym_order_expression = 198,
  sym_order_direction = 199,
  sym_order_null_direciton = 200,
  sym_geo_location_type = 201,
  sym__value_expression = 202,
  sym_function_expression = 203,
  sym_dotted_identifier = 204,
  sym_field_identifier = 205,
  sym_field_list = 206,
  sym_boolean = 207,
  sym_value_comparison_operator = 208,
  sym_set_comparison_operator = 209,
  sym_date_literal = 210,
  sym_date_literal_with_param = 211,
  sym_function_name = 212,
  sym_null_literal = 213,
  sym__soql_literal = 214,
  aux_sym_source_file_repeat1 = 215,
  aux_sym_select_clause_repeat1 = 216,
  aux_sym_type_of_clause_repeat1 = 217,
  aux_sym__group_by_expression_repeat1 = 218,
  aux_sym__group_by_expression_repeat2 = 219,
  aux_sym_for_clause_repeat1 = 220,
  aux_sym_having_and_expression_repeat1 = 221,
  aux_sym_having_or_expression_repeat1 = 222,
  aux_sym__having_set_comparison_repeat1 = 223,
  aux_sym_from_clause_repeat1 = 224,
  aux_sym_and_expression_repeat1 = 225,
  aux_sym_or_expression_repeat1 = 226,
  aux_sym_with_record_visibility_expression_repeat1 = 227,
  aux_sym_with_data_cat_expression_repeat1 = 228,
  aux_sym_with_data_cat_filter_repeat1 = 229,
  aux_sym_update_clause_repeat1 = 230,
  aux_sym_order_by_clause_repeat1 = 231,
  aux_sym_dotted_identifier_repeat1 = 232,
  aux_sym_field_list_repeat1 = 233,
  anon_alias_sym_COUNT = 234,
  anon_alias_sym_NOT_IN = 235,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_header_comment_token1] = "header_comment_token1",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_count_expression_token1] = "function_name",
  [aux_sym_select_clause_token1] = "SELECT",
  [anon_sym_COMMA] = ",",
  [aux_sym_soql_using_clause_token1] = "USING_SCOPE",
  [aux_sym_soql_using_clause_token2] = "USING_SCOPE",
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
  [aux_sym_fields_expression_token1] = "FIELDS",
  [aux_sym_fields_type_token1] = "ALL",
  [aux_sym_fields_type_token2] = "CUSTOM",
  [aux_sym_fields_type_token3] = "STANDARD",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_soql_with_clause_token1] = "WITH",
  [aux_sym_soql_with_type_token1] = "Security_Enforced",
  [aux_sym_soql_with_type_token2] = "User_Mode",
  [aux_sym_soql_with_type_token3] = "System_Mode",
  [aux_sym_with_user_id_type_token1] = "UserId",
  [anon_sym_EQ] = "=",
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
  [aux_sym_set_comparison_operator_token1] = "IN",
  [aux_sym_set_comparison_operator_token2] = "INCLUDES",
  [aux_sym_set_comparison_operator_token3] = "EXCLUDES",
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
  [sym__soql_query_expression] = "_soql_query_expression",
  [sym_subquery] = "subquery",
  [sym_soql_query_body] = "soql_query_body",
  [sym_count_expression] = "count_expression",
  [sym_select_clause] = "select_clause",
  [sym__selectable_expression] = "_selectable_expression",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_clause_repeat1] = "select_clause_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_count_expression_token1] = sym_function_name,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_soql_using_clause_token1] = aux_sym_soql_using_clause_token1,
  [aux_sym_soql_using_clause_token2] = aux_sym_soql_using_clause_token1,
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
  [aux_sym_fields_expression_token1] = aux_sym_fields_expression_token1,
  [aux_sym_fields_type_token1] = aux_sym_fields_type_token1,
  [aux_sym_fields_type_token2] = aux_sym_fields_type_token2,
  [aux_sym_fields_type_token3] = aux_sym_fields_type_token3,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_soql_with_clause_token1] = aux_sym_soql_with_clause_token1,
  [aux_sym_soql_with_type_token1] = aux_sym_soql_with_type_token1,
  [aux_sym_soql_with_type_token2] = aux_sym_soql_with_type_token2,
  [aux_sym_soql_with_type_token3] = aux_sym_soql_with_type_token3,
  [aux_sym_with_user_id_type_token1] = aux_sym_with_user_id_type_token1,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [aux_sym_set_comparison_operator_token3] = aux_sym_set_comparison_operator_token3,
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
  [sym__soql_query_expression] = sym__soql_query_expression,
  [sym_subquery] = sym_subquery,
  [sym_soql_query_body] = sym_soql_query_body,
  [sym_count_expression] = sym_count_expression,
  [sym_select_clause] = sym_select_clause,
  [sym__selectable_expression] = sym__selectable_expression,
  [sym_soql_using_clause] = sym_soql_using_clause,
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
  [sym_soql_with_clause] = sym_soql_with_clause,
  [sym_soql_with_type] = sym_soql_with_type,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_clause_repeat1] = aux_sym_select_clause_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_using_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_using_clause_token2] = {
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
  [aux_sym_fields_expression_token1] = {
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
  [aux_sym_fields_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_with_clause_token1] = {
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
  [anon_sym_EQ] = {
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
  [aux_sym_set_comparison_operator_token3] = {
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
  [sym__soql_query_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_subquery] = {
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
  [sym__selectable_expression] = {
    .visible = false,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_repeat1] = {
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
    [1] = aux_sym_order_by_clause_token1,
  },
  [3] = {
    [0] = anon_alias_sym_NOT_IN,
    [1] = anon_alias_sym_NOT_IN,
  },
  [4] = {
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
      if (eof) ADVANCE(788);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(796);
      if (lookahead == ')') ADVANCE(797);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == ',') ADVANCE(801);
      if (lookahead == '-') ADVANCE(772);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(924);
      if (lookahead == '<') ADVANCE(892);
      if (lookahead == '=') ADVANCE(857);
      if (lookahead == '>') ADVANCE(894);
      if (lookahead == '?') ADVANCE(971);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(233);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(237);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(82);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(527);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(348);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(243);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '-') ADVANCE(772);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(229);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(352);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(784);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(783);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(796);
      if (lookahead == ')') ADVANCE(797);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(345);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(596);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(477);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(369);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(796);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(796);
      if (lookahead == '-') ADVANCE(772);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1190);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1000);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1001);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1067);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1037);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(796);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1190);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1000);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1001);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1068);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1125);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1119);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1037);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(796);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1190);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1000);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1001);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1068);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1119);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1037);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(797);
      if (lookahead == ',') ADVANCE(801);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1161);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1051);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(972);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == 'Z') ADVANCE(988);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(764);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(789);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(794);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1190);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(999);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1001);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1068);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1002);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1123);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1119);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1037);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(770);
      if (lookahead == '1') ADVANCE(765);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(771);
      if (lookahead == '3') ADVANCE(763);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(774);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(766);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(775);
      END_STATE();
    case 24:
      if (lookahead == '9') ADVANCE(21);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(511);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(720);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(282);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 25:
      if (lookahead == '9') ADVANCE(22);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(374);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(721);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(283);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(769);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(767);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(768);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(890);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'H') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'V') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'Z') ADVANCE(988);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(764);
      END_STATE();
    case 45:
      if (lookahead == 'Z') ADVANCE(988);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'Z') ADVANCE(988);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(403);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(355);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(320);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(434);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(435);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(537);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(429);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(678);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(432);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(328);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(359);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(362);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(197);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(205);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(208);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(433);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(694);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(539);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(540);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(541);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(538);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(729);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(740);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(862);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(741);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(742);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 150:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(482);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(386);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(321);
      END_STATE();
    case 151:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(674);
      END_STATE();
    case 152:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(361);
      END_STATE();
    case 153:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 154:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(300);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(877);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(876);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(502);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(422);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(641);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(655);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(657);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(713);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(521);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(835);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(814);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(856);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(848);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(805);
      END_STATE();
    case 184:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(853);
      END_STATE();
    case 185:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 186:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(350);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(717);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(276);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 187:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 188:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(349);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(504);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(716);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(275);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(371);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(612);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(518);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(724);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(299);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(821);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(529);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(347);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(212);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(633);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 315:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 316:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(812);
      END_STATE();
    case 317:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 318:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(638);
      END_STATE();
    case 319:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(498);
      END_STATE();
    case 320:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(515);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(722);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(284);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 321:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(925);
      END_STATE();
    case 322:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(802);
      END_STATE();
    case 323:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(834);
      END_STATE();
    case 324:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(937);
      END_STATE();
    case 325:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(872);
      END_STATE();
    case 326:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(806);
      END_STATE();
    case 327:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(481);
      END_STATE();
    case 328:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(585);
      END_STATE();
    case 329:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(493);
      END_STATE();
    case 330:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 331:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 332:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(851);
      END_STATE();
    case 333:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(906);
      END_STATE();
    case 334:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(908);
      END_STATE();
    case 335:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(907);
      END_STATE();
    case 336:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(951);
      END_STATE();
    case 337:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(959);
      END_STATE();
    case 338:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(967);
      END_STATE();
    case 339:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(945);
      END_STATE();
    case 340:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(212);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 341:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      END_STATE();
    case 342:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(631);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(645);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 377:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(903);
      END_STATE();
    case 378:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(905);
      END_STATE();
    case 379:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(904);
      END_STATE();
    case 380:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(953);
      END_STATE();
    case 381:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(215);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 382:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(615);
      END_STATE();
    case 383:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(631);
      END_STATE();
    case 384:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(360);
      END_STATE();
    case 385:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(974);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(943);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(235);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(709);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(748);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(610);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(611);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(636);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 414:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 416:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      END_STATE();
    case 417:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 418:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 419:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 420:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 421:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(935);
      END_STATE();
    case 422:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(935);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(532);
      END_STATE();
    case 423:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(840);
      END_STATE();
    case 424:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(811);
      END_STATE();
    case 425:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 426:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(847);
      END_STATE();
    case 427:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 428:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 429:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(492);
      END_STATE();
    case 430:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 431:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 432:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(761);
      END_STATE();
    case 433:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 434:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(516);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(286);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 435:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(517);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(723);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 436:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(519);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(308);
      END_STATE();
    case 437:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(520);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(725);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 438:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 439:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(321);
      END_STATE();
    case 440:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 441:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 442:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 443:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(815);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 444:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(882);
      END_STATE();
    case 445:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(929);
      END_STATE();
    case 446:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 447:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(458);
      END_STATE();
    case 448:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 449:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 450:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 451:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 452:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 453:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 454:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 455:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 456:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 457:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 458:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 459:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 460:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 461:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 465:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      END_STATE();
    case 466:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      END_STATE();
    case 468:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 470:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 471:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 472:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 474:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(685);
      END_STATE();
    case 475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 476:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 478:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 479:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 480:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 481:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(923);
      END_STATE();
    case 482:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 483:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 484:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 485:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 486:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 487:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(736);
      END_STATE();
    case 488:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 489:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 490:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 491:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 492:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 493:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 494:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 495:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 496:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 497:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 498:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 499:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 500:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 501:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 502:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 503:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 504:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 505:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 506:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 507:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 508:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 509:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 510:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 511:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 512:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 513:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 514:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 515:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 516:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 517:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 522:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(819);
      END_STATE();
    case 523:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(822);
      END_STATE();
    case 524:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 525:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 526:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(818);
      END_STATE();
    case 527:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 528:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 529:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 530:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(620);
      END_STATE();
    case 531:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 532:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      END_STATE();
    case 533:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 534:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 535:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 536:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 537:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(716);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 538:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(724);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 539:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(726);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 540:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(727);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 541:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(728);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(312);
      END_STATE();
    case 542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      END_STATE();
    case 549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      END_STATE();
    case 550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(955);
      END_STATE();
    case 551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(969);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(961);
      END_STATE();
    case 558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(921);
      END_STATE();
    case 560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(920);
      END_STATE();
    case 562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(918);
      END_STATE();
    case 563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(826);
      END_STATE();
    case 567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(633);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(887);
      END_STATE();
    case 611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(878);
      END_STATE();
    case 612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(844);
      END_STATE();
    case 613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(899);
      END_STATE();
    case 614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(898);
      END_STATE();
    case 615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(923);
      END_STATE();
    case 616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(909);
      END_STATE();
    case 617:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      END_STATE();
    case 618:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(860);
      END_STATE();
    case 619:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(861);
      END_STATE();
    case 620:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(808);
      END_STATE();
    case 621:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 622:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 623:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 624:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(684);
      END_STATE();
    case 625:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 626:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 627:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      END_STATE();
    case 628:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 629:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 630:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      END_STATE();
    case 631:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 632:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 633:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      END_STATE();
    case 634:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      END_STATE();
    case 635:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      END_STATE();
    case 636:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      END_STATE();
    case 637:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 638:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 639:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      END_STATE();
    case 640:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      END_STATE();
    case 641:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(680);
      END_STATE();
    case 642:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 643:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 645:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 646:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 647:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(838);
      END_STATE();
    case 648:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      END_STATE();
    case 649:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(881);
      END_STATE();
    case 650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      END_STATE();
    case 651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      END_STATE();
    case 652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(868);
      END_STATE();
    case 653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      END_STATE();
    case 654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(870);
      END_STATE();
    case 655:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      END_STATE();
    case 656:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(873);
      END_STATE();
    case 657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(927);
      END_STATE();
    case 658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(858);
      END_STATE();
    case 659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      END_STATE();
    case 660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      END_STATE();
    case 670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(634);
      END_STATE();
    case 676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(755);
      END_STATE();
    case 678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      END_STATE();
    case 682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      END_STATE();
    case 688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      END_STATE();
    case 692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      END_STATE();
    case 696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      END_STATE();
    case 702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 706:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(567);
      END_STATE();
    case 707:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 708:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 709:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 710:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 711:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 713:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 714:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 715:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(421);
      END_STATE();
    case 716:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 717:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 718:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(587);
      END_STATE();
    case 719:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 720:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 721:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 722:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 723:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 724:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 725:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 726:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 727:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 728:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 729:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 730:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 731:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 732:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(357);
      END_STATE();
    case 733:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
      END_STATE();
    case 734:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(833);
      END_STATE();
    case 735:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(866);
      END_STATE();
    case 736:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(902);
      END_STATE();
    case 737:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(867);
      END_STATE();
    case 738:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 739:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(635);
      END_STATE();
    case 740:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(933);
      END_STATE();
    case 741:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 742:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(932);
      END_STATE();
    case 743:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(663);
      END_STATE();
    case 744:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(658);
      END_STATE();
    case 745:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 746:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(901);
      END_STATE();
    case 747:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 748:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(957);
      END_STATE();
    case 749:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(900);
      END_STATE();
    case 750:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(965);
      END_STATE();
    case 751:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(809);
      END_STATE();
    case 752:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(941);
      END_STATE();
    case 753:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(810);
      END_STATE();
    case 754:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 755:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 756:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(615);
      END_STATE();
    case 757:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(660);
      END_STATE();
    case 758:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(616);
      END_STATE();
    case 759:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(617);
      END_STATE();
    case 760:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 761:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 762:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(631);
      END_STATE();
    case 763:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(987);
      END_STATE();
    case 764:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(782);
      END_STATE();
    case 765:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(13);
      END_STATE();
    case 766:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(26);
      END_STATE();
    case 767:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(776);
      END_STATE();
    case 768:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(777);
      END_STATE();
    case 769:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(781);
      END_STATE();
    case 770:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 771:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(987);
      END_STATE();
    case 772:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      END_STATE();
    case 773:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      END_STATE();
    case 774:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(987);
      END_STATE();
    case 775:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 776:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 777:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(988);
      END_STATE();
    case 778:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 779:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 780:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(990);
      END_STATE();
    case 781:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 782:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 783:
      if (sym_string_literal_character_set_1(lookahead)) ADVANCE(2);
      END_STATE();
    case 784:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 785:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 786:
      if (eof) ADVANCE(788);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == ')') ADVANCE(797);
      if (lookahead == ',') ADVANCE(801);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '<') ADVANCE(892);
      if (lookahead == '=') ADVANCE(857);
      if (lookahead == '>') ADVANCE(894);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(501);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(599);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(528);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(786)
      END_STATE();
    case 787:
      if (eof) ADVANCE(788);
      if (lookahead == ')') ADVANCE(797);
      if (lookahead == ',') ADVANCE(801);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1161);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1127);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1069);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1056);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1137);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1066);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(787)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(794);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(792);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(793);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_count_expression_token1);
      if (lookahead == '_') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_count_expression_token1);
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token1);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token2);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token1);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token2);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token3);
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token4);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token5);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token6);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token7);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token2);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_when_expression_token1);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_when_expression_token2);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_else_expression_token1);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__group_by_expression_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__group_by_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__group_by_expression_token2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__group_by_expression_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_for_type_token2);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_having_and_expression_token1);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_having_or_expression_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_having_or_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_having_not_expression_token1);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_having_not_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_fields_expression_token1);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_fields_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_fields_type_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_fields_type_token2);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_fields_type_token3);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_soql_with_clause_token1);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_soql_with_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token1);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token2);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token3);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_with_user_id_type_token1);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_expression_token1);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token1);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token2);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token3);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token1);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token2);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token1);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token2);
      if (lookahead == '_') ADVANCE(507);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token3);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token4);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_update_type_token1);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_update_type_token2);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_order_null_direciton_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_order_null_direciton_token2);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_order_null_direciton_token3);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_order_null_direciton_token3);
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_all_rows_clause_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(893);
      if (lookahead == '>') ADVANCE(891);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(895);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_value_comparison_operator_token1);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token2);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token3);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_date_literal_token1);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_date_literal_token2);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_date_literal_token3);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_date_literal_token4);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_date_literal_token5);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_date_literal_token6);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_date_literal_token7);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_date_literal_token8);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_date_literal_token9);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_date_literal_token10);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_date_literal_token11);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_date_literal_token12);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_date_literal_token13);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_date_literal_token14);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_date_literal_token15);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_date_literal_token16);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_date_literal_token17);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_date_literal_token18);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_date_literal_token19);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_date_literal_token20);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_date_literal_token21);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_date_literal_token22);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_date_literal_token23);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_date_literal_with_param_token1);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_function_name_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_function_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_function_name_token2);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_function_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_function_name_token3);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_function_name_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_function_name_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_function_name_token4);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_function_name_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_function_name_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_function_name_token5);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_function_name_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_function_name_token6);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_function_name_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_function_name_token7);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_function_name_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_function_name_token8);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_function_name_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_function_name_token9);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_function_name_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_function_name_token10);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_function_name_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_function_name_token11);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_function_name_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_function_name_token12);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_function_name_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_function_name_token13);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_function_name_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_function_name_token14);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_function_name_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_function_name_token15);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_function_name_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_function_name_token16);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_function_name_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_function_name_token17);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_function_name_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_function_name_token18);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_function_name_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_function_name_token19);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_function_name_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_function_name_token20);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_function_name_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_function_name_token21);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_function_name_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_function_name_token22);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_function_name_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_bound_apex_expression);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(878);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(976);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(979);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(984);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(978);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(990);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1085);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1100);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1085);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1193);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1192);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1082);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1057);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1048);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1159);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1106);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1129);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1044);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1130);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1188);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1131);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1132);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1189);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1191);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1081);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1029);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
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
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 786},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 786},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 786},
  [37] = {.lex_state = 786},
  [38] = {.lex_state = 786},
  [39] = {.lex_state = 786},
  [40] = {.lex_state = 786},
  [41] = {.lex_state = 786},
  [42] = {.lex_state = 786},
  [43] = {.lex_state = 786},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 786},
  [49] = {.lex_state = 787},
  [50] = {.lex_state = 787},
  [51] = {.lex_state = 787},
  [52] = {.lex_state = 786},
  [53] = {.lex_state = 787},
  [54] = {.lex_state = 787},
  [55] = {.lex_state = 787},
  [56] = {.lex_state = 786},
  [57] = {.lex_state = 786},
  [58] = {.lex_state = 786},
  [59] = {.lex_state = 787},
  [60] = {.lex_state = 786},
  [61] = {.lex_state = 786},
  [62] = {.lex_state = 786},
  [63] = {.lex_state = 786},
  [64] = {.lex_state = 786},
  [65] = {.lex_state = 786},
  [66] = {.lex_state = 786},
  [67] = {.lex_state = 786},
  [68] = {.lex_state = 786},
  [69] = {.lex_state = 786},
  [70] = {.lex_state = 786},
  [71] = {.lex_state = 786},
  [72] = {.lex_state = 786},
  [73] = {.lex_state = 786},
  [74] = {.lex_state = 786},
  [75] = {.lex_state = 786},
  [76] = {.lex_state = 786},
  [77] = {.lex_state = 786},
  [78] = {.lex_state = 786},
  [79] = {.lex_state = 786},
  [80] = {.lex_state = 786},
  [81] = {.lex_state = 786},
  [82] = {.lex_state = 786},
  [83] = {.lex_state = 786},
  [84] = {.lex_state = 786},
  [85] = {.lex_state = 786},
  [86] = {.lex_state = 786},
  [87] = {.lex_state = 786},
  [88] = {.lex_state = 786},
  [89] = {.lex_state = 786},
  [90] = {.lex_state = 786},
  [91] = {.lex_state = 786},
  [92] = {.lex_state = 786},
  [93] = {.lex_state = 786},
  [94] = {.lex_state = 786},
  [95] = {.lex_state = 786},
  [96] = {.lex_state = 786},
  [97] = {.lex_state = 786},
  [98] = {.lex_state = 786},
  [99] = {.lex_state = 786},
  [100] = {.lex_state = 786},
  [101] = {.lex_state = 786},
  [102] = {.lex_state = 786},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 786},
  [105] = {.lex_state = 786},
  [106] = {.lex_state = 786},
  [107] = {.lex_state = 786},
  [108] = {.lex_state = 786},
  [109] = {.lex_state = 786},
  [110] = {.lex_state = 786},
  [111] = {.lex_state = 786},
  [112] = {.lex_state = 786},
  [113] = {.lex_state = 786},
  [114] = {.lex_state = 786},
  [115] = {.lex_state = 786},
  [116] = {.lex_state = 786},
  [117] = {.lex_state = 786},
  [118] = {.lex_state = 786},
  [119] = {.lex_state = 786},
  [120] = {.lex_state = 786},
  [121] = {.lex_state = 786},
  [122] = {.lex_state = 786},
  [123] = {.lex_state = 786},
  [124] = {.lex_state = 786},
  [125] = {.lex_state = 786},
  [126] = {.lex_state = 786},
  [127] = {.lex_state = 786},
  [128] = {.lex_state = 786},
  [129] = {.lex_state = 786},
  [130] = {.lex_state = 786},
  [131] = {.lex_state = 786},
  [132] = {.lex_state = 786},
  [133] = {.lex_state = 786},
  [134] = {.lex_state = 786},
  [135] = {.lex_state = 786},
  [136] = {.lex_state = 786},
  [137] = {.lex_state = 786},
  [138] = {.lex_state = 786},
  [139] = {.lex_state = 786},
  [140] = {.lex_state = 786},
  [141] = {.lex_state = 786},
  [142] = {.lex_state = 786},
  [143] = {.lex_state = 786},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 786},
  [146] = {.lex_state = 786},
  [147] = {.lex_state = 786},
  [148] = {.lex_state = 786},
  [149] = {.lex_state = 786},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 786},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 786},
  [154] = {.lex_state = 786},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 786},
  [157] = {.lex_state = 786},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 786},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 786},
  [162] = {.lex_state = 786},
  [163] = {.lex_state = 786},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 786},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 786},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 786},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 786},
  [174] = {.lex_state = 786},
  [175] = {.lex_state = 786},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 786},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 786},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 790},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 5},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 790},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_formatting_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_count_expression_token1] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_soql_using_clause_token1] = ACTIONS(1),
    [aux_sym_soql_using_clause_token2] = ACTIONS(1),
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
    [aux_sym_fields_expression_token1] = ACTIONS(1),
    [aux_sym_fields_type_token1] = ACTIONS(1),
    [aux_sym_fields_type_token2] = ACTIONS(1),
    [aux_sym_fields_type_token3] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_soql_with_clause_token1] = ACTIONS(1),
    [aux_sym_soql_with_type_token1] = ACTIONS(1),
    [aux_sym_soql_with_type_token2] = ACTIONS(1),
    [aux_sym_soql_with_type_token3] = ACTIONS(1),
    [aux_sym_with_user_id_type_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [aux_sym_set_comparison_operator_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(380),
    [sym_header_comment] = STATE(316),
    [sym_formatting_comment] = STATE(1),
    [sym__soql_query_expression] = STATE(376),
    [sym_soql_query_body] = STATE(370),
    [sym_select_clause] = STATE(303),
    [aux_sym_source_file_repeat1] = STATE(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_select_clause_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(15), 1,
      sym_bound_apex_expression,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    STATE(2), 1,
      sym_formatting_comment,
    STATE(227), 1,
      sym__soql_literal,
    STATE(303), 1,
      sym_select_clause,
    STATE(357), 1,
      sym_soql_query_body,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(74), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
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
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(23), 1,
      sym_bound_apex_expression,
    STATE(3), 1,
      sym_formatting_comment,
    STATE(242), 1,
      sym__soql_literal,
    STATE(303), 1,
      sym_select_clause,
    STATE(340), 1,
      sym_soql_query_body,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(74), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
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
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(25), 1,
      sym_bound_apex_expression,
    STATE(4), 1,
      sym_formatting_comment,
    STATE(239), 1,
      sym__soql_literal,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(74), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
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
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(27), 1,
      sym_bound_apex_expression,
    STATE(5), 1,
      sym_formatting_comment,
    STATE(222), 1,
      sym__soql_literal,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(74), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
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
  [274] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_count_expression_token1,
    ACTIONS(33), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(35), 1,
      aux_sym_fields_expression_token1,
    ACTIONS(37), 1,
      aux_sym_function_expression_token1,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(6), 1,
      sym_formatting_comment,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(197), 1,
      sym__value_expression,
    STATE(230), 1,
      sym__selectable_expression,
    STATE(320), 1,
      sym_count_expression,
    STATE(330), 1,
      sym_function_name,
    STATE(178), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(310), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
    ACTIONS(39), 22,
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
  [348] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(43), 1,
      sym_bound_apex_expression,
    STATE(7), 1,
      sym_formatting_comment,
    STATE(293), 1,
      sym__soql_literal,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(74), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
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
  [412] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(51), 1,
      sym_bound_apex_expression,
    ACTIONS(53), 1,
      aux_sym_null_literal_token1,
    STATE(8), 1,
      sym_formatting_comment,
    STATE(269), 1,
      sym__soql_literal,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(55), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(57), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(275), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(47), 23,
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
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(59), 1,
      sym_bound_apex_expression,
    STATE(9), 1,
      sym_formatting_comment,
    STATE(107), 1,
      sym__soql_literal,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(74), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
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
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(61), 1,
      sym_bound_apex_expression,
    STATE(10), 1,
      sym_formatting_comment,
    STATE(79), 1,
      sym__soql_literal,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(74), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
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
    ACTIONS(49), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(53), 1,
      aux_sym_null_literal_token1,
    ACTIONS(63), 1,
      sym_bound_apex_expression,
    STATE(11), 1,
      sym_formatting_comment,
    STATE(252), 1,
      sym__soql_literal,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(55), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(57), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(275), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(47), 23,
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
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(69), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(12), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(47), 1,
      sym__value_expression,
    STATE(182), 1,
      sym__condition_expression,
    STATE(228), 1,
      sym_comparison_expression,
    STATE(361), 1,
      sym__boolean_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(116), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(39), 22,
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
  [741] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(35), 1,
      aux_sym_fields_expression_token1,
    ACTIONS(37), 1,
      aux_sym_function_expression_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    STATE(13), 1,
      sym_formatting_comment,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(197), 1,
      sym__value_expression,
    STATE(289), 1,
      sym__selectable_expression,
    STATE(330), 1,
      sym_function_name,
    STATE(178), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(310), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
    ACTIONS(39), 22,
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
  [812] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(69), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(14), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(47), 1,
      sym__value_expression,
    STATE(182), 1,
      sym__condition_expression,
    STATE(228), 1,
      sym_comparison_expression,
    STATE(332), 1,
      sym__boolean_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(116), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(39), 22,
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
  [885] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(69), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(44), 1,
      sym__value_expression,
    STATE(62), 1,
      sym__condition_expression,
    STATE(90), 1,
      sym_comparison_expression,
    STATE(118), 1,
      sym__boolean_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(116), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(39), 22,
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
  [958] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(81), 1,
      aux_sym_function_expression_token1,
    STATE(16), 1,
      sym_formatting_comment,
    STATE(46), 1,
      sym_function_expression,
    STATE(186), 1,
      sym__having_condition_expression,
    STATE(272), 1,
      sym_having_comparison_expression,
    STATE(369), 1,
      sym__having_boolean_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(151), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(83), 22,
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
  [1021] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(81), 1,
      aux_sym_function_expression_token1,
    STATE(17), 1,
      sym_formatting_comment,
    STATE(46), 1,
      sym_function_expression,
    STATE(186), 1,
      sym__having_condition_expression,
    STATE(272), 1,
      sym_having_comparison_expression,
    STATE(347), 1,
      sym__having_boolean_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(151), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(83), 22,
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
  [1084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(18), 1,
      sym_formatting_comment,
    ACTIONS(87), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    ACTIONS(85), 30,
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
  [1129] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(79), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(81), 1,
      aux_sym_function_expression_token1,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_formatting_comment,
    STATE(45), 1,
      sym_function_expression,
    STATE(78), 1,
      sym__having_condition_expression,
    STATE(115), 1,
      sym_having_comparison_expression,
    STATE(153), 1,
      sym__having_boolean_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(151), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(83), 22,
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
  [1192] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(44), 1,
      sym__value_expression,
    STATE(90), 1,
      sym_comparison_expression,
    STATE(117), 1,
      sym__condition_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1254] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(44), 1,
      sym__value_expression,
    STATE(90), 1,
      sym_comparison_expression,
    STATE(93), 1,
      sym__condition_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1316] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(44), 1,
      sym__value_expression,
    STATE(90), 1,
      sym_comparison_expression,
    STATE(100), 1,
      sym__condition_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1378] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(23), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(47), 1,
      sym__value_expression,
    STATE(228), 1,
      sym_comparison_expression,
    STATE(294), 1,
      sym__condition_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1440] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(24), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(126), 1,
      sym__group_by_expression,
    STATE(382), 1,
      sym_function_name,
    ACTIONS(91), 2,
      aux_sym__group_by_expression_token1,
      aux_sym__group_by_expression_token2,
    STATE(98), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1497] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(25), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(75), 1,
      sym__value_expression,
    STATE(159), 1,
      sym_order_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1553] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(26), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(75), 1,
      sym__value_expression,
    STATE(130), 1,
      sym_order_expression,
    STATE(382), 1,
      sym_function_name,
    STATE(41), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1609] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(37), 1,
      aux_sym_function_expression_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    STATE(27), 1,
      sym_formatting_comment,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(330), 1,
      sym_function_name,
    STATE(359), 1,
      sym__value_expression,
    STATE(178), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1662] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(37), 1,
      aux_sym_function_expression_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    STATE(28), 1,
      sym_formatting_comment,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(330), 1,
      sym_function_name,
    STATE(336), 1,
      sym__value_expression,
    STATE(178), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1715] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(71), 1,
      aux_sym_function_expression_token1,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(29), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_dotted_identifier,
    STATE(382), 1,
      sym_function_name,
    STATE(108), 2,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(39), 22,
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
  [1765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(30), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(93), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
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
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [1807] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(81), 1,
      aux_sym_function_expression_token1,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_formatting_comment,
    STATE(45), 1,
      sym_function_expression,
    STATE(115), 1,
      sym_having_comparison_expression,
    STATE(156), 1,
      sym__having_condition_expression,
    STATE(382), 1,
      sym_function_name,
    ACTIONS(83), 22,
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
  [1859] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_function_expression_token1,
    STATE(32), 1,
      sym_formatting_comment,
    STATE(46), 1,
      sym_function_expression,
    STATE(272), 1,
      sym_having_comparison_expression,
    STATE(287), 1,
      sym__having_condition_expression,
    STATE(382), 1,
      sym_function_name,
    ACTIONS(83), 22,
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
  [1911] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(33), 1,
      sym_formatting_comment,
    ACTIONS(104), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(100), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
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
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [1955] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(81), 1,
      aux_sym_function_expression_token1,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_formatting_comment,
    STATE(45), 1,
      sym_function_expression,
    STATE(115), 1,
      sym_having_comparison_expression,
    STATE(137), 1,
      sym__having_condition_expression,
    STATE(382), 1,
      sym_function_name,
    ACTIONS(83), 22,
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
  [2007] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_count_expression_token1,
    ACTIONS(81), 1,
      aux_sym_function_expression_token1,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_formatting_comment,
    STATE(45), 1,
      sym_function_expression,
    STATE(115), 1,
      sym_having_comparison_expression,
    STATE(138), 1,
      sym__having_condition_expression,
    STATE(382), 1,
      sym_function_name,
    ACTIONS(83), 22,
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
  [2059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(36), 1,
      sym_formatting_comment,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(93), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
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
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [2098] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(37), 1,
      sym_formatting_comment,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(106), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
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
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [2139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(38), 1,
      sym_formatting_comment,
    ACTIONS(112), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(110), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
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
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [2174] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(39), 1,
      sym_formatting_comment,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(106), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
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
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [2209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(40), 1,
      sym_formatting_comment,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(114), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
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
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [2244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(41), 1,
      sym_formatting_comment,
    ACTIONS(120), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(118), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
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
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [2277] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(124), 1,
      aux_sym_soql_using_clause_token1,
    ACTIONS(126), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(132), 1,
      aux_sym_where_clause_token1,
    ACTIONS(134), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(42), 1,
      sym_formatting_comment,
    STATE(43), 1,
      sym_soql_using_clause,
    STATE(52), 1,
      sym_where_clause,
    STATE(57), 1,
      sym_soql_with_clause,
    STATE(73), 1,
      sym_group_by_clause,
    STATE(96), 1,
      sym_order_by_clause,
    STATE(136), 1,
      sym_limit_clause,
    STATE(167), 1,
      sym_offset_clause,
    STATE(208), 1,
      sym_for_clause,
    STATE(314), 1,
      sym_update_clause,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2342] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(132), 1,
      aux_sym_where_clause_token1,
    ACTIONS(134), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(43), 1,
      sym_formatting_comment,
    STATE(48), 1,
      sym_where_clause,
    STATE(56), 1,
      sym_soql_with_clause,
    STATE(66), 1,
      sym_group_by_clause,
    STATE(106), 1,
      sym_order_by_clause,
    STATE(142), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(195), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2401] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(150), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(10), 1,
      sym_value_comparison_operator,
    STATE(44), 1,
      sym_formatting_comment,
    STATE(82), 1,
      sym__comparison,
    STATE(270), 1,
      sym_set_comparison_operator,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(152), 2,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    STATE(81), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(146), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2443] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(150), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(9), 1,
      sym_value_comparison_operator,
    STATE(45), 1,
      sym_formatting_comment,
    STATE(113), 1,
      sym__having_comparison,
    STATE(283), 1,
      sym_set_comparison_operator,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(152), 2,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    STATE(112), 2,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(146), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2485] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(150), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(11), 1,
      sym_value_comparison_operator,
    STATE(46), 1,
      sym_formatting_comment,
    STATE(271), 1,
      sym__having_comparison,
    STATE(313), 1,
      sym_set_comparison_operator,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(152), 2,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    STATE(268), 2,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(146), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2527] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(144), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(150), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(8), 1,
      sym_value_comparison_operator,
    STATE(47), 1,
      sym_formatting_comment,
    STATE(220), 1,
      sym__comparison,
    STATE(235), 1,
      sym_set_comparison_operator,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(152), 2,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    STATE(219), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(146), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [2569] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(134), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(48), 1,
      sym_formatting_comment,
    STATE(58), 1,
      sym_soql_with_clause,
    STATE(77), 1,
      sym_group_by_clause,
    STATE(92), 1,
      sym_order_by_clause,
    STATE(129), 1,
      sym_limit_clause,
    STATE(173), 1,
      sym_offset_clause,
    STATE(202), 1,
      sym_for_clause,
    STATE(286), 1,
      sym_update_clause,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2622] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_formatting_comment,
    STATE(51), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(104), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2653] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(50), 1,
      sym_formatting_comment,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(160), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(51), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(98), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2713] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(134), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(52), 1,
      sym_formatting_comment,
    STATE(56), 1,
      sym_soql_with_clause,
    STATE(66), 1,
      sym_group_by_clause,
    STATE(106), 1,
      sym_order_by_clause,
    STATE(142), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(195), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2766] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(53), 1,
      sym_formatting_comment,
    STATE(61), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(169), 9,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2800] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(54), 1,
      sym_formatting_comment,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(98), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2826] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(55), 1,
      sym_formatting_comment,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(160), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2851] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(56), 1,
      sym_formatting_comment,
    STATE(77), 1,
      sym_group_by_clause,
    STATE(92), 1,
      sym_order_by_clause,
    STATE(129), 1,
      sym_limit_clause,
    STATE(173), 1,
      sym_offset_clause,
    STATE(202), 1,
      sym_for_clause,
    STATE(286), 1,
      sym_update_clause,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2898] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(57), 1,
      sym_formatting_comment,
    STATE(66), 1,
      sym_group_by_clause,
    STATE(106), 1,
      sym_order_by_clause,
    STATE(142), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(195), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2945] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(58), 1,
      sym_formatting_comment,
    STATE(71), 1,
      sym_group_by_clause,
    STATE(102), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(171), 1,
      sym_offset_clause,
    STATE(216), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2992] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(171), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(59), 1,
      sym_formatting_comment,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(179), 9,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3021] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_formatting_comment,
    STATE(61), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3047] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      sym_formatting_comment,
    STATE(64), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(181), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3073] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(185), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(187), 1,
      aux_sym_having_or_expression_token1,
    STATE(62), 1,
      sym_formatting_comment,
    STATE(84), 1,
      aux_sym_or_expression_repeat1,
    STATE(87), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(191), 1,
      aux_sym_having_or_expression_token1,
    STATE(63), 1,
      sym_formatting_comment,
    ACTIONS(189), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(64), 2,
      sym_formatting_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(177), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3151] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(198), 1,
      aux_sym_having_or_expression_token1,
    STATE(65), 1,
      sym_formatting_comment,
    ACTIONS(196), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3174] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(66), 1,
      sym_formatting_comment,
    STATE(92), 1,
      sym_order_by_clause,
    STATE(129), 1,
      sym_limit_clause,
    STATE(173), 1,
      sym_offset_clause,
    STATE(202), 1,
      sym_for_clause,
    STATE(286), 1,
      sym_update_clause,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3215] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(202), 1,
      aux_sym_having_or_expression_token1,
    STATE(67), 1,
      sym_formatting_comment,
    ACTIONS(200), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3238] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(68), 1,
      sym_formatting_comment,
    ACTIONS(177), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(206), 1,
      aux_sym_having_or_expression_token1,
    STATE(69), 1,
      sym_formatting_comment,
    ACTIONS(204), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3282] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(70), 1,
      sym_formatting_comment,
    ACTIONS(208), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3303] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(71), 1,
      sym_formatting_comment,
    STATE(101), 1,
      sym_order_by_clause,
    STATE(134), 1,
      sym_limit_clause,
    STATE(163), 1,
      sym_offset_clause,
    STATE(205), 1,
      sym_for_clause,
    STATE(290), 1,
      sym_update_clause,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3344] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(72), 1,
      sym_formatting_comment,
    ACTIONS(212), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3365] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(73), 1,
      sym_formatting_comment,
    STATE(106), 1,
      sym_order_by_clause,
    STATE(142), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(195), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3406] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(216), 1,
      aux_sym_having_or_expression_token1,
    STATE(74), 1,
      sym_formatting_comment,
    ACTIONS(214), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3429] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(222), 1,
      aux_sym_order_null_direciton_token1,
    STATE(75), 1,
      sym_formatting_comment,
    STATE(110), 1,
      sym_order_direction,
    STATE(154), 1,
      sym_order_null_direciton,
    ACTIONS(220), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3458] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(226), 1,
      aux_sym_having_or_expression_token1,
    STATE(76), 1,
      sym_formatting_comment,
    ACTIONS(224), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3481] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(140), 1,
      aux_sym_order_by_clause_token1,
    STATE(77), 1,
      sym_formatting_comment,
    STATE(102), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(171), 1,
      sym_offset_clause,
    STATE(216), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3522] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(230), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(232), 1,
      aux_sym_having_or_expression_token1,
    STATE(78), 1,
      sym_formatting_comment,
    STATE(114), 1,
      aux_sym_having_or_expression_repeat1,
    STATE(120), 1,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(228), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3550] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(236), 1,
      aux_sym_having_or_expression_token1,
    STATE(79), 1,
      sym_formatting_comment,
    ACTIONS(234), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(240), 1,
      aux_sym_having_or_expression_token1,
    STATE(80), 1,
      sym_formatting_comment,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(244), 1,
      aux_sym_having_or_expression_token1,
    STATE(81), 1,
      sym_formatting_comment,
    ACTIONS(242), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(248), 1,
      aux_sym_having_or_expression_token1,
    STATE(82), 1,
      sym_formatting_comment,
    ACTIONS(246), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(252), 1,
      aux_sym_having_or_expression_token1,
    STATE(83), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3660] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(187), 1,
      aux_sym_having_or_expression_token1,
    STATE(83), 1,
      aux_sym_or_expression_repeat1,
    STATE(84), 1,
      sym_formatting_comment,
    ACTIONS(255), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3684] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(259), 1,
      aux_sym_having_or_expression_token1,
    STATE(85), 1,
      sym_formatting_comment,
    ACTIONS(257), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(263), 1,
      aux_sym_having_or_expression_token1,
    STATE(86), 1,
      sym_formatting_comment,
    ACTIONS(261), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3728] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(185), 1,
      aux_sym_having_and_expression_token1,
    STATE(87), 1,
      sym_formatting_comment,
    STATE(89), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(265), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(269), 1,
      aux_sym_having_or_expression_token1,
    STATE(88), 1,
      sym_formatting_comment,
    ACTIONS(267), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(273), 1,
      aux_sym_having_and_expression_token1,
    STATE(89), 2,
      sym_formatting_comment,
      aux_sym_and_expression_repeat1,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3796] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(278), 1,
      aux_sym_having_or_expression_token1,
    STATE(90), 1,
      sym_formatting_comment,
    ACTIONS(276), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3818] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(91), 1,
      sym_formatting_comment,
    ACTIONS(280), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3837] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(92), 1,
      sym_formatting_comment,
    STATE(140), 1,
      sym_limit_clause,
    STATE(171), 1,
      sym_offset_clause,
    STATE(216), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3872] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(93), 1,
      sym_formatting_comment,
    ACTIONS(271), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3891] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_formatting_comment,
    STATE(97), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3914] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(95), 1,
      sym_formatting_comment,
    ACTIONS(286), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3933] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(96), 1,
      sym_formatting_comment,
    STATE(142), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(195), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3968] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(97), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3989] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(98), 1,
      sym_formatting_comment,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4012] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(297), 1,
      aux_sym_having_and_expression_token1,
    STATE(99), 1,
      sym_formatting_comment,
    STATE(104), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(295), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4035] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(299), 1,
      aux_sym_having_or_expression_token1,
    STATE(100), 1,
      sym_formatting_comment,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4056] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(101), 1,
      sym_formatting_comment,
    STATE(145), 1,
      sym_limit_clause,
    STATE(175), 1,
      sym_offset_clause,
    STATE(206), 1,
      sym_for_clause,
    STATE(280), 1,
      sym_update_clause,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4091] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(102), 1,
      sym_formatting_comment,
    STATE(134), 1,
      sym_limit_clause,
    STATE(163), 1,
      sym_offset_clause,
    STATE(205), 1,
      sym_for_clause,
    STATE(290), 1,
      sym_update_clause,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4126] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(305), 1,
      aux_sym_with_user_id_type_token1,
    ACTIONS(307), 1,
      aux_sym_with_record_visibility_expression_token1,
    ACTIONS(309), 1,
      aux_sym_with_data_cat_expression_token1,
    STATE(103), 1,
      sym_formatting_comment,
    STATE(146), 1,
      sym_soql_with_type,
    ACTIONS(303), 3,
      aux_sym_soql_with_type_token1,
      aux_sym_soql_with_type_token2,
      aux_sym_soql_with_type_token3,
    STATE(132), 3,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [4155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(313), 1,
      aux_sym_having_and_expression_token1,
    STATE(104), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4176] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(297), 1,
      aux_sym_having_and_expression_token1,
    STATE(99), 1,
      aux_sym_with_data_cat_expression_repeat1,
    STATE(105), 1,
      sym_formatting_comment,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4199] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(136), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(106), 1,
      sym_formatting_comment,
    STATE(129), 1,
      sym_limit_clause,
    STATE(173), 1,
      sym_offset_clause,
    STATE(202), 1,
      sym_for_clause,
    STATE(286), 1,
      sym_update_clause,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4234] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(320), 1,
      aux_sym_having_or_expression_token1,
    STATE(107), 1,
      sym_formatting_comment,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4254] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(108), 1,
      sym_formatting_comment,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4272] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(109), 1,
      sym_formatting_comment,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(222), 1,
      aux_sym_order_null_direciton_token1,
    STATE(110), 1,
      sym_formatting_comment,
    STATE(162), 1,
      sym_order_null_direciton,
    ACTIONS(324), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4312] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(111), 1,
      sym_formatting_comment,
    ACTIONS(311), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(328), 1,
      aux_sym_having_or_expression_token1,
    STATE(112), 1,
      sym_formatting_comment,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4350] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(332), 1,
      aux_sym_having_or_expression_token1,
    STATE(113), 1,
      sym_formatting_comment,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4370] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(232), 1,
      aux_sym_having_or_expression_token1,
    STATE(114), 1,
      sym_formatting_comment,
    STATE(122), 1,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(334), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4392] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(338), 1,
      aux_sym_having_or_expression_token1,
    STATE(115), 1,
      sym_formatting_comment,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4412] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(116), 1,
      sym_formatting_comment,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4430] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(117), 1,
      sym_formatting_comment,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4448] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(118), 1,
      sym_formatting_comment,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(346), 1,
      aux_sym_having_or_expression_token1,
    STATE(119), 1,
      sym_formatting_comment,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4486] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(230), 1,
      aux_sym_having_and_expression_token1,
    STATE(120), 1,
      sym_formatting_comment,
    STATE(121), 1,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(348), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(352), 1,
      aux_sym_having_and_expression_token1,
    STATE(121), 2,
      sym_formatting_comment,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(350), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4528] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(357), 1,
      aux_sym_having_or_expression_token1,
    STATE(122), 2,
      sym_formatting_comment,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(355), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(362), 1,
      aux_sym_having_or_expression_token1,
    STATE(123), 1,
      sym_formatting_comment,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4568] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(124), 1,
      sym_formatting_comment,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4586] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(368), 1,
      aux_sym_having_or_expression_token1,
    STATE(125), 1,
      sym_formatting_comment,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4606] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(372), 1,
      aux_sym_having_clause_token1,
    STATE(126), 1,
      sym_formatting_comment,
    STATE(157), 1,
      sym_having_clause,
    ACTIONS(370), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4628] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(127), 1,
      sym_formatting_comment,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4646] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(378), 1,
      aux_sym_having_or_expression_token1,
    STATE(128), 1,
      sym_formatting_comment,
    ACTIONS(376), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4666] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(129), 1,
      sym_formatting_comment,
    STATE(171), 1,
      sym_offset_clause,
    STATE(216), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4695] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_formatting_comment,
    STATE(143), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(380), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4716] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(131), 1,
      sym_formatting_comment,
    ACTIONS(384), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4733] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(132), 1,
      sym_formatting_comment,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4750] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(133), 1,
      sym_formatting_comment,
    ACTIONS(388), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4767] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(134), 1,
      sym_formatting_comment,
    STATE(175), 1,
      sym_offset_clause,
    STATE(206), 1,
      sym_for_clause,
    STATE(280), 1,
      sym_update_clause,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4796] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(135), 2,
      sym_formatting_comment,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(390), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4815] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(136), 1,
      sym_formatting_comment,
    STATE(165), 1,
      sym_offset_clause,
    STATE(195), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(395), 1,
      aux_sym_having_or_expression_token1,
    STATE(137), 1,
      sym_formatting_comment,
    ACTIONS(355), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4863] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(138), 1,
      sym_formatting_comment,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4880] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(139), 1,
      sym_formatting_comment,
    ACTIONS(397), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4897] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(140), 1,
      sym_formatting_comment,
    STATE(163), 1,
      sym_offset_clause,
    STATE(205), 1,
      sym_for_clause,
    STATE(290), 1,
      sym_update_clause,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4926] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(141), 1,
      sym_formatting_comment,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4943] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(142), 1,
      sym_formatting_comment,
    STATE(173), 1,
      sym_offset_clause,
    STATE(202), 1,
      sym_for_clause,
    STATE(286), 1,
      sym_update_clause,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(143), 1,
      sym_formatting_comment,
    ACTIONS(401), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4993] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(405), 1,
      aux_sym_using_scope_type_token3,
    STATE(91), 1,
      sym_using_scope_type,
    STATE(144), 1,
      sym_formatting_comment,
    ACTIONS(403), 6,
      aux_sym_using_scope_type_token1,
      aux_sym_using_scope_type_token2,
      aux_sym_using_scope_type_token4,
      aux_sym_using_scope_type_token5,
      aux_sym_using_scope_type_token6,
      aux_sym_using_scope_type_token7,
  [5014] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    ACTIONS(138), 1,
      aux_sym_offset_clause_token1,
    STATE(145), 1,
      sym_formatting_comment,
    STATE(174), 1,
      sym_offset_clause,
    STATE(199), 1,
      sym_for_clause,
    STATE(295), 1,
      sym_update_clause,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5043] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(146), 1,
      sym_formatting_comment,
    ACTIONS(409), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5060] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(147), 1,
      sym_formatting_comment,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_null_direciton_token1,
  [5077] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(148), 1,
      sym_formatting_comment,
    ACTIONS(413), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5094] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(149), 1,
      sym_formatting_comment,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5110] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(150), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(98), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5130] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(151), 1,
      sym_formatting_comment,
    ACTIONS(228), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5146] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(152), 1,
      sym_formatting_comment,
    STATE(184), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(422), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5170] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(153), 1,
      sym_formatting_comment,
    ACTIONS(424), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5186] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(154), 1,
      sym_formatting_comment,
    ACTIONS(324), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5202] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    STATE(155), 1,
      sym_formatting_comment,
    STATE(215), 1,
      aux_sym_source_file_repeat1,
    STATE(303), 1,
      sym_select_clause,
    STATE(316), 1,
      sym_header_comment,
    STATE(331), 1,
      sym__soql_query_expression,
    STATE(370), 1,
      sym_soql_query_body,
  [5230] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(156), 1,
      sym_formatting_comment,
    ACTIONS(426), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5246] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(157), 1,
      sym_formatting_comment,
    ACTIONS(428), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5262] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(430), 1,
      anon_sym_DOT,
    STATE(158), 1,
      sym_formatting_comment,
    STATE(160), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(108), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5284] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(159), 1,
      sym_formatting_comment,
    ACTIONS(390), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5300] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(430), 1,
      anon_sym_DOT,
    STATE(150), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(160), 1,
      sym_formatting_comment,
    ACTIONS(100), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(104), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5322] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(161), 1,
      sym_formatting_comment,
    ACTIONS(432), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5338] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(162), 1,
      sym_formatting_comment,
    ACTIONS(434), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5354] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(163), 1,
      sym_formatting_comment,
    STATE(206), 1,
      sym_for_clause,
    STATE(280), 1,
      sym_update_clause,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5377] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(436), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(438), 1,
      sym_bound_apex_expression,
    STATE(164), 1,
      sym_formatting_comment,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(351), 1,
      sym_field_identifier,
    STATE(383), 1,
      sym_geo_location_type,
  [5402] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(165), 1,
      sym_formatting_comment,
    STATE(202), 1,
      sym_for_clause,
    STATE(286), 1,
      sym_update_clause,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5425] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(166), 1,
      sym_formatting_comment,
    ACTIONS(440), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5444] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(167), 1,
      sym_formatting_comment,
    STATE(195), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5467] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(442), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(444), 1,
      aux_sym_when_expression_token1,
    ACTIONS(446), 1,
      aux_sym_else_expression_token1,
    STATE(168), 1,
      sym_formatting_comment,
    STATE(183), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(246), 1,
      sym_when_expression,
    STATE(322), 1,
      sym_else_expression,
  [5492] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(436), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(438), 1,
      sym_bound_apex_expression,
    STATE(169), 1,
      sym_formatting_comment,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(339), 1,
      sym_geo_location_type,
    STATE(351), 1,
      sym_field_identifier,
  [5517] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(444), 1,
      aux_sym_when_expression_token1,
    ACTIONS(446), 1,
      aux_sym_else_expression_token1,
    ACTIONS(448), 1,
      aux_sym_type_of_clause_token2,
    STATE(168), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(170), 1,
      sym_formatting_comment,
    STATE(246), 1,
      sym_when_expression,
    STATE(324), 1,
      sym_else_expression,
  [5542] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(171), 1,
      sym_formatting_comment,
    STATE(205), 1,
      sym_for_clause,
    STATE(290), 1,
      sym_update_clause,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5565] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(172), 1,
      sym_formatting_comment,
    ACTIONS(93), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(98), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5582] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(173), 1,
      sym_formatting_comment,
    STATE(216), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5605] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(174), 1,
      sym_formatting_comment,
    STATE(198), 1,
      sym_for_clause,
    STATE(301), 1,
      sym_update_clause,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5628] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_for_clause_token1,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(175), 1,
      sym_formatting_comment,
    STATE(199), 1,
      sym_for_clause,
    STATE(295), 1,
      sym_update_clause,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5651] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      sym_formatting_comment,
    STATE(184), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(422), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(177), 2,
      sym_formatting_comment,
      aux_sym_for_clause_repeat1,
    ACTIONS(452), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [5685] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(178), 1,
      sym_formatting_comment,
    ACTIONS(118), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(120), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5701] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(179), 1,
      sym_formatting_comment,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(108), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5717] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(459), 1,
      aux_sym_with_data_cat_filter_type_token2,
    STATE(180), 1,
      sym_formatting_comment,
    STATE(278), 1,
      sym_with_data_cat_filter_type,
    ACTIONS(457), 3,
      aux_sym_with_data_cat_filter_type_token1,
      aux_sym_with_data_cat_filter_type_token3,
      aux_sym_with_data_cat_filter_type_token4,
  [5735] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(181), 1,
      sym_formatting_comment,
    ACTIONS(114), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(116), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5751] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(461), 1,
      aux_sym_having_or_expression_token1,
    STATE(87), 1,
      aux_sym_and_expression_repeat1,
    STATE(182), 1,
      sym_formatting_comment,
    STATE(223), 1,
      aux_sym_or_expression_repeat1,
  [5773] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(465), 1,
      aux_sym_when_expression_token1,
    STATE(246), 1,
      sym_when_expression,
    ACTIONS(463), 2,
      aux_sym_type_of_clause_token2,
      aux_sym_else_expression_token1,
    STATE(183), 2,
      sym_formatting_comment,
      aux_sym_type_of_clause_repeat1,
  [5791] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      sym_formatting_comment,
    STATE(189), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(468), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5809] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(185), 1,
      sym_formatting_comment,
    ACTIONS(470), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_offset_clause_token1,
  [5823] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(472), 1,
      aux_sym_having_or_expression_token1,
    STATE(120), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(186), 1,
      sym_formatting_comment,
    STATE(217), 1,
      aux_sym_having_or_expression_repeat1,
  [5845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(187), 1,
      sym_formatting_comment,
    ACTIONS(110), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(112), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5861] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_for_clause_repeat1,
    STATE(188), 1,
      sym_formatting_comment,
    ACTIONS(474), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [5879] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(189), 2,
      sym_formatting_comment,
      aux_sym_field_list_repeat1,
    ACTIONS(440), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_for_clause_repeat1,
    STATE(190), 1,
      sym_formatting_comment,
    ACTIONS(481), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [5913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(191), 2,
      sym_formatting_comment,
      aux_sym_update_clause_repeat1,
  [5928] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(192), 1,
      sym_formatting_comment,
    ACTIONS(488), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_type_token1,
  [5941] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(490), 1,
      sym_bound_apex_expression,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(193), 1,
      sym_formatting_comment,
    STATE(385), 1,
      sym_field_identifier,
  [5960] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(194), 1,
      sym_formatting_comment,
    ACTIONS(494), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
  [5973] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(195), 1,
      sym_formatting_comment,
    STATE(286), 1,
      sym_update_clause,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5990] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(196), 1,
      sym_formatting_comment,
    ACTIONS(452), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_type_token1,
  [6003] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      aux_sym_from_clause_token1,
    ACTIONS(500), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(197), 1,
      sym_formatting_comment,
  [6022] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(198), 1,
      sym_formatting_comment,
    STATE(306), 1,
      sym_update_clause,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6039] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(199), 1,
      sym_formatting_comment,
    STATE(301), 1,
      sym_update_clause,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6056] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_formatting_comment,
    STATE(211), 1,
      aux_sym_update_clause_repeat1,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6073] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(53), 1,
      sym_storage_identifier,
    STATE(55), 1,
      sym_dotted_identifier,
    STATE(60), 1,
      sym_storage_alias,
    STATE(201), 1,
      sym_formatting_comment,
  [6092] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(202), 1,
      sym_formatting_comment,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6109] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(512), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(203), 1,
      sym_formatting_comment,
    STATE(297), 1,
      sym_with_record_visibility_param,
    ACTIONS(514), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [6126] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(204), 1,
      sym_formatting_comment,
    ACTIONS(440), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(205), 1,
      sym_formatting_comment,
    STATE(280), 1,
      sym_update_clause,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(206), 1,
      sym_formatting_comment,
    STATE(295), 1,
      sym_update_clause,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6173] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(516), 1,
      sym_bound_apex_expression,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(207), 1,
      sym_formatting_comment,
    STATE(386), 1,
      sym_field_identifier,
  [6192] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(208), 1,
      sym_formatting_comment,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(190), 1,
      sym_for_type,
    STATE(209), 1,
      sym_formatting_comment,
    ACTIONS(518), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [6224] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(196), 1,
      sym_for_type,
    STATE(210), 1,
      sym_formatting_comment,
    ACTIONS(518), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [6239] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_update_clause_repeat1,
    STATE(211), 1,
      sym_formatting_comment,
    ACTIONS(520), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6256] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(512), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(212), 1,
      sym_formatting_comment,
    STATE(226), 1,
      sym_with_record_visibility_param,
    ACTIONS(514), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [6273] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(55), 1,
      sym_dotted_identifier,
    STATE(59), 1,
      sym_storage_identifier,
    STATE(68), 1,
      sym_storage_alias,
    STATE(213), 1,
      sym_formatting_comment,
  [6292] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(214), 1,
      sym_formatting_comment,
    STATE(337), 1,
      sym_fields_type,
    ACTIONS(522), 3,
      aux_sym_fields_type_token1,
      aux_sym_fields_type_token2,
      aux_sym_fields_type_token3,
  [6307] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(524), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(527), 1,
      aux_sym_select_clause_token1,
    STATE(316), 1,
      sym_header_comment,
    STATE(215), 2,
      sym_formatting_comment,
      aux_sym_source_file_repeat1,
  [6324] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_for_type_token1,
    STATE(216), 1,
      sym_formatting_comment,
    STATE(290), 1,
      sym_update_clause,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6341] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      aux_sym_having_or_expression_token1,
    STATE(217), 1,
      sym_formatting_comment,
    STATE(257), 1,
      aux_sym_having_or_expression_repeat1,
  [6357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(218), 1,
      sym_formatting_comment,
    ACTIONS(204), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6369] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(219), 1,
      sym_formatting_comment,
    ACTIONS(242), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6381] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(220), 1,
      sym_formatting_comment,
    ACTIONS(246), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6393] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      sym_formatting_comment,
    STATE(248), 1,
      aux_sym__having_set_comparison_repeat1,
  [6409] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(222), 1,
      sym_formatting_comment,
  [6425] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      aux_sym_having_or_expression_token1,
    STATE(223), 1,
      sym_formatting_comment,
    STATE(255), 1,
      aux_sym_or_expression_repeat1,
  [6441] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym_formatting_comment,
    STATE(248), 1,
      aux_sym__having_set_comparison_repeat1,
  [6457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(225), 1,
      sym_formatting_comment,
    ACTIONS(483), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6469] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      sym_formatting_comment,
    STATE(245), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [6485] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(227), 1,
      sym_formatting_comment,
  [6501] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(228), 1,
      sym_formatting_comment,
    ACTIONS(276), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6513] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(229), 1,
      sym_formatting_comment,
    ACTIONS(189), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6525] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      aux_sym_from_clause_token1,
    STATE(230), 1,
      sym_formatting_comment,
    STATE(249), 1,
      aux_sym_select_clause_repeat1,
  [6541] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    STATE(231), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_filter_repeat1,
  [6555] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(200), 1,
      sym_update_type,
    STATE(232), 1,
      sym_formatting_comment,
    ACTIONS(552), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [6569] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(233), 1,
      sym_formatting_comment,
    ACTIONS(554), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6581] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      sym_formatting_comment,
    STATE(248), 1,
      aux_sym__having_set_comparison_repeat1,
  [6597] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      sym_bound_apex_expression,
    STATE(235), 1,
      sym_formatting_comment,
    STATE(276), 1,
      sym_subquery,
  [6613] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      sym_formatting_comment,
    STATE(263), 1,
      aux_sym__group_by_expression_repeat2,
  [6629] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_with_data_cat_filter_repeat1,
    STATE(237), 1,
      sym_formatting_comment,
  [6645] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    STATE(238), 1,
      sym_formatting_comment,
    STATE(303), 1,
      sym_select_clause,
    STATE(340), 1,
      sym_soql_query_body,
  [6661] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(239), 1,
      sym_formatting_comment,
  [6677] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(240), 1,
      sym_formatting_comment,
    ACTIONS(360), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6689] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(241), 1,
      sym_formatting_comment,
    ACTIONS(366), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6701] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      sym_formatting_comment,
    STATE(273), 1,
      aux_sym__having_set_comparison_repeat1,
  [6717] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(243), 1,
      sym_formatting_comment,
    ACTIONS(238), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6729] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(244), 1,
      sym_formatting_comment,
    STATE(282), 1,
      sym_boolean,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [6743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_formatting_comment,
    STATE(277), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [6759] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(246), 1,
      sym_formatting_comment,
    ACTIONS(576), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6771] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_with_data_cat_filter_repeat1,
    STATE(247), 1,
      sym_formatting_comment,
  [6787] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(248), 2,
      sym_formatting_comment,
      aux_sym__having_set_comparison_repeat1,
  [6801] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      aux_sym_from_clause_token1,
    STATE(249), 1,
      sym_formatting_comment,
    STATE(250), 1,
      aux_sym_select_clause_repeat1,
  [6817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      aux_sym_from_clause_token1,
    STATE(250), 2,
      sym_formatting_comment,
      aux_sym_select_clause_repeat1,
  [6831] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(251), 1,
      sym_formatting_comment,
    ACTIONS(376), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6843] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(252), 1,
      sym_formatting_comment,
    ACTIONS(318), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(592), 1,
      sym_identifier,
    STATE(176), 1,
      sym_dotted_identifier,
    STATE(253), 1,
      sym_formatting_comment,
    STATE(326), 1,
      sym_field_list,
  [6871] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(236), 1,
      sym_field_identifier,
    STATE(254), 1,
      sym_formatting_comment,
  [6887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    ACTIONS(594), 1,
      aux_sym_having_or_expression_token1,
    STATE(255), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
  [6901] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(592), 1,
      sym_identifier,
    STATE(176), 1,
      sym_dotted_identifier,
    STATE(233), 1,
      sym_field_list,
    STATE(256), 1,
      sym_formatting_comment,
  [6917] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      aux_sym_having_or_expression_token1,
    STATE(257), 2,
      sym_formatting_comment,
      aux_sym_having_or_expression_repeat1,
  [6931] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(225), 1,
      sym_update_type,
    STATE(258), 1,
      sym_formatting_comment,
    ACTIONS(552), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [6945] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(259), 1,
      sym_formatting_comment,
    ACTIONS(200), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6957] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(260), 1,
      sym_formatting_comment,
    ACTIONS(600), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6969] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(261), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat2,
  [6983] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(179), 1,
      sym_dotted_identifier,
    STATE(262), 1,
      sym_formatting_comment,
    STATE(285), 1,
      sym_field_identifier,
  [6999] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym__group_by_expression_repeat2,
    STATE(263), 1,
      sym_formatting_comment,
  [7015] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(264), 1,
      sym_formatting_comment,
    ACTIONS(344), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(265), 1,
      sym_formatting_comment,
    ACTIONS(267), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7039] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(266), 1,
      sym_formatting_comment,
    ACTIONS(257), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7051] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(267), 1,
      sym_formatting_comment,
    ACTIONS(196), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7063] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(268), 1,
      sym_formatting_comment,
    ACTIONS(326), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7075] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(269), 1,
      sym_formatting_comment,
    ACTIONS(234), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7087] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(611), 1,
      sym_bound_apex_expression,
    STATE(86), 1,
      sym_subquery,
    STATE(270), 1,
      sym_formatting_comment,
  [7103] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(271), 1,
      sym_formatting_comment,
    ACTIONS(330), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(272), 1,
      sym_formatting_comment,
    ACTIONS(336), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7127] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(273), 1,
      sym_formatting_comment,
  [7143] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(274), 1,
      sym_formatting_comment,
    ACTIONS(224), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7155] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(275), 1,
      sym_formatting_comment,
    ACTIONS(214), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7167] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(276), 1,
      sym_formatting_comment,
    ACTIONS(261), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    STATE(277), 2,
      sym_formatting_comment,
      aux_sym_with_record_visibility_expression_repeat1,
  [7193] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(278), 1,
      sym_formatting_comment,
  [7206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(624), 1,
      sym_identifier,
    STATE(111), 1,
      sym_with_data_cat_filter,
    STATE(279), 1,
      sym_formatting_comment,
  [7219] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(280), 1,
      sym_formatting_comment,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7230] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(281), 1,
      sym_formatting_comment,
    ACTIONS(626), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [7241] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(282), 1,
      sym_formatting_comment,
    ACTIONS(628), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(630), 1,
      anon_sym_LPAREN,
    ACTIONS(632), 1,
      sym_bound_apex_expression,
    STATE(283), 1,
      sym_formatting_comment,
  [7265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(624), 1,
      sym_identifier,
    STATE(105), 1,
      sym_with_data_cat_filter,
    STATE(284), 1,
      sym_formatting_comment,
  [7278] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(285), 1,
      sym_formatting_comment,
    ACTIONS(602), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7289] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(286), 1,
      sym_formatting_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7300] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(287), 1,
      sym_formatting_comment,
    ACTIONS(355), 2,
      anon_sym_RPAREN,
      aux_sym_having_or_expression_token1,
  [7311] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(288), 1,
      sym_formatting_comment,
    ACTIONS(634), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [7322] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(289), 1,
      sym_formatting_comment,
    ACTIONS(590), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7333] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(290), 1,
      sym_formatting_comment,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(636), 1,
      sym_identifier,
    STATE(204), 1,
      sym_dotted_identifier,
    STATE(291), 1,
      sym_formatting_comment,
  [7357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(292), 1,
      sym_formatting_comment,
    ACTIONS(638), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7368] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(293), 1,
      sym_formatting_comment,
    ACTIONS(580), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7379] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(294), 1,
      sym_formatting_comment,
    ACTIONS(250), 2,
      anon_sym_RPAREN,
      aux_sym_having_or_expression_token1,
  [7390] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(295), 1,
      sym_formatting_comment,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7401] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(296), 1,
      sym_formatting_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7412] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(297), 1,
      sym_formatting_comment,
    ACTIONS(615), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7423] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(298), 1,
      sym_formatting_comment,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7434] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(299), 1,
      sym_formatting_comment,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(642), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(644), 1,
      aux_sym_select_clause_token1,
    STATE(300), 1,
      sym_formatting_comment,
  [7458] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(301), 1,
      sym_formatting_comment,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7469] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(302), 1,
      sym_formatting_comment,
    ACTIONS(646), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(648), 1,
      aux_sym_from_clause_token1,
    STATE(42), 1,
      sym_from_clause,
    STATE(303), 1,
      sym_formatting_comment,
  [7493] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(304), 1,
      sym_formatting_comment,
    ACTIONS(547), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7504] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(305), 1,
      sym_formatting_comment,
    ACTIONS(650), 2,
      sym_bound_apex_expression,
      sym_int,
  [7515] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(306), 1,
      sym_formatting_comment,
    ACTIONS(652), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7526] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(307), 1,
      sym_formatting_comment,
    ACTIONS(654), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7537] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(308), 1,
      sym_formatting_comment,
    ACTIONS(656), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [7548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(658), 1,
      aux_sym_order_null_direciton_token2,
    ACTIONS(660), 1,
      aux_sym_order_null_direciton_token3,
    STATE(309), 1,
      sym_formatting_comment,
  [7561] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(310), 1,
      sym_formatting_comment,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7572] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(311), 1,
      sym_formatting_comment,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7583] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(312), 1,
      sym_formatting_comment,
    ACTIONS(664), 2,
      sym_bound_apex_expression,
      sym_int,
  [7594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      sym_bound_apex_expression,
    STATE(313), 1,
      sym_formatting_comment,
  [7607] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(314), 1,
      sym_formatting_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7618] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(315), 1,
      sym_formatting_comment,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(672), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(674), 1,
      aux_sym_select_clause_token1,
    STATE(316), 1,
      sym_formatting_comment,
  [7642] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      sym_formatting_comment,
  [7652] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(678), 1,
      sym_identifier,
    STATE(318), 1,
      sym_formatting_comment,
  [7662] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(680), 1,
      sym_identifier,
    STATE(319), 1,
      sym_formatting_comment,
  [7672] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(545), 1,
      aux_sym_from_clause_token1,
    STATE(320), 1,
      sym_formatting_comment,
  [7682] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym_formatting_comment,
  [7692] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(684), 1,
      aux_sym_type_of_clause_token2,
    STATE(322), 1,
      sym_formatting_comment,
  [7702] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    STATE(323), 1,
      sym_formatting_comment,
  [7712] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(442), 1,
      aux_sym_type_of_clause_token2,
    STATE(324), 1,
      sym_formatting_comment,
  [7722] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      sym_formatting_comment,
  [7732] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(690), 1,
      aux_sym_type_of_clause_token2,
    STATE(326), 1,
      sym_formatting_comment,
  [7742] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(692), 1,
      aux_sym_when_expression_token2,
    STATE(327), 1,
      sym_formatting_comment,
  [7752] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      sym_formatting_comment,
  [7762] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(696), 1,
      sym_identifier,
    STATE(329), 1,
      sym_formatting_comment,
  [7772] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    STATE(330), 1,
      sym_formatting_comment,
  [7782] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(700), 1,
      ts_builtin_sym_end,
    STATE(331), 1,
      sym_formatting_comment,
  [7792] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      sym_formatting_comment,
  [7802] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(704), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(333), 1,
      sym_formatting_comment,
  [7812] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(706), 1,
      sym_decimal,
    STATE(334), 1,
      sym_formatting_comment,
  [7822] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(335), 1,
      sym_formatting_comment,
  [7832] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_formatting_comment,
  [7842] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      sym_formatting_comment,
  [7852] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(714), 1,
      sym_identifier,
    STATE(338), 1,
      sym_formatting_comment,
  [7862] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      sym_formatting_comment,
  [7872] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_formatting_comment,
  [7882] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      sym_formatting_comment,
  [7892] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym_formatting_comment,
  [7902] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(724), 1,
      sym_string_literal,
    STATE(343), 1,
      sym_formatting_comment,
  [7912] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(726), 1,
      anon_sym_EQ,
    STATE(344), 1,
      sym_formatting_comment,
  [7922] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym_formatting_comment,
  [7932] = 3,
    ACTIONS(730), 1,
      aux_sym_header_comment_token1,
    ACTIONS(732), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(346), 1,
      sym_formatting_comment,
  [7942] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_formatting_comment,
  [7952] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      sym_formatting_comment,
  [7962] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(738), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym_formatting_comment,
  [7972] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_formatting_comment,
  [7982] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      sym_formatting_comment,
  [7992] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(744), 1,
      sym_int,
    STATE(352), 1,
      sym_formatting_comment,
  [8002] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(746), 1,
      sym_int,
    STATE(353), 1,
      sym_formatting_comment,
  [8012] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym_formatting_comment,
  [8022] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(750), 1,
      sym_identifier,
    STATE(355), 1,
      sym_formatting_comment,
  [8032] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_formatting_comment,
  [8042] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      sym_formatting_comment,
  [8052] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(757), 1,
      sym_identifier,
    STATE(358), 1,
      sym_formatting_comment,
  [8062] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      sym_formatting_comment,
  [8072] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(761), 1,
      sym_identifier,
    STATE(360), 1,
      sym_formatting_comment,
  [8082] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      sym_formatting_comment,
  [8092] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(765), 1,
      aux_sym_soql_using_clause_token2,
    STATE(362), 1,
      sym_formatting_comment,
  [8102] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(767), 1,
      aux_sym_group_by_clause_token2,
    STATE(363), 1,
      sym_formatting_comment,
  [8112] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(769), 1,
      aux_sym_with_data_cat_expression_token2,
    STATE(364), 1,
      sym_formatting_comment,
  [8122] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(771), 1,
      sym_string_literal,
    STATE(365), 1,
      sym_formatting_comment,
  [8132] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(773), 1,
      sym_int,
    STATE(366), 1,
      sym_formatting_comment,
  [8142] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(775), 1,
      sym_decimal,
    STATE(367), 1,
      sym_formatting_comment,
  [8152] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_formatting_comment,
  [8162] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_formatting_comment,
  [8172] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(781), 1,
      ts_builtin_sym_end,
    STATE(370), 1,
      sym_formatting_comment,
  [8182] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(783), 1,
      aux_sym_group_by_clause_token2,
    STATE(371), 1,
      sym_formatting_comment,
  [8192] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(785), 1,
      anon_sym_EQ,
    STATE(372), 1,
      sym_formatting_comment,
  [8202] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(787), 1,
      anon_sym_EQ,
    STATE(373), 1,
      sym_formatting_comment,
  [8212] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(789), 1,
      aux_sym_from_clause_token1,
    STATE(374), 1,
      sym_formatting_comment,
  [8222] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(791), 1,
      sym_identifier,
    STATE(375), 1,
      sym_formatting_comment,
  [8232] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
    STATE(376), 1,
      sym_formatting_comment,
  [8242] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(795), 1,
      anon_sym_COLON,
    STATE(377), 1,
      sym_formatting_comment,
  [8252] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(797), 1,
      anon_sym_COLON,
    STATE(378), 1,
      sym_formatting_comment,
  [8262] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(799), 1,
      sym_string_literal,
    STATE(379), 1,
      sym_formatting_comment,
  [8272] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(801), 1,
      ts_builtin_sym_end,
    STATE(380), 1,
      sym_formatting_comment,
  [8282] = 3,
    ACTIONS(732), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(803), 1,
      aux_sym_header_comment_token1,
    STATE(381), 1,
      sym_formatting_comment,
  [8292] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    STATE(382), 1,
      sym_formatting_comment,
  [8302] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      sym_formatting_comment,
  [8312] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    STATE(384), 1,
      sym_formatting_comment,
  [8322] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      sym_formatting_comment,
  [8332] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      sym_formatting_comment,
  [8342] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      sym_formatting_comment,
  [8352] = 1,
    ACTIONS(817), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 348,
  [SMALL_STATE(8)] = 412,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 540,
  [SMALL_STATE(11)] = 604,
  [SMALL_STATE(12)] = 668,
  [SMALL_STATE(13)] = 741,
  [SMALL_STATE(14)] = 812,
  [SMALL_STATE(15)] = 885,
  [SMALL_STATE(16)] = 958,
  [SMALL_STATE(17)] = 1021,
  [SMALL_STATE(18)] = 1084,
  [SMALL_STATE(19)] = 1129,
  [SMALL_STATE(20)] = 1192,
  [SMALL_STATE(21)] = 1254,
  [SMALL_STATE(22)] = 1316,
  [SMALL_STATE(23)] = 1378,
  [SMALL_STATE(24)] = 1440,
  [SMALL_STATE(25)] = 1497,
  [SMALL_STATE(26)] = 1553,
  [SMALL_STATE(27)] = 1609,
  [SMALL_STATE(28)] = 1662,
  [SMALL_STATE(29)] = 1715,
  [SMALL_STATE(30)] = 1765,
  [SMALL_STATE(31)] = 1807,
  [SMALL_STATE(32)] = 1859,
  [SMALL_STATE(33)] = 1911,
  [SMALL_STATE(34)] = 1955,
  [SMALL_STATE(35)] = 2007,
  [SMALL_STATE(36)] = 2059,
  [SMALL_STATE(37)] = 2098,
  [SMALL_STATE(38)] = 2139,
  [SMALL_STATE(39)] = 2174,
  [SMALL_STATE(40)] = 2209,
  [SMALL_STATE(41)] = 2244,
  [SMALL_STATE(42)] = 2277,
  [SMALL_STATE(43)] = 2342,
  [SMALL_STATE(44)] = 2401,
  [SMALL_STATE(45)] = 2443,
  [SMALL_STATE(46)] = 2485,
  [SMALL_STATE(47)] = 2527,
  [SMALL_STATE(48)] = 2569,
  [SMALL_STATE(49)] = 2622,
  [SMALL_STATE(50)] = 2653,
  [SMALL_STATE(51)] = 2684,
  [SMALL_STATE(52)] = 2713,
  [SMALL_STATE(53)] = 2766,
  [SMALL_STATE(54)] = 2800,
  [SMALL_STATE(55)] = 2826,
  [SMALL_STATE(56)] = 2851,
  [SMALL_STATE(57)] = 2898,
  [SMALL_STATE(58)] = 2945,
  [SMALL_STATE(59)] = 2992,
  [SMALL_STATE(60)] = 3021,
  [SMALL_STATE(61)] = 3047,
  [SMALL_STATE(62)] = 3073,
  [SMALL_STATE(63)] = 3103,
  [SMALL_STATE(64)] = 3127,
  [SMALL_STATE(65)] = 3151,
  [SMALL_STATE(66)] = 3174,
  [SMALL_STATE(67)] = 3215,
  [SMALL_STATE(68)] = 3238,
  [SMALL_STATE(69)] = 3259,
  [SMALL_STATE(70)] = 3282,
  [SMALL_STATE(71)] = 3303,
  [SMALL_STATE(72)] = 3344,
  [SMALL_STATE(73)] = 3365,
  [SMALL_STATE(74)] = 3406,
  [SMALL_STATE(75)] = 3429,
  [SMALL_STATE(76)] = 3458,
  [SMALL_STATE(77)] = 3481,
  [SMALL_STATE(78)] = 3522,
  [SMALL_STATE(79)] = 3550,
  [SMALL_STATE(80)] = 3572,
  [SMALL_STATE(81)] = 3594,
  [SMALL_STATE(82)] = 3616,
  [SMALL_STATE(83)] = 3638,
  [SMALL_STATE(84)] = 3660,
  [SMALL_STATE(85)] = 3684,
  [SMALL_STATE(86)] = 3706,
  [SMALL_STATE(87)] = 3728,
  [SMALL_STATE(88)] = 3752,
  [SMALL_STATE(89)] = 3774,
  [SMALL_STATE(90)] = 3796,
  [SMALL_STATE(91)] = 3818,
  [SMALL_STATE(92)] = 3837,
  [SMALL_STATE(93)] = 3872,
  [SMALL_STATE(94)] = 3891,
  [SMALL_STATE(95)] = 3914,
  [SMALL_STATE(96)] = 3933,
  [SMALL_STATE(97)] = 3968,
  [SMALL_STATE(98)] = 3989,
  [SMALL_STATE(99)] = 4012,
  [SMALL_STATE(100)] = 4035,
  [SMALL_STATE(101)] = 4056,
  [SMALL_STATE(102)] = 4091,
  [SMALL_STATE(103)] = 4126,
  [SMALL_STATE(104)] = 4155,
  [SMALL_STATE(105)] = 4176,
  [SMALL_STATE(106)] = 4199,
  [SMALL_STATE(107)] = 4234,
  [SMALL_STATE(108)] = 4254,
  [SMALL_STATE(109)] = 4272,
  [SMALL_STATE(110)] = 4290,
  [SMALL_STATE(111)] = 4312,
  [SMALL_STATE(112)] = 4330,
  [SMALL_STATE(113)] = 4350,
  [SMALL_STATE(114)] = 4370,
  [SMALL_STATE(115)] = 4392,
  [SMALL_STATE(116)] = 4412,
  [SMALL_STATE(117)] = 4430,
  [SMALL_STATE(118)] = 4448,
  [SMALL_STATE(119)] = 4466,
  [SMALL_STATE(120)] = 4486,
  [SMALL_STATE(121)] = 4508,
  [SMALL_STATE(122)] = 4528,
  [SMALL_STATE(123)] = 4548,
  [SMALL_STATE(124)] = 4568,
  [SMALL_STATE(125)] = 4586,
  [SMALL_STATE(126)] = 4606,
  [SMALL_STATE(127)] = 4628,
  [SMALL_STATE(128)] = 4646,
  [SMALL_STATE(129)] = 4666,
  [SMALL_STATE(130)] = 4695,
  [SMALL_STATE(131)] = 4716,
  [SMALL_STATE(132)] = 4733,
  [SMALL_STATE(133)] = 4750,
  [SMALL_STATE(134)] = 4767,
  [SMALL_STATE(135)] = 4796,
  [SMALL_STATE(136)] = 4815,
  [SMALL_STATE(137)] = 4844,
  [SMALL_STATE(138)] = 4863,
  [SMALL_STATE(139)] = 4880,
  [SMALL_STATE(140)] = 4897,
  [SMALL_STATE(141)] = 4926,
  [SMALL_STATE(142)] = 4943,
  [SMALL_STATE(143)] = 4972,
  [SMALL_STATE(144)] = 4993,
  [SMALL_STATE(145)] = 5014,
  [SMALL_STATE(146)] = 5043,
  [SMALL_STATE(147)] = 5060,
  [SMALL_STATE(148)] = 5077,
  [SMALL_STATE(149)] = 5094,
  [SMALL_STATE(150)] = 5110,
  [SMALL_STATE(151)] = 5130,
  [SMALL_STATE(152)] = 5146,
  [SMALL_STATE(153)] = 5170,
  [SMALL_STATE(154)] = 5186,
  [SMALL_STATE(155)] = 5202,
  [SMALL_STATE(156)] = 5230,
  [SMALL_STATE(157)] = 5246,
  [SMALL_STATE(158)] = 5262,
  [SMALL_STATE(159)] = 5284,
  [SMALL_STATE(160)] = 5300,
  [SMALL_STATE(161)] = 5322,
  [SMALL_STATE(162)] = 5338,
  [SMALL_STATE(163)] = 5354,
  [SMALL_STATE(164)] = 5377,
  [SMALL_STATE(165)] = 5402,
  [SMALL_STATE(166)] = 5425,
  [SMALL_STATE(167)] = 5444,
  [SMALL_STATE(168)] = 5467,
  [SMALL_STATE(169)] = 5492,
  [SMALL_STATE(170)] = 5517,
  [SMALL_STATE(171)] = 5542,
  [SMALL_STATE(172)] = 5565,
  [SMALL_STATE(173)] = 5582,
  [SMALL_STATE(174)] = 5605,
  [SMALL_STATE(175)] = 5628,
  [SMALL_STATE(176)] = 5651,
  [SMALL_STATE(177)] = 5669,
  [SMALL_STATE(178)] = 5685,
  [SMALL_STATE(179)] = 5701,
  [SMALL_STATE(180)] = 5717,
  [SMALL_STATE(181)] = 5735,
  [SMALL_STATE(182)] = 5751,
  [SMALL_STATE(183)] = 5773,
  [SMALL_STATE(184)] = 5791,
  [SMALL_STATE(185)] = 5809,
  [SMALL_STATE(186)] = 5823,
  [SMALL_STATE(187)] = 5845,
  [SMALL_STATE(188)] = 5861,
  [SMALL_STATE(189)] = 5879,
  [SMALL_STATE(190)] = 5895,
  [SMALL_STATE(191)] = 5913,
  [SMALL_STATE(192)] = 5928,
  [SMALL_STATE(193)] = 5941,
  [SMALL_STATE(194)] = 5960,
  [SMALL_STATE(195)] = 5973,
  [SMALL_STATE(196)] = 5990,
  [SMALL_STATE(197)] = 6003,
  [SMALL_STATE(198)] = 6022,
  [SMALL_STATE(199)] = 6039,
  [SMALL_STATE(200)] = 6056,
  [SMALL_STATE(201)] = 6073,
  [SMALL_STATE(202)] = 6092,
  [SMALL_STATE(203)] = 6109,
  [SMALL_STATE(204)] = 6126,
  [SMALL_STATE(205)] = 6139,
  [SMALL_STATE(206)] = 6156,
  [SMALL_STATE(207)] = 6173,
  [SMALL_STATE(208)] = 6192,
  [SMALL_STATE(209)] = 6209,
  [SMALL_STATE(210)] = 6224,
  [SMALL_STATE(211)] = 6239,
  [SMALL_STATE(212)] = 6256,
  [SMALL_STATE(213)] = 6273,
  [SMALL_STATE(214)] = 6292,
  [SMALL_STATE(215)] = 6307,
  [SMALL_STATE(216)] = 6324,
  [SMALL_STATE(217)] = 6341,
  [SMALL_STATE(218)] = 6357,
  [SMALL_STATE(219)] = 6369,
  [SMALL_STATE(220)] = 6381,
  [SMALL_STATE(221)] = 6393,
  [SMALL_STATE(222)] = 6409,
  [SMALL_STATE(223)] = 6425,
  [SMALL_STATE(224)] = 6441,
  [SMALL_STATE(225)] = 6457,
  [SMALL_STATE(226)] = 6469,
  [SMALL_STATE(227)] = 6485,
  [SMALL_STATE(228)] = 6501,
  [SMALL_STATE(229)] = 6513,
  [SMALL_STATE(230)] = 6525,
  [SMALL_STATE(231)] = 6541,
  [SMALL_STATE(232)] = 6555,
  [SMALL_STATE(233)] = 6569,
  [SMALL_STATE(234)] = 6581,
  [SMALL_STATE(235)] = 6597,
  [SMALL_STATE(236)] = 6613,
  [SMALL_STATE(237)] = 6629,
  [SMALL_STATE(238)] = 6645,
  [SMALL_STATE(239)] = 6661,
  [SMALL_STATE(240)] = 6677,
  [SMALL_STATE(241)] = 6689,
  [SMALL_STATE(242)] = 6701,
  [SMALL_STATE(243)] = 6717,
  [SMALL_STATE(244)] = 6729,
  [SMALL_STATE(245)] = 6743,
  [SMALL_STATE(246)] = 6759,
  [SMALL_STATE(247)] = 6771,
  [SMALL_STATE(248)] = 6787,
  [SMALL_STATE(249)] = 6801,
  [SMALL_STATE(250)] = 6817,
  [SMALL_STATE(251)] = 6831,
  [SMALL_STATE(252)] = 6843,
  [SMALL_STATE(253)] = 6855,
  [SMALL_STATE(254)] = 6871,
  [SMALL_STATE(255)] = 6887,
  [SMALL_STATE(256)] = 6901,
  [SMALL_STATE(257)] = 6917,
  [SMALL_STATE(258)] = 6931,
  [SMALL_STATE(259)] = 6945,
  [SMALL_STATE(260)] = 6957,
  [SMALL_STATE(261)] = 6969,
  [SMALL_STATE(262)] = 6983,
  [SMALL_STATE(263)] = 6999,
  [SMALL_STATE(264)] = 7015,
  [SMALL_STATE(265)] = 7027,
  [SMALL_STATE(266)] = 7039,
  [SMALL_STATE(267)] = 7051,
  [SMALL_STATE(268)] = 7063,
  [SMALL_STATE(269)] = 7075,
  [SMALL_STATE(270)] = 7087,
  [SMALL_STATE(271)] = 7103,
  [SMALL_STATE(272)] = 7115,
  [SMALL_STATE(273)] = 7127,
  [SMALL_STATE(274)] = 7143,
  [SMALL_STATE(275)] = 7155,
  [SMALL_STATE(276)] = 7167,
  [SMALL_STATE(277)] = 7179,
  [SMALL_STATE(278)] = 7193,
  [SMALL_STATE(279)] = 7206,
  [SMALL_STATE(280)] = 7219,
  [SMALL_STATE(281)] = 7230,
  [SMALL_STATE(282)] = 7241,
  [SMALL_STATE(283)] = 7252,
  [SMALL_STATE(284)] = 7265,
  [SMALL_STATE(285)] = 7278,
  [SMALL_STATE(286)] = 7289,
  [SMALL_STATE(287)] = 7300,
  [SMALL_STATE(288)] = 7311,
  [SMALL_STATE(289)] = 7322,
  [SMALL_STATE(290)] = 7333,
  [SMALL_STATE(291)] = 7344,
  [SMALL_STATE(292)] = 7357,
  [SMALL_STATE(293)] = 7368,
  [SMALL_STATE(294)] = 7379,
  [SMALL_STATE(295)] = 7390,
  [SMALL_STATE(296)] = 7401,
  [SMALL_STATE(297)] = 7412,
  [SMALL_STATE(298)] = 7423,
  [SMALL_STATE(299)] = 7434,
  [SMALL_STATE(300)] = 7445,
  [SMALL_STATE(301)] = 7458,
  [SMALL_STATE(302)] = 7469,
  [SMALL_STATE(303)] = 7480,
  [SMALL_STATE(304)] = 7493,
  [SMALL_STATE(305)] = 7504,
  [SMALL_STATE(306)] = 7515,
  [SMALL_STATE(307)] = 7526,
  [SMALL_STATE(308)] = 7537,
  [SMALL_STATE(309)] = 7548,
  [SMALL_STATE(310)] = 7561,
  [SMALL_STATE(311)] = 7572,
  [SMALL_STATE(312)] = 7583,
  [SMALL_STATE(313)] = 7594,
  [SMALL_STATE(314)] = 7607,
  [SMALL_STATE(315)] = 7618,
  [SMALL_STATE(316)] = 7629,
  [SMALL_STATE(317)] = 7642,
  [SMALL_STATE(318)] = 7652,
  [SMALL_STATE(319)] = 7662,
  [SMALL_STATE(320)] = 7672,
  [SMALL_STATE(321)] = 7682,
  [SMALL_STATE(322)] = 7692,
  [SMALL_STATE(323)] = 7702,
  [SMALL_STATE(324)] = 7712,
  [SMALL_STATE(325)] = 7722,
  [SMALL_STATE(326)] = 7732,
  [SMALL_STATE(327)] = 7742,
  [SMALL_STATE(328)] = 7752,
  [SMALL_STATE(329)] = 7762,
  [SMALL_STATE(330)] = 7772,
  [SMALL_STATE(331)] = 7782,
  [SMALL_STATE(332)] = 7792,
  [SMALL_STATE(333)] = 7802,
  [SMALL_STATE(334)] = 7812,
  [SMALL_STATE(335)] = 7822,
  [SMALL_STATE(336)] = 7832,
  [SMALL_STATE(337)] = 7842,
  [SMALL_STATE(338)] = 7852,
  [SMALL_STATE(339)] = 7862,
  [SMALL_STATE(340)] = 7872,
  [SMALL_STATE(341)] = 7882,
  [SMALL_STATE(342)] = 7892,
  [SMALL_STATE(343)] = 7902,
  [SMALL_STATE(344)] = 7912,
  [SMALL_STATE(345)] = 7922,
  [SMALL_STATE(346)] = 7932,
  [SMALL_STATE(347)] = 7942,
  [SMALL_STATE(348)] = 7952,
  [SMALL_STATE(349)] = 7962,
  [SMALL_STATE(350)] = 7972,
  [SMALL_STATE(351)] = 7982,
  [SMALL_STATE(352)] = 7992,
  [SMALL_STATE(353)] = 8002,
  [SMALL_STATE(354)] = 8012,
  [SMALL_STATE(355)] = 8022,
  [SMALL_STATE(356)] = 8032,
  [SMALL_STATE(357)] = 8042,
  [SMALL_STATE(358)] = 8052,
  [SMALL_STATE(359)] = 8062,
  [SMALL_STATE(360)] = 8072,
  [SMALL_STATE(361)] = 8082,
  [SMALL_STATE(362)] = 8092,
  [SMALL_STATE(363)] = 8102,
  [SMALL_STATE(364)] = 8112,
  [SMALL_STATE(365)] = 8122,
  [SMALL_STATE(366)] = 8132,
  [SMALL_STATE(367)] = 8142,
  [SMALL_STATE(368)] = 8152,
  [SMALL_STATE(369)] = 8162,
  [SMALL_STATE(370)] = 8172,
  [SMALL_STATE(371)] = 8182,
  [SMALL_STATE(372)] = 8192,
  [SMALL_STATE(373)] = 8202,
  [SMALL_STATE(374)] = 8212,
  [SMALL_STATE(375)] = 8222,
  [SMALL_STATE(376)] = 8232,
  [SMALL_STATE(377)] = 8242,
  [SMALL_STATE(378)] = 8252,
  [SMALL_STATE(379)] = 8262,
  [SMALL_STATE(380)] = 8272,
  [SMALL_STATE(381)] = 8282,
  [SMALL_STATE(382)] = 8292,
  [SMALL_STATE(383)] = 8302,
  [SMALL_STATE(384)] = 8312,
  [SMALL_STATE(385)] = 8322,
  [SMALL_STATE(386)] = 8332,
  [SMALL_STATE(387)] = 8342,
  [SMALL_STATE(388)] = 8352,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_comparison_operator, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_comparison_operator, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(375),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_expression, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_expression, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(358),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(213),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_literal, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__soql_literal, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_literal, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_literal, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_boolean_expression, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comparison, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(22),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2), SHIFT_REPEAT(21),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_using_clause, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_type, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2), SHIFT_REPEAT(29),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2), SHIFT_REPEAT(279),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_value_comparison, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_value_comparison, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_comparison, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_comparison, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_comparison_expression, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_having_comparison_expression, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_or_expression, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_and_expression, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2), SHIFT_REPEAT(35),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(34),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_type, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2), SHIFT_REPEAT(25),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_clause, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direciton, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(318),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_not_expression, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direciton, 2, .production_id = 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2), SHIFT_REPEAT(210),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2), SHIFT_REPEAT(329),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(291),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2), SHIFT_REPEAT(258),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_type, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(381),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2), SHIFT_REPEAT(319),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__having_set_comparison_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__having_set_comparison_repeat1, 2), SHIFT_REPEAT(7),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2), SHIFT_REPEAT(13),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(23),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(32),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_type, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat2, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat2, 2), SHIFT_REPEAT(262),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2), SHIFT_REPEAT(203),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_param, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 2, .production_id = 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_comment, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 11),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter_type, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_type, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 1), SHIFT(341),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_query_expression, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [801] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatting_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_soql(void) {
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
