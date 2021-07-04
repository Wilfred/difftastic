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
#define STATE_COUNT 479
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 193
#define ALIAS_COUNT 8
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 47

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
  aux_sym_set_statement_token1 = 22,
  aux_sym_set_statement_token2 = 23,
  aux_sym_set_statement_token3 = 24,
  aux_sym_set_statement_token4 = 25,
  aux_sym_set_statement_token5 = 26,
  aux_sym_grant_statement_token1 = 27,
  aux_sym_grant_statement_token2 = 28,
  aux_sym_grant_statement_token3 = 29,
  aux_sym_grant_statement_token4 = 30,
  aux_sym_grant_statement_token5 = 31,
  aux_sym_grant_statement_token6 = 32,
  aux_sym_grant_statement_token7 = 33,
  aux_sym_grant_statement_token8 = 34,
  aux_sym_grant_statement_token9 = 35,
  aux_sym_grant_statement_token10 = 36,
  aux_sym_grant_statement_token11 = 37,
  aux_sym_grant_statement_token12 = 38,
  aux_sym_grant_statement_token13 = 39,
  aux_sym_grant_statement_token14 = 40,
  aux_sym_grant_statement_token15 = 41,
  aux_sym_grant_statement_token16 = 42,
  aux_sym_grant_statement_token17 = 43,
  aux_sym_grant_statement_token18 = 44,
  aux_sym_grant_statement_token19 = 45,
  aux_sym_create_domain_statement_token1 = 46,
  aux_sym_create_type_statement_token1 = 47,
  aux_sym_create_index_statement_token1 = 48,
  anon_sym_CONSTRAINT = 49,
  aux_sym_table_constraint_check_token1 = 50,
  aux_sym_table_constraint_foreign_key_token1 = 51,
  aux_sym_table_constraint_foreign_key_token2 = 52,
  aux_sym_table_constraint_unique_token1 = 53,
  aux_sym_table_constraint_primary_key_token1 = 54,
  aux_sym_using_clause_token1 = 55,
  aux_sym_group_by_clause_token1 = 56,
  aux_sym_order_by_clause_token1 = 57,
  aux_sym_where_clause_token1 = 58,
  aux_sym_from_clause_token1 = 59,
  aux_sym_join_type_token1 = 60,
  aux_sym_join_type_token2 = 61,
  aux_sym_join_type_token3 = 62,
  aux_sym_join_type_token4 = 63,
  aux_sym_join_type_token5 = 64,
  aux_sym_join_clause_token1 = 65,
  aux_sym_insert_statement_token1 = 66,
  aux_sym_values_clause_token1 = 67,
  aux_sym_in_expression_token1 = 68,
  aux_sym__constraint_action_token1 = 69,
  aux_sym__constraint_action_token2 = 70,
  aux_sym__constraint_action_token3 = 71,
  anon_sym_LT = 72,
  anon_sym_LT_EQ = 73,
  anon_sym_LT_GT = 74,
  anon_sym_GT = 75,
  anon_sym_GT_EQ = 76,
  aux_sym_is_expression_token1 = 77,
  aux_sym_distinct_from_token1 = 78,
  aux_sym_boolean_expression_token1 = 79,
  aux_sym_boolean_expression_token2 = 80,
  aux_sym_TRUE_token1 = 81,
  aux_sym_FALSE_token1 = 82,
  aux_sym_number_token1 = 83,
  sym_identifier = 84,
  aux_sym_string_token1 = 85,
  aux_sym_string_token2 = 86,
  anon_sym_DASH_GT_GT = 87,
  aux_sym_ordered_expression_token1 = 88,
  aux_sym_ordered_expression_token2 = 89,
  anon_sym_LBRACK = 90,
  anon_sym_RBRACK = 91,
  anon_sym_COLON_COLON = 92,
  sym_comment = 93,
  anon_sym_TILDE = 94,
  anon_sym_PLUS = 95,
  anon_sym_DOLLAR = 96,
  sym_source_file = 97,
  sym__statement = 98,
  sym_create_function_statement = 99,
  sym__function_optimizer_hint = 100,
  sym__function_language = 101,
  sym__create_function_return_type = 102,
  sym_setof = 103,
  sym_constrained_type = 104,
  sym_create_function_parameter = 105,
  sym_create_function_parameters = 106,
  sym_function_body = 107,
  sym_create_schema_statement = 108,
  sym_set_statement = 109,
  sym_grant_statement = 110,
  sym_create_domain_statement = 111,
  sym_create_type_statement = 112,
  sym_create_index_statement = 113,
  sym_create_table_column_parameter = 114,
  sym_named_constraint = 115,
  sym_column_default = 116,
  sym_create_table_parameters = 117,
  sym__table_constraint = 118,
  sym_table_constraint_check = 119,
  sym_table_constraint_foreign_key = 120,
  sym_table_constraint_unique = 121,
  sym_table_constraint_primary_key = 122,
  sym_primary_key_constraint = 123,
  sym_create_table_statement = 124,
  sym_using_clause = 125,
  sym_index_table_parameters = 126,
  sym_select_statement = 127,
  sym_group_by_clause_body = 128,
  sym_group_by_clause = 129,
  sym_order_by_clause_body = 130,
  sym_order_by_clause = 131,
  sym_where_clause = 132,
  sym__aliased_expression = 133,
  sym__aliasable_expression = 134,
  sym_select_clause_body = 135,
  sym_select_clause = 136,
  sym_from_clause = 137,
  sym_join_type = 138,
  sym_join_clause = 139,
  sym_select_subexpression = 140,
  sym_update_statement = 141,
  sym_set_clause = 142,
  sym_set_clause_body = 143,
  sym_assigment_expression = 144,
  sym_insert_statement = 145,
  sym_values_clause = 146,
  sym_values_clause_body = 147,
  sym_in_expression = 148,
  sym_tuple = 149,
  sym_references_constraint = 150,
  sym_on_update_action = 151,
  sym_on_delete_action = 152,
  sym__constraint_action = 153,
  sym_unique_constraint = 154,
  sym_null_constraint = 155,
  sym_check_constraint = 156,
  sym_parameter = 157,
  sym_parameters = 158,
  sym_function_call = 159,
  sym_comparison_operator = 160,
  sym__parenthesized_expression = 161,
  sym_is_expression = 162,
  sym_distinct_from = 163,
  sym_boolean_expression = 164,
  sym_NULL = 165,
  sym_TRUE = 166,
  sym_FALSE = 167,
  sym_number = 168,
  sym_string = 169,
  sym_field_access = 170,
  sym_ordered_expression = 171,
  sym__type_alias = 172,
  sym_array_type = 173,
  sym__type = 174,
  sym_type_cast = 175,
  sym_binary_expression = 176,
  sym_argument_reference = 177,
  sym__expression = 178,
  aux_sym_source_file_repeat1 = 179,
  aux_sym_create_function_statement_repeat1 = 180,
  aux_sym_create_function_parameters_repeat1 = 181,
  aux_sym_grant_statement_repeat1 = 182,
  aux_sym_create_domain_statement_repeat1 = 183,
  aux_sym_create_table_column_parameter_repeat1 = 184,
  aux_sym_create_table_parameters_repeat1 = 185,
  aux_sym_table_constraint_foreign_key_repeat1 = 186,
  aux_sym_index_table_parameters_repeat1 = 187,
  aux_sym_select_statement_repeat1 = 188,
  aux_sym_group_by_clause_body_repeat1 = 189,
  aux_sym_select_clause_body_repeat1 = 190,
  aux_sym_set_clause_body_repeat1 = 191,
  aux_sym_parameters_repeat1 = 192,
  anon_alias_sym_CREATE_SCHEMA = 193,
  anon_alias_sym_CREATE_TABLE = 194,
  anon_alias_sym_DELETE = 195,
  anon_alias_sym_NULL = 196,
  anon_alias_sym_ON_UPDATE = 197,
  alias_sym_default = 198,
  alias_sym_language = 199,
  alias_sym_type = 200,
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
  [aux_sym_grant_statement_token12] = "ON",
  [aux_sym_grant_statement_token13] = "DATABASE",
  [aux_sym_grant_statement_token14] = "SEQUENCE",
  [aux_sym_grant_statement_token15] = "TABLE",
  [aux_sym_grant_statement_token16] = "GROUP",
  [aux_sym_grant_statement_token17] = "PUBLIC",
  [aux_sym_grant_statement_token18] = "WITH_GRANT_OPTION",
  [aux_sym_grant_statement_token19] = "WITH_GRANT_OPTION",
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
  [aux_sym_in_expression_token1] = "IN",
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
  [aux_sym_grant_statement_token18] = aux_sym_grant_statement_token18,
  [aux_sym_grant_statement_token19] = aux_sym_grant_statement_token18,
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
  [aux_sym_in_expression_token1] = aux_sym_in_expression_token1,
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
  [aux_sym_grant_statement_token19] = {
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
  [aux_sym_in_expression_token1] = {
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
  field_scope = 10,
  field_table = 11,
  field_type = 12,
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
  [18] = {.index = 7, .length = 2},
  [19] = {.index = 9, .length = 2},
  [20] = {.index = 11, .length = 3},
  [21] = {.index = 14, .length = 1},
  [23] = {.index = 15, .length = 1},
  [25] = {.index = 16, .length = 1},
  [26] = {.index = 17, .length = 2},
  [27] = {.index = 19, .length = 1},
  [28] = {.index = 20, .length = 2},
  [31] = {.index = 22, .length = 1},
  [32] = {.index = 23, .length = 1},
  [35] = {.index = 2, .length = 1},
  [38] = {.index = 19, .length = 1},
  [39] = {.index = 2, .length = 1},
  [40] = {.index = 24, .length = 1},
  [41] = {.index = 24, .length = 1},
  [42] = {.index = 23, .length = 1},
  [44] = {.index = 19, .length = 1},
  [46] = {.index = 23, .length = 1},
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
    {field_name, 0},
    {field_type, 1},
  [9] =
    {field_name, 2},
    {field_table, 4},
  [11] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [14] =
    {field_elements, 1},
  [15] =
    {field_replace, 1},
  [16] =
    {field_type, 1},
  [17] =
    {field_name, 3},
    {field_table, 5},
  [19] =
    {field_type, 3},
  [20] =
    {field_elements, 1},
    {field_elements, 2},
  [22] =
    {field_order, 1},
  [23] =
    {field_type, 4},
  [24] =
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
  [16] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [17] = {
    [0] = anon_alias_sym_CREATE_SCHEMA,
    [1] = anon_alias_sym_CREATE_SCHEMA,
    [3] = aux_sym_create_schema_statement_token2,
  },
  [22] = {
    [1] = aux_sym_distinct_from_token1,
  },
  [23] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [24] = {
    [2] = alias_sym_default,
  },
  [29] = {
    [3] = alias_sym_default,
  },
  [30] = {
    [1] = alias_sym_language,
  },
  [33] = {
    [6] = aux_sym_grant_statement_token18,
    [7] = aux_sym_grant_statement_token18,
  },
  [34] = {
    [6] = aux_sym_grant_statement_token18,
    [7] = aux_sym_grant_statement_token18,
    [8] = aux_sym_grant_statement_token18,
  },
  [35] = {
    [6] = aux_sym_grant_statement_token18,
    [7] = aux_sym_grant_statement_token18,
    [8] = aux_sym_grant_statement_token18,
  },
  [36] = {
    [1] = aux_sym_table_constraint_foreign_key_token1,
  },
  [37] = {
    [7] = aux_sym_grant_statement_token18,
    [8] = aux_sym_grant_statement_token18,
    [9] = aux_sym_grant_statement_token18,
  },
  [38] = {
    [7] = aux_sym_grant_statement_token18,
    [8] = aux_sym_grant_statement_token18,
    [9] = aux_sym_grant_statement_token18,
  },
  [39] = {
    [7] = aux_sym_grant_statement_token18,
    [8] = aux_sym_grant_statement_token18,
    [9] = aux_sym_grant_statement_token18,
  },
  [40] = {
    [0] = anon_alias_sym_ON_UPDATE,
    [1] = anon_alias_sym_ON_UPDATE,
  },
  [41] = {
    [0] = aux_sym_grant_statement_token7,
  },
  [42] = {
    [8] = aux_sym_grant_statement_token18,
    [9] = aux_sym_grant_statement_token18,
    [10] = aux_sym_grant_statement_token18,
  },
  [43] = {
    [8] = aux_sym_grant_statement_token18,
    [9] = aux_sym_grant_statement_token18,
    [10] = aux_sym_grant_statement_token18,
  },
  [44] = {
    [8] = aux_sym_grant_statement_token18,
    [9] = aux_sym_grant_statement_token18,
    [10] = aux_sym_grant_statement_token18,
  },
  [45] = {
    [0] = aux_sym__constraint_action_token3,
  },
  [46] = {
    [9] = aux_sym_grant_statement_token18,
    [10] = aux_sym_grant_statement_token18,
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
      if (eof) ADVANCE(345);
      if (lookahead == '$') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == ')') ADVANCE(360);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(449);
      if (lookahead == '=') ADVANCE(357);
      if (lookahead == '>') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == '\\') SKIP(335)
      if (lookahead == ']') ADVANCE(627);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == '~') ADVANCE(632);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(330);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(255);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(137);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(72);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == ')') ADVANCE(360);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(465);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(574);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(557);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == ')') ADVANCE(360);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(362);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '*') ADVANCE(621);
      if (lookahead != 0) ADVANCE(622);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(18)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == '-') ADVANCE(619);
      if (lookahead == '/') ADVANCE(617);
      if (lookahead == '\\') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(618);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 36:
      if (lookahead == ')') ADVANCE(360);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '=') ADVANCE(357);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 37:
      if (lookahead == ')') ADVANCE(360);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == 'C') ADVANCE(56);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(631);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(522);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(576);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(574);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(503);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(628);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(623);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(411);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(219);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(625);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 163:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(454);
      END_STATE();
    case 164:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 165:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 166:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 167:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(297);
      END_STATE();
    case 168:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 169:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 170:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 171:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 172:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 173:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 174:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 175:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 176:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 177:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 178:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 179:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 180:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 181:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 182:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 183:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 184:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 185:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(156);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 202:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(412);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(323);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 224:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(454);
      END_STATE();
    case 226:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 227:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 228:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 229:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(454);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 261:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 262:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 263:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 264:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(325);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 280:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 281:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 282:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 283:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 284:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(392);
      END_STATE();
    case 290:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      END_STATE();
    case 291:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 292:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 293:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 294:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 295:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(431);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 324:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 325:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 326:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 327:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 328:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(195);
      END_STATE();
    case 329:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(410);
      END_STATE();
    case 330:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(422);
      END_STATE();
    case 331:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(416);
      END_STATE();
    case 332:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(419);
      END_STATE();
    case 333:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(620);
      END_STATE();
    case 334:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 335:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(334)
      END_STATE();
    case 336:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(343)
      END_STATE();
    case 337:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(343)
      if (lookahead == '\r') SKIP(336)
      END_STATE();
    case 338:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(342)
      END_STATE();
    case 339:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(342)
      if (lookahead == '\r') SKIP(338)
      END_STATE();
    case 340:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(344)
      END_STATE();
    case 341:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') SKIP(344)
      if (lookahead == '\r') SKIP(340)
      END_STATE();
    case 342:
      if (eof) ADVANCE(345);
      if (lookahead == '$') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '\\') SKIP(339)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(575);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(465);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(557);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(490);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(565);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(342)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 343:
      if (eof) ADVANCE(345);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == ')') ADVANCE(360);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(449);
      if (lookahead == '=') ADVANCE(357);
      if (lookahead == '>') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == '\\') SKIP(337)
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '~') ADVANCE(632);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(139);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(272);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(257);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(343)
      END_STATE();
    case 344:
      if (eof) ADVANCE(345);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(358);
      if (lookahead == ')') ADVANCE(360);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(449);
      if (lookahead == '=') ADVANCE(357);
      if (lookahead == '>') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == '\\') SKIP(341)
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '~') ADVANCE(632);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(135);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(344)
      END_STATE();
    case 345:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token4);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token2);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token2);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token3);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token3);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token4);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_set_statement_token3);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_set_statement_token3);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_set_statement_token4);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_set_statement_token5);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_set_statement_token5);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_grant_statement_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_grant_statement_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_grant_statement_token2);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_grant_statement_token3);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_grant_statement_token4);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_grant_statement_token4);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_grant_statement_token5);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_grant_statement_token5);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_grant_statement_token6);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_grant_statement_token6);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_grant_statement_token7);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_grant_statement_token8);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_grant_statement_token9);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_grant_statement_token10);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_grant_statement_token11);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_grant_statement_token12);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_grant_statement_token13);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_grant_statement_token13);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_grant_statement_token14);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_grant_statement_token14);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_grant_statement_token15);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_grant_statement_token15);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_grant_statement_token16);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_grant_statement_token16);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_grant_statement_token17);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_grant_statement_token17);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_grant_statement_token18);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_grant_statement_token19);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token2);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_join_type_token5);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_values_clause_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '>') ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(523);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(505);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == '\r') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(613);
      if (lookahead == '\'') ADVANCE(631);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '*') ADVANCE(608);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '*') ADVANCE(608);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(612);
      if (lookahead == '/') ADVANCE(610);
      if (lookahead == '\\') ADVANCE(605);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\r') ADVANCE(615);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(620);
      if (lookahead == '$') ADVANCE(630);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == '*') ADVANCE(622);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == '-') ADVANCE(619);
      if (lookahead == '/') ADVANCE(617);
      if (lookahead == '\\') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(618);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '*') ADVANCE(621);
      if (lookahead == '/') ADVANCE(620);
      if (lookahead != 0) ADVANCE(622);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '*') ADVANCE(621);
      if (lookahead != 0) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(620);
      if (lookahead == '$') ADVANCE(631);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(362);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 343},
  [3] = {.lex_state = 343},
  [4] = {.lex_state = 343},
  [5] = {.lex_state = 342},
  [6] = {.lex_state = 343},
  [7] = {.lex_state = 343},
  [8] = {.lex_state = 343},
  [9] = {.lex_state = 343},
  [10] = {.lex_state = 343},
  [11] = {.lex_state = 343},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 344},
  [16] = {.lex_state = 343},
  [17] = {.lex_state = 344},
  [18] = {.lex_state = 344},
  [19] = {.lex_state = 344},
  [20] = {.lex_state = 343},
  [21] = {.lex_state = 344},
  [22] = {.lex_state = 344},
  [23] = {.lex_state = 344},
  [24] = {.lex_state = 344},
  [25] = {.lex_state = 344},
  [26] = {.lex_state = 344},
  [27] = {.lex_state = 344},
  [28] = {.lex_state = 343},
  [29] = {.lex_state = 343},
  [30] = {.lex_state = 343},
  [31] = {.lex_state = 343},
  [32] = {.lex_state = 344},
  [33] = {.lex_state = 343},
  [34] = {.lex_state = 343},
  [35] = {.lex_state = 343},
  [36] = {.lex_state = 344},
  [37] = {.lex_state = 343},
  [38] = {.lex_state = 343},
  [39] = {.lex_state = 343},
  [40] = {.lex_state = 343},
  [41] = {.lex_state = 344},
  [42] = {.lex_state = 343},
  [43] = {.lex_state = 343},
  [44] = {.lex_state = 343},
  [45] = {.lex_state = 344},
  [46] = {.lex_state = 343},
  [47] = {.lex_state = 344},
  [48] = {.lex_state = 344},
  [49] = {.lex_state = 344},
  [50] = {.lex_state = 344},
  [51] = {.lex_state = 343},
  [52] = {.lex_state = 344},
  [53] = {.lex_state = 344},
  [54] = {.lex_state = 343},
  [55] = {.lex_state = 344},
  [56] = {.lex_state = 344},
  [57] = {.lex_state = 344},
  [58] = {.lex_state = 344},
  [59] = {.lex_state = 344},
  [60] = {.lex_state = 344},
  [61] = {.lex_state = 344},
  [62] = {.lex_state = 343},
  [63] = {.lex_state = 343},
  [64] = {.lex_state = 344},
  [65] = {.lex_state = 343},
  [66] = {.lex_state = 343},
  [67] = {.lex_state = 344},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 30},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 31},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 343},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 343},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 343},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 344},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 344},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 344},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 344},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 344},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 344},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 344},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 344},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 344},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 344},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 344},
  [148] = {.lex_state = 344},
  [149] = {.lex_state = 344},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 344},
  [152] = {.lex_state = 344},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 344},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 344},
  [159] = {.lex_state = 344},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 37},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 43},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 43},
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
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 37},
  [221] = {.lex_state = 0},
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
  [234] = {.lex_state = 44},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 44},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
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
  [257] = {.lex_state = 34},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 34},
  [265] = {.lex_state = 34},
  [266] = {.lex_state = 34},
  [267] = {.lex_state = 45},
  [268] = {.lex_state = 45},
  [269] = {.lex_state = 45},
  [270] = {.lex_state = 34},
  [271] = {.lex_state = 34},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 34},
  [274] = {.lex_state = 34},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 34},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 46},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 34},
  [288] = {.lex_state = 46},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 47},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 46},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 46},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 46},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 46},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 48},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 34},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 34},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 34},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
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
  [370] = {.lex_state = 34},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 34},
  [373] = {.lex_state = 34},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 34},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 34},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 34},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 34},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 34},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 34},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 34},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 34},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 34},
  [411] = {.lex_state = 34},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 34},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 34},
  [421] = {.lex_state = 34},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 343},
  [424] = {.lex_state = 34},
  [425] = {.lex_state = 34},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 34},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 34},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 34},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 34},
  [439] = {.lex_state = 34},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 34},
  [442] = {.lex_state = 34},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 34},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 611},
  [450] = {.lex_state = 35},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 34},
  [454] = {.lex_state = 37},
  [455] = {.lex_state = 34},
  [456] = {.lex_state = 34},
  [457] = {.lex_state = 34},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 34},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 34},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 34},
  [474] = {.lex_state = 34},
  [475] = {.lex_state = 35},
  [476] = {.lex_state = 611},
  [477] = {.lex_state = 343},
  [478] = {.lex_state = 37},
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
    [aux_sym_grant_statement_token19] = ACTIONS(1),
    [aux_sym_create_domain_statement_token1] = ACTIONS(1),
    [aux_sym_create_type_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token1] = ACTIONS(1),
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
    [aux_sym_join_type_token5] = ACTIONS(1),
    [aux_sym_join_clause_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_values_clause_token1] = ACTIONS(1),
    [aux_sym_in_expression_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(472),
    [sym__statement] = STATE(121),
    [sym_create_function_statement] = STATE(250),
    [sym_create_schema_statement] = STATE(250),
    [sym_set_statement] = STATE(250),
    [sym_grant_statement] = STATE(250),
    [sym_create_domain_statement] = STATE(250),
    [sym_create_type_statement] = STATE(250),
    [sym_create_index_statement] = STATE(250),
    [sym_create_table_statement] = STATE(250),
    [sym_select_statement] = STATE(250),
    [sym_select_clause] = STATE(72),
    [sym_update_statement] = STATE(250),
    [sym_insert_statement] = STATE(250),
    [aux_sym_source_file_repeat1] = STATE(121),
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
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(19), 43,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [55] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(23), 43,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(27), 42,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [164] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(40), 1,
      sym__expression,
    STATE(130), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(119), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 39,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 39,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(61), 39,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 38,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 39,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 39,
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
      aux_sym_set_statement_token1,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token16,
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
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [554] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(40), 1,
      sym__expression,
    STATE(130), 1,
      sym_select_clause_body,
    STATE(119), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(33), 9,
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(39), 13,
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
  [629] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(40), 1,
      sym__expression,
    STATE(130), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
    STATE(119), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(33), 9,
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(39), 13,
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
  [702] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(40), 1,
      sym__expression,
    STATE(130), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
    STATE(119), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(33), 9,
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(39), 13,
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
  [775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(83), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(83), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(79), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(83), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(83), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(79), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(105), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
    ACTIONS(29), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(121), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [1755] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(129), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 30,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(79), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [1898] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 1,
      aux_sym_function_body_token1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(149), 21,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [1957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2000] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(155), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [2055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [2098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [2141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(129), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
      aux_sym__constraint_action_token3,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(175), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [2239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2413] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
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
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [2460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(183), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [2589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
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
      aux_sym_where_clause_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2808] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(155), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
      aux_sym__constraint_action_token3,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [2906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(187), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [2949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 31,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token16,
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
  [2992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
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
      aux_sym_where_clause_token1,
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
  [3035] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(191), 19,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [3089] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(193), 19,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [3143] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(195), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym__constraint_action_token3,
  [3195] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_select_clause,
    STATE(159), 1,
      sym__expression,
    STATE(459), 1,
      sym_select_statement,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3258] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_select_clause,
    STATE(158), 1,
      sym__expression,
    STATE(428), 1,
      sym_select_statement,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3321] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(40), 1,
      sym__expression,
    STATE(125), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [3379] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(40), 1,
      sym__expression,
    STATE(127), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [3437] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_grant_statement_token16,
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
    STATE(112), 1,
      sym_from_clause,
    STATE(153), 1,
      sym_where_clause,
    STATE(173), 1,
      sym_group_by_clause,
    STATE(186), 1,
      sym_order_by_clause,
    STATE(440), 1,
      sym_join_type,
    STATE(110), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(231), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(219), 11,
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
  [3496] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3553] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(136), 1,
      sym__expression,
    STATE(290), 1,
      sym_ordered_expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3610] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      aux_sym_set_statement_token5,
    STATE(128), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3667] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(141), 1,
      sym__expression,
    STATE(363), 1,
      sym_ordered_expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3724] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(148), 1,
      sym__expression,
    STATE(451), 1,
      sym_values_clause_body,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3781] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      aux_sym_set_statement_token5,
    STATE(123), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3838] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(82), 1,
      sym__expression,
    STATE(177), 1,
      sym_group_by_clause_body,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [3895] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(109), 1,
      sym__expression,
    STATE(182), 1,
      sym_order_by_clause_body,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [3952] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4009] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(243), 12,
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
  [4062] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(149), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4116] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [4170] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(107), 1,
      sym__expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [4224] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(151), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4278] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(66), 1,
      sym__expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [4332] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(116), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4386] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(143), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4440] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(42), 1,
      sym__expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [4494] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4548] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(247), 13,
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
      aux_sym_order_by_clause_token1,
  [4596] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4650] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4704] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4758] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(113), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4812] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4866] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(92), 1,
      sym__expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [4920] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(154), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [4974] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(152), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [5028] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(126), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [5082] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [5136] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(43), 1,
      sym__expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [5190] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(38), 1,
      sym__expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [5244] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(37), 1,
      sym__expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [5298] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(209), 1,
      aux_sym_TRUE_token1,
    ACTIONS(211), 1,
      aux_sym_FALSE_token1,
    ACTIONS(213), 1,
      aux_sym_number_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(158), 1,
      sym__expression,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(47), 13,
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
  [5352] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(143), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(249), 13,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
  [5400] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      aux_sym__constraint_action_token3,
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
    STATE(65), 1,
      sym__expression,
    STATE(20), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(39), 13,
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
  [5454] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(251), 11,
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
  [5506] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(225), 1,
      aux_sym_where_clause_token1,
    ACTIONS(229), 1,
      aux_sym_join_type_token1,
    ACTIONS(233), 1,
      aux_sym_join_clause_token1,
    STATE(150), 1,
      sym_where_clause,
    STATE(163), 1,
      sym_group_by_clause,
    STATE(183), 1,
      sym_order_by_clause,
    STATE(440), 1,
      sym_join_type,
    STATE(117), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(231), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(255), 11,
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
  [5559] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(225), 1,
      aux_sym_where_clause_token1,
    ACTIONS(229), 1,
      aux_sym_join_type_token1,
    ACTIONS(233), 1,
      aux_sym_join_clause_token1,
    STATE(155), 1,
      sym_where_clause,
    STATE(167), 1,
      sym_group_by_clause,
    STATE(191), 1,
      sym_order_by_clause,
    STATE(440), 1,
      sym_join_type,
    STATE(117), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(231), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(257), 11,
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
  [5612] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(225), 1,
      aux_sym_where_clause_token1,
    ACTIONS(229), 1,
      aux_sym_join_type_token1,
    ACTIONS(233), 1,
      aux_sym_join_clause_token1,
    STATE(150), 1,
      sym_where_clause,
    STATE(163), 1,
      sym_group_by_clause,
    STATE(183), 1,
      sym_order_by_clause,
    STATE(440), 1,
      sym_join_type,
    STATE(111), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(231), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(255), 11,
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
  [5665] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(247), 12,
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
  [5712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 24,
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
      aux_sym__constraint_action_token3,
  [5742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 24,
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
      aux_sym__constraint_action_token3,
  [5772] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(263), 10,
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
  [5817] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_join_type_token1,
    ACTIONS(273), 1,
      aux_sym_join_clause_token1,
    STATE(440), 1,
      sym_join_type,
    STATE(117), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(270), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(265), 14,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
  [5855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(276), 20,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(281), 20,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(285), 20,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5951] = 11,
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
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_select_clause,
    STATE(122), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(250), 11,
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
  [5996] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(294), 1,
      aux_sym_set_statement_token1,
    ACTIONS(297), 1,
      aux_sym_grant_statement_token1,
    ACTIONS(300), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(303), 1,
      aux_sym_grant_statement_token5,
    ACTIONS(306), 1,
      aux_sym_grant_statement_token6,
    STATE(72), 1,
      sym_select_clause,
    STATE(122), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(250), 11,
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
  [6041] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(309), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 21,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [6111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(313), 19,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [6142] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 21,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [6212] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(165), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(317), 19,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [6286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 20,
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
      aux_sym_grant_statement_token16,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [6312] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(325), 1,
      aux_sym_set_statement_token5,
    ACTIONS(327), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(329), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(331), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(333), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(335), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    STATE(114), 1,
      sym_NULL,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(132), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [6360] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(325), 1,
      aux_sym_set_statement_token5,
    ACTIONS(327), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(329), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(331), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(333), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(335), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    STATE(114), 1,
      sym_NULL,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(133), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [6405] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(346), 1,
      aux_sym_set_statement_token5,
    ACTIONS(349), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(352), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(355), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(358), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(361), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(364), 1,
      aux_sym__constraint_action_token3,
    STATE(114), 1,
      sym_NULL,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(133), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [6450] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    STATE(114), 1,
      sym_NULL,
    STATE(144), 1,
      sym_null_constraint,
    ACTIONS(367), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    STATE(114), 1,
      sym_NULL,
    STATE(144), 1,
      sym_null_constraint,
    ACTIONS(369), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6518] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    STATE(317), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(377), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6564] = 6,
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
    STATE(140), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6595] = 6,
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
    STATE(139), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__function_language_token1,
    ACTIONS(397), 1,
      aux_sym_function_body_token1,
    ACTIONS(391), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(139), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(389), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6657] = 6,
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
    STATE(139), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6688] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(377), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6729] = 6,
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
    STATE(138), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6760] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 16,
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
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6824] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6866] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(331), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    STATE(114), 1,
      sym_NULL,
    STATE(156), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6900] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6942] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6984] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7026] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(167), 1,
      sym_group_by_clause,
    STATE(191), 1,
      sym_order_by_clause,
    ACTIONS(257), 11,
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
  [7055] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7092] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7129] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(163), 1,
      sym_group_by_clause,
    STATE(183), 1,
      sym_order_by_clause,
    ACTIONS(255), 11,
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
  [7158] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7195] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(165), 1,
      sym_group_by_clause,
    STATE(192), 1,
      sym_order_by_clause,
    ACTIONS(426), 11,
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
  [7224] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(331), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    STATE(114), 1,
      sym_NULL,
    STATE(157), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7255] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(435), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(438), 1,
      aux_sym__constraint_action_token3,
    STATE(114), 1,
      sym_NULL,
    STATE(157), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7286] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7322] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(169), 1,
      aux_sym_is_expression_token1,
    ACTIONS(171), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(173), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(247), 12,
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
  [7382] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      aux_sym_grant_statement_token12,
    STATE(361), 1,
      sym_on_update_action,
    STATE(362), 1,
      sym_on_delete_action,
    ACTIONS(450), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(454), 12,
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
  [7434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(191), 1,
      sym_order_by_clause,
    ACTIONS(257), 11,
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
  [7457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(194), 1,
      sym_order_by_clause,
    ACTIONS(458), 11,
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
  [7499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(460), 11,
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
  [7522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(192), 1,
      sym_order_by_clause,
    ACTIONS(426), 11,
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
  [7545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_grant_statement_token12,
    STATE(342), 1,
      sym_on_delete_action,
    STATE(345), 1,
      sym_on_update_action,
    ACTIONS(462), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(247), 11,
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
  [7612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_order_by_clause_token1,
    STATE(183), 1,
      sym_order_by_clause,
    ACTIONS(255), 11,
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
  [7673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_grant_statement_token12,
    STATE(346), 1,
      sym_on_delete_action,
    STATE(347), 1,
      sym_on_update_action,
    ACTIONS(471), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(475), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 12,
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
  [7757] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(299), 1,
      sym_constrained_type,
    ACTIONS(21), 2,
      aux_sym_create_schema_statement_token3,
      aux_sym__constraint_action_token3,
    STATE(244), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(19), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [7782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 11,
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
      aux_sym__constraint_action_token3,
  [7799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(483), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [7820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token12,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 11,
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
  [7854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 11,
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
  [7871] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(493), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(495), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(497), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(309), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token12,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 11,
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
  [7932] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(493), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(495), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(497), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(359), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(503), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [7980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(508), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [8001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token12,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [8018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 11,
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
  [8035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 11,
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
  [8052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(475), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [8071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 11,
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
  [8088] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_grant_statement_token2,
    ACTIONS(518), 1,
      aux_sym_grant_statement_token7,
    ACTIONS(520), 1,
      aux_sym_grant_statement_token12,
    STATE(197), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(516), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [8113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [8129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_grant_statement_token7,
    ACTIONS(524), 1,
      aux_sym_grant_statement_token12,
    STATE(209), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(522), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [8151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_where_clause_token1,
    STATE(233), 1,
      sym_where_clause,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [8187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [8203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_where_clause_token1,
    STATE(232), 1,
      sym_where_clause,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_where_clause_token1,
    STATE(241), 1,
      sym_where_clause,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 10,
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
  [8259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_where_clause_token1,
    STATE(261), 1,
      sym_where_clause,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [8295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [8311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_where_clause_token1,
    STATE(240), 1,
      sym_where_clause,
    ACTIONS(544), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_set_statement_token5,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [8347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      aux_sym_grant_statement_token7,
    ACTIONS(554), 1,
      aux_sym_grant_statement_token12,
    STATE(209), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(548), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [8369] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(558), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(560), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(562), 1,
      aux_sym_TRUE_token1,
    ACTIONS(564), 1,
      aux_sym_FALSE_token1,
    STATE(50), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [8409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8426] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(572), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(574), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(576), 1,
      aux_sym_TRUE_token1,
    ACTIONS(578), 1,
      aux_sym_FALSE_token1,
    STATE(44), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_function_body_token1,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(588), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(592), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(596), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(600), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8553] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(604), 1,
      aux_sym_create_function_statement_token2,
    ACTIONS(606), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(608), 1,
      aux_sym_create_schema_statement_token1,
    ACTIONS(610), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(612), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(614), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(616), 1,
      aux_sym_create_index_statement_token1,
    STATE(454), 1,
      sym_unique_constraint,
  [8584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(618), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 9,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token7,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
      aux_sym_grant_statement_token12,
  [8616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [8631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(626), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(630), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [8680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      aux_sym_grant_statement_token18,
    ACTIONS(636), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(560), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(562), 1,
      aux_sym_TRUE_token1,
    ACTIONS(564), 1,
      aux_sym_FALSE_token1,
    STATE(36), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8789] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
    ACTIONS(644), 1,
      aux_sym_setof_token1,
    STATE(135), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(137), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [8809] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(646), 1,
      anon_sym_EQ,
    STATE(114), 1,
      sym_NULL,
    STATE(144), 1,
      sym_null_constraint,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8849] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
    ACTIONS(644), 1,
      aux_sym_setof_token1,
    STATE(135), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(142), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [8869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8953] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(114), 1,
      sym_NULL,
    STATE(144), 1,
      sym_null_constraint,
    ACTIONS(666), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9021] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(574), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(576), 1,
      aux_sym_TRUE_token1,
    ACTIONS(578), 1,
      aux_sym_FALSE_token1,
    STATE(29), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [9043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(676), 7,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9157] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(694), 1,
      sym_identifier,
    STATE(196), 1,
      sym_type_cast,
    STATE(193), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [9181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 7,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_set_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [9264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_identifier,
    STATE(295), 1,
      sym_constrained_type,
    STATE(296), 1,
      sym_create_function_parameter,
    STATE(235), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9282] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_identifier,
    STATE(295), 1,
      sym_constrained_type,
    STATE(351), 1,
      sym_create_function_parameter,
    STATE(235), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(168), 1,
      sym_constrained_type,
    STATE(134), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym_identifier,
    ACTIONS(710), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
      aux_sym_grant_statement_token15,
  [9328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(714), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
      aux_sym_grant_statement_token15,
  [9341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(718), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
      aux_sym_grant_statement_token15,
  [9354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(146), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(9), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9378] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      aux_sym_using_clause_token1,
    STATE(198), 1,
      sym_index_table_parameters,
    STATE(335), 1,
      sym_using_clause,
  [9394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(19), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(131), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      aux_sym_using_clause_token1,
    STATE(201), 1,
      sym_index_table_parameters,
    STATE(348), 1,
      sym_using_clause,
  [9434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(286), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      aux_sym_set_statement_token1,
    STATE(185), 1,
      sym__constraint_action,
    ACTIONS(730), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [9460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      aux_sym_set_statement_token1,
    STATE(181), 1,
      sym__constraint_action,
    ACTIONS(732), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [9474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(736), 2,
      aux_sym_grant_statement_token17,
      sym_identifier,
  [9485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_create_table_parameters_repeat1,
  [9537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_string,
  [9550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_string,
  [9563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(752), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_identifier,
    STATE(180), 1,
      sym_assigment_expression,
    STATE(226), 1,
      sym_set_clause_body,
  [9587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(758), 2,
      aux_sym_grant_statement_token17,
      sym_identifier,
  [9598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_parameters_repeat1,
  [9611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_index_table_parameters_repeat1,
  [9624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym_identifier,
    ACTIONS(768), 2,
      aux_sym_set_statement_token2,
      aux_sym_set_statement_token3,
  [9648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_create_function_parameters_repeat1,
  [9674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_EQ,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_create_function_parameters_repeat1,
  [9698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(785), 2,
      aux_sym_grant_statement_token17,
      sym_identifier,
  [9709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_EQ,
    ACTIONS(666), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_index_table_parameters_repeat1,
  [9746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_parameters_repeat1,
  [9759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_create_table_parameters_repeat1,
  [9772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(806), 2,
      aux_sym_grant_statement_token17,
      sym_identifier,
  [9822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      aux_sym_create_table_parameters_repeat1,
  [9861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_parameters_repeat1,
  [9874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_create_function_parameters_repeat1,
  [9887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      aux_sym_grant_statement_token4,
    STATE(72), 1,
      sym_select_clause,
    STATE(353), 1,
      sym_select_statement,
  [9900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      aux_sym_grant_statement_token4,
    STATE(72), 1,
      sym_select_clause,
    STATE(354), 1,
      sym_select_statement,
  [9913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(827), 2,
      aux_sym_grant_statement_token17,
      sym_identifier,
  [9924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      aux_sym_grant_statement_token16,
    ACTIONS(833), 2,
      aux_sym_grant_statement_token17,
      sym_identifier,
  [9948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_index_table_parameters_repeat1,
  [9961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_grant_statement_token9,
    STATE(321), 1,
      sym_references_constraint,
  [9997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
  [10015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_tuple,
  [10025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_tuple,
  [10035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      aux_sym_create_schema_statement_token2,
    ACTIONS(851), 1,
      sym_identifier,
  [10045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 2,
      anon_sym_EQ,
      aux_sym_set_statement_token4,
  [10053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_grant_statement_token12,
    ACTIONS(855), 1,
      aux_sym_grant_statement_token3,
  [10063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      aux_sym_set_statement_token1,
    STATE(207), 1,
      sym_set_clause,
  [10073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      aux_sym_join_type_token5,
    ACTIONS(861), 1,
      aux_sym_join_clause_token1,
  [10083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    STATE(415), 1,
      sym_create_function_parameters,
  [10093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    STATE(262), 1,
      sym_create_table_parameters,
  [10103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_EQ,
      aux_sym_set_statement_token4,
  [10111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym_identifier,
    STATE(340), 1,
      sym_parameter,
  [10129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym_index_table_parameters,
  [10139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_tuple,
  [10149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym_values_clause_token1,
    STATE(243), 1,
      sym_values_clause,
  [10159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    STATE(394), 1,
      sym_create_function_parameters,
  [10169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_parameters,
  [10179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym__constraint_action_token3,
    STATE(115), 1,
      sym_NULL,
  [10197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym_grant_statement_token12,
    STATE(206), 1,
      sym_on_update_action,
  [10207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_identifier,
    STATE(203), 1,
      sym_assigment_expression,
  [10225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      aux_sym_grant_statement_token12,
    STATE(206), 1,
      sym_on_delete_action,
  [10235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym_grant_statement_token12,
    STATE(205), 1,
      sym_on_update_action,
  [10245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      aux_sym_grant_statement_token12,
    STATE(205), 1,
      sym_on_delete_action,
  [10255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_index_table_parameters,
  [10265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym_identifier,
    STATE(301), 1,
      sym_parameter,
  [10283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(891), 1,
      anon_sym_DOLLAR_DOLLAR,
  [10309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
    ACTIONS(893), 1,
      anon_sym_SEMI,
  [10319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_grant_statement_token9,
    STATE(349), 1,
      sym_references_constraint,
  [10329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      aux_sym_grant_statement_token6,
    ACTIONS(901), 1,
      aux_sym_grant_statement_token7,
  [10371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      aux_sym_grant_statement_token12,
    STATE(208), 1,
      sym_on_delete_action,
  [10381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym_grant_statement_token12,
    STATE(208), 1,
      sym_on_update_action,
  [10391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_tuple,
  [10409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
  [10416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
  [10423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      aux_sym_grant_statement_token19,
  [10430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      aux_sym_grant_statement_token1,
  [10437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      aux_sym_grant_statement_token19,
  [10444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_identifier,
  [10451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      aux_sym_set_statement_token4,
  [10458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_identifier,
  [10465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym_identifier,
  [10472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym_grant_statement_token1,
  [10479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      aux_sym_grant_statement_token1,
  [10486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      aux_sym_grant_statement_token19,
  [10493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      aux_sym_grant_statement_token1,
  [10500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      aux_sym_grant_statement_token19,
  [10507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      aux_sym_grant_statement_token19,
  [10514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_DOLLAR_DOLLAR,
  [10521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [10528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
  [10535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
  [10542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [10549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      aux_sym_grant_statement_token7,
  [10556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym_identifier,
  [10563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      aux_sym_grant_statement_token6,
  [10570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_grant_statement_token1,
  [10577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      aux_sym_grant_statement_token19,
  [10584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_grant_statement_token19,
  [10591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym_identifier,
  [10598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_grant_statement_token19,
  [10605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      sym_identifier,
  [10612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      aux_sym_create_function_statement_token4,
  [10619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_grant_statement_token12,
  [10626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_EQ,
  [10633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym_identifier,
  [10640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      aux_sym__constraint_action_token3,
  [10647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym_identifier,
  [10654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      aux_sym_from_clause_token1,
  [10661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      aux_sym_grant_statement_token19,
  [10668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_identifier,
  [10675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_LPAREN,
  [10682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      aux_sym_set_statement_token4,
  [10689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_grant_statement_token1,
  [10696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_identifier,
  [10703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      aux_sym_set_statement_token4,
  [10710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym_identifier,
  [10717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      aux_sym_grant_statement_token12,
  [10724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym_identifier,
  [10731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_identifier,
  [10738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
  [10745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      aux_sym_create_function_statement_token4,
  [10752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      aux_sym_create_schema_statement_token4,
  [10759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      aux_sym_create_function_statement_token4,
  [10766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
  [10773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_identifier,
  [10780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym_grant_statement_token12,
  [10787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      aux_sym_join_clause_token1,
  [10794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_identifier,
  [10801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_identifier,
  [10808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      aux_sym_grant_statement_token1,
  [10815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      aux_sym_in_expression_token1,
  [10822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym_identifier,
  [10829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym_identifier,
  [10836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_SQUOTE,
  [10843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_DOLLAR_DOLLAR,
  [10850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [10857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      aux_sym_set_statement_token4,
  [10864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym_identifier,
  [10871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym_grant_statement_token12,
  [10878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      aux_sym_set_statement_token4,
  [10885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym_identifier,
  [10892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      aux_sym_grant_statement_token12,
  [10899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      aux_sym_function_body_token1,
  [10906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_identifier,
  [10913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      aux_sym_create_schema_statement_token3,
  [10920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym_identifier,
  [10927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_identifier,
  [10934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym_join_clause_token1,
  [10941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_identifier,
  [10948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym_identifier,
  [10955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      aux_sym_join_clause_token1,
  [10962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      aux_sym_group_by_clause_token1,
  [10969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym_group_by_clause_token1,
  [10976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      aux_sym_grant_statement_token1,
  [10983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym_identifier,
  [10990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      aux_sym_number_token1,
  [10997] = 2,
    ACTIONS(1061), 1,
      aux_sym_string_token1,
    ACTIONS(1063), 1,
      sym_comment,
  [11004] = 2,
    ACTIONS(1063), 1,
      sym_comment,
    ACTIONS(1065), 1,
      aux_sym_string_token2,
  [11011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
  [11018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      aux_sym_grant_statement_token19,
  [11025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym_identifier,
  [11032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      aux_sym_create_index_statement_token1,
  [11039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      sym_identifier,
  [11046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym_identifier,
  [11053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym_identifier,
  [11060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      aux_sym_number_token1,
  [11067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [11074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym_identifier,
  [11081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_DOLLAR_DOLLAR,
  [11088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_SQUOTE,
  [11095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      aux_sym_grant_statement_token1,
  [11102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym_create_function_statement_token4,
  [11109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym_identifier,
  [11116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      aux_sym_set_statement_token4,
  [11123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_create_function_statement_token3,
  [11130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      aux_sym_grant_statement_token1,
  [11137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      aux_sym_from_clause_token1,
  [11144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [11151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RBRACK,
  [11158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      ts_builtin_sym_end,
  [11165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      sym_identifier,
  [11172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      sym_identifier,
  [11179] = 2,
    ACTIONS(1063), 1,
      sym_comment,
    ACTIONS(1113), 1,
      aux_sym_string_token2,
  [11186] = 2,
    ACTIONS(1063), 1,
      sym_comment,
    ACTIONS(1115), 1,
      aux_sym_string_token1,
  [11193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      aux_sym_in_expression_token1,
  [11200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      aux_sym_insert_statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 297,
  [SMALL_STATE(8)] = 348,
  [SMALL_STATE(9)] = 399,
  [SMALL_STATE(10)] = 452,
  [SMALL_STATE(11)] = 503,
  [SMALL_STATE(12)] = 554,
  [SMALL_STATE(13)] = 629,
  [SMALL_STATE(14)] = 702,
  [SMALL_STATE(15)] = 775,
  [SMALL_STATE(16)] = 827,
  [SMALL_STATE(17)] = 879,
  [SMALL_STATE(18)] = 923,
  [SMALL_STATE(19)] = 969,
  [SMALL_STATE(20)] = 1015,
  [SMALL_STATE(21)] = 1061,
  [SMALL_STATE(22)] = 1105,
  [SMALL_STATE(23)] = 1149,
  [SMALL_STATE(24)] = 1193,
  [SMALL_STATE(25)] = 1237,
  [SMALL_STATE(26)] = 1281,
  [SMALL_STATE(27)] = 1325,
  [SMALL_STATE(28)] = 1368,
  [SMALL_STATE(29)] = 1411,
  [SMALL_STATE(30)] = 1454,
  [SMALL_STATE(31)] = 1497,
  [SMALL_STATE(32)] = 1540,
  [SMALL_STATE(33)] = 1583,
  [SMALL_STATE(34)] = 1626,
  [SMALL_STATE(35)] = 1669,
  [SMALL_STATE(36)] = 1712,
  [SMALL_STATE(37)] = 1755,
  [SMALL_STATE(38)] = 1810,
  [SMALL_STATE(39)] = 1855,
  [SMALL_STATE(40)] = 1898,
  [SMALL_STATE(41)] = 1957,
  [SMALL_STATE(42)] = 2000,
  [SMALL_STATE(43)] = 2055,
  [SMALL_STATE(44)] = 2098,
  [SMALL_STATE(45)] = 2141,
  [SMALL_STATE(46)] = 2196,
  [SMALL_STATE(47)] = 2239,
  [SMALL_STATE(48)] = 2282,
  [SMALL_STATE(49)] = 2327,
  [SMALL_STATE(50)] = 2370,
  [SMALL_STATE(51)] = 2413,
  [SMALL_STATE(52)] = 2460,
  [SMALL_STATE(53)] = 2503,
  [SMALL_STATE(54)] = 2546,
  [SMALL_STATE(55)] = 2589,
  [SMALL_STATE(56)] = 2632,
  [SMALL_STATE(57)] = 2675,
  [SMALL_STATE(58)] = 2718,
  [SMALL_STATE(59)] = 2761,
  [SMALL_STATE(60)] = 2808,
  [SMALL_STATE(61)] = 2863,
  [SMALL_STATE(62)] = 2906,
  [SMALL_STATE(63)] = 2949,
  [SMALL_STATE(64)] = 2992,
  [SMALL_STATE(65)] = 3035,
  [SMALL_STATE(66)] = 3089,
  [SMALL_STATE(67)] = 3143,
  [SMALL_STATE(68)] = 3195,
  [SMALL_STATE(69)] = 3258,
  [SMALL_STATE(70)] = 3321,
  [SMALL_STATE(71)] = 3379,
  [SMALL_STATE(72)] = 3437,
  [SMALL_STATE(73)] = 3496,
  [SMALL_STATE(74)] = 3553,
  [SMALL_STATE(75)] = 3610,
  [SMALL_STATE(76)] = 3667,
  [SMALL_STATE(77)] = 3724,
  [SMALL_STATE(78)] = 3781,
  [SMALL_STATE(79)] = 3838,
  [SMALL_STATE(80)] = 3895,
  [SMALL_STATE(81)] = 3952,
  [SMALL_STATE(82)] = 4009,
  [SMALL_STATE(83)] = 4062,
  [SMALL_STATE(84)] = 4116,
  [SMALL_STATE(85)] = 4170,
  [SMALL_STATE(86)] = 4224,
  [SMALL_STATE(87)] = 4278,
  [SMALL_STATE(88)] = 4332,
  [SMALL_STATE(89)] = 4386,
  [SMALL_STATE(90)] = 4440,
  [SMALL_STATE(91)] = 4494,
  [SMALL_STATE(92)] = 4548,
  [SMALL_STATE(93)] = 4596,
  [SMALL_STATE(94)] = 4650,
  [SMALL_STATE(95)] = 4704,
  [SMALL_STATE(96)] = 4758,
  [SMALL_STATE(97)] = 4812,
  [SMALL_STATE(98)] = 4866,
  [SMALL_STATE(99)] = 4920,
  [SMALL_STATE(100)] = 4974,
  [SMALL_STATE(101)] = 5028,
  [SMALL_STATE(102)] = 5082,
  [SMALL_STATE(103)] = 5136,
  [SMALL_STATE(104)] = 5190,
  [SMALL_STATE(105)] = 5244,
  [SMALL_STATE(106)] = 5298,
  [SMALL_STATE(107)] = 5352,
  [SMALL_STATE(108)] = 5400,
  [SMALL_STATE(109)] = 5454,
  [SMALL_STATE(110)] = 5506,
  [SMALL_STATE(111)] = 5559,
  [SMALL_STATE(112)] = 5612,
  [SMALL_STATE(113)] = 5665,
  [SMALL_STATE(114)] = 5712,
  [SMALL_STATE(115)] = 5742,
  [SMALL_STATE(116)] = 5772,
  [SMALL_STATE(117)] = 5817,
  [SMALL_STATE(118)] = 5855,
  [SMALL_STATE(119)] = 5887,
  [SMALL_STATE(120)] = 5919,
  [SMALL_STATE(121)] = 5951,
  [SMALL_STATE(122)] = 5996,
  [SMALL_STATE(123)] = 6041,
  [SMALL_STATE(124)] = 6084,
  [SMALL_STATE(125)] = 6111,
  [SMALL_STATE(126)] = 6142,
  [SMALL_STATE(127)] = 6185,
  [SMALL_STATE(128)] = 6212,
  [SMALL_STATE(129)] = 6255,
  [SMALL_STATE(130)] = 6286,
  [SMALL_STATE(131)] = 6312,
  [SMALL_STATE(132)] = 6360,
  [SMALL_STATE(133)] = 6405,
  [SMALL_STATE(134)] = 6450,
  [SMALL_STATE(135)] = 6484,
  [SMALL_STATE(136)] = 6518,
  [SMALL_STATE(137)] = 6564,
  [SMALL_STATE(138)] = 6595,
  [SMALL_STATE(139)] = 6626,
  [SMALL_STATE(140)] = 6657,
  [SMALL_STATE(141)] = 6688,
  [SMALL_STATE(142)] = 6729,
  [SMALL_STATE(143)] = 6760,
  [SMALL_STATE(144)] = 6802,
  [SMALL_STATE(145)] = 6824,
  [SMALL_STATE(146)] = 6866,
  [SMALL_STATE(147)] = 6900,
  [SMALL_STATE(148)] = 6942,
  [SMALL_STATE(149)] = 6984,
  [SMALL_STATE(150)] = 7026,
  [SMALL_STATE(151)] = 7055,
  [SMALL_STATE(152)] = 7092,
  [SMALL_STATE(153)] = 7129,
  [SMALL_STATE(154)] = 7158,
  [SMALL_STATE(155)] = 7195,
  [SMALL_STATE(156)] = 7224,
  [SMALL_STATE(157)] = 7255,
  [SMALL_STATE(158)] = 7286,
  [SMALL_STATE(159)] = 7322,
  [SMALL_STATE(160)] = 7358,
  [SMALL_STATE(161)] = 7382,
  [SMALL_STATE(162)] = 7410,
  [SMALL_STATE(163)] = 7434,
  [SMALL_STATE(164)] = 7457,
  [SMALL_STATE(165)] = 7476,
  [SMALL_STATE(166)] = 7499,
  [SMALL_STATE(167)] = 7522,
  [SMALL_STATE(168)] = 7545,
  [SMALL_STATE(169)] = 7564,
  [SMALL_STATE(170)] = 7589,
  [SMALL_STATE(171)] = 7612,
  [SMALL_STATE(172)] = 7631,
  [SMALL_STATE(173)] = 7650,
  [SMALL_STATE(174)] = 7673,
  [SMALL_STATE(175)] = 7698,
  [SMALL_STATE(176)] = 7717,
  [SMALL_STATE(177)] = 7739,
  [SMALL_STATE(178)] = 7757,
  [SMALL_STATE(179)] = 7782,
  [SMALL_STATE(180)] = 7799,
  [SMALL_STATE(181)] = 7820,
  [SMALL_STATE(182)] = 7837,
  [SMALL_STATE(183)] = 7854,
  [SMALL_STATE(184)] = 7871,
  [SMALL_STATE(185)] = 7898,
  [SMALL_STATE(186)] = 7915,
  [SMALL_STATE(187)] = 7932,
  [SMALL_STATE(188)] = 7959,
  [SMALL_STATE(189)] = 7980,
  [SMALL_STATE(190)] = 8001,
  [SMALL_STATE(191)] = 8018,
  [SMALL_STATE(192)] = 8035,
  [SMALL_STATE(193)] = 8052,
  [SMALL_STATE(194)] = 8071,
  [SMALL_STATE(195)] = 8088,
  [SMALL_STATE(196)] = 8113,
  [SMALL_STATE(197)] = 8129,
  [SMALL_STATE(198)] = 8151,
  [SMALL_STATE(199)] = 8171,
  [SMALL_STATE(200)] = 8187,
  [SMALL_STATE(201)] = 8203,
  [SMALL_STATE(202)] = 8223,
  [SMALL_STATE(203)] = 8243,
  [SMALL_STATE(204)] = 8259,
  [SMALL_STATE(205)] = 8279,
  [SMALL_STATE(206)] = 8295,
  [SMALL_STATE(207)] = 8311,
  [SMALL_STATE(208)] = 8331,
  [SMALL_STATE(209)] = 8347,
  [SMALL_STATE(210)] = 8369,
  [SMALL_STATE(211)] = 8394,
  [SMALL_STATE(212)] = 8409,
  [SMALL_STATE(213)] = 8426,
  [SMALL_STATE(214)] = 8451,
  [SMALL_STATE(215)] = 8468,
  [SMALL_STATE(216)] = 8485,
  [SMALL_STATE(217)] = 8502,
  [SMALL_STATE(218)] = 8519,
  [SMALL_STATE(219)] = 8536,
  [SMALL_STATE(220)] = 8553,
  [SMALL_STATE(221)] = 8584,
  [SMALL_STATE(222)] = 8601,
  [SMALL_STATE(223)] = 8616,
  [SMALL_STATE(224)] = 8631,
  [SMALL_STATE(225)] = 8648,
  [SMALL_STATE(226)] = 8665,
  [SMALL_STATE(227)] = 8680,
  [SMALL_STATE(228)] = 8697,
  [SMALL_STATE(229)] = 8711,
  [SMALL_STATE(230)] = 8725,
  [SMALL_STATE(231)] = 8747,
  [SMALL_STATE(232)] = 8761,
  [SMALL_STATE(233)] = 8775,
  [SMALL_STATE(234)] = 8789,
  [SMALL_STATE(235)] = 8809,
  [SMALL_STATE(236)] = 8835,
  [SMALL_STATE(237)] = 8849,
  [SMALL_STATE(238)] = 8869,
  [SMALL_STATE(239)] = 8883,
  [SMALL_STATE(240)] = 8897,
  [SMALL_STATE(241)] = 8911,
  [SMALL_STATE(242)] = 8925,
  [SMALL_STATE(243)] = 8939,
  [SMALL_STATE(244)] = 8953,
  [SMALL_STATE(245)] = 8979,
  [SMALL_STATE(246)] = 8993,
  [SMALL_STATE(247)] = 9007,
  [SMALL_STATE(248)] = 9021,
  [SMALL_STATE(249)] = 9043,
  [SMALL_STATE(250)] = 9057,
  [SMALL_STATE(251)] = 9073,
  [SMALL_STATE(252)] = 9087,
  [SMALL_STATE(253)] = 9101,
  [SMALL_STATE(254)] = 9115,
  [SMALL_STATE(255)] = 9129,
  [SMALL_STATE(256)] = 9143,
  [SMALL_STATE(257)] = 9157,
  [SMALL_STATE(258)] = 9181,
  [SMALL_STATE(259)] = 9195,
  [SMALL_STATE(260)] = 9209,
  [SMALL_STATE(261)] = 9223,
  [SMALL_STATE(262)] = 9237,
  [SMALL_STATE(263)] = 9251,
  [SMALL_STATE(264)] = 9264,
  [SMALL_STATE(265)] = 9282,
  [SMALL_STATE(266)] = 9300,
  [SMALL_STATE(267)] = 9315,
  [SMALL_STATE(268)] = 9328,
  [SMALL_STATE(269)] = 9341,
  [SMALL_STATE(270)] = 9354,
  [SMALL_STATE(271)] = 9366,
  [SMALL_STATE(272)] = 9378,
  [SMALL_STATE(273)] = 9394,
  [SMALL_STATE(274)] = 9406,
  [SMALL_STATE(275)] = 9418,
  [SMALL_STATE(276)] = 9434,
  [SMALL_STATE(277)] = 9446,
  [SMALL_STATE(278)] = 9460,
  [SMALL_STATE(279)] = 9474,
  [SMALL_STATE(280)] = 9485,
  [SMALL_STATE(281)] = 9498,
  [SMALL_STATE(282)] = 9511,
  [SMALL_STATE(283)] = 9524,
  [SMALL_STATE(284)] = 9537,
  [SMALL_STATE(285)] = 9550,
  [SMALL_STATE(286)] = 9563,
  [SMALL_STATE(287)] = 9574,
  [SMALL_STATE(288)] = 9587,
  [SMALL_STATE(289)] = 9598,
  [SMALL_STATE(290)] = 9611,
  [SMALL_STATE(291)] = 9624,
  [SMALL_STATE(292)] = 9637,
  [SMALL_STATE(293)] = 9648,
  [SMALL_STATE(294)] = 9661,
  [SMALL_STATE(295)] = 9674,
  [SMALL_STATE(296)] = 9685,
  [SMALL_STATE(297)] = 9698,
  [SMALL_STATE(298)] = 9709,
  [SMALL_STATE(299)] = 9722,
  [SMALL_STATE(300)] = 9733,
  [SMALL_STATE(301)] = 9746,
  [SMALL_STATE(302)] = 9759,
  [SMALL_STATE(303)] = 9772,
  [SMALL_STATE(304)] = 9785,
  [SMALL_STATE(305)] = 9798,
  [SMALL_STATE(306)] = 9811,
  [SMALL_STATE(307)] = 9822,
  [SMALL_STATE(308)] = 9835,
  [SMALL_STATE(309)] = 9848,
  [SMALL_STATE(310)] = 9861,
  [SMALL_STATE(311)] = 9874,
  [SMALL_STATE(312)] = 9887,
  [SMALL_STATE(313)] = 9900,
  [SMALL_STATE(314)] = 9913,
  [SMALL_STATE(315)] = 9924,
  [SMALL_STATE(316)] = 9937,
  [SMALL_STATE(317)] = 9948,
  [SMALL_STATE(318)] = 9961,
  [SMALL_STATE(319)] = 9974,
  [SMALL_STATE(320)] = 9987,
  [SMALL_STATE(321)] = 9997,
  [SMALL_STATE(322)] = 10005,
  [SMALL_STATE(323)] = 10015,
  [SMALL_STATE(324)] = 10025,
  [SMALL_STATE(325)] = 10035,
  [SMALL_STATE(326)] = 10045,
  [SMALL_STATE(327)] = 10053,
  [SMALL_STATE(328)] = 10063,
  [SMALL_STATE(329)] = 10073,
  [SMALL_STATE(330)] = 10083,
  [SMALL_STATE(331)] = 10093,
  [SMALL_STATE(332)] = 10103,
  [SMALL_STATE(333)] = 10111,
  [SMALL_STATE(334)] = 10119,
  [SMALL_STATE(335)] = 10129,
  [SMALL_STATE(336)] = 10139,
  [SMALL_STATE(337)] = 10149,
  [SMALL_STATE(338)] = 10159,
  [SMALL_STATE(339)] = 10169,
  [SMALL_STATE(340)] = 10179,
  [SMALL_STATE(341)] = 10187,
  [SMALL_STATE(342)] = 10197,
  [SMALL_STATE(343)] = 10207,
  [SMALL_STATE(344)] = 10215,
  [SMALL_STATE(345)] = 10225,
  [SMALL_STATE(346)] = 10235,
  [SMALL_STATE(347)] = 10245,
  [SMALL_STATE(348)] = 10255,
  [SMALL_STATE(349)] = 10265,
  [SMALL_STATE(350)] = 10273,
  [SMALL_STATE(351)] = 10283,
  [SMALL_STATE(352)] = 10291,
  [SMALL_STATE(353)] = 10299,
  [SMALL_STATE(354)] = 10309,
  [SMALL_STATE(355)] = 10319,
  [SMALL_STATE(356)] = 10329,
  [SMALL_STATE(357)] = 10337,
  [SMALL_STATE(358)] = 10345,
  [SMALL_STATE(359)] = 10353,
  [SMALL_STATE(360)] = 10361,
  [SMALL_STATE(361)] = 10371,
  [SMALL_STATE(362)] = 10381,
  [SMALL_STATE(363)] = 10391,
  [SMALL_STATE(364)] = 10399,
  [SMALL_STATE(365)] = 10409,
  [SMALL_STATE(366)] = 10416,
  [SMALL_STATE(367)] = 10423,
  [SMALL_STATE(368)] = 10430,
  [SMALL_STATE(369)] = 10437,
  [SMALL_STATE(370)] = 10444,
  [SMALL_STATE(371)] = 10451,
  [SMALL_STATE(372)] = 10458,
  [SMALL_STATE(373)] = 10465,
  [SMALL_STATE(374)] = 10472,
  [SMALL_STATE(375)] = 10479,
  [SMALL_STATE(376)] = 10486,
  [SMALL_STATE(377)] = 10493,
  [SMALL_STATE(378)] = 10500,
  [SMALL_STATE(379)] = 10507,
  [SMALL_STATE(380)] = 10514,
  [SMALL_STATE(381)] = 10521,
  [SMALL_STATE(382)] = 10528,
  [SMALL_STATE(383)] = 10535,
  [SMALL_STATE(384)] = 10542,
  [SMALL_STATE(385)] = 10549,
  [SMALL_STATE(386)] = 10556,
  [SMALL_STATE(387)] = 10563,
  [SMALL_STATE(388)] = 10570,
  [SMALL_STATE(389)] = 10577,
  [SMALL_STATE(390)] = 10584,
  [SMALL_STATE(391)] = 10591,
  [SMALL_STATE(392)] = 10598,
  [SMALL_STATE(393)] = 10605,
  [SMALL_STATE(394)] = 10612,
  [SMALL_STATE(395)] = 10619,
  [SMALL_STATE(396)] = 10626,
  [SMALL_STATE(397)] = 10633,
  [SMALL_STATE(398)] = 10640,
  [SMALL_STATE(399)] = 10647,
  [SMALL_STATE(400)] = 10654,
  [SMALL_STATE(401)] = 10661,
  [SMALL_STATE(402)] = 10668,
  [SMALL_STATE(403)] = 10675,
  [SMALL_STATE(404)] = 10682,
  [SMALL_STATE(405)] = 10689,
  [SMALL_STATE(406)] = 10696,
  [SMALL_STATE(407)] = 10703,
  [SMALL_STATE(408)] = 10710,
  [SMALL_STATE(409)] = 10717,
  [SMALL_STATE(410)] = 10724,
  [SMALL_STATE(411)] = 10731,
  [SMALL_STATE(412)] = 10738,
  [SMALL_STATE(413)] = 10745,
  [SMALL_STATE(414)] = 10752,
  [SMALL_STATE(415)] = 10759,
  [SMALL_STATE(416)] = 10766,
  [SMALL_STATE(417)] = 10773,
  [SMALL_STATE(418)] = 10780,
  [SMALL_STATE(419)] = 10787,
  [SMALL_STATE(420)] = 10794,
  [SMALL_STATE(421)] = 10801,
  [SMALL_STATE(422)] = 10808,
  [SMALL_STATE(423)] = 10815,
  [SMALL_STATE(424)] = 10822,
  [SMALL_STATE(425)] = 10829,
  [SMALL_STATE(426)] = 10836,
  [SMALL_STATE(427)] = 10843,
  [SMALL_STATE(428)] = 10850,
  [SMALL_STATE(429)] = 10857,
  [SMALL_STATE(430)] = 10864,
  [SMALL_STATE(431)] = 10871,
  [SMALL_STATE(432)] = 10878,
  [SMALL_STATE(433)] = 10885,
  [SMALL_STATE(434)] = 10892,
  [SMALL_STATE(435)] = 10899,
  [SMALL_STATE(436)] = 10906,
  [SMALL_STATE(437)] = 10913,
  [SMALL_STATE(438)] = 10920,
  [SMALL_STATE(439)] = 10927,
  [SMALL_STATE(440)] = 10934,
  [SMALL_STATE(441)] = 10941,
  [SMALL_STATE(442)] = 10948,
  [SMALL_STATE(443)] = 10955,
  [SMALL_STATE(444)] = 10962,
  [SMALL_STATE(445)] = 10969,
  [SMALL_STATE(446)] = 10976,
  [SMALL_STATE(447)] = 10983,
  [SMALL_STATE(448)] = 10990,
  [SMALL_STATE(449)] = 10997,
  [SMALL_STATE(450)] = 11004,
  [SMALL_STATE(451)] = 11011,
  [SMALL_STATE(452)] = 11018,
  [SMALL_STATE(453)] = 11025,
  [SMALL_STATE(454)] = 11032,
  [SMALL_STATE(455)] = 11039,
  [SMALL_STATE(456)] = 11046,
  [SMALL_STATE(457)] = 11053,
  [SMALL_STATE(458)] = 11060,
  [SMALL_STATE(459)] = 11067,
  [SMALL_STATE(460)] = 11074,
  [SMALL_STATE(461)] = 11081,
  [SMALL_STATE(462)] = 11088,
  [SMALL_STATE(463)] = 11095,
  [SMALL_STATE(464)] = 11102,
  [SMALL_STATE(465)] = 11109,
  [SMALL_STATE(466)] = 11116,
  [SMALL_STATE(467)] = 11123,
  [SMALL_STATE(468)] = 11130,
  [SMALL_STATE(469)] = 11137,
  [SMALL_STATE(470)] = 11144,
  [SMALL_STATE(471)] = 11151,
  [SMALL_STATE(472)] = 11158,
  [SMALL_STATE(473)] = 11165,
  [SMALL_STATE(474)] = 11172,
  [SMALL_STATE(475)] = 11179,
  [SMALL_STATE(476)] = 11186,
  [SMALL_STATE(477)] = 11193,
  [SMALL_STATE(478)] = 11200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 8),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3, .production_id = 9),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3, .production_id = 9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 20),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 20),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 21),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 21),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 3, .production_id = 22),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 28),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 28),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(443),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(329),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(441),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(71),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(478),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(474),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5, .production_id = 14),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 18),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 18),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(341),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(257),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(393),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(399),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(102),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(179),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(470),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6, .production_id = 16),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 8, .production_id = 23),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(172),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(473),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(322),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 16),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 23),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5, .production_id = 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 24),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 29),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 6, .production_id = 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(341),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(102),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(4),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(98),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 30),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(96),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3, .production_id = 11),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 3, .production_id = 40),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 12),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 3, .production_id = 41),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(344),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_action, 2, .production_id = 45),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 19),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 26),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 19),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 26),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2), SHIFT_REPEAT(209),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2), SHIFT_REPEAT(222),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 32),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 5),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 3, .production_id = 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 27),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7, .production_id = 9),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7, .production_id = 27),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 32),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 1, .production_id = 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 6, .production_id = 9),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 5, .production_id = 13),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 33),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 37),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 38),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 39),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 19),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 35),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 34),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_schema_statement, 6, .production_id = 17),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 42),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 43),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 44),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_schema_statement, 3, .production_id = 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 12, .production_id = 46),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 26),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 4, .production_id = 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(436),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(187),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(265),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(76),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(334),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 7, .production_id = 36),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 31),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6, .production_id = 36),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 6),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 25),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1107] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
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
