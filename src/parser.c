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
#define STATE_COUNT 399
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 5
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 32

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
  aux_sym_create_schema_statement_token1 = 18,
  aux_sym_create_schema_statement_token2 = 19,
  aux_sym_create_schema_statement_token3 = 20,
  aux_sym_create_schema_statement_token4 = 21,
  aux_sym_create_domain_statement_token1 = 22,
  aux_sym_create_type_statement_token1 = 23,
  aux_sym_create_index_statement_token1 = 24,
  aux_sym_create_index_statement_token2 = 25,
  anon_sym_CONSTRAINT = 26,
  aux_sym_column_default_token1 = 27,
  aux_sym_table_constraint_check_token1 = 28,
  aux_sym_table_constraint_foreign_key_token1 = 29,
  aux_sym_table_constraint_foreign_key_token2 = 30,
  aux_sym_table_constraint_unique_token1 = 31,
  aux_sym_table_constraint_primary_key_token1 = 32,
  aux_sym_create_table_statement_token1 = 33,
  aux_sym_using_clause_token1 = 34,
  aux_sym_group_by_clause_token1 = 35,
  aux_sym_group_by_clause_token2 = 36,
  aux_sym_order_by_clause_token1 = 37,
  aux_sym_where_clause_token1 = 38,
  aux_sym_select_clause_token1 = 39,
  aux_sym_from_clause_token1 = 40,
  aux_sym_join_type_token1 = 41,
  aux_sym_join_type_token2 = 42,
  aux_sym_join_type_token3 = 43,
  aux_sym_join_type_token4 = 44,
  aux_sym_join_type_token5 = 45,
  aux_sym_join_clause_token1 = 46,
  aux_sym_update_statement_token1 = 47,
  aux_sym_set_clause_token1 = 48,
  aux_sym_insert_statement_token1 = 49,
  aux_sym_insert_statement_token2 = 50,
  aux_sym_values_clause_token1 = 51,
  aux_sym_in_expression_token1 = 52,
  aux_sym_references_constraint_token1 = 53,
  aux_sym_on_delete_action_token1 = 54,
  aux_sym__constraint_action_token1 = 55,
  aux_sym__constraint_action_token2 = 56,
  aux_sym__constraint_action_token3 = 57,
  anon_sym_LT = 58,
  anon_sym_LT_EQ = 59,
  anon_sym_LT_GT = 60,
  anon_sym_GT = 61,
  anon_sym_GT_EQ = 62,
  aux_sym_is_expression_token1 = 63,
  aux_sym_distinct_from_token1 = 64,
  aux_sym_boolean_expression_token1 = 65,
  aux_sym_boolean_expression_token2 = 66,
  aux_sym_TRUE_token1 = 67,
  aux_sym_FALSE_token1 = 68,
  aux_sym_number_token1 = 69,
  sym_identifier = 70,
  aux_sym_string_token1 = 71,
  aux_sym_string_token2 = 72,
  anon_sym_DASH_GT_GT = 73,
  aux_sym_ordered_expression_token1 = 74,
  aux_sym_ordered_expression_token2 = 75,
  anon_sym_LBRACK = 76,
  anon_sym_RBRACK = 77,
  anon_sym_COLON_COLON = 78,
  sym_comment = 79,
  anon_sym_TILDE = 80,
  anon_sym_PLUS = 81,
  anon_sym_DOLLAR = 82,
  sym_source_file = 83,
  sym__statement = 84,
  sym_create_function_statement = 85,
  sym__function_optimizer_hint = 86,
  sym__function_language = 87,
  sym__create_function_return_type = 88,
  sym_setof = 89,
  sym_constrained_type = 90,
  sym_create_function_parameter = 91,
  sym_create_function_parameters = 92,
  sym_function_body = 93,
  sym_create_schema_statement = 94,
  sym_create_domain_statement = 95,
  sym_create_type_statement = 96,
  sym_create_index_statement = 97,
  sym_create_table_column_parameter = 98,
  sym_named_constraint = 99,
  sym_column_default = 100,
  sym_create_table_parameters = 101,
  sym__table_constraint = 102,
  sym_table_constraint_check = 103,
  sym_table_constraint_foreign_key = 104,
  sym_table_constraint_unique = 105,
  sym_table_constraint_primary_key = 106,
  sym_primary_key_constraint = 107,
  sym_create_table_statement = 108,
  sym_using_clause = 109,
  sym_index_table_parameters = 110,
  sym_select_statement = 111,
  sym_group_by_clause_body = 112,
  sym_group_by_clause = 113,
  sym_order_by_clause_body = 114,
  sym_order_by_clause = 115,
  sym_where_clause = 116,
  sym__aliased_expression = 117,
  sym__aliasable_expression = 118,
  sym_select_clause_body = 119,
  sym_select_clause = 120,
  sym_from_clause = 121,
  sym_join_type = 122,
  sym_join_clause = 123,
  sym_select_subexpression = 124,
  sym_update_statement = 125,
  sym_set_clause = 126,
  sym_set_clause_body = 127,
  sym_assigment_expression = 128,
  sym_insert_statement = 129,
  sym_values_clause = 130,
  sym_values_clause_body = 131,
  sym_in_expression = 132,
  sym_tuple = 133,
  sym_references_constraint = 134,
  sym_on_update_action = 135,
  sym_on_delete_action = 136,
  sym__constraint_action = 137,
  sym_unique_constraint = 138,
  sym_null_constraint = 139,
  sym_check_constraint = 140,
  sym_parameter = 141,
  sym_parameters = 142,
  sym_function_call = 143,
  sym_comparison_operator = 144,
  sym__parenthesized_expression = 145,
  sym_is_expression = 146,
  sym_distinct_from = 147,
  sym_boolean_expression = 148,
  sym_NULL = 149,
  sym_TRUE = 150,
  sym_FALSE = 151,
  sym_number = 152,
  sym_string = 153,
  sym_field_access = 154,
  sym_ordered_expression = 155,
  sym__type_alias = 156,
  sym_array_type = 157,
  sym__type = 158,
  sym_type_cast = 159,
  sym_binary_expression = 160,
  sym_argument_reference = 161,
  sym__expression = 162,
  aux_sym_source_file_repeat1 = 163,
  aux_sym_create_function_statement_repeat1 = 164,
  aux_sym_create_function_parameters_repeat1 = 165,
  aux_sym_create_domain_statement_repeat1 = 166,
  aux_sym_create_table_column_parameter_repeat1 = 167,
  aux_sym_create_table_parameters_repeat1 = 168,
  aux_sym_table_constraint_foreign_key_repeat1 = 169,
  aux_sym_index_table_parameters_repeat1 = 170,
  aux_sym_select_statement_repeat1 = 171,
  aux_sym_group_by_clause_body_repeat1 = 172,
  aux_sym_select_clause_body_repeat1 = 173,
  aux_sym_set_clause_body_repeat1 = 174,
  aux_sym_parameters_repeat1 = 175,
  anon_alias_sym_NULL = 176,
  anon_alias_sym_ON_UPDATE = 177,
  alias_sym_default = 178,
  alias_sym_language = 179,
  alias_sym_type = 180,
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
  [aux_sym_create_schema_statement_token1] = "CREATE_SCHEMA",
  [aux_sym_create_schema_statement_token2] = "IF_NOT_EXISTS",
  [aux_sym_create_schema_statement_token3] = "NOT",
  [aux_sym_create_schema_statement_token4] = "IF_NOT_EXISTS",
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
  [aux_sym_in_expression_token1] = "IN",
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
  [sym_create_schema_statement] = "create_schema_statement",
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
  [aux_sym_create_schema_statement_token1] = aux_sym_create_schema_statement_token1,
  [aux_sym_create_schema_statement_token2] = aux_sym_create_schema_statement_token2,
  [aux_sym_create_schema_statement_token3] = aux_sym_create_schema_statement_token3,
  [aux_sym_create_schema_statement_token4] = aux_sym_create_schema_statement_token2,
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
  [sym_create_schema_statement] = sym_create_schema_statement,
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
  [aux_sym_create_schema_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_schema_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_schema_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_schema_statement_token4] = {
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
  [sym_create_schema_statement] = {
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
  [5] = {.index = 0, .length = 1},
  [6] = {.index = 1, .length = 1},
  [8] = {.index = 2, .length = 1},
  [9] = {.index = 3, .length = 1},
  [12] = {.index = 4, .length = 2},
  [15] = {.index = 6, .length = 2},
  [16] = {.index = 8, .length = 2},
  [17] = {.index = 10, .length = 3},
  [18] = {.index = 13, .length = 1},
  [20] = {.index = 14, .length = 1},
  [22] = {.index = 15, .length = 1},
  [23] = {.index = 16, .length = 2},
  [24] = {.index = 18, .length = 2},
  [27] = {.index = 20, .length = 1},
  [29] = {.index = 21, .length = 1},
  [30] = {.index = 21, .length = 1},
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
    [0] = aux_sym_create_schema_statement_token1,
  },
  [3] = {
    [0] = aux_sym_create_domain_statement_token1,
  },
  [4] = {
    [0] = aux_sym_create_table_statement_token1,
  },
  [7] = {
    [0] = alias_sym_type,
  },
  [10] = {
    [1] = aux_sym_order_by_clause_token1,
  },
  [11] = {
    [0] = aux_sym_create_type_statement_token1,
  },
  [13] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [14] = {
    [0] = aux_sym_create_schema_statement_token1,
    [3] = aux_sym_create_schema_statement_token2,
  },
  [19] = {
    [1] = aux_sym_distinct_from_token1,
  },
  [20] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [21] = {
    [2] = alias_sym_default,
  },
  [25] = {
    [3] = alias_sym_default,
  },
  [26] = {
    [1] = alias_sym_language,
  },
  [28] = {
    [1] = aux_sym_table_constraint_foreign_key_token1,
  },
  [29] = {
    [0] = anon_alias_sym_ON_UPDATE,
    [1] = anon_alias_sym_ON_UPDATE,
  },
  [30] = {
    [0] = aux_sym_on_delete_action_token1,
  },
  [31] = {
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
      if (eof) ADVANCE(278);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '+') ADVANCE(493);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == '\\') SKIP(268)
      if (lookahead == ']') ADVANCE(487);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == '~') ADVANCE(492);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(51);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(217);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(200);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(57);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(374);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(443);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(430);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(295);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(16)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '/') ADVANCE(477);
      if (lookahead == '\\') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(478);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(491);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(491);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(434);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(445);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(34)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(488);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(483);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(307);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 129:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(298);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 130:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 131:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(235);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 136:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 137:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 138:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 140:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 141:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 142:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 143:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 144:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 145:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 157:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(309);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 168:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 169:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 171:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 174:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 175:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 176:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 177:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 178:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(86);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 205:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 206:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 207:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 208:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 226:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(284);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 252:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 253:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 254:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 255:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 256:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 257:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 258:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 259:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 260:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 261:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 262:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(305);
      END_STATE();
    case 263:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 264:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 265:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(316);
      END_STATE();
    case 266:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(480);
      END_STATE();
    case 267:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 268:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(267)
      END_STATE();
    case 269:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(276)
      END_STATE();
    case 270:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(276)
      if (lookahead == '\r') SKIP(269)
      END_STATE();
    case 271:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(275)
      END_STATE();
    case 272:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(275)
      if (lookahead == '\r') SKIP(271)
      END_STATE();
    case 273:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(277)
      END_STATE();
    case 274:
      if (eof) ADVANCE(278);
      if (lookahead == '\n') SKIP(277)
      if (lookahead == '\r') SKIP(273)
      END_STATE();
    case 275:
      if (eof) ADVANCE(278);
      if (lookahead == '$') ADVANCE(494);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '\\') SKIP(272)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(444);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(374);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(443);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(430);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(436);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(275)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 276:
      if (eof) ADVANCE(278);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '+') ADVANCE(493);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == '\\') SKIP(270)
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == '~') ADVANCE(492);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(217);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(200);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(203);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(276)
      END_STATE();
    case 277:
      if (eof) ADVANCE(278);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '+') ADVANCE(493);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == '[') ADVANCE(486);
      if (lookahead == '\\') SKIP(274)
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == '~') ADVANCE(492);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(277)
      END_STATE();
    case 278:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token4);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token2);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token3);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token3);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token4);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token2);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_join_type_token5);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_set_clause_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_values_clause_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead == '>') ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead == '\r') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\'') ADVANCE(491);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(468);
      if (lookahead == '/') ADVANCE(473);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(468);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead == '/') ADVANCE(470);
      if (lookahead == '\\') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == '\r') ADVANCE(475);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '$') ADVANCE(490);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '*') ADVANCE(482);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '/') ADVANCE(477);
      if (lookahead == '\\') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(478);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(266);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead == '/') ADVANCE(480);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '$') ADVANCE(491);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(295);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 276},
  [3] = {.lex_state = 276},
  [4] = {.lex_state = 275},
  [5] = {.lex_state = 276},
  [6] = {.lex_state = 276},
  [7] = {.lex_state = 276},
  [8] = {.lex_state = 276},
  [9] = {.lex_state = 276},
  [10] = {.lex_state = 276},
  [11] = {.lex_state = 276},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 277},
  [16] = {.lex_state = 276},
  [17] = {.lex_state = 277},
  [18] = {.lex_state = 277},
  [19] = {.lex_state = 277},
  [20] = {.lex_state = 277},
  [21] = {.lex_state = 276},
  [22] = {.lex_state = 277},
  [23] = {.lex_state = 277},
  [24] = {.lex_state = 277},
  [25] = {.lex_state = 277},
  [26] = {.lex_state = 277},
  [27] = {.lex_state = 276},
  [28] = {.lex_state = 276},
  [29] = {.lex_state = 276},
  [30] = {.lex_state = 276},
  [31] = {.lex_state = 276},
  [32] = {.lex_state = 277},
  [33] = {.lex_state = 277},
  [34] = {.lex_state = 277},
  [35] = {.lex_state = 277},
  [36] = {.lex_state = 277},
  [37] = {.lex_state = 276},
  [38] = {.lex_state = 277},
  [39] = {.lex_state = 276},
  [40] = {.lex_state = 276},
  [41] = {.lex_state = 276},
  [42] = {.lex_state = 277},
  [43] = {.lex_state = 276},
  [44] = {.lex_state = 276},
  [45] = {.lex_state = 276},
  [46] = {.lex_state = 276},
  [47] = {.lex_state = 277},
  [48] = {.lex_state = 276},
  [49] = {.lex_state = 276},
  [50] = {.lex_state = 276},
  [51] = {.lex_state = 276},
  [52] = {.lex_state = 277},
  [53] = {.lex_state = 277},
  [54] = {.lex_state = 277},
  [55] = {.lex_state = 276},
  [56] = {.lex_state = 277},
  [57] = {.lex_state = 276},
  [58] = {.lex_state = 277},
  [59] = {.lex_state = 277},
  [60] = {.lex_state = 277},
  [61] = {.lex_state = 277},
  [62] = {.lex_state = 277},
  [63] = {.lex_state = 277},
  [64] = {.lex_state = 277},
  [65] = {.lex_state = 276},
  [66] = {.lex_state = 276},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 277},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 21},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 21},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 276},
  [105] = {.lex_state = 277},
  [106] = {.lex_state = 276},
  [107] = {.lex_state = 276},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 277},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 277},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 277},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 277},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 277},
  [132] = {.lex_state = 277},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 277},
  [136] = {.lex_state = 277},
  [137] = {.lex_state = 277},
  [138] = {.lex_state = 277},
  [139] = {.lex_state = 277},
  [140] = {.lex_state = 277},
  [141] = {.lex_state = 277},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 277},
  [150] = {.lex_state = 277},
  [151] = {.lex_state = 0},
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
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 27},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 28},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 34},
  [178] = {.lex_state = 34},
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
  [197] = {.lex_state = 28},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 35},
  [206] = {.lex_state = 25},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 35},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 25},
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
  [232] = {.lex_state = 25},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 25},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 25},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 25},
  [243] = {.lex_state = 25},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 25},
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
  [257] = {.lex_state = 25},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
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
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 36},
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
  [299] = {.lex_state = 25},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 25},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 25},
  [323] = {.lex_state = 25},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 25},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 25},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 25},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 25},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 25},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 25},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 25},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 25},
  [355] = {.lex_state = 276},
  [356] = {.lex_state = 25},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 25},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 25},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 25},
  [369] = {.lex_state = 25},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 25},
  [374] = {.lex_state = 25},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 471},
  [377] = {.lex_state = 26},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 28},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 25},
  [384] = {.lex_state = 25},
  [385] = {.lex_state = 25},
  [386] = {.lex_state = 25},
  [387] = {.lex_state = 25},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 25},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 25},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 26},
  [396] = {.lex_state = 471},
  [397] = {.lex_state = 276},
  [398] = {.lex_state = 28},
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
    [aux_sym_create_schema_statement_token1] = ACTIONS(1),
    [aux_sym_create_schema_statement_token2] = ACTIONS(1),
    [aux_sym_create_schema_statement_token3] = ACTIONS(1),
    [aux_sym_create_schema_statement_token4] = ACTIONS(1),
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
    [sym_source_file] = STATE(394),
    [sym__statement] = STATE(129),
    [sym_create_function_statement] = STATE(226),
    [sym_create_schema_statement] = STATE(226),
    [sym_create_domain_statement] = STATE(226),
    [sym_create_type_statement] = STATE(226),
    [sym_create_index_statement] = STATE(226),
    [sym_create_table_statement] = STATE(226),
    [sym_select_statement] = STATE(226),
    [sym_select_clause] = STATE(103),
    [sym_update_statement] = STATE(226),
    [sym_insert_statement] = STATE(226),
    [aux_sym_source_file_repeat1] = STATE(129),
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
    STATE(46), 1,
      sym__expression,
    STATE(128), 1,
      sym_select_clause_body,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(117), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(21), 3,
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
    STATE(45), 13,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
    STATE(46), 1,
      sym__expression,
    STATE(128), 1,
      sym_select_clause_body,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
    STATE(117), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(21), 3,
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
    STATE(45), 13,
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
    STATE(46), 1,
      sym__expression,
    STATE(128), 1,
      sym_select_clause_body,
    STATE(117), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(21), 3,
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
    STATE(45), 13,
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
    STATE(46), 1,
      sym__expression,
    STATE(128), 1,
      sym_select_clause_body,
    ACTIONS(23), 2,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
    STATE(117), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(21), 3,
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
    STATE(45), 13,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
    ACTIONS(73), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
    ACTIONS(21), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
    ACTIONS(51), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [1023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
    ACTIONS(59), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [1151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [1193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [1237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(93), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(105), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1445] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(109), 22,
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
  [1498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [1539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [1580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [1621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [1662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [1703] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(137), 22,
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
  [1756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [1797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1920] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(147), 1,
      aux_sym_in_expression_token1,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(109), 22,
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
  [1973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2098] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(163), 1,
      aux_sym_function_body_token1,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(161), 19,
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
  [2155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 4,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2278] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(177), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [2446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [2487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(139), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [2569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(177), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [2696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [2737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      aux_sym_in_expression_token1,
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
      aux_sym_create_schema_statement_token3,
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
  [2778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
  [2819] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(147), 1,
      aux_sym_in_expression_token1,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(137), 22,
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
  [2872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
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
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2915] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(111), 4,
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
    ACTIONS(113), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(111), 4,
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
    STATE(103), 1,
      sym_select_clause,
    STATE(150), 1,
      sym__expression,
    STATE(379), 1,
      sym_select_statement,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(103), 1,
      sym_select_clause,
    STATE(149), 1,
      sym__expression,
    STATE(359), 1,
      sym_select_statement,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
  [3145] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(147), 1,
      aux_sym_in_expression_token1,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
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
  [3195] = 14,
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
    STATE(46), 1,
      sym__expression,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(46), 1,
      sym__expression,
    STATE(121), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(137), 1,
      sym__expression,
    STATE(361), 1,
      sym_values_clause_body,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(132), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(127), 1,
      sym__expression,
    STATE(251), 1,
      sym_ordered_expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(131), 1,
      sym__expression,
    STATE(291), 1,
      sym_ordered_expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(104), 1,
      sym__expression,
    STATE(187), 1,
      sym_group_by_clause_body,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(105), 1,
      sym__expression,
    STATE(198), 1,
      sym_order_by_clause_body,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(106), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(69), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(149), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(141), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(136), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(50), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(44), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(43), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(37), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(65), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(122), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(42), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(140), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(45), 13,
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
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(58), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(63), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(111), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(64), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(62), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
    STATE(135), 1,
      sym__expression,
    STATE(26), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(36), 13,
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
  [5006] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(225), 1,
      aux_sym_where_clause_token1,
    ACTIONS(227), 1,
      aux_sym_from_clause_token1,
    ACTIONS(229), 1,
      aux_sym_join_type_token1,
    ACTIONS(233), 1,
      aux_sym_join_clause_token1,
    STATE(109), 1,
      sym_from_clause,
    STATE(158), 1,
      sym_where_clause,
    STATE(169), 1,
      sym_group_by_clause,
    STATE(190), 1,
      sym_order_by_clause,
    STATE(367), 1,
      sym_join_type,
    STATE(108), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(231), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(219), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5063] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(235), 10,
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
  [5114] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(147), 1,
      aux_sym_in_expression_token1,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(239), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5164] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(243), 11,
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
  [5210] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(111), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(245), 11,
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
  [5256] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(225), 1,
      aux_sym_where_clause_token1,
    ACTIONS(229), 1,
      aux_sym_join_type_token1,
    ACTIONS(233), 1,
      aux_sym_join_clause_token1,
    STATE(152), 1,
      sym_where_clause,
    STATE(166), 1,
      sym_group_by_clause,
    STATE(192), 1,
      sym_order_by_clause,
    STATE(367), 1,
      sym_join_type,
    STATE(115), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(231), 3,
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
  [5307] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(225), 1,
      aux_sym_where_clause_token1,
    ACTIONS(229), 1,
      aux_sym_join_type_token1,
    ACTIONS(233), 1,
      aux_sym_join_clause_token1,
    STATE(152), 1,
      sym_where_clause,
    STATE(166), 1,
      sym_group_by_clause,
    STATE(192), 1,
      sym_order_by_clause,
    STATE(367), 1,
      sym_join_type,
    STATE(110), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(231), 3,
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
  [5358] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(225), 1,
      aux_sym_where_clause_token1,
    ACTIONS(229), 1,
      aux_sym_join_type_token1,
    ACTIONS(233), 1,
      aux_sym_join_clause_token1,
    STATE(156), 1,
      sym_where_clause,
    STATE(176), 1,
      sym_group_by_clause,
    STATE(189), 1,
      sym_order_by_clause,
    STATE(367), 1,
      sym_join_type,
    STATE(115), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(231), 3,
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
  [5409] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(147), 1,
      aux_sym_in_expression_token1,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(243), 10,
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
      aux_sym_create_schema_statement_token3,
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
      aux_sym_create_schema_statement_token3,
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
  [5510] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(147), 1,
      aux_sym_in_expression_token1,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
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
  [5553] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_join_type_token1,
    ACTIONS(265), 1,
      aux_sym_join_clause_token1,
    STATE(367), 1,
      sym_join_type,
    STATE(115), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(262), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(257), 12,
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
  [5589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(268), 18,
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
  [5619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(273), 18,
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
  [5649] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(281), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(283), 1,
      aux_sym_column_default_token1,
    ACTIONS(285), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(287), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(289), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(291), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(123), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(295), 18,
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
  [5727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 19,
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
  [5752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 19,
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
  [5777] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(147), 1,
      aux_sym_in_expression_token1,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5818] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(281), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(283), 1,
      aux_sym_column_default_token1,
    ACTIONS(285), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(287), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(289), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(291), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(126), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(301), 17,
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
  [5892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(303), 17,
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
  [5921] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(310), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(313), 1,
      aux_sym_column_default_token1,
    ACTIONS(316), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(319), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(322), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(325), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(328), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(126), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5966] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    STATE(271), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(337), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 18,
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
  [6036] = 9,
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
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_select_clause,
    STATE(130), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(226), 9,
      sym_create_function_statement,
      sym_create_schema_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [6073] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(348), 1,
      aux_sym_select_clause_token1,
    ACTIONS(351), 1,
      aux_sym_update_statement_token1,
    ACTIONS(354), 1,
      aux_sym_insert_statement_token1,
    STATE(103), 1,
      sym_select_clause,
    STATE(130), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(226), 9,
      sym_create_function_statement,
      sym_create_schema_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [6110] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(337), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6151] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6193] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(147), 1,
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
  [6225] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(147), 1,
      sym_null_constraint,
    ACTIONS(363), 11,
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
  [6257] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6299] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6341] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6383] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6425] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6462] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6499] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym__function_language_token1,
    ACTIONS(385), 1,
      aux_sym_function_body_token1,
    ACTIONS(381), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(144), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(379), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym__function_language_token1,
    ACTIONS(385), 1,
      aux_sym_function_body_token1,
    ACTIONS(381), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(146), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(387), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym__function_language_token1,
    ACTIONS(385), 1,
      aux_sym_function_body_token1,
    ACTIONS(381), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(146), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(389), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym__function_language_token1,
    ACTIONS(385), 1,
      aux_sym_function_body_token1,
    ACTIONS(381), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(143), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(391), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym__function_language_token1,
    ACTIONS(401), 1,
      aux_sym_function_body_token1,
    ACTIONS(395), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(146), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(393), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 14,
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
  [6701] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(285), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(155), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(406), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6733] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6769] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(155), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      aux_sym_create_index_statement_token2,
    STATE(304), 1,
      sym_on_update_action,
    STATE(305), 1,
      sym_on_delete_action,
    ACTIONS(414), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6833] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(176), 1,
      sym_group_by_clause,
    STATE(189), 1,
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
  [6860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym_create_index_statement_token2,
    STATE(317), 1,
      sym_on_update_action,
    STATE(318), 1,
      sym_on_delete_action,
    ACTIONS(418), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6885] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(425), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(428), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(154), 3,
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
  [6914] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(285), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(154), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(431), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6943] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(162), 1,
      sym_group_by_clause,
    STATE(193), 1,
      sym_order_by_clause,
    ACTIONS(433), 9,
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
    ACTIONS(416), 1,
      aux_sym_create_index_statement_token2,
    STATE(281), 1,
      sym_on_delete_action,
    STATE(316), 1,
      sym_on_update_action,
    ACTIONS(435), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(166), 1,
      sym_group_by_clause,
    STATE(192), 1,
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
  [7022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(437), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(243), 10,
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
  [7066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(442), 10,
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
  [7088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(199), 1,
      sym_order_by_clause,
    ACTIONS(444), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON_COLON,
    ACTIONS(437), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    STATE(256), 1,
      sym_constrained_type,
    ACTIONS(21), 2,
      aux_sym_create_schema_statement_token3,
      aux_sym__constraint_action_token3,
    STATE(207), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(19), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [7153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_create_index_statement_token2,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(189), 1,
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
  [7191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(450), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(243), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(192), 1,
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
  [7254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 11,
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
  [7271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_create_index_statement_token2,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7288] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 11,
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
  [7322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 11,
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
  [7356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(193), 1,
      sym_order_by_clause,
    ACTIONS(433), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7377] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(467), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(469), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(471), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(270), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(467), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(469), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(471), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(287), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_create_index_statement_token2,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 11,
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
  [7465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [7561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 10,
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
  [7577] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(493), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(495), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(497), 1,
      aux_sym_TRUE_token1,
    ACTIONS(499), 1,
      aux_sym_FALSE_token1,
    STATE(61), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7617] = 2,
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
  [7632] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(501), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(503), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(505), 1,
      aux_sym_TRUE_token1,
    ACTIONS(507), 1,
      aux_sym_FALSE_token1,
    STATE(48), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7657] = 2,
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
  [7672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(509), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(515), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7744] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(520), 1,
      aux_sym_create_function_statement_token2,
    ACTIONS(522), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(524), 1,
      aux_sym_create_schema_statement_token1,
    ACTIONS(526), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(528), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(530), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(532), 1,
      aux_sym_create_table_statement_token1,
    STATE(380), 1,
      sym_unique_constraint,
  [7775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_where_clause_token1,
    STATE(223), 1,
      sym_where_clause,
    ACTIONS(538), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7823] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(503), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(505), 1,
      aux_sym_TRUE_token1,
    ACTIONS(507), 1,
      aux_sym_FALSE_token1,
    STATE(29), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_where_clause_token1,
    STATE(234), 1,
      sym_where_clause,
    ACTIONS(542), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_where_clause_token1,
    STATE(219), 1,
      sym_where_clause,
    ACTIONS(544), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_where_clause_token1,
    STATE(225), 1,
      sym_where_clause,
    ACTIONS(546), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(548), 1,
      aux_sym_setof_token1,
    STATE(134), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(145), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [7919] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(185), 1,
      sym_type_cast,
    STATE(163), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [7943] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(554), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_NULL,
    STATE(147), 1,
      sym_null_constraint,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_where_clause_token1,
    STATE(228), 1,
      sym_where_clause,
    ACTIONS(558), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7987] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(560), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_NULL,
    STATE(147), 1,
      sym_null_constraint,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(548), 1,
      aux_sym_setof_token1,
    STATE(134), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(142), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [8033] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(495), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(497), 1,
      aux_sym_TRUE_token1,
    ACTIONS(499), 1,
      aux_sym_FALSE_token1,
    STATE(54), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_function_body_token1,
    ACTIONS(564), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8097] = 2,
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
  [8110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(261), 1,
      sym_constrained_type,
    STATE(313), 1,
      sym_create_function_parameter,
    STATE(209), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8237] = 3,
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
  [8251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(261), 1,
      sym_constrained_type,
    STATE(265), 1,
      sym_create_function_parameter,
    STATE(209), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 5,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(172), 1,
      sym_constrained_type,
    STATE(133), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_set_clause_token1,
    STATE(171), 1,
      sym__constraint_action,
    ACTIONS(612), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [8393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_set_clause_token1,
    STATE(165), 1,
      sym__constraint_action,
    ACTIONS(614), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [8407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(25), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(118), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    ACTIONS(620), 1,
      aux_sym_using_clause_token1,
    STATE(203), 1,
      sym_index_table_parameters,
    STATE(321), 1,
      sym_using_clause,
  [8447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(9), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(252), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    ACTIONS(620), 1,
      aux_sym_using_clause_token1,
    STATE(200), 1,
      sym_index_table_parameters,
    STATE(286), 1,
      sym_using_clause,
  [8487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(148), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      aux_sym_parameters_repeat1,
  [8512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_index_table_parameters_repeat1,
  [8538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_create_function_parameters_repeat1,
  [8551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_index_table_parameters_repeat1,
  [8577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_create_table_parameters_repeat1,
  [8614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_EQ,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
    STATE(194), 1,
      sym_assigment_expression,
    STATE(216), 1,
      sym_set_clause_body,
  [8651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_create_function_parameters_repeat1,
  [8664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_parameters_repeat1,
  [8690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_EQ,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym_string,
  [8714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_select_clause_token1,
    STATE(103), 1,
      sym_select_clause,
    STATE(289), 1,
      sym_select_statement,
  [8727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      aux_sym_select_clause_token1,
    STATE(103), 1,
      sym_select_clause,
    STATE(290), 1,
      sym_select_statement,
  [8740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_create_function_parameters_repeat1,
  [8753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      aux_sym_parameters_repeat1,
  [8792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_create_table_parameters_repeat1,
  [8818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_index_table_parameters_repeat1,
  [8831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_create_table_parameters_repeat1,
  [8909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym_string,
  [8922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym_create_index_statement_token2,
    STATE(183), 1,
      sym_on_update_action,
  [8953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_create_schema_statement_token2,
    ACTIONS(709), 1,
      sym_identifier,
  [8987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_index_table_parameters,
  [8997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_tuple,
  [9015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    ACTIONS(715), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_SQUOTE,
    ACTIONS(717), 1,
      anon_sym_SEMI,
  [9035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_tuple,
  [9053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      aux_sym_set_clause_token1,
    STATE(208), 1,
      sym_set_clause,
  [9063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym_join_type_token5,
    ACTIONS(723), 1,
      aux_sym_join_clause_token1,
  [9073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_references_constraint_token1,
    STATE(310), 1,
      sym_references_constraint,
  [9083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(348), 1,
      sym_create_function_parameters,
  [9093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_create_table_parameters,
  [9103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    STATE(284), 1,
      sym_parameter,
  [9121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(737), 1,
      anon_sym_SQUOTE,
  [9139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_tuple,
  [9149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_update_statement_token1,
    ACTIONS(743), 1,
      aux_sym_on_delete_action_token1,
  [9159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      aux_sym_create_index_statement_token2,
    STATE(182), 1,
      sym_on_delete_action,
  [9169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym_create_index_statement_token2,
    STATE(182), 1,
      sym_on_update_action,
  [9179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      aux_sym_values_clause_token1,
    STATE(227), 1,
      sym_values_clause,
  [9189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      sym_create_function_parameters,
  [9199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_parameters,
  [9209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_tuple,
  [9219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_references_constraint_token1,
    STATE(320), 1,
      sym_references_constraint,
  [9237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    STATE(260), 1,
      sym_parameter,
  [9263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
  [9273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      aux_sym_create_index_statement_token2,
    STATE(183), 1,
      sym_on_delete_action,
  [9283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      aux_sym_create_index_statement_token2,
    STATE(184), 1,
      sym_on_delete_action,
  [9293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym_create_index_statement_token2,
    STATE(184), 1,
      sym_on_update_action,
  [9303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
    STATE(212), 1,
      sym_assigment_expression,
  [9313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym_index_table_parameters,
  [9331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_identifier,
  [9338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_identifier,
  [9345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
  [9352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_on_delete_action_token1,
  [9359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_identifier,
  [9366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_update_statement_token1,
  [9373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_LPAREN,
  [9380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_identifier,
  [9387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym__constraint_action_token3,
  [9394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      aux_sym_create_function_statement_token4,
  [9401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
  [9408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym_identifier,
  [9415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [9422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_LPAREN,
  [9429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [9436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_identifier,
  [9443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym_create_function_statement_token4,
  [9450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_identifier,
  [9457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
  [9464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_EQ,
  [9471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym_from_clause_token1,
  [9478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      aux_sym_create_index_statement_token2,
  [9485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_create_index_statement_token2,
  [9492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
  [9499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_SQUOTE,
  [9506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym_create_schema_statement_token4,
  [9513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_create_function_statement_token4,
  [9520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      aux_sym_create_function_statement_token4,
  [9527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_identifier,
  [9534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      aux_sym_create_index_statement_token2,
  [9541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      aux_sym_join_clause_token1,
  [9548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_identifier,
  [9562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      aux_sym_in_expression_token1,
  [9569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_identifier,
  [9576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SQUOTE,
  [9583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [9597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_identifier,
  [9604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [9611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      aux_sym_create_index_statement_token2,
  [9618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      aux_sym_function_body_token1,
  [9625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym_create_schema_statement_token3,
  [9632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_LPAREN,
  [9639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_identifier,
  [9646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_join_clause_token1,
  [9653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_identifier,
  [9660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_identifier,
  [9667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      aux_sym_join_clause_token1,
  [9674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      aux_sym_group_by_clause_token2,
  [9681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      aux_sym_group_by_clause_token2,
  [9688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_identifier,
  [9695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_identifier,
  [9702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym_number_token1,
  [9709] = 2,
    ACTIONS(855), 1,
      aux_sym_string_token1,
    ACTIONS(857), 1,
      sym_comment,
  [9716] = 2,
    ACTIONS(857), 1,
      sym_comment,
    ACTIONS(859), 1,
      aux_sym_string_token2,
  [9723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      aux_sym_number_token1,
  [9730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
  [9737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      aux_sym_create_index_statement_token1,
  [9744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_SQUOTE,
  [9758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_identifier,
  [9765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym_identifier,
  [9772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_identifier,
  [9779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_identifier,
  [9786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_identifier,
  [9793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [9800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      aux_sym_from_clause_token1,
  [9807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_identifier,
  [9814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
  [9821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_identifier,
  [9828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      aux_sym_create_function_statement_token3,
  [9835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      ts_builtin_sym_end,
  [9842] = 2,
    ACTIONS(857), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym_string_token2,
  [9849] = 2,
    ACTIONS(857), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_string_token1,
  [9856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym_in_expression_token1,
  [9863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      aux_sym_insert_statement_token2,
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
  [SMALL_STATE(25)] = 1193,
  [SMALL_STATE(26)] = 1237,
  [SMALL_STATE(27)] = 1281,
  [SMALL_STATE(28)] = 1322,
  [SMALL_STATE(29)] = 1363,
  [SMALL_STATE(30)] = 1404,
  [SMALL_STATE(31)] = 1445,
  [SMALL_STATE(32)] = 1498,
  [SMALL_STATE(33)] = 1539,
  [SMALL_STATE(34)] = 1580,
  [SMALL_STATE(35)] = 1621,
  [SMALL_STATE(36)] = 1662,
  [SMALL_STATE(37)] = 1703,
  [SMALL_STATE(38)] = 1756,
  [SMALL_STATE(39)] = 1797,
  [SMALL_STATE(40)] = 1838,
  [SMALL_STATE(41)] = 1879,
  [SMALL_STATE(42)] = 1920,
  [SMALL_STATE(43)] = 1973,
  [SMALL_STATE(44)] = 2016,
  [SMALL_STATE(45)] = 2057,
  [SMALL_STATE(46)] = 2098,
  [SMALL_STATE(47)] = 2155,
  [SMALL_STATE(48)] = 2196,
  [SMALL_STATE(49)] = 2237,
  [SMALL_STATE(50)] = 2278,
  [SMALL_STATE(51)] = 2323,
  [SMALL_STATE(52)] = 2364,
  [SMALL_STATE(53)] = 2405,
  [SMALL_STATE(54)] = 2446,
  [SMALL_STATE(55)] = 2487,
  [SMALL_STATE(56)] = 2528,
  [SMALL_STATE(57)] = 2569,
  [SMALL_STATE(58)] = 2610,
  [SMALL_STATE(59)] = 2655,
  [SMALL_STATE(60)] = 2696,
  [SMALL_STATE(61)] = 2737,
  [SMALL_STATE(62)] = 2778,
  [SMALL_STATE(63)] = 2819,
  [SMALL_STATE(64)] = 2872,
  [SMALL_STATE(65)] = 2915,
  [SMALL_STATE(66)] = 2967,
  [SMALL_STATE(67)] = 3019,
  [SMALL_STATE(68)] = 3082,
  [SMALL_STATE(69)] = 3145,
  [SMALL_STATE(70)] = 3195,
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
  [SMALL_STATE(104)] = 5063,
  [SMALL_STATE(105)] = 5114,
  [SMALL_STATE(106)] = 5164,
  [SMALL_STATE(107)] = 5210,
  [SMALL_STATE(108)] = 5256,
  [SMALL_STATE(109)] = 5307,
  [SMALL_STATE(110)] = 5358,
  [SMALL_STATE(111)] = 5409,
  [SMALL_STATE(112)] = 5454,
  [SMALL_STATE(113)] = 5482,
  [SMALL_STATE(114)] = 5510,
  [SMALL_STATE(115)] = 5553,
  [SMALL_STATE(116)] = 5589,
  [SMALL_STATE(117)] = 5619,
  [SMALL_STATE(118)] = 5649,
  [SMALL_STATE(119)] = 5697,
  [SMALL_STATE(120)] = 5727,
  [SMALL_STATE(121)] = 5752,
  [SMALL_STATE(122)] = 5777,
  [SMALL_STATE(123)] = 5818,
  [SMALL_STATE(124)] = 5863,
  [SMALL_STATE(125)] = 5892,
  [SMALL_STATE(126)] = 5921,
  [SMALL_STATE(127)] = 5966,
  [SMALL_STATE(128)] = 6012,
  [SMALL_STATE(129)] = 6036,
  [SMALL_STATE(130)] = 6073,
  [SMALL_STATE(131)] = 6110,
  [SMALL_STATE(132)] = 6151,
  [SMALL_STATE(133)] = 6193,
  [SMALL_STATE(134)] = 6225,
  [SMALL_STATE(135)] = 6257,
  [SMALL_STATE(136)] = 6299,
  [SMALL_STATE(137)] = 6341,
  [SMALL_STATE(138)] = 6383,
  [SMALL_STATE(139)] = 6425,
  [SMALL_STATE(140)] = 6462,
  [SMALL_STATE(141)] = 6499,
  [SMALL_STATE(142)] = 6536,
  [SMALL_STATE(143)] = 6565,
  [SMALL_STATE(144)] = 6594,
  [SMALL_STATE(145)] = 6623,
  [SMALL_STATE(146)] = 6652,
  [SMALL_STATE(147)] = 6681,
  [SMALL_STATE(148)] = 6701,
  [SMALL_STATE(149)] = 6733,
  [SMALL_STATE(150)] = 6769,
  [SMALL_STATE(151)] = 6805,
  [SMALL_STATE(152)] = 6833,
  [SMALL_STATE(153)] = 6860,
  [SMALL_STATE(154)] = 6885,
  [SMALL_STATE(155)] = 6914,
  [SMALL_STATE(156)] = 6943,
  [SMALL_STATE(157)] = 6970,
  [SMALL_STATE(158)] = 6995,
  [SMALL_STATE(159)] = 7022,
  [SMALL_STATE(160)] = 7044,
  [SMALL_STATE(161)] = 7066,
  [SMALL_STATE(162)] = 7088,
  [SMALL_STATE(163)] = 7109,
  [SMALL_STATE(164)] = 7128,
  [SMALL_STATE(165)] = 7153,
  [SMALL_STATE(166)] = 7170,
  [SMALL_STATE(167)] = 7191,
  [SMALL_STATE(168)] = 7212,
  [SMALL_STATE(169)] = 7233,
  [SMALL_STATE(170)] = 7254,
  [SMALL_STATE(171)] = 7271,
  [SMALL_STATE(172)] = 7288,
  [SMALL_STATE(173)] = 7305,
  [SMALL_STATE(174)] = 7322,
  [SMALL_STATE(175)] = 7339,
  [SMALL_STATE(176)] = 7356,
  [SMALL_STATE(177)] = 7377,
  [SMALL_STATE(178)] = 7404,
  [SMALL_STATE(179)] = 7431,
  [SMALL_STATE(180)] = 7448,
  [SMALL_STATE(181)] = 7465,
  [SMALL_STATE(182)] = 7481,
  [SMALL_STATE(183)] = 7497,
  [SMALL_STATE(184)] = 7513,
  [SMALL_STATE(185)] = 7529,
  [SMALL_STATE(186)] = 7545,
  [SMALL_STATE(187)] = 7561,
  [SMALL_STATE(188)] = 7577,
  [SMALL_STATE(189)] = 7602,
  [SMALL_STATE(190)] = 7617,
  [SMALL_STATE(191)] = 7632,
  [SMALL_STATE(192)] = 7657,
  [SMALL_STATE(193)] = 7672,
  [SMALL_STATE(194)] = 7687,
  [SMALL_STATE(195)] = 7706,
  [SMALL_STATE(196)] = 7725,
  [SMALL_STATE(197)] = 7744,
  [SMALL_STATE(198)] = 7775,
  [SMALL_STATE(199)] = 7790,
  [SMALL_STATE(200)] = 7805,
  [SMALL_STATE(201)] = 7823,
  [SMALL_STATE(202)] = 7845,
  [SMALL_STATE(203)] = 7863,
  [SMALL_STATE(204)] = 7881,
  [SMALL_STATE(205)] = 7899,
  [SMALL_STATE(206)] = 7919,
  [SMALL_STATE(207)] = 7943,
  [SMALL_STATE(208)] = 7969,
  [SMALL_STATE(209)] = 7987,
  [SMALL_STATE(210)] = 8013,
  [SMALL_STATE(211)] = 8033,
  [SMALL_STATE(212)] = 8055,
  [SMALL_STATE(213)] = 8069,
  [SMALL_STATE(214)] = 8084,
  [SMALL_STATE(215)] = 8097,
  [SMALL_STATE(216)] = 8110,
  [SMALL_STATE(217)] = 8123,
  [SMALL_STATE(218)] = 8135,
  [SMALL_STATE(219)] = 8147,
  [SMALL_STATE(220)] = 8159,
  [SMALL_STATE(221)] = 8171,
  [SMALL_STATE(222)] = 8189,
  [SMALL_STATE(223)] = 8201,
  [SMALL_STATE(224)] = 8213,
  [SMALL_STATE(225)] = 8225,
  [SMALL_STATE(226)] = 8237,
  [SMALL_STATE(227)] = 8251,
  [SMALL_STATE(228)] = 8263,
  [SMALL_STATE(229)] = 8275,
  [SMALL_STATE(230)] = 8287,
  [SMALL_STATE(231)] = 8299,
  [SMALL_STATE(232)] = 8311,
  [SMALL_STATE(233)] = 8329,
  [SMALL_STATE(234)] = 8341,
  [SMALL_STATE(235)] = 8353,
  [SMALL_STATE(236)] = 8364,
  [SMALL_STATE(237)] = 8379,
  [SMALL_STATE(238)] = 8393,
  [SMALL_STATE(239)] = 8407,
  [SMALL_STATE(240)] = 8419,
  [SMALL_STATE(241)] = 8431,
  [SMALL_STATE(242)] = 8447,
  [SMALL_STATE(243)] = 8459,
  [SMALL_STATE(244)] = 8471,
  [SMALL_STATE(245)] = 8487,
  [SMALL_STATE(246)] = 8499,
  [SMALL_STATE(247)] = 8512,
  [SMALL_STATE(248)] = 8525,
  [SMALL_STATE(249)] = 8538,
  [SMALL_STATE(250)] = 8551,
  [SMALL_STATE(251)] = 8564,
  [SMALL_STATE(252)] = 8577,
  [SMALL_STATE(253)] = 8588,
  [SMALL_STATE(254)] = 8601,
  [SMALL_STATE(255)] = 8614,
  [SMALL_STATE(256)] = 8627,
  [SMALL_STATE(257)] = 8638,
  [SMALL_STATE(258)] = 8651,
  [SMALL_STATE(259)] = 8664,
  [SMALL_STATE(260)] = 8677,
  [SMALL_STATE(261)] = 8690,
  [SMALL_STATE(262)] = 8701,
  [SMALL_STATE(263)] = 8714,
  [SMALL_STATE(264)] = 8727,
  [SMALL_STATE(265)] = 8740,
  [SMALL_STATE(266)] = 8753,
  [SMALL_STATE(267)] = 8766,
  [SMALL_STATE(268)] = 8779,
  [SMALL_STATE(269)] = 8792,
  [SMALL_STATE(270)] = 8805,
  [SMALL_STATE(271)] = 8818,
  [SMALL_STATE(272)] = 8831,
  [SMALL_STATE(273)] = 8844,
  [SMALL_STATE(274)] = 8857,
  [SMALL_STATE(275)] = 8870,
  [SMALL_STATE(276)] = 8883,
  [SMALL_STATE(277)] = 8896,
  [SMALL_STATE(278)] = 8909,
  [SMALL_STATE(279)] = 8922,
  [SMALL_STATE(280)] = 8935,
  [SMALL_STATE(281)] = 8943,
  [SMALL_STATE(282)] = 8953,
  [SMALL_STATE(283)] = 8961,
  [SMALL_STATE(284)] = 8969,
  [SMALL_STATE(285)] = 8977,
  [SMALL_STATE(286)] = 8987,
  [SMALL_STATE(287)] = 8997,
  [SMALL_STATE(288)] = 9005,
  [SMALL_STATE(289)] = 9015,
  [SMALL_STATE(290)] = 9025,
  [SMALL_STATE(291)] = 9035,
  [SMALL_STATE(292)] = 9043,
  [SMALL_STATE(293)] = 9053,
  [SMALL_STATE(294)] = 9063,
  [SMALL_STATE(295)] = 9073,
  [SMALL_STATE(296)] = 9083,
  [SMALL_STATE(297)] = 9093,
  [SMALL_STATE(298)] = 9103,
  [SMALL_STATE(299)] = 9111,
  [SMALL_STATE(300)] = 9121,
  [SMALL_STATE(301)] = 9129,
  [SMALL_STATE(302)] = 9139,
  [SMALL_STATE(303)] = 9149,
  [SMALL_STATE(304)] = 9159,
  [SMALL_STATE(305)] = 9169,
  [SMALL_STATE(306)] = 9179,
  [SMALL_STATE(307)] = 9189,
  [SMALL_STATE(308)] = 9199,
  [SMALL_STATE(309)] = 9209,
  [SMALL_STATE(310)] = 9219,
  [SMALL_STATE(311)] = 9227,
  [SMALL_STATE(312)] = 9237,
  [SMALL_STATE(313)] = 9245,
  [SMALL_STATE(314)] = 9253,
  [SMALL_STATE(315)] = 9263,
  [SMALL_STATE(316)] = 9273,
  [SMALL_STATE(317)] = 9283,
  [SMALL_STATE(318)] = 9293,
  [SMALL_STATE(319)] = 9303,
  [SMALL_STATE(320)] = 9313,
  [SMALL_STATE(321)] = 9321,
  [SMALL_STATE(322)] = 9331,
  [SMALL_STATE(323)] = 9338,
  [SMALL_STATE(324)] = 9345,
  [SMALL_STATE(325)] = 9352,
  [SMALL_STATE(326)] = 9359,
  [SMALL_STATE(327)] = 9366,
  [SMALL_STATE(328)] = 9373,
  [SMALL_STATE(329)] = 9380,
  [SMALL_STATE(330)] = 9387,
  [SMALL_STATE(331)] = 9394,
  [SMALL_STATE(332)] = 9401,
  [SMALL_STATE(333)] = 9408,
  [SMALL_STATE(334)] = 9415,
  [SMALL_STATE(335)] = 9422,
  [SMALL_STATE(336)] = 9429,
  [SMALL_STATE(337)] = 9436,
  [SMALL_STATE(338)] = 9443,
  [SMALL_STATE(339)] = 9450,
  [SMALL_STATE(340)] = 9457,
  [SMALL_STATE(341)] = 9464,
  [SMALL_STATE(342)] = 9471,
  [SMALL_STATE(343)] = 9478,
  [SMALL_STATE(344)] = 9485,
  [SMALL_STATE(345)] = 9492,
  [SMALL_STATE(346)] = 9499,
  [SMALL_STATE(347)] = 9506,
  [SMALL_STATE(348)] = 9513,
  [SMALL_STATE(349)] = 9520,
  [SMALL_STATE(350)] = 9527,
  [SMALL_STATE(351)] = 9534,
  [SMALL_STATE(352)] = 9541,
  [SMALL_STATE(353)] = 9548,
  [SMALL_STATE(354)] = 9555,
  [SMALL_STATE(355)] = 9562,
  [SMALL_STATE(356)] = 9569,
  [SMALL_STATE(357)] = 9576,
  [SMALL_STATE(358)] = 9583,
  [SMALL_STATE(359)] = 9590,
  [SMALL_STATE(360)] = 9597,
  [SMALL_STATE(361)] = 9604,
  [SMALL_STATE(362)] = 9611,
  [SMALL_STATE(363)] = 9618,
  [SMALL_STATE(364)] = 9625,
  [SMALL_STATE(365)] = 9632,
  [SMALL_STATE(366)] = 9639,
  [SMALL_STATE(367)] = 9646,
  [SMALL_STATE(368)] = 9653,
  [SMALL_STATE(369)] = 9660,
  [SMALL_STATE(370)] = 9667,
  [SMALL_STATE(371)] = 9674,
  [SMALL_STATE(372)] = 9681,
  [SMALL_STATE(373)] = 9688,
  [SMALL_STATE(374)] = 9695,
  [SMALL_STATE(375)] = 9702,
  [SMALL_STATE(376)] = 9709,
  [SMALL_STATE(377)] = 9716,
  [SMALL_STATE(378)] = 9723,
  [SMALL_STATE(379)] = 9730,
  [SMALL_STATE(380)] = 9737,
  [SMALL_STATE(381)] = 9744,
  [SMALL_STATE(382)] = 9751,
  [SMALL_STATE(383)] = 9758,
  [SMALL_STATE(384)] = 9765,
  [SMALL_STATE(385)] = 9772,
  [SMALL_STATE(386)] = 9779,
  [SMALL_STATE(387)] = 9786,
  [SMALL_STATE(388)] = 9793,
  [SMALL_STATE(389)] = 9800,
  [SMALL_STATE(390)] = 9807,
  [SMALL_STATE(391)] = 9814,
  [SMALL_STATE(392)] = 9821,
  [SMALL_STATE(393)] = 9828,
  [SMALL_STATE(394)] = 9835,
  [SMALL_STATE(395)] = 9842,
  [SMALL_STATE(396)] = 9849,
  [SMALL_STATE(397)] = 9856,
  [SMALL_STATE(398)] = 9863,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 7),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 7),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 17),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3, .production_id = 8),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3, .production_id = 8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 18),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 18),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 3, .production_id = 19),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 24),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 24),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 9),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 9),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(370),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(294),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(368),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(71),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 16),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 16),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(315),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(386),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(206),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(81),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(174),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(388),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(390),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(5),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(398),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 25),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 21),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6, .production_id = 13),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 8, .production_id = 20),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 20),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(173),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(354),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(301),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5, .production_id = 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(315),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(81),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 6, .production_id = 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(80),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 3, .production_id = 30),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(99),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 26),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 3, .production_id = 29),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_action, 2, .production_id = 31),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(319),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 10),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 23),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 15),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 15),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 23),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 3, .production_id = 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_schema_statement, 6, .production_id = 14),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 5, .production_id = 11),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 23),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_schema_statement, 3, .production_id = 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 4, .production_id = 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 15),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(75),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(339),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(178),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(221),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(299),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 27),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6, .production_id = 28),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 6),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 7, .production_id = 28),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 22),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [891] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
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
