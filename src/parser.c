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
#define STATE_COUNT 376
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 248
#define ALIAS_COUNT 0
#define TOKEN_COUNT 156
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_header_comment_token1 = 2,
  sym_paren_left = 3,
  sym_paren_right = 4,
  sym_comma = 5,
  sym_period = 6,
  sym_question_mark = 7,
  sym_colon = 8,
  sym_equals = 9,
  sym_not_equals = 10,
  sym_less_than = 11,
  sym_less_or_equal = 12,
  sym_greater_than = 13,
  sym_greater_or_equal = 14,
  sym_true = 15,
  sym_false = 16,
  sym_and = 17,
  sym_or = 18,
  aux_sym_not_token1 = 19,
  sym_null = 20,
  sym_select = 21,
  sym_from = 22,
  sym_where = 23,
  sym_limit = 24,
  sym_offset = 25,
  sym_as = 26,
  sym_like = 27,
  aux_sym_in_token1 = 28,
  sym_includes = 29,
  sym_excludes = 30,
  sym_with = 31,
  sym_security_enforced = 32,
  sym_user_mode = 33,
  sym_system_mode = 34,
  sym_user_id = 35,
  sym_record_visibility_context = 36,
  sym_max_descriptor_per_record = 37,
  sym_supports_domains = 38,
  sym_supports_delegates = 39,
  sym_data_category = 40,
  sym_at = 41,
  sym_above = 42,
  sym_below = 43,
  sym_above_or_below = 44,
  sym_delegated = 45,
  sym_everything = 46,
  sym_mine = 47,
  sym_mine_and_my_groups = 48,
  sym_my_territory = 49,
  sym_my_team_territory = 50,
  sym_team = 51,
  aux_sym_using_scope_token1 = 52,
  aux_sym_using_scope_token2 = 53,
  sym_fields = 54,
  sym_all = 55,
  sym_custom = 56,
  sym_standard = 57,
  sym_for = 58,
  sym_update = 59,
  sym_reference = 60,
  sym_view = 61,
  sym_tracking = 62,
  sym_viewstat = 63,
  sym_type_of = 64,
  sym_end = 65,
  sym_when = 66,
  sym_then = 67,
  sym_else = 68,
  sym_order_by = 69,
  sym_asc = 70,
  sym_desc = 71,
  sym_nulls_first = 72,
  sym_nulls_last = 73,
  sym_group_by = 74,
  sym_rollup = 75,
  sym_cube = 76,
  sym_having = 77,
  sym_distance_type_mi = 78,
  sym_distance_type_km = 79,
  sym_avg = 80,
  sym_count = 81,
  sym_count_distinct = 82,
  sym_min = 83,
  sym_max = 84,
  sym_sum = 85,
  sym_grouping = 86,
  sym_format = 87,
  sym_convert_currency = 88,
  sym_to_label = 89,
  sym_distance = 90,
  sym_geo_location = 91,
  sym_calendar_month = 92,
  sym_calendar_quarter = 93,
  sym_calendar_year = 94,
  sym_day_in_month = 95,
  sym_day_in_week = 96,
  sym_day_in_year = 97,
  sym_day_only = 98,
  sym_fiscal_month = 99,
  sym_fiscal_quarter = 100,
  sym_fiscal_year = 101,
  sym_hour_in_day = 102,
  sym_week_in_month = 103,
  sym_week_in_year = 104,
  sym_yesterday = 105,
  sym_today = 106,
  sym_tomorrow = 107,
  sym_last_week = 108,
  sym_this_week = 109,
  sym_next_week = 110,
  sym_last_month = 111,
  sym_this_month = 112,
  sym_next_month = 113,
  sym_last_90_days = 114,
  sym_next_90_days = 115,
  sym_this_quarter = 116,
  sym_last_quarter = 117,
  sym_next_quarter = 118,
  sym_this_year = 119,
  sym_last_year = 120,
  sym_next_year = 121,
  sym_this_fiscal_quarter = 122,
  sym_last_fiscal_quarter = 123,
  sym_next_fiscal_quarter = 124,
  sym_this_fiscal_year = 125,
  sym_last_fiscal_year = 126,
  sym_next_fiscal_year = 127,
  sym_last_n_days = 128,
  sym_next_n_days = 129,
  sym_n_days_ago = 130,
  sym_next_n_weeks = 131,
  sym_last_n_weeks = 132,
  sym_n_weeks_ago = 133,
  sym_next_n_months = 134,
  sym_last_n_months = 135,
  sym_n_months_ago = 136,
  sym_next_n_quarters = 137,
  sym_last_n_quarters = 138,
  sym_n_quarters_ago = 139,
  sym_next_n_years = 140,
  sym_last_n_years = 141,
  sym_n_years_ago = 142,
  sym_next_n_fiscal_quarters = 143,
  sym_last_n_fiscal_quarters = 144,
  sym_n_fiscal_quarters_ago = 145,
  sym_next_n_fiscal_years = 146,
  sym_last_n_fiscal_years = 147,
  sym_n_fiscal_years_ago = 148,
  sym_string_literal = 149,
  sym_number = 150,
  sym_decimal = 151,
  sym_date = 152,
  sym_date_time = 153,
  sym_currency_literal = 154,
  sym_identifier = 155,
  sym_source_file = 156,
  sym_header_comment = 157,
  sym__query_expression = 158,
  sym_query_body = 159,
  sym_select_clause = 160,
  sym_count_expression = 161,
  sym__selectable_expression = 162,
  sym_subquery = 163,
  sym_fields_expression = 164,
  sym_from_clause = 165,
  sym_storage_identifier = 166,
  sym_storage_alias = 167,
  sym_using_clause = 168,
  sym__using_scope_type = 169,
  sym_where_clause = 170,
  sym__boolean_expression = 171,
  sym_and_expression = 172,
  sym_or_expression = 173,
  sym_not_expression = 174,
  sym__condition_expression = 175,
  sym_comparison_expression = 176,
  sym__comparison = 177,
  sym__value_comparison = 178,
  sym__set_comparison = 179,
  sym_with_clause = 180,
  sym__with_type = 181,
  sym_with_user_id_type = 182,
  sym_with_record_visibility_expression = 183,
  sym__with_record_visibility_param = 184,
  sym_with_data_cat_expression = 185,
  sym_with_data_cat_filter = 186,
  sym__with_data_cat_filtering_selector = 187,
  sym_limit_clause = 188,
  sym_offset_clause = 189,
  sym_for_clause = 190,
  sym_update_clause = 191,
  sym_alias_expression = 192,
  sym_type_of_clause = 193,
  sym_when_expression = 194,
  sym_else_expression = 195,
  sym_order_by_clause = 196,
  sym_order_expression = 197,
  sym_group_by_clause = 198,
  sym__group_by_expression = 199,
  sym_having_clause = 200,
  sym__having_boolean_expression = 201,
  sym_having_and_expression = 202,
  sym_having_or_expression = 203,
  sym_having_not_expression = 204,
  sym__having_condition_expression = 205,
  sym_having_comparison_expression = 206,
  sym__having_comparison = 207,
  sym__having_value_comparison = 208,
  sym__having_set_comparison = 209,
  sym__distance_type = 210,
  sym_geo_location_type = 211,
  sym__value_expression = 212,
  sym_function_expression = 213,
  sym_dotted_identifier = 214,
  sym_field_identifier = 215,
  sym_field_list = 216,
  sym__boolean = 217,
  sym__value_comparison_operator = 218,
  sym__set_comparison_operator = 219,
  sym_date_literal = 220,
  sym_date_literal_with_param = 221,
  sym_apex_method_identifier = 222,
  sym_apex_identifier = 223,
  sym_bound_apex_expression = 224,
  sym__literal = 225,
  sym_not = 226,
  sym_in = 227,
  sym_not_in = 228,
  sym_using_scope = 229,
  aux_sym_select_clause_repeat1 = 230,
  aux_sym_from_clause_repeat1 = 231,
  aux_sym_and_expression_repeat1 = 232,
  aux_sym_or_expression_repeat1 = 233,
  aux_sym__set_comparison_repeat1 = 234,
  aux_sym_with_record_visibility_expression_repeat1 = 235,
  aux_sym_with_data_cat_expression_repeat1 = 236,
  aux_sym_with_data_cat_filter_repeat1 = 237,
  aux_sym_for_clause_repeat1 = 238,
  aux_sym_update_clause_repeat1 = 239,
  aux_sym_type_of_clause_repeat1 = 240,
  aux_sym_order_by_clause_repeat1 = 241,
  aux_sym__group_by_expression_repeat1 = 242,
  aux_sym_having_and_expression_repeat1 = 243,
  aux_sym_having_or_expression_repeat1 = 244,
  aux_sym_dotted_identifier_repeat1 = 245,
  aux_sym_field_list_repeat1 = 246,
  aux_sym_apex_identifier_repeat1 = 247,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_header_comment_token1] = "header_comment_token1",
  [sym_paren_left] = "paren_left",
  [sym_paren_right] = "paren_right",
  [sym_comma] = "comma",
  [sym_period] = "period",
  [sym_question_mark] = "question_mark",
  [sym_colon] = "colon",
  [sym_equals] = "equals",
  [sym_not_equals] = "not_equals",
  [sym_less_than] = "less_than",
  [sym_less_or_equal] = "less_or_equal",
  [sym_greater_than] = "greater_than",
  [sym_greater_or_equal] = "greater_or_equal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_and] = "and",
  [sym_or] = "or",
  [aux_sym_not_token1] = "not_token1",
  [sym_null] = "null",
  [sym_select] = "select",
  [sym_from] = "from",
  [sym_where] = "where",
  [sym_limit] = "limit",
  [sym_offset] = "offset",
  [sym_as] = "as",
  [sym_like] = "like",
  [aux_sym_in_token1] = "in_token1",
  [sym_includes] = "includes",
  [sym_excludes] = "excludes",
  [sym_with] = "with",
  [sym_security_enforced] = "security_enforced",
  [sym_user_mode] = "user_mode",
  [sym_system_mode] = "system_mode",
  [sym_user_id] = "user_id",
  [sym_record_visibility_context] = "record_visibility_context",
  [sym_max_descriptor_per_record] = "max_descriptor_per_record",
  [sym_supports_domains] = "supports_domains",
  [sym_supports_delegates] = "supports_delegates",
  [sym_data_category] = "data_category",
  [sym_at] = "at",
  [sym_above] = "above",
  [sym_below] = "below",
  [sym_above_or_below] = "above_or_below",
  [sym_delegated] = "delegated",
  [sym_everything] = "everything",
  [sym_mine] = "mine",
  [sym_mine_and_my_groups] = "mine_and_my_groups",
  [sym_my_territory] = "my_territory",
  [sym_my_team_territory] = "my_team_territory",
  [sym_team] = "team",
  [aux_sym_using_scope_token1] = "using_scope_token1",
  [aux_sym_using_scope_token2] = "using_scope_token2",
  [sym_fields] = "fields",
  [sym_all] = "all",
  [sym_custom] = "custom",
  [sym_standard] = "standard",
  [sym_for] = "for",
  [sym_update] = "update",
  [sym_reference] = "reference",
  [sym_view] = "view",
  [sym_tracking] = "tracking",
  [sym_viewstat] = "viewstat",
  [sym_type_of] = "type_of",
  [sym_end] = "end",
  [sym_when] = "when",
  [sym_then] = "then",
  [sym_else] = "else",
  [sym_order_by] = "order_by",
  [sym_asc] = "asc",
  [sym_desc] = "desc",
  [sym_nulls_first] = "nulls_first",
  [sym_nulls_last] = "nulls_last",
  [sym_group_by] = "group_by",
  [sym_rollup] = "rollup",
  [sym_cube] = "cube",
  [sym_having] = "having",
  [sym_distance_type_mi] = "distance_type_mi",
  [sym_distance_type_km] = "distance_type_km",
  [sym_avg] = "avg",
  [sym_count] = "count",
  [sym_count_distinct] = "count_distinct",
  [sym_min] = "min",
  [sym_max] = "max",
  [sym_sum] = "sum",
  [sym_grouping] = "grouping",
  [sym_format] = "format",
  [sym_convert_currency] = "convert_currency",
  [sym_to_label] = "to_label",
  [sym_distance] = "distance",
  [sym_geo_location] = "geo_location",
  [sym_calendar_month] = "calendar_month",
  [sym_calendar_quarter] = "calendar_quarter",
  [sym_calendar_year] = "calendar_year",
  [sym_day_in_month] = "day_in_month",
  [sym_day_in_week] = "day_in_week",
  [sym_day_in_year] = "day_in_year",
  [sym_day_only] = "day_only",
  [sym_fiscal_month] = "fiscal_month",
  [sym_fiscal_quarter] = "fiscal_quarter",
  [sym_fiscal_year] = "fiscal_year",
  [sym_hour_in_day] = "hour_in_day",
  [sym_week_in_month] = "week_in_month",
  [sym_week_in_year] = "week_in_year",
  [sym_yesterday] = "yesterday",
  [sym_today] = "today",
  [sym_tomorrow] = "tomorrow",
  [sym_last_week] = "last_week",
  [sym_this_week] = "this_week",
  [sym_next_week] = "next_week",
  [sym_last_month] = "last_month",
  [sym_this_month] = "this_month",
  [sym_next_month] = "next_month",
  [sym_last_90_days] = "last_90_days",
  [sym_next_90_days] = "next_90_days",
  [sym_this_quarter] = "this_quarter",
  [sym_last_quarter] = "last_quarter",
  [sym_next_quarter] = "next_quarter",
  [sym_this_year] = "this_year",
  [sym_last_year] = "last_year",
  [sym_next_year] = "next_year",
  [sym_this_fiscal_quarter] = "this_fiscal_quarter",
  [sym_last_fiscal_quarter] = "last_fiscal_quarter",
  [sym_next_fiscal_quarter] = "next_fiscal_quarter",
  [sym_this_fiscal_year] = "this_fiscal_year",
  [sym_last_fiscal_year] = "last_fiscal_year",
  [sym_next_fiscal_year] = "next_fiscal_year",
  [sym_last_n_days] = "last_n_days",
  [sym_next_n_days] = "next_n_days",
  [sym_n_days_ago] = "n_days_ago",
  [sym_next_n_weeks] = "next_n_weeks",
  [sym_last_n_weeks] = "last_n_weeks",
  [sym_n_weeks_ago] = "n_weeks_ago",
  [sym_next_n_months] = "next_n_months",
  [sym_last_n_months] = "last_n_months",
  [sym_n_months_ago] = "n_months_ago",
  [sym_next_n_quarters] = "next_n_quarters",
  [sym_last_n_quarters] = "last_n_quarters",
  [sym_n_quarters_ago] = "n_quarters_ago",
  [sym_next_n_years] = "next_n_years",
  [sym_last_n_years] = "last_n_years",
  [sym_n_years_ago] = "n_years_ago",
  [sym_next_n_fiscal_quarters] = "next_n_fiscal_quarters",
  [sym_last_n_fiscal_quarters] = "last_n_fiscal_quarters",
  [sym_n_fiscal_quarters_ago] = "n_fiscal_quarters_ago",
  [sym_next_n_fiscal_years] = "next_n_fiscal_years",
  [sym_last_n_fiscal_years] = "last_n_fiscal_years",
  [sym_n_fiscal_years_ago] = "n_fiscal_years_ago",
  [sym_string_literal] = "string_literal",
  [sym_number] = "number",
  [sym_decimal] = "decimal",
  [sym_date] = "date",
  [sym_date_time] = "date_time",
  [sym_currency_literal] = "currency_literal",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_header_comment] = "header_comment",
  [sym__query_expression] = "_query_expression",
  [sym_query_body] = "query_body",
  [sym_select_clause] = "select_clause",
  [sym_count_expression] = "count_expression",
  [sym__selectable_expression] = "_selectable_expression",
  [sym_subquery] = "subquery",
  [sym_fields_expression] = "fields_expression",
  [sym_from_clause] = "from_clause",
  [sym_storage_identifier] = "storage_identifier",
  [sym_storage_alias] = "storage_alias",
  [sym_using_clause] = "using_clause",
  [sym__using_scope_type] = "_using_scope_type",
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
  [sym_with_clause] = "with_clause",
  [sym__with_type] = "_with_type",
  [sym_with_user_id_type] = "with_user_id_type",
  [sym_with_record_visibility_expression] = "with_record_visibility_expression",
  [sym__with_record_visibility_param] = "_with_record_visibility_param",
  [sym_with_data_cat_expression] = "with_data_cat_expression",
  [sym_with_data_cat_filter] = "with_data_cat_filter",
  [sym__with_data_cat_filtering_selector] = "_with_data_cat_filtering_selector",
  [sym_limit_clause] = "limit_clause",
  [sym_offset_clause] = "offset_clause",
  [sym_for_clause] = "for_clause",
  [sym_update_clause] = "update_clause",
  [sym_alias_expression] = "alias_expression",
  [sym_type_of_clause] = "type_of_clause",
  [sym_when_expression] = "when_expression",
  [sym_else_expression] = "else_expression",
  [sym_order_by_clause] = "order_by_clause",
  [sym_order_expression] = "order_expression",
  [sym_group_by_clause] = "group_by_clause",
  [sym__group_by_expression] = "_group_by_expression",
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
  [sym__distance_type] = "_distance_type",
  [sym_geo_location_type] = "geo_location_type",
  [sym__value_expression] = "_value_expression",
  [sym_function_expression] = "function_expression",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_field_identifier] = "field_identifier",
  [sym_field_list] = "field_list",
  [sym__boolean] = "_boolean",
  [sym__value_comparison_operator] = "_value_comparison_operator",
  [sym__set_comparison_operator] = "_set_comparison_operator",
  [sym_date_literal] = "date_literal",
  [sym_date_literal_with_param] = "date_literal_with_param",
  [sym_apex_method_identifier] = "apex_method_identifier",
  [sym_apex_identifier] = "apex_identifier",
  [sym_bound_apex_expression] = "bound_apex_expression",
  [sym__literal] = "_literal",
  [sym_not] = "not",
  [sym_in] = "in",
  [sym_not_in] = "not_in",
  [sym_using_scope] = "using_scope",
  [aux_sym_select_clause_repeat1] = "select_clause_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_and_expression_repeat1] = "and_expression_repeat1",
  [aux_sym_or_expression_repeat1] = "or_expression_repeat1",
  [aux_sym__set_comparison_repeat1] = "_set_comparison_repeat1",
  [aux_sym_with_record_visibility_expression_repeat1] = "with_record_visibility_expression_repeat1",
  [aux_sym_with_data_cat_expression_repeat1] = "with_data_cat_expression_repeat1",
  [aux_sym_with_data_cat_filter_repeat1] = "with_data_cat_filter_repeat1",
  [aux_sym_for_clause_repeat1] = "for_clause_repeat1",
  [aux_sym_update_clause_repeat1] = "update_clause_repeat1",
  [aux_sym_type_of_clause_repeat1] = "type_of_clause_repeat1",
  [aux_sym_order_by_clause_repeat1] = "order_by_clause_repeat1",
  [aux_sym__group_by_expression_repeat1] = "_group_by_expression_repeat1",
  [aux_sym_having_and_expression_repeat1] = "having_and_expression_repeat1",
  [aux_sym_having_or_expression_repeat1] = "having_or_expression_repeat1",
  [aux_sym_dotted_identifier_repeat1] = "dotted_identifier_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_apex_identifier_repeat1] = "apex_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_header_comment_token1] = aux_sym_header_comment_token1,
  [sym_paren_left] = sym_paren_left,
  [sym_paren_right] = sym_paren_right,
  [sym_comma] = sym_comma,
  [sym_period] = sym_period,
  [sym_question_mark] = sym_question_mark,
  [sym_colon] = sym_colon,
  [sym_equals] = sym_equals,
  [sym_not_equals] = sym_not_equals,
  [sym_less_than] = sym_less_than,
  [sym_less_or_equal] = sym_less_or_equal,
  [sym_greater_than] = sym_greater_than,
  [sym_greater_or_equal] = sym_greater_or_equal,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [aux_sym_not_token1] = aux_sym_not_token1,
  [sym_null] = sym_null,
  [sym_select] = sym_select,
  [sym_from] = sym_from,
  [sym_where] = sym_where,
  [sym_limit] = sym_limit,
  [sym_offset] = sym_offset,
  [sym_as] = sym_as,
  [sym_like] = sym_like,
  [aux_sym_in_token1] = aux_sym_in_token1,
  [sym_includes] = sym_includes,
  [sym_excludes] = sym_excludes,
  [sym_with] = sym_with,
  [sym_security_enforced] = sym_security_enforced,
  [sym_user_mode] = sym_user_mode,
  [sym_system_mode] = sym_system_mode,
  [sym_user_id] = sym_user_id,
  [sym_record_visibility_context] = sym_record_visibility_context,
  [sym_max_descriptor_per_record] = sym_max_descriptor_per_record,
  [sym_supports_domains] = sym_supports_domains,
  [sym_supports_delegates] = sym_supports_delegates,
  [sym_data_category] = sym_data_category,
  [sym_at] = sym_at,
  [sym_above] = sym_above,
  [sym_below] = sym_below,
  [sym_above_or_below] = sym_above_or_below,
  [sym_delegated] = sym_delegated,
  [sym_everything] = sym_everything,
  [sym_mine] = sym_mine,
  [sym_mine_and_my_groups] = sym_mine_and_my_groups,
  [sym_my_territory] = sym_my_territory,
  [sym_my_team_territory] = sym_my_team_territory,
  [sym_team] = sym_team,
  [aux_sym_using_scope_token1] = aux_sym_using_scope_token1,
  [aux_sym_using_scope_token2] = aux_sym_using_scope_token2,
  [sym_fields] = sym_fields,
  [sym_all] = sym_all,
  [sym_custom] = sym_custom,
  [sym_standard] = sym_standard,
  [sym_for] = sym_for,
  [sym_update] = sym_update,
  [sym_reference] = sym_reference,
  [sym_view] = sym_view,
  [sym_tracking] = sym_tracking,
  [sym_viewstat] = sym_viewstat,
  [sym_type_of] = sym_type_of,
  [sym_end] = sym_end,
  [sym_when] = sym_when,
  [sym_then] = sym_then,
  [sym_else] = sym_else,
  [sym_order_by] = sym_order_by,
  [sym_asc] = sym_asc,
  [sym_desc] = sym_desc,
  [sym_nulls_first] = sym_nulls_first,
  [sym_nulls_last] = sym_nulls_last,
  [sym_group_by] = sym_group_by,
  [sym_rollup] = sym_rollup,
  [sym_cube] = sym_cube,
  [sym_having] = sym_having,
  [sym_distance_type_mi] = sym_distance_type_mi,
  [sym_distance_type_km] = sym_distance_type_km,
  [sym_avg] = sym_avg,
  [sym_count] = sym_count,
  [sym_count_distinct] = sym_count_distinct,
  [sym_min] = sym_min,
  [sym_max] = sym_max,
  [sym_sum] = sym_sum,
  [sym_grouping] = sym_grouping,
  [sym_format] = sym_format,
  [sym_convert_currency] = sym_convert_currency,
  [sym_to_label] = sym_to_label,
  [sym_distance] = sym_distance,
  [sym_geo_location] = sym_geo_location,
  [sym_calendar_month] = sym_calendar_month,
  [sym_calendar_quarter] = sym_calendar_quarter,
  [sym_calendar_year] = sym_calendar_year,
  [sym_day_in_month] = sym_day_in_month,
  [sym_day_in_week] = sym_day_in_week,
  [sym_day_in_year] = sym_day_in_year,
  [sym_day_only] = sym_day_only,
  [sym_fiscal_month] = sym_fiscal_month,
  [sym_fiscal_quarter] = sym_fiscal_quarter,
  [sym_fiscal_year] = sym_fiscal_year,
  [sym_hour_in_day] = sym_hour_in_day,
  [sym_week_in_month] = sym_week_in_month,
  [sym_week_in_year] = sym_week_in_year,
  [sym_yesterday] = sym_yesterday,
  [sym_today] = sym_today,
  [sym_tomorrow] = sym_tomorrow,
  [sym_last_week] = sym_last_week,
  [sym_this_week] = sym_this_week,
  [sym_next_week] = sym_next_week,
  [sym_last_month] = sym_last_month,
  [sym_this_month] = sym_this_month,
  [sym_next_month] = sym_next_month,
  [sym_last_90_days] = sym_last_90_days,
  [sym_next_90_days] = sym_next_90_days,
  [sym_this_quarter] = sym_this_quarter,
  [sym_last_quarter] = sym_last_quarter,
  [sym_next_quarter] = sym_next_quarter,
  [sym_this_year] = sym_this_year,
  [sym_last_year] = sym_last_year,
  [sym_next_year] = sym_next_year,
  [sym_this_fiscal_quarter] = sym_this_fiscal_quarter,
  [sym_last_fiscal_quarter] = sym_last_fiscal_quarter,
  [sym_next_fiscal_quarter] = sym_next_fiscal_quarter,
  [sym_this_fiscal_year] = sym_this_fiscal_year,
  [sym_last_fiscal_year] = sym_last_fiscal_year,
  [sym_next_fiscal_year] = sym_next_fiscal_year,
  [sym_last_n_days] = sym_last_n_days,
  [sym_next_n_days] = sym_next_n_days,
  [sym_n_days_ago] = sym_n_days_ago,
  [sym_next_n_weeks] = sym_next_n_weeks,
  [sym_last_n_weeks] = sym_last_n_weeks,
  [sym_n_weeks_ago] = sym_n_weeks_ago,
  [sym_next_n_months] = sym_next_n_months,
  [sym_last_n_months] = sym_last_n_months,
  [sym_n_months_ago] = sym_n_months_ago,
  [sym_next_n_quarters] = sym_next_n_quarters,
  [sym_last_n_quarters] = sym_last_n_quarters,
  [sym_n_quarters_ago] = sym_n_quarters_ago,
  [sym_next_n_years] = sym_next_n_years,
  [sym_last_n_years] = sym_last_n_years,
  [sym_n_years_ago] = sym_n_years_ago,
  [sym_next_n_fiscal_quarters] = sym_next_n_fiscal_quarters,
  [sym_last_n_fiscal_quarters] = sym_last_n_fiscal_quarters,
  [sym_n_fiscal_quarters_ago] = sym_n_fiscal_quarters_ago,
  [sym_next_n_fiscal_years] = sym_next_n_fiscal_years,
  [sym_last_n_fiscal_years] = sym_last_n_fiscal_years,
  [sym_n_fiscal_years_ago] = sym_n_fiscal_years_ago,
  [sym_string_literal] = sym_string_literal,
  [sym_number] = sym_number,
  [sym_decimal] = sym_decimal,
  [sym_date] = sym_date,
  [sym_date_time] = sym_date_time,
  [sym_currency_literal] = sym_currency_literal,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_header_comment] = sym_header_comment,
  [sym__query_expression] = sym__query_expression,
  [sym_query_body] = sym_query_body,
  [sym_select_clause] = sym_select_clause,
  [sym_count_expression] = sym_count_expression,
  [sym__selectable_expression] = sym__selectable_expression,
  [sym_subquery] = sym_subquery,
  [sym_fields_expression] = sym_fields_expression,
  [sym_from_clause] = sym_from_clause,
  [sym_storage_identifier] = sym_storage_identifier,
  [sym_storage_alias] = sym_storage_alias,
  [sym_using_clause] = sym_using_clause,
  [sym__using_scope_type] = sym__using_scope_type,
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
  [sym_with_clause] = sym_with_clause,
  [sym__with_type] = sym__with_type,
  [sym_with_user_id_type] = sym_with_user_id_type,
  [sym_with_record_visibility_expression] = sym_with_record_visibility_expression,
  [sym__with_record_visibility_param] = sym__with_record_visibility_param,
  [sym_with_data_cat_expression] = sym_with_data_cat_expression,
  [sym_with_data_cat_filter] = sym_with_data_cat_filter,
  [sym__with_data_cat_filtering_selector] = sym__with_data_cat_filtering_selector,
  [sym_limit_clause] = sym_limit_clause,
  [sym_offset_clause] = sym_offset_clause,
  [sym_for_clause] = sym_for_clause,
  [sym_update_clause] = sym_update_clause,
  [sym_alias_expression] = sym_alias_expression,
  [sym_type_of_clause] = sym_type_of_clause,
  [sym_when_expression] = sym_when_expression,
  [sym_else_expression] = sym_else_expression,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_order_expression] = sym_order_expression,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym__group_by_expression] = sym__group_by_expression,
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
  [sym__distance_type] = sym__distance_type,
  [sym_geo_location_type] = sym_geo_location_type,
  [sym__value_expression] = sym__value_expression,
  [sym_function_expression] = sym_function_expression,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_field_identifier] = sym_field_identifier,
  [sym_field_list] = sym_field_list,
  [sym__boolean] = sym__boolean,
  [sym__value_comparison_operator] = sym__value_comparison_operator,
  [sym__set_comparison_operator] = sym__set_comparison_operator,
  [sym_date_literal] = sym_date_literal,
  [sym_date_literal_with_param] = sym_date_literal_with_param,
  [sym_apex_method_identifier] = sym_apex_method_identifier,
  [sym_apex_identifier] = sym_apex_identifier,
  [sym_bound_apex_expression] = sym_bound_apex_expression,
  [sym__literal] = sym__literal,
  [sym_not] = sym_not,
  [sym_in] = sym_in,
  [sym_not_in] = sym_not_in,
  [sym_using_scope] = sym_using_scope,
  [aux_sym_select_clause_repeat1] = aux_sym_select_clause_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_and_expression_repeat1] = aux_sym_and_expression_repeat1,
  [aux_sym_or_expression_repeat1] = aux_sym_or_expression_repeat1,
  [aux_sym__set_comparison_repeat1] = aux_sym__set_comparison_repeat1,
  [aux_sym_with_record_visibility_expression_repeat1] = aux_sym_with_record_visibility_expression_repeat1,
  [aux_sym_with_data_cat_expression_repeat1] = aux_sym_with_data_cat_expression_repeat1,
  [aux_sym_with_data_cat_filter_repeat1] = aux_sym_with_data_cat_filter_repeat1,
  [aux_sym_for_clause_repeat1] = aux_sym_for_clause_repeat1,
  [aux_sym_update_clause_repeat1] = aux_sym_update_clause_repeat1,
  [aux_sym_type_of_clause_repeat1] = aux_sym_type_of_clause_repeat1,
  [aux_sym_order_by_clause_repeat1] = aux_sym_order_by_clause_repeat1,
  [aux_sym__group_by_expression_repeat1] = aux_sym__group_by_expression_repeat1,
  [aux_sym_having_and_expression_repeat1] = aux_sym_having_and_expression_repeat1,
  [aux_sym_having_or_expression_repeat1] = aux_sym_having_or_expression_repeat1,
  [aux_sym_dotted_identifier_repeat1] = aux_sym_dotted_identifier_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_apex_identifier_repeat1] = aux_sym_apex_identifier_repeat1,
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
  [sym_paren_left] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_right] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_period] = {
    .visible = true,
    .named = true,
  },
  [sym_question_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than] = {
    .visible = true,
    .named = true,
  },
  [sym_less_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_not_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [sym_like] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_in_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_with] = {
    .visible = true,
    .named = true,
  },
  [sym_security_enforced] = {
    .visible = true,
    .named = true,
  },
  [sym_user_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_system_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_user_id] = {
    .visible = true,
    .named = true,
  },
  [sym_record_visibility_context] = {
    .visible = true,
    .named = true,
  },
  [sym_max_descriptor_per_record] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_domains] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_delegates] = {
    .visible = true,
    .named = true,
  },
  [sym_data_category] = {
    .visible = true,
    .named = true,
  },
  [sym_at] = {
    .visible = true,
    .named = true,
  },
  [sym_above] = {
    .visible = true,
    .named = true,
  },
  [sym_below] = {
    .visible = true,
    .named = true,
  },
  [sym_above_or_below] = {
    .visible = true,
    .named = true,
  },
  [sym_delegated] = {
    .visible = true,
    .named = true,
  },
  [sym_everything] = {
    .visible = true,
    .named = true,
  },
  [sym_mine] = {
    .visible = true,
    .named = true,
  },
  [sym_mine_and_my_groups] = {
    .visible = true,
    .named = true,
  },
  [sym_my_territory] = {
    .visible = true,
    .named = true,
  },
  [sym_my_team_territory] = {
    .visible = true,
    .named = true,
  },
  [sym_team] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_using_scope_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_using_scope_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_all] = {
    .visible = true,
    .named = true,
  },
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym_standard] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_update] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_view] = {
    .visible = true,
    .named = true,
  },
  [sym_tracking] = {
    .visible = true,
    .named = true,
  },
  [sym_viewstat] = {
    .visible = true,
    .named = true,
  },
  [sym_type_of] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_when] = {
    .visible = true,
    .named = true,
  },
  [sym_then] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_asc] = {
    .visible = true,
    .named = true,
  },
  [sym_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_nulls_first] = {
    .visible = true,
    .named = true,
  },
  [sym_nulls_last] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym_rollup] = {
    .visible = true,
    .named = true,
  },
  [sym_cube] = {
    .visible = true,
    .named = true,
  },
  [sym_having] = {
    .visible = true,
    .named = true,
  },
  [sym_distance_type_mi] = {
    .visible = true,
    .named = true,
  },
  [sym_distance_type_km] = {
    .visible = true,
    .named = true,
  },
  [sym_avg] = {
    .visible = true,
    .named = true,
  },
  [sym_count] = {
    .visible = true,
    .named = true,
  },
  [sym_count_distinct] = {
    .visible = true,
    .named = true,
  },
  [sym_min] = {
    .visible = true,
    .named = true,
  },
  [sym_max] = {
    .visible = true,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym_convert_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_to_label] = {
    .visible = true,
    .named = true,
  },
  [sym_distance] = {
    .visible = true,
    .named = true,
  },
  [sym_geo_location] = {
    .visible = true,
    .named = true,
  },
  [sym_calendar_month] = {
    .visible = true,
    .named = true,
  },
  [sym_calendar_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_calendar_year] = {
    .visible = true,
    .named = true,
  },
  [sym_day_in_month] = {
    .visible = true,
    .named = true,
  },
  [sym_day_in_week] = {
    .visible = true,
    .named = true,
  },
  [sym_day_in_year] = {
    .visible = true,
    .named = true,
  },
  [sym_day_only] = {
    .visible = true,
    .named = true,
  },
  [sym_fiscal_month] = {
    .visible = true,
    .named = true,
  },
  [sym_fiscal_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_fiscal_year] = {
    .visible = true,
    .named = true,
  },
  [sym_hour_in_day] = {
    .visible = true,
    .named = true,
  },
  [sym_week_in_month] = {
    .visible = true,
    .named = true,
  },
  [sym_week_in_year] = {
    .visible = true,
    .named = true,
  },
  [sym_yesterday] = {
    .visible = true,
    .named = true,
  },
  [sym_today] = {
    .visible = true,
    .named = true,
  },
  [sym_tomorrow] = {
    .visible = true,
    .named = true,
  },
  [sym_last_week] = {
    .visible = true,
    .named = true,
  },
  [sym_this_week] = {
    .visible = true,
    .named = true,
  },
  [sym_next_week] = {
    .visible = true,
    .named = true,
  },
  [sym_last_month] = {
    .visible = true,
    .named = true,
  },
  [sym_this_month] = {
    .visible = true,
    .named = true,
  },
  [sym_next_month] = {
    .visible = true,
    .named = true,
  },
  [sym_last_90_days] = {
    .visible = true,
    .named = true,
  },
  [sym_next_90_days] = {
    .visible = true,
    .named = true,
  },
  [sym_this_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_last_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_next_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_this_year] = {
    .visible = true,
    .named = true,
  },
  [sym_last_year] = {
    .visible = true,
    .named = true,
  },
  [sym_next_year] = {
    .visible = true,
    .named = true,
  },
  [sym_this_fiscal_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_last_fiscal_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_next_fiscal_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_this_fiscal_year] = {
    .visible = true,
    .named = true,
  },
  [sym_last_fiscal_year] = {
    .visible = true,
    .named = true,
  },
  [sym_next_fiscal_year] = {
    .visible = true,
    .named = true,
  },
  [sym_last_n_days] = {
    .visible = true,
    .named = true,
  },
  [sym_next_n_days] = {
    .visible = true,
    .named = true,
  },
  [sym_n_days_ago] = {
    .visible = true,
    .named = true,
  },
  [sym_next_n_weeks] = {
    .visible = true,
    .named = true,
  },
  [sym_last_n_weeks] = {
    .visible = true,
    .named = true,
  },
  [sym_n_weeks_ago] = {
    .visible = true,
    .named = true,
  },
  [sym_next_n_months] = {
    .visible = true,
    .named = true,
  },
  [sym_last_n_months] = {
    .visible = true,
    .named = true,
  },
  [sym_n_months_ago] = {
    .visible = true,
    .named = true,
  },
  [sym_next_n_quarters] = {
    .visible = true,
    .named = true,
  },
  [sym_last_n_quarters] = {
    .visible = true,
    .named = true,
  },
  [sym_n_quarters_ago] = {
    .visible = true,
    .named = true,
  },
  [sym_next_n_years] = {
    .visible = true,
    .named = true,
  },
  [sym_last_n_years] = {
    .visible = true,
    .named = true,
  },
  [sym_n_years_ago] = {
    .visible = true,
    .named = true,
  },
  [sym_next_n_fiscal_quarters] = {
    .visible = true,
    .named = true,
  },
  [sym_last_n_fiscal_quarters] = {
    .visible = true,
    .named = true,
  },
  [sym_n_fiscal_quarters_ago] = {
    .visible = true,
    .named = true,
  },
  [sym_next_n_fiscal_years] = {
    .visible = true,
    .named = true,
  },
  [sym_last_n_fiscal_years] = {
    .visible = true,
    .named = true,
  },
  [sym_n_fiscal_years_ago] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym__query_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_query_body] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_count_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__selectable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_subquery] = {
    .visible = true,
    .named = true,
  },
  [sym_fields_expression] = {
    .visible = true,
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
  [sym_using_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__using_scope_type] = {
    .visible = false,
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
  [sym_with_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__with_type] = {
    .visible = false,
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
  [sym__with_record_visibility_param] = {
    .visible = false,
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
  [sym__with_data_cat_filtering_selector] = {
    .visible = false,
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
  [sym_for_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_update_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_expression] = {
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
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_expression] = {
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
  [sym__distance_type] = {
    .visible = false,
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
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__value_comparison_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__set_comparison_operator] = {
    .visible = false,
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
  [sym_apex_method_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_apex_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_bound_apex_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_in] = {
    .visible = true,
    .named = true,
  },
  [sym_not_in] = {
    .visible = true,
    .named = true,
  },
  [sym_using_scope] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_select_clause_repeat1] = {
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
  [aux_sym__set_comparison_repeat1] = {
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
  [aux_sym_for_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_update_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_of_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__group_by_expression_repeat1] = {
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
  [aux_sym_dotted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apex_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
    : (c <= 'T' || (c < 'f'
      ? (c < '_'
        ? c == '\\'
        : (c <= '_' || c == 'b'))
      : (c <= 'f' || (c < 'r'
        ? c == 'n'
        : (c <= 'r' || c == 't'))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(888);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(892);
      if (lookahead == ')') ADVANCE(893);
      if (lookahead == ',') ADVANCE(894);
      if (lookahead == '-') ADVANCE(873);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(897);
      if (lookahead == '<') ADVANCE(900);
      if (lookahead == '=') ADVANCE(898);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(253);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(258);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(579);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(386);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(265);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1090);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(348);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(1084);
      if (lookahead == '\\') ADVANCE(883);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(1084);
      if (lookahead == '\\') ADVANCE(883);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(8);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(6);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(1084);
      if (lookahead == '\\') ADVANCE(883);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(12);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(1084);
      if (lookahead == '\\') ADVANCE(883);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(892);
      if (lookahead == ')') ADVANCE(893);
      if (lookahead == ':') ADVANCE(897);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(82);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(577);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(390);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1095);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(987);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(987);
      if (lookahead == '\\') ADVANCE(883);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(986);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(986);
      if (lookahead == '\\') ADVANCE(883);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(422);
      if (lookahead == '(') ADVANCE(892);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1115);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1183);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1267);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1233);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1235);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(892);
      if (lookahead == ')') ADVANCE(893);
      if (lookahead == ',') ADVANCE(894);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(668);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(523);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(811);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(408);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(892);
      if (lookahead == ')') ADVANCE(893);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1115);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1183);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1267);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1233);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1235);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(892);
      if (lookahead == '-') ADVANCE(873);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1115);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1182);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1267);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1233);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1234);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(892);
      if (lookahead == ':') ADVANCE(897);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(893);
      if (lookahead == ',') ADVANCE(894);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1275);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(889);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(871);
      if (lookahead == '1') ADVANCE(866);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(872);
      if (lookahead == '3') ADVANCE(864);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(875);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(867);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(876);
      END_STATE();
    case 28:
      if (lookahead == '9') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(413);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(560);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(814);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(300);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 29:
      if (lookahead == '9') ADVANCE(26);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(414);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(815);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(302);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(897);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(870);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(868);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(869);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(899);
      END_STATE();
    case 35:
      if (lookahead == 'Z') ADVANCE(1102);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(865);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(393);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(351);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(478);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(479);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(480);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(595);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(473);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(766);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(475);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(170);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(400);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(216);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(228);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(775);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(224);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(225);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(137);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(139);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(481);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(590);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(477);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(591);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(592);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(593);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(594);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(748);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(863);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(596);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(742);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(638);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(857);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(858);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(717);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(783);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 164:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(534);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(922);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(940);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(352);
      END_STATE();
    case 165:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(846);
      END_STATE();
    case 166:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(847);
      END_STATE();
    case 167:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(762);
      END_STATE();
    case 168:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(399);
      END_STATE();
    case 169:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(323);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(977);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(976);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(553);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(465);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(721);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1304);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(276);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(852);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(741);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(807);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(812);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(574);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(906);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(971);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(934);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(958);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(931);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(936);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(388);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(556);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(810);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(292);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(387);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(555);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(809);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(291);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 209:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 210:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(678);
      END_STATE();
    case 211:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 220:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 222:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(570);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(818);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(307);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(417);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(819);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(322);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(974);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(581);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(232);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 323:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 334:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 341:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 342:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 345:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 346:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(969);
      END_STATE();
    case 347:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 348:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 349:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(718);
      END_STATE();
    case 350:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(549);
      END_STATE();
    case 351:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(415);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(816);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(304);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 352:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(988);
      END_STATE();
    case 353:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(951);
      END_STATE();
    case 354:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(985);
      END_STATE();
    case 355:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1002);
      END_STATE();
    case 356:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(967);
      END_STATE();
    case 357:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(945);
      END_STATE();
    case 358:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(527);
      END_STATE();
    case 359:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(528);
      END_STATE();
    case 360:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      END_STATE();
    case 361:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(530);
      END_STATE();
    case 362:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(531);
      END_STATE();
    case 363:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(532);
      END_STATE();
    case 364:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(533);
      END_STATE();
    case 365:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 366:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(547);
      END_STATE();
    case 367:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 368:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 369:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(929);
      END_STATE();
    case 370:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1046);
      END_STATE();
    case 371:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1048);
      END_STATE();
    case 372:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1047);
      END_STATE();
    case 373:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1020);
      END_STATE();
    case 374:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1028);
      END_STATE();
    case 375:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1036);
      END_STATE();
    case 376:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1014);
      END_STATE();
    case 377:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(232);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 378:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(689);
      END_STATE();
    case 379:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      END_STATE();
    case 380:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(401);
      END_STATE();
    case 381:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(726);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 394:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      END_STATE();
    case 395:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 397:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 398:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 403:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 404:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 405:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      END_STATE();
    case 406:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 407:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 408:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(792);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(716);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(796);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(734);
      END_STATE();
    case 418:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1043);
      END_STATE();
    case 419:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1045);
      END_STATE();
    case 420:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1044);
      END_STATE();
    case 421:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1022);
      END_STATE();
    case 422:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(470);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 423:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(235);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      END_STATE();
    case 424:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(684);
      END_STATE();
    case 425:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(687);
      END_STATE();
    case 426:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(398);
      END_STATE();
    case 427:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 428:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(724);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(956);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(912);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1008);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(711);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(256);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(711);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(845);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(714);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 464:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1000);
      END_STATE();
    case 465:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1000);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(586);
      END_STATE();
    case 466:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(914);
      END_STATE();
    case 467:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(950);
      END_STATE();
    case 468:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 469:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(957);
      END_STATE();
    case 470:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 471:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 472:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 473:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(562);
      END_STATE();
    case 474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(862);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(568);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(306);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(569);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(817);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(572);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 481:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(573);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(820);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(352);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(995);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(973);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1012);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(925);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(994);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(761);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(763);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(451);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1065);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1077);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1083);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1080);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(805);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 575:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 576:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(981);
      END_STATE();
    case 577:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 578:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 579:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(261);
      END_STATE();
    case 580:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      END_STATE();
    case 581:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 582:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(695);
      END_STATE();
    case 583:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 584:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 585:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 586:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(558);
      END_STATE();
    case 587:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 588:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(396);
      END_STATE();
    case 589:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(794);
      END_STATE();
    case 590:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(821);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 591:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(822);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(335);
      END_STATE();
    case 592:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(823);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 593:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(824);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(337);
      END_STATE();
    case 594:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(825);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 595:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(826);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(855);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1055);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1056);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1054);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1024);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1032);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1052);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1053);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1051);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1018);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1030);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1061);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1060);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1058);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1059);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(851);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(853);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(758);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(760);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 648:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 651:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 654:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 655:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      END_STATE();
    case 656:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 657:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(777);
      END_STATE();
    case 658:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 659:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 660:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 661:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 662:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 663:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 664:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(785);
      END_STATE();
    case 665:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 666:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 667:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 668:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 669:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 670:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 671:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(725);
      END_STATE();
    case 672:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 673:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 674:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 675:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 676:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 677:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(799);
      END_STATE();
    case 678:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(954);
      END_STATE();
    case 679:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(928);
      END_STATE();
    case 680:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(927);
      END_STATE();
    case 681:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1063);
      END_STATE();
    case 682:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1064);
      END_STATE();
    case 683:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1049);
      END_STATE();
    case 684:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1067);
      END_STATE();
    case 685:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1076);
      END_STATE();
    case 686:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1050);
      END_STATE();
    case 687:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1066);
      END_STATE();
    case 688:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1075);
      END_STATE();
    case 689:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1070);
      END_STATE();
    case 690:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1069);
      END_STATE();
    case 691:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1073);
      END_STATE();
    case 692:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1072);
      END_STATE();
    case 693:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(937);
      END_STATE();
    case 694:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(938);
      END_STATE();
    case 695:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(947);
      END_STATE();
    case 696:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1082);
      END_STATE();
    case 697:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1081);
      END_STATE();
    case 698:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1079);
      END_STATE();
    case 699:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1078);
      END_STATE();
    case 700:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 701:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 702:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1);
      END_STATE();
    case 703:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 704:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(790);
      END_STATE();
    case 705:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 706:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 707:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(750);
      END_STATE();
    case 708:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 709:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 710:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 711:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      END_STATE();
    case 712:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 713:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(793);
      END_STATE();
    case 714:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 715:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 716:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(795);
      END_STATE();
    case 717:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      END_STATE();
    case 718:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 719:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      END_STATE();
    case 720:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 721:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(768);
      END_STATE();
    case 722:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(769);
      END_STATE();
    case 723:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      END_STATE();
    case 724:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 725:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 726:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 727:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      END_STATE();
    case 728:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 729:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 730:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 731:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 732:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 733:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 734:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      END_STATE();
    case 737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(991);
      END_STATE();
    case 738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(918);
      END_STATE();
    case 739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1004);
      END_STATE();
    case 740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(920);
      END_STATE();
    case 741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(913);
      END_STATE();
    case 742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(968);
      END_STATE();
    case 743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(979);
      END_STATE();
    case 744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(978);
      END_STATE();
    case 745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(992);
      END_STATE();
    case 746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(935);
      END_STATE();
    case 747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 753:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 754:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 755:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 756:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(861);
      END_STATE();
    case 758:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 759:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      END_STATE();
    case 760:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      END_STATE();
    case 761:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 762:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      END_STATE();
    case 763:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 764:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 765:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(856);
      END_STATE();
    case 766:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 767:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 768:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 769:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 770:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 771:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 772:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 773:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 774:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 775:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 776:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 777:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 778:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 779:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      END_STATE();
    case 780:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 781:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 782:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      END_STATE();
    case 783:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 784:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 785:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 786:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 787:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 788:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 789:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 790:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 791:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      END_STATE();
    case 792:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      END_STATE();
    case 793:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 794:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      END_STATE();
    case 795:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      END_STATE();
    case 796:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      END_STATE();
    case 797:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 798:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 799:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 800:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(620);
      END_STATE();
    case 801:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 802:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 803:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 804:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 805:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 806:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 807:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 808:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 809:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 810:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 811:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 812:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(647);
      END_STATE();
    case 813:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 814:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 815:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 816:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 817:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 818:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 819:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 820:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 821:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 822:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 823:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 824:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 825:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 826:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 827:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(392);
      END_STATE();
    case 828:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 829:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(239);
      END_STATE();
    case 830:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(281);
      END_STATE();
    case 831:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(395);
      END_STATE();
    case 832:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(966);
      END_STATE();
    case 833:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(942);
      END_STATE();
    case 834:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1042);
      END_STATE();
    case 835:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(943);
      END_STATE();
    case 836:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 837:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(713);
      END_STATE();
    case 838:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(998);
      END_STATE();
    case 839:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 840:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(997);
      END_STATE();
    case 841:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(746);
      END_STATE();
    case 842:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(797);
      END_STATE();
    case 843:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 844:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1041);
      END_STATE();
    case 845:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1026);
      END_STATE();
    case 846:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(980);
      END_STATE();
    case 847:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(975);
      END_STATE();
    case 848:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1040);
      END_STATE();
    case 849:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1034);
      END_STATE();
    case 850:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(948);
      END_STATE();
    case 851:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(939);
      END_STATE();
    case 852:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1006);
      END_STATE();
    case 853:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(949);
      END_STATE();
    case 854:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 855:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(747);
      END_STATE();
    case 856:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 857:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(681);
      END_STATE();
    case 858:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(682);
      END_STATE();
    case 859:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(683);
      END_STATE();
    case 860:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(686);
      END_STATE();
    case 861:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 862:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 863:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(710);
      END_STATE();
    case 864:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1101);
      END_STATE();
    case 865:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(882);
      END_STATE();
    case 866:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(21);
      END_STATE();
    case 867:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(31);
      END_STATE();
    case 868:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(877);
      END_STATE();
    case 869:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(878);
      END_STATE();
    case 870:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(881);
      END_STATE();
    case 871:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 872:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1101);
      END_STATE();
    case 873:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      END_STATE();
    case 874:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1100);
      END_STATE();
    case 875:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1101);
      END_STATE();
    case 876:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 877:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 878:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1102);
      END_STATE();
    case 879:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 880:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1104);
      END_STATE();
    case 881:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 882:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 883:
      if (sym_string_literal_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 884:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 885:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 886:
      if (eof) ADVANCE(888);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '(') ADVANCE(892);
      if (lookahead == ')') ADVANCE(893);
      if (lookahead == ',') ADVANCE(894);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == '<') ADVANCE(900);
      if (lookahead == '=') ADVANCE(898);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(896);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(672);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(580);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(886)
      END_STATE();
    case 887:
      if (eof) ADVANCE(888);
      if (lookahead == ')') ADVANCE(893);
      if (lookahead == ',') ADVANCE(894);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1275);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1242);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1270);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1171);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1252);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(887)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(891);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_paren_left);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_paren_right);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_period);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_question_mark);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_not_equals);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_less_than);
      if (lookahead == '=') ADVANCE(901);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_less_or_equal);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(903);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_not_token1);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_select);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_limit);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_offset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_like);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_in_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_in_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_includes);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_excludes);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_with);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_security_enforced);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_user_mode);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_system_mode);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_user_id);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_record_visibility_context);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_max_descriptor_per_record);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_supports_domains);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_supports_delegates);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_data_category);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_at);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_above);
      if (lookahead == '_') ADVANCE(557);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_below);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_above_or_below);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_delegated);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_everything);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_mine);
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_mine_and_my_groups);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_my_territory);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_my_team_territory);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_team);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_using_scope_token1);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_using_scope_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_using_scope_token2);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_fields);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_fields);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_all);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_custom);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_standard);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_for);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_for);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_update);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_update);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_view);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_view);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(793);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_tracking);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_viewstat);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_type_of);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_type_of);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_when);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_then);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_order_by);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_asc);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_desc);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_nulls_first);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_nulls_last);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_group_by);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_rollup);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_rollup);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_cube);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_cube);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_having);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_distance_type_mi);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_distance_type_km);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_avg);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_count);
      if (lookahead == '_') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_count);
      if (lookahead == '_') ADVANCE(209);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_count_distinct);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_min);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(946);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_max);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_grouping);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_grouping);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_format);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_format);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_convert_currency);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_convert_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_to_label);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_to_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_distance);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_distance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_geo_location);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_geo_location);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_calendar_month);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_calendar_month);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_calendar_quarter);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_calendar_quarter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_calendar_year);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_calendar_year);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_day_in_month);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_day_in_month);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_day_in_week);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_day_in_week);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_day_in_year);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_day_in_year);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_day_only);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_day_only);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_fiscal_month);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_fiscal_month);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_fiscal_quarter);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_fiscal_quarter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_fiscal_year);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_fiscal_year);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_hour_in_day);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_hour_in_day);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_week_in_month);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_week_in_month);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_week_in_year);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_week_in_year);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_last_week);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_this_week);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_next_week);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_last_month);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_this_month);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_next_month);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_last_90_days);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_next_90_days);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_this_quarter);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_last_quarter);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_next_quarter);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_this_year);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_last_year);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_next_year);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_this_fiscal_quarter);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_last_fiscal_quarter);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_next_fiscal_quarter);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_this_fiscal_year);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_last_fiscal_year);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_next_fiscal_year);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_last_n_days);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_next_n_days);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_n_days_ago);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_next_n_weeks);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_last_n_weeks);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_n_weeks_ago);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_next_n_months);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_last_n_months);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_n_months_ago);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_next_n_quarters);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_last_n_quarters);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_n_quarters_ago);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_next_n_years);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_last_n_years);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_n_years_ago);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_next_n_fiscal_quarters);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_last_n_fiscal_quarters);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_n_fiscal_quarters_ago);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_next_n_fiscal_years);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_last_n_fiscal_years);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_n_fiscal_years_ago);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1090);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1087);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1090);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1098);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1094);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1086);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1100);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1104);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1199);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1309);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1117:
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
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1147);
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
          lookahead == 'c') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1129);
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
          lookahead == 'd') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1146);
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
          lookahead == 'e') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1200);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1285);
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
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1273);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1260);
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
          lookahead == 'o') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1217);
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
          lookahead == 'i') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1284);
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
          lookahead == 'k') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1108);
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
          lookahead == 'l') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(915);
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
          lookahead == 'w') ADVANCE(1160);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1121);
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
          lookahead == 'q') ADVANCE(1303);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1167);
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
          lookahead == 'y') ADVANCE(1168);
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
          lookahead == 'y') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1109);
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
          lookahead == 'n') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1234:
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
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1215);
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
          lookahead == 'o') ADVANCE(1139);
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
          lookahead == 'p') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1144);
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
          lookahead == 'r') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1007);
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
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 886},
  [32] = {.lex_state = 886},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 886},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 886},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 886},
  [41] = {.lex_state = 886},
  [42] = {.lex_state = 886},
  [43] = {.lex_state = 886},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 886},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 886},
  [50] = {.lex_state = 886},
  [51] = {.lex_state = 887},
  [52] = {.lex_state = 887},
  [53] = {.lex_state = 887},
  [54] = {.lex_state = 886},
  [55] = {.lex_state = 886},
  [56] = {.lex_state = 886},
  [57] = {.lex_state = 886},
  [58] = {.lex_state = 887},
  [59] = {.lex_state = 887},
  [60] = {.lex_state = 886},
  [61] = {.lex_state = 886},
  [62] = {.lex_state = 886},
  [63] = {.lex_state = 886},
  [64] = {.lex_state = 886},
  [65] = {.lex_state = 887},
  [66] = {.lex_state = 886},
  [67] = {.lex_state = 887},
  [68] = {.lex_state = 886},
  [69] = {.lex_state = 886},
  [70] = {.lex_state = 886},
  [71] = {.lex_state = 886},
  [72] = {.lex_state = 886},
  [73] = {.lex_state = 886},
  [74] = {.lex_state = 886},
  [75] = {.lex_state = 886},
  [76] = {.lex_state = 886},
  [77] = {.lex_state = 886},
  [78] = {.lex_state = 886},
  [79] = {.lex_state = 886},
  [80] = {.lex_state = 886},
  [81] = {.lex_state = 886},
  [82] = {.lex_state = 886},
  [83] = {.lex_state = 886},
  [84] = {.lex_state = 886},
  [85] = {.lex_state = 886},
  [86] = {.lex_state = 886},
  [87] = {.lex_state = 886},
  [88] = {.lex_state = 886},
  [89] = {.lex_state = 886},
  [90] = {.lex_state = 886},
  [91] = {.lex_state = 886},
  [92] = {.lex_state = 886},
  [93] = {.lex_state = 886},
  [94] = {.lex_state = 886},
  [95] = {.lex_state = 886},
  [96] = {.lex_state = 886},
  [97] = {.lex_state = 886},
  [98] = {.lex_state = 886},
  [99] = {.lex_state = 886},
  [100] = {.lex_state = 886},
  [101] = {.lex_state = 886},
  [102] = {.lex_state = 886},
  [103] = {.lex_state = 886},
  [104] = {.lex_state = 886},
  [105] = {.lex_state = 886},
  [106] = {.lex_state = 886},
  [107] = {.lex_state = 886},
  [108] = {.lex_state = 886},
  [109] = {.lex_state = 886},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 886},
  [112] = {.lex_state = 886},
  [113] = {.lex_state = 886},
  [114] = {.lex_state = 886},
  [115] = {.lex_state = 886},
  [116] = {.lex_state = 886},
  [117] = {.lex_state = 886},
  [118] = {.lex_state = 886},
  [119] = {.lex_state = 886},
  [120] = {.lex_state = 886},
  [121] = {.lex_state = 886},
  [122] = {.lex_state = 886},
  [123] = {.lex_state = 886},
  [124] = {.lex_state = 886},
  [125] = {.lex_state = 886},
  [126] = {.lex_state = 886},
  [127] = {.lex_state = 886},
  [128] = {.lex_state = 886},
  [129] = {.lex_state = 886},
  [130] = {.lex_state = 886},
  [131] = {.lex_state = 886},
  [132] = {.lex_state = 886},
  [133] = {.lex_state = 886},
  [134] = {.lex_state = 886},
  [135] = {.lex_state = 886},
  [136] = {.lex_state = 886},
  [137] = {.lex_state = 886},
  [138] = {.lex_state = 886},
  [139] = {.lex_state = 886},
  [140] = {.lex_state = 886},
  [141] = {.lex_state = 886},
  [142] = {.lex_state = 886},
  [143] = {.lex_state = 886},
  [144] = {.lex_state = 886},
  [145] = {.lex_state = 886},
  [146] = {.lex_state = 886},
  [147] = {.lex_state = 886},
  [148] = {.lex_state = 886},
  [149] = {.lex_state = 886},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 886},
  [152] = {.lex_state = 886},
  [153] = {.lex_state = 30},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 886},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 886},
  [161] = {.lex_state = 886},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 886},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 886},
  [166] = {.lex_state = 886},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 886},
  [170] = {.lex_state = 176},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 886},
  [173] = {.lex_state = 886},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 886},
  [181] = {.lex_state = 886},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 20},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 886},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 20},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 16},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 886},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 16},
  [231] = {.lex_state = 16},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 16},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 19},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 16},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 15},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 16},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 19},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 19},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 15},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 19},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 19},
  [280] = {.lex_state = 19},
  [281] = {.lex_state = 19},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 19},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 19},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 16},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 19},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 19},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 19},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 890},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 19},
  [330] = {.lex_state = 19},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 15},
  [333] = {.lex_state = 18},
  [334] = {.lex_state = 15},
  [335] = {.lex_state = 15},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 10},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 19},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 19},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 19},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 19},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_paren_left] = ACTIONS(1),
    [sym_paren_right] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_period] = ACTIONS(1),
    [sym_question_mark] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_equals] = ACTIONS(1),
    [sym_not_equals] = ACTIONS(1),
    [sym_less_than] = ACTIONS(1),
    [sym_less_or_equal] = ACTIONS(1),
    [sym_greater_than] = ACTIONS(1),
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [aux_sym_not_token1] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_select] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_where] = ACTIONS(1),
    [sym_limit] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
    [sym_as] = ACTIONS(1),
    [sym_like] = ACTIONS(1),
    [aux_sym_in_token1] = ACTIONS(1),
    [sym_includes] = ACTIONS(1),
    [sym_excludes] = ACTIONS(1),
    [sym_with] = ACTIONS(1),
    [sym_security_enforced] = ACTIONS(1),
    [sym_user_mode] = ACTIONS(1),
    [sym_system_mode] = ACTIONS(1),
    [sym_user_id] = ACTIONS(1),
    [sym_record_visibility_context] = ACTIONS(1),
    [sym_max_descriptor_per_record] = ACTIONS(1),
    [sym_supports_domains] = ACTIONS(1),
    [sym_supports_delegates] = ACTIONS(1),
    [sym_data_category] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [sym_above] = ACTIONS(1),
    [sym_below] = ACTIONS(1),
    [sym_above_or_below] = ACTIONS(1),
    [sym_delegated] = ACTIONS(1),
    [sym_everything] = ACTIONS(1),
    [sym_mine] = ACTIONS(1),
    [sym_mine_and_my_groups] = ACTIONS(1),
    [sym_my_territory] = ACTIONS(1),
    [sym_my_team_territory] = ACTIONS(1),
    [sym_team] = ACTIONS(1),
    [aux_sym_using_scope_token1] = ACTIONS(1),
    [aux_sym_using_scope_token2] = ACTIONS(1),
    [sym_fields] = ACTIONS(1),
    [sym_all] = ACTIONS(1),
    [sym_custom] = ACTIONS(1),
    [sym_standard] = ACTIONS(1),
    [sym_for] = ACTIONS(1),
    [sym_update] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [sym_view] = ACTIONS(1),
    [sym_tracking] = ACTIONS(1),
    [sym_viewstat] = ACTIONS(1),
    [sym_type_of] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym_when] = ACTIONS(1),
    [sym_then] = ACTIONS(1),
    [sym_else] = ACTIONS(1),
    [sym_order_by] = ACTIONS(1),
    [sym_desc] = ACTIONS(1),
    [sym_nulls_first] = ACTIONS(1),
    [sym_nulls_last] = ACTIONS(1),
    [sym_group_by] = ACTIONS(1),
    [sym_rollup] = ACTIONS(1),
    [sym_cube] = ACTIONS(1),
    [sym_having] = ACTIONS(1),
    [sym_distance_type_mi] = ACTIONS(1),
    [sym_distance_type_km] = ACTIONS(1),
    [sym_avg] = ACTIONS(1),
    [sym_count] = ACTIONS(1),
    [sym_count_distinct] = ACTIONS(1),
    [sym_min] = ACTIONS(1),
    [sym_max] = ACTIONS(1),
    [sym_sum] = ACTIONS(1),
    [sym_grouping] = ACTIONS(1),
    [sym_format] = ACTIONS(1),
    [sym_convert_currency] = ACTIONS(1),
    [sym_to_label] = ACTIONS(1),
    [sym_distance] = ACTIONS(1),
    [sym_geo_location] = ACTIONS(1),
    [sym_calendar_month] = ACTIONS(1),
    [sym_calendar_quarter] = ACTIONS(1),
    [sym_calendar_year] = ACTIONS(1),
    [sym_day_in_month] = ACTIONS(1),
    [sym_day_in_week] = ACTIONS(1),
    [sym_day_in_year] = ACTIONS(1),
    [sym_day_only] = ACTIONS(1),
    [sym_fiscal_month] = ACTIONS(1),
    [sym_fiscal_quarter] = ACTIONS(1),
    [sym_fiscal_year] = ACTIONS(1),
    [sym_hour_in_day] = ACTIONS(1),
    [sym_week_in_month] = ACTIONS(1),
    [sym_week_in_year] = ACTIONS(1),
    [sym_yesterday] = ACTIONS(1),
    [sym_today] = ACTIONS(1),
    [sym_tomorrow] = ACTIONS(1),
    [sym_last_week] = ACTIONS(1),
    [sym_this_week] = ACTIONS(1),
    [sym_next_week] = ACTIONS(1),
    [sym_last_month] = ACTIONS(1),
    [sym_this_month] = ACTIONS(1),
    [sym_next_month] = ACTIONS(1),
    [sym_last_90_days] = ACTIONS(1),
    [sym_next_90_days] = ACTIONS(1),
    [sym_this_quarter] = ACTIONS(1),
    [sym_last_quarter] = ACTIONS(1),
    [sym_next_quarter] = ACTIONS(1),
    [sym_this_year] = ACTIONS(1),
    [sym_last_year] = ACTIONS(1),
    [sym_next_year] = ACTIONS(1),
    [sym_this_fiscal_quarter] = ACTIONS(1),
    [sym_last_fiscal_quarter] = ACTIONS(1),
    [sym_next_fiscal_quarter] = ACTIONS(1),
    [sym_this_fiscal_year] = ACTIONS(1),
    [sym_last_fiscal_year] = ACTIONS(1),
    [sym_next_fiscal_year] = ACTIONS(1),
    [sym_last_n_days] = ACTIONS(1),
    [sym_next_n_days] = ACTIONS(1),
    [sym_n_days_ago] = ACTIONS(1),
    [sym_next_n_weeks] = ACTIONS(1),
    [sym_last_n_weeks] = ACTIONS(1),
    [sym_n_weeks_ago] = ACTIONS(1),
    [sym_next_n_months] = ACTIONS(1),
    [sym_last_n_months] = ACTIONS(1),
    [sym_n_months_ago] = ACTIONS(1),
    [sym_next_n_quarters] = ACTIONS(1),
    [sym_last_n_quarters] = ACTIONS(1),
    [sym_n_quarters_ago] = ACTIONS(1),
    [sym_next_n_years] = ACTIONS(1),
    [sym_last_n_years] = ACTIONS(1),
    [sym_n_years_ago] = ACTIONS(1),
    [sym_next_n_fiscal_quarters] = ACTIONS(1),
    [sym_last_n_fiscal_quarters] = ACTIONS(1),
    [sym_n_fiscal_quarters_ago] = ACTIONS(1),
    [sym_next_n_fiscal_years] = ACTIONS(1),
    [sym_last_n_fiscal_years] = ACTIONS(1),
    [sym_n_fiscal_years_ago] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_date_time] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(372),
    [sym_header_comment] = STATE(220),
    [sym__query_expression] = STATE(365),
    [sym_query_body] = STATE(365),
    [sym_select_clause] = STATE(285),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_select] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_colon,
    STATE(126), 1,
      sym_bound_apex_expression,
    ACTIONS(7), 2,
      sym_paren_left,
      sym_paren_right,
    ACTIONS(17), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    STATE(99), 4,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym__literal,
    ACTIONS(11), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    ACTIONS(15), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(13), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [77] = 8,
    ACTIONS(21), 1,
      sym_colon,
    STATE(261), 1,
      sym_bound_apex_expression,
    ACTIONS(19), 2,
      sym_paren_left,
      sym_paren_right,
    ACTIONS(29), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    STATE(183), 4,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym__literal,
    ACTIONS(23), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    ACTIONS(27), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(25), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [154] = 8,
    ACTIONS(5), 1,
      sym_select,
    STATE(285), 1,
      sym_select_clause,
    STATE(323), 1,
      sym_query_body,
    ACTIONS(33), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    STATE(248), 4,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym__literal,
    ACTIONS(31), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    ACTIONS(15), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(13), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [230] = 8,
    ACTIONS(5), 1,
      sym_select,
    STATE(285), 1,
      sym_select_clause,
    STATE(343), 1,
      sym_query_body,
    ACTIONS(37), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    STATE(229), 4,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym__literal,
    ACTIONS(35), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    ACTIONS(15), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(13), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [306] = 6,
    ACTIONS(21), 1,
      sym_colon,
    ACTIONS(41), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    ACTIONS(39), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    STATE(249), 5,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_bound_apex_expression,
      sym__literal,
    ACTIONS(27), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(25), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [377] = 6,
    ACTIONS(9), 1,
      sym_colon,
    ACTIONS(45), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    ACTIONS(43), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    STATE(132), 5,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_bound_apex_expression,
      sym__literal,
    ACTIONS(15), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(13), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [448] = 6,
    ACTIONS(21), 1,
      sym_colon,
    ACTIONS(49), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    ACTIONS(47), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    STATE(260), 5,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_bound_apex_expression,
      sym__literal,
    ACTIONS(27), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(25), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [519] = 6,
    ACTIONS(9), 1,
      sym_colon,
    ACTIONS(53), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    ACTIONS(51), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    STATE(89), 5,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_bound_apex_expression,
      sym__literal,
    ACTIONS(15), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(13), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [590] = 5,
    ACTIONS(57), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    STATE(214), 4,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym__literal,
    ACTIONS(55), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    ACTIONS(27), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(25), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [657] = 5,
    ACTIONS(61), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    STATE(111), 4,
      sym__boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym__literal,
    ACTIONS(59), 5,
      sym_true,
      sym_false,
      sym_null,
      sym_string_literal,
      sym_date_time,
    ACTIONS(15), 21,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
    ACTIONS(13), 23,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
  [724] = 2,
    ACTIONS(65), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    ACTIONS(63), 52,
      sym_paren_left,
      sym_paren_right,
      sym_colon,
      sym_true,
      sym_false,
      sym_null,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
      sym_string_literal,
      sym_date_time,
  [784] = 2,
    ACTIONS(69), 3,
      sym_number,
      sym_date,
      sym_currency_literal,
    ACTIONS(67), 52,
      sym_paren_left,
      sym_paren_right,
      sym_colon,
      sym_true,
      sym_false,
      sym_null,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_last_week,
      sym_this_week,
      sym_next_week,
      sym_last_month,
      sym_this_month,
      sym_next_month,
      sym_last_90_days,
      sym_next_90_days,
      sym_this_quarter,
      sym_last_quarter,
      sym_next_quarter,
      sym_this_year,
      sym_last_year,
      sym_next_year,
      sym_this_fiscal_quarter,
      sym_last_fiscal_quarter,
      sym_next_fiscal_quarter,
      sym_this_fiscal_year,
      sym_last_fiscal_year,
      sym_next_fiscal_year,
      sym_last_n_days,
      sym_next_n_days,
      sym_n_days_ago,
      sym_next_n_weeks,
      sym_last_n_weeks,
      sym_n_weeks_ago,
      sym_next_n_months,
      sym_last_n_months,
      sym_n_months_ago,
      sym_next_n_quarters,
      sym_last_n_quarters,
      sym_n_quarters_ago,
      sym_next_n_years,
      sym_last_n_years,
      sym_n_years_ago,
      sym_next_n_fiscal_quarters,
      sym_last_n_fiscal_quarters,
      sym_n_fiscal_quarters_ago,
      sym_next_n_fiscal_years,
      sym_last_n_fiscal_years,
      sym_n_fiscal_years_ago,
      sym_string_literal,
      sym_date_time,
  [844] = 10,
    ACTIONS(71), 1,
      sym_paren_left,
    ACTIONS(73), 1,
      aux_sym_not_token1,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(23), 1,
      sym_not,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(186), 2,
      sym__condition_expression,
      sym_comparison_expression,
    STATE(44), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    STATE(324), 4,
      sym__boolean_expression,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [903] = 10,
    ACTIONS(73), 1,
      aux_sym_not_token1,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_paren_left,
    STATE(23), 1,
      sym_not,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(73), 2,
      sym__condition_expression,
      sym_comparison_expression,
    STATE(47), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    STATE(122), 4,
      sym__boolean_expression,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [962] = 10,
    ACTIONS(71), 1,
      sym_paren_left,
    ACTIONS(73), 1,
      aux_sym_not_token1,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(23), 1,
      sym_not,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(186), 2,
      sym__condition_expression,
      sym_comparison_expression,
    STATE(44), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    STATE(348), 4,
      sym__boolean_expression,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1021] = 11,
    ACTIONS(83), 1,
      sym_paren_left,
    ACTIONS(85), 1,
      sym_fields,
    ACTIONS(87), 1,
      sym_type_of,
    ACTIONS(91), 1,
      sym_count,
    ACTIONS(93), 1,
      sym_distance,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(341), 1,
      sym_count_expression,
    STATE(217), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    STATE(275), 5,
      sym__selectable_expression,
      sym_subquery,
      sym_fields_expression,
      sym_alias_expression,
      sym_type_of_clause,
    ACTIONS(89), 22,
      sym_avg,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1082] = 9,
    ACTIONS(83), 1,
      sym_paren_left,
    ACTIONS(85), 1,
      sym_fields,
    ACTIONS(87), 1,
      sym_type_of,
    ACTIONS(93), 1,
      sym_distance,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(217), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    STATE(302), 5,
      sym__selectable_expression,
      sym_subquery,
      sym_fields_expression,
      sym_alias_expression,
      sym_type_of_clause,
    ACTIONS(89), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1138] = 9,
    ACTIONS(75), 1,
      sym_count,
    ACTIONS(97), 1,
      sym_paren_left,
    ACTIONS(99), 1,
      aux_sym_not_token1,
    ACTIONS(103), 1,
      sym_distance,
    STATE(37), 1,
      sym_not,
    STATE(48), 1,
      sym_function_expression,
    STATE(189), 2,
      sym__having_condition_expression,
      sym_having_comparison_expression,
    STATE(326), 4,
      sym__having_boolean_expression,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(101), 22,
      sym_avg,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1191] = 9,
    ACTIONS(75), 1,
      sym_count,
    ACTIONS(99), 1,
      aux_sym_not_token1,
    ACTIONS(103), 1,
      sym_distance,
    ACTIONS(105), 1,
      sym_paren_left,
    STATE(37), 1,
      sym_not,
    STATE(45), 1,
      sym_function_expression,
    STATE(97), 2,
      sym__having_condition_expression,
      sym_having_comparison_expression,
    STATE(151), 4,
      sym__having_boolean_expression,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(101), 22,
      sym_avg,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1244] = 9,
    ACTIONS(75), 1,
      sym_count,
    ACTIONS(97), 1,
      sym_paren_left,
    ACTIONS(99), 1,
      aux_sym_not_token1,
    ACTIONS(103), 1,
      sym_distance,
    STATE(37), 1,
      sym_not,
    STATE(48), 1,
      sym_function_expression,
    STATE(189), 2,
      sym__having_condition_expression,
      sym_having_comparison_expression,
    STATE(359), 4,
      sym__having_boolean_expression,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
    ACTIONS(101), 22,
      sym_avg,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1297] = 7,
    ACTIONS(71), 1,
      sym_paren_left,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(278), 2,
      sym__condition_expression,
      sym_comparison_expression,
    STATE(44), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1344] = 7,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_paren_left,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(129), 2,
      sym__condition_expression,
      sym_comparison_expression,
    STATE(47), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1391] = 7,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_paren_left,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(113), 2,
      sym__condition_expression,
      sym_comparison_expression,
    STATE(47), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1438] = 7,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_paren_left,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(112), 2,
      sym__condition_expression,
      sym_comparison_expression,
    STATE(47), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1485] = 6,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(139), 1,
      sym_order_expression,
    STATE(93), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1528] = 6,
    ACTIONS(93), 1,
      sym_distance,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym_paren_right,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(356), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(89), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1571] = 6,
    ACTIONS(77), 1,
      sym_distance,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(161), 1,
      sym_order_expression,
    STATE(93), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(75), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1614] = 5,
    ACTIONS(93), 1,
      sym_distance,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(356), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(89), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1654] = 5,
    ACTIONS(93), 1,
      sym_distance,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(345), 3,
      sym__value_expression,
      sym_function_expression,
      sym_field_identifier,
    ACTIONS(89), 23,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1694] = 4,
    ACTIONS(111), 1,
      sym_period,
    STATE(31), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(114), 3,
      sym_less_than,
      sym_greater_than,
      aux_sym_in_token1,
    ACTIONS(109), 24,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      aux_sym_not_token1,
      sym_limit,
      sym_offset,
      sym_like,
      sym_includes,
      sym_excludes,
      sym_for,
      sym_update,
      sym_end,
      sym_when,
      sym_else,
      sym_order_by,
      sym_asc,
      sym_desc,
      sym_nulls_first,
      sym_nulls_last,
      sym_having,
  [1732] = 4,
    ACTIONS(118), 1,
      sym_period,
    STATE(31), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(120), 3,
      sym_less_than,
      sym_greater_than,
      aux_sym_in_token1,
    ACTIONS(116), 24,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      aux_sym_not_token1,
      sym_limit,
      sym_offset,
      sym_like,
      sym_includes,
      sym_excludes,
      sym_for,
      sym_update,
      sym_end,
      sym_when,
      sym_else,
      sym_order_by,
      sym_asc,
      sym_desc,
      sym_nulls_first,
      sym_nulls_last,
      sym_having,
  [1770] = 6,
    ACTIONS(75), 1,
      sym_count,
    ACTIONS(97), 1,
      sym_paren_left,
    ACTIONS(103), 1,
      sym_distance,
    STATE(48), 1,
      sym_function_expression,
    STATE(298), 2,
      sym__having_condition_expression,
      sym_having_comparison_expression,
    ACTIONS(101), 22,
      sym_avg,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1811] = 2,
    ACTIONS(114), 3,
      sym_less_than,
      sym_greater_than,
      aux_sym_in_token1,
    ACTIONS(109), 25,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_period,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      aux_sym_not_token1,
      sym_limit,
      sym_offset,
      sym_like,
      sym_includes,
      sym_excludes,
      sym_for,
      sym_update,
      sym_end,
      sym_when,
      sym_else,
      sym_order_by,
      sym_asc,
      sym_desc,
      sym_nulls_first,
      sym_nulls_last,
      sym_having,
  [1844] = 6,
    ACTIONS(75), 1,
      sym_count,
    ACTIONS(103), 1,
      sym_distance,
    ACTIONS(105), 1,
      sym_paren_left,
    STATE(45), 1,
      sym_function_expression,
    STATE(135), 2,
      sym__having_condition_expression,
      sym_having_comparison_expression,
    ACTIONS(101), 22,
      sym_avg,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1885] = 6,
    ACTIONS(75), 1,
      sym_count,
    ACTIONS(103), 1,
      sym_distance,
    ACTIONS(105), 1,
      sym_paren_left,
    STATE(45), 1,
      sym_function_expression,
    STATE(141), 2,
      sym__having_condition_expression,
      sym_having_comparison_expression,
    ACTIONS(101), 22,
      sym_avg,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1926] = 6,
    ACTIONS(75), 1,
      sym_count,
    ACTIONS(103), 1,
      sym_distance,
    ACTIONS(105), 1,
      sym_paren_left,
    STATE(45), 1,
      sym_function_expression,
    STATE(152), 2,
      sym__having_condition_expression,
      sym_having_comparison_expression,
    ACTIONS(101), 22,
      sym_avg,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
  [1967] = 4,
    ACTIONS(118), 1,
      sym_period,
    STATE(32), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(124), 3,
      sym_less_than,
      sym_greater_than,
      aux_sym_in_token1,
    ACTIONS(122), 21,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      aux_sym_not_token1,
      sym_limit,
      sym_offset,
      sym_like,
      sym_includes,
      sym_excludes,
      sym_for,
      sym_update,
      sym_order_by,
      sym_asc,
      sym_desc,
      sym_nulls_first,
      sym_nulls_last,
      sym_having,
  [2002] = 2,
    ACTIONS(126), 1,
      sym_paren_left,
    ACTIONS(128), 25,
      sym_avg,
      sym_count,
      sym_count_distinct,
      sym_min,
      sym_max,
      sym_sum,
      sym_grouping,
      sym_format,
      sym_convert_currency,
      sym_to_label,
      sym_distance,
      sym_calendar_month,
      sym_calendar_quarter,
      sym_calendar_year,
      sym_day_in_month,
      sym_day_in_week,
      sym_day_in_year,
      sym_day_only,
      sym_fiscal_month,
      sym_fiscal_quarter,
      sym_fiscal_year,
      sym_hour_in_day,
      sym_week_in_month,
      sym_week_in_year,
      sym_identifier,
  [2033] = 2,
    ACTIONS(124), 3,
      sym_less_than,
      sym_greater_than,
      aux_sym_in_token1,
    ACTIONS(122), 21,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      aux_sym_not_token1,
      sym_limit,
      sym_offset,
      sym_like,
      sym_includes,
      sym_excludes,
      sym_for,
      sym_update,
      sym_order_by,
      sym_asc,
      sym_desc,
      sym_nulls_first,
      sym_nulls_last,
      sym_having,
  [2062] = 2,
    ACTIONS(132), 3,
      sym_less_than,
      sym_greater_than,
      aux_sym_in_token1,
    ACTIONS(130), 19,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      aux_sym_not_token1,
      sym_limit,
      sym_offset,
      sym_like,
      sym_includes,
      sym_excludes,
      sym_for,
      sym_update,
      sym_asc,
      sym_desc,
      sym_nulls_first,
      sym_nulls_last,
  [2089] = 2,
    ACTIONS(136), 3,
      sym_less_than,
      sym_greater_than,
      aux_sym_in_token1,
    ACTIONS(134), 19,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      aux_sym_not_token1,
      sym_limit,
      sym_offset,
      sym_like,
      sym_includes,
      sym_excludes,
      sym_for,
      sym_update,
      sym_asc,
      sym_desc,
      sym_nulls_first,
      sym_nulls_last,
  [2116] = 20,
    ACTIONS(140), 1,
      sym_where,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(146), 1,
      sym_with,
    ACTIONS(148), 1,
      aux_sym_using_scope_token1,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    ACTIONS(156), 1,
      sym_group_by,
    STATE(46), 1,
      sym_using_clause,
    STATE(49), 1,
      sym_where_clause,
    STATE(62), 1,
      sym_with_clause,
    STATE(79), 1,
      sym_group_by_clause,
    STATE(101), 1,
      sym_order_by_clause,
    STATE(142), 1,
      sym_limit_clause,
    STATE(150), 1,
      sym_using_scope,
    STATE(180), 1,
      sym_offset_clause,
    STATE(207), 1,
      sym_for_clause,
    STATE(284), 1,
      sym_update_clause,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [2178] = 8,
    ACTIONS(162), 1,
      aux_sym_not_token1,
    ACTIONS(164), 1,
      aux_sym_in_token1,
    STATE(6), 1,
      sym__value_comparison_operator,
    ACTIONS(160), 2,
      sym_less_than,
      sym_greater_than,
    ACTIONS(166), 2,
      sym_includes,
      sym_excludes,
    STATE(227), 3,
      sym__set_comparison_operator,
      sym_in,
      sym_not_in,
    STATE(256), 3,
      sym__comparison,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(158), 5,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      sym_like,
  [2213] = 8,
    ACTIONS(162), 1,
      aux_sym_not_token1,
    ACTIONS(164), 1,
      aux_sym_in_token1,
    STATE(7), 1,
      sym__value_comparison_operator,
    ACTIONS(170), 2,
      sym_less_than,
      sym_greater_than,
    ACTIONS(172), 2,
      sym_includes,
      sym_excludes,
    STATE(2), 3,
      sym__set_comparison_operator,
      sym_in,
      sym_not_in,
    STATE(124), 3,
      sym__having_comparison,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(168), 5,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      sym_like,
  [2248] = 17,
    ACTIONS(140), 1,
      sym_where,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(146), 1,
      sym_with,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    ACTIONS(156), 1,
      sym_group_by,
    STATE(54), 1,
      sym_where_clause,
    STATE(64), 1,
      sym_with_clause,
    STATE(82), 1,
      sym_group_by_clause,
    STATE(104), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(166), 1,
      sym_offset_clause,
    STATE(223), 1,
      sym_for_clause,
    STATE(277), 1,
      sym_update_clause,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [2301] = 8,
    ACTIONS(162), 1,
      aux_sym_not_token1,
    ACTIONS(164), 1,
      aux_sym_in_token1,
    STATE(9), 1,
      sym__value_comparison_operator,
    ACTIONS(178), 2,
      sym_less_than,
      sym_greater_than,
    ACTIONS(180), 2,
      sym_includes,
      sym_excludes,
    STATE(94), 3,
      sym__comparison,
      sym__value_comparison,
      sym__set_comparison,
    STATE(228), 3,
      sym__set_comparison_operator,
      sym_in,
      sym_not_in,
    ACTIONS(176), 5,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      sym_like,
  [2336] = 8,
    ACTIONS(162), 1,
      aux_sym_not_token1,
    ACTIONS(164), 1,
      aux_sym_in_token1,
    STATE(8), 1,
      sym__value_comparison_operator,
    ACTIONS(184), 2,
      sym_less_than,
      sym_greater_than,
    ACTIONS(186), 2,
      sym_includes,
      sym_excludes,
    STATE(3), 3,
      sym__set_comparison_operator,
      sym_in,
      sym_not_in,
    STATE(235), 3,
      sym__having_comparison,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(182), 5,
      sym_equals,
      sym_not_equals,
      sym_less_or_equal,
      sym_greater_or_equal,
      sym_like,
  [2371] = 15,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(146), 1,
      sym_with,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    ACTIONS(156), 1,
      sym_group_by,
    STATE(64), 1,
      sym_with_clause,
    STATE(82), 1,
      sym_group_by_clause,
    STATE(104), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(166), 1,
      sym_offset_clause,
    STATE(223), 1,
      sym_for_clause,
    STATE(277), 1,
      sym_update_clause,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [2418] = 6,
    ACTIONS(190), 1,
      sym_paren_left,
    ACTIONS(192), 1,
      sym_period,
    ACTIONS(194), 1,
      sym_question_mark,
    ACTIONS(196), 1,
      sym_or,
    STATE(60), 1,
      aux_sym_apex_identifier_repeat1,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2447] = 4,
    ACTIONS(200), 1,
      sym_period,
    STATE(53), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_order_by,
      sym_group_by,
    ACTIONS(202), 9,
      sym_where,
      sym_limit,
      sym_offset,
      sym_as,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_identifier,
  [2472] = 4,
    ACTIONS(204), 1,
      sym_period,
    STATE(52), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_order_by,
      sym_group_by,
    ACTIONS(114), 9,
      sym_where,
      sym_limit,
      sym_offset,
      sym_as,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_identifier,
  [2497] = 4,
    ACTIONS(200), 1,
      sym_period,
    STATE(52), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_order_by,
      sym_group_by,
    ACTIONS(120), 9,
      sym_where,
      sym_limit,
      sym_offset,
      sym_as,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_identifier,
  [2522] = 15,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(146), 1,
      sym_with,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    ACTIONS(156), 1,
      sym_group_by,
    STATE(68), 1,
      sym_with_clause,
    STATE(75), 1,
      sym_group_by_clause,
    STATE(109), 1,
      sym_order_by_clause,
    STATE(143), 1,
      sym_limit_clause,
    STATE(173), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(297), 1,
      sym_update_clause,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [2569] = 5,
    ACTIONS(192), 1,
      sym_period,
    ACTIONS(194), 1,
      sym_question_mark,
    ACTIONS(196), 1,
      sym_or,
    STATE(60), 1,
      aux_sym_apex_identifier_repeat1,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2595] = 3,
    ACTIONS(190), 1,
      sym_paren_left,
    ACTIONS(211), 1,
      sym_or,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2617] = 3,
    ACTIONS(190), 1,
      sym_paren_left,
    ACTIONS(215), 1,
      sym_or,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2639] = 6,
    ACTIONS(219), 1,
      sym_comma,
    ACTIONS(223), 1,
      sym_as,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_order_by,
      sym_group_by,
    ACTIONS(221), 7,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
  [2667] = 2,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_period,
      sym_order_by,
      sym_group_by,
    ACTIONS(114), 9,
      sym_where,
      sym_limit,
      sym_offset,
      sym_as,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_identifier,
  [2687] = 5,
    ACTIONS(192), 1,
      sym_period,
    ACTIONS(194), 1,
      sym_question_mark,
    ACTIONS(229), 1,
      sym_or,
    STATE(61), 1,
      aux_sym_apex_identifier_repeat1,
    ACTIONS(227), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2713] = 5,
    ACTIONS(211), 1,
      sym_or,
    ACTIONS(231), 1,
      sym_period,
    ACTIONS(234), 1,
      sym_question_mark,
    STATE(61), 1,
      aux_sym_apex_identifier_repeat1,
    ACTIONS(209), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2739] = 13,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    ACTIONS(156), 1,
      sym_group_by,
    STATE(82), 1,
      sym_group_by_clause,
    STATE(104), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(166), 1,
      sym_offset_clause,
    STATE(223), 1,
      sym_for_clause,
    STATE(277), 1,
      sym_update_clause,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [2780] = 2,
    ACTIONS(239), 1,
      sym_or,
    ACTIONS(237), 13,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2799] = 13,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    ACTIONS(156), 1,
      sym_group_by,
    STATE(75), 1,
      sym_group_by_clause,
    STATE(109), 1,
      sym_order_by_clause,
    STATE(143), 1,
      sym_limit_clause,
    STATE(173), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(297), 1,
      sym_update_clause,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [2840] = 2,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_order_by,
      sym_group_by,
    ACTIONS(202), 9,
      sym_where,
      sym_limit,
      sym_offset,
      sym_as,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_identifier,
  [2859] = 2,
    ACTIONS(215), 1,
      sym_or,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2878] = 4,
    ACTIONS(223), 1,
      sym_as,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(241), 5,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_order_by,
      sym_group_by,
    ACTIONS(243), 7,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
  [2901] = 13,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    ACTIONS(156), 1,
      sym_group_by,
    STATE(80), 1,
      sym_group_by_clause,
    STATE(103), 1,
      sym_order_by_clause,
    STATE(137), 1,
      sym_limit_clause,
    STATE(172), 1,
      sym_offset_clause,
    STATE(210), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [2942] = 2,
    ACTIONS(211), 1,
      sym_or,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2961] = 3,
    ACTIONS(219), 1,
      sym_comma,
    STATE(74), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(247), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2981] = 2,
    ACTIONS(251), 1,
      sym_or,
    ACTIONS(249), 12,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_from,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [2999] = 3,
    ACTIONS(219), 1,
      sym_comma,
    STATE(70), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(217), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3019] = 5,
    ACTIONS(255), 1,
      sym_and,
    ACTIONS(257), 1,
      sym_or,
    STATE(91), 1,
      aux_sym_or_expression_repeat1,
    STATE(98), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3043] = 3,
    ACTIONS(259), 1,
      sym_comma,
    STATE(74), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(241), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3063] = 11,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    STATE(103), 1,
      sym_order_by_clause,
    STATE(137), 1,
      sym_limit_clause,
    STATE(172), 1,
      sym_offset_clause,
    STATE(210), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3098] = 2,
    ACTIONS(264), 1,
      sym_or,
    ACTIONS(262), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3115] = 1,
    ACTIONS(266), 12,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3130] = 1,
    ACTIONS(268), 12,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3145] = 11,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    STATE(104), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(166), 1,
      sym_offset_clause,
    STATE(223), 1,
      sym_for_clause,
    STATE(277), 1,
      sym_update_clause,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3180] = 11,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    STATE(114), 1,
      sym_order_by_clause,
    STATE(145), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(224), 1,
      sym_for_clause,
    STATE(304), 1,
      sym_update_clause,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3215] = 1,
    ACTIONS(241), 12,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      aux_sym_using_scope_token1,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3230] = 11,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    ACTIONS(154), 1,
      sym_order_by,
    STATE(109), 1,
      sym_order_by_clause,
    STATE(143), 1,
      sym_limit_clause,
    STATE(173), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(297), 1,
      sym_update_clause,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3265] = 2,
    ACTIONS(274), 1,
      sym_or,
    ACTIONS(272), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3282] = 2,
    ACTIONS(278), 1,
      sym_or,
    ACTIONS(276), 11,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3299] = 4,
    ACTIONS(282), 1,
      sym_comma,
    ACTIONS(284), 1,
      sym_or,
    STATE(95), 1,
      aux_sym__set_comparison_repeat1,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [3319] = 3,
    ACTIONS(288), 1,
      sym_or,
    STATE(86), 1,
      aux_sym_or_expression_repeat1,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3337] = 2,
    ACTIONS(293), 1,
      sym_or,
    ACTIONS(291), 10,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3353] = 2,
    ACTIONS(297), 1,
      sym_or,
    ACTIONS(295), 10,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3369] = 2,
    ACTIONS(301), 1,
      sym_or,
    ACTIONS(299), 10,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3385] = 2,
    ACTIONS(305), 1,
      sym_or,
    ACTIONS(303), 10,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3401] = 3,
    ACTIONS(257), 1,
      sym_or,
    STATE(86), 1,
      aux_sym_or_expression_repeat1,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3419] = 2,
    ACTIONS(311), 1,
      sym_or,
    ACTIONS(309), 10,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3435] = 3,
    ACTIONS(315), 2,
      sym_asc,
      sym_desc,
    ACTIONS(317), 2,
      sym_nulls_first,
      sym_nulls_last,
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
  [3453] = 2,
    ACTIONS(321), 1,
      sym_or,
    ACTIONS(319), 10,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3469] = 4,
    ACTIONS(325), 1,
      sym_comma,
    ACTIONS(328), 1,
      sym_or,
    STATE(95), 1,
      aux_sym__set_comparison_repeat1,
    ACTIONS(323), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [3489] = 3,
    ACTIONS(332), 1,
      sym_and,
    STATE(96), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(330), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3507] = 5,
    ACTIONS(337), 1,
      sym_and,
    ACTIONS(339), 1,
      sym_or,
    STATE(119), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(121), 1,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [3529] = 3,
    ACTIONS(255), 1,
      sym_and,
    STATE(96), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(341), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3547] = 4,
    ACTIONS(282), 1,
      sym_comma,
    ACTIONS(345), 1,
      sym_or,
    STATE(85), 1,
      aux_sym__set_comparison_repeat1,
    ACTIONS(343), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [3567] = 3,
    ACTIONS(349), 1,
      sym_and,
    STATE(115), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(347), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3584] = 9,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(140), 1,
      sym_limit_clause,
    STATE(166), 1,
      sym_offset_clause,
    STATE(223), 1,
      sym_for_clause,
    STATE(277), 1,
      sym_update_clause,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3613] = 3,
    ACTIONS(353), 1,
      sym_comma,
    STATE(107), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(351), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_having,
  [3630] = 9,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(145), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(224), 1,
      sym_for_clause,
    STATE(304), 1,
      sym_update_clause,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3659] = 9,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(143), 1,
      sym_limit_clause,
    STATE(173), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(297), 1,
      sym_update_clause,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3688] = 3,
    ACTIONS(357), 1,
      sym_and,
    STATE(105), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(355), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3705] = 1,
    ACTIONS(360), 10,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_where,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3718] = 3,
    ACTIONS(364), 1,
      sym_comma,
    STATE(107), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_having,
  [3735] = 3,
    ACTIONS(353), 1,
      sym_comma,
    STATE(102), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(367), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_having,
  [3752] = 9,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(137), 1,
      sym_limit_clause,
    STATE(172), 1,
      sym_offset_clause,
    STATE(210), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3781] = 5,
    ACTIONS(371), 1,
      sym_user_id,
    ACTIONS(373), 1,
      sym_record_visibility_context,
    ACTIONS(375), 1,
      sym_data_category,
    ACTIONS(369), 3,
      sym_security_enforced,
      sym_user_mode,
      sym_system_mode,
    STATE(144), 4,
      sym__with_type,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [3802] = 2,
    ACTIONS(328), 1,
      sym_or,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [3817] = 1,
    ACTIONS(330), 10,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3830] = 2,
    ACTIONS(377), 1,
      sym_or,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3845] = 9,
    ACTIONS(142), 1,
      sym_limit,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(146), 1,
      sym_limit_clause,
    STATE(169), 1,
      sym_offset_clause,
    STATE(209), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [3874] = 3,
    ACTIONS(349), 1,
      sym_and,
    STATE(105), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(381), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3891] = 1,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_having,
  [3903] = 1,
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3915] = 1,
    ACTIONS(385), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3927] = 3,
    ACTIONS(337), 1,
      sym_and,
    STATE(127), 1,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [3943] = 1,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3955] = 3,
    ACTIONS(339), 1,
      sym_or,
    STATE(128), 1,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [3971] = 1,
    ACTIONS(393), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [3983] = 2,
    ACTIONS(397), 1,
      sym_or,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [3997] = 2,
    ACTIONS(401), 1,
      sym_or,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4011] = 1,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [4023] = 2,
    ACTIONS(345), 1,
      sym_or,
    ACTIONS(343), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4037] = 3,
    ACTIONS(405), 1,
      sym_and,
    STATE(127), 1,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(403), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4053] = 3,
    ACTIONS(410), 1,
      sym_or,
    STATE(128), 1,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(408), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4069] = 1,
    ACTIONS(413), 9,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_with,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [4081] = 3,
    ACTIONS(417), 1,
      sym_having,
    STATE(158), 1,
      sym_having_clause,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4097] = 2,
    ACTIONS(421), 2,
      sym_nulls_first,
      sym_nulls_last,
    ACTIONS(419), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
  [4111] = 2,
    ACTIONS(425), 1,
      sym_or,
    ACTIONS(423), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4125] = 3,
    ACTIONS(429), 1,
      sym_comma,
    STATE(133), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(427), 6,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
  [4140] = 1,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [4151] = 2,
    ACTIONS(434), 1,
      sym_or,
    ACTIONS(408), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4164] = 1,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [4175] = 7,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(165), 1,
      sym_offset_clause,
    STATE(224), 1,
      sym_for_clause,
    STATE(304), 1,
      sym_update_clause,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4198] = 3,
    ACTIONS(440), 1,
      sym_comma,
    STATE(133), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(438), 6,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
  [4213] = 3,
    ACTIONS(440), 1,
      sym_comma,
    STATE(138), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(442), 6,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
  [4228] = 7,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(173), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(297), 1,
      sym_update_clause,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4251] = 1,
    ACTIONS(403), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_and,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4262] = 7,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(166), 1,
      sym_offset_clause,
    STATE(223), 1,
      sym_for_clause,
    STATE(277), 1,
      sym_update_clause,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4285] = 7,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(172), 1,
      sym_offset_clause,
    STATE(210), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4308] = 1,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [4319] = 7,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(169), 1,
      sym_offset_clause,
    STATE(209), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4342] = 7,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(181), 1,
      sym_offset_clause,
    STATE(206), 1,
      sym_for_clause,
    STATE(282), 1,
      sym_update_clause,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4365] = 1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_having,
  [4376] = 1,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_having,
  [4387] = 1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
      sym_group_by,
  [4398] = 3,
    ACTIONS(456), 1,
      sym_mine,
    STATE(106), 1,
      sym__using_scope_type,
    ACTIONS(454), 6,
      sym_delegated,
      sym_everything,
      sym_mine_and_my_groups,
      sym_my_territory,
      sym_my_team_territory,
      sym_team,
  [4413] = 1,
    ACTIONS(458), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4423] = 1,
    ACTIONS(460), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4433] = 6,
    ACTIONS(9), 1,
      sym_colon,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(462), 1,
      sym_geo_location,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(346), 1,
      sym_geo_location_type,
    STATE(340), 2,
      sym_field_identifier,
      sym_bound_apex_expression,
  [4453] = 4,
    ACTIONS(464), 1,
      sym_period,
    STATE(154), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(109), 2,
      sym_paren_right,
      sym_comma,
    ACTIONS(114), 3,
      sym_from,
      sym_as,
      sym_identifier,
  [4469] = 4,
    ACTIONS(467), 1,
      sym_period,
    STATE(162), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(122), 2,
      sym_paren_right,
      sym_comma,
    ACTIONS(124), 3,
      sym_from,
      sym_as,
      sym_identifier,
  [4485] = 5,
    ACTIONS(118), 1,
      sym_period,
    ACTIONS(469), 1,
      sym_comma,
    STATE(32), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(192), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(471), 3,
      sym_end,
      sym_when,
      sym_else,
  [4503] = 2,
    ACTIONS(475), 1,
      sym_mine,
    ACTIONS(473), 6,
      sym_delegated,
      sym_everything,
      sym_mine_and_my_groups,
      sym_my_territory,
      sym_my_team_territory,
      sym_team,
  [4515] = 1,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
      sym_order_by,
  [4525] = 6,
    ACTIONS(9), 1,
      sym_colon,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(462), 1,
      sym_geo_location,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(371), 1,
      sym_geo_location_type,
    STATE(340), 2,
      sym_field_identifier,
      sym_bound_apex_expression,
  [4545] = 1,
    ACTIONS(419), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
  [4555] = 1,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
  [4565] = 4,
    ACTIONS(467), 1,
      sym_period,
    STATE(154), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(116), 2,
      sym_paren_right,
      sym_comma,
    ACTIONS(120), 3,
      sym_from,
      sym_as,
      sym_identifier,
  [4581] = 1,
    ACTIONS(479), 7,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_limit,
      sym_offset,
      sym_for,
      sym_update,
  [4591] = 5,
    ACTIONS(481), 1,
      sym_paren_left,
    ACTIONS(483), 1,
      sym_period,
    ACTIONS(485), 1,
      sym_question_mark,
    STATE(168), 1,
      aux_sym_apex_identifier_repeat1,
    ACTIONS(188), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [4609] = 5,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(209), 1,
      sym_for_clause,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4626] = 5,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(218), 1,
      sym_for_clause,
    STATE(297), 1,
      sym_update_clause,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4643] = 4,
    ACTIONS(483), 1,
      sym_period,
    ACTIONS(485), 1,
      sym_question_mark,
    STATE(168), 1,
      aux_sym_apex_identifier_repeat1,
    ACTIONS(188), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [4658] = 4,
    ACTIONS(483), 1,
      sym_period,
    ACTIONS(485), 1,
      sym_question_mark,
    STATE(177), 1,
      aux_sym_apex_identifier_repeat1,
    ACTIONS(227), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [4673] = 5,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(206), 1,
      sym_for_clause,
    STATE(282), 1,
      sym_update_clause,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4690] = 5,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(108), 1,
      sym_field_identifier,
    STATE(130), 1,
      sym__group_by_expression,
    ACTIONS(487), 2,
      sym_rollup,
      sym_cube,
  [4707] = 2,
    ACTIONS(109), 3,
      sym_paren_right,
      sym_comma,
      sym_period,
    ACTIONS(114), 3,
      sym_from,
      sym_as,
      sym_identifier,
  [4718] = 5,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(224), 1,
      sym_for_clause,
    STATE(304), 1,
      sym_update_clause,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4735] = 5,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(210), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4752] = 5,
    ACTIONS(489), 1,
      sym_end,
    ACTIONS(491), 1,
      sym_when,
    ACTIONS(493), 1,
      sym_else,
    STATE(364), 1,
      sym_else_expression,
    STATE(179), 2,
      sym_when_expression,
      aux_sym_type_of_clause_repeat1,
  [4769] = 3,
    ACTIONS(118), 1,
      sym_period,
    STATE(32), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(495), 4,
      sym_comma,
      sym_end,
      sym_when,
      sym_else,
  [4782] = 2,
    ACTIONS(481), 1,
      sym_paren_left,
    ACTIONS(209), 5,
      sym_paren_right,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_or,
  [4793] = 4,
    ACTIONS(497), 1,
      sym_period,
    ACTIONS(500), 1,
      sym_question_mark,
    STATE(177), 1,
      aux_sym_apex_identifier_repeat1,
    ACTIONS(209), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [4808] = 2,
    ACTIONS(481), 1,
      sym_paren_left,
    ACTIONS(213), 5,
      sym_paren_right,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_or,
  [4819] = 5,
    ACTIONS(491), 1,
      sym_when,
    ACTIONS(493), 1,
      sym_else,
    ACTIONS(503), 1,
      sym_end,
    STATE(322), 1,
      sym_else_expression,
    STATE(195), 2,
      sym_when_expression,
      aux_sym_type_of_clause_repeat1,
  [4836] = 5,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(223), 1,
      sym_for_clause,
    STATE(277), 1,
      sym_update_clause,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4853] = 5,
    ACTIONS(150), 1,
      sym_for,
    ACTIONS(152), 1,
      sym_update,
    STATE(208), 1,
      sym_for_clause,
    STATE(289), 1,
      sym_update_clause,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [4870] = 3,
    ACTIONS(509), 1,
      sym_comma,
    STATE(182), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(507), 3,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_update,
  [4882] = 3,
    ACTIONS(512), 1,
      sym_comma,
    STATE(201), 1,
      aux_sym__set_comparison_repeat1,
    ACTIONS(343), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [4894] = 2,
    ACTIONS(130), 2,
      sym_paren_right,
      sym_comma,
    ACTIONS(132), 3,
      sym_from,
      sym_as,
      sym_identifier,
  [4904] = 4,
    ACTIONS(9), 1,
      sym_colon,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(373), 2,
      sym_field_identifier,
      sym_bound_apex_expression,
  [4918] = 5,
    ACTIONS(253), 1,
      sym_paren_right,
    ACTIONS(255), 1,
      sym_and,
    ACTIONS(516), 1,
      sym_or,
    STATE(98), 1,
      aux_sym_and_expression_repeat1,
    STATE(257), 1,
      aux_sym_or_expression_repeat1,
  [4934] = 1,
    ACTIONS(518), 5,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_offset,
      sym_for,
      sym_update,
  [4942] = 3,
    ACTIONS(522), 1,
      sym_comma,
    STATE(203), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_update,
  [4954] = 5,
    ACTIONS(335), 1,
      sym_paren_right,
    ACTIONS(337), 1,
      sym_and,
    ACTIONS(524), 1,
      sym_or,
    STATE(119), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(237), 1,
      aux_sym_having_or_expression_repeat1,
  [4970] = 1,
    ACTIONS(237), 5,
      sym_paren_right,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_or,
  [4978] = 4,
    ACTIONS(9), 1,
      sym_colon,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(342), 2,
      sym_field_identifier,
      sym_bound_apex_expression,
  [4992] = 3,
    ACTIONS(469), 1,
      sym_comma,
    STATE(202), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(526), 3,
      sym_end,
      sym_when,
      sym_else,
  [5004] = 3,
    ACTIONS(469), 1,
      sym_comma,
    STATE(192), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(471), 3,
      sym_end,
      sym_when,
      sym_else,
  [5016] = 1,
    ACTIONS(209), 5,
      sym_paren_right,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_or,
  [5024] = 3,
    ACTIONS(530), 1,
      sym_when,
    ACTIONS(528), 2,
      sym_end,
      sym_else,
    STATE(195), 2,
      sym_when_expression,
      aux_sym_type_of_clause_repeat1,
  [5036] = 2,
    ACTIONS(134), 2,
      sym_paren_right,
      sym_comma,
    ACTIONS(136), 3,
      sym_from,
      sym_as,
      sym_identifier,
  [5046] = 1,
    ACTIONS(213), 5,
      sym_paren_right,
      sym_period,
      sym_question_mark,
      sym_and,
      sym_or,
  [5054] = 2,
    ACTIONS(122), 2,
      sym_paren_right,
      sym_comma,
    ACTIONS(124), 3,
      sym_from,
      sym_as,
      sym_identifier,
  [5064] = 3,
    ACTIONS(533), 1,
      sym_comma,
    STATE(199), 1,
      aux_sym__set_comparison_repeat1,
    ACTIONS(323), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5076] = 3,
    ACTIONS(538), 1,
      sym_above,
    STATE(280), 1,
      sym__with_data_cat_filtering_selector,
    ACTIONS(536), 3,
      sym_at,
      sym_below,
      sym_above_or_below,
  [5088] = 3,
    ACTIONS(512), 1,
      sym_comma,
    STATE(199), 1,
      aux_sym__set_comparison_repeat1,
    ACTIONS(280), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5100] = 3,
    ACTIONS(540), 1,
      sym_comma,
    STATE(202), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(495), 3,
      sym_end,
      sym_when,
      sym_else,
  [5112] = 3,
    ACTIONS(522), 1,
      sym_comma,
    STATE(182), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(543), 3,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_update,
  [5124] = 1,
    ACTIONS(276), 4,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_or,
  [5131] = 4,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(58), 1,
      sym_storage_identifier,
    STATE(65), 1,
      sym_dotted_identifier,
    STATE(72), 1,
      sym_storage_alias,
  [5144] = 3,
    ACTIONS(152), 1,
      sym_update,
    STATE(289), 1,
      sym_update_clause,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5155] = 3,
    ACTIONS(152), 1,
      sym_update,
    STATE(277), 1,
      sym_update_clause,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5166] = 3,
    ACTIONS(152), 1,
      sym_update,
    STATE(292), 1,
      sym_update_clause,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5177] = 3,
    ACTIONS(152), 1,
      sym_update,
    STATE(282), 1,
      sym_update_clause,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5188] = 3,
    ACTIONS(152), 1,
      sym_update,
    STATE(304), 1,
      sym_update_clause,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5199] = 4,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(65), 1,
      sym_dotted_identifier,
    STATE(67), 1,
      sym_storage_identifier,
    STATE(81), 1,
      sym_storage_alias,
  [5212] = 3,
    ACTIONS(551), 1,
      sym_comma,
    STATE(225), 1,
      aux_sym_update_clause_repeat1,
    ACTIONS(549), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5223] = 1,
    ACTIONS(507), 4,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
      sym_update,
  [5230] = 1,
    ACTIONS(323), 4,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_or,
  [5237] = 1,
    ACTIONS(495), 4,
      sym_comma,
      sym_end,
      sym_when,
      sym_else,
  [5244] = 3,
    ACTIONS(553), 1,
      sym_max_descriptor_per_record,
    STATE(233), 1,
      sym__with_record_visibility_param,
    ACTIONS(555), 2,
      sym_supports_domains,
      sym_supports_delegates,
  [5255] = 4,
    ACTIONS(557), 1,
      sym_comma,
    ACTIONS(559), 1,
      sym_from,
    ACTIONS(561), 1,
      sym_as,
    ACTIONS(563), 1,
      sym_identifier,
  [5268] = 3,
    ACTIONS(152), 1,
      sym_update,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5279] = 1,
    ACTIONS(565), 4,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_for,
      sym_update,
  [5286] = 3,
    ACTIONS(5), 1,
      sym_select,
    STATE(285), 1,
      sym_select_clause,
    STATE(325), 2,
      sym__query_expression,
      sym_query_body,
  [5297] = 1,
    ACTIONS(272), 4,
      sym_paren_right,
      sym_comma,
      sym_and,
      sym_or,
  [5304] = 3,
    ACTIONS(551), 1,
      sym_comma,
    STATE(212), 1,
      aux_sym_update_clause_repeat1,
    ACTIONS(567), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5315] = 3,
    ACTIONS(152), 1,
      sym_update,
    STATE(297), 1,
      sym_update_clause,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5326] = 3,
    ACTIONS(152), 1,
      sym_update,
    STATE(296), 1,
      sym_update_clause,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5337] = 3,
    ACTIONS(571), 1,
      sym_comma,
    STATE(225), 1,
      aux_sym_update_clause_repeat1,
    ACTIONS(569), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5348] = 3,
    ACTIONS(553), 1,
      sym_max_descriptor_per_record,
    STATE(306), 1,
      sym__with_record_visibility_param,
    ACTIONS(555), 2,
      sym_supports_domains,
      sym_supports_delegates,
  [5359] = 3,
    ACTIONS(21), 1,
      sym_colon,
    ACTIONS(574), 1,
      sym_paren_left,
    STATE(247), 2,
      sym_subquery,
      sym_bound_apex_expression,
  [5370] = 3,
    ACTIONS(9), 1,
      sym_colon,
    ACTIONS(576), 1,
      sym_paren_left,
    STATE(90), 2,
      sym_subquery,
      sym_bound_apex_expression,
  [5381] = 3,
    ACTIONS(282), 1,
      sym_comma,
    ACTIONS(578), 1,
      sym_paren_right,
    STATE(241), 1,
      aux_sym__set_comparison_repeat1,
  [5391] = 3,
    ACTIONS(286), 1,
      sym_paren_right,
    ACTIONS(580), 1,
      sym_or,
    STATE(230), 1,
      aux_sym_or_expression_repeat1,
  [5401] = 1,
    ACTIONS(295), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5407] = 3,
    ACTIONS(583), 1,
      sym_paren_right,
    ACTIONS(585), 1,
      sym_comma,
    STATE(272), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [5417] = 3,
    ACTIONS(587), 1,
      sym_paren_right,
    ACTIONS(589), 1,
      sym_comma,
    STATE(252), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [5427] = 3,
    ACTIONS(591), 1,
      sym_paren_right,
    ACTIONS(593), 1,
      sym_comma,
    STATE(244), 1,
      aux_sym__group_by_expression_repeat1,
  [5437] = 1,
    ACTIONS(399), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5443] = 3,
    ACTIONS(5), 1,
      sym_select,
    STATE(285), 1,
      sym_select_clause,
    STATE(323), 1,
      sym_query_body,
  [5453] = 3,
    ACTIONS(391), 1,
      sym_paren_right,
    ACTIONS(524), 1,
      sym_or,
    STATE(250), 1,
      aux_sym_having_or_expression_repeat1,
  [5463] = 1,
    ACTIONS(595), 3,
      sym_all,
      sym_custom,
      sym_standard,
  [5469] = 3,
    ACTIONS(593), 1,
      sym_comma,
    ACTIONS(597), 1,
      sym_paren_right,
    STATE(234), 1,
      aux_sym__group_by_expression_repeat1,
  [5479] = 3,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(239), 1,
      sym_field_identifier,
  [5489] = 3,
    ACTIONS(282), 1,
      sym_comma,
    ACTIONS(599), 1,
      sym_paren_right,
    STATE(95), 1,
      aux_sym__set_comparison_repeat1,
  [5499] = 3,
    ACTIONS(601), 1,
      sym_identifier,
    STATE(167), 1,
      sym_apex_method_identifier,
    STATE(262), 1,
      sym_apex_identifier,
  [5509] = 2,
    STATE(308), 1,
      sym__boolean,
    ACTIONS(603), 2,
      sym_true,
      sym_false,
  [5517] = 3,
    ACTIONS(362), 1,
      sym_paren_right,
    ACTIONS(605), 1,
      sym_comma,
    STATE(244), 1,
      aux_sym__group_by_expression_repeat1,
  [5527] = 1,
    ACTIONS(569), 3,
      ts_builtin_sym_end,
      sym_paren_right,
      sym_comma,
  [5533] = 1,
    ACTIONS(395), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5539] = 1,
    ACTIONS(303), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5545] = 3,
    ACTIONS(282), 1,
      sym_comma,
    ACTIONS(608), 1,
      sym_paren_right,
    STATE(254), 1,
      aux_sym__set_comparison_repeat1,
  [5555] = 1,
    ACTIONS(299), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5561] = 3,
    ACTIONS(408), 1,
      sym_paren_right,
    ACTIONS(610), 1,
      sym_or,
    STATE(250), 1,
      aux_sym_having_or_expression_repeat1,
  [5571] = 2,
    STATE(316), 1,
      sym__distance_type,
    ACTIONS(613), 2,
      sym_distance_type_mi,
      sym_distance_type_km,
  [5579] = 3,
    ACTIONS(589), 1,
      sym_comma,
    ACTIONS(615), 1,
      sym_paren_right,
    STATE(258), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [5589] = 1,
    ACTIONS(291), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5595] = 3,
    ACTIONS(282), 1,
      sym_comma,
    ACTIONS(617), 1,
      sym_paren_right,
    STATE(95), 1,
      aux_sym__set_comparison_repeat1,
  [5605] = 3,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(116), 1,
      sym_field_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
  [5615] = 1,
    ACTIONS(319), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5621] = 3,
    ACTIONS(307), 1,
      sym_paren_right,
    ACTIONS(516), 1,
      sym_or,
    STATE(230), 1,
      aux_sym_or_expression_repeat1,
  [5631] = 3,
    ACTIONS(619), 1,
      sym_paren_right,
    ACTIONS(621), 1,
      sym_comma,
    STATE(258), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [5641] = 3,
    ACTIONS(585), 1,
      sym_comma,
    ACTIONS(624), 1,
      sym_paren_right,
    STATE(232), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [5651] = 1,
    ACTIONS(423), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5657] = 1,
    ACTIONS(343), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5663] = 1,
    ACTIONS(262), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5669] = 1,
    ACTIONS(626), 3,
      sym_end,
      sym_when,
      sym_else,
  [5675] = 3,
    ACTIONS(628), 1,
      sym_comma,
    ACTIONS(630), 1,
      sym_from,
    STATE(265), 1,
      aux_sym_select_clause_repeat1,
  [5685] = 3,
    ACTIONS(632), 1,
      sym_comma,
    ACTIONS(635), 1,
      sym_from,
    STATE(265), 1,
      aux_sym_select_clause_repeat1,
  [5695] = 3,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(193), 1,
      sym_dotted_identifier,
    STATE(263), 1,
      sym_field_list,
  [5705] = 1,
    ACTIONS(249), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5711] = 3,
    ACTIONS(639), 1,
      sym_identifier,
    STATE(55), 1,
      sym_apex_method_identifier,
    STATE(76), 1,
      sym_apex_identifier,
  [5721] = 1,
    ACTIONS(309), 3,
      sym_paren_right,
      sym_and,
      sym_or,
  [5727] = 1,
    ACTIONS(641), 3,
      sym_update,
      sym_reference,
      sym_view,
  [5733] = 3,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(116), 1,
      sym_field_identifier,
  [5743] = 3,
    ACTIONS(645), 1,
      sym_paren_right,
    ACTIONS(647), 1,
      sym_comma,
    STATE(272), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [5753] = 1,
    ACTIONS(650), 3,
      sym_update,
      sym_reference,
      sym_view,
  [5759] = 2,
    STATE(361), 1,
      sym__distance_type,
    ACTIONS(652), 2,
      sym_distance_type_mi,
      sym_distance_type_km,
  [5767] = 3,
    ACTIONS(628), 1,
      sym_comma,
    ACTIONS(654), 1,
      sym_from,
    STATE(264), 1,
      aux_sym_select_clause_repeat1,
  [5777] = 3,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(193), 1,
      sym_dotted_identifier,
    STATE(321), 1,
      sym_field_list,
  [5787] = 1,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5792] = 1,
    ACTIONS(286), 2,
      sym_paren_right,
      sym_or,
  [5797] = 2,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(125), 1,
      sym_with_data_cat_filter,
  [5804] = 2,
    ACTIONS(658), 1,
      sym_paren_left,
    ACTIONS(660), 1,
      sym_identifier,
  [5811] = 2,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(215), 1,
      sym_dotted_identifier,
  [5818] = 1,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5823] = 1,
    ACTIONS(664), 2,
      sym_comma,
      sym_from,
  [5828] = 1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5833] = 2,
    ACTIONS(666), 1,
      sym_from,
    STATE(43), 1,
      sym_from_clause,
  [5840] = 1,
    ACTIONS(645), 2,
      sym_paren_right,
      sym_comma,
  [5845] = 2,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(69), 1,
      sym_apex_method_identifier,
  [5852] = 2,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(197), 1,
      sym_apex_method_identifier,
  [5859] = 1,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5864] = 2,
    ACTIONS(672), 1,
      sym_identifier,
    STATE(194), 1,
      sym_apex_method_identifier,
  [5871] = 1,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5876] = 1,
    ACTIONS(674), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5881] = 1,
    ACTIONS(676), 2,
      sym_tracking,
      sym_viewstat,
  [5886] = 1,
    ACTIONS(678), 2,
      sym_tracking,
      sym_viewstat,
  [5891] = 2,
    ACTIONS(680), 1,
      sym_identifier,
    STATE(66), 1,
      sym_apex_method_identifier,
  [5898] = 1,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5903] = 1,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5908] = 1,
    ACTIONS(408), 2,
      sym_paren_right,
      sym_or,
  [5913] = 1,
    ACTIONS(682), 2,
      sym_comma,
      sym_from,
  [5918] = 1,
    ACTIONS(684), 2,
      sym_comma,
      sym_from,
  [5923] = 2,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(100), 1,
      sym_with_data_cat_filter,
  [5930] = 1,
    ACTIONS(635), 2,
      sym_comma,
      sym_from,
  [5935] = 1,
    ACTIONS(686), 2,
      sym_comma,
      sym_from,
  [5940] = 1,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_paren_right,
  [5945] = 1,
    ACTIONS(688), 2,
      sym_comma,
      sym_from,
  [5950] = 1,
    ACTIONS(619), 2,
      sym_paren_right,
      sym_comma,
  [5955] = 1,
    ACTIONS(690), 2,
      sym_comma,
      sym_from,
  [5960] = 1,
    ACTIONS(692), 2,
      sym_paren_right,
      sym_comma,
  [5965] = 1,
    ACTIONS(694), 1,
      aux_sym_in_token1,
  [5969] = 1,
    ACTIONS(696), 1,
      sym_paren_left,
  [5973] = 1,
    ACTIONS(698), 1,
      sym_identifier,
  [5977] = 1,
    ACTIONS(700), 1,
      sym_identifier,
  [5981] = 1,
    ACTIONS(702), 1,
      sym_equals,
  [5985] = 1,
    ACTIONS(704), 1,
      sym_identifier,
  [5989] = 1,
    ACTIONS(706), 1,
      sym_paren_left,
  [5993] = 1,
    ACTIONS(708), 1,
      sym_paren_right,
  [5997] = 1,
    ACTIONS(710), 1,
      sym_comma,
  [6001] = 1,
    ACTIONS(712), 1,
      sym_paren_left,
  [6005] = 1,
    ACTIONS(714), 1,
      aux_sym_header_comment_token1,
  [6009] = 1,
    ACTIONS(716), 1,
      sym_then,
  [6013] = 1,
    ACTIONS(718), 1,
      sym_end,
  [6017] = 1,
    ACTIONS(720), 1,
      sym_end,
  [6021] = 1,
    ACTIONS(722), 1,
      sym_paren_right,
  [6025] = 1,
    ACTIONS(724), 1,
      sym_paren_right,
  [6029] = 1,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
  [6033] = 1,
    ACTIONS(728), 1,
      sym_paren_right,
  [6037] = 1,
    ACTIONS(730), 1,
      sym_equals,
  [6041] = 1,
    ACTIONS(732), 1,
      sym_equals,
  [6045] = 1,
    ACTIONS(734), 1,
      sym_identifier,
  [6049] = 1,
    ACTIONS(736), 1,
      sym_identifier,
  [6053] = 1,
    ACTIONS(603), 1,
      sym_number,
  [6057] = 1,
    ACTIONS(738), 1,
      sym_number,
  [6061] = 1,
    ACTIONS(740), 1,
      sym_decimal,
  [6065] = 1,
    ACTIONS(742), 1,
      sym_number,
  [6069] = 1,
    ACTIONS(744), 1,
      sym_number,
  [6073] = 1,
    ACTIONS(746), 1,
      sym_colon,
  [6077] = 1,
    ACTIONS(748), 1,
      sym_string_literal,
  [6081] = 1,
    ACTIONS(750), 1,
      aux_sym_using_scope_token2,
  [6085] = 1,
    ACTIONS(752), 1,
      sym_from,
  [6089] = 1,
    ACTIONS(754), 1,
      sym_comma,
  [6093] = 1,
    ACTIONS(654), 1,
      sym_from,
  [6097] = 1,
    ACTIONS(756), 1,
      sym_comma,
  [6101] = 1,
    ACTIONS(758), 1,
      sym_paren_right,
  [6105] = 1,
    ACTIONS(760), 1,
      sym_identifier,
  [6109] = 1,
    ACTIONS(762), 1,
      sym_paren_right,
  [6113] = 1,
    ACTIONS(764), 1,
      sym_comma,
  [6117] = 1,
    ACTIONS(766), 1,
      sym_paren_left,
  [6121] = 1,
    ACTIONS(768), 1,
      sym_paren_right,
  [6125] = 1,
    ACTIONS(770), 1,
      sym_paren_left,
  [6129] = 1,
    ACTIONS(772), 1,
      sym_identifier,
  [6133] = 1,
    ACTIONS(774), 1,
      sym_paren_left,
  [6137] = 1,
    ACTIONS(776), 1,
      sym_paren_right,
  [6141] = 1,
    ACTIONS(778), 1,
      sym_comma,
  [6145] = 1,
    ACTIONS(780), 1,
      sym_paren_left,
  [6149] = 1,
    ACTIONS(782), 1,
      sym_period,
  [6153] = 1,
    ACTIONS(784), 1,
      sym_paren_right,
  [6157] = 1,
    ACTIONS(786), 1,
      sym_number,
  [6161] = 1,
    ACTIONS(788), 1,
      sym_decimal,
  [6165] = 1,
    ACTIONS(790), 1,
      sym_paren_right,
  [6169] = 1,
    ACTIONS(792), 1,
      sym_select,
  [6173] = 1,
    ACTIONS(794), 1,
      sym_paren_right,
  [6177] = 1,
    ACTIONS(796), 1,
      sym_paren_right,
  [6181] = 1,
    ACTIONS(798), 1,
      sym_identifier,
  [6185] = 1,
    ACTIONS(503), 1,
      sym_end,
  [6189] = 1,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
  [6193] = 1,
    ACTIONS(802), 1,
      sym_period,
  [6197] = 1,
    ACTIONS(804), 1,
      sym_colon,
  [6201] = 1,
    ACTIONS(806), 1,
      sym_paren_right,
  [6205] = 1,
    ACTIONS(808), 1,
      sym_identifier,
  [6209] = 1,
    ACTIONS(810), 1,
      sym_paren_left,
  [6213] = 1,
    ACTIONS(812), 1,
      sym_comma,
  [6217] = 1,
    ACTIONS(814), 1,
      ts_builtin_sym_end,
  [6221] = 1,
    ACTIONS(816), 1,
      sym_comma,
  [6225] = 1,
    ACTIONS(818), 1,
      sym_paren_right,
  [6229] = 1,
    ACTIONS(820), 1,
      sym_paren_left,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 230,
  [SMALL_STATE(6)] = 306,
  [SMALL_STATE(7)] = 377,
  [SMALL_STATE(8)] = 448,
  [SMALL_STATE(9)] = 519,
  [SMALL_STATE(10)] = 590,
  [SMALL_STATE(11)] = 657,
  [SMALL_STATE(12)] = 724,
  [SMALL_STATE(13)] = 784,
  [SMALL_STATE(14)] = 844,
  [SMALL_STATE(15)] = 903,
  [SMALL_STATE(16)] = 962,
  [SMALL_STATE(17)] = 1021,
  [SMALL_STATE(18)] = 1082,
  [SMALL_STATE(19)] = 1138,
  [SMALL_STATE(20)] = 1191,
  [SMALL_STATE(21)] = 1244,
  [SMALL_STATE(22)] = 1297,
  [SMALL_STATE(23)] = 1344,
  [SMALL_STATE(24)] = 1391,
  [SMALL_STATE(25)] = 1438,
  [SMALL_STATE(26)] = 1485,
  [SMALL_STATE(27)] = 1528,
  [SMALL_STATE(28)] = 1571,
  [SMALL_STATE(29)] = 1614,
  [SMALL_STATE(30)] = 1654,
  [SMALL_STATE(31)] = 1694,
  [SMALL_STATE(32)] = 1732,
  [SMALL_STATE(33)] = 1770,
  [SMALL_STATE(34)] = 1811,
  [SMALL_STATE(35)] = 1844,
  [SMALL_STATE(36)] = 1885,
  [SMALL_STATE(37)] = 1926,
  [SMALL_STATE(38)] = 1967,
  [SMALL_STATE(39)] = 2002,
  [SMALL_STATE(40)] = 2033,
  [SMALL_STATE(41)] = 2062,
  [SMALL_STATE(42)] = 2089,
  [SMALL_STATE(43)] = 2116,
  [SMALL_STATE(44)] = 2178,
  [SMALL_STATE(45)] = 2213,
  [SMALL_STATE(46)] = 2248,
  [SMALL_STATE(47)] = 2301,
  [SMALL_STATE(48)] = 2336,
  [SMALL_STATE(49)] = 2371,
  [SMALL_STATE(50)] = 2418,
  [SMALL_STATE(51)] = 2447,
  [SMALL_STATE(52)] = 2472,
  [SMALL_STATE(53)] = 2497,
  [SMALL_STATE(54)] = 2522,
  [SMALL_STATE(55)] = 2569,
  [SMALL_STATE(56)] = 2595,
  [SMALL_STATE(57)] = 2617,
  [SMALL_STATE(58)] = 2639,
  [SMALL_STATE(59)] = 2667,
  [SMALL_STATE(60)] = 2687,
  [SMALL_STATE(61)] = 2713,
  [SMALL_STATE(62)] = 2739,
  [SMALL_STATE(63)] = 2780,
  [SMALL_STATE(64)] = 2799,
  [SMALL_STATE(65)] = 2840,
  [SMALL_STATE(66)] = 2859,
  [SMALL_STATE(67)] = 2878,
  [SMALL_STATE(68)] = 2901,
  [SMALL_STATE(69)] = 2942,
  [SMALL_STATE(70)] = 2961,
  [SMALL_STATE(71)] = 2981,
  [SMALL_STATE(72)] = 2999,
  [SMALL_STATE(73)] = 3019,
  [SMALL_STATE(74)] = 3043,
  [SMALL_STATE(75)] = 3063,
  [SMALL_STATE(76)] = 3098,
  [SMALL_STATE(77)] = 3115,
  [SMALL_STATE(78)] = 3130,
  [SMALL_STATE(79)] = 3145,
  [SMALL_STATE(80)] = 3180,
  [SMALL_STATE(81)] = 3215,
  [SMALL_STATE(82)] = 3230,
  [SMALL_STATE(83)] = 3265,
  [SMALL_STATE(84)] = 3282,
  [SMALL_STATE(85)] = 3299,
  [SMALL_STATE(86)] = 3319,
  [SMALL_STATE(87)] = 3337,
  [SMALL_STATE(88)] = 3353,
  [SMALL_STATE(89)] = 3369,
  [SMALL_STATE(90)] = 3385,
  [SMALL_STATE(91)] = 3401,
  [SMALL_STATE(92)] = 3419,
  [SMALL_STATE(93)] = 3435,
  [SMALL_STATE(94)] = 3453,
  [SMALL_STATE(95)] = 3469,
  [SMALL_STATE(96)] = 3489,
  [SMALL_STATE(97)] = 3507,
  [SMALL_STATE(98)] = 3529,
  [SMALL_STATE(99)] = 3547,
  [SMALL_STATE(100)] = 3567,
  [SMALL_STATE(101)] = 3584,
  [SMALL_STATE(102)] = 3613,
  [SMALL_STATE(103)] = 3630,
  [SMALL_STATE(104)] = 3659,
  [SMALL_STATE(105)] = 3688,
  [SMALL_STATE(106)] = 3705,
  [SMALL_STATE(107)] = 3718,
  [SMALL_STATE(108)] = 3735,
  [SMALL_STATE(109)] = 3752,
  [SMALL_STATE(110)] = 3781,
  [SMALL_STATE(111)] = 3802,
  [SMALL_STATE(112)] = 3817,
  [SMALL_STATE(113)] = 3830,
  [SMALL_STATE(114)] = 3845,
  [SMALL_STATE(115)] = 3874,
  [SMALL_STATE(116)] = 3891,
  [SMALL_STATE(117)] = 3903,
  [SMALL_STATE(118)] = 3915,
  [SMALL_STATE(119)] = 3927,
  [SMALL_STATE(120)] = 3943,
  [SMALL_STATE(121)] = 3955,
  [SMALL_STATE(122)] = 3971,
  [SMALL_STATE(123)] = 3983,
  [SMALL_STATE(124)] = 3997,
  [SMALL_STATE(125)] = 4011,
  [SMALL_STATE(126)] = 4023,
  [SMALL_STATE(127)] = 4037,
  [SMALL_STATE(128)] = 4053,
  [SMALL_STATE(129)] = 4069,
  [SMALL_STATE(130)] = 4081,
  [SMALL_STATE(131)] = 4097,
  [SMALL_STATE(132)] = 4111,
  [SMALL_STATE(133)] = 4125,
  [SMALL_STATE(134)] = 4140,
  [SMALL_STATE(135)] = 4151,
  [SMALL_STATE(136)] = 4164,
  [SMALL_STATE(137)] = 4175,
  [SMALL_STATE(138)] = 4198,
  [SMALL_STATE(139)] = 4213,
  [SMALL_STATE(140)] = 4228,
  [SMALL_STATE(141)] = 4251,
  [SMALL_STATE(142)] = 4262,
  [SMALL_STATE(143)] = 4285,
  [SMALL_STATE(144)] = 4308,
  [SMALL_STATE(145)] = 4319,
  [SMALL_STATE(146)] = 4342,
  [SMALL_STATE(147)] = 4365,
  [SMALL_STATE(148)] = 4376,
  [SMALL_STATE(149)] = 4387,
  [SMALL_STATE(150)] = 4398,
  [SMALL_STATE(151)] = 4413,
  [SMALL_STATE(152)] = 4423,
  [SMALL_STATE(153)] = 4433,
  [SMALL_STATE(154)] = 4453,
  [SMALL_STATE(155)] = 4469,
  [SMALL_STATE(156)] = 4485,
  [SMALL_STATE(157)] = 4503,
  [SMALL_STATE(158)] = 4515,
  [SMALL_STATE(159)] = 4525,
  [SMALL_STATE(160)] = 4545,
  [SMALL_STATE(161)] = 4555,
  [SMALL_STATE(162)] = 4565,
  [SMALL_STATE(163)] = 4581,
  [SMALL_STATE(164)] = 4591,
  [SMALL_STATE(165)] = 4609,
  [SMALL_STATE(166)] = 4626,
  [SMALL_STATE(167)] = 4643,
  [SMALL_STATE(168)] = 4658,
  [SMALL_STATE(169)] = 4673,
  [SMALL_STATE(170)] = 4690,
  [SMALL_STATE(171)] = 4707,
  [SMALL_STATE(172)] = 4718,
  [SMALL_STATE(173)] = 4735,
  [SMALL_STATE(174)] = 4752,
  [SMALL_STATE(175)] = 4769,
  [SMALL_STATE(176)] = 4782,
  [SMALL_STATE(177)] = 4793,
  [SMALL_STATE(178)] = 4808,
  [SMALL_STATE(179)] = 4819,
  [SMALL_STATE(180)] = 4836,
  [SMALL_STATE(181)] = 4853,
  [SMALL_STATE(182)] = 4870,
  [SMALL_STATE(183)] = 4882,
  [SMALL_STATE(184)] = 4894,
  [SMALL_STATE(185)] = 4904,
  [SMALL_STATE(186)] = 4918,
  [SMALL_STATE(187)] = 4934,
  [SMALL_STATE(188)] = 4942,
  [SMALL_STATE(189)] = 4954,
  [SMALL_STATE(190)] = 4970,
  [SMALL_STATE(191)] = 4978,
  [SMALL_STATE(192)] = 4992,
  [SMALL_STATE(193)] = 5004,
  [SMALL_STATE(194)] = 5016,
  [SMALL_STATE(195)] = 5024,
  [SMALL_STATE(196)] = 5036,
  [SMALL_STATE(197)] = 5046,
  [SMALL_STATE(198)] = 5054,
  [SMALL_STATE(199)] = 5064,
  [SMALL_STATE(200)] = 5076,
  [SMALL_STATE(201)] = 5088,
  [SMALL_STATE(202)] = 5100,
  [SMALL_STATE(203)] = 5112,
  [SMALL_STATE(204)] = 5124,
  [SMALL_STATE(205)] = 5131,
  [SMALL_STATE(206)] = 5144,
  [SMALL_STATE(207)] = 5155,
  [SMALL_STATE(208)] = 5166,
  [SMALL_STATE(209)] = 5177,
  [SMALL_STATE(210)] = 5188,
  [SMALL_STATE(211)] = 5199,
  [SMALL_STATE(212)] = 5212,
  [SMALL_STATE(213)] = 5223,
  [SMALL_STATE(214)] = 5230,
  [SMALL_STATE(215)] = 5237,
  [SMALL_STATE(216)] = 5244,
  [SMALL_STATE(217)] = 5255,
  [SMALL_STATE(218)] = 5268,
  [SMALL_STATE(219)] = 5279,
  [SMALL_STATE(220)] = 5286,
  [SMALL_STATE(221)] = 5297,
  [SMALL_STATE(222)] = 5304,
  [SMALL_STATE(223)] = 5315,
  [SMALL_STATE(224)] = 5326,
  [SMALL_STATE(225)] = 5337,
  [SMALL_STATE(226)] = 5348,
  [SMALL_STATE(227)] = 5359,
  [SMALL_STATE(228)] = 5370,
  [SMALL_STATE(229)] = 5381,
  [SMALL_STATE(230)] = 5391,
  [SMALL_STATE(231)] = 5401,
  [SMALL_STATE(232)] = 5407,
  [SMALL_STATE(233)] = 5417,
  [SMALL_STATE(234)] = 5427,
  [SMALL_STATE(235)] = 5437,
  [SMALL_STATE(236)] = 5443,
  [SMALL_STATE(237)] = 5453,
  [SMALL_STATE(238)] = 5463,
  [SMALL_STATE(239)] = 5469,
  [SMALL_STATE(240)] = 5479,
  [SMALL_STATE(241)] = 5489,
  [SMALL_STATE(242)] = 5499,
  [SMALL_STATE(243)] = 5509,
  [SMALL_STATE(244)] = 5517,
  [SMALL_STATE(245)] = 5527,
  [SMALL_STATE(246)] = 5533,
  [SMALL_STATE(247)] = 5539,
  [SMALL_STATE(248)] = 5545,
  [SMALL_STATE(249)] = 5555,
  [SMALL_STATE(250)] = 5561,
  [SMALL_STATE(251)] = 5571,
  [SMALL_STATE(252)] = 5579,
  [SMALL_STATE(253)] = 5589,
  [SMALL_STATE(254)] = 5595,
  [SMALL_STATE(255)] = 5605,
  [SMALL_STATE(256)] = 5615,
  [SMALL_STATE(257)] = 5621,
  [SMALL_STATE(258)] = 5631,
  [SMALL_STATE(259)] = 5641,
  [SMALL_STATE(260)] = 5651,
  [SMALL_STATE(261)] = 5657,
  [SMALL_STATE(262)] = 5663,
  [SMALL_STATE(263)] = 5669,
  [SMALL_STATE(264)] = 5675,
  [SMALL_STATE(265)] = 5685,
  [SMALL_STATE(266)] = 5695,
  [SMALL_STATE(267)] = 5705,
  [SMALL_STATE(268)] = 5711,
  [SMALL_STATE(269)] = 5721,
  [SMALL_STATE(270)] = 5727,
  [SMALL_STATE(271)] = 5733,
  [SMALL_STATE(272)] = 5743,
  [SMALL_STATE(273)] = 5753,
  [SMALL_STATE(274)] = 5759,
  [SMALL_STATE(275)] = 5767,
  [SMALL_STATE(276)] = 5777,
  [SMALL_STATE(277)] = 5787,
  [SMALL_STATE(278)] = 5792,
  [SMALL_STATE(279)] = 5797,
  [SMALL_STATE(280)] = 5804,
  [SMALL_STATE(281)] = 5811,
  [SMALL_STATE(282)] = 5818,
  [SMALL_STATE(283)] = 5823,
  [SMALL_STATE(284)] = 5828,
  [SMALL_STATE(285)] = 5833,
  [SMALL_STATE(286)] = 5840,
  [SMALL_STATE(287)] = 5845,
  [SMALL_STATE(288)] = 5852,
  [SMALL_STATE(289)] = 5859,
  [SMALL_STATE(290)] = 5864,
  [SMALL_STATE(291)] = 5871,
  [SMALL_STATE(292)] = 5876,
  [SMALL_STATE(293)] = 5881,
  [SMALL_STATE(294)] = 5886,
  [SMALL_STATE(295)] = 5891,
  [SMALL_STATE(296)] = 5898,
  [SMALL_STATE(297)] = 5903,
  [SMALL_STATE(298)] = 5908,
  [SMALL_STATE(299)] = 5913,
  [SMALL_STATE(300)] = 5918,
  [SMALL_STATE(301)] = 5923,
  [SMALL_STATE(302)] = 5930,
  [SMALL_STATE(303)] = 5935,
  [SMALL_STATE(304)] = 5940,
  [SMALL_STATE(305)] = 5945,
  [SMALL_STATE(306)] = 5950,
  [SMALL_STATE(307)] = 5955,
  [SMALL_STATE(308)] = 5960,
  [SMALL_STATE(309)] = 5965,
  [SMALL_STATE(310)] = 5969,
  [SMALL_STATE(311)] = 5973,
  [SMALL_STATE(312)] = 5977,
  [SMALL_STATE(313)] = 5981,
  [SMALL_STATE(314)] = 5985,
  [SMALL_STATE(315)] = 5989,
  [SMALL_STATE(316)] = 5993,
  [SMALL_STATE(317)] = 5997,
  [SMALL_STATE(318)] = 6001,
  [SMALL_STATE(319)] = 6005,
  [SMALL_STATE(320)] = 6009,
  [SMALL_STATE(321)] = 6013,
  [SMALL_STATE(322)] = 6017,
  [SMALL_STATE(323)] = 6021,
  [SMALL_STATE(324)] = 6025,
  [SMALL_STATE(325)] = 6029,
  [SMALL_STATE(326)] = 6033,
  [SMALL_STATE(327)] = 6037,
  [SMALL_STATE(328)] = 6041,
  [SMALL_STATE(329)] = 6045,
  [SMALL_STATE(330)] = 6049,
  [SMALL_STATE(331)] = 6053,
  [SMALL_STATE(332)] = 6057,
  [SMALL_STATE(333)] = 6061,
  [SMALL_STATE(334)] = 6065,
  [SMALL_STATE(335)] = 6069,
  [SMALL_STATE(336)] = 6073,
  [SMALL_STATE(337)] = 6077,
  [SMALL_STATE(338)] = 6081,
  [SMALL_STATE(339)] = 6085,
  [SMALL_STATE(340)] = 6089,
  [SMALL_STATE(341)] = 6093,
  [SMALL_STATE(342)] = 6097,
  [SMALL_STATE(343)] = 6101,
  [SMALL_STATE(344)] = 6105,
  [SMALL_STATE(345)] = 6109,
  [SMALL_STATE(346)] = 6113,
  [SMALL_STATE(347)] = 6117,
  [SMALL_STATE(348)] = 6121,
  [SMALL_STATE(349)] = 6125,
  [SMALL_STATE(350)] = 6129,
  [SMALL_STATE(351)] = 6133,
  [SMALL_STATE(352)] = 6137,
  [SMALL_STATE(353)] = 6141,
  [SMALL_STATE(354)] = 6145,
  [SMALL_STATE(355)] = 6149,
  [SMALL_STATE(356)] = 6153,
  [SMALL_STATE(357)] = 6157,
  [SMALL_STATE(358)] = 6161,
  [SMALL_STATE(359)] = 6165,
  [SMALL_STATE(360)] = 6169,
  [SMALL_STATE(361)] = 6173,
  [SMALL_STATE(362)] = 6177,
  [SMALL_STATE(363)] = 6181,
  [SMALL_STATE(364)] = 6185,
  [SMALL_STATE(365)] = 6189,
  [SMALL_STATE(366)] = 6193,
  [SMALL_STATE(367)] = 6197,
  [SMALL_STATE(368)] = 6201,
  [SMALL_STATE(369)] = 6205,
  [SMALL_STATE(370)] = 6209,
  [SMALL_STATE(371)] = 6213,
  [SMALL_STATE(372)] = 6217,
  [SMALL_STATE(373)] = 6221,
  [SMALL_STATE(374)] = 6225,
  [SMALL_STATE(375)] = 6229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_in, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(363),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apex_identifier, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apex_identifier, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(344),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apex_identifier_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apex_identifier_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apex_identifier_repeat1, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apex_identifier_repeat1, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apex_identifier, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apex_identifier, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apex_identifier_repeat1, 2), SHIFT_REPEAT(287),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apex_identifier_repeat1, 2), SHIFT_REPEAT(355),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apex_method_identifier, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apex_method_identifier, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(211),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bound_apex_expression, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bound_apex_expression, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(24),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_comparison_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_comparison_repeat1, 2), SHIFT_REPEAT(11),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__set_comparison_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2), SHIFT_REPEAT(25),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_boolean_expression, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2), SHIFT_REPEAT(279),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2), SHIFT_REPEAT(271),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 7),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_and_expression, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_or_expression, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_comparison_expression, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_having_comparison_expression, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2), SHIFT_REPEAT(36),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(35),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_value_comparison, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_value_comparison, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2), SHIFT_REPEAT(28),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 8),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_not_expression, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(314),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_scope, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apex_identifier_repeat1, 2), SHIFT_REPEAT(290),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apex_identifier_repeat1, 2), SHIFT_REPEAT(366),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 9),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2), SHIFT_REPEAT(273),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2), SHIFT_REPEAT(369),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_comparison_repeat1, 2), SHIFT_REPEAT(10),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(281),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 10),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2), SHIFT_REPEAT(294),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(22),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2), SHIFT_REPEAT(255),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(33),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2), SHIFT_REPEAT(226),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2), SHIFT_REPEAT(18),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2), SHIFT_REPEAT(330),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 11),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__with_record_visibility_param, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [814] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
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
