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
#define STATE_COUNT 775
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 9
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 52

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_function_statement_token1 = 2,
  aux_sym_create_function_statement_token2 = 3,
  aux_sym_create_function_statement_token3 = 4,
  aux_sym_create_function_statement_token4 = 5,
  aux_sym_optimizer_hint_token1 = 6,
  aux_sym_optimizer_hint_token2 = 7,
  aux_sym_optimizer_hint_token3 = 8,
  aux_sym_parallel_hint_token1 = 9,
  aux_sym_parallel_hint_token2 = 10,
  aux_sym_parallel_hint_token3 = 11,
  aux_sym_parallel_hint_token4 = 12,
  aux_sym_null_hint_token1 = 13,
  aux_sym_null_hint_token2 = 14,
  aux_sym_null_hint_token3 = 15,
  aux_sym_null_hint_token4 = 16,
  aux_sym_null_hint_token5 = 17,
  aux_sym__function_language_token1 = 18,
  aux_sym_setof_token1 = 19,
  aux_sym_create_function_parameter_token1 = 20,
  aux_sym_create_function_parameter_token2 = 21,
  aux_sym_create_function_parameter_token3 = 22,
  aux_sym_create_function_parameter_token4 = 23,
  anon_sym_EQ = 24,
  anon_sym_LPAREN = 25,
  anon_sym_COMMA = 26,
  anon_sym_RPAREN = 27,
  aux_sym_function_body_token1 = 28,
  anon_sym_DOLLAR_DOLLAR = 29,
  anon_sym_SQUOTE = 30,
  aux_sym_create_schema_statement_token1 = 31,
  aux_sym_create_schema_statement_token2 = 32,
  aux_sym_create_schema_statement_token3 = 33,
  aux_sym_create_schema_statement_token4 = 34,
  aux_sym_set_statement_token1 = 35,
  aux_sym_set_statement_token2 = 36,
  aux_sym_set_statement_token3 = 37,
  aux_sym_set_statement_token4 = 38,
  aux_sym_set_statement_token5 = 39,
  aux_sym_grant_statement_token1 = 40,
  aux_sym_grant_statement_token2 = 41,
  aux_sym_grant_statement_token3 = 42,
  aux_sym_grant_statement_token4 = 43,
  aux_sym_grant_statement_token5 = 44,
  aux_sym_grant_statement_token6 = 45,
  aux_sym_grant_statement_token7 = 46,
  aux_sym_grant_statement_token8 = 47,
  aux_sym_grant_statement_token9 = 48,
  aux_sym_grant_statement_token10 = 49,
  aux_sym_grant_statement_token11 = 50,
  aux_sym_grant_statement_token12 = 51,
  aux_sym_grant_statement_token13 = 52,
  aux_sym_grant_statement_token14 = 53,
  aux_sym_grant_statement_token15 = 54,
  aux_sym_grant_statement_token16 = 55,
  aux_sym_grant_statement_token17 = 56,
  aux_sym_grant_statement_token18 = 57,
  aux_sym_create_domain_statement_token1 = 58,
  aux_sym_create_type_statement_token1 = 59,
  aux_sym_create_index_statement_token1 = 60,
  anon_sym_CONSTRAINT = 61,
  aux_sym_table_constraint_check_token1 = 62,
  aux_sym_table_constraint_foreign_key_token1 = 63,
  aux_sym_table_constraint_foreign_key_token2 = 64,
  aux_sym_table_constraint_unique_token1 = 65,
  aux_sym_table_constraint_primary_key_token1 = 66,
  aux_sym_using_clause_token1 = 67,
  aux_sym_group_by_clause_token1 = 68,
  aux_sym_order_by_clause_token1 = 69,
  aux_sym_where_clause_token1 = 70,
  aux_sym_from_clause_token1 = 71,
  aux_sym_join_type_token1 = 72,
  aux_sym_join_type_token2 = 73,
  aux_sym_join_type_token3 = 74,
  aux_sym_join_type_token4 = 75,
  aux_sym_join_type_token5 = 76,
  aux_sym_join_clause_token1 = 77,
  aux_sym_insert_statement_token1 = 78,
  aux_sym_values_clause_token1 = 79,
  aux_sym__constraint_action_token1 = 80,
  aux_sym__constraint_action_token2 = 81,
  anon_sym_LT = 82,
  anon_sym_LT_EQ = 83,
  anon_sym_LT_GT = 84,
  anon_sym_GT = 85,
  anon_sym_GT_EQ = 86,
  aux_sym_is_expression_token1 = 87,
  aux_sym_distinct_from_token1 = 88,
  aux_sym_boolean_expression_token1 = 89,
  aux_sym_boolean_expression_token2 = 90,
  aux_sym_TRUE_token1 = 91,
  aux_sym_FALSE_token1 = 92,
  aux_sym_number_token1 = 93,
  sym_identifier = 94,
  aux_sym_string_token1 = 95,
  aux_sym_string_token2 = 96,
  anon_sym_DASH_GT_GT = 97,
  aux_sym_ordered_expression_token1 = 98,
  aux_sym_ordered_expression_token2 = 99,
  anon_sym_LBRACK = 100,
  anon_sym_RBRACK = 101,
  anon_sym_COLON_COLON = 102,
  sym_comment = 103,
  anon_sym_TILDE = 104,
  anon_sym_PLUS = 105,
  anon_sym_DOLLAR = 106,
  sym_source_file = 107,
  sym__statement = 108,
  sym_create_function_statement = 109,
  sym_optimizer_hint = 110,
  sym_parallel_hint = 111,
  sym_null_hint = 112,
  sym__function_language = 113,
  sym__create_function_return_type = 114,
  sym_setof = 115,
  sym_constrained_type = 116,
  sym_create_function_parameter = 117,
  sym_create_function_parameters = 118,
  sym_function_body = 119,
  sym_create_schema_statement = 120,
  sym_set_statement = 121,
  sym_grant_statement = 122,
  sym_create_domain_statement = 123,
  sym_create_type_statement = 124,
  sym_create_index_statement = 125,
  sym_create_table_column_parameter = 126,
  sym_named_constraint = 127,
  sym_column_default = 128,
  sym_create_table_parameters = 129,
  sym__table_constraint = 130,
  sym_table_constraint_check = 131,
  sym_table_constraint_foreign_key = 132,
  sym_table_constraint_unique = 133,
  sym_table_constraint_primary_key = 134,
  sym_primary_key_constraint = 135,
  sym_create_table_statement = 136,
  sym_using_clause = 137,
  sym_index_table_parameters = 138,
  sym_select_statement = 139,
  sym_group_by_clause_body = 140,
  sym_group_by_clause = 141,
  sym_order_by_clause_body = 142,
  sym_order_by_clause = 143,
  sym_where_clause = 144,
  sym__aliased_expression = 145,
  sym__aliasable_expression = 146,
  sym_select_clause_body = 147,
  sym_select_clause = 148,
  sym_from_clause = 149,
  sym_join_type = 150,
  sym_join_clause = 151,
  sym_select_subexpression = 152,
  sym_update_statement = 153,
  sym_set_clause = 154,
  sym_set_clause_body = 155,
  sym_assigment_expression = 156,
  sym_insert_statement = 157,
  sym_values_clause = 158,
  sym_values_clause_body = 159,
  sym_in_expression = 160,
  sym_tuple = 161,
  sym_references_constraint = 162,
  sym_on_update_action = 163,
  sym_on_delete_action = 164,
  sym__constraint_action = 165,
  sym_unique_constraint = 166,
  sym_null_constraint = 167,
  sym_check_constraint = 168,
  sym_parameter = 169,
  sym_parameters = 170,
  sym_function_call = 171,
  sym_comparison_operator = 172,
  sym__parenthesized_expression = 173,
  sym_is_expression = 174,
  sym_distinct_from = 175,
  sym_boolean_expression = 176,
  sym_NULL = 177,
  sym_TRUE = 178,
  sym_FALSE = 179,
  sym_number = 180,
  sym_string = 181,
  sym_field_access = 182,
  sym_ordered_expression = 183,
  sym__type_alias = 184,
  sym_array_type = 185,
  sym__type = 186,
  sym_type_cast = 187,
  sym_binary_expression = 188,
  sym_argument_reference = 189,
  sym__expression = 190,
  aux_sym_source_file_repeat1 = 191,
  aux_sym_create_function_statement_repeat1 = 192,
  aux_sym_create_function_parameters_repeat1 = 193,
  aux_sym_grant_statement_repeat1 = 194,
  aux_sym_create_domain_statement_repeat1 = 195,
  aux_sym_create_table_column_parameter_repeat1 = 196,
  aux_sym_create_table_parameters_repeat1 = 197,
  aux_sym_table_constraint_foreign_key_repeat1 = 198,
  aux_sym_index_table_parameters_repeat1 = 199,
  aux_sym_select_statement_repeat1 = 200,
  aux_sym_group_by_clause_body_repeat1 = 201,
  aux_sym_select_clause_body_repeat1 = 202,
  aux_sym_set_clause_body_repeat1 = 203,
  aux_sym_parameters_repeat1 = 204,
  anon_alias_sym_CREATE_SCHEMA = 205,
  anon_alias_sym_CREATE_TABLE = 206,
  anon_alias_sym_DELETE = 207,
  anon_alias_sym_NULL = 208,
  anon_alias_sym_ON_UPDATE = 209,
  anon_alias_sym_SET_NULL = 210,
  alias_sym_default = 211,
  alias_sym_language = 212,
  alias_sym_type = 213,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_function_statement_token1] = "CREATE",
  [aux_sym_create_function_statement_token2] = "CREATE_OR_REPLACE_FUNCTION",
  [aux_sym_create_function_statement_token3] = "CREATE_OR_REPLACE_FUNCTION",
  [aux_sym_create_function_statement_token4] = "RETURNS",
  [aux_sym_optimizer_hint_token1] = "VOLATILE",
  [aux_sym_optimizer_hint_token2] = "IMMUTABLE",
  [aux_sym_optimizer_hint_token3] = "STABLE",
  [aux_sym_parallel_hint_token1] = "PARALLEL",
  [aux_sym_parallel_hint_token2] = "SAFE",
  [aux_sym_parallel_hint_token3] = "UNSAFE",
  [aux_sym_parallel_hint_token4] = "RESTRICTED",
  [aux_sym_null_hint_token1] = "CALLED_ON_NULL_INPUT",
  [aux_sym_null_hint_token2] = "ON",
  [aux_sym_null_hint_token3] = "RETURNS_NULL_ON_NULL_INPUT",
  [aux_sym_null_hint_token4] = "CALLED_ON_NULL_INPUT",
  [aux_sym_null_hint_token5] = "STRICT",
  [aux_sym__function_language_token1] = "LANGUAGE",
  [aux_sym_setof_token1] = "SETOF",
  [aux_sym_create_function_parameter_token1] = "IN",
  [aux_sym_create_function_parameter_token2] = "OUT",
  [aux_sym_create_function_parameter_token3] = "INOUT",
  [aux_sym_create_function_parameter_token4] = "VARIADIC",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_function_body_token1] = "AS",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_create_schema_statement_token1] = "SCHEMA",
  [aux_sym_create_schema_statement_token2] = "IF_NOT_EXISTS",
  [aux_sym_create_schema_statement_token3] = "NOT",
  [aux_sym_create_schema_statement_token4] = "IF_NOT_EXISTS",
  [aux_sym_set_statement_token1] = "SET",
  [aux_sym_set_statement_token2] = "SESSION",
  [aux_sym_set_statement_token3] = "LOCAL",
  [aux_sym_set_statement_token4] = "TO",
  [aux_sym_set_statement_token5] = "DEFAULT",
  [aux_sym_grant_statement_token1] = "GRANT",
  [aux_sym_grant_statement_token2] = "ALL",
  [aux_sym_grant_statement_token3] = "PRIVILEGES",
  [aux_sym_grant_statement_token4] = "SELECT",
  [aux_sym_grant_statement_token5] = "INSERT",
  [aux_sym_grant_statement_token6] = "UPDATE",
  [aux_sym_grant_statement_token7] = "ON_DELETE",
  [aux_sym_grant_statement_token8] = "TRUNCATE",
  [aux_sym_grant_statement_token9] = "REFERENCES",
  [aux_sym_grant_statement_token10] = "TRIGGER",
  [aux_sym_grant_statement_token11] = "USAGE",
  [aux_sym_grant_statement_token12] = "DATABASE",
  [aux_sym_grant_statement_token13] = "SEQUENCE",
  [aux_sym_grant_statement_token14] = "TABLE",
  [aux_sym_grant_statement_token15] = "GROUP",
  [aux_sym_grant_statement_token16] = "PUBLIC",
  [aux_sym_grant_statement_token17] = "WITH_GRANT_OPTION",
  [aux_sym_grant_statement_token18] = "WITH_GRANT_OPTION",
  [aux_sym_create_domain_statement_token1] = "CREATE_DOMAIN",
  [aux_sym_create_type_statement_token1] = "CREATE_TYPE",
  [aux_sym_create_index_statement_token1] = "INDEX",
  [anon_sym_CONSTRAINT] = "CONSTRAINT",
  [aux_sym_table_constraint_check_token1] = "CHECK",
  [aux_sym_table_constraint_foreign_key_token1] = "FOREIGN_KEY",
  [aux_sym_table_constraint_foreign_key_token2] = "PRIMARY_KEY",
  [aux_sym_table_constraint_unique_token1] = "UNIQUE",
  [aux_sym_table_constraint_primary_key_token1] = "PRIMARY_KEY",
  [aux_sym_using_clause_token1] = "USING",
  [aux_sym_group_by_clause_token1] = "GROUP_BY",
  [aux_sym_order_by_clause_token1] = "ORDER_BY",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_join_type_token1] = "INNER",
  [aux_sym_join_type_token2] = "LEFT",
  [aux_sym_join_type_token3] = "RIGHT",
  [aux_sym_join_type_token4] = "FULL",
  [aux_sym_join_type_token5] = "OUTER",
  [aux_sym_join_clause_token1] = "JOIN",
  [aux_sym_insert_statement_token1] = "INTO",
  [aux_sym_values_clause_token1] = "VALUES",
  [aux_sym__constraint_action_token1] = "RESTRICT",
  [aux_sym__constraint_action_token2] = "CASCADE",
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
  [sym_optimizer_hint] = "optimizer_hint",
  [sym_parallel_hint] = "parallel_hint",
  [sym_null_hint] = "null_hint",
  [sym__function_language] = "_function_language",
  [sym__create_function_return_type] = "_create_function_return_type",
  [sym_setof] = "setof",
  [sym_constrained_type] = "constrained_type",
  [sym_create_function_parameter] = "create_function_parameter",
  [sym_create_function_parameters] = "create_function_parameters",
  [sym_function_body] = "function_body",
  [sym_create_schema_statement] = "create_schema_statement",
  [sym_set_statement] = "set_statement",
  [sym_grant_statement] = "grant_statement",
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
  [aux_sym_grant_statement_repeat1] = "grant_statement_repeat1",
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
  [anon_alias_sym_CREATE_SCHEMA] = "CREATE_SCHEMA",
  [anon_alias_sym_CREATE_TABLE] = "CREATE_TABLE",
  [anon_alias_sym_DELETE] = "DELETE",
  [anon_alias_sym_NULL] = "NULL",
  [anon_alias_sym_ON_UPDATE] = "ON_UPDATE",
  [anon_alias_sym_SET_NULL] = "SET_NULL",
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
  [aux_sym_optimizer_hint_token1] = aux_sym_optimizer_hint_token1,
  [aux_sym_optimizer_hint_token2] = aux_sym_optimizer_hint_token2,
  [aux_sym_optimizer_hint_token3] = aux_sym_optimizer_hint_token3,
  [aux_sym_parallel_hint_token1] = aux_sym_parallel_hint_token1,
  [aux_sym_parallel_hint_token2] = aux_sym_parallel_hint_token2,
  [aux_sym_parallel_hint_token3] = aux_sym_parallel_hint_token3,
  [aux_sym_parallel_hint_token4] = aux_sym_parallel_hint_token4,
  [aux_sym_null_hint_token1] = aux_sym_null_hint_token1,
  [aux_sym_null_hint_token2] = aux_sym_null_hint_token2,
  [aux_sym_null_hint_token3] = aux_sym_null_hint_token3,
  [aux_sym_null_hint_token4] = aux_sym_null_hint_token1,
  [aux_sym_null_hint_token5] = aux_sym_null_hint_token5,
  [aux_sym__function_language_token1] = aux_sym__function_language_token1,
  [aux_sym_setof_token1] = aux_sym_setof_token1,
  [aux_sym_create_function_parameter_token1] = aux_sym_create_function_parameter_token1,
  [aux_sym_create_function_parameter_token2] = aux_sym_create_function_parameter_token2,
  [aux_sym_create_function_parameter_token3] = aux_sym_create_function_parameter_token3,
  [aux_sym_create_function_parameter_token4] = aux_sym_create_function_parameter_token4,
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
  [aux_sym_set_statement_token1] = aux_sym_set_statement_token1,
  [aux_sym_set_statement_token2] = aux_sym_set_statement_token2,
  [aux_sym_set_statement_token3] = aux_sym_set_statement_token3,
  [aux_sym_set_statement_token4] = aux_sym_set_statement_token4,
  [aux_sym_set_statement_token5] = aux_sym_set_statement_token5,
  [aux_sym_grant_statement_token1] = aux_sym_grant_statement_token1,
  [aux_sym_grant_statement_token2] = aux_sym_grant_statement_token2,
  [aux_sym_grant_statement_token3] = aux_sym_grant_statement_token3,
  [aux_sym_grant_statement_token4] = aux_sym_grant_statement_token4,
  [aux_sym_grant_statement_token5] = aux_sym_grant_statement_token5,
  [aux_sym_grant_statement_token6] = aux_sym_grant_statement_token6,
  [aux_sym_grant_statement_token7] = aux_sym_grant_statement_token7,
  [aux_sym_grant_statement_token8] = aux_sym_grant_statement_token8,
  [aux_sym_grant_statement_token9] = aux_sym_grant_statement_token9,
  [aux_sym_grant_statement_token10] = aux_sym_grant_statement_token10,
  [aux_sym_grant_statement_token11] = aux_sym_grant_statement_token11,
  [aux_sym_grant_statement_token12] = aux_sym_grant_statement_token12,
  [aux_sym_grant_statement_token13] = aux_sym_grant_statement_token13,
  [aux_sym_grant_statement_token14] = aux_sym_grant_statement_token14,
  [aux_sym_grant_statement_token15] = aux_sym_grant_statement_token15,
  [aux_sym_grant_statement_token16] = aux_sym_grant_statement_token16,
  [aux_sym_grant_statement_token17] = aux_sym_grant_statement_token17,
  [aux_sym_grant_statement_token18] = aux_sym_grant_statement_token17,
  [aux_sym_create_domain_statement_token1] = aux_sym_create_domain_statement_token1,
  [aux_sym_create_type_statement_token1] = aux_sym_create_type_statement_token1,
  [aux_sym_create_index_statement_token1] = aux_sym_create_index_statement_token1,
  [anon_sym_CONSTRAINT] = anon_sym_CONSTRAINT,
  [aux_sym_table_constraint_check_token1] = aux_sym_table_constraint_check_token1,
  [aux_sym_table_constraint_foreign_key_token1] = aux_sym_table_constraint_foreign_key_token1,
  [aux_sym_table_constraint_foreign_key_token2] = aux_sym_table_constraint_foreign_key_token2,
  [aux_sym_table_constraint_unique_token1] = aux_sym_table_constraint_unique_token1,
  [aux_sym_table_constraint_primary_key_token1] = aux_sym_table_constraint_foreign_key_token2,
  [aux_sym_using_clause_token1] = aux_sym_using_clause_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_join_type_token1] = aux_sym_join_type_token1,
  [aux_sym_join_type_token2] = aux_sym_join_type_token2,
  [aux_sym_join_type_token3] = aux_sym_join_type_token3,
  [aux_sym_join_type_token4] = aux_sym_join_type_token4,
  [aux_sym_join_type_token5] = aux_sym_join_type_token5,
  [aux_sym_join_clause_token1] = aux_sym_join_clause_token1,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_values_clause_token1] = aux_sym_values_clause_token1,
  [aux_sym__constraint_action_token1] = aux_sym__constraint_action_token1,
  [aux_sym__constraint_action_token2] = aux_sym__constraint_action_token2,
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
  [sym_optimizer_hint] = sym_optimizer_hint,
  [sym_parallel_hint] = sym_parallel_hint,
  [sym_null_hint] = sym_null_hint,
  [sym__function_language] = sym__function_language,
  [sym__create_function_return_type] = sym__create_function_return_type,
  [sym_setof] = sym_setof,
  [sym_constrained_type] = sym_constrained_type,
  [sym_create_function_parameter] = sym_create_function_parameter,
  [sym_create_function_parameters] = sym_create_function_parameters,
  [sym_function_body] = sym_function_body,
  [sym_create_schema_statement] = sym_create_schema_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_grant_statement] = sym_grant_statement,
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
  [aux_sym_grant_statement_repeat1] = aux_sym_grant_statement_repeat1,
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
  [anon_alias_sym_CREATE_SCHEMA] = anon_alias_sym_CREATE_SCHEMA,
  [anon_alias_sym_CREATE_TABLE] = anon_alias_sym_CREATE_TABLE,
  [anon_alias_sym_DELETE] = anon_alias_sym_DELETE,
  [anon_alias_sym_NULL] = anon_alias_sym_NULL,
  [anon_alias_sym_ON_UPDATE] = anon_alias_sym_ON_UPDATE,
  [anon_alias_sym_SET_NULL] = anon_alias_sym_SET_NULL,
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
  [aux_sym_optimizer_hint_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_optimizer_hint_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_optimizer_hint_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parallel_hint_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parallel_hint_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parallel_hint_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parallel_hint_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_null_hint_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_null_hint_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_null_hint_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_null_hint_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_null_hint_token5] = {
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
  [aux_sym_create_function_parameter_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_parameter_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_parameter_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_parameter_token4] = {
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
  [aux_sym_set_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grant_statement_token18] = {
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
  [anon_sym_CONSTRAINT] = {
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
  [aux_sym_using_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_by_clause_token1] = {
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
  [aux_sym_insert_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_values_clause_token1] = {
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
  [sym_optimizer_hint] = {
    .visible = true,
    .named = true,
  },
  [sym_parallel_hint] = {
    .visible = true,
    .named = true,
  },
  [sym_null_hint] = {
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
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_grant_statement] = {
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
  [aux_sym_grant_statement_repeat1] = {
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
  [anon_alias_sym_CREATE_SCHEMA] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_CREATE_TABLE] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_DELETE] = {
    .visible = true,
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
  [anon_alias_sym_SET_NULL] = {
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
  field_argmode = 2,
  field_arguments = 3,
  field_content = 4,
  field_elements = 5,
  field_function = 6,
  field_name = 7,
  field_operator = 8,
  field_order = 9,
  field_replace = 10,
  field_scope = 11,
  field_table = 12,
  field_type = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_argmode] = "argmode",
  [field_arguments] = "arguments",
  [field_content] = "content",
  [field_elements] = "elements",
  [field_function] = "function",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_order] = "order",
  [field_replace] = "replace",
  [field_scope] = "scope",
  [field_table] = "table",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [6] = {.index = 0, .length = 1},
  [7] = {.index = 1, .length = 1},
  [9] = {.index = 2, .length = 1},
  [10] = {.index = 3, .length = 1},
  [14] = {.index = 4, .length = 1},
  [15] = {.index = 5, .length = 2},
  [16] = {.index = 7, .length = 1},
  [19] = {.index = 8, .length = 2},
  [20] = {.index = 10, .length = 2},
  [21] = {.index = 12, .length = 3},
  [22] = {.index = 15, .length = 1},
  [24] = {.index = 16, .length = 1},
  [26] = {.index = 17, .length = 1},
  [27] = {.index = 18, .length = 2},
  [28] = {.index = 20, .length = 1},
  [29] = {.index = 21, .length = 2},
  [30] = {.index = 7, .length = 1},
  [33] = {.index = 23, .length = 1},
  [35] = {.index = 24, .length = 1},
  [36] = {.index = 7, .length = 1},
  [37] = {.index = 2, .length = 1},
  [41] = {.index = 2, .length = 1},
  [42] = {.index = 20, .length = 1},
  [45] = {.index = 25, .length = 1},
  [46] = {.index = 25, .length = 1},
  [47] = {.index = 20, .length = 1},
  [48] = {.index = 24, .length = 1},
  [51] = {.index = 24, .length = 1},
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
    {field_scope, 1},
  [5] =
    {field_arguments, 2},
    {field_function, 0},
  [7] =
    {field_argmode, 0},
  [8] =
    {field_name, 0},
    {field_type, 1},
  [10] =
    {field_name, 2},
    {field_table, 4},
  [12] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [15] =
    {field_elements, 1},
  [16] =
    {field_replace, 1},
  [17] =
    {field_type, 1},
  [18] =
    {field_name, 3},
    {field_table, 5},
  [20] =
    {field_type, 3},
  [21] =
    {field_elements, 1},
    {field_elements, 2},
  [23] =
    {field_order, 1},
  [24] =
    {field_type, 4},
  [25] =
    {field_action, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_DELETE,
  },
  [2] = {
    [0] = anon_alias_sym_NULL,
  },
  [3] = {
    [0] = anon_alias_sym_CREATE_SCHEMA,
    [1] = anon_alias_sym_CREATE_SCHEMA,
  },
  [4] = {
    [0] = aux_sym_create_domain_statement_token1,
  },
  [5] = {
    [0] = anon_alias_sym_CREATE_TABLE,
    [1] = anon_alias_sym_CREATE_TABLE,
  },
  [8] = {
    [0] = alias_sym_type,
  },
  [11] = {
    [0] = aux_sym_group_by_clause_token1,
  },
  [12] = {
    [1] = aux_sym_order_by_clause_token1,
  },
  [13] = {
    [0] = aux_sym_create_type_statement_token1,
  },
  [17] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [18] = {
    [0] = anon_alias_sym_CREATE_SCHEMA,
    [1] = anon_alias_sym_CREATE_SCHEMA,
    [3] = aux_sym_create_schema_statement_token2,
  },
  [23] = {
    [1] = aux_sym_distinct_from_token1,
  },
  [24] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [25] = {
    [2] = alias_sym_default,
  },
  [30] = {
    [3] = alias_sym_default,
  },
  [31] = {
    [3] = alias_sym_default,
  },
  [32] = {
    [1] = alias_sym_language,
  },
  [34] = {
    [6] = aux_sym_grant_statement_token17,
    [7] = aux_sym_grant_statement_token17,
  },
  [36] = {
    [4] = alias_sym_default,
  },
  [37] = {
    [6] = aux_sym_grant_statement_token17,
    [7] = aux_sym_grant_statement_token17,
    [8] = aux_sym_grant_statement_token17,
  },
  [38] = {
    [6] = aux_sym_grant_statement_token17,
    [7] = aux_sym_grant_statement_token17,
    [8] = aux_sym_grant_statement_token17,
  },
  [39] = {
    [1] = aux_sym_null_hint_token1,
    [2] = aux_sym_null_hint_token1,
  },
  [40] = {
    [1] = aux_sym_table_constraint_foreign_key_token1,
  },
  [41] = {
    [7] = aux_sym_grant_statement_token17,
    [8] = aux_sym_grant_statement_token17,
    [9] = aux_sym_grant_statement_token17,
  },
  [42] = {
    [7] = aux_sym_grant_statement_token17,
    [8] = aux_sym_grant_statement_token17,
    [9] = aux_sym_grant_statement_token17,
  },
  [43] = {
    [7] = aux_sym_grant_statement_token17,
    [8] = aux_sym_grant_statement_token17,
    [9] = aux_sym_grant_statement_token17,
  },
  [44] = {
    [0] = aux_sym_null_hint_token3,
    [2] = aux_sym_null_hint_token3,
    [4] = aux_sym_null_hint_token3,
  },
  [45] = {
    [0] = anon_alias_sym_ON_UPDATE,
    [1] = anon_alias_sym_ON_UPDATE,
  },
  [46] = {
    [0] = aux_sym_grant_statement_token7,
  },
  [47] = {
    [8] = aux_sym_grant_statement_token17,
    [9] = aux_sym_grant_statement_token17,
    [10] = aux_sym_grant_statement_token17,
  },
  [48] = {
    [8] = aux_sym_grant_statement_token17,
    [9] = aux_sym_grant_statement_token17,
    [10] = aux_sym_grant_statement_token17,
  },
  [49] = {
    [8] = aux_sym_grant_statement_token17,
    [9] = aux_sym_grant_statement_token17,
    [10] = aux_sym_grant_statement_token17,
  },
  [50] = {
    [0] = anon_alias_sym_SET_NULL,
    [1] = anon_alias_sym_SET_NULL,
  },
  [51] = {
    [9] = aux_sym_grant_statement_token17,
    [10] = aux_sym_grant_statement_token17,
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
      if (eof) ADVANCE(420);
      if (lookahead == '$') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(737);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '<') ADVANCE(541);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '\\') SKIP(407)
      if (lookahead == ']') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == '~') ADVANCE(736);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(309);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(167);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(86);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(285);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(78);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(59)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(60)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(60)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(557);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(673);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(652);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(656);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(585);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(620);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(558);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(558);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(602);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(598);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(558);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(459);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '*') ADVANCE(725);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(737);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '<') ADVANCE(541);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == '~') ADVANCE(736);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(737);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '<') ADVANCE(541);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '~') ADVANCE(736);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(332);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(737);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '<') ADVANCE(541);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '~') ADVANCE(736);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(332);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '\\') ADVANCE(718);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(722);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(733);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(735);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(735);
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(618);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(662);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(675);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(700);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(581);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(57)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(673);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(58)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(659);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(732);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(727);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 71:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(507);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(270);
      END_STATE();
    case 111:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(259);
      END_STATE();
    case 113:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 114:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(729);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(728);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(396);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 197:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(463);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(275);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      END_STATE();
    case 198:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 199:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 200:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 201:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(360);
      END_STATE();
    case 202:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 203:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 204:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(192);
      END_STATE();
    case 205:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      END_STATE();
    case 206:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(517);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(393);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(502);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 221:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 222:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 245:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(508);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(275);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(92);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(241);
      END_STATE();
    case 279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(435);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(375);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(358);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(534);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 310:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 311:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 312:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 315:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 316:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 317:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 318:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 319:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(397);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 345:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      END_STATE();
    case 346:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(537);
      END_STATE();
    case 347:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(480);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      END_STATE();
    case 350:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 351:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(374);
      END_STATE();
    case 352:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 353:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 354:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 355:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 356:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(448);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(529);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 389:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 390:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 391:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 392:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 393:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 394:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 395:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 396:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 397:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 398:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(377);
      END_STATE();
    case 399:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 400:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 401:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(506);
      END_STATE();
    case 402:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(518);
      END_STATE();
    case 403:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(512);
      END_STATE();
    case 404:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(515);
      END_STATE();
    case 405:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(724);
      END_STATE();
    case 406:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 407:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(406)
      END_STATE();
    case 408:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(417)
      END_STATE();
    case 409:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(417)
      if (lookahead == '\r') SKIP(408)
      END_STATE();
    case 410:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(416)
      END_STATE();
    case 411:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(416)
      if (lookahead == '\r') SKIP(410)
      END_STATE();
    case 412:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(418)
      END_STATE();
    case 413:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(418)
      if (lookahead == '\r') SKIP(412)
      END_STATE();
    case 414:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(419)
      END_STATE();
    case 415:
      if (eof) ADVANCE(420);
      if (lookahead == '\n') SKIP(419)
      if (lookahead == '\r') SKIP(414)
      END_STATE();
    case 416:
      if (eof) ADVANCE(420);
      if (lookahead == '$') ADVANCE(738);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '\\') SKIP(411)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(674);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(557);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(667);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(644);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(656);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(585);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(620);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(664);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(416)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 417:
      if (eof) ADVANCE(420);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(737);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '<') ADVANCE(541);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '\\') SKIP(409)
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == '~') ADVANCE(736);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(311);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(417)
      END_STATE();
    case 418:
      if (eof) ADVANCE(420);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '+') ADVANCE(737);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '<') ADVANCE(541);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '\\') SKIP(413)
      if (lookahead == '~') ADVANCE(736);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(338);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(418)
      END_STATE();
    case 419:
      if (eof) ADVANCE(420);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '+') ADVANCE(737);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(421);
      if (lookahead == '<') ADVANCE(541);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '\\') SKIP(415)
      if (lookahead == '~') ADVANCE(736);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(419)
      END_STATE();
    case 420:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token4);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_optimizer_hint_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_optimizer_hint_token2);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_optimizer_hint_token3);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_parallel_hint_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_parallel_hint_token2);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_parallel_hint_token3);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_parallel_hint_token4);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_null_hint_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_null_hint_token2);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_null_hint_token3);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_null_hint_token3);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_null_hint_token4);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_null_hint_token5);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token1);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token2);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token3);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token3);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token4);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_create_function_parameter_token4);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token2);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token2);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token3);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token3);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token4);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_set_statement_token3);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_set_statement_token3);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_set_statement_token4);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_set_statement_token5);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_set_statement_token5);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_grant_statement_token1);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_grant_statement_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_grant_statement_token2);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_grant_statement_token3);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_grant_statement_token4);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_grant_statement_token4);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_grant_statement_token5);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_grant_statement_token5);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_grant_statement_token6);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_grant_statement_token6);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_grant_statement_token7);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_grant_statement_token8);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_grant_statement_token9);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_grant_statement_token10);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_grant_statement_token11);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_grant_statement_token12);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_grant_statement_token12);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_grant_statement_token13);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_grant_statement_token13);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_grant_statement_token14);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_grant_statement_token14);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_grant_statement_token15);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_grant_statement_token15);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_grant_statement_token16);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_grant_statement_token16);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_grant_statement_token17);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_grant_statement_token18);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token2);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_join_type_token5);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_values_clause_token1);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '>') ADVANCE(543);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(655);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(649);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(588);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(690);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(715);
      if (lookahead == '\r') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(717);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(717);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(717);
      if (lookahead == '\'') ADVANCE(735);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead == '/') ADVANCE(717);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '*') ADVANCE(712);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(717);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead == '/') ADVANCE(714);
      if (lookahead == '\\') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(717);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(722);
      if (lookahead == '\r') ADVANCE(719);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(722);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '$') ADVANCE(734);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == '*') ADVANCE(726);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '\\') ADVANCE(718);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(722);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead != 0) ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '*') ADVANCE(725);
      if (lookahead == '/') ADVANCE(724);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '*') ADVANCE(725);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '$') ADVANCE(735);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(459);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 417},
  [3] = {.lex_state = 417},
  [4] = {.lex_state = 417},
  [5] = {.lex_state = 416},
  [6] = {.lex_state = 417},
  [7] = {.lex_state = 417},
  [8] = {.lex_state = 417},
  [9] = {.lex_state = 417},
  [10] = {.lex_state = 417},
  [11] = {.lex_state = 417},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 417},
  [16] = {.lex_state = 417},
  [17] = {.lex_state = 417},
  [18] = {.lex_state = 417},
  [19] = {.lex_state = 417},
  [20] = {.lex_state = 417},
  [21] = {.lex_state = 417},
  [22] = {.lex_state = 417},
  [23] = {.lex_state = 417},
  [24] = {.lex_state = 417},
  [25] = {.lex_state = 417},
  [26] = {.lex_state = 417},
  [27] = {.lex_state = 417},
  [28] = {.lex_state = 417},
  [29] = {.lex_state = 417},
  [30] = {.lex_state = 417},
  [31] = {.lex_state = 417},
  [32] = {.lex_state = 417},
  [33] = {.lex_state = 417},
  [34] = {.lex_state = 417},
  [35] = {.lex_state = 417},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 417},
  [38] = {.lex_state = 417},
  [39] = {.lex_state = 42},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 417},
  [51] = {.lex_state = 417},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 43},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 42},
  [63] = {.lex_state = 43},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 43},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 42},
  [74] = {.lex_state = 43},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 42},
  [77] = {.lex_state = 43},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 43},
  [80] = {.lex_state = 43},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 42},
  [84] = {.lex_state = 43},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 43},
  [87] = {.lex_state = 42},
  [88] = {.lex_state = 42},
  [89] = {.lex_state = 418},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 42},
  [92] = {.lex_state = 37},
  [93] = {.lex_state = 37},
  [94] = {.lex_state = 42},
  [95] = {.lex_state = 37},
  [96] = {.lex_state = 37},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 42},
  [102] = {.lex_state = 42},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 42},
  [105] = {.lex_state = 42},
  [106] = {.lex_state = 42},
  [107] = {.lex_state = 42},
  [108] = {.lex_state = 42},
  [109] = {.lex_state = 42},
  [110] = {.lex_state = 42},
  [111] = {.lex_state = 42},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 42},
  [114] = {.lex_state = 42},
  [115] = {.lex_state = 42},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 39},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 37},
  [121] = {.lex_state = 42},
  [122] = {.lex_state = 42},
  [123] = {.lex_state = 37},
  [124] = {.lex_state = 42},
  [125] = {.lex_state = 419},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 37},
  [128] = {.lex_state = 418},
  [129] = {.lex_state = 37},
  [130] = {.lex_state = 37},
  [131] = {.lex_state = 37},
  [132] = {.lex_state = 37},
  [133] = {.lex_state = 37},
  [134] = {.lex_state = 37},
  [135] = {.lex_state = 37},
  [136] = {.lex_state = 417},
  [137] = {.lex_state = 37},
  [138] = {.lex_state = 37},
  [139] = {.lex_state = 418},
  [140] = {.lex_state = 37},
  [141] = {.lex_state = 37},
  [142] = {.lex_state = 37},
  [143] = {.lex_state = 37},
  [144] = {.lex_state = 37},
  [145] = {.lex_state = 37},
  [146] = {.lex_state = 37},
  [147] = {.lex_state = 418},
  [148] = {.lex_state = 418},
  [149] = {.lex_state = 37},
  [150] = {.lex_state = 418},
  [151] = {.lex_state = 418},
  [152] = {.lex_state = 37},
  [153] = {.lex_state = 37},
  [154] = {.lex_state = 37},
  [155] = {.lex_state = 418},
  [156] = {.lex_state = 418},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 417},
  [159] = {.lex_state = 37},
  [160] = {.lex_state = 37},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 37},
  [163] = {.lex_state = 37},
  [164] = {.lex_state = 417},
  [165] = {.lex_state = 37},
  [166] = {.lex_state = 37},
  [167] = {.lex_state = 37},
  [168] = {.lex_state = 37},
  [169] = {.lex_state = 37},
  [170] = {.lex_state = 37},
  [171] = {.lex_state = 37},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 37},
  [174] = {.lex_state = 37},
  [175] = {.lex_state = 37},
  [176] = {.lex_state = 37},
  [177] = {.lex_state = 37},
  [178] = {.lex_state = 418},
  [179] = {.lex_state = 37},
  [180] = {.lex_state = 37},
  [181] = {.lex_state = 37},
  [182] = {.lex_state = 37},
  [183] = {.lex_state = 417},
  [184] = {.lex_state = 37},
  [185] = {.lex_state = 37},
  [186] = {.lex_state = 37},
  [187] = {.lex_state = 37},
  [188] = {.lex_state = 37},
  [189] = {.lex_state = 37},
  [190] = {.lex_state = 417},
  [191] = {.lex_state = 37},
  [192] = {.lex_state = 37},
  [193] = {.lex_state = 37},
  [194] = {.lex_state = 37},
  [195] = {.lex_state = 37},
  [196] = {.lex_state = 418},
  [197] = {.lex_state = 419},
  [198] = {.lex_state = 419},
  [199] = {.lex_state = 419},
  [200] = {.lex_state = 419},
  [201] = {.lex_state = 419},
  [202] = {.lex_state = 418},
  [203] = {.lex_state = 418},
  [204] = {.lex_state = 418},
  [205] = {.lex_state = 419},
  [206] = {.lex_state = 418},
  [207] = {.lex_state = 418},
  [208] = {.lex_state = 418},
  [209] = {.lex_state = 418},
  [210] = {.lex_state = 418},
  [211] = {.lex_state = 419},
  [212] = {.lex_state = 417},
  [213] = {.lex_state = 418},
  [214] = {.lex_state = 418},
  [215] = {.lex_state = 418},
  [216] = {.lex_state = 418},
  [217] = {.lex_state = 43},
  [218] = {.lex_state = 418},
  [219] = {.lex_state = 417},
  [220] = {.lex_state = 418},
  [221] = {.lex_state = 43},
  [222] = {.lex_state = 419},
  [223] = {.lex_state = 418},
  [224] = {.lex_state = 418},
  [225] = {.lex_state = 419},
  [226] = {.lex_state = 418},
  [227] = {.lex_state = 418},
  [228] = {.lex_state = 419},
  [229] = {.lex_state = 419},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 419},
  [232] = {.lex_state = 419},
  [233] = {.lex_state = 419},
  [234] = {.lex_state = 419},
  [235] = {.lex_state = 419},
  [236] = {.lex_state = 419},
  [237] = {.lex_state = 419},
  [238] = {.lex_state = 419},
  [239] = {.lex_state = 419},
  [240] = {.lex_state = 419},
  [241] = {.lex_state = 419},
  [242] = {.lex_state = 419},
  [243] = {.lex_state = 419},
  [244] = {.lex_state = 419},
  [245] = {.lex_state = 419},
  [246] = {.lex_state = 419},
  [247] = {.lex_state = 419},
  [248] = {.lex_state = 419},
  [249] = {.lex_state = 418},
  [250] = {.lex_state = 419},
  [251] = {.lex_state = 418},
  [252] = {.lex_state = 418},
  [253] = {.lex_state = 44},
  [254] = {.lex_state = 417},
  [255] = {.lex_state = 419},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 42},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 418},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 44},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 44},
  [265] = {.lex_state = 44},
  [266] = {.lex_state = 44},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 44},
  [269] = {.lex_state = 418},
  [270] = {.lex_state = 418},
  [271] = {.lex_state = 418},
  [272] = {.lex_state = 44},
  [273] = {.lex_state = 44},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 44},
  [276] = {.lex_state = 44},
  [277] = {.lex_state = 44},
  [278] = {.lex_state = 417},
  [279] = {.lex_state = 44},
  [280] = {.lex_state = 417},
  [281] = {.lex_state = 44},
  [282] = {.lex_state = 44},
  [283] = {.lex_state = 44},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 44},
  [286] = {.lex_state = 44},
  [287] = {.lex_state = 44},
  [288] = {.lex_state = 44},
  [289] = {.lex_state = 44},
  [290] = {.lex_state = 44},
  [291] = {.lex_state = 44},
  [292] = {.lex_state = 417},
  [293] = {.lex_state = 44},
  [294] = {.lex_state = 44},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 417},
  [297] = {.lex_state = 417},
  [298] = {.lex_state = 417},
  [299] = {.lex_state = 417},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 417},
  [302] = {.lex_state = 44},
  [303] = {.lex_state = 44},
  [304] = {.lex_state = 44},
  [305] = {.lex_state = 44},
  [306] = {.lex_state = 417},
  [307] = {.lex_state = 44},
  [308] = {.lex_state = 44},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 42},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 44},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 44},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 42},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 42},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 42},
  [326] = {.lex_state = 42},
  [327] = {.lex_state = 42},
  [328] = {.lex_state = 42},
  [329] = {.lex_state = 42},
  [330] = {.lex_state = 42},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 42},
  [333] = {.lex_state = 42},
  [334] = {.lex_state = 42},
  [335] = {.lex_state = 42},
  [336] = {.lex_state = 42},
  [337] = {.lex_state = 42},
  [338] = {.lex_state = 42},
  [339] = {.lex_state = 42},
  [340] = {.lex_state = 42},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 42},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 42},
  [349] = {.lex_state = 42},
  [350] = {.lex_state = 42},
  [351] = {.lex_state = 42},
  [352] = {.lex_state = 42},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 42},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 42},
  [357] = {.lex_state = 42},
  [358] = {.lex_state = 42},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 54},
  [371] = {.lex_state = 47},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 54},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 47},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 48},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 55},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 55},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 48},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
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
  [448] = {.lex_state = 0},
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
  [459] = {.lex_state = 45},
  [460] = {.lex_state = 56},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 56},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 57},
  [486] = {.lex_state = 57},
  [487] = {.lex_state = 45},
  [488] = {.lex_state = 45},
  [489] = {.lex_state = 57},
  [490] = {.lex_state = 43},
  [491] = {.lex_state = 45},
  [492] = {.lex_state = 45},
  [493] = {.lex_state = 45},
  [494] = {.lex_state = 45},
  [495] = {.lex_state = 45},
  [496] = {.lex_state = 45},
  [497] = {.lex_state = 45},
  [498] = {.lex_state = 45},
  [499] = {.lex_state = 45},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 43},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 58},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 59},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 45},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 58},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 58},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 58},
  [555] = {.lex_state = 58},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 58},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 60},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 417},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 45},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 45},
  [599] = {.lex_state = 45},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 45},
  [614] = {.lex_state = 45},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 45},
  [619] = {.lex_state = 45},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 45},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 45},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 45},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 45},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 42},
  [642] = {.lex_state = 45},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 45},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 45},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 45},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 45},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 45},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 45},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 45},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 48},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 45},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 45},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 45},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 45},
  [699] = {.lex_state = 45},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 45},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 45},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 715},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 45},
  [713] = {.lex_state = 46},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 45},
  [729] = {.lex_state = 45},
  [730] = {.lex_state = 45},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 48},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 45},
  [737] = {.lex_state = 46},
  [738] = {.lex_state = 715},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 45},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 42},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 45},
  [748] = {.lex_state = 45},
  [749] = {.lex_state = 45},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 48},
  [754] = {.lex_state = 45},
  [755] = {.lex_state = 46},
  [756] = {.lex_state = 715},
  [757] = {.lex_state = 42},
  [758] = {.lex_state = 45},
  [759] = {.lex_state = 45},
  [760] = {.lex_state = 46},
  [761] = {.lex_state = 715},
  [762] = {.lex_state = 42},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 46},
  [766] = {.lex_state = 715},
  [767] = {.lex_state = 42},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 45},
  [770] = {.lex_state = 46},
  [771] = {.lex_state = 715},
  [772] = {.lex_state = 42},
  [773] = {.lex_state = 48},
  [774] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_function_statement_token1] = ACTIONS(1),
    [aux_sym_create_function_statement_token3] = ACTIONS(1),
    [aux_sym_create_function_statement_token4] = ACTIONS(1),
    [aux_sym_optimizer_hint_token1] = ACTIONS(1),
    [aux_sym_optimizer_hint_token2] = ACTIONS(1),
    [aux_sym_optimizer_hint_token3] = ACTIONS(1),
    [aux_sym_parallel_hint_token1] = ACTIONS(1),
    [aux_sym_parallel_hint_token2] = ACTIONS(1),
    [aux_sym_parallel_hint_token3] = ACTIONS(1),
    [aux_sym_parallel_hint_token4] = ACTIONS(1),
    [aux_sym_null_hint_token1] = ACTIONS(1),
    [aux_sym_null_hint_token2] = ACTIONS(1),
    [aux_sym_null_hint_token3] = ACTIONS(1),
    [aux_sym_null_hint_token5] = ACTIONS(1),
    [aux_sym__function_language_token1] = ACTIONS(1),
    [aux_sym_create_function_parameter_token1] = ACTIONS(1),
    [aux_sym_create_function_parameter_token2] = ACTIONS(1),
    [aux_sym_create_function_parameter_token3] = ACTIONS(1),
    [aux_sym_create_function_parameter_token4] = ACTIONS(1),
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
    [aux_sym_set_statement_token1] = ACTIONS(1),
    [aux_sym_set_statement_token2] = ACTIONS(1),
    [aux_sym_set_statement_token3] = ACTIONS(1),
    [aux_sym_set_statement_token4] = ACTIONS(1),
    [aux_sym_set_statement_token5] = ACTIONS(1),
    [aux_sym_grant_statement_token1] = ACTIONS(1),
    [aux_sym_grant_statement_token2] = ACTIONS(1),
    [aux_sym_grant_statement_token3] = ACTIONS(1),
    [aux_sym_grant_statement_token4] = ACTIONS(1),
    [aux_sym_grant_statement_token5] = ACTIONS(1),
    [aux_sym_grant_statement_token6] = ACTIONS(1),
    [aux_sym_grant_statement_token7] = ACTIONS(1),
    [aux_sym_grant_statement_token8] = ACTIONS(1),
    [aux_sym_grant_statement_token9] = ACTIONS(1),
    [aux_sym_grant_statement_token10] = ACTIONS(1),
    [aux_sym_grant_statement_token11] = ACTIONS(1),
    [aux_sym_grant_statement_token12] = ACTIONS(1),
    [aux_sym_grant_statement_token13] = ACTIONS(1),
    [aux_sym_grant_statement_token14] = ACTIONS(1),
    [aux_sym_grant_statement_token15] = ACTIONS(1),
    [aux_sym_grant_statement_token16] = ACTIONS(1),
    [aux_sym_grant_statement_token17] = ACTIONS(1),
    [aux_sym_grant_statement_token18] = ACTIONS(1),
    [aux_sym_create_domain_statement_token1] = ACTIONS(1),
    [aux_sym_create_type_statement_token1] = ACTIONS(1),
    [anon_sym_CONSTRAINT] = ACTIONS(1),
    [aux_sym_table_constraint_check_token1] = ACTIONS(1),
    [aux_sym_table_constraint_foreign_key_token1] = ACTIONS(1),
    [aux_sym_table_constraint_foreign_key_token2] = ACTIONS(1),
    [aux_sym_table_constraint_unique_token1] = ACTIONS(1),
    [aux_sym_table_constraint_primary_key_token1] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_join_type_token1] = ACTIONS(1),
    [aux_sym_join_type_token2] = ACTIONS(1),
    [aux_sym_join_type_token3] = ACTIONS(1),
    [aux_sym_join_type_token4] = ACTIONS(1),
    [aux_sym_join_clause_token1] = ACTIONS(1),
    [aux_sym_values_clause_token1] = ACTIONS(1),
    [aux_sym__constraint_action_token1] = ACTIONS(1),
    [aux_sym__constraint_action_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(768),
    [sym__statement] = STATE(274),
    [sym_create_function_statement] = STATE(435),
    [sym_create_schema_statement] = STATE(435),
    [sym_set_statement] = STATE(435),
    [sym_grant_statement] = STATE(435),
    [sym_create_domain_statement] = STATE(435),
    [sym_create_type_statement] = STATE(435),
    [sym_create_index_statement] = STATE(435),
    [sym_create_table_statement] = STATE(435),
    [sym_select_statement] = STATE(435),
    [sym_select_clause] = STATE(230),
    [sym_update_statement] = STATE(435),
    [sym_insert_statement] = STATE(435),
    [aux_sym_source_file_repeat1] = STATE(274),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_function_statement_token1] = ACTIONS(7),
    [aux_sym_set_statement_token1] = ACTIONS(9),
    [aux_sym_grant_statement_token1] = ACTIONS(11),
    [aux_sym_grant_statement_token4] = ACTIONS(13),
    [aux_sym_grant_statement_token5] = ACTIONS(15),
    [aux_sym_grant_statement_token6] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(19), 48,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token3,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [60] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(23), 48,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token3,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(27), 47,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token3,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [179] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      sym__expression,
    STATE(295), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(313), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
    ACTIONS(33), 15,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(61), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(69), 36,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 37,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token15,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [557] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym__expression,
    STATE(295), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
    STATE(345), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(33), 9,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(79), 13,
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
  [630] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__expression,
    STATE(295), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
    STATE(345), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(33), 9,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(79), 13,
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
  [703] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__expression,
    STATE(295), 1,
      sym_select_clause_body,
    STATE(345), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(33), 9,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(79), 13,
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
  [778] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(105), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(117), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(121), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [996] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(117), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(129), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(133), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(123), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1088] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(117), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(129), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(133), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(139), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(161), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(165), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(173), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(177), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1620] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(117), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(129), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(133), 1,
      aux_sym_is_expression_token1,
    ACTIONS(183), 1,
      aux_sym_function_body_token1,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(127), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(181), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [1676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(191), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token3,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token3,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [1795] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(201), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [1839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(23), 25,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 25,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1913] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      sym_select_clause,
    STATE(356), 1,
      sym__expression,
    STATE(721), 1,
      sym_select_statement,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [1976] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      sym_select_clause,
    STATE(354), 1,
      sym__expression,
    STATE(705), 1,
      sym_select_statement,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [2039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(61), 25,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2076] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      sym_select_clause,
    STATE(352), 1,
      sym__expression,
    STATE(687), 1,
      sym_select_statement,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [2139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(69), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2178] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      sym_select_clause,
    STATE(357), 1,
      sym__expression,
    STATE(669), 1,
      sym_select_statement,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [2241] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      sym_select_clause,
    STATE(351), 1,
      sym__expression,
    STATE(648), 1,
      sym_select_statement,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [2304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2343] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(117), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(129), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(133), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(127), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(225), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [2394] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(117), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(129), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(133), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(127), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(227), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [2445] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      sym_select_clause,
    STATE(358), 1,
      sym__expression,
    STATE(647), 1,
      sym_select_statement,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [2508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 25,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(19), 25,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 25,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 25,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(121), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 23,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 26,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [2730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 26,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [2874] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(231), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(235), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(239), 1,
      aux_sym_is_expression_token1,
    ACTIONS(241), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(237), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(139), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(177), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2958] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_function_body_token1,
    ACTIONS(229), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(231), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(235), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(239), 1,
      aux_sym_is_expression_token1,
    ACTIONS(241), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(237), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(233), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(181), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [3010] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__expression,
    STATE(355), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [3068] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__expression,
    STATE(267), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(27), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 26,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [3342] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(231), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(235), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(239), 1,
      aux_sym_is_expression_token1,
    ACTIONS(241), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(237), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(123), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 26,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [3426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 26,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [3462] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(241), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 23,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 26,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [3538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(161), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3610] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      sym__expression,
    STATE(318), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [3668] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      sym__expression,
    STATE(267), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [3726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 26,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [3762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(173), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [3908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [3946] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(251), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(165), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [4024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 24,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [4061] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(325), 1,
      sym__expression,
    STATE(559), 1,
      sym_ordered_expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [4118] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(319), 1,
      sym__expression,
    STATE(532), 1,
      sym_ordered_expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [4175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4210] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_null_hint_token3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_TRUE_token1,
    ACTIONS(265), 1,
      aux_sym_FALSE_token1,
    ACTIONS(267), 1,
      aux_sym_number_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(233), 1,
      sym__expression,
    STATE(363), 1,
      sym_group_by_clause_body,
    STATE(222), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(243), 13,
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
  [4267] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(252), 1,
      sym__expression,
    STATE(383), 1,
      sym_order_by_clause_body,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [4324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4359] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [4416] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(328), 1,
      sym__expression,
    STATE(716), 1,
      sym_values_clause_body,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [4473] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [4530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4600] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [4657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 23,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [4731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [4941] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [4998] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(123), 16,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [5080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [5115] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(312), 1,
      sym__expression,
    STATE(383), 1,
      sym_order_by_clause_body,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [5172] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      aux_sym_set_statement_token5,
    STATE(271), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [5229] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      aux_sym_set_statement_token5,
    STATE(269), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [5286] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_null_hint_token3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      aux_sym_TRUE_token1,
    ACTIONS(325), 1,
      aux_sym_FALSE_token1,
    ACTIONS(327), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(302), 1,
      sym__expression,
    STATE(363), 1,
      sym_group_by_clause_body,
    STATE(276), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(294), 13,
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
  [5343] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [5400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [5435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 25,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
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
  [5470] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [5527] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(139), 16,
      anon_sym_SEMI,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5574] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(341), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5615] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_null_hint_token3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_TRUE_token1,
    ACTIONS(265), 1,
      aux_sym_FALSE_token1,
    ACTIONS(267), 1,
      aux_sym_number_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(232), 1,
      sym__expression,
    STATE(222), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(243), 13,
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
  [5669] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym__expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [5723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5757] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(202), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [5811] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_null_hint_token3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      aux_sym_TRUE_token1,
    ACTIONS(325), 1,
      aux_sym_FALSE_token1,
    ACTIONS(327), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(283), 1,
      sym__expression,
    STATE(276), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(294), 13,
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
  [5865] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [5919] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_null_hint_token3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_TRUE_token1,
    ACTIONS(265), 1,
      aux_sym_FALSE_token1,
    ACTIONS(267), 1,
      aux_sym_number_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(236), 1,
      sym__expression,
    STATE(222), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(243), 13,
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
  [5973] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(216), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [6027] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(203), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [6081] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(18), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [6135] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_create_function_statement_token4,
    ACTIONS(351), 1,
      aux_sym_null_hint_token1,
    ACTIONS(353), 1,
      aux_sym_null_hint_token5,
    ACTIONS(355), 1,
      aux_sym__function_language_token1,
    ACTIONS(357), 1,
      aux_sym_function_body_token1,
    ACTIONS(347), 3,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
    ACTIONS(349), 4,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
    STATE(190), 6,
      sym_optimizer_hint,
      sym_parallel_hint,
      sym_null_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(343), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6183] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(227), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [6237] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(337), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [6291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [6325] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(226), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [6379] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_null_hint_token3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      aux_sym_TRUE_token1,
    ACTIONS(325), 1,
      aux_sym_FALSE_token1,
    ACTIONS(327), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(286), 1,
      sym__expression,
    STATE(276), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(294), 13,
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
  [6433] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_null_hint_token3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      aux_sym_TRUE_token1,
    ACTIONS(325), 1,
      aux_sym_FALSE_token1,
    ACTIONS(327), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(290), 1,
      sym__expression,
    STATE(276), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(294), 13,
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
  [6487] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_null_hint_token3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_TRUE_token1,
    ACTIONS(265), 1,
      aux_sym_FALSE_token1,
    ACTIONS(267), 1,
      aux_sym_number_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(234), 1,
      sym__expression,
    STATE(222), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(243), 13,
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
  [6541] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_null_hint_token3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      aux_sym_TRUE_token1,
    ACTIONS(325), 1,
      aux_sym_FALSE_token1,
    ACTIONS(327), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(314), 1,
      sym__expression,
    STATE(276), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(294), 13,
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
  [6595] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(221), 1,
      sym__expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [6649] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_null_hint_token3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      aux_sym_TRUE_token1,
    ACTIONS(325), 1,
      aux_sym_FALSE_token1,
    ACTIONS(327), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(303), 1,
      sym__expression,
    STATE(276), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(294), 13,
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
  [6703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [6737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [6771] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(251), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [6825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [6859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [6893] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(329), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [6947] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(346), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7001] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(349), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7125] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [7179] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_create_function_statement_token4,
    ACTIONS(351), 1,
      aux_sym_null_hint_token1,
    ACTIONS(353), 1,
      aux_sym_null_hint_token5,
    ACTIONS(355), 1,
      aux_sym__function_language_token1,
    ACTIONS(357), 1,
      aux_sym_function_body_token1,
    ACTIONS(347), 3,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
    ACTIONS(349), 4,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
    STATE(183), 6,
      sym_optimizer_hint,
      sym_parallel_hint,
      sym_null_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(361), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7227] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_null_hint_token3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      aux_sym_TRUE_token1,
    ACTIONS(325), 1,
      aux_sym_FALSE_token1,
    ACTIONS(327), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(288), 1,
      sym__expression,
    STATE(276), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(294), 13,
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
  [7281] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(332), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7335] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(327), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7389] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_null_hint_token3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_TRUE_token1,
    ACTIONS(265), 1,
      aux_sym_FALSE_token1,
    ACTIONS(267), 1,
      aux_sym_number_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(235), 1,
      sym__expression,
    STATE(222), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(243), 13,
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
  [7443] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [7497] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_create_function_statement_token4,
    ACTIONS(351), 1,
      aux_sym_null_hint_token1,
    ACTIONS(353), 1,
      aux_sym_null_hint_token5,
    ACTIONS(355), 1,
      aux_sym__function_language_token1,
    ACTIONS(357), 1,
      aux_sym_function_body_token1,
    ACTIONS(347), 3,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
    ACTIONS(349), 4,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
    STATE(136), 6,
      sym_optimizer_hint,
      sym_parallel_hint,
      sym_null_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(363), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7545] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(335), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7599] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(124), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7653] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(334), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7707] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_null_hint_token3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_TRUE_token1,
    ACTIONS(265), 1,
      aux_sym_FALSE_token1,
    ACTIONS(267), 1,
      aux_sym_number_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(255), 1,
      sym__expression,
    STATE(222), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(243), 13,
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
  [7761] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(358), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7815] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7869] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(257), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [7923] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(217), 1,
      sym__expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [7977] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym__expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [8031] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(270), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [8085] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(113), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [8139] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(348), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [8193] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [8247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8283] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym__expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [8337] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_null_hint_token3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_TRUE_token1,
    ACTIONS(265), 1,
      aux_sym_FALSE_token1,
    ACTIONS(267), 1,
      aux_sym_number_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(229), 1,
      sym__expression,
    STATE(222), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(243), 13,
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
  [8391] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym__expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [8445] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(259), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [8499] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_create_function_statement_token4,
    ACTIONS(351), 1,
      aux_sym_null_hint_token1,
    ACTIONS(353), 1,
      aux_sym_null_hint_token5,
    ACTIONS(355), 1,
      aux_sym__function_language_token1,
    ACTIONS(357), 1,
      aux_sym_function_body_token1,
    ACTIONS(347), 3,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
    ACTIONS(349), 4,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
    STATE(190), 6,
      sym_optimizer_hint,
      sym_parallel_hint,
      sym_null_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(365), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8547] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_null_hint_token3,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      aux_sym_TRUE_token1,
    ACTIONS(265), 1,
      aux_sym_FALSE_token1,
    ACTIONS(267), 1,
      aux_sym_number_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(250), 1,
      sym__expression,
    STATE(222), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(243), 13,
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
  [8601] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(340), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [8655] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_null_hint_token3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(85), 1,
      aux_sym_TRUE_token1,
    ACTIONS(87), 1,
      aux_sym_FALSE_token1,
    ACTIONS(89), 1,
      aux_sym_number_token1,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym__expression,
    STATE(49), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(79), 13,
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
  [8709] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(322), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [8763] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [8817] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_null_hint_token3,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      aux_sym_TRUE_token1,
    ACTIONS(325), 1,
      aux_sym_FALSE_token1,
    ACTIONS(327), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(316), 1,
      sym__expression,
    STATE(276), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(294), 13,
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
  [8871] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_create_function_statement_token4,
    ACTIONS(378), 1,
      aux_sym_null_hint_token1,
    ACTIONS(381), 1,
      aux_sym_null_hint_token5,
    ACTIONS(384), 1,
      aux_sym__function_language_token1,
    ACTIONS(387), 1,
      aux_sym_function_body_token1,
    ACTIONS(372), 3,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
    ACTIONS(375), 4,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
    STATE(190), 6,
      sym_optimizer_hint,
      sym_parallel_hint,
      sym_null_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(367), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8919] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [8973] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [9027] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_null_hint_token3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      aux_sym_TRUE_token1,
    ACTIONS(45), 1,
      aux_sym_FALSE_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(30), 13,
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
  [9081] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_null_hint_token3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_TRUE_token1,
    ACTIONS(215), 1,
      aux_sym_FALSE_token1,
    ACTIONS(217), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(111), 1,
      sym__expression,
    STATE(87), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(102), 13,
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
  [9135] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_null_hint_token3,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      aux_sym_TRUE_token1,
    ACTIONS(283), 1,
      aux_sym_FALSE_token1,
    ACTIONS(285), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(249), 1,
      sym__expression,
    STATE(178), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(196), 13,
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
  [9189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(19), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(23), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(69), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(61), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    STATE(37), 1,
      sym_NULL,
    STATE(254), 1,
      sym_null_constraint,
    ACTIONS(396), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9863] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(139), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9908] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(231), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(235), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(239), 1,
      aux_sym_is_expression_token1,
    ACTIONS(241), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(237), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(233), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(225), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [9955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9988] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    STATE(37), 1,
      sym_NULL,
    STATE(254), 1,
      sym_null_constraint,
    ACTIONS(412), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [10029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10062] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(231), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(235), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(239), 1,
      aux_sym_is_expression_token1,
    ACTIONS(241), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(237), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(233), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(227), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [10109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10243] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(121), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(161), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10355] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(418), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(422), 1,
      aux_sym_is_expression_token1,
    ACTIONS(424), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(426), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(420), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(416), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10399] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(434), 1,
      aux_sym_where_clause_token1,
    ACTIONS(436), 1,
      aux_sym_from_clause_token1,
    ACTIONS(438), 1,
      aux_sym_join_type_token1,
    ACTIONS(442), 1,
      aux_sym_join_clause_token1,
    STATE(256), 1,
      sym_from_clause,
    STATE(364), 1,
      sym_where_clause,
    STATE(372), 1,
      sym_order_by_clause,
    STATE(405), 1,
      sym_group_by_clause,
    STATE(677), 1,
      sym_join_type,
    STATE(260), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(440), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [10455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10519] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(418), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(422), 1,
      aux_sym_is_expression_token1,
    ACTIONS(424), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(426), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(420), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(416), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(444), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [10569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(121), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10603] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(418), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(422), 1,
      aux_sym_is_expression_token1,
    ACTIONS(424), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(426), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(420), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(416), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(123), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(426), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 3,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(27), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(165), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(173), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(177), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 4,
      aux_sym_create_function_parameter_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11067] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(450), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [11112] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(418), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(422), 1,
      aux_sym_is_expression_token1,
    ACTIONS(424), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(426), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(420), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(416), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(454), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
  [11157] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(456), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_null_hint_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_table_constraint_check_token1,
  [11202] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(466), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11317] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(418), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(422), 1,
      aux_sym_is_expression_token1,
    ACTIONS(424), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(426), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(420), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(416), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(470), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [11362] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(434), 1,
      aux_sym_where_clause_token1,
    ACTIONS(438), 1,
      aux_sym_join_type_token1,
    ACTIONS(442), 1,
      aux_sym_join_clause_token1,
    STATE(366), 1,
      sym_where_clause,
    STATE(368), 1,
      sym_order_by_clause,
    STATE(408), 1,
      sym_group_by_clause,
    STATE(677), 1,
      sym_join_type,
    STATE(258), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(440), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11412] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(456), 9,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [11456] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(434), 1,
      aux_sym_where_clause_token1,
    ACTIONS(438), 1,
      aux_sym_join_type_token1,
    ACTIONS(442), 1,
      aux_sym_join_clause_token1,
    STATE(365), 1,
      sym_where_clause,
    STATE(382), 1,
      sym_order_by_clause,
    STATE(396), 1,
      sym_group_by_clause,
    STATE(677), 1,
      sym_join_type,
    STATE(317), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(440), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11506] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(470), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11550] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(434), 1,
      aux_sym_where_clause_token1,
    ACTIONS(438), 1,
      aux_sym_join_type_token1,
    ACTIONS(442), 1,
      aux_sym_join_clause_token1,
    STATE(366), 1,
      sym_where_clause,
    STATE(368), 1,
      sym_order_by_clause,
    STATE(408), 1,
      sym_group_by_clause,
    STATE(677), 1,
      sym_join_type,
    STATE(317), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(440), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(19), 18,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [11656] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    ACTIONS(482), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(485), 1,
      aux_sym_set_statement_token1,
    ACTIONS(488), 1,
      aux_sym_grant_statement_token1,
    ACTIONS(491), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(494), 1,
      aux_sym_grant_statement_token5,
    ACTIONS(497), 1,
      aux_sym_grant_statement_token6,
    STATE(230), 1,
      sym_select_clause,
    STATE(263), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(435), 11,
      sym_create_function_statement,
      sym_create_schema_statement,
      sym_set_statement,
      sym_grant_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [11701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 18,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 18,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(61), 18,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [11815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 18,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11844] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11887] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11930] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(394), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(402), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(406), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(410), 1,
      aux_sym_is_expression_token1,
    ACTIONS(408), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(404), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [11973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(23), 18,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 18,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12031] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(9), 1,
      aux_sym_set_statement_token1,
    ACTIONS(11), 1,
      aux_sym_grant_statement_token1,
    ACTIONS(13), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(15), 1,
      aux_sym_grant_statement_token5,
    ACTIONS(17), 1,
      aux_sym_grant_statement_token6,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_select_clause,
    STATE(263), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(435), 11,
      sym_create_function_statement,
      sym_create_schema_statement,
      sym_set_statement,
      sym_grant_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [12076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(69), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [12192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(165), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [12246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(173), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12302] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(518), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(522), 1,
      aux_sym_is_expression_token1,
    ACTIONS(524), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(526), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(520), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(516), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(123), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12342] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_join_type_token1,
    ACTIONS(528), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(532), 1,
      aux_sym_where_clause_token1,
    ACTIONS(534), 1,
      aux_sym_from_clause_token1,
    ACTIONS(536), 1,
      aux_sym_join_clause_token1,
    STATE(323), 1,
      sym_from_clause,
    STATE(372), 1,
      sym_order_by_clause,
    STATE(445), 1,
      sym_where_clause,
    STATE(482), 1,
      sym_group_by_clause,
    STATE(774), 1,
      sym_join_type,
    STATE(324), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(440), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(428), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [12394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(177), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(121), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 16,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12480] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(518), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(522), 1,
      aux_sym_is_expression_token1,
    ACTIONS(524), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(526), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(520), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(516), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(139), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [12630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(27), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [12712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [12738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [12764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [12790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [12816] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(550), 1,
      aux_sym_set_statement_token5,
    ACTIONS(552), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(554), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(556), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(558), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(560), 1,
      aux_sym_table_constraint_primary_key_token1,
    STATE(37), 1,
      sym_NULL,
    ACTIONS(548), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(309), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [12864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [12890] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(518), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(522), 1,
      aux_sym_is_expression_token1,
    ACTIONS(524), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(526), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(477), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(520), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(566), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(516), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(444), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
  [12936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(526), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 16,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [12996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(161), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [13024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token4,
      aux_sym_optimizer_hint_token1,
      aux_sym_optimizer_hint_token2,
      aux_sym_optimizer_hint_token3,
      aux_sym_parallel_hint_token1,
      aux_sym_parallel_hint_token2,
      aux_sym_parallel_hint_token3,
      aux_sym_parallel_hint_token4,
      aux_sym_null_hint_token1,
      aux_sym_null_hint_token5,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [13050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [13078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 17,
      anon_sym_SEMI,
      aux_sym_create_function_parameter_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [13106] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(550), 1,
      aux_sym_set_statement_token5,
    ACTIONS(552), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(554), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(556), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(558), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(560), 1,
      aux_sym_table_constraint_primary_key_token1,
    STATE(37), 1,
      sym_NULL,
    ACTIONS(570), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(310), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [13151] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_null_hint_token3,
    ACTIONS(577), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(580), 1,
      aux_sym_set_statement_token5,
    ACTIONS(583), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(586), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(589), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(592), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(595), 1,
      aux_sym_table_constraint_primary_key_token1,
    STATE(37), 1,
      sym_NULL,
    ACTIONS(575), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(310), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [13196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(500), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [13225] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(483), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(458), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [13270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(603), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [13299] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(518), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(522), 1,
      aux_sym_is_expression_token1,
    ACTIONS(524), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(526), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(520), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(566), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(516), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(454), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
  [13340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(607), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [13369] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(518), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(522), 1,
      aux_sym_is_expression_token1,
    ACTIONS(524), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(526), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(520), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(566), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(516), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(470), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
  [13410] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym_join_type_token1,
    ACTIONS(617), 1,
      aux_sym_join_clause_token1,
    STATE(677), 1,
      sym_join_type,
    STATE(317), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(614), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(609), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
  [13445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(620), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [13473] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(626), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [13519] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_join_type_token1,
    ACTIONS(528), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(532), 1,
      aux_sym_where_clause_token1,
    ACTIONS(536), 1,
      aux_sym_join_clause_token1,
    STATE(382), 1,
      sym_order_by_clause,
    STATE(438), 1,
      sym_where_clause,
    STATE(480), 1,
      sym_group_by_clause,
    STATE(774), 1,
      sym_join_type,
    STATE(342), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(440), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(476), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [13565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(628), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [13593] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(470), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [13633] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_join_type_token1,
    ACTIONS(528), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(532), 1,
      aux_sym_where_clause_token1,
    ACTIONS(536), 1,
      aux_sym_join_clause_token1,
    STATE(368), 1,
      sym_order_by_clause,
    STATE(443), 1,
      sym_where_clause,
    STATE(481), 1,
      sym_group_by_clause,
    STATE(774), 1,
      sym_join_type,
    STATE(320), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(440), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [13679] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_join_type_token1,
    ACTIONS(528), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(532), 1,
      aux_sym_where_clause_token1,
    ACTIONS(536), 1,
      aux_sym_join_clause_token1,
    STATE(368), 1,
      sym_order_by_clause,
    STATE(443), 1,
      sym_where_clause,
    STATE(481), 1,
      sym_group_by_clause,
    STATE(774), 1,
      sym_join_type,
    STATE(342), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(440), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [13725] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(626), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [13766] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [13808] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [13850] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(523), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [13892] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [13934] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [13976] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(644), 1,
      aux_sym_table_constraint_check_token1,
    STATE(37), 1,
      sym_NULL,
    STATE(343), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(642), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [14010] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14052] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14094] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14136] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14178] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14220] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14262] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14304] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14346] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(500), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [14408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym_join_type_token1,
    ACTIONS(667), 1,
      aux_sym_join_clause_token1,
    STATE(774), 1,
      sym_join_type,
    STATE(342), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(614), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(609), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
  [14439] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(644), 1,
      aux_sym_table_constraint_check_token1,
    STATE(37), 1,
      sym_NULL,
    STATE(344), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(670), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [14470] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      aux_sym_null_hint_token3,
    ACTIONS(677), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(680), 1,
      aux_sym_table_constraint_check_token1,
    STATE(37), 1,
      sym_NULL,
    STATE(344), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(672), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [14501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(603), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [14526] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(607), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [14588] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(687), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14625] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(689), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14662] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(691), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14699] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14735] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(628), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [14795] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(620), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token15,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [14855] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14891] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14927] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(297), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(301), 1,
      aux_sym_create_function_parameter_token1,
    ACTIONS(305), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(309), 1,
      aux_sym_is_expression_token1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(303), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [14963] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_null_hint_token2,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    STATE(606), 1,
      sym_on_update_action,
    STATE(609), 1,
      sym_on_delete_action,
    ACTIONS(707), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [14991] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_null_hint_token2,
    STATE(590), 1,
      sym_on_update_action,
    STATE(604), 1,
      sym_on_delete_action,
    ACTIONS(711), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_null_hint_token2,
    STATE(596), 1,
      sym_on_update_action,
    STATE(605), 1,
      sym_on_delete_action,
    ACTIONS(713), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON_COLON,
    ACTIONS(715), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [15081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    STATE(368), 1,
      sym_order_by_clause,
    STATE(408), 1,
      sym_group_by_clause,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    STATE(375), 1,
      sym_order_by_clause,
    STATE(390), 1,
      sym_group_by_clause,
    ACTIONS(719), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    STATE(382), 1,
      sym_order_by_clause,
    STATE(396), 1,
      sym_group_by_clause,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(721), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [15180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15197] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      aux_sym_null_hint_token2,
    ACTIONS(727), 1,
      aux_sym_grant_statement_token2,
    ACTIONS(731), 1,
      aux_sym_grant_statement_token7,
    STATE(398), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(729), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [15222] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(735), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(737), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(739), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(741), 1,
      sym_identifier,
    STATE(541), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [15249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
    STATE(526), 1,
      sym_constrained_type,
    ACTIONS(25), 2,
      aux_sym_null_hint_token3,
      aux_sym_create_schema_statement_token3,
    STATE(437), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(23), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [15274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15291] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(735), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(737), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(739), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(741), 1,
      sym_identifier,
    STATE(607), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [15318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 11,
      aux_sym_null_hint_token2,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
    STATE(540), 1,
      sym_constrained_type,
    ACTIONS(25), 2,
      aux_sym_null_hint_token3,
      aux_sym_create_schema_statement_token3,
    STATE(458), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(23), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [15377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(749), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [15398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 11,
      aux_sym_null_hint_token2,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 11,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 11,
      aux_sym_null_hint_token2,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(764), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [15521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(470), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [15542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COLON_COLON,
    ACTIONS(715), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(769), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [15582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_where_clause_token1,
    STATE(440), 1,
      sym_where_clause,
    ACTIONS(771), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    STATE(378), 1,
      sym_order_by_clause,
    ACTIONS(747), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_where_clause_token1,
    STATE(451), 1,
      sym_where_clause,
    ACTIONS(781), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_where_clause_token1,
    STATE(474), 1,
      sym_where_clause,
    ACTIONS(783), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    STATE(375), 1,
      sym_order_by_clause,
    ACTIONS(719), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_where_clause_token1,
    STATE(472), 1,
      sym_where_clause,
    ACTIONS(785), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      aux_sym_grant_statement_token7,
    ACTIONS(787), 1,
      aux_sym_null_hint_token2,
    STATE(403), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(789), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [15788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(791), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [15824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 10,
      aux_sym_null_hint_token3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
  [15856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_null_hint_token2,
    ACTIONS(802), 1,
      aux_sym_grant_statement_token7,
    STATE(403), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(799), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [15878] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_identifier,
    STATE(504), 1,
      sym_constrained_type,
    STATE(568), 1,
      sym_create_function_parameter,
    STATE(475), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(805), 4,
      aux_sym_create_function_parameter_token1,
      aux_sym_create_function_parameter_token2,
      aux_sym_create_function_parameter_token3,
      aux_sym_create_function_parameter_token4,
  [15902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    STATE(368), 1,
      sym_order_by_clause,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15922] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_identifier,
    STATE(503), 1,
      sym_create_function_parameter,
    STATE(504), 1,
      sym_constrained_type,
    STATE(475), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(805), 4,
      aux_sym_create_function_parameter_token1,
      aux_sym_create_function_parameter_token2,
      aux_sym_create_function_parameter_token3,
      aux_sym_create_function_parameter_token4,
  [15946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_order_by_clause_token1,
    STATE(382), 1,
      sym_order_by_clause,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [15986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_where_clause_token1,
    STATE(444), 1,
      sym_where_clause,
    ACTIONS(812), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16006] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_null_hint_token3,
    ACTIONS(816), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(818), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(820), 1,
      aux_sym_TRUE_token1,
    ACTIONS(822), 1,
      aux_sym_FALSE_token1,
    STATE(72), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(824), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(828), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16065] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(832), 1,
      aux_sym_create_function_statement_token2,
    ACTIONS(834), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(836), 1,
      aux_sym_create_schema_statement_token1,
    ACTIONS(838), 1,
      aux_sym_grant_statement_token14,
    ACTIONS(840), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(842), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(844), 1,
      aux_sym_create_index_statement_token1,
    STATE(734), 1,
      sym_unique_constraint,
  [16096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(846), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16113] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym_null_hint_token3,
    ACTIONS(852), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(854), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(856), 1,
      aux_sym_TRUE_token1,
    ACTIONS(858), 1,
      aux_sym_FALSE_token1,
    STATE(208), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(860), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_null_hint_token3,
    ACTIONS(866), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(868), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(870), 1,
      aux_sym_TRUE_token1,
    ACTIONS(872), 1,
      aux_sym_FALSE_token1,
    STATE(110), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 9,
      aux_sym_null_hint_token2,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token7,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [16195] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym_null_hint_token3,
    ACTIONS(878), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(880), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(882), 1,
      aux_sym_TRUE_token1,
    ACTIONS(884), 1,
      aux_sym_FALSE_token1,
    STATE(304), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [16235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(888), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [16267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(894), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16284] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      aux_sym_null_hint_token3,
    ACTIONS(900), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(902), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(904), 1,
      aux_sym_TRUE_token1,
    ACTIONS(906), 1,
      aux_sym_FALSE_token1,
    STATE(237), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [16324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(910), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(912), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(914), 1,
      aux_sym_TRUE_token1,
    ACTIONS(916), 1,
      aux_sym_FALSE_token1,
    STATE(27), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      aux_sym_function_body_token1,
    ACTIONS(918), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(922), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(926), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(930), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(934), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16448] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(940), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_NULL,
    STATE(254), 1,
      sym_null_constraint,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(946), 7,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16504] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      aux_sym_null_hint_token3,
    ACTIONS(902), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(904), 1,
      aux_sym_TRUE_token1,
    ACTIONS(906), 1,
      aux_sym_FALSE_token1,
    STATE(231), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16526] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(950), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_NULL,
    STATE(254), 1,
      sym_null_constraint,
    ACTIONS(952), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16552] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    STATE(375), 1,
      sym_order_by_clause,
    STATE(479), 1,
      sym_group_by_clause,
    ACTIONS(719), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [16574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16630] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    STATE(382), 1,
      sym_order_by_clause,
    STATE(480), 1,
      sym_group_by_clause,
    ACTIONS(476), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [16652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    STATE(368), 1,
      sym_order_by_clause,
    STATE(481), 1,
      sym_group_by_clause,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [16688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym_null_hint_token3,
    ACTIONS(854), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(856), 1,
      aux_sym_TRUE_token1,
    ACTIONS(858), 1,
      aux_sym_FALSE_token1,
    STATE(223), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16864] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(982), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_NULL,
    STATE(254), 1,
      sym_null_constraint,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16890] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(986), 1,
      anon_sym_LPAREN,
    ACTIONS(988), 1,
      sym_identifier,
    STATE(394), 1,
      sym_type_cast,
    STATE(386), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [16914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(990), 1,
      aux_sym_setof_token1,
    STATE(158), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(212), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [16934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16962] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_null_hint_token3,
    ACTIONS(818), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(820), 1,
      aux_sym_TRUE_token1,
    ACTIONS(822), 1,
      aux_sym_FALSE_token1,
    STATE(60), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [16984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [16998] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_null_hint_token3,
    ACTIONS(868), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(870), 1,
      aux_sym_TRUE_token1,
    ACTIONS(872), 1,
      aux_sym_FALSE_token1,
    STATE(115), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [17020] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym_null_hint_token3,
    ACTIONS(880), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(882), 1,
      aux_sym_TRUE_token1,
    ACTIONS(884), 1,
      aux_sym_FALSE_token1,
    STATE(291), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [17042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [17056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [17070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(990), 1,
      aux_sym_setof_token1,
    STATE(164), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(212), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [17104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(912), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(914), 1,
      aux_sym_TRUE_token1,
    ACTIONS(916), 1,
      aux_sym_FALSE_token1,
    STATE(24), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [17126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [17140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [17154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [17168] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    ACTIONS(400), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(1006), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_NULL,
    STATE(254), 1,
      sym_null_constraint,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 7,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [17207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(478), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(769), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
  [17224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
    STATE(478), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(470), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
  [17241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    STATE(378), 1,
      sym_order_by_clause,
    ACTIONS(747), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [17257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    STATE(375), 1,
      sym_order_by_clause,
    ACTIONS(719), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [17273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    STATE(382), 1,
      sym_order_by_clause,
    ACTIONS(476), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [17289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_order_by_clause_token1,
    STATE(368), 1,
      sym_order_by_clause,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [17305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(791), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [17321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(470), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
  [17337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(1018), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token12,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
  [17350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym_identifier,
    ACTIONS(1022), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token12,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
  [17363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_identifier,
    STATE(544), 1,
      sym_constrained_type,
    STATE(433), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_identifier,
    STATE(296), 1,
      sym_constrained_type,
    STATE(219), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_identifier,
    ACTIONS(1030), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token12,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
  [17406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      aux_sym_set_statement_token1,
    STATE(381), 1,
      sym__constraint_action,
    ACTIONS(1036), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [17420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_identifier,
    STATE(300), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym_identifier,
    STATE(46), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_identifier,
    STATE(535), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym_identifier,
    STATE(156), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_identifier,
    STATE(275), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_identifier,
    STATE(199), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_identifier,
    STATE(88), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_identifier,
    STATE(10), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_identifier,
    STATE(331), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [17528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    ACTIONS(1050), 1,
      aux_sym_using_clause_token1,
    STATE(409), 1,
      sym_index_table_parameters,
    STATE(591), 1,
      sym_using_clause,
  [17544] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    ACTIONS(1050), 1,
      aux_sym_using_clause_token1,
    STATE(393), 1,
      sym_index_table_parameters,
    STATE(575), 1,
      sym_using_clause,
  [17560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      aux_sym_set_statement_token1,
    STATE(379), 1,
      sym__constraint_action,
    ACTIONS(1052), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [17574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      aux_sym_create_function_parameters_repeat1,
  [17587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_EQ,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    STATE(308), 1,
      sym_string,
  [17637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      sym_string,
  [17676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      aux_sym_index_table_parameters_repeat1,
  [17689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_parameters_repeat1,
  [17702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [17728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [17741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [17767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [17780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      aux_sym_grant_statement_token4,
    STATE(284), 1,
      sym_select_clause,
    STATE(586), 1,
      sym_select_statement,
  [17793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      aux_sym_grant_statement_token4,
    STATE(284), 1,
      sym_select_clause,
    STATE(558), 1,
      sym_select_statement,
  [17806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym_string,
  [17819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(1099), 2,
      aux_sym_grant_statement_token16,
      sym_identifier,
  [17869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_EQ,
    ACTIONS(952), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      sym_string,
  [17893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [17919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      sym_string,
  [17932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym_identifier,
    ACTIONS(1105), 2,
      aux_sym_set_statement_token2,
      aux_sym_set_statement_token3,
  [17943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      aux_sym_index_table_parameters_repeat1,
  [17956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      aux_sym_parameters_repeat1,
  [17969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_string,
  [17982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(1113), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      aux_sym_create_table_parameters_repeat1,
  [18006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [18019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    STATE(384), 1,
      sym_assigment_expression,
    STATE(420), 1,
      sym_set_clause_body,
  [18032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    STATE(539), 1,
      aux_sym_index_table_parameters_repeat1,
  [18045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_EQ,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(545), 1,
      aux_sym_create_table_parameters_repeat1,
  [18069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [18082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_parameters_repeat1,
  [18095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_EQ,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      aux_sym_create_table_parameters_repeat1,
  [18119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [18132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(1141), 2,
      aux_sym_grant_statement_token16,
      sym_identifier,
  [18143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_create_function_parameters_repeat1,
  [18156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [18169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [18182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(1154), 2,
      aux_sym_grant_statement_token16,
      sym_identifier,
  [18193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [18206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_group_by_clause_body_repeat1,
  [18219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(1165), 2,
      aux_sym_grant_statement_token16,
      sym_identifier,
  [18230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(1169), 2,
      aux_sym_grant_statement_token16,
      sym_identifier,
  [18241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      aux_sym_create_function_parameters_repeat1,
  [18254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(1175), 2,
      aux_sym_grant_statement_token16,
      sym_identifier,
  [18265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_SEMI,
    ACTIONS(1179), 1,
      anon_sym_DOLLAR_DOLLAR,
  [18275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      aux_sym_create_schema_statement_token2,
    ACTIONS(1183), 1,
      sym_identifier,
  [18293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      sym_tuple,
  [18303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_tuple,
  [18313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(1189), 1,
      anon_sym_SQUOTE,
  [18323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 2,
      anon_sym_EQ,
      aux_sym_set_statement_token4,
  [18339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_null_hint_token2,
    ACTIONS(1195), 1,
      aux_sym_grant_statement_token3,
  [18349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_tuple,
  [18375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_tuple,
  [18385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_tuple,
  [18395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_set_statement_token1,
    STATE(395), 1,
      sym_set_clause,
  [18421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    STATE(388), 1,
      sym_index_table_parameters,
  [18431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_LPAREN,
    STATE(224), 1,
      sym_tuple,
  [18441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym_tuple,
  [18467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      aux_sym_join_type_token5,
    ACTIONS(1215), 1,
      aux_sym_join_clause_token1,
  [18477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym_tuple,
  [18487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_LPAREN,
    STATE(228), 1,
      sym_tuple,
  [18497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LPAREN,
    STATE(636), 1,
      sym_create_function_parameters,
  [18507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_null_hint_token3,
    STATE(38), 1,
      sym_NULL,
  [18517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym_grant_statement_token9,
    STATE(564), 1,
      sym_references_constraint,
  [18527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_SQUOTE,
    ACTIONS(1221), 1,
      anon_sym_SEMI,
  [18537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym_grant_statement_token9,
    STATE(578), 1,
      sym_references_constraint,
  [18547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    STATE(400), 1,
      sym_assigment_expression,
  [18557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
    STATE(461), 1,
      sym_create_table_parameters,
  [18567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      aux_sym_null_hint_token2,
    STATE(401), 1,
      sym_on_delete_action,
  [18577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    STATE(397), 1,
      sym_index_table_parameters,
  [18587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      aux_sym_values_clause_token1,
    STATE(473), 1,
      sym_values_clause,
  [18597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_tuple,
  [18607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      aux_sym_null_hint_token2,
    STATE(402), 1,
      sym_on_delete_action,
  [18633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_identifier,
    STATE(543), 1,
      sym_parameter,
  [18651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_identifier,
    STATE(572), 1,
      sym_parameter,
  [18661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_tuple,
  [18671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LPAREN,
    STATE(620), 1,
      sym_create_function_parameters,
  [18681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 2,
      anon_sym_EQ,
      aux_sym_set_statement_token4,
  [18689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      aux_sym_grant_statement_token6,
    ACTIONS(1241), 1,
      aux_sym_grant_statement_token7,
  [18699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      aux_sym_null_hint_token2,
    STATE(401), 1,
      sym_on_update_action,
  [18709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      aux_sym_null_hint_token2,
    STATE(402), 1,
      sym_on_update_action,
  [18719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      aux_sym_null_hint_token2,
    STATE(389), 1,
      sym_on_delete_action,
  [18729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_tuple,
  [18747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      aux_sym_null_hint_token2,
    STATE(389), 1,
      sym_on_update_action,
  [18757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
    STATE(468), 1,
      sym_parameters,
  [18767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      aux_sym_number_token1,
  [18774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      aux_sym_null_hint_token2,
  [18781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      sym_identifier,
  [18788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym_identifier,
  [18795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [18802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
  [18809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [18816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      sym_identifier,
  [18823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      sym_identifier,
  [18830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      aux_sym_create_function_statement_token4,
  [18837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      aux_sym_null_hint_token2,
  [18844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_EQ,
  [18851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
  [18858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      aux_sym_from_clause_token1,
  [18865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      aux_sym_grant_statement_token18,
  [18872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      sym_identifier,
  [18879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      aux_sym_set_statement_token4,
  [18886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      sym_identifier,
  [18893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      aux_sym_set_statement_token4,
  [18900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      aux_sym_grant_statement_token18,
  [18907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      aux_sym_null_hint_token2,
  [18914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      sym_identifier,
  [18921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      aux_sym_grant_statement_token18,
  [18928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      aux_sym_grant_statement_token1,
  [18935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      aux_sym_create_schema_statement_token4,
  [18942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      aux_sym_create_function_statement_token4,
  [18949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym_identifier,
  [18956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      aux_sym_null_hint_token2,
  [18963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      aux_sym_join_clause_token1,
  [18970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      aux_sym_grant_statement_token1,
  [18977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      aux_sym_create_function_parameter_token1,
  [18984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      sym_identifier,
  [18991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [18998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      aux_sym_number_token1,
  [19005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_SQUOTE,
  [19012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_DOLLAR_DOLLAR,
  [19019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [19026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
  [19033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      aux_sym_null_hint_token2,
  [19040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_DOLLAR_DOLLAR,
  [19047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_SQUOTE,
  [19054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
  [19061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      aux_sym_set_statement_token4,
  [19068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      sym_identifier,
  [19075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      aux_sym_null_hint_token2,
  [19082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym_identifier,
  [19089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      aux_sym_from_clause_token1,
  [19096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      aux_sym_null_hint_token2,
  [19103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      aux_sym_null_hint_token2,
  [19110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      sym_identifier,
  [19117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      anon_sym_RBRACK,
  [19124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      aux_sym_function_body_token1,
  [19131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym_identifier,
  [19138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      aux_sym_set_statement_token4,
  [19145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_RBRACK,
  [19152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      aux_sym_grant_statement_token1,
  [19159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym_identifier,
  [19166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      aux_sym_create_schema_statement_token3,
  [19173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
  [19180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      aux_sym_create_function_statement_token4,
  [19187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DOLLAR_DOLLAR,
  [19194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_SQUOTE,
  [19201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym_identifier,
  [19208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      aux_sym_grant_statement_token1,
  [19215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      aux_sym_grant_statement_token18,
  [19222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      sym_identifier,
  [19229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      aux_sym_join_clause_token1,
  [19236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      aux_sym_null_hint_token4,
  [19243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      aux_sym_from_clause_token1,
  [19250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym_identifier,
  [19257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      aux_sym_grant_statement_token18,
  [19264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_RBRACK,
  [19271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_LPAREN,
  [19278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      aux_sym_join_clause_token1,
  [19285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym_identifier,
  [19292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      aux_sym_number_token1,
  [19299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
  [19306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      aux_sym_group_by_clause_token1,
  [19313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      anon_sym_DOLLAR_DOLLAR,
  [19320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      anon_sym_SQUOTE,
  [19327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      aux_sym_group_by_clause_token1,
  [19334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      aux_sym_set_statement_token4,
  [19341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      aux_sym_null_hint_token3,
  [19348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      sym_identifier,
  [19355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_LPAREN,
  [19362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      aux_sym_null_hint_token3,
  [19369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      aux_sym_from_clause_token1,
  [19376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym_identifier,
  [19383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      sym_identifier,
  [19390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_RBRACK,
  [19397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      sym_identifier,
  [19404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_SQUOTE,
  [19411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      sym_identifier,
  [19418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      aux_sym_number_token1,
  [19425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
  [19432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      aux_sym_number_token1,
  [19439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_DOLLAR_DOLLAR,
  [19446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_SQUOTE,
  [19453] = 2,
    ACTIONS(1431), 1,
      aux_sym_string_token1,
    ACTIONS(1433), 1,
      sym_comment,
  [19460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      aux_sym_grant_statement_token1,
  [19467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      aux_sym_grant_statement_token1,
  [19474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      sym_identifier,
  [19481] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1441), 1,
      aux_sym_string_token2,
  [19488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      aux_sym_set_statement_token4,
  [19495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      aux_sym_from_clause_token1,
  [19502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
  [19509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_RBRACK,
  [19516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      aux_sym_create_function_statement_token4,
  [19523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      aux_sym_grant_statement_token1,
  [19530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      aux_sym_number_token1,
  [19537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
  [19544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      aux_sym_null_hint_token3,
  [19551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_DOLLAR_DOLLAR,
  [19558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_SQUOTE,
  [19565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      aux_sym_null_hint_token3,
  [19572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      aux_sym_grant_statement_token18,
  [19579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      aux_sym_null_hint_token2,
  [19586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      sym_identifier,
  [19593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      sym_identifier,
  [19600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      sym_identifier,
  [19607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      aux_sym_from_clause_token1,
  [19614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      aux_sym_grant_statement_token18,
  [19621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_RBRACK,
  [19628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      aux_sym_create_index_statement_token1,
  [19635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      aux_sym_grant_statement_token1,
  [19642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      sym_identifier,
  [19649] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1487), 1,
      aux_sym_string_token2,
  [19656] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1489), 1,
      aux_sym_string_token1,
  [19663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      aux_sym_group_by_clause_token1,
  [19670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      aux_sym_group_by_clause_token1,
  [19677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      sym_identifier,
  [19684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_DOLLAR_DOLLAR,
  [19691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      aux_sym_grant_statement_token1,
  [19698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      aux_sym_create_function_parameter_token1,
  [19705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      aux_sym_grant_statement_token18,
  [19712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      aux_sym_grant_statement_token18,
  [19719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      sym_identifier,
  [19726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      sym_identifier,
  [19733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      sym_identifier,
  [19740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      aux_sym_grant_statement_token1,
  [19747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      aux_sym_grant_statement_token18,
  [19754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      aux_sym_grant_statement_token6,
  [19761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      aux_sym_null_hint_token4,
  [19768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 1,
      sym_identifier,
  [19775] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1519), 1,
      aux_sym_string_token2,
  [19782] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1521), 1,
      aux_sym_string_token1,
  [19789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      aux_sym_create_function_parameter_token1,
  [19796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      sym_identifier,
  [19803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      sym_identifier,
  [19810] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1529), 1,
      aux_sym_string_token2,
  [19817] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1531), 1,
      aux_sym_string_token1,
  [19824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      aux_sym_create_function_parameter_token1,
  [19831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      aux_sym_create_function_statement_token3,
  [19838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      aux_sym_grant_statement_token7,
  [19845] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1537), 1,
      aux_sym_string_token2,
  [19852] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1539), 1,
      aux_sym_string_token1,
  [19859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      aux_sym_create_function_parameter_token1,
  [19866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      ts_builtin_sym_end,
  [19873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      sym_identifier,
  [19880] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1547), 1,
      aux_sym_string_token2,
  [19887] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1549), 1,
      aux_sym_string_token1,
  [19894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      aux_sym_create_function_parameter_token1,
  [19901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 1,
      aux_sym_insert_statement_token1,
  [19908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      aux_sym_join_clause_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 179,
  [SMALL_STATE(6)] = 261,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 359,
  [SMALL_STATE(9)] = 408,
  [SMALL_STATE(10)] = 457,
  [SMALL_STATE(11)] = 508,
  [SMALL_STATE(12)] = 557,
  [SMALL_STATE(13)] = 630,
  [SMALL_STATE(14)] = 703,
  [SMALL_STATE(15)] = 778,
  [SMALL_STATE(16)] = 827,
  [SMALL_STATE(17)] = 870,
  [SMALL_STATE(18)] = 910,
  [SMALL_STATE(19)] = 954,
  [SMALL_STATE(20)] = 996,
  [SMALL_STATE(21)] = 1048,
  [SMALL_STATE(22)] = 1088,
  [SMALL_STATE(23)] = 1140,
  [SMALL_STATE(24)] = 1180,
  [SMALL_STATE(25)] = 1220,
  [SMALL_STATE(26)] = 1260,
  [SMALL_STATE(27)] = 1300,
  [SMALL_STATE(28)] = 1340,
  [SMALL_STATE(29)] = 1380,
  [SMALL_STATE(30)] = 1420,
  [SMALL_STATE(31)] = 1460,
  [SMALL_STATE(32)] = 1500,
  [SMALL_STATE(33)] = 1540,
  [SMALL_STATE(34)] = 1580,
  [SMALL_STATE(35)] = 1620,
  [SMALL_STATE(36)] = 1676,
  [SMALL_STATE(37)] = 1721,
  [SMALL_STATE(38)] = 1758,
  [SMALL_STATE(39)] = 1795,
  [SMALL_STATE(40)] = 1839,
  [SMALL_STATE(41)] = 1876,
  [SMALL_STATE(42)] = 1913,
  [SMALL_STATE(43)] = 1976,
  [SMALL_STATE(44)] = 2039,
  [SMALL_STATE(45)] = 2076,
  [SMALL_STATE(46)] = 2139,
  [SMALL_STATE(47)] = 2178,
  [SMALL_STATE(48)] = 2241,
  [SMALL_STATE(49)] = 2304,
  [SMALL_STATE(50)] = 2343,
  [SMALL_STATE(51)] = 2394,
  [SMALL_STATE(52)] = 2445,
  [SMALL_STATE(53)] = 2508,
  [SMALL_STATE(54)] = 2545,
  [SMALL_STATE(55)] = 2582,
  [SMALL_STATE(56)] = 2619,
  [SMALL_STATE(57)] = 2656,
  [SMALL_STATE(58)] = 2694,
  [SMALL_STATE(59)] = 2730,
  [SMALL_STATE(60)] = 2766,
  [SMALL_STATE(61)] = 2802,
  [SMALL_STATE(62)] = 2838,
  [SMALL_STATE(63)] = 2874,
  [SMALL_STATE(64)] = 2922,
  [SMALL_STATE(65)] = 2958,
  [SMALL_STATE(66)] = 3010,
  [SMALL_STATE(67)] = 3068,
  [SMALL_STATE(68)] = 3126,
  [SMALL_STATE(69)] = 3162,
  [SMALL_STATE(70)] = 3198,
  [SMALL_STATE(71)] = 3234,
  [SMALL_STATE(72)] = 3270,
  [SMALL_STATE(73)] = 3306,
  [SMALL_STATE(74)] = 3342,
  [SMALL_STATE(75)] = 3390,
  [SMALL_STATE(76)] = 3426,
  [SMALL_STATE(77)] = 3462,
  [SMALL_STATE(78)] = 3502,
  [SMALL_STATE(79)] = 3538,
  [SMALL_STATE(80)] = 3574,
  [SMALL_STATE(81)] = 3610,
  [SMALL_STATE(82)] = 3668,
  [SMALL_STATE(83)] = 3726,
  [SMALL_STATE(84)] = 3762,
  [SMALL_STATE(85)] = 3798,
  [SMALL_STATE(86)] = 3834,
  [SMALL_STATE(87)] = 3870,
  [SMALL_STATE(88)] = 3908,
  [SMALL_STATE(89)] = 3946,
  [SMALL_STATE(90)] = 3988,
  [SMALL_STATE(91)] = 4024,
  [SMALL_STATE(92)] = 4061,
  [SMALL_STATE(93)] = 4118,
  [SMALL_STATE(94)] = 4175,
  [SMALL_STATE(95)] = 4210,
  [SMALL_STATE(96)] = 4267,
  [SMALL_STATE(97)] = 4324,
  [SMALL_STATE(98)] = 4359,
  [SMALL_STATE(99)] = 4416,
  [SMALL_STATE(100)] = 4473,
  [SMALL_STATE(101)] = 4530,
  [SMALL_STATE(102)] = 4565,
  [SMALL_STATE(103)] = 4600,
  [SMALL_STATE(104)] = 4657,
  [SMALL_STATE(105)] = 4692,
  [SMALL_STATE(106)] = 4731,
  [SMALL_STATE(107)] = 4766,
  [SMALL_STATE(108)] = 4801,
  [SMALL_STATE(109)] = 4836,
  [SMALL_STATE(110)] = 4871,
  [SMALL_STATE(111)] = 4906,
  [SMALL_STATE(112)] = 4941,
  [SMALL_STATE(113)] = 4998,
  [SMALL_STATE(114)] = 5045,
  [SMALL_STATE(115)] = 5080,
  [SMALL_STATE(116)] = 5115,
  [SMALL_STATE(117)] = 5172,
  [SMALL_STATE(118)] = 5229,
  [SMALL_STATE(119)] = 5286,
  [SMALL_STATE(120)] = 5343,
  [SMALL_STATE(121)] = 5400,
  [SMALL_STATE(122)] = 5435,
  [SMALL_STATE(123)] = 5470,
  [SMALL_STATE(124)] = 5527,
  [SMALL_STATE(125)] = 5574,
  [SMALL_STATE(126)] = 5615,
  [SMALL_STATE(127)] = 5669,
  [SMALL_STATE(128)] = 5723,
  [SMALL_STATE(129)] = 5757,
  [SMALL_STATE(130)] = 5811,
  [SMALL_STATE(131)] = 5865,
  [SMALL_STATE(132)] = 5919,
  [SMALL_STATE(133)] = 5973,
  [SMALL_STATE(134)] = 6027,
  [SMALL_STATE(135)] = 6081,
  [SMALL_STATE(136)] = 6135,
  [SMALL_STATE(137)] = 6183,
  [SMALL_STATE(138)] = 6237,
  [SMALL_STATE(139)] = 6291,
  [SMALL_STATE(140)] = 6325,
  [SMALL_STATE(141)] = 6379,
  [SMALL_STATE(142)] = 6433,
  [SMALL_STATE(143)] = 6487,
  [SMALL_STATE(144)] = 6541,
  [SMALL_STATE(145)] = 6595,
  [SMALL_STATE(146)] = 6649,
  [SMALL_STATE(147)] = 6703,
  [SMALL_STATE(148)] = 6737,
  [SMALL_STATE(149)] = 6771,
  [SMALL_STATE(150)] = 6825,
  [SMALL_STATE(151)] = 6859,
  [SMALL_STATE(152)] = 6893,
  [SMALL_STATE(153)] = 6947,
  [SMALL_STATE(154)] = 7001,
  [SMALL_STATE(155)] = 7055,
  [SMALL_STATE(156)] = 7089,
  [SMALL_STATE(157)] = 7125,
  [SMALL_STATE(158)] = 7179,
  [SMALL_STATE(159)] = 7227,
  [SMALL_STATE(160)] = 7281,
  [SMALL_STATE(161)] = 7335,
  [SMALL_STATE(162)] = 7389,
  [SMALL_STATE(163)] = 7443,
  [SMALL_STATE(164)] = 7497,
  [SMALL_STATE(165)] = 7545,
  [SMALL_STATE(166)] = 7599,
  [SMALL_STATE(167)] = 7653,
  [SMALL_STATE(168)] = 7707,
  [SMALL_STATE(169)] = 7761,
  [SMALL_STATE(170)] = 7815,
  [SMALL_STATE(171)] = 7869,
  [SMALL_STATE(172)] = 7923,
  [SMALL_STATE(173)] = 7977,
  [SMALL_STATE(174)] = 8031,
  [SMALL_STATE(175)] = 8085,
  [SMALL_STATE(176)] = 8139,
  [SMALL_STATE(177)] = 8193,
  [SMALL_STATE(178)] = 8247,
  [SMALL_STATE(179)] = 8283,
  [SMALL_STATE(180)] = 8337,
  [SMALL_STATE(181)] = 8391,
  [SMALL_STATE(182)] = 8445,
  [SMALL_STATE(183)] = 8499,
  [SMALL_STATE(184)] = 8547,
  [SMALL_STATE(185)] = 8601,
  [SMALL_STATE(186)] = 8655,
  [SMALL_STATE(187)] = 8709,
  [SMALL_STATE(188)] = 8763,
  [SMALL_STATE(189)] = 8817,
  [SMALL_STATE(190)] = 8871,
  [SMALL_STATE(191)] = 8919,
  [SMALL_STATE(192)] = 8973,
  [SMALL_STATE(193)] = 9027,
  [SMALL_STATE(194)] = 9081,
  [SMALL_STATE(195)] = 9135,
  [SMALL_STATE(196)] = 9189,
  [SMALL_STATE(197)] = 9222,
  [SMALL_STATE(198)] = 9255,
  [SMALL_STATE(199)] = 9288,
  [SMALL_STATE(200)] = 9323,
  [SMALL_STATE(201)] = 9356,
  [SMALL_STATE(202)] = 9389,
  [SMALL_STATE(203)] = 9426,
  [SMALL_STATE(204)] = 9459,
  [SMALL_STATE(205)] = 9492,
  [SMALL_STATE(206)] = 9525,
  [SMALL_STATE(207)] = 9558,
  [SMALL_STATE(208)] = 9591,
  [SMALL_STATE(209)] = 9624,
  [SMALL_STATE(210)] = 9657,
  [SMALL_STATE(211)] = 9690,
  [SMALL_STATE(212)] = 9723,
  [SMALL_STATE(213)] = 9764,
  [SMALL_STATE(214)] = 9797,
  [SMALL_STATE(215)] = 9830,
  [SMALL_STATE(216)] = 9863,
  [SMALL_STATE(217)] = 9908,
  [SMALL_STATE(218)] = 9955,
  [SMALL_STATE(219)] = 9988,
  [SMALL_STATE(220)] = 10029,
  [SMALL_STATE(221)] = 10062,
  [SMALL_STATE(222)] = 10109,
  [SMALL_STATE(223)] = 10144,
  [SMALL_STATE(224)] = 10177,
  [SMALL_STATE(225)] = 10210,
  [SMALL_STATE(226)] = 10243,
  [SMALL_STATE(227)] = 10288,
  [SMALL_STATE(228)] = 10323,
  [SMALL_STATE(229)] = 10355,
  [SMALL_STATE(230)] = 10399,
  [SMALL_STATE(231)] = 10455,
  [SMALL_STATE(232)] = 10487,
  [SMALL_STATE(233)] = 10519,
  [SMALL_STATE(234)] = 10569,
  [SMALL_STATE(235)] = 10603,
  [SMALL_STATE(236)] = 10647,
  [SMALL_STATE(237)] = 10683,
  [SMALL_STATE(238)] = 10715,
  [SMALL_STATE(239)] = 10747,
  [SMALL_STATE(240)] = 10779,
  [SMALL_STATE(241)] = 10811,
  [SMALL_STATE(242)] = 10843,
  [SMALL_STATE(243)] = 10875,
  [SMALL_STATE(244)] = 10907,
  [SMALL_STATE(245)] = 10939,
  [SMALL_STATE(246)] = 10971,
  [SMALL_STATE(247)] = 11003,
  [SMALL_STATE(248)] = 11035,
  [SMALL_STATE(249)] = 11067,
  [SMALL_STATE(250)] = 11112,
  [SMALL_STATE(251)] = 11157,
  [SMALL_STATE(252)] = 11202,
  [SMALL_STATE(253)] = 11251,
  [SMALL_STATE(254)] = 11288,
  [SMALL_STATE(255)] = 11317,
  [SMALL_STATE(256)] = 11362,
  [SMALL_STATE(257)] = 11412,
  [SMALL_STATE(258)] = 11456,
  [SMALL_STATE(259)] = 11506,
  [SMALL_STATE(260)] = 11550,
  [SMALL_STATE(261)] = 11600,
  [SMALL_STATE(262)] = 11629,
  [SMALL_STATE(263)] = 11656,
  [SMALL_STATE(264)] = 11701,
  [SMALL_STATE(265)] = 11730,
  [SMALL_STATE(266)] = 11759,
  [SMALL_STATE(267)] = 11788,
  [SMALL_STATE(268)] = 11815,
  [SMALL_STATE(269)] = 11844,
  [SMALL_STATE(270)] = 11887,
  [SMALL_STATE(271)] = 11930,
  [SMALL_STATE(272)] = 11973,
  [SMALL_STATE(273)] = 12002,
  [SMALL_STATE(274)] = 12031,
  [SMALL_STATE(275)] = 12076,
  [SMALL_STATE(276)] = 12107,
  [SMALL_STATE(277)] = 12138,
  [SMALL_STATE(278)] = 12166,
  [SMALL_STATE(279)] = 12192,
  [SMALL_STATE(280)] = 12220,
  [SMALL_STATE(281)] = 12246,
  [SMALL_STATE(282)] = 12274,
  [SMALL_STATE(283)] = 12302,
  [SMALL_STATE(284)] = 12342,
  [SMALL_STATE(285)] = 12394,
  [SMALL_STATE(286)] = 12422,
  [SMALL_STATE(287)] = 12452,
  [SMALL_STATE(288)] = 12480,
  [SMALL_STATE(289)] = 12520,
  [SMALL_STATE(290)] = 12548,
  [SMALL_STATE(291)] = 12576,
  [SMALL_STATE(292)] = 12604,
  [SMALL_STATE(293)] = 12630,
  [SMALL_STATE(294)] = 12658,
  [SMALL_STATE(295)] = 12686,
  [SMALL_STATE(296)] = 12712,
  [SMALL_STATE(297)] = 12738,
  [SMALL_STATE(298)] = 12764,
  [SMALL_STATE(299)] = 12790,
  [SMALL_STATE(300)] = 12816,
  [SMALL_STATE(301)] = 12864,
  [SMALL_STATE(302)] = 12890,
  [SMALL_STATE(303)] = 12936,
  [SMALL_STATE(304)] = 12968,
  [SMALL_STATE(305)] = 12996,
  [SMALL_STATE(306)] = 13024,
  [SMALL_STATE(307)] = 13050,
  [SMALL_STATE(308)] = 13078,
  [SMALL_STATE(309)] = 13106,
  [SMALL_STATE(310)] = 13151,
  [SMALL_STATE(311)] = 13196,
  [SMALL_STATE(312)] = 13225,
  [SMALL_STATE(313)] = 13270,
  [SMALL_STATE(314)] = 13299,
  [SMALL_STATE(315)] = 13340,
  [SMALL_STATE(316)] = 13369,
  [SMALL_STATE(317)] = 13410,
  [SMALL_STATE(318)] = 13445,
  [SMALL_STATE(319)] = 13473,
  [SMALL_STATE(320)] = 13519,
  [SMALL_STATE(321)] = 13565,
  [SMALL_STATE(322)] = 13593,
  [SMALL_STATE(323)] = 13633,
  [SMALL_STATE(324)] = 13679,
  [SMALL_STATE(325)] = 13725,
  [SMALL_STATE(326)] = 13766,
  [SMALL_STATE(327)] = 13808,
  [SMALL_STATE(328)] = 13850,
  [SMALL_STATE(329)] = 13892,
  [SMALL_STATE(330)] = 13934,
  [SMALL_STATE(331)] = 13976,
  [SMALL_STATE(332)] = 14010,
  [SMALL_STATE(333)] = 14052,
  [SMALL_STATE(334)] = 14094,
  [SMALL_STATE(335)] = 14136,
  [SMALL_STATE(336)] = 14178,
  [SMALL_STATE(337)] = 14220,
  [SMALL_STATE(338)] = 14262,
  [SMALL_STATE(339)] = 14304,
  [SMALL_STATE(340)] = 14346,
  [SMALL_STATE(341)] = 14383,
  [SMALL_STATE(342)] = 14408,
  [SMALL_STATE(343)] = 14439,
  [SMALL_STATE(344)] = 14470,
  [SMALL_STATE(345)] = 14501,
  [SMALL_STATE(346)] = 14526,
  [SMALL_STATE(347)] = 14563,
  [SMALL_STATE(348)] = 14588,
  [SMALL_STATE(349)] = 14625,
  [SMALL_STATE(350)] = 14662,
  [SMALL_STATE(351)] = 14699,
  [SMALL_STATE(352)] = 14735,
  [SMALL_STATE(353)] = 14771,
  [SMALL_STATE(354)] = 14795,
  [SMALL_STATE(355)] = 14831,
  [SMALL_STATE(356)] = 14855,
  [SMALL_STATE(357)] = 14891,
  [SMALL_STATE(358)] = 14927,
  [SMALL_STATE(359)] = 14963,
  [SMALL_STATE(360)] = 14991,
  [SMALL_STATE(361)] = 15016,
  [SMALL_STATE(362)] = 15041,
  [SMALL_STATE(363)] = 15063,
  [SMALL_STATE(364)] = 15081,
  [SMALL_STATE(365)] = 15107,
  [SMALL_STATE(366)] = 15133,
  [SMALL_STATE(367)] = 15159,
  [SMALL_STATE(368)] = 15180,
  [SMALL_STATE(369)] = 15197,
  [SMALL_STATE(370)] = 15222,
  [SMALL_STATE(371)] = 15249,
  [SMALL_STATE(372)] = 15274,
  [SMALL_STATE(373)] = 15291,
  [SMALL_STATE(374)] = 15318,
  [SMALL_STATE(375)] = 15335,
  [SMALL_STATE(376)] = 15352,
  [SMALL_STATE(377)] = 15377,
  [SMALL_STATE(378)] = 15398,
  [SMALL_STATE(379)] = 15415,
  [SMALL_STATE(380)] = 15432,
  [SMALL_STATE(381)] = 15449,
  [SMALL_STATE(382)] = 15466,
  [SMALL_STATE(383)] = 15483,
  [SMALL_STATE(384)] = 15500,
  [SMALL_STATE(385)] = 15521,
  [SMALL_STATE(386)] = 15542,
  [SMALL_STATE(387)] = 15561,
  [SMALL_STATE(388)] = 15582,
  [SMALL_STATE(389)] = 15602,
  [SMALL_STATE(390)] = 15618,
  [SMALL_STATE(391)] = 15638,
  [SMALL_STATE(392)] = 15654,
  [SMALL_STATE(393)] = 15670,
  [SMALL_STATE(394)] = 15690,
  [SMALL_STATE(395)] = 15706,
  [SMALL_STATE(396)] = 15726,
  [SMALL_STATE(397)] = 15746,
  [SMALL_STATE(398)] = 15766,
  [SMALL_STATE(399)] = 15788,
  [SMALL_STATE(400)] = 15808,
  [SMALL_STATE(401)] = 15824,
  [SMALL_STATE(402)] = 15840,
  [SMALL_STATE(403)] = 15856,
  [SMALL_STATE(404)] = 15878,
  [SMALL_STATE(405)] = 15902,
  [SMALL_STATE(406)] = 15922,
  [SMALL_STATE(407)] = 15946,
  [SMALL_STATE(408)] = 15966,
  [SMALL_STATE(409)] = 15986,
  [SMALL_STATE(410)] = 16006,
  [SMALL_STATE(411)] = 16031,
  [SMALL_STATE(412)] = 16048,
  [SMALL_STATE(413)] = 16065,
  [SMALL_STATE(414)] = 16096,
  [SMALL_STATE(415)] = 16113,
  [SMALL_STATE(416)] = 16138,
  [SMALL_STATE(417)] = 16155,
  [SMALL_STATE(418)] = 16180,
  [SMALL_STATE(419)] = 16195,
  [SMALL_STATE(420)] = 16220,
  [SMALL_STATE(421)] = 16235,
  [SMALL_STATE(422)] = 16252,
  [SMALL_STATE(423)] = 16267,
  [SMALL_STATE(424)] = 16284,
  [SMALL_STATE(425)] = 16309,
  [SMALL_STATE(426)] = 16324,
  [SMALL_STATE(427)] = 16349,
  [SMALL_STATE(428)] = 16366,
  [SMALL_STATE(429)] = 16383,
  [SMALL_STATE(430)] = 16400,
  [SMALL_STATE(431)] = 16417,
  [SMALL_STATE(432)] = 16434,
  [SMALL_STATE(433)] = 16448,
  [SMALL_STATE(434)] = 16474,
  [SMALL_STATE(435)] = 16488,
  [SMALL_STATE(436)] = 16504,
  [SMALL_STATE(437)] = 16526,
  [SMALL_STATE(438)] = 16552,
  [SMALL_STATE(439)] = 16574,
  [SMALL_STATE(440)] = 16588,
  [SMALL_STATE(441)] = 16602,
  [SMALL_STATE(442)] = 16616,
  [SMALL_STATE(443)] = 16630,
  [SMALL_STATE(444)] = 16652,
  [SMALL_STATE(445)] = 16666,
  [SMALL_STATE(446)] = 16688,
  [SMALL_STATE(447)] = 16702,
  [SMALL_STATE(448)] = 16724,
  [SMALL_STATE(449)] = 16738,
  [SMALL_STATE(450)] = 16752,
  [SMALL_STATE(451)] = 16766,
  [SMALL_STATE(452)] = 16780,
  [SMALL_STATE(453)] = 16794,
  [SMALL_STATE(454)] = 16808,
  [SMALL_STATE(455)] = 16822,
  [SMALL_STATE(456)] = 16836,
  [SMALL_STATE(457)] = 16850,
  [SMALL_STATE(458)] = 16864,
  [SMALL_STATE(459)] = 16890,
  [SMALL_STATE(460)] = 16914,
  [SMALL_STATE(461)] = 16934,
  [SMALL_STATE(462)] = 16948,
  [SMALL_STATE(463)] = 16962,
  [SMALL_STATE(464)] = 16984,
  [SMALL_STATE(465)] = 16998,
  [SMALL_STATE(466)] = 17020,
  [SMALL_STATE(467)] = 17042,
  [SMALL_STATE(468)] = 17056,
  [SMALL_STATE(469)] = 17070,
  [SMALL_STATE(470)] = 17090,
  [SMALL_STATE(471)] = 17104,
  [SMALL_STATE(472)] = 17126,
  [SMALL_STATE(473)] = 17140,
  [SMALL_STATE(474)] = 17154,
  [SMALL_STATE(475)] = 17168,
  [SMALL_STATE(476)] = 17194,
  [SMALL_STATE(477)] = 17207,
  [SMALL_STATE(478)] = 17224,
  [SMALL_STATE(479)] = 17241,
  [SMALL_STATE(480)] = 17257,
  [SMALL_STATE(481)] = 17273,
  [SMALL_STATE(482)] = 17289,
  [SMALL_STATE(483)] = 17305,
  [SMALL_STATE(484)] = 17321,
  [SMALL_STATE(485)] = 17337,
  [SMALL_STATE(486)] = 17350,
  [SMALL_STATE(487)] = 17363,
  [SMALL_STATE(488)] = 17378,
  [SMALL_STATE(489)] = 17393,
  [SMALL_STATE(490)] = 17406,
  [SMALL_STATE(491)] = 17420,
  [SMALL_STATE(492)] = 17432,
  [SMALL_STATE(493)] = 17444,
  [SMALL_STATE(494)] = 17456,
  [SMALL_STATE(495)] = 17468,
  [SMALL_STATE(496)] = 17480,
  [SMALL_STATE(497)] = 17492,
  [SMALL_STATE(498)] = 17504,
  [SMALL_STATE(499)] = 17516,
  [SMALL_STATE(500)] = 17528,
  [SMALL_STATE(501)] = 17544,
  [SMALL_STATE(502)] = 17560,
  [SMALL_STATE(503)] = 17574,
  [SMALL_STATE(504)] = 17587,
  [SMALL_STATE(505)] = 17598,
  [SMALL_STATE(506)] = 17611,
  [SMALL_STATE(507)] = 17624,
  [SMALL_STATE(508)] = 17637,
  [SMALL_STATE(509)] = 17650,
  [SMALL_STATE(510)] = 17663,
  [SMALL_STATE(511)] = 17676,
  [SMALL_STATE(512)] = 17689,
  [SMALL_STATE(513)] = 17702,
  [SMALL_STATE(514)] = 17715,
  [SMALL_STATE(515)] = 17728,
  [SMALL_STATE(516)] = 17741,
  [SMALL_STATE(517)] = 17754,
  [SMALL_STATE(518)] = 17767,
  [SMALL_STATE(519)] = 17780,
  [SMALL_STATE(520)] = 17793,
  [SMALL_STATE(521)] = 17806,
  [SMALL_STATE(522)] = 17819,
  [SMALL_STATE(523)] = 17832,
  [SMALL_STATE(524)] = 17845,
  [SMALL_STATE(525)] = 17858,
  [SMALL_STATE(526)] = 17869,
  [SMALL_STATE(527)] = 17880,
  [SMALL_STATE(528)] = 17893,
  [SMALL_STATE(529)] = 17906,
  [SMALL_STATE(530)] = 17919,
  [SMALL_STATE(531)] = 17932,
  [SMALL_STATE(532)] = 17943,
  [SMALL_STATE(533)] = 17956,
  [SMALL_STATE(534)] = 17969,
  [SMALL_STATE(535)] = 17982,
  [SMALL_STATE(536)] = 17993,
  [SMALL_STATE(537)] = 18006,
  [SMALL_STATE(538)] = 18019,
  [SMALL_STATE(539)] = 18032,
  [SMALL_STATE(540)] = 18045,
  [SMALL_STATE(541)] = 18056,
  [SMALL_STATE(542)] = 18069,
  [SMALL_STATE(543)] = 18082,
  [SMALL_STATE(544)] = 18095,
  [SMALL_STATE(545)] = 18106,
  [SMALL_STATE(546)] = 18119,
  [SMALL_STATE(547)] = 18132,
  [SMALL_STATE(548)] = 18143,
  [SMALL_STATE(549)] = 18156,
  [SMALL_STATE(550)] = 18169,
  [SMALL_STATE(551)] = 18182,
  [SMALL_STATE(552)] = 18193,
  [SMALL_STATE(553)] = 18206,
  [SMALL_STATE(554)] = 18219,
  [SMALL_STATE(555)] = 18230,
  [SMALL_STATE(556)] = 18241,
  [SMALL_STATE(557)] = 18254,
  [SMALL_STATE(558)] = 18265,
  [SMALL_STATE(559)] = 18275,
  [SMALL_STATE(560)] = 18283,
  [SMALL_STATE(561)] = 18293,
  [SMALL_STATE(562)] = 18303,
  [SMALL_STATE(563)] = 18313,
  [SMALL_STATE(564)] = 18323,
  [SMALL_STATE(565)] = 18331,
  [SMALL_STATE(566)] = 18339,
  [SMALL_STATE(567)] = 18349,
  [SMALL_STATE(568)] = 18357,
  [SMALL_STATE(569)] = 18365,
  [SMALL_STATE(570)] = 18375,
  [SMALL_STATE(571)] = 18385,
  [SMALL_STATE(572)] = 18395,
  [SMALL_STATE(573)] = 18403,
  [SMALL_STATE(574)] = 18411,
  [SMALL_STATE(575)] = 18421,
  [SMALL_STATE(576)] = 18431,
  [SMALL_STATE(577)] = 18441,
  [SMALL_STATE(578)] = 18449,
  [SMALL_STATE(579)] = 18457,
  [SMALL_STATE(580)] = 18467,
  [SMALL_STATE(581)] = 18477,
  [SMALL_STATE(582)] = 18487,
  [SMALL_STATE(583)] = 18497,
  [SMALL_STATE(584)] = 18507,
  [SMALL_STATE(585)] = 18517,
  [SMALL_STATE(586)] = 18527,
  [SMALL_STATE(587)] = 18537,
  [SMALL_STATE(588)] = 18547,
  [SMALL_STATE(589)] = 18557,
  [SMALL_STATE(590)] = 18567,
  [SMALL_STATE(591)] = 18577,
  [SMALL_STATE(592)] = 18587,
  [SMALL_STATE(593)] = 18597,
  [SMALL_STATE(594)] = 18607,
  [SMALL_STATE(595)] = 18615,
  [SMALL_STATE(596)] = 18623,
  [SMALL_STATE(597)] = 18633,
  [SMALL_STATE(598)] = 18641,
  [SMALL_STATE(599)] = 18651,
  [SMALL_STATE(600)] = 18661,
  [SMALL_STATE(601)] = 18671,
  [SMALL_STATE(602)] = 18681,
  [SMALL_STATE(603)] = 18689,
  [SMALL_STATE(604)] = 18699,
  [SMALL_STATE(605)] = 18709,
  [SMALL_STATE(606)] = 18719,
  [SMALL_STATE(607)] = 18729,
  [SMALL_STATE(608)] = 18737,
  [SMALL_STATE(609)] = 18747,
  [SMALL_STATE(610)] = 18757,
  [SMALL_STATE(611)] = 18767,
  [SMALL_STATE(612)] = 18774,
  [SMALL_STATE(613)] = 18781,
  [SMALL_STATE(614)] = 18788,
  [SMALL_STATE(615)] = 18795,
  [SMALL_STATE(616)] = 18802,
  [SMALL_STATE(617)] = 18809,
  [SMALL_STATE(618)] = 18816,
  [SMALL_STATE(619)] = 18823,
  [SMALL_STATE(620)] = 18830,
  [SMALL_STATE(621)] = 18837,
  [SMALL_STATE(622)] = 18844,
  [SMALL_STATE(623)] = 18851,
  [SMALL_STATE(624)] = 18858,
  [SMALL_STATE(625)] = 18865,
  [SMALL_STATE(626)] = 18872,
  [SMALL_STATE(627)] = 18879,
  [SMALL_STATE(628)] = 18886,
  [SMALL_STATE(629)] = 18893,
  [SMALL_STATE(630)] = 18900,
  [SMALL_STATE(631)] = 18907,
  [SMALL_STATE(632)] = 18914,
  [SMALL_STATE(633)] = 18921,
  [SMALL_STATE(634)] = 18928,
  [SMALL_STATE(635)] = 18935,
  [SMALL_STATE(636)] = 18942,
  [SMALL_STATE(637)] = 18949,
  [SMALL_STATE(638)] = 18956,
  [SMALL_STATE(639)] = 18963,
  [SMALL_STATE(640)] = 18970,
  [SMALL_STATE(641)] = 18977,
  [SMALL_STATE(642)] = 18984,
  [SMALL_STATE(643)] = 18991,
  [SMALL_STATE(644)] = 18998,
  [SMALL_STATE(645)] = 19005,
  [SMALL_STATE(646)] = 19012,
  [SMALL_STATE(647)] = 19019,
  [SMALL_STATE(648)] = 19026,
  [SMALL_STATE(649)] = 19033,
  [SMALL_STATE(650)] = 19040,
  [SMALL_STATE(651)] = 19047,
  [SMALL_STATE(652)] = 19054,
  [SMALL_STATE(653)] = 19061,
  [SMALL_STATE(654)] = 19068,
  [SMALL_STATE(655)] = 19075,
  [SMALL_STATE(656)] = 19082,
  [SMALL_STATE(657)] = 19089,
  [SMALL_STATE(658)] = 19096,
  [SMALL_STATE(659)] = 19103,
  [SMALL_STATE(660)] = 19110,
  [SMALL_STATE(661)] = 19117,
  [SMALL_STATE(662)] = 19124,
  [SMALL_STATE(663)] = 19131,
  [SMALL_STATE(664)] = 19138,
  [SMALL_STATE(665)] = 19145,
  [SMALL_STATE(666)] = 19152,
  [SMALL_STATE(667)] = 19159,
  [SMALL_STATE(668)] = 19166,
  [SMALL_STATE(669)] = 19173,
  [SMALL_STATE(670)] = 19180,
  [SMALL_STATE(671)] = 19187,
  [SMALL_STATE(672)] = 19194,
  [SMALL_STATE(673)] = 19201,
  [SMALL_STATE(674)] = 19208,
  [SMALL_STATE(675)] = 19215,
  [SMALL_STATE(676)] = 19222,
  [SMALL_STATE(677)] = 19229,
  [SMALL_STATE(678)] = 19236,
  [SMALL_STATE(679)] = 19243,
  [SMALL_STATE(680)] = 19250,
  [SMALL_STATE(681)] = 19257,
  [SMALL_STATE(682)] = 19264,
  [SMALL_STATE(683)] = 19271,
  [SMALL_STATE(684)] = 19278,
  [SMALL_STATE(685)] = 19285,
  [SMALL_STATE(686)] = 19292,
  [SMALL_STATE(687)] = 19299,
  [SMALL_STATE(688)] = 19306,
  [SMALL_STATE(689)] = 19313,
  [SMALL_STATE(690)] = 19320,
  [SMALL_STATE(691)] = 19327,
  [SMALL_STATE(692)] = 19334,
  [SMALL_STATE(693)] = 19341,
  [SMALL_STATE(694)] = 19348,
  [SMALL_STATE(695)] = 19355,
  [SMALL_STATE(696)] = 19362,
  [SMALL_STATE(697)] = 19369,
  [SMALL_STATE(698)] = 19376,
  [SMALL_STATE(699)] = 19383,
  [SMALL_STATE(700)] = 19390,
  [SMALL_STATE(701)] = 19397,
  [SMALL_STATE(702)] = 19404,
  [SMALL_STATE(703)] = 19411,
  [SMALL_STATE(704)] = 19418,
  [SMALL_STATE(705)] = 19425,
  [SMALL_STATE(706)] = 19432,
  [SMALL_STATE(707)] = 19439,
  [SMALL_STATE(708)] = 19446,
  [SMALL_STATE(709)] = 19453,
  [SMALL_STATE(710)] = 19460,
  [SMALL_STATE(711)] = 19467,
  [SMALL_STATE(712)] = 19474,
  [SMALL_STATE(713)] = 19481,
  [SMALL_STATE(714)] = 19488,
  [SMALL_STATE(715)] = 19495,
  [SMALL_STATE(716)] = 19502,
  [SMALL_STATE(717)] = 19509,
  [SMALL_STATE(718)] = 19516,
  [SMALL_STATE(719)] = 19523,
  [SMALL_STATE(720)] = 19530,
  [SMALL_STATE(721)] = 19537,
  [SMALL_STATE(722)] = 19544,
  [SMALL_STATE(723)] = 19551,
  [SMALL_STATE(724)] = 19558,
  [SMALL_STATE(725)] = 19565,
  [SMALL_STATE(726)] = 19572,
  [SMALL_STATE(727)] = 19579,
  [SMALL_STATE(728)] = 19586,
  [SMALL_STATE(729)] = 19593,
  [SMALL_STATE(730)] = 19600,
  [SMALL_STATE(731)] = 19607,
  [SMALL_STATE(732)] = 19614,
  [SMALL_STATE(733)] = 19621,
  [SMALL_STATE(734)] = 19628,
  [SMALL_STATE(735)] = 19635,
  [SMALL_STATE(736)] = 19642,
  [SMALL_STATE(737)] = 19649,
  [SMALL_STATE(738)] = 19656,
  [SMALL_STATE(739)] = 19663,
  [SMALL_STATE(740)] = 19670,
  [SMALL_STATE(741)] = 19677,
  [SMALL_STATE(742)] = 19684,
  [SMALL_STATE(743)] = 19691,
  [SMALL_STATE(744)] = 19698,
  [SMALL_STATE(745)] = 19705,
  [SMALL_STATE(746)] = 19712,
  [SMALL_STATE(747)] = 19719,
  [SMALL_STATE(748)] = 19726,
  [SMALL_STATE(749)] = 19733,
  [SMALL_STATE(750)] = 19740,
  [SMALL_STATE(751)] = 19747,
  [SMALL_STATE(752)] = 19754,
  [SMALL_STATE(753)] = 19761,
  [SMALL_STATE(754)] = 19768,
  [SMALL_STATE(755)] = 19775,
  [SMALL_STATE(756)] = 19782,
  [SMALL_STATE(757)] = 19789,
  [SMALL_STATE(758)] = 19796,
  [SMALL_STATE(759)] = 19803,
  [SMALL_STATE(760)] = 19810,
  [SMALL_STATE(761)] = 19817,
  [SMALL_STATE(762)] = 19824,
  [SMALL_STATE(763)] = 19831,
  [SMALL_STATE(764)] = 19838,
  [SMALL_STATE(765)] = 19845,
  [SMALL_STATE(766)] = 19852,
  [SMALL_STATE(767)] = 19859,
  [SMALL_STATE(768)] = 19866,
  [SMALL_STATE(769)] = 19873,
  [SMALL_STATE(770)] = 19880,
  [SMALL_STATE(771)] = 19887,
  [SMALL_STATE(772)] = 19894,
  [SMALL_STATE(773)] = 19901,
  [SMALL_STATE(774)] = 19908,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 8),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 21),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 10),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 3, .production_id = 23),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 22),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 22),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 29),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 29),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 17),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 24),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6, .production_id = 17),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 8, .production_id = 24),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(725),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(298),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(299),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(727),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(301),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(728),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(563),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(413),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(531),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(369),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(773),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(769),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 14),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 32),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_hint, 5, .production_id = 44),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optimizer_hint, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_hint, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 19),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_hint, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_hint, 4, .production_id = 39),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 19),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(4),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(584),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(459),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(660),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(667),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(171),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(380),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(643),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(82),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(684),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(580),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(680),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5, .production_id = 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 5, .production_id = 36),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(67),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(741),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 6, .production_id = 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(4),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(584),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(149),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 31),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 25),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 30),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3, .production_id = 11),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_action, 2, .production_id = 50),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(588),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 3, .production_id = 46),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 3, .production_id = 45),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 12),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(168),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 20),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 20),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 27),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2), SHIFT_REPEAT(403),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2), SHIFT_REPEAT(418),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(182),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 27),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7, .production_id = 9),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7, .production_id = 28),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 28),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 1, .production_id = 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 35),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 3, .production_id = 4),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 6),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 35),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 5),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 6, .production_id = 9),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 38),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2, .production_id = 16),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 16),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 41),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 20),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 42),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 43),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 34),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause, 4),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_schema_statement, 6, .production_id = 18),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 47),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_schema_statement, 3, .production_id = 3),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 48),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 49),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 4, .production_id = 5),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 12, .production_id = 51),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 5, .production_id = 13),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 37),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 27),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(189),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(187),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(599),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 2),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(373),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(92),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(404),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(699),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 7, .production_id = 40),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 33),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 6),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6, .production_id = 40),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 2),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 26),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1543] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
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
