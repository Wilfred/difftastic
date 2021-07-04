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
#define STATE_COUNT 393
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 5
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_function_statement_token1 = 2,
  aux_sym_create_function_statement_token2 = 3,
  aux_sym_create_function_statement_token3 = 4,
  aux_sym_create_function_statement_token4 = 5,
  aux_sym__function_optimizer_hint_token1 = 6,
  aux_sym__function_optimizer_hint_token2 = 7,
  aux_sym__function_optimizer_hint_token3 = 8,
  aux_sym__function_language_token1 = 9,
  aux_sym_setof_token1 = 10,
  anon_sym_EQ = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  aux_sym_function_body_token1 = 15,
  anon_sym_DOLLAR_DOLLAR = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_create_domain_statement_token1 = 18,
  aux_sym_create_type_statement_token1 = 19,
  aux_sym_create_index_statement_token1 = 20,
  aux_sym_create_index_statement_token2 = 21,
  anon_sym_CONSTRAINT = 22,
  aux_sym_column_default_token1 = 23,
  aux_sym_table_constraint_check_token1 = 24,
  aux_sym_table_constraint_foreign_key_token1 = 25,
  aux_sym_table_constraint_foreign_key_token2 = 26,
  aux_sym_table_constraint_unique_token1 = 27,
  aux_sym_table_constraint_primary_key_token1 = 28,
  aux_sym_create_table_statement_token1 = 29,
  aux_sym_using_clause_token1 = 30,
  aux_sym_group_by_clause_token1 = 31,
  aux_sym_group_by_clause_token2 = 32,
  aux_sym_order_by_clause_token1 = 33,
  aux_sym_where_clause_token1 = 34,
  aux_sym_select_clause_token1 = 35,
  aux_sym_from_clause_token1 = 36,
  aux_sym_join_type_token1 = 37,
  aux_sym_join_type_token2 = 38,
  aux_sym_join_type_token3 = 39,
  aux_sym_join_type_token4 = 40,
  aux_sym_join_type_token5 = 41,
  aux_sym_join_clause_token1 = 42,
  aux_sym_update_statement_token1 = 43,
  aux_sym_set_clause_token1 = 44,
  aux_sym_insert_statement_token1 = 45,
  aux_sym_insert_statement_token2 = 46,
  aux_sym_values_clause_token1 = 47,
  aux_sym_in_expression_token1 = 48,
  aux_sym_in_expression_token2 = 49,
  aux_sym_references_constraint_token1 = 50,
  aux_sym_on_delete_action_token1 = 51,
  aux_sym__constraint_action_token1 = 52,
  aux_sym__constraint_action_token2 = 53,
  aux_sym__constraint_action_token3 = 54,
  anon_sym_LT = 55,
  anon_sym_LT_EQ = 56,
  anon_sym_LT_GT = 57,
  anon_sym_GT = 58,
  anon_sym_GT_EQ = 59,
  aux_sym_is_expression_token1 = 60,
  aux_sym_distinct_from_token1 = 61,
  aux_sym_boolean_expression_token1 = 62,
  aux_sym_boolean_expression_token2 = 63,
  aux_sym_TRUE_token1 = 64,
  aux_sym_FALSE_token1 = 65,
  aux_sym_number_token1 = 66,
  sym_identifier = 67,
  aux_sym_string_token1 = 68,
  aux_sym_string_token2 = 69,
  anon_sym_DASH_GT_GT = 70,
  aux_sym_ordered_expression_token1 = 71,
  aux_sym_ordered_expression_token2 = 72,
  anon_sym_LBRACK = 73,
  anon_sym_RBRACK = 74,
  anon_sym_COLON_COLON = 75,
  sym_comment = 76,
  anon_sym_TILDE = 77,
  anon_sym_PLUS = 78,
  anon_sym_DOLLAR = 79,
  sym_source_file = 80,
  sym__statement = 81,
  sym_create_function_statement = 82,
  sym__function_optimizer_hint = 83,
  sym__function_language = 84,
  sym__create_function_return_type = 85,
  sym_setof = 86,
  sym_constrained_type = 87,
  sym_create_function_parameter = 88,
  sym_create_function_parameters = 89,
  sym_function_body = 90,
  sym_create_domain_statement = 91,
  sym_create_type_statement = 92,
  sym_create_index_statement = 93,
  sym_create_table_column_parameter = 94,
  sym_named_constraint = 95,
  sym_column_default = 96,
  sym_create_table_parameters = 97,
  sym__table_constraint = 98,
  sym_table_constraint_check = 99,
  sym_table_constraint_foreign_key = 100,
  sym_table_constraint_unique = 101,
  sym_table_constraint_primary_key = 102,
  sym_primary_key_constraint = 103,
  sym_create_table_statement = 104,
  sym_using_clause = 105,
  sym_index_table_parameters = 106,
  sym_select_statement = 107,
  sym_group_by_clause_body = 108,
  sym_group_by_clause = 109,
  sym_order_by_clause_body = 110,
  sym_order_by_clause = 111,
  sym_where_clause = 112,
  sym__aliased_expression = 113,
  sym__aliasable_expression = 114,
  sym_select_clause_body = 115,
  sym_select_clause = 116,
  sym_from_clause = 117,
  sym_join_type = 118,
  sym_join_clause = 119,
  sym_select_subexpression = 120,
  sym_update_statement = 121,
  sym_set_clause = 122,
  sym_set_clause_body = 123,
  sym_assigment_expression = 124,
  sym_insert_statement = 125,
  sym_values_clause = 126,
  sym_values_clause_body = 127,
  sym_in_expression = 128,
  sym_tuple = 129,
  sym_references_constraint = 130,
  sym_on_update_action = 131,
  sym_on_delete_action = 132,
  sym__constraint_action = 133,
  sym_unique_constraint = 134,
  sym_null_constraint = 135,
  sym_check_constraint = 136,
  sym_parameter = 137,
  sym_parameters = 138,
  sym_function_call = 139,
  sym_comparison_operator = 140,
  sym__parenthesized_expression = 141,
  sym_is_expression = 142,
  sym_distinct_from = 143,
  sym_boolean_expression = 144,
  sym_NULL = 145,
  sym_TRUE = 146,
  sym_FALSE = 147,
  sym_number = 148,
  sym_string = 149,
  sym_field_access = 150,
  sym_ordered_expression = 151,
  sym__type_alias = 152,
  sym_array_type = 153,
  sym__type = 154,
  sym_type_cast = 155,
  sym_binary_expression = 156,
  sym_argument_reference = 157,
  sym__expression = 158,
  aux_sym_source_file_repeat1 = 159,
  aux_sym_create_function_statement_repeat1 = 160,
  aux_sym_create_function_parameters_repeat1 = 161,
  aux_sym_create_domain_statement_repeat1 = 162,
  aux_sym_create_table_column_parameter_repeat1 = 163,
  aux_sym_create_table_parameters_repeat1 = 164,
  aux_sym_table_constraint_foreign_key_repeat1 = 165,
  aux_sym_index_table_parameters_repeat1 = 166,
  aux_sym_select_statement_repeat1 = 167,
  aux_sym_group_by_clause_body_repeat1 = 168,
  aux_sym_select_clause_body_repeat1 = 169,
  aux_sym_set_clause_body_repeat1 = 170,
  aux_sym_parameters_repeat1 = 171,
  anon_alias_sym_NULL = 172,
  anon_alias_sym_ON_UPDATE = 173,
  alias_sym_default = 174,
  alias_sym_language = 175,
  alias_sym_type = 176,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_function_statement_token1] = "CREATE",
  [aux_sym_create_function_statement_token2] = "CREATE_OR_REPLACE_FUNCTION",
  [aux_sym_create_function_statement_token3] = "CREATE_OR_REPLACE_FUNCTION",
  [aux_sym_create_function_statement_token4] = "RETURNS",
  [aux_sym__function_optimizer_hint_token1] = "VOLATILE",
  [aux_sym__function_optimizer_hint_token2] = "IMMUTABLE",
  [aux_sym__function_optimizer_hint_token3] = "STABLE",
  [aux_sym__function_language_token1] = "LANGUAGE",
  [aux_sym_setof_token1] = "SETOF",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_function_body_token1] = "AS",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_create_domain_statement_token1] = "CREATE_DOMAIN",
  [aux_sym_create_type_statement_token1] = "CREATE_TYPE",
  [aux_sym_create_index_statement_token1] = "INDEX",
  [aux_sym_create_index_statement_token2] = "ON",
  [anon_sym_CONSTRAINT] = "CONSTRAINT",
  [aux_sym_column_default_token1] = "DEFAULT",
  [aux_sym_table_constraint_check_token1] = "CHECK",
  [aux_sym_table_constraint_foreign_key_token1] = "FOREIGN_KEY",
  [aux_sym_table_constraint_foreign_key_token2] = "PRIMARY_KEY",
  [aux_sym_table_constraint_unique_token1] = "UNIQUE",
  [aux_sym_table_constraint_primary_key_token1] = "PRIMARY_KEY",
  [aux_sym_create_table_statement_token1] = "CREATE_TABLE",
  [aux_sym_using_clause_token1] = "USING",
  [aux_sym_group_by_clause_token1] = "GROUP_BY",
  [aux_sym_group_by_clause_token2] = "GROUP_BY",
  [aux_sym_order_by_clause_token1] = "ORDER_BY",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_select_clause_token1] = "SELECT",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_join_type_token1] = "INNER",
  [aux_sym_join_type_token2] = "LEFT",
  [aux_sym_join_type_token3] = "RIGHT",
  [aux_sym_join_type_token4] = "FULL",
  [aux_sym_join_type_token5] = "OUTER",
  [aux_sym_join_clause_token1] = "JOIN",
  [aux_sym_update_statement_token1] = "UPDATE",
  [aux_sym_set_clause_token1] = "SET",
  [aux_sym_insert_statement_token1] = "INSERT",
  [aux_sym_insert_statement_token2] = "INTO",
  [aux_sym_values_clause_token1] = "VALUES",
  [aux_sym_in_expression_token1] = "NOT",
  [aux_sym_in_expression_token2] = "IN",
  [aux_sym_references_constraint_token1] = "REFERENCES",
  [aux_sym_on_delete_action_token1] = "ON_DELETE",
  [aux_sym__constraint_action_token1] = "RESTRICT",
  [aux_sym__constraint_action_token2] = "CASCADE",
  [aux_sym__constraint_action_token3] = "SET_NULL",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_is_expression_token1] = "IS",
  [aux_sym_distinct_from_token1] = "DISTINCT_FROM",
  [aux_sym_boolean_expression_token1] = "AND",
  [aux_sym_boolean_expression_token2] = "OR",
  [aux_sym_TRUE_token1] = "TRUE",
  [aux_sym_FALSE_token1] = "FALSE",
  [aux_sym_number_token1] = "number_token1",
  [sym_identifier] = "identifier",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DASH_GT_GT] = "->>",
  [aux_sym_ordered_expression_token1] = "ASC",
  [aux_sym_ordered_expression_token2] = "DESC",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_COLON] = "::",
  [sym_comment] = "comment",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOLLAR] = "$",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_create_function_statement] = "create_function_statement",
  [sym__function_optimizer_hint] = "optimizer_hint",
  [sym__function_language] = "_function_language",
  [sym__create_function_return_type] = "_create_function_return_type",
  [sym_setof] = "setof",
  [sym_constrained_type] = "constrained_type",
  [sym_create_function_parameter] = "create_function_parameter",
  [sym_create_function_parameters] = "create_function_parameters",
  [sym_function_body] = "function_body",
  [sym_create_domain_statement] = "create_domain_statement",
  [sym_create_type_statement] = "create_type_statement",
  [sym_create_index_statement] = "create_index_statement",
  [sym_create_table_column_parameter] = "create_table_column_parameter",
  [sym_named_constraint] = "named_constraint",
  [sym_column_default] = "column_default",
  [sym_create_table_parameters] = "create_table_parameters",
  [sym__table_constraint] = "_table_constraint",
  [sym_table_constraint_check] = "check",
  [sym_table_constraint_foreign_key] = "foreign_key",
  [sym_table_constraint_unique] = "unique",
  [sym_table_constraint_primary_key] = "primary_key",
  [sym_primary_key_constraint] = "primary_key_constraint",
  [sym_create_table_statement] = "create_table_statement",
  [sym_using_clause] = "using_clause",
  [sym_index_table_parameters] = "index_table_parameters",
  [sym_select_statement] = "select_statement",
  [sym_group_by_clause_body] = "group_by_clause_body",
  [sym_group_by_clause] = "group_by_clause",
  [sym_order_by_clause_body] = "order_by_clause_body",
  [sym_order_by_clause] = "order_by_clause",
  [sym_where_clause] = "where_clause",
  [sym__aliased_expression] = "alias",
  [sym__aliasable_expression] = "_aliasable_expression",
  [sym_select_clause_body] = "select_clause_body",
  [sym_select_clause] = "select_clause",
  [sym_from_clause] = "from_clause",
  [sym_join_type] = "join_type",
  [sym_join_clause] = "join_clause",
  [sym_select_subexpression] = "select_subexpression",
  [sym_update_statement] = "update_statement",
  [sym_set_clause] = "set_clause",
  [sym_set_clause_body] = "set_clause_body",
  [sym_assigment_expression] = "assigment_expression",
  [sym_insert_statement] = "insert_statement",
  [sym_values_clause] = "values_clause",
  [sym_values_clause_body] = "values_clause_body",
  [sym_in_expression] = "in_expression",
  [sym_tuple] = "tuple",
  [sym_references_constraint] = "references_constraint",
  [sym_on_update_action] = "on_update_action",
  [sym_on_delete_action] = "on_delete_action",
  [sym__constraint_action] = "_constraint_action",
  [sym_unique_constraint] = "unique_constraint",
  [sym_null_constraint] = "null_constraint",
  [sym_check_constraint] = "check_constraint",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_function_call] = "function_call",
  [sym_comparison_operator] = "comparison_operator",
  [sym__parenthesized_expression] = "_parenthesized_expression",
  [sym_is_expression] = "is_expression",
  [sym_distinct_from] = "distinct_from",
  [sym_boolean_expression] = "boolean_expression",
  [sym_NULL] = "NULL",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_field_access] = "field_access",
  [sym_ordered_expression] = "ordered_expression",
  [sym__type_alias] = "_type_alias",
  [sym_array_type] = "array_type",
  [sym__type] = "_type",
  [sym_type_cast] = "type_cast",
  [sym_binary_expression] = "binary_expression",
  [sym_argument_reference] = "argument_reference",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_function_statement_repeat1] = "create_function_statement_repeat1",
  [aux_sym_create_function_parameters_repeat1] = "create_function_parameters_repeat1",
  [aux_sym_create_domain_statement_repeat1] = "create_domain_statement_repeat1",
  [aux_sym_create_table_column_parameter_repeat1] = "create_table_column_parameter_repeat1",
  [aux_sym_create_table_parameters_repeat1] = "create_table_parameters_repeat1",
  [aux_sym_table_constraint_foreign_key_repeat1] = "table_constraint_foreign_key_repeat1",
  [aux_sym_index_table_parameters_repeat1] = "index_table_parameters_repeat1",
  [aux_sym_select_statement_repeat1] = "select_statement_repeat1",
  [aux_sym_group_by_clause_body_repeat1] = "group_by_clause_body_repeat1",
  [aux_sym_select_clause_body_repeat1] = "select_clause_body_repeat1",
  [aux_sym_set_clause_body_repeat1] = "set_clause_body_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [anon_alias_sym_NULL] = "NULL",
  [anon_alias_sym_ON_UPDATE] = "ON_UPDATE",
  [alias_sym_default] = "default",
  [alias_sym_language] = "language",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_function_statement_token1] = aux_sym_create_function_statement_token1,
  [aux_sym_create_function_statement_token2] = aux_sym_create_function_statement_token2,
  [aux_sym_create_function_statement_token3] = aux_sym_create_function_statement_token2,
  [aux_sym_create_function_statement_token4] = aux_sym_create_function_statement_token4,
  [aux_sym__function_optimizer_hint_token1] = aux_sym__function_optimizer_hint_token1,
  [aux_sym__function_optimizer_hint_token2] = aux_sym__function_optimizer_hint_token2,
  [aux_sym__function_optimizer_hint_token3] = aux_sym__function_optimizer_hint_token3,
  [aux_sym__function_language_token1] = aux_sym__function_language_token1,
  [aux_sym_setof_token1] = aux_sym_setof_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_function_body_token1] = aux_sym_function_body_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_create_domain_statement_token1] = aux_sym_create_domain_statement_token1,
  [aux_sym_create_type_statement_token1] = aux_sym_create_type_statement_token1,
  [aux_sym_create_index_statement_token1] = aux_sym_create_index_statement_token1,
  [aux_sym_create_index_statement_token2] = aux_sym_create_index_statement_token2,
  [anon_sym_CONSTRAINT] = anon_sym_CONSTRAINT,
  [aux_sym_column_default_token1] = aux_sym_column_default_token1,
  [aux_sym_table_constraint_check_token1] = aux_sym_table_constraint_check_token1,
  [aux_sym_table_constraint_foreign_key_token1] = aux_sym_table_constraint_foreign_key_token1,
  [aux_sym_table_constraint_foreign_key_token2] = aux_sym_table_constraint_foreign_key_token2,
  [aux_sym_table_constraint_unique_token1] = aux_sym_table_constraint_unique_token1,
  [aux_sym_table_constraint_primary_key_token1] = aux_sym_table_constraint_foreign_key_token2,
  [aux_sym_create_table_statement_token1] = aux_sym_create_table_statement_token1,
  [aux_sym_using_clause_token1] = aux_sym_using_clause_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
  [aux_sym_group_by_clause_token2] = aux_sym_group_by_clause_token1,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_join_type_token1] = aux_sym_join_type_token1,
  [aux_sym_join_type_token2] = aux_sym_join_type_token2,
  [aux_sym_join_type_token3] = aux_sym_join_type_token3,
  [aux_sym_join_type_token4] = aux_sym_join_type_token4,
  [aux_sym_join_type_token5] = aux_sym_join_type_token5,
  [aux_sym_join_clause_token1] = aux_sym_join_clause_token1,
  [aux_sym_update_statement_token1] = aux_sym_update_statement_token1,
  [aux_sym_set_clause_token1] = aux_sym_set_clause_token1,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_insert_statement_token2] = aux_sym_insert_statement_token2,
  [aux_sym_values_clause_token1] = aux_sym_values_clause_token1,
  [aux_sym_in_expression_token1] = aux_sym_in_expression_token1,
  [aux_sym_in_expression_token2] = aux_sym_in_expression_token2,
  [aux_sym_references_constraint_token1] = aux_sym_references_constraint_token1,
  [aux_sym_on_delete_action_token1] = aux_sym_on_delete_action_token1,
  [aux_sym__constraint_action_token1] = aux_sym__constraint_action_token1,
  [aux_sym__constraint_action_token2] = aux_sym__constraint_action_token2,
  [aux_sym__constraint_action_token3] = aux_sym__constraint_action_token3,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_is_expression_token1] = aux_sym_is_expression_token1,
  [aux_sym_distinct_from_token1] = aux_sym_distinct_from_token1,
  [aux_sym_boolean_expression_token1] = aux_sym_boolean_expression_token1,
  [aux_sym_boolean_expression_token2] = aux_sym_boolean_expression_token2,
  [aux_sym_TRUE_token1] = aux_sym_TRUE_token1,
  [aux_sym_FALSE_token1] = aux_sym_FALSE_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [sym_identifier] = sym_identifier,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DASH_GT_GT] = anon_sym_DASH_GT_GT,
  [aux_sym_ordered_expression_token1] = aux_sym_ordered_expression_token1,
  [aux_sym_ordered_expression_token2] = aux_sym_ordered_expression_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_comment] = sym_comment,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_create_function_statement] = sym_create_function_statement,
  [sym__function_optimizer_hint] = sym__function_optimizer_hint,
  [sym__function_language] = sym__function_language,
  [sym__create_function_return_type] = sym__create_function_return_type,
  [sym_setof] = sym_setof,
  [sym_constrained_type] = sym_constrained_type,
  [sym_create_function_parameter] = sym_create_function_parameter,
  [sym_create_function_parameters] = sym_create_function_parameters,
  [sym_function_body] = sym_function_body,
  [sym_create_domain_statement] = sym_create_domain_statement,
  [sym_create_type_statement] = sym_create_type_statement,
  [sym_create_index_statement] = sym_create_index_statement,
  [sym_create_table_column_parameter] = sym_create_table_column_parameter,
  [sym_named_constraint] = sym_named_constraint,
  [sym_column_default] = sym_column_default,
  [sym_create_table_parameters] = sym_create_table_parameters,
  [sym__table_constraint] = sym__table_constraint,
  [sym_table_constraint_check] = sym_table_constraint_check,
  [sym_table_constraint_foreign_key] = sym_table_constraint_foreign_key,
  [sym_table_constraint_unique] = sym_table_constraint_unique,
  [sym_table_constraint_primary_key] = sym_table_constraint_primary_key,
  [sym_primary_key_constraint] = sym_primary_key_constraint,
  [sym_create_table_statement] = sym_create_table_statement,
  [sym_using_clause] = sym_using_clause,
  [sym_index_table_parameters] = sym_index_table_parameters,
  [sym_select_statement] = sym_select_statement,
  [sym_group_by_clause_body] = sym_group_by_clause_body,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym_order_by_clause_body] = sym_order_by_clause_body,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_where_clause] = sym_where_clause,
  [sym__aliased_expression] = sym__aliased_expression,
  [sym__aliasable_expression] = sym__aliasable_expression,
  [sym_select_clause_body] = sym_select_clause_body,
  [sym_select_clause] = sym_select_clause,
  [sym_from_clause] = sym_from_clause,
  [sym_join_type] = sym_join_type,
  [sym_join_clause] = sym_join_clause,
  [sym_select_subexpression] = sym_select_subexpression,
  [sym_update_statement] = sym_update_statement,
  [sym_set_clause] = sym_set_clause,
  [sym_set_clause_body] = sym_set_clause_body,
  [sym_assigment_expression] = sym_assigment_expression,
  [sym_insert_statement] = sym_insert_statement,
  [sym_values_clause] = sym_values_clause,
  [sym_values_clause_body] = sym_values_clause_body,
  [sym_in_expression] = sym_in_expression,
  [sym_tuple] = sym_tuple,
  [sym_references_constraint] = sym_references_constraint,
  [sym_on_update_action] = sym_on_update_action,
  [sym_on_delete_action] = sym_on_delete_action,
  [sym__constraint_action] = sym__constraint_action,
  [sym_unique_constraint] = sym_unique_constraint,
  [sym_null_constraint] = sym_null_constraint,
  [sym_check_constraint] = sym_check_constraint,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_function_call] = sym_function_call,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym__parenthesized_expression] = sym__parenthesized_expression,
  [sym_is_expression] = sym_is_expression,
  [sym_distinct_from] = sym_distinct_from,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_NULL] = sym_NULL,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_field_access] = sym_field_access,
  [sym_ordered_expression] = sym_ordered_expression,
  [sym__type_alias] = sym__type_alias,
  [sym_array_type] = sym_array_type,
  [sym__type] = sym__type,
  [sym_type_cast] = sym_type_cast,
  [sym_binary_expression] = sym_binary_expression,
  [sym_argument_reference] = sym_argument_reference,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_function_statement_repeat1] = aux_sym_create_function_statement_repeat1,
  [aux_sym_create_function_parameters_repeat1] = aux_sym_create_function_parameters_repeat1,
  [aux_sym_create_domain_statement_repeat1] = aux_sym_create_domain_statement_repeat1,
  [aux_sym_create_table_column_parameter_repeat1] = aux_sym_create_table_column_parameter_repeat1,
  [aux_sym_create_table_parameters_repeat1] = aux_sym_create_table_parameters_repeat1,
  [aux_sym_table_constraint_foreign_key_repeat1] = aux_sym_table_constraint_foreign_key_repeat1,
  [aux_sym_index_table_parameters_repeat1] = aux_sym_index_table_parameters_repeat1,
  [aux_sym_select_statement_repeat1] = aux_sym_select_statement_repeat1,
  [aux_sym_group_by_clause_body_repeat1] = aux_sym_group_by_clause_body_repeat1,
  [aux_sym_select_clause_body_repeat1] = aux_sym_select_clause_body_repeat1,
  [aux_sym_set_clause_body_repeat1] = aux_sym_set_clause_body_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [anon_alias_sym_NULL] = anon_alias_sym_NULL,
  [anon_alias_sym_ON_UPDATE] = anon_alias_sym_ON_UPDATE,
  [alias_sym_default] = alias_sym_default,
  [alias_sym_language] = alias_sym_language,
  [alias_sym_type] = alias_sym_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_statement_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__function_optimizer_hint_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__function_optimizer_hint_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__function_optimizer_hint_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__function_language_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_setof_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_body_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_domain_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_type_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_index_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_index_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONSTRAINT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_default_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_constraint_check_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_constraint_foreign_key_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_constraint_foreign_key_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_constraint_unique_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_constraint_primary_key_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_table_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_clause_token1] = {
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
  [aux_sym_order_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_update_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_values_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_expression_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_references_constraint_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_on_delete_action_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__constraint_action_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__constraint_action_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__constraint_action_token3] = {
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
  [anon_sym_LT_GT] = {
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
  [aux_sym_is_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_distinct_from_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_expression_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_TRUE_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_FALSE_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ordered_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ordered_expression_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_create_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__function_optimizer_hint] = {
    .visible = true,
    .named = true,
  },
  [sym__function_language] = {
    .visible = false,
    .named = true,
  },
  [sym__create_function_return_type] = {
    .visible = false,
    .named = true,
  },
  [sym_setof] = {
    .visible = true,
    .named = true,
  },
  [sym_constrained_type] = {
    .visible = true,
    .named = true,
  },
  [sym_create_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_create_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_create_domain_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create_type_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create_index_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create_table_column_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_named_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_column_default] = {
    .visible = true,
    .named = true,
  },
  [sym_create_table_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__table_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym_table_constraint_check] = {
    .visible = true,
    .named = true,
  },
  [sym_table_constraint_foreign_key] = {
    .visible = true,
    .named = true,
  },
  [sym_table_constraint_unique] = {
    .visible = true,
    .named = true,
  },
  [sym_table_constraint_primary_key] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_key_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_create_table_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_using_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_index_table_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__aliased_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__aliasable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_select_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_join_type] = {
    .visible = true,
    .named = true,
  },
  [sym_join_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_select_subexpression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_set_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_assigment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_values_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_values_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_in_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_references_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_on_update_action] = {
    .visible = true,
    .named = true,
  },
  [sym_on_delete_action] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint_action] = {
    .visible = false,
    .named = true,
  },
  [sym_unique_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_null_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_check_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__parenthesized_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_is_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_distinct_from] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_NULL] = {
    .visible = true,
    .named = true,
  },
  [sym_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_ordered_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__type_alias] = {
    .visible = false,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_type_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_function_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_domain_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_table_column_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_table_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_constraint_foreign_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_index_table_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_by_clause_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_clause_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_ON_UPDATE] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_default] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_language] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_action = 1,
  field_arguments = 2,
  field_content = 3,
  field_elements = 4,
  field_function = 5,
  field_name = 6,
  field_operator = 7,
  field_order = 8,
  field_replace = 9,
  field_table = 10,
  field_type = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_arguments] = "arguments",
  [field_content] = "content",
  [field_elements] = "elements",
  [field_function] = "function",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_order] = "order",
  [field_replace] = "replace",
  [field_table] = "table",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 3, .length = 1},
  [11] = {.index = 4, .length = 2},
  [13] = {.index = 6, .length = 2},
  [14] = {.index = 8, .length = 2},
  [15] = {.index = 10, .length = 3},
  [16] = {.index = 13, .length = 1},
  [18] = {.index = 14, .length = 1},
  [20] = {.index = 15, .length = 1},
  [21] = {.index = 16, .length = 2},
  [22] = {.index = 18, .length = 2},
  [25] = {.index = 20, .length = 1},
  [27] = {.index = 21, .length = 1},
  [28] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
  [1] =
    {field_function, 0},
  [2] =
    {field_type, 2},
  [3] =
    {field_operator, 1},
  [4] =
    {field_arguments, 2},
    {field_function, 0},
  [6] =
    {field_name, 2},
    {field_table, 4},
  [8] =
    {field_name, 0},
    {field_type, 1},
  [10] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [13] =
    {field_elements, 1},
  [14] =
    {field_replace, 1},
  [15] =
    {field_type, 1},
  [16] =
    {field_name, 3},
    {field_table, 5},
  [18] =
    {field_elements, 1},
    {field_elements, 2},
  [20] =
    {field_order, 1},
  [21] =
    {field_action, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_NULL,
  },
  [2] = {
    [0] = aux_sym_create_domain_statement_token1,
  },
  [3] = {
    [0] = aux_sym_create_table_statement_token1,
  },
  [6] = {
    [0] = alias_sym_type,
  },
  [9] = {
    [1] = aux_sym_order_by_clause_token1,
  },
  [10] = {
    [0] = aux_sym_create_type_statement_token1,
  },
  [12] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [17] = {
    [1] = aux_sym_distinct_from_token1,
  },
  [18] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [19] = {
    [2] = alias_sym_default,
  },
  [23] = {
    [3] = alias_sym_default,
  },
  [24] = {
    [1] = alias_sym_language,
  },
  [26] = {
    [1] = aux_sym_table_constraint_foreign_key_token1,
  },
  [27] = {
    [0] = anon_alias_sym_ON_UPDATE,
    [1] = anon_alias_sym_ON_UPDATE,
  },
  [28] = {
    [0] = aux_sym_on_delete_action_token1,
  },
  [29] = {
    [0] = aux_sym__constraint_action_token3,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__expression, 2,
    sym__expression,
    alias_sym_default,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      if (lookahead == '$') ADVANCE(476);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == '[') ADVANCE(468);
      if (lookahead == '\\') SKIP(255)
      if (lookahead == ']') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == '~') ADVANCE(474);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(250);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(48);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(189);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(101);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 18:
      if (lookahead == '$') ADVANCE(476);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(357);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(425);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(407);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(412);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(476);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(358);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(476);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(358);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(282);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == '/') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(460);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '[') ADVANCE(468);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(248);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(471);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(473);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(427);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(470);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(465);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(288);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 123:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(224);
      END_STATE();
    case 127:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 128:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(122);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(237);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 129:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 130:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 133:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 135:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 136:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 148:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(290);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 165:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 166:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 167:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 168:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 196:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(301);
      END_STATE();
    case 197:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 198:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 199:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(247);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      END_STATE();
    case 218:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      END_STATE();
    case 222:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 240:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 241:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 242:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 243:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 244:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 245:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 246:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 247:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 248:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 249:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(286);
      END_STATE();
    case 250:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 251:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 252:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(462);
      END_STATE();
    case 254:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 255:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(254)
      END_STATE();
    case 256:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(263)
      END_STATE();
    case 257:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(263)
      if (lookahead == '\r') SKIP(256)
      END_STATE();
    case 258:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(262)
      END_STATE();
    case 259:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(262)
      if (lookahead == '\r') SKIP(258)
      END_STATE();
    case 260:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(264)
      END_STATE();
    case 261:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(264)
      if (lookahead == '\r') SKIP(260)
      END_STATE();
    case 262:
      if (eof) ADVANCE(265);
      if (lookahead == '$') ADVANCE(476);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '\\') SKIP(259)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(357);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(425);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(404);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(412);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(262)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 263:
      if (eof) ADVANCE(265);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == '[') ADVANCE(468);
      if (lookahead == '\\') SKIP(257)
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '~') ADVANCE(474);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(206);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(189);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(194);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(263)
      END_STATE();
    case 264:
      if (eof) ADVANCE(265);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == '[') ADVANCE(468);
      if (lookahead == '\\') SKIP(261)
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '~') ADVANCE(474);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(264)
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token4);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_join_type_token5);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_set_clause_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_values_clause_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '>') ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(455);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(455);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(455);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead == '/') ADVANCE(455);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(455);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '/') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(455);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(460);
      if (lookahead == '\r') ADVANCE(457);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(460);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == '$') ADVANCE(472);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == '/') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(460);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == '$') ADVANCE(473);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(282);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 263},
  [3] = {.lex_state = 263},
  [4] = {.lex_state = 262},
  [5] = {.lex_state = 263},
  [6] = {.lex_state = 263},
  [7] = {.lex_state = 263},
  [8] = {.lex_state = 263},
  [9] = {.lex_state = 263},
  [10] = {.lex_state = 263},
  [11] = {.lex_state = 263},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 264},
  [16] = {.lex_state = 263},
  [17] = {.lex_state = 264},
  [18] = {.lex_state = 264},
  [19] = {.lex_state = 264},
  [20] = {.lex_state = 264},
  [21] = {.lex_state = 264},
  [22] = {.lex_state = 264},
  [23] = {.lex_state = 264},
  [24] = {.lex_state = 264},
  [25] = {.lex_state = 263},
  [26] = {.lex_state = 264},
  [27] = {.lex_state = 264},
  [28] = {.lex_state = 264},
  [29] = {.lex_state = 263},
  [30] = {.lex_state = 263},
  [31] = {.lex_state = 263},
  [32] = {.lex_state = 263},
  [33] = {.lex_state = 263},
  [34] = {.lex_state = 263},
  [35] = {.lex_state = 264},
  [36] = {.lex_state = 264},
  [37] = {.lex_state = 263},
  [38] = {.lex_state = 263},
  [39] = {.lex_state = 264},
  [40] = {.lex_state = 264},
  [41] = {.lex_state = 264},
  [42] = {.lex_state = 264},
  [43] = {.lex_state = 264},
  [44] = {.lex_state = 263},
  [45] = {.lex_state = 263},
  [46] = {.lex_state = 264},
  [47] = {.lex_state = 263},
  [48] = {.lex_state = 263},
  [49] = {.lex_state = 263},
  [50] = {.lex_state = 263},
  [51] = {.lex_state = 264},
  [52] = {.lex_state = 264},
  [53] = {.lex_state = 264},
  [54] = {.lex_state = 264},
  [55] = {.lex_state = 264},
  [56] = {.lex_state = 263},
  [57] = {.lex_state = 263},
  [58] = {.lex_state = 263},
  [59] = {.lex_state = 263},
  [60] = {.lex_state = 264},
  [61] = {.lex_state = 263},
  [62] = {.lex_state = 264},
  [63] = {.lex_state = 264},
  [64] = {.lex_state = 264},
  [65] = {.lex_state = 263},
  [66] = {.lex_state = 263},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 264},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 263},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 263},
  [106] = {.lex_state = 264},
  [107] = {.lex_state = 263},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 264},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 264},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 264},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 264},
  [129] = {.lex_state = 264},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 264},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 264},
  [135] = {.lex_state = 264},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 264},
  [138] = {.lex_state = 264},
  [139] = {.lex_state = 264},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 264},
  [143] = {.lex_state = 264},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 264},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 264},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 32},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 26},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 25},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 23},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 33},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 33},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 23},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 23},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 23},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 23},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 23},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 23},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 23},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 23},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 23},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 23},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 23},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 263},
  [337] = {.lex_state = 23},
  [338] = {.lex_state = 23},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 23},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 23},
  [350] = {.lex_state = 23},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 23},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 23},
  [356] = {.lex_state = 23},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 23},
  [362] = {.lex_state = 23},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 453},
  [365] = {.lex_state = 24},
  [366] = {.lex_state = 26},
  [367] = {.lex_state = 23},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 23},
  [370] = {.lex_state = 23},
  [371] = {.lex_state = 23},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 23},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 23},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 23},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 23},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 26},
  [389] = {.lex_state = 24},
  [390] = {.lex_state = 453},
  [391] = {.lex_state = 263},
  [392] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_function_statement_token1] = ACTIONS(1),
    [aux_sym_create_function_statement_token3] = ACTIONS(1),
    [aux_sym_create_function_statement_token4] = ACTIONS(1),
    [aux_sym__function_optimizer_hint_token1] = ACTIONS(1),
    [aux_sym__function_optimizer_hint_token2] = ACTIONS(1),
    [aux_sym__function_optimizer_hint_token3] = ACTIONS(1),
    [aux_sym__function_language_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_function_body_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_create_domain_statement_token1] = ACTIONS(1),
    [aux_sym_create_type_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token2] = ACTIONS(1),
    [anon_sym_CONSTRAINT] = ACTIONS(1),
    [aux_sym_column_default_token1] = ACTIONS(1),
    [aux_sym_table_constraint_check_token1] = ACTIONS(1),
    [aux_sym_table_constraint_foreign_key_token1] = ACTIONS(1),
    [aux_sym_table_constraint_foreign_key_token2] = ACTIONS(1),
    [aux_sym_table_constraint_unique_token1] = ACTIONS(1),
    [aux_sym_table_constraint_primary_key_token1] = ACTIONS(1),
    [aux_sym_create_table_statement_token1] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token2] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_join_type_token1] = ACTIONS(1),
    [aux_sym_join_type_token2] = ACTIONS(1),
    [aux_sym_join_type_token3] = ACTIONS(1),
    [aux_sym_join_type_token4] = ACTIONS(1),
    [aux_sym_join_type_token5] = ACTIONS(1),
    [aux_sym_join_clause_token1] = ACTIONS(1),
    [aux_sym_update_statement_token1] = ACTIONS(1),
    [aux_sym_set_clause_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token2] = ACTIONS(1),
    [aux_sym_values_clause_token1] = ACTIONS(1),
    [aux_sym_in_expression_token1] = ACTIONS(1),
    [aux_sym_in_expression_token2] = ACTIONS(1),
    [aux_sym_references_constraint_token1] = ACTIONS(1),
    [aux_sym_on_delete_action_token1] = ACTIONS(1),
    [aux_sym__constraint_action_token1] = ACTIONS(1),
    [aux_sym__constraint_action_token2] = ACTIONS(1),
    [aux_sym__constraint_action_token3] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_is_expression_token1] = ACTIONS(1),
    [aux_sym_distinct_from_token1] = ACTIONS(1),
    [aux_sym_boolean_expression_token1] = ACTIONS(1),
    [aux_sym_boolean_expression_token2] = ACTIONS(1),
    [aux_sym_TRUE_token1] = ACTIONS(1),
    [aux_sym_FALSE_token1] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_DASH_GT_GT] = ACTIONS(1),
    [aux_sym_ordered_expression_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(386),
    [sym__statement] = STATE(136),
    [sym_create_function_statement] = STATE(227),
    [sym_create_domain_statement] = STATE(227),
    [sym_create_type_statement] = STATE(227),
    [sym_create_index_statement] = STATE(227),
    [sym_create_table_statement] = STATE(227),
    [sym_select_statement] = STATE(227),
    [sym_select_clause] = STATE(104),
    [sym_update_statement] = STATE(227),
    [sym_insert_statement] = STATE(227),
    [aux_sym_source_file_repeat1] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_function_statement_token1] = ACTIONS(7),
    [aux_sym_select_clause_token1] = ACTIONS(9),
    [aux_sym_update_statement_token1] = ACTIONS(11),
    [aux_sym_insert_statement_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(15), 41,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [53] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(19), 41,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [106] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym__expression,
    STATE(127), 1,
      sym_select_clause_body,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(118), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(25), 13,
      aux_sym_create_function_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(45), 40,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(49), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(61), 36,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [534] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym__expression,
    STATE(127), 1,
      sym_select_clause_body,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(25), 9,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [607] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym__expression,
    STATE(127), 1,
      sym_select_clause_body,
    STATE(118), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(25), 9,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [682] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym__expression,
    STATE(127), 1,
      sym_select_clause_body,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
    STATE(118), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(25), 9,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [755] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1281] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(93), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1502] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 1,
      aux_sym_in_expression_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token2,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(129), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1596] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 1,
      aux_sym_in_expression_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token2,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(143), 1,
      aux_sym_function_body_token1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(141), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [1653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(155), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(161), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(171), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(147), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(175), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(179), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2356] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(129), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(183), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2573] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 1,
      aux_sym_in_expression_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token2,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(93), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(163), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(159), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(161), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(159), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2915] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 1,
      aux_sym_in_expression_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token2,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(187), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [2967] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 1,
      aux_sym_in_expression_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token2,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(189), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [3019] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      aux_sym_select_clause_token1,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym_select_clause,
    STATE(148), 1,
      sym__expression,
    STATE(343), 1,
      sym_select_statement,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3082] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      aux_sym_select_clause_token1,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym_select_clause,
    STATE(151), 1,
      sym__expression,
    STATE(373), 1,
      sym_select_statement,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3145] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym__expression,
    STATE(121), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3203] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(211), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [3253] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym__expression,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3311] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(132), 1,
      sym__expression,
    STATE(334), 1,
      sym_values_clause_body,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3368] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3425] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(128), 1,
      sym__expression,
    STATE(246), 1,
      sym_ordered_expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3482] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3539] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(129), 1,
      sym__expression,
    STATE(298), 1,
      sym_ordered_expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3596] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym__expression,
    STATE(183), 1,
      sym_group_by_clause_body,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3653] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym__expression,
    STATE(192), 1,
      sym_order_by_clause_body,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3710] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(135), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3764] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3818] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3872] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3926] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(123), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3980] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4034] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(148), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4088] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4142] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4196] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4250] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4304] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4358] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4412] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(143), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4466] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(114), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4520] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(137), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4574] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4628] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4682] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(142), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4736] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(70), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4790] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym__expression,
    STATE(25), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4844] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(109), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4898] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(139), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4952] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(60), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [5006] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 1,
      aux_sym_in_expression_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token2,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5057] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(229), 1,
      aux_sym_where_clause_token1,
    ACTIONS(231), 1,
      aux_sym_from_clause_token1,
    ACTIONS(233), 1,
      aux_sym_join_type_token1,
    ACTIONS(237), 1,
      aux_sym_join_clause_token1,
    STATE(108), 1,
      sym_from_clause,
    STATE(152), 1,
      sym_where_clause,
    STATE(175), 1,
      sym_group_by_clause,
    STATE(188), 1,
      sym_order_by_clause,
    STATE(351), 1,
      sym_join_type,
    STATE(110), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(235), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(223), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5114] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 1,
      aux_sym_in_expression_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token2,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(239), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5160] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5210] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 1,
      aux_sym_in_expression_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token2,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(245), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5256] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(229), 1,
      aux_sym_where_clause_token1,
    ACTIONS(233), 1,
      aux_sym_join_type_token1,
    ACTIONS(237), 1,
      aux_sym_join_clause_token1,
    STATE(153), 1,
      sym_where_clause,
    STATE(163), 1,
      sym_group_by_clause,
    STATE(196), 1,
      sym_order_by_clause,
    STATE(351), 1,
      sym_join_type,
    STATE(111), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(235), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5307] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(245), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5352] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(229), 1,
      aux_sym_where_clause_token1,
    ACTIONS(233), 1,
      aux_sym_join_type_token1,
    ACTIONS(237), 1,
      aux_sym_join_clause_token1,
    STATE(153), 1,
      sym_where_clause,
    STATE(163), 1,
      sym_group_by_clause,
    STATE(196), 1,
      sym_order_by_clause,
    STATE(351), 1,
      sym_join_type,
    STATE(119), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(235), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5403] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(229), 1,
      aux_sym_where_clause_token1,
    ACTIONS(233), 1,
      aux_sym_join_type_token1,
    ACTIONS(237), 1,
      aux_sym_join_clause_token1,
    STATE(156), 1,
      sym_where_clause,
    STATE(172), 1,
      sym_group_by_clause,
    STATE(197), 1,
      sym_order_by_clause,
    STATE(351), 1,
      sym_join_type,
    STATE(119), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(235), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [5482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [5510] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(257), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(262), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5613] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(268), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(270), 1,
      aux_sym_column_default_token1,
    ACTIONS(272), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(274), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(276), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(280), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(125), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(284), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5691] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_join_type_token1,
    ACTIONS(294), 1,
      aux_sym_join_clause_token1,
    STATE(351), 1,
      sym_join_type,
    STATE(119), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(291), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(286), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5727] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(302), 1,
      aux_sym_column_default_token1,
    ACTIONS(305), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(308), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(311), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(314), 1,
      aux_sym_in_expression_token1,
    ACTIONS(317), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(320), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(120), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5822] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(325), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5892] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(270), 1,
      aux_sym_column_default_token1,
    ACTIONS(272), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(274), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(276), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(280), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(120), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(329), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5990] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    STATE(266), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(339), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6036] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(339), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6077] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
    STATE(149), 1,
      sym_null_constraint,
    ACTIONS(343), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6109] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(350), 1,
      aux_sym_select_clause_token1,
    ACTIONS(353), 1,
      aux_sym_update_statement_token1,
    ACTIONS(356), 1,
      aux_sym_insert_statement_token1,
    STATE(104), 1,
      sym_select_clause,
    STATE(131), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(227), 8,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [6145] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6187] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
    STATE(149), 1,
      sym_null_constraint,
    ACTIONS(361), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6219] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6261] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6303] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(11), 1,
      aux_sym_update_statement_token1,
    ACTIONS(13), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym_select_clause,
    STATE(131), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(227), 8,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [6339] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6381] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6423] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__function_language_token1,
    ACTIONS(383), 1,
      aux_sym_function_body_token1,
    ACTIONS(377), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(140), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(375), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6489] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym__function_language_token1,
    ACTIONS(392), 1,
      aux_sym_function_body_token1,
    ACTIONS(388), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(145), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(386), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6518] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6555] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym__function_language_token1,
    ACTIONS(392), 1,
      aux_sym_function_body_token1,
    ACTIONS(388), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(140), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(398), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym__function_language_token1,
    ACTIONS(392), 1,
      aux_sym_function_body_token1,
    ACTIONS(388), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(140), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(400), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6650] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym__function_language_token1,
    ACTIONS(392), 1,
      aux_sym_function_body_token1,
    ACTIONS(388), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(144), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(402), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      aux_sym_create_index_statement_token2,
    STATE(278), 1,
      sym_on_update_action,
    STATE(285), 1,
      sym_on_delete_action,
    ACTIONS(406), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6707] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6763] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
    STATE(154), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(414), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6795] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(337), 1,
      aux_sym_in_expression_token2,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    STATE(163), 1,
      sym_group_by_clause,
    STATE(196), 1,
      sym_order_by_clause,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6858] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    STATE(172), 1,
      sym_group_by_clause,
    STATE(197), 1,
      sym_order_by_clause,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6885] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
    STATE(155), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(418), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6914] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(425), 1,
      aux_sym_in_expression_token1,
    ACTIONS(428), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
    STATE(155), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(420), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6943] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    STATE(168), 1,
      sym_group_by_clause,
    STATE(194), 1,
      sym_order_by_clause,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6970] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      aux_sym_create_index_statement_token2,
    STATE(281), 1,
      sym_on_update_action,
    STATE(315), 1,
      sym_on_delete_action,
    ACTIONS(433), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      aux_sym_create_index_statement_token2,
    STATE(310), 1,
      sym_on_delete_action,
    STATE(312), 1,
      sym_on_update_action,
    ACTIONS(435), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(437), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(245), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(442), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7086] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(446), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(448), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(450), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(316), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    STATE(197), 1,
      sym_order_by_clause,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(446), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(448), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(450), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(254), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(454), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(442), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    STATE(189), 1,
      sym_order_by_clause,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    STATE(194), 1,
      sym_order_by_clause,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(252), 1,
      sym_constrained_type,
    ACTIONS(17), 2,
      aux_sym_in_expression_token1,
      aux_sym__constraint_action_token3,
    STATE(206), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(15), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [7353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_order_by_clause_token1,
    STATE(196), 1,
      sym_order_by_clause,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_index_statement_token2,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_index_statement_token2,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(245), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_index_statement_token2,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(493), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7624] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_in_expression_token1,
    ACTIONS(500), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(502), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(504), 1,
      aux_sym_TRUE_token1,
    ACTIONS(506), 1,
      aux_sym_FALSE_token1,
    STATE(41), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7664] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(510), 1,
      aux_sym_in_expression_token1,
    ACTIONS(512), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(514), 1,
      aux_sym_TRUE_token1,
    ACTIONS(516), 1,
      aux_sym_FALSE_token1,
    STATE(58), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(518), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(522), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_where_clause_token1,
    STATE(224), 1,
      sym_where_clause,
    ACTIONS(524), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7790] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(502), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(504), 1,
      aux_sym_TRUE_token1,
    ACTIONS(506), 1,
      aux_sym_FALSE_token1,
    STATE(35), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7812] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(528), 1,
      aux_sym_create_function_statement_token2,
    ACTIONS(530), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(532), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(534), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(536), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(538), 1,
      aux_sym_create_table_statement_token1,
    STATE(366), 1,
      sym_unique_constraint,
  [7840] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(181), 1,
      sym_type_cast,
    STATE(167), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [7864] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(512), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(514), 1,
      aux_sym_TRUE_token1,
    ACTIONS(516), 1,
      aux_sym_FALSE_token1,
    STATE(45), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_where_clause_token1,
    STATE(228), 1,
      sym_where_clause,
    ACTIONS(544), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(546), 1,
      aux_sym_setof_token1,
    STATE(133), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(141), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [7924] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(548), 1,
      anon_sym_EQ,
    STATE(112), 1,
      sym_NULL,
    STATE(149), 1,
      sym_null_constraint,
    ACTIONS(550), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_where_clause_token1,
    STATE(222), 1,
      sym_where_clause,
    ACTIONS(552), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(546), 1,
      aux_sym_setof_token1,
    STATE(133), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(146), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [8002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_where_clause_token1,
    STATE(220), 1,
      sym_where_clause,
    ACTIONS(554), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_where_clause_token1,
    STATE(225), 1,
      sym_where_clause,
    ACTIONS(556), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8038] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(558), 1,
      anon_sym_EQ,
    STATE(112), 1,
      sym_NULL,
    STATE(149), 1,
      sym_null_constraint,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      aux_sym_function_body_token1,
    ACTIONS(566), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(249), 1,
      sym_create_function_parameter,
    STATE(274), 1,
      sym_constrained_type,
    STATE(212), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(274), 1,
      sym_constrained_type,
    STATE(287), 1,
      sym_create_function_parameter,
    STATE(212), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(588), 5,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 5,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(170), 1,
      sym_constrained_type,
    STATE(130), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(606), 1,
      aux_sym_using_clause_token1,
    STATE(204), 1,
      sym_index_table_parameters,
    STATE(309), 1,
      sym_using_clause,
  [8366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(606), 1,
      aux_sym_using_clause_token1,
    STATE(211), 1,
      sym_index_table_parameters,
    STATE(311), 1,
      sym_using_clause,
  [8382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(275), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(150), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      aux_sym_set_clause_token1,
    STATE(176), 1,
      sym__constraint_action,
    ACTIONS(610), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [8420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(9), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(117), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      aux_sym_set_clause_token1,
    STATE(178), 1,
      sym__constraint_action,
    ACTIONS(612), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [8458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(21), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_create_function_parameters_repeat1,
  [8483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_parameters_repeat1,
  [8496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_index_table_parameters_repeat1,
  [8509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_create_function_parameters_repeat1,
  [8548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_create_table_parameters_repeat1,
  [8574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_EQ,
    ACTIONS(550), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_string,
  [8598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_create_table_parameters_repeat1,
  [8611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_create_table_parameters_repeat1,
  [8637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(195), 1,
      sym_assigment_expression,
    STATE(213), 1,
      sym_set_clause_body,
  [8689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_select_clause_token1,
    STATE(104), 1,
      sym_select_clause,
    STATE(283), 1,
      sym_select_statement,
  [8702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      aux_sym_select_clause_token1,
    STATE(104), 1,
      sym_select_clause,
    STATE(284), 1,
      sym_select_statement,
  [8715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym_parameters_repeat1,
  [8728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_parameters_repeat1,
  [8741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_index_table_parameters_repeat1,
  [8767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_create_function_parameters_repeat1,
  [8806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_index_table_parameters_repeat1,
  [8858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_EQ,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(691), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym_string,
  [8893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      aux_sym_create_index_statement_token2,
    STATE(182), 1,
      sym_on_delete_action,
  [8916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
  [8926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    STATE(348), 1,
      sym_create_function_parameters,
  [8936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      aux_sym_create_index_statement_token2,
    STATE(186), 1,
      sym_on_delete_action,
  [8946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(301), 1,
      sym_parameter,
  [8956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_SEMI,
    ACTIONS(707), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SQUOTE,
    ACTIONS(709), 1,
      anon_sym_SEMI,
  [8976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_create_index_statement_token2,
    STATE(182), 1,
      sym_on_update_action,
  [8986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_create_function_parameters,
  [8996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
  [9014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym_references_constraint_token1,
    STATE(304), 1,
      sym_references_constraint,
  [9024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym_join_type_token5,
    ACTIONS(723), 1,
      aux_sym_join_clause_token1,
  [9074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_tuple,
  [9084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_update_statement_token1,
    ACTIONS(729), 1,
      aux_sym_on_delete_action_token1,
  [9094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    STATE(232), 1,
      sym_create_table_parameters,
  [9112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_parameters,
  [9122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      aux_sym_set_clause_token1,
    STATE(207), 1,
      sym_set_clause,
  [9140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(263), 1,
      sym_parameter,
  [9150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym_references_constraint_token1,
    STATE(314), 1,
      sym_references_constraint,
  [9168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_tuple,
  [9186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_values_clause_token1,
    STATE(229), 1,
      sym_values_clause,
  [9196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym_index_table_parameters,
  [9206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_create_index_statement_token2,
    STATE(185), 1,
      sym_on_update_action,
  [9216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_index_table_parameters,
  [9226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      aux_sym_create_index_statement_token2,
    STATE(185), 1,
      sym_on_delete_action,
  [9236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(208), 1,
      sym_assigment_expression,
  [9246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_create_index_statement_token2,
    STATE(186), 1,
      sym_on_update_action,
  [9264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_tuple,
  [9282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_tuple,
  [9292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [9299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym__constraint_action_token3,
  [9306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_from_clause_token1,
  [9313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
  [9320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_identifier,
  [9327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
  [9334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_identifier,
  [9341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_update_statement_token1,
  [9348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      aux_sym_on_delete_action_token1,
  [9355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_identifier,
  [9362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym_create_index_statement_token2,
  [9369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      aux_sym_join_clause_token1,
  [9376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_create_function_statement_token4,
  [9383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym_create_index_statement_token2,
  [9390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_SQUOTE,
  [9397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [9404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      aux_sym_in_expression_token2,
  [9418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_identifier,
  [9425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
  [9432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
  [9439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      aux_sym_create_function_statement_token4,
  [9446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
  [9453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
  [9467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym_identifier,
  [9474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_LPAREN,
  [9481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym_create_index_statement_token2,
  [9488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      aux_sym_function_body_token1,
  [9495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_create_function_statement_token4,
  [9502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
  [9509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_identifier,
  [9516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym_join_clause_token1,
  [9523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_identifier,
  [9530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_EQ,
  [9537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
  [9544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym_identifier,
  [9551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_identifier,
  [9558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      aux_sym_join_clause_token1,
  [9565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_group_by_clause_token2,
  [9572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      aux_sym_group_by_clause_token2,
  [9579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      aux_sym_create_function_statement_token4,
  [9586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_identifier,
  [9593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym_identifier,
  [9600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_number_token1,
  [9607] = 2,
    ACTIONS(827), 1,
      aux_sym_string_token1,
    ACTIONS(829), 1,
      sym_comment,
  [9614] = 2,
    ACTIONS(829), 1,
      sym_comment,
    ACTIONS(831), 1,
      aux_sym_string_token2,
  [9621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym_create_index_statement_token1,
  [9628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym_identifier,
  [9635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_create_index_statement_token2,
  [9642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym_identifier,
  [9649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_identifier,
  [9656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_identifier,
  [9663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      aux_sym_number_token1,
  [9670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
  [9677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_identifier,
  [9684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
  [9698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym_create_function_statement_token3,
  [9705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_identifier,
  [9712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [9719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym_identifier,
  [9726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [9733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_identifier,
  [9740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      aux_sym_from_clause_token1,
  [9747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym_identifier,
  [9754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
  [9761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
  [9768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
  [9775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym_insert_statement_token2,
  [9782] = 2,
    ACTIONS(829), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_string_token2,
  [9789] = 2,
    ACTIONS(829), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym_string_token1,
  [9796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      aux_sym_in_expression_token2,
  [9803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 238,
  [SMALL_STATE(7)] = 287,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 436,
  [SMALL_STATE(11)] = 485,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 607,
  [SMALL_STATE(14)] = 682,
  [SMALL_STATE(15)] = 755,
  [SMALL_STATE(16)] = 805,
  [SMALL_STATE(17)] = 855,
  [SMALL_STATE(18)] = 897,
  [SMALL_STATE(19)] = 939,
  [SMALL_STATE(20)] = 981,
  [SMALL_STATE(21)] = 1023,
  [SMALL_STATE(22)] = 1067,
  [SMALL_STATE(23)] = 1109,
  [SMALL_STATE(24)] = 1151,
  [SMALL_STATE(25)] = 1195,
  [SMALL_STATE(26)] = 1239,
  [SMALL_STATE(27)] = 1281,
  [SMALL_STATE(28)] = 1334,
  [SMALL_STATE(29)] = 1375,
  [SMALL_STATE(30)] = 1416,
  [SMALL_STATE(31)] = 1457,
  [SMALL_STATE(32)] = 1502,
  [SMALL_STATE(33)] = 1555,
  [SMALL_STATE(34)] = 1596,
  [SMALL_STATE(35)] = 1653,
  [SMALL_STATE(36)] = 1694,
  [SMALL_STATE(37)] = 1735,
  [SMALL_STATE(38)] = 1776,
  [SMALL_STATE(39)] = 1817,
  [SMALL_STATE(40)] = 1860,
  [SMALL_STATE(41)] = 1901,
  [SMALL_STATE(42)] = 1942,
  [SMALL_STATE(43)] = 1983,
  [SMALL_STATE(44)] = 2028,
  [SMALL_STATE(45)] = 2069,
  [SMALL_STATE(46)] = 2110,
  [SMALL_STATE(47)] = 2151,
  [SMALL_STATE(48)] = 2192,
  [SMALL_STATE(49)] = 2233,
  [SMALL_STATE(50)] = 2274,
  [SMALL_STATE(51)] = 2315,
  [SMALL_STATE(52)] = 2356,
  [SMALL_STATE(53)] = 2409,
  [SMALL_STATE(54)] = 2450,
  [SMALL_STATE(55)] = 2491,
  [SMALL_STATE(56)] = 2532,
  [SMALL_STATE(57)] = 2573,
  [SMALL_STATE(58)] = 2626,
  [SMALL_STATE(59)] = 2667,
  [SMALL_STATE(60)] = 2708,
  [SMALL_STATE(61)] = 2749,
  [SMALL_STATE(62)] = 2792,
  [SMALL_STATE(63)] = 2833,
  [SMALL_STATE(64)] = 2874,
  [SMALL_STATE(65)] = 2915,
  [SMALL_STATE(66)] = 2967,
  [SMALL_STATE(67)] = 3019,
  [SMALL_STATE(68)] = 3082,
  [SMALL_STATE(69)] = 3145,
  [SMALL_STATE(70)] = 3203,
  [SMALL_STATE(71)] = 3253,
  [SMALL_STATE(72)] = 3311,
  [SMALL_STATE(73)] = 3368,
  [SMALL_STATE(74)] = 3425,
  [SMALL_STATE(75)] = 3482,
  [SMALL_STATE(76)] = 3539,
  [SMALL_STATE(77)] = 3596,
  [SMALL_STATE(78)] = 3653,
  [SMALL_STATE(79)] = 3710,
  [SMALL_STATE(80)] = 3764,
  [SMALL_STATE(81)] = 3818,
  [SMALL_STATE(82)] = 3872,
  [SMALL_STATE(83)] = 3926,
  [SMALL_STATE(84)] = 3980,
  [SMALL_STATE(85)] = 4034,
  [SMALL_STATE(86)] = 4088,
  [SMALL_STATE(87)] = 4142,
  [SMALL_STATE(88)] = 4196,
  [SMALL_STATE(89)] = 4250,
  [SMALL_STATE(90)] = 4304,
  [SMALL_STATE(91)] = 4358,
  [SMALL_STATE(92)] = 4412,
  [SMALL_STATE(93)] = 4466,
  [SMALL_STATE(94)] = 4520,
  [SMALL_STATE(95)] = 4574,
  [SMALL_STATE(96)] = 4628,
  [SMALL_STATE(97)] = 4682,
  [SMALL_STATE(98)] = 4736,
  [SMALL_STATE(99)] = 4790,
  [SMALL_STATE(100)] = 4844,
  [SMALL_STATE(101)] = 4898,
  [SMALL_STATE(102)] = 4952,
  [SMALL_STATE(103)] = 5006,
  [SMALL_STATE(104)] = 5057,
  [SMALL_STATE(105)] = 5114,
  [SMALL_STATE(106)] = 5160,
  [SMALL_STATE(107)] = 5210,
  [SMALL_STATE(108)] = 5256,
  [SMALL_STATE(109)] = 5307,
  [SMALL_STATE(110)] = 5352,
  [SMALL_STATE(111)] = 5403,
  [SMALL_STATE(112)] = 5454,
  [SMALL_STATE(113)] = 5482,
  [SMALL_STATE(114)] = 5510,
  [SMALL_STATE(115)] = 5553,
  [SMALL_STATE(116)] = 5583,
  [SMALL_STATE(117)] = 5613,
  [SMALL_STATE(118)] = 5661,
  [SMALL_STATE(119)] = 5691,
  [SMALL_STATE(120)] = 5727,
  [SMALL_STATE(121)] = 5772,
  [SMALL_STATE(122)] = 5797,
  [SMALL_STATE(123)] = 5822,
  [SMALL_STATE(124)] = 5863,
  [SMALL_STATE(125)] = 5892,
  [SMALL_STATE(126)] = 5937,
  [SMALL_STATE(127)] = 5966,
  [SMALL_STATE(128)] = 5990,
  [SMALL_STATE(129)] = 6036,
  [SMALL_STATE(130)] = 6077,
  [SMALL_STATE(131)] = 6109,
  [SMALL_STATE(132)] = 6145,
  [SMALL_STATE(133)] = 6187,
  [SMALL_STATE(134)] = 6219,
  [SMALL_STATE(135)] = 6261,
  [SMALL_STATE(136)] = 6303,
  [SMALL_STATE(137)] = 6339,
  [SMALL_STATE(138)] = 6381,
  [SMALL_STATE(139)] = 6423,
  [SMALL_STATE(140)] = 6460,
  [SMALL_STATE(141)] = 6489,
  [SMALL_STATE(142)] = 6518,
  [SMALL_STATE(143)] = 6555,
  [SMALL_STATE(144)] = 6592,
  [SMALL_STATE(145)] = 6621,
  [SMALL_STATE(146)] = 6650,
  [SMALL_STATE(147)] = 6679,
  [SMALL_STATE(148)] = 6707,
  [SMALL_STATE(149)] = 6743,
  [SMALL_STATE(150)] = 6763,
  [SMALL_STATE(151)] = 6795,
  [SMALL_STATE(152)] = 6831,
  [SMALL_STATE(153)] = 6858,
  [SMALL_STATE(154)] = 6885,
  [SMALL_STATE(155)] = 6914,
  [SMALL_STATE(156)] = 6943,
  [SMALL_STATE(157)] = 6970,
  [SMALL_STATE(158)] = 6995,
  [SMALL_STATE(159)] = 7020,
  [SMALL_STATE(160)] = 7042,
  [SMALL_STATE(161)] = 7064,
  [SMALL_STATE(162)] = 7086,
  [SMALL_STATE(163)] = 7113,
  [SMALL_STATE(164)] = 7134,
  [SMALL_STATE(165)] = 7161,
  [SMALL_STATE(166)] = 7182,
  [SMALL_STATE(167)] = 7199,
  [SMALL_STATE(168)] = 7218,
  [SMALL_STATE(169)] = 7239,
  [SMALL_STATE(170)] = 7256,
  [SMALL_STATE(171)] = 7273,
  [SMALL_STATE(172)] = 7290,
  [SMALL_STATE(173)] = 7311,
  [SMALL_STATE(174)] = 7328,
  [SMALL_STATE(175)] = 7353,
  [SMALL_STATE(176)] = 7374,
  [SMALL_STATE(177)] = 7391,
  [SMALL_STATE(178)] = 7408,
  [SMALL_STATE(179)] = 7425,
  [SMALL_STATE(180)] = 7446,
  [SMALL_STATE(181)] = 7463,
  [SMALL_STATE(182)] = 7479,
  [SMALL_STATE(183)] = 7495,
  [SMALL_STATE(184)] = 7511,
  [SMALL_STATE(185)] = 7527,
  [SMALL_STATE(186)] = 7543,
  [SMALL_STATE(187)] = 7559,
  [SMALL_STATE(188)] = 7575,
  [SMALL_STATE(189)] = 7590,
  [SMALL_STATE(190)] = 7605,
  [SMALL_STATE(191)] = 7624,
  [SMALL_STATE(192)] = 7649,
  [SMALL_STATE(193)] = 7664,
  [SMALL_STATE(194)] = 7689,
  [SMALL_STATE(195)] = 7704,
  [SMALL_STATE(196)] = 7723,
  [SMALL_STATE(197)] = 7738,
  [SMALL_STATE(198)] = 7753,
  [SMALL_STATE(199)] = 7772,
  [SMALL_STATE(200)] = 7790,
  [SMALL_STATE(201)] = 7812,
  [SMALL_STATE(202)] = 7840,
  [SMALL_STATE(203)] = 7864,
  [SMALL_STATE(204)] = 7886,
  [SMALL_STATE(205)] = 7904,
  [SMALL_STATE(206)] = 7924,
  [SMALL_STATE(207)] = 7950,
  [SMALL_STATE(208)] = 7968,
  [SMALL_STATE(209)] = 7982,
  [SMALL_STATE(210)] = 8002,
  [SMALL_STATE(211)] = 8020,
  [SMALL_STATE(212)] = 8038,
  [SMALL_STATE(213)] = 8064,
  [SMALL_STATE(214)] = 8077,
  [SMALL_STATE(215)] = 8090,
  [SMALL_STATE(216)] = 8105,
  [SMALL_STATE(217)] = 8118,
  [SMALL_STATE(218)] = 8130,
  [SMALL_STATE(219)] = 8142,
  [SMALL_STATE(220)] = 8160,
  [SMALL_STATE(221)] = 8172,
  [SMALL_STATE(222)] = 8190,
  [SMALL_STATE(223)] = 8202,
  [SMALL_STATE(224)] = 8214,
  [SMALL_STATE(225)] = 8226,
  [SMALL_STATE(226)] = 8238,
  [SMALL_STATE(227)] = 8250,
  [SMALL_STATE(228)] = 8264,
  [SMALL_STATE(229)] = 8276,
  [SMALL_STATE(230)] = 8288,
  [SMALL_STATE(231)] = 8300,
  [SMALL_STATE(232)] = 8312,
  [SMALL_STATE(233)] = 8324,
  [SMALL_STATE(234)] = 8335,
  [SMALL_STATE(235)] = 8350,
  [SMALL_STATE(236)] = 8366,
  [SMALL_STATE(237)] = 8382,
  [SMALL_STATE(238)] = 8394,
  [SMALL_STATE(239)] = 8406,
  [SMALL_STATE(240)] = 8420,
  [SMALL_STATE(241)] = 8432,
  [SMALL_STATE(242)] = 8444,
  [SMALL_STATE(243)] = 8458,
  [SMALL_STATE(244)] = 8470,
  [SMALL_STATE(245)] = 8483,
  [SMALL_STATE(246)] = 8496,
  [SMALL_STATE(247)] = 8509,
  [SMALL_STATE(248)] = 8522,
  [SMALL_STATE(249)] = 8535,
  [SMALL_STATE(250)] = 8548,
  [SMALL_STATE(251)] = 8561,
  [SMALL_STATE(252)] = 8574,
  [SMALL_STATE(253)] = 8585,
  [SMALL_STATE(254)] = 8598,
  [SMALL_STATE(255)] = 8611,
  [SMALL_STATE(256)] = 8624,
  [SMALL_STATE(257)] = 8637,
  [SMALL_STATE(258)] = 8650,
  [SMALL_STATE(259)] = 8663,
  [SMALL_STATE(260)] = 8676,
  [SMALL_STATE(261)] = 8689,
  [SMALL_STATE(262)] = 8702,
  [SMALL_STATE(263)] = 8715,
  [SMALL_STATE(264)] = 8728,
  [SMALL_STATE(265)] = 8741,
  [SMALL_STATE(266)] = 8754,
  [SMALL_STATE(267)] = 8767,
  [SMALL_STATE(268)] = 8780,
  [SMALL_STATE(269)] = 8793,
  [SMALL_STATE(270)] = 8806,
  [SMALL_STATE(271)] = 8819,
  [SMALL_STATE(272)] = 8832,
  [SMALL_STATE(273)] = 8845,
  [SMALL_STATE(274)] = 8858,
  [SMALL_STATE(275)] = 8869,
  [SMALL_STATE(276)] = 8880,
  [SMALL_STATE(277)] = 8893,
  [SMALL_STATE(278)] = 8906,
  [SMALL_STATE(279)] = 8916,
  [SMALL_STATE(280)] = 8926,
  [SMALL_STATE(281)] = 8936,
  [SMALL_STATE(282)] = 8946,
  [SMALL_STATE(283)] = 8956,
  [SMALL_STATE(284)] = 8966,
  [SMALL_STATE(285)] = 8976,
  [SMALL_STATE(286)] = 8986,
  [SMALL_STATE(287)] = 8996,
  [SMALL_STATE(288)] = 9004,
  [SMALL_STATE(289)] = 9014,
  [SMALL_STATE(290)] = 9024,
  [SMALL_STATE(291)] = 9032,
  [SMALL_STATE(292)] = 9040,
  [SMALL_STATE(293)] = 9048,
  [SMALL_STATE(294)] = 9056,
  [SMALL_STATE(295)] = 9064,
  [SMALL_STATE(296)] = 9074,
  [SMALL_STATE(297)] = 9084,
  [SMALL_STATE(298)] = 9094,
  [SMALL_STATE(299)] = 9102,
  [SMALL_STATE(300)] = 9112,
  [SMALL_STATE(301)] = 9122,
  [SMALL_STATE(302)] = 9130,
  [SMALL_STATE(303)] = 9140,
  [SMALL_STATE(304)] = 9150,
  [SMALL_STATE(305)] = 9158,
  [SMALL_STATE(306)] = 9168,
  [SMALL_STATE(307)] = 9176,
  [SMALL_STATE(308)] = 9186,
  [SMALL_STATE(309)] = 9196,
  [SMALL_STATE(310)] = 9206,
  [SMALL_STATE(311)] = 9216,
  [SMALL_STATE(312)] = 9226,
  [SMALL_STATE(313)] = 9236,
  [SMALL_STATE(314)] = 9246,
  [SMALL_STATE(315)] = 9254,
  [SMALL_STATE(316)] = 9264,
  [SMALL_STATE(317)] = 9272,
  [SMALL_STATE(318)] = 9282,
  [SMALL_STATE(319)] = 9292,
  [SMALL_STATE(320)] = 9299,
  [SMALL_STATE(321)] = 9306,
  [SMALL_STATE(322)] = 9313,
  [SMALL_STATE(323)] = 9320,
  [SMALL_STATE(324)] = 9327,
  [SMALL_STATE(325)] = 9334,
  [SMALL_STATE(326)] = 9341,
  [SMALL_STATE(327)] = 9348,
  [SMALL_STATE(328)] = 9355,
  [SMALL_STATE(329)] = 9362,
  [SMALL_STATE(330)] = 9369,
  [SMALL_STATE(331)] = 9376,
  [SMALL_STATE(332)] = 9383,
  [SMALL_STATE(333)] = 9390,
  [SMALL_STATE(334)] = 9397,
  [SMALL_STATE(335)] = 9404,
  [SMALL_STATE(336)] = 9411,
  [SMALL_STATE(337)] = 9418,
  [SMALL_STATE(338)] = 9425,
  [SMALL_STATE(339)] = 9432,
  [SMALL_STATE(340)] = 9439,
  [SMALL_STATE(341)] = 9446,
  [SMALL_STATE(342)] = 9453,
  [SMALL_STATE(343)] = 9460,
  [SMALL_STATE(344)] = 9467,
  [SMALL_STATE(345)] = 9474,
  [SMALL_STATE(346)] = 9481,
  [SMALL_STATE(347)] = 9488,
  [SMALL_STATE(348)] = 9495,
  [SMALL_STATE(349)] = 9502,
  [SMALL_STATE(350)] = 9509,
  [SMALL_STATE(351)] = 9516,
  [SMALL_STATE(352)] = 9523,
  [SMALL_STATE(353)] = 9530,
  [SMALL_STATE(354)] = 9537,
  [SMALL_STATE(355)] = 9544,
  [SMALL_STATE(356)] = 9551,
  [SMALL_STATE(357)] = 9558,
  [SMALL_STATE(358)] = 9565,
  [SMALL_STATE(359)] = 9572,
  [SMALL_STATE(360)] = 9579,
  [SMALL_STATE(361)] = 9586,
  [SMALL_STATE(362)] = 9593,
  [SMALL_STATE(363)] = 9600,
  [SMALL_STATE(364)] = 9607,
  [SMALL_STATE(365)] = 9614,
  [SMALL_STATE(366)] = 9621,
  [SMALL_STATE(367)] = 9628,
  [SMALL_STATE(368)] = 9635,
  [SMALL_STATE(369)] = 9642,
  [SMALL_STATE(370)] = 9649,
  [SMALL_STATE(371)] = 9656,
  [SMALL_STATE(372)] = 9663,
  [SMALL_STATE(373)] = 9670,
  [SMALL_STATE(374)] = 9677,
  [SMALL_STATE(375)] = 9684,
  [SMALL_STATE(376)] = 9691,
  [SMALL_STATE(377)] = 9698,
  [SMALL_STATE(378)] = 9705,
  [SMALL_STATE(379)] = 9712,
  [SMALL_STATE(380)] = 9719,
  [SMALL_STATE(381)] = 9726,
  [SMALL_STATE(382)] = 9733,
  [SMALL_STATE(383)] = 9740,
  [SMALL_STATE(384)] = 9747,
  [SMALL_STATE(385)] = 9754,
  [SMALL_STATE(386)] = 9761,
  [SMALL_STATE(387)] = 9768,
  [SMALL_STATE(388)] = 9775,
  [SMALL_STATE(389)] = 9782,
  [SMALL_STATE(390)] = 9789,
  [SMALL_STATE(391)] = 9796,
  [SMALL_STATE(392)] = 9803,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 6),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 15),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 8),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 3, .production_id = 17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 22),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 22),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 16),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 16),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(69),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 14),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(357),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(295),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(355),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(380),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(202),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(98),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(171),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(379),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(288),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(378),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 14),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(392),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 23),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(169),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(349),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(279),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 18),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 19),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 12),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 8, .production_id = 18),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6, .production_id = 12),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5, .production_id = 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 6, .production_id = 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(98),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(288),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(80),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 24),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 3, .production_id = 28),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 3, .production_id = 27),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(100),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_action, 2, .production_id = 29),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(313),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 13),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 13),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 21),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 21),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 3, .production_id = 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 5, .production_id = 10),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 21),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 13),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 4, .production_id = 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(221),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(162),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(282),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(356),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(76),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 25),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6, .production_id = 26),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 6),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 7, .production_id = 26),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [871] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 20),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
