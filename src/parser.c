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
#define STATE_COUNT 469
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 190
#define ALIAS_COUNT 8
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 46

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
  aux_sym_grant_statement_token1 = 22,
  aux_sym_grant_statement_token2 = 23,
  aux_sym_grant_statement_token3 = 24,
  aux_sym_grant_statement_token4 = 25,
  aux_sym_grant_statement_token5 = 26,
  aux_sym_grant_statement_token6 = 27,
  aux_sym_grant_statement_token7 = 28,
  aux_sym_grant_statement_token8 = 29,
  aux_sym_grant_statement_token9 = 30,
  aux_sym_grant_statement_token10 = 31,
  aux_sym_grant_statement_token11 = 32,
  aux_sym_grant_statement_token12 = 33,
  aux_sym_grant_statement_token13 = 34,
  aux_sym_grant_statement_token14 = 35,
  aux_sym_grant_statement_token15 = 36,
  aux_sym_grant_statement_token16 = 37,
  aux_sym_grant_statement_token17 = 38,
  aux_sym_grant_statement_token18 = 39,
  aux_sym_grant_statement_token19 = 40,
  aux_sym_grant_statement_token20 = 41,
  aux_sym_create_domain_statement_token1 = 42,
  aux_sym_create_type_statement_token1 = 43,
  aux_sym_create_index_statement_token1 = 44,
  anon_sym_CONSTRAINT = 45,
  aux_sym_column_default_token1 = 46,
  aux_sym_table_constraint_check_token1 = 47,
  aux_sym_table_constraint_foreign_key_token1 = 48,
  aux_sym_table_constraint_foreign_key_token2 = 49,
  aux_sym_table_constraint_unique_token1 = 50,
  aux_sym_table_constraint_primary_key_token1 = 51,
  aux_sym_using_clause_token1 = 52,
  aux_sym_group_by_clause_token1 = 53,
  aux_sym_order_by_clause_token1 = 54,
  aux_sym_where_clause_token1 = 55,
  aux_sym_from_clause_token1 = 56,
  aux_sym_join_type_token1 = 57,
  aux_sym_join_type_token2 = 58,
  aux_sym_join_type_token3 = 59,
  aux_sym_join_type_token4 = 60,
  aux_sym_join_type_token5 = 61,
  aux_sym_join_clause_token1 = 62,
  aux_sym_set_clause_token1 = 63,
  aux_sym_insert_statement_token1 = 64,
  aux_sym_values_clause_token1 = 65,
  aux_sym_in_expression_token1 = 66,
  aux_sym__constraint_action_token1 = 67,
  aux_sym__constraint_action_token2 = 68,
  aux_sym__constraint_action_token3 = 69,
  anon_sym_LT = 70,
  anon_sym_LT_EQ = 71,
  anon_sym_LT_GT = 72,
  anon_sym_GT = 73,
  anon_sym_GT_EQ = 74,
  aux_sym_is_expression_token1 = 75,
  aux_sym_distinct_from_token1 = 76,
  aux_sym_boolean_expression_token1 = 77,
  aux_sym_boolean_expression_token2 = 78,
  aux_sym_TRUE_token1 = 79,
  aux_sym_FALSE_token1 = 80,
  aux_sym_number_token1 = 81,
  sym_identifier = 82,
  aux_sym_string_token1 = 83,
  aux_sym_string_token2 = 84,
  anon_sym_DASH_GT_GT = 85,
  aux_sym_ordered_expression_token1 = 86,
  aux_sym_ordered_expression_token2 = 87,
  anon_sym_LBRACK = 88,
  anon_sym_RBRACK = 89,
  anon_sym_COLON_COLON = 90,
  sym_comment = 91,
  anon_sym_TILDE = 92,
  anon_sym_PLUS = 93,
  anon_sym_DOLLAR = 94,
  sym_source_file = 95,
  sym__statement = 96,
  sym_create_function_statement = 97,
  sym__function_optimizer_hint = 98,
  sym__function_language = 99,
  sym__create_function_return_type = 100,
  sym_setof = 101,
  sym_constrained_type = 102,
  sym_create_function_parameter = 103,
  sym_create_function_parameters = 104,
  sym_function_body = 105,
  sym_create_schema_statement = 106,
  sym_grant_statement = 107,
  sym_create_domain_statement = 108,
  sym_create_type_statement = 109,
  sym_create_index_statement = 110,
  sym_create_table_column_parameter = 111,
  sym_named_constraint = 112,
  sym_column_default = 113,
  sym_create_table_parameters = 114,
  sym__table_constraint = 115,
  sym_table_constraint_check = 116,
  sym_table_constraint_foreign_key = 117,
  sym_table_constraint_unique = 118,
  sym_table_constraint_primary_key = 119,
  sym_primary_key_constraint = 120,
  sym_create_table_statement = 121,
  sym_using_clause = 122,
  sym_index_table_parameters = 123,
  sym_select_statement = 124,
  sym_group_by_clause_body = 125,
  sym_group_by_clause = 126,
  sym_order_by_clause_body = 127,
  sym_order_by_clause = 128,
  sym_where_clause = 129,
  sym__aliased_expression = 130,
  sym__aliasable_expression = 131,
  sym_select_clause_body = 132,
  sym_select_clause = 133,
  sym_from_clause = 134,
  sym_join_type = 135,
  sym_join_clause = 136,
  sym_select_subexpression = 137,
  sym_update_statement = 138,
  sym_set_clause = 139,
  sym_set_clause_body = 140,
  sym_assigment_expression = 141,
  sym_insert_statement = 142,
  sym_values_clause = 143,
  sym_values_clause_body = 144,
  sym_in_expression = 145,
  sym_tuple = 146,
  sym_references_constraint = 147,
  sym_on_update_action = 148,
  sym_on_delete_action = 149,
  sym__constraint_action = 150,
  sym_unique_constraint = 151,
  sym_null_constraint = 152,
  sym_check_constraint = 153,
  sym_parameter = 154,
  sym_parameters = 155,
  sym_function_call = 156,
  sym_comparison_operator = 157,
  sym__parenthesized_expression = 158,
  sym_is_expression = 159,
  sym_distinct_from = 160,
  sym_boolean_expression = 161,
  sym_NULL = 162,
  sym_TRUE = 163,
  sym_FALSE = 164,
  sym_number = 165,
  sym_string = 166,
  sym_field_access = 167,
  sym_ordered_expression = 168,
  sym__type_alias = 169,
  sym_array_type = 170,
  sym__type = 171,
  sym_type_cast = 172,
  sym_binary_expression = 173,
  sym_argument_reference = 174,
  sym__expression = 175,
  aux_sym_source_file_repeat1 = 176,
  aux_sym_create_function_statement_repeat1 = 177,
  aux_sym_create_function_parameters_repeat1 = 178,
  aux_sym_grant_statement_repeat1 = 179,
  aux_sym_create_domain_statement_repeat1 = 180,
  aux_sym_create_table_column_parameter_repeat1 = 181,
  aux_sym_create_table_parameters_repeat1 = 182,
  aux_sym_table_constraint_foreign_key_repeat1 = 183,
  aux_sym_index_table_parameters_repeat1 = 184,
  aux_sym_select_statement_repeat1 = 185,
  aux_sym_group_by_clause_body_repeat1 = 186,
  aux_sym_select_clause_body_repeat1 = 187,
  aux_sym_set_clause_body_repeat1 = 188,
  aux_sym_parameters_repeat1 = 189,
  anon_alias_sym_CREATE_SCHEMA = 190,
  anon_alias_sym_CREATE_TABLE = 191,
  anon_alias_sym_DELETE = 192,
  anon_alias_sym_NULL = 193,
  anon_alias_sym_ON_UPDATE = 194,
  alias_sym_default = 195,
  alias_sym_language = 196,
  alias_sym_type = 197,
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
  [aux_sym_grant_statement_token16] = "TO",
  [aux_sym_grant_statement_token17] = "GROUP",
  [aux_sym_grant_statement_token18] = "PUBLIC",
  [aux_sym_grant_statement_token19] = "WITH_GRANT_OPTION",
  [aux_sym_grant_statement_token20] = "WITH_GRANT_OPTION",
  [aux_sym_create_domain_statement_token1] = "CREATE_DOMAIN",
  [aux_sym_create_type_statement_token1] = "CREATE_TYPE",
  [aux_sym_create_index_statement_token1] = "INDEX",
  [anon_sym_CONSTRAINT] = "CONSTRAINT",
  [aux_sym_column_default_token1] = "DEFAULT",
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
  [aux_sym_set_clause_token1] = "SET",
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
  [aux_sym_grant_statement_token19] = aux_sym_grant_statement_token19,
  [aux_sym_grant_statement_token20] = aux_sym_grant_statement_token19,
  [aux_sym_create_domain_statement_token1] = aux_sym_create_domain_statement_token1,
  [aux_sym_create_type_statement_token1] = aux_sym_create_type_statement_token1,
  [aux_sym_create_index_statement_token1] = aux_sym_create_index_statement_token1,
  [anon_sym_CONSTRAINT] = anon_sym_CONSTRAINT,
  [aux_sym_column_default_token1] = aux_sym_column_default_token1,
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
  [aux_sym_set_clause_token1] = aux_sym_set_clause_token1,
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
  [aux_sym_grant_statement_token20] = {
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
  [aux_sym_set_clause_token1] = {
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
  [6] = {.index = 0, .length = 1},
  [7] = {.index = 1, .length = 1},
  [9] = {.index = 2, .length = 1},
  [10] = {.index = 3, .length = 1},
  [14] = {.index = 4, .length = 2},
  [17] = {.index = 6, .length = 2},
  [18] = {.index = 8, .length = 2},
  [19] = {.index = 10, .length = 3},
  [20] = {.index = 13, .length = 1},
  [22] = {.index = 14, .length = 1},
  [24] = {.index = 15, .length = 1},
  [25] = {.index = 16, .length = 2},
  [26] = {.index = 18, .length = 1},
  [27] = {.index = 19, .length = 2},
  [30] = {.index = 21, .length = 1},
  [31] = {.index = 22, .length = 1},
  [34] = {.index = 2, .length = 1},
  [37] = {.index = 18, .length = 1},
  [38] = {.index = 2, .length = 1},
  [39] = {.index = 23, .length = 1},
  [40] = {.index = 23, .length = 1},
  [41] = {.index = 22, .length = 1},
  [43] = {.index = 18, .length = 1},
  [45] = {.index = 22, .length = 1},
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
    {field_name, 0},
    {field_type, 1},
  [8] =
    {field_name, 2},
    {field_table, 4},
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
    {field_type, 3},
  [19] =
    {field_elements, 1},
    {field_elements, 2},
  [21] =
    {field_order, 1},
  [22] =
    {field_type, 4},
  [23] =
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
  [15] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [16] = {
    [0] = anon_alias_sym_CREATE_SCHEMA,
    [1] = anon_alias_sym_CREATE_SCHEMA,
    [3] = aux_sym_create_schema_statement_token2,
  },
  [21] = {
    [1] = aux_sym_distinct_from_token1,
  },
  [22] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [23] = {
    [2] = alias_sym_default,
  },
  [28] = {
    [3] = alias_sym_default,
  },
  [29] = {
    [1] = alias_sym_language,
  },
  [32] = {
    [6] = aux_sym_grant_statement_token19,
    [7] = aux_sym_grant_statement_token19,
  },
  [33] = {
    [6] = aux_sym_grant_statement_token19,
    [7] = aux_sym_grant_statement_token19,
    [8] = aux_sym_grant_statement_token19,
  },
  [34] = {
    [6] = aux_sym_grant_statement_token19,
    [7] = aux_sym_grant_statement_token19,
    [8] = aux_sym_grant_statement_token19,
  },
  [35] = {
    [1] = aux_sym_table_constraint_foreign_key_token1,
  },
  [36] = {
    [7] = aux_sym_grant_statement_token19,
    [8] = aux_sym_grant_statement_token19,
    [9] = aux_sym_grant_statement_token19,
  },
  [37] = {
    [7] = aux_sym_grant_statement_token19,
    [8] = aux_sym_grant_statement_token19,
    [9] = aux_sym_grant_statement_token19,
  },
  [38] = {
    [7] = aux_sym_grant_statement_token19,
    [8] = aux_sym_grant_statement_token19,
    [9] = aux_sym_grant_statement_token19,
  },
  [39] = {
    [0] = anon_alias_sym_ON_UPDATE,
    [1] = anon_alias_sym_ON_UPDATE,
  },
  [40] = {
    [0] = aux_sym_grant_statement_token7,
  },
  [41] = {
    [8] = aux_sym_grant_statement_token19,
    [9] = aux_sym_grant_statement_token19,
    [10] = aux_sym_grant_statement_token19,
  },
  [42] = {
    [8] = aux_sym_grant_statement_token19,
    [9] = aux_sym_grant_statement_token19,
    [10] = aux_sym_grant_statement_token19,
  },
  [43] = {
    [8] = aux_sym_grant_statement_token19,
    [9] = aux_sym_grant_statement_token19,
    [10] = aux_sym_grant_statement_token19,
  },
  [44] = {
    [0] = aux_sym__constraint_action_token3,
  },
  [45] = {
    [9] = aux_sym_grant_statement_token19,
    [10] = aux_sym_grant_statement_token19,
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
      if (eof) ADVANCE(331);
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '+') ADVANCE(595);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(429);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '>') ADVANCE(432);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(588);
      if (lookahead == '\\') SKIP(321)
      if (lookahead == ']') ADVANCE(589);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == '~') ADVANCE(594);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(316);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(243);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(126);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(262);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(65);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(25)
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
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(445);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(540);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(525);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(348);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '*') ADVANCE(583);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '-') ADVANCE(581);
      if (lookahead == '/') ADVANCE(579);
      if (lookahead == '\\') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(580);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '[') ADVANCE(588);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(591);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(593);
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(495);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(529);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(542);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(540);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(590);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(585);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(389);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 84:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(586);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 154:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 155:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 156:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 157:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 158:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(283);
      END_STATE();
    case 159:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 161:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 162:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 164:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 165:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 167:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 168:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 169:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 170:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(384);
      END_STATE();
    case 171:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 172:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 173:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 174:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 175:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(285);
      END_STATE();
    case 176:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 192:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(391);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(347);
      END_STATE();
    case 194:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(309);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 213:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 214:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 215:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 216:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 217:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 218:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 219:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(347);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(294);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 249:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 250:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 251:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(311);
      END_STATE();
    case 252:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(360);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(435);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 305:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 306:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 307:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 308:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 309:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 314:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(186);
      END_STATE();
    case 315:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(388);
      END_STATE();
    case 316:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(401);
      END_STATE();
    case 317:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(395);
      END_STATE();
    case 318:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(398);
      END_STATE();
    case 319:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(582);
      END_STATE();
    case 320:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 321:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(320)
      END_STATE();
    case 322:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') SKIP(329)
      END_STATE();
    case 323:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') SKIP(329)
      if (lookahead == '\r') SKIP(322)
      END_STATE();
    case 324:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') SKIP(328)
      END_STATE();
    case 325:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') SKIP(328)
      if (lookahead == '\r') SKIP(324)
      END_STATE();
    case 326:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') SKIP(330)
      END_STATE();
    case 327:
      if (eof) ADVANCE(331);
      if (lookahead == '\n') SKIP(330)
      if (lookahead == '\r') SKIP(326)
      END_STATE();
    case 328:
      if (eof) ADVANCE(331);
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') SKIP(325)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(445);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(534);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(525);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(466);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(479);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(531);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(328)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 329:
      if (eof) ADVANCE(331);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '+') ADVANCE(595);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(429);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '>') ADVANCE(432);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == '[') ADVANCE(588);
      if (lookahead == '\\') SKIP(323)
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == '~') ADVANCE(594);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(259);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(214);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(243);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(245);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(329)
      END_STATE();
    case 330:
      if (eof) ADVANCE(331);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '+') ADVANCE(595);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(429);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '>') ADVANCE(432);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == '[') ADVANCE(588);
      if (lookahead == '\\') SKIP(327)
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == '~') ADVANCE(594);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(266);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(330)
      END_STATE();
    case 331:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token4);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token2);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token2);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token3);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token3);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_create_schema_statement_token4);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_grant_statement_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_grant_statement_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_grant_statement_token2);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_grant_statement_token3);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_grant_statement_token4);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_grant_statement_token4);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_grant_statement_token5);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_grant_statement_token5);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_grant_statement_token6);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_grant_statement_token6);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_grant_statement_token7);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_grant_statement_token8);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_grant_statement_token9);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_grant_statement_token10);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_grant_statement_token11);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_grant_statement_token12);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_grant_statement_token13);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_grant_statement_token13);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_grant_statement_token14);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_grant_statement_token14);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_grant_statement_token15);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_grant_statement_token15);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_grant_statement_token16);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_grant_statement_token17);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_grant_statement_token17);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_grant_statement_token18);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_grant_statement_token18);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_grant_statement_token19);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_grant_statement_token20);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token2);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_join_type_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_join_type_token2);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_join_type_token3);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_join_type_token4);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_join_type_token5);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_join_clause_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_set_clause_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_values_clause_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead == '>') ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(504);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(518);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead == '\r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(575);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(575);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead == '\'') ADVANCE(593);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(575);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(574);
      if (lookahead == '/') ADVANCE(572);
      if (lookahead == '\\') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(575);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == '\r') ADVANCE(577);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '$') ADVANCE(592);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '*') ADVANCE(584);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '-') ADVANCE(581);
      if (lookahead == '/') ADVANCE(579);
      if (lookahead == '\\') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(580);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '*') ADVANCE(583);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '*') ADVANCE(583);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '$') ADVANCE(593);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(348);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 329},
  [3] = {.lex_state = 329},
  [4] = {.lex_state = 329},
  [5] = {.lex_state = 328},
  [6] = {.lex_state = 329},
  [7] = {.lex_state = 329},
  [8] = {.lex_state = 329},
  [9] = {.lex_state = 329},
  [10] = {.lex_state = 329},
  [11] = {.lex_state = 329},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 330},
  [16] = {.lex_state = 329},
  [17] = {.lex_state = 330},
  [18] = {.lex_state = 330},
  [19] = {.lex_state = 330},
  [20] = {.lex_state = 330},
  [21] = {.lex_state = 330},
  [22] = {.lex_state = 330},
  [23] = {.lex_state = 330},
  [24] = {.lex_state = 329},
  [25] = {.lex_state = 330},
  [26] = {.lex_state = 330},
  [27] = {.lex_state = 330},
  [28] = {.lex_state = 330},
  [29] = {.lex_state = 329},
  [30] = {.lex_state = 330},
  [31] = {.lex_state = 330},
  [32] = {.lex_state = 330},
  [33] = {.lex_state = 330},
  [34] = {.lex_state = 329},
  [35] = {.lex_state = 329},
  [36] = {.lex_state = 329},
  [37] = {.lex_state = 330},
  [38] = {.lex_state = 329},
  [39] = {.lex_state = 329},
  [40] = {.lex_state = 329},
  [41] = {.lex_state = 329},
  [42] = {.lex_state = 330},
  [43] = {.lex_state = 330},
  [44] = {.lex_state = 330},
  [45] = {.lex_state = 329},
  [46] = {.lex_state = 329},
  [47] = {.lex_state = 329},
  [48] = {.lex_state = 330},
  [49] = {.lex_state = 330},
  [50] = {.lex_state = 330},
  [51] = {.lex_state = 329},
  [52] = {.lex_state = 329},
  [53] = {.lex_state = 329},
  [54] = {.lex_state = 329},
  [55] = {.lex_state = 329},
  [56] = {.lex_state = 330},
  [57] = {.lex_state = 330},
  [58] = {.lex_state = 329},
  [59] = {.lex_state = 330},
  [60] = {.lex_state = 329},
  [61] = {.lex_state = 330},
  [62] = {.lex_state = 329},
  [63] = {.lex_state = 330},
  [64] = {.lex_state = 330},
  [65] = {.lex_state = 329},
  [66] = {.lex_state = 329},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 330},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 25},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 25},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 25},
  [75] = {.lex_state = 25},
  [76] = {.lex_state = 25},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 25},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 25},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 25},
  [89] = {.lex_state = 329},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 330},
  [106] = {.lex_state = 329},
  [107] = {.lex_state = 329},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 330},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 330},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 330},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 330},
  [131] = {.lex_state = 330},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 330},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 330},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 330},
  [141] = {.lex_state = 330},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 330},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 330},
  [146] = {.lex_state = 330},
  [147] = {.lex_state = 330},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 330},
  [154] = {.lex_state = 330},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
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
  [174] = {.lex_state = 38},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 32},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 38},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 31},
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
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 32},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 29},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 39},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 39},
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
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
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
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 29},
  [259] = {.lex_state = 29},
  [260] = {.lex_state = 40},
  [261] = {.lex_state = 40},
  [262] = {.lex_state = 29},
  [263] = {.lex_state = 40},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 29},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 29},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 29},
  [271] = {.lex_state = 29},
  [272] = {.lex_state = 29},
  [273] = {.lex_state = 41},
  [274] = {.lex_state = 41},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 29},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 41},
  [286] = {.lex_state = 41},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 41},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 41},
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
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 29},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 42},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 29},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 29},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 29},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 29},
  [363] = {.lex_state = 29},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 29},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 29},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 29},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 29},
  [390] = {.lex_state = 29},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 29},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 32},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 29},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 29},
  [412] = {.lex_state = 29},
  [413] = {.lex_state = 29},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 29},
  [416] = {.lex_state = 29},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 329},
  [422] = {.lex_state = 29},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 29},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 29},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 29},
  [435] = {.lex_state = 29},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 29},
  [438] = {.lex_state = 29},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 29},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 573},
  [446] = {.lex_state = 30},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 32},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 29},
  [454] = {.lex_state = 29},
  [455] = {.lex_state = 29},
  [456] = {.lex_state = 29},
  [457] = {.lex_state = 29},
  [458] = {.lex_state = 29},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 29},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 29},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 30},
  [466] = {.lex_state = 573},
  [467] = {.lex_state = 329},
  [468] = {.lex_state = 29},
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
    [aux_sym_grant_statement_token20] = ACTIONS(1),
    [aux_sym_create_domain_statement_token1] = ACTIONS(1),
    [aux_sym_create_type_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token1] = ACTIONS(1),
    [anon_sym_CONSTRAINT] = ACTIONS(1),
    [aux_sym_column_default_token1] = ACTIONS(1),
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
    [aux_sym_set_clause_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(464),
    [sym__statement] = STATE(125),
    [sym_create_function_statement] = STATE(235),
    [sym_create_schema_statement] = STATE(235),
    [sym_grant_statement] = STATE(235),
    [sym_create_domain_statement] = STATE(235),
    [sym_create_type_statement] = STATE(235),
    [sym_create_index_statement] = STATE(235),
    [sym_create_table_statement] = STATE(235),
    [sym_select_statement] = STATE(235),
    [sym_select_clause] = STATE(83),
    [sym_update_statement] = STATE(235),
    [sym_insert_statement] = STATE(235),
    [aux_sym_source_file_repeat1] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_function_statement_token1] = ACTIONS(7),
    [aux_sym_grant_statement_token1] = ACTIONS(9),
    [aux_sym_grant_statement_token4] = ACTIONS(11),
    [aux_sym_grant_statement_token5] = ACTIONS(13),
    [aux_sym_grant_statement_token6] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(17), 42,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [54] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(21), 42,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(25), 41,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [161] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(126), 1,
      sym_select_clause_body,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(115), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
    ACTIONS(31), 14,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(51), 38,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(55), 38,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(59), 37,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [394] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(69), 38,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(73), 38,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token17,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [544] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(126), 1,
      sym_select_clause_body,
    STATE(115), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(31), 9,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(40), 13,
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
  [619] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(126), 1,
      sym_select_clause_body,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
    STATE(115), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(31), 9,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(40), 13,
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
  [692] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(126), 1,
      sym_select_clause_body,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
    STATE(115), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(31), 9,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
    STATE(40), 13,
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
  [765] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(91), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(77), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [910] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(77), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [1429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1555] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(121), 1,
      aux_sym_in_expression_token1,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(115), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym__constraint_action_token3,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(131), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [1651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [1693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(139), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [1777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [1819] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(115), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [1873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(77), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [1915] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(163), 1,
      aux_sym_function_body_token1,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(161), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [1973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(95), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(99), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(175), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(171), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2481] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(179), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(181), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2577] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(121), 1,
      aux_sym_in_expression_token1,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(179), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym__constraint_action_token3,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(187), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(111), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(187), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(185), 29,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 4,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(185), 30,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
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
  [2887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 3,
      aux_sym_in_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
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
  [2975] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(189), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [3028] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(191), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [3081] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_select_clause,
    STATE(154), 1,
      sym__expression,
    STATE(425), 1,
      sym_select_statement,
    STATE(23), 3,
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
  [3144] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(121), 1,
      aux_sym_in_expression_token1,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(213), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [3195] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_select_clause,
    STATE(153), 1,
      sym__expression,
    STATE(449), 1,
      sym_select_statement,
    STATE(23), 3,
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
  [3258] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [3316] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(123), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [3374] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(130), 1,
      sym__expression,
    STATE(281), 1,
      sym_ordered_expression,
    STATE(23), 3,
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
  [3431] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__expression,
    STATE(23), 3,
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
  [3488] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(143), 1,
      sym__expression,
    STATE(360), 1,
      sym_values_clause_body,
    STATE(23), 3,
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
  [3545] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym__expression,
    STATE(23), 3,
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
  [3602] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(131), 1,
      sym__expression,
    STATE(351), 1,
      sym_ordered_expression,
    STATE(23), 3,
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
  [3659] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym__expression,
    STATE(194), 1,
      sym_order_by_clause_body,
    STATE(23), 3,
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
  [3716] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(89), 1,
      sym__expression,
    STATE(177), 1,
      sym_group_by_clause_body,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [3773] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [3827] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym__expression,
    STATE(23), 3,
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
  [3881] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [3935] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym__expression,
    STATE(23), 3,
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
  [3989] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_where_clause_token1,
    ACTIONS(229), 1,
      aux_sym_from_clause_token1,
    ACTIONS(231), 1,
      aux_sym_join_type_token1,
    ACTIONS(235), 1,
      aux_sym_join_clause_token1,
    STATE(108), 1,
      sym_from_clause,
    STATE(151), 1,
      sym_where_clause,
    STATE(171), 1,
      sym_group_by_clause,
    STATE(196), 1,
      sym_order_by_clause,
    STATE(436), 1,
      sym_join_type,
    STATE(111), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(233), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(221), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [4047] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [4101] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [4155] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [4209] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym__expression,
    STATE(23), 3,
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
  [4263] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(146), 1,
      sym__expression,
    STATE(23), 3,
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
  [4317] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(237), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [4369] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(147), 1,
      sym__expression,
    STATE(23), 3,
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
  [4423] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [4477] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(109), 1,
      sym__expression,
    STATE(23), 3,
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
  [4531] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(154), 1,
      sym__expression,
    STATE(23), 3,
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
  [4585] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(47), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [4639] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym__expression,
    STATE(23), 3,
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
  [4693] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(136), 1,
      sym__expression,
    STATE(23), 3,
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
  [4747] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(140), 1,
      sym__expression,
    STATE(23), 3,
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
  [4801] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [4855] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym__expression,
    STATE(23), 3,
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
  [4909] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(145), 1,
      sym__expression,
    STATE(23), 3,
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
  [4963] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(114), 1,
      sym__expression,
    STATE(23), 3,
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
  [5017] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym__expression,
    STATE(23), 3,
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
  [5071] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(203), 1,
      aux_sym_TRUE_token1,
    ACTIONS(205), 1,
      aux_sym_FALSE_token1,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    STATE(120), 1,
      sym__expression,
    STATE(23), 3,
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
  [5125] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym__expression,
    STATE(24), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(40), 13,
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
  [5179] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(121), 1,
      aux_sym_in_expression_token1,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(241), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [5230] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(245), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [5277] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(151), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(159), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(247), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
  [5324] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_where_clause_token1,
    ACTIONS(231), 1,
      aux_sym_join_type_token1,
    ACTIONS(235), 1,
      aux_sym_join_clause_token1,
    STATE(150), 1,
      sym_where_clause,
    STATE(165), 1,
      sym_group_by_clause,
    STATE(199), 1,
      sym_order_by_clause,
    STATE(436), 1,
      sym_join_type,
    STATE(110), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(233), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [5376] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(121), 1,
      aux_sym_in_expression_token1,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [5422] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_where_clause_token1,
    ACTIONS(231), 1,
      aux_sym_join_type_token1,
    ACTIONS(235), 1,
      aux_sym_join_clause_token1,
    STATE(152), 1,
      sym_where_clause,
    STATE(169), 1,
      sym_group_by_clause,
    STATE(184), 1,
      sym_order_by_clause,
    STATE(436), 1,
      sym_join_type,
    STATE(117), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(233), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(251), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [5474] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(227), 1,
      aux_sym_where_clause_token1,
    ACTIONS(231), 1,
      aux_sym_join_type_token1,
    ACTIONS(235), 1,
      aux_sym_join_clause_token1,
    STATE(150), 1,
      sym_where_clause,
    STATE(165), 1,
      sym_group_by_clause,
    STATE(199), 1,
      sym_order_by_clause,
    STATE(436), 1,
      sym_join_type,
    STATE(117), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(233), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [5526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 23,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [5555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 23,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [5584] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(121), 1,
      aux_sym_in_expression_token1,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [5628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(259), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(263), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5690] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_join_type_token1,
    ACTIONS(273), 1,
      aux_sym_join_clause_token1,
    STATE(436), 1,
      sym_join_type,
    STATE(117), 2,
      sym_join_clause,
      aux_sym_select_statement_repeat1,
    ACTIONS(270), 3,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
    ACTIONS(265), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
  [5727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(276), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5758] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(285), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(287), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(289), 1,
      aux_sym_column_default_token1,
    ACTIONS(291), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(293), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(295), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(128), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5806] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(121), 1,
      aux_sym_in_expression_token1,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [5848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(299), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(303), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [5960] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(9), 1,
      aux_sym_grant_statement_token1,
    ACTIONS(11), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(13), 1,
      aux_sym_grant_statement_token5,
    ACTIONS(15), 1,
      aux_sym_grant_statement_token6,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_select_clause,
    STATE(127), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(235), 10,
      sym_create_function_statement,
      sym_create_schema_statement,
      sym_grant_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [6001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token17,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_join_type_token1,
      aux_sym_join_type_token2,
      aux_sym_join_type_token3,
      aux_sym_join_type_token4,
      aux_sym_join_clause_token1,
  [6026] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(314), 1,
      aux_sym_grant_statement_token1,
    ACTIONS(317), 1,
      aux_sym_grant_statement_token4,
    ACTIONS(320), 1,
      aux_sym_grant_statement_token5,
    ACTIONS(323), 1,
      aux_sym_grant_statement_token6,
    STATE(83), 1,
      sym_select_clause,
    STATE(127), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(235), 10,
      sym_create_function_statement,
      sym_create_schema_statement,
      sym_grant_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [6067] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(285), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(287), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(289), 1,
      aux_sym_column_default_token1,
    ACTIONS(291), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(293), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(295), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(129), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [6112] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(333), 1,
      aux_sym_grant_statement_token9,
    ACTIONS(336), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(339), 1,
      aux_sym_column_default_token1,
    ACTIONS(342), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(345), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(348), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(351), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(129), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [6157] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    STATE(288), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(360), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6203] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(360), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6244] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(148), 1,
      sym_null_constraint,
    ACTIONS(364), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6277] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(148), 1,
      sym_null_constraint,
    ACTIONS(366), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6310] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym__function_language_token1,
    ACTIONS(378), 1,
      aux_sym_function_body_token1,
    ACTIONS(372), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(135), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(370), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6382] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym__function_language_token1,
    ACTIONS(389), 1,
      aux_sym_function_body_token1,
    ACTIONS(385), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(135), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(383), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym__function_language_token1,
    ACTIONS(389), 1,
      aux_sym_function_body_token1,
    ACTIONS(385), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(139), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6484] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym__function_language_token1,
    ACTIONS(389), 1,
      aux_sym_function_body_token1,
    ACTIONS(385), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(135), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6514] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6556] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym__function_language_token1,
    ACTIONS(389), 1,
      aux_sym_function_body_token1,
    ACTIONS(385), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(137), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6628] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6670] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(291), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(155), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(403), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6703] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6740] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6777] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 15,
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
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6835] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(418), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(421), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(149), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(413), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6865] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    STATE(169), 1,
      sym_group_by_clause,
    STATE(184), 1,
      sym_order_by_clause,
    ACTIONS(251), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    STATE(165), 1,
      sym_group_by_clause,
    STATE(199), 1,
      sym_order_by_clause,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    STATE(161), 1,
      sym_group_by_clause,
    STATE(193), 1,
      sym_order_by_clause,
    ACTIONS(424), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [6949] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6985] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(358), 1,
      aux_sym_in_expression_token1,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7021] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(291), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    STATE(113), 1,
      sym_NULL,
    STATE(149), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(430), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7051] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      aux_sym_grant_statement_token12,
    STATE(313), 1,
      sym_on_delete_action,
    STATE(349), 1,
      sym_on_update_action,
    ACTIONS(434), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_grant_statement_token12,
    STATE(333), 1,
      sym_on_delete_action,
    STATE(334), 1,
      sym_on_update_action,
    ACTIONS(438), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7104] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_grant_statement_token12,
    STATE(335), 1,
      sym_on_delete_action,
    STATE(336), 1,
      sym_on_update_action,
    ACTIONS(440), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(442), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [7152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(245), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [7175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    STATE(188), 1,
      sym_order_by_clause,
    ACTIONS(447), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_COLON_COLON,
    ACTIONS(449), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    STATE(184), 1,
      sym_order_by_clause,
    ACTIONS(251), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(245), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    STATE(193), 1,
      sym_order_by_clause,
    ACTIONS(424), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(460), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_order_by_clause_token1,
    STATE(199), 1,
      sym_order_by_clause,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      aux_sym_grant_statement_token2,
    ACTIONS(468), 1,
      aux_sym_grant_statement_token7,
    ACTIONS(470), 1,
      aux_sym_grant_statement_token12,
    STATE(191), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(466), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [7444] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(474), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(476), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(478), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(344), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token12,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_order_by_clause_token1,
  [7522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token12,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7539] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(474), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(476), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(478), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(277), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COLON_COLON,
    ACTIONS(449), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7585] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(300), 1,
      sym_constrained_type,
    ACTIONS(19), 2,
      aux_sym_create_schema_statement_token3,
      aux_sym__constraint_action_token3,
    STATE(219), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(17), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [7610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token12,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [7743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [7763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_grant_statement_token7,
    ACTIONS(512), 1,
      aux_sym_grant_statement_token12,
    STATE(195), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(510), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [7785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(514), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [7805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_grant_statement_token7,
    ACTIONS(527), 1,
      aux_sym_grant_statement_token12,
    STATE(195), 1,
      aux_sym_grant_statement_repeat1,
    ACTIONS(521), 7,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
  [7859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_schema_statement_token3,
      aux_sym_grant_statement_token9,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym__constraint_action_token3,
  [7907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_where_clause_token1,
    STATE(238), 1,
      sym_where_clause,
    ACTIONS(531), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [7942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [7957] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(535), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(537), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(539), 1,
      aux_sym_TRUE_token1,
    ACTIONS(541), 1,
      aux_sym_FALSE_token1,
    STATE(55), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_where_clause_token1,
    STATE(246), 1,
      sym_where_clause,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8001] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(547), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(549), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(551), 1,
      aux_sym_TRUE_token1,
    ACTIONS(553), 1,
      aux_sym_FALSE_token1,
    STATE(61), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_where_clause_token1,
    STATE(252), 1,
      sym_where_clause,
    ACTIONS(555), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_where_clause_token1,
    STATE(233), 1,
      sym_where_clause,
    ACTIONS(557), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8064] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(559), 1,
      aux_sym_create_function_statement_token2,
    ACTIONS(561), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(563), 1,
      aux_sym_create_schema_statement_token1,
    ACTIONS(565), 1,
      aux_sym_grant_statement_token15,
    ACTIONS(567), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(569), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(571), 1,
      aux_sym_create_index_statement_token1,
    STATE(450), 1,
      sym_unique_constraint,
  [8095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 9,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_grant_statement_token7,
      aux_sym_grant_statement_token8,
      aux_sym_grant_statement_token9,
      aux_sym_grant_statement_token10,
      aux_sym_grant_statement_token11,
      aux_sym_grant_statement_token12,
  [8110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_where_clause_token1,
    STATE(243), 1,
      sym_where_clause,
    ACTIONS(575), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [8143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(579), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8159] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(537), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(539), 1,
      aux_sym_TRUE_token1,
    ACTIONS(541), 1,
      aux_sym_FALSE_token1,
    STATE(53), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(583), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(587), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8213] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      sym_identifier,
    STATE(198), 1,
      sym_type_cast,
    STATE(180), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [8237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(595), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8253] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(599), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_NULL,
    STATE(148), 1,
      sym_null_constraint,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(603), 1,
      aux_sym_setof_token1,
    STATE(132), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(142), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [8299] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym_create_schema_statement_token3,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(605), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_NULL,
    STATE(148), 1,
      sym_null_constraint,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym_function_body_token1,
    ACTIONS(609), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [8355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(549), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(551), 1,
      aux_sym_TRUE_token1,
    ACTIONS(553), 1,
      aux_sym_FALSE_token1,
    STATE(48), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(603), 1,
      aux_sym_setof_token1,
    STATE(132), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(138), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [8397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(615), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(619), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
      aux_sym_where_clause_token1,
  [8443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(625), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(629), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(633), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      aux_sym_grant_statement_token19,
    ACTIONS(637), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    ACTIONS(649), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_grant_statement_token1,
      aux_sym_grant_statement_token4,
      aux_sym_grant_statement_token5,
      aux_sym_grant_statement_token6,
  [8859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_identifier,
    STATE(296), 1,
      sym_create_function_parameter,
    STATE(297), 1,
      sym_constrained_type,
    STATE(217), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_identifier,
    STATE(297), 1,
      sym_constrained_type,
    STATE(352), 1,
      sym_create_function_parameter,
    STATE(217), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(695), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
      aux_sym_grant_statement_token15,
  [8908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(699), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
      aux_sym_grant_statement_token15,
  [8921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(167), 1,
      sym_constrained_type,
    STATE(133), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_identifier,
    ACTIONS(705), 4,
      aux_sym_create_schema_statement_token1,
      aux_sym_grant_statement_token13,
      aux_sym_grant_statement_token14,
      aux_sym_grant_statement_token15,
  [8949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      aux_sym_using_clause_token1,
    STATE(209), 1,
      sym_index_table_parameters,
    STATE(346), 1,
      sym_using_clause,
  [8965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      aux_sym_set_clause_token1,
    STATE(175), 1,
      sym__constraint_action,
    ACTIONS(715), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [8979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
    STATE(21), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      aux_sym_set_clause_token1,
    STATE(178), 1,
      sym__constraint_action,
    ACTIONS(719), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [9005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(278), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      aux_sym_using_clause_token1,
    STATE(205), 1,
      sym_index_table_parameters,
    STATE(316), 1,
      sym_using_clause,
  [9033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(144), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(119), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(8), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [9069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(723), 2,
      aux_sym_grant_statement_token18,
      sym_identifier,
  [9080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(727), 2,
      aux_sym_grant_statement_token18,
      sym_identifier,
  [9091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_create_table_parameters_repeat1,
  [9117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_create_table_parameters_repeat1,
  [9130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(742), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_parameters_repeat1,
  [9154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_parameters_repeat1,
  [9167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_index_table_parameters_repeat1,
  [9180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(190), 1,
      sym_assigment_expression,
    STATE(226), 1,
      sym_set_clause_body,
  [9193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(46), 1,
      sym_string,
  [9206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(759), 2,
      aux_sym_grant_statement_token18,
      sym_identifier,
  [9230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(763), 2,
      aux_sym_grant_statement_token18,
      sym_identifier,
  [9241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_index_table_parameters_repeat1,
  [9267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_index_table_parameters_repeat1,
  [9306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_create_function_parameters_repeat1,
  [9319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(783), 2,
      aux_sym_grant_statement_token18,
      sym_identifier,
  [9330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_parameters_repeat1,
  [9356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_create_function_parameters_repeat1,
  [9369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_EQ,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_create_table_parameters_repeat1,
  [9406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_EQ,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_grant_statement_token17,
    ACTIONS(799), 2,
      aux_sym_grant_statement_token18,
      sym_identifier,
  [9428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym_grant_statement_token4,
    STATE(83), 1,
      sym_select_clause,
    STATE(338), 1,
      sym_select_statement,
  [9441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym_grant_statement_token4,
    STATE(83), 1,
      sym_select_clause,
    STATE(339), 1,
      sym_select_statement,
  [9454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_string,
  [9467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_create_function_parameters_repeat1,
  [9506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_group_by_clause_body_repeat1,
  [9558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [9571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_grant_statement_token12,
    STATE(197), 1,
      sym_on_update_action,
  [9581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_identifier,
    STATE(318), 1,
      sym_parameter,
  [9599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_index_table_parameters,
  [9609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      aux_sym_create_schema_statement_token2,
    ACTIONS(834), 1,
      sym_identifier,
  [9635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_tuple,
  [9645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_tuple,
  [9655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_grant_statement_token12,
    ACTIONS(838), 1,
      aux_sym_grant_statement_token3,
  [9665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_set_clause_token1,
    STATE(200), 1,
      sym_set_clause,
  [9675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym_join_type_token5,
    ACTIONS(844), 1,
      aux_sym_join_clause_token1,
  [9685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LPAREN,
    STATE(414), 1,
      sym_create_function_parameters,
  [9695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_LPAREN,
    STATE(247), 1,
      sym_create_table_parameters,
  [9705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_tuple,
  [9715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_values_clause_token1,
    STATE(236), 1,
      sym_values_clause,
  [9725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LPAREN,
    STATE(399), 1,
      sym_create_function_parameters,
  [9743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    STATE(232), 1,
      sym_parameters,
  [9753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_tuple,
  [9763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_grant_statement_token12,
    STATE(185), 1,
      sym_on_update_action,
  [9773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_grant_statement_token12,
    STATE(185), 1,
      sym_on_delete_action,
  [9783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_grant_statement_token12,
    STATE(183), 1,
      sym_on_update_action,
  [9793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_grant_statement_token12,
    STATE(183), 1,
      sym_on_delete_action,
  [9803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_identifier,
    STATE(295), 1,
      sym_parameter,
  [9813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_SEMI,
    ACTIONS(862), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SQUOTE,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [9833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_grant_statement_token9,
    STATE(354), 1,
      sym_references_constraint,
  [9843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(868), 1,
      anon_sym_SQUOTE,
  [9853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_index_table_parameters,
  [9895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym_grant_statement_token6,
    ACTIONS(878), 1,
      aux_sym_grant_statement_token7,
  [9913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_grant_statement_token12,
    STATE(197), 1,
      sym_on_delete_action,
  [9923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym__constraint_action_token3,
    STATE(112), 1,
      sym_NULL,
  [9933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(201), 1,
      sym_assigment_expression,
  [9959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_grant_statement_token9,
    STATE(347), 1,
      sym_references_constraint,
  [9977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_identifier,
  [9984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      aux_sym_create_schema_statement_token4,
  [9991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_identifier,
  [9998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_create_function_statement_token4,
  [10005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
  [10012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym_grant_statement_token1,
  [10019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_identifier,
  [10026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_identifier,
  [10033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      aux_sym_grant_statement_token1,
  [10040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym_grant_statement_token1,
  [10047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      aux_sym_grant_statement_token20,
  [10054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym_grant_statement_token1,
  [10061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_grant_statement_token20,
  [10068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      aux_sym_grant_statement_token16,
  [10075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      aux_sym_grant_statement_token20,
  [10082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_DOLLAR_DOLLAR,
  [10089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_identifier,
  [10096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_SQUOTE,
  [10103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_LPAREN,
  [10110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_identifier,
  [10117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
  [10124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym_grant_statement_token7,
  [10131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym_grant_statement_token6,
  [10138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      aux_sym_grant_statement_token1,
  [10145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_grant_statement_token20,
  [10152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      aux_sym_grant_statement_token20,
  [10159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      aux_sym_create_function_statement_token4,
  [10166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      aux_sym_grant_statement_token20,
  [10173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_RBRACK,
  [10180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_identifier,
  [10187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym_grant_statement_token16,
  [10194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      aux_sym_grant_statement_token16,
  [10201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      aux_sym__constraint_action_token3,
  [10208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_identifier,
  [10215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym_identifier,
  [10222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      aux_sym_grant_statement_token20,
  [10229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      aux_sym_from_clause_token1,
  [10236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [10243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_LPAREN,
  [10250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_grant_statement_token20,
  [10257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      aux_sym_grant_statement_token1,
  [10264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [10271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_identifier,
  [10278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      aux_sym_create_function_statement_token4,
  [10285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      aux_sym_grant_statement_token12,
  [10292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_grant_statement_token20,
  [10299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      aux_sym_grant_statement_token1,
  [10306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_EQ,
  [10313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_LPAREN,
  [10320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      aux_sym_insert_statement_token1,
  [10327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      aux_sym_grant_statement_token1,
  [10334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      aux_sym_grant_statement_token16,
  [10341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      aux_sym_grant_statement_token16,
  [10348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym_identifier,
  [10355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      aux_sym_grant_statement_token12,
  [10362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      sym_identifier,
  [10369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_identifier,
  [10376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym_identifier,
  [10383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      aux_sym_create_function_statement_token4,
  [10390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      sym_identifier,
  [10397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym_identifier,
  [10404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      aux_sym_grant_statement_token12,
  [10411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      aux_sym_join_clause_token1,
  [10418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_grant_statement_token20,
  [10425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      aux_sym_grant_statement_token1,
  [10432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      aux_sym_in_expression_token1,
  [10439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      sym_identifier,
  [10446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_SQUOTE,
  [10453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_DOLLAR_DOLLAR,
  [10460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
  [10467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      aux_sym_grant_statement_token16,
  [10474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      sym_identifier,
  [10481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym_grant_statement_token12,
  [10488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym_identifier,
  [10495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      aux_sym_grant_statement_token12,
  [10502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      aux_sym_function_body_token1,
  [10509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      aux_sym_grant_statement_token1,
  [10516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      aux_sym_create_schema_statement_token3,
  [10523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym_identifier,
  [10530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_identifier,
  [10537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      aux_sym_join_clause_token1,
  [10544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym_identifier,
  [10551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym_identifier,
  [10558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      aux_sym_join_clause_token1,
  [10565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      aux_sym_group_by_clause_token1,
  [10572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      aux_sym_group_by_clause_token1,
  [10579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
  [10586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_identifier,
  [10593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      aux_sym_number_token1,
  [10600] = 2,
    ACTIONS(1050), 1,
      aux_sym_string_token1,
    ACTIONS(1052), 1,
      sym_comment,
  [10607] = 2,
    ACTIONS(1052), 1,
      sym_comment,
    ACTIONS(1054), 1,
      aux_sym_string_token2,
  [10614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [10621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      aux_sym_number_token1,
  [10628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
  [10635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      aux_sym_create_index_statement_token1,
  [10642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_DOLLAR_DOLLAR,
  [10649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_SQUOTE,
  [10656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_identifier,
  [10663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym_identifier,
  [10670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym_identifier,
  [10677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym_identifier,
  [10684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_identifier,
  [10691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_identifier,
  [10698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      aux_sym_from_clause_token1,
  [10705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_identifier,
  [10712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
  [10719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym_identifier,
  [10726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      aux_sym_create_function_statement_token3,
  [10733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      ts_builtin_sym_end,
  [10740] = 2,
    ACTIONS(1052), 1,
      sym_comment,
    ACTIONS(1090), 1,
      aux_sym_string_token2,
  [10747] = 2,
    ACTIONS(1052), 1,
      sym_comment,
    ACTIONS(1092), 1,
      aux_sym_string_token1,
  [10754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      aux_sym_in_expression_token1,
  [10761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 161,
  [SMALL_STATE(6)] = 242,
  [SMALL_STATE(7)] = 292,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 394,
  [SMALL_STATE(10)] = 444,
  [SMALL_STATE(11)] = 494,
  [SMALL_STATE(12)] = 544,
  [SMALL_STATE(13)] = 619,
  [SMALL_STATE(14)] = 692,
  [SMALL_STATE(15)] = 765,
  [SMALL_STATE(16)] = 816,
  [SMALL_STATE(17)] = 867,
  [SMALL_STATE(18)] = 910,
  [SMALL_STATE(19)] = 953,
  [SMALL_STATE(20)] = 996,
  [SMALL_STATE(21)] = 1039,
  [SMALL_STATE(22)] = 1084,
  [SMALL_STATE(23)] = 1127,
  [SMALL_STATE(24)] = 1172,
  [SMALL_STATE(25)] = 1217,
  [SMALL_STATE(26)] = 1260,
  [SMALL_STATE(27)] = 1303,
  [SMALL_STATE(28)] = 1345,
  [SMALL_STATE(29)] = 1387,
  [SMALL_STATE(30)] = 1429,
  [SMALL_STATE(31)] = 1471,
  [SMALL_STATE(32)] = 1513,
  [SMALL_STATE(33)] = 1555,
  [SMALL_STATE(34)] = 1609,
  [SMALL_STATE(35)] = 1651,
  [SMALL_STATE(36)] = 1693,
  [SMALL_STATE(37)] = 1735,
  [SMALL_STATE(38)] = 1777,
  [SMALL_STATE(39)] = 1819,
  [SMALL_STATE(40)] = 1873,
  [SMALL_STATE(41)] = 1915,
  [SMALL_STATE(42)] = 1973,
  [SMALL_STATE(43)] = 2015,
  [SMALL_STATE(44)] = 2057,
  [SMALL_STATE(45)] = 2099,
  [SMALL_STATE(46)] = 2141,
  [SMALL_STATE(47)] = 2183,
  [SMALL_STATE(48)] = 2229,
  [SMALL_STATE(49)] = 2271,
  [SMALL_STATE(50)] = 2313,
  [SMALL_STATE(51)] = 2355,
  [SMALL_STATE(52)] = 2397,
  [SMALL_STATE(53)] = 2439,
  [SMALL_STATE(54)] = 2481,
  [SMALL_STATE(55)] = 2535,
  [SMALL_STATE(56)] = 2577,
  [SMALL_STATE(57)] = 2631,
  [SMALL_STATE(58)] = 2675,
  [SMALL_STATE(59)] = 2717,
  [SMALL_STATE(60)] = 2759,
  [SMALL_STATE(61)] = 2803,
  [SMALL_STATE(62)] = 2845,
  [SMALL_STATE(63)] = 2887,
  [SMALL_STATE(64)] = 2929,
  [SMALL_STATE(65)] = 2975,
  [SMALL_STATE(66)] = 3028,
  [SMALL_STATE(67)] = 3081,
  [SMALL_STATE(68)] = 3144,
  [SMALL_STATE(69)] = 3195,
  [SMALL_STATE(70)] = 3258,
  [SMALL_STATE(71)] = 3316,
  [SMALL_STATE(72)] = 3374,
  [SMALL_STATE(73)] = 3431,
  [SMALL_STATE(74)] = 3488,
  [SMALL_STATE(75)] = 3545,
  [SMALL_STATE(76)] = 3602,
  [SMALL_STATE(77)] = 3659,
  [SMALL_STATE(78)] = 3716,
  [SMALL_STATE(79)] = 3773,
  [SMALL_STATE(80)] = 3827,
  [SMALL_STATE(81)] = 3881,
  [SMALL_STATE(82)] = 3935,
  [SMALL_STATE(83)] = 3989,
  [SMALL_STATE(84)] = 4047,
  [SMALL_STATE(85)] = 4101,
  [SMALL_STATE(86)] = 4155,
  [SMALL_STATE(87)] = 4209,
  [SMALL_STATE(88)] = 4263,
  [SMALL_STATE(89)] = 4317,
  [SMALL_STATE(90)] = 4369,
  [SMALL_STATE(91)] = 4423,
  [SMALL_STATE(92)] = 4477,
  [SMALL_STATE(93)] = 4531,
  [SMALL_STATE(94)] = 4585,
  [SMALL_STATE(95)] = 4639,
  [SMALL_STATE(96)] = 4693,
  [SMALL_STATE(97)] = 4747,
  [SMALL_STATE(98)] = 4801,
  [SMALL_STATE(99)] = 4855,
  [SMALL_STATE(100)] = 4909,
  [SMALL_STATE(101)] = 4963,
  [SMALL_STATE(102)] = 5017,
  [SMALL_STATE(103)] = 5071,
  [SMALL_STATE(104)] = 5125,
  [SMALL_STATE(105)] = 5179,
  [SMALL_STATE(106)] = 5230,
  [SMALL_STATE(107)] = 5277,
  [SMALL_STATE(108)] = 5324,
  [SMALL_STATE(109)] = 5376,
  [SMALL_STATE(110)] = 5422,
  [SMALL_STATE(111)] = 5474,
  [SMALL_STATE(112)] = 5526,
  [SMALL_STATE(113)] = 5555,
  [SMALL_STATE(114)] = 5584,
  [SMALL_STATE(115)] = 5628,
  [SMALL_STATE(116)] = 5659,
  [SMALL_STATE(117)] = 5690,
  [SMALL_STATE(118)] = 5727,
  [SMALL_STATE(119)] = 5758,
  [SMALL_STATE(120)] = 5806,
  [SMALL_STATE(121)] = 5848,
  [SMALL_STATE(122)] = 5878,
  [SMALL_STATE(123)] = 5904,
  [SMALL_STATE(124)] = 5934,
  [SMALL_STATE(125)] = 5960,
  [SMALL_STATE(126)] = 6001,
  [SMALL_STATE(127)] = 6026,
  [SMALL_STATE(128)] = 6067,
  [SMALL_STATE(129)] = 6112,
  [SMALL_STATE(130)] = 6157,
  [SMALL_STATE(131)] = 6203,
  [SMALL_STATE(132)] = 6244,
  [SMALL_STATE(133)] = 6277,
  [SMALL_STATE(134)] = 6310,
  [SMALL_STATE(135)] = 6352,
  [SMALL_STATE(136)] = 6382,
  [SMALL_STATE(137)] = 6424,
  [SMALL_STATE(138)] = 6454,
  [SMALL_STATE(139)] = 6484,
  [SMALL_STATE(140)] = 6514,
  [SMALL_STATE(141)] = 6556,
  [SMALL_STATE(142)] = 6598,
  [SMALL_STATE(143)] = 6628,
  [SMALL_STATE(144)] = 6670,
  [SMALL_STATE(145)] = 6703,
  [SMALL_STATE(146)] = 6740,
  [SMALL_STATE(147)] = 6777,
  [SMALL_STATE(148)] = 6814,
  [SMALL_STATE(149)] = 6835,
  [SMALL_STATE(150)] = 6865,
  [SMALL_STATE(151)] = 6893,
  [SMALL_STATE(152)] = 6921,
  [SMALL_STATE(153)] = 6949,
  [SMALL_STATE(154)] = 6985,
  [SMALL_STATE(155)] = 7021,
  [SMALL_STATE(156)] = 7051,
  [SMALL_STATE(157)] = 7079,
  [SMALL_STATE(158)] = 7104,
  [SMALL_STATE(159)] = 7129,
  [SMALL_STATE(160)] = 7152,
  [SMALL_STATE(161)] = 7175,
  [SMALL_STATE(162)] = 7197,
  [SMALL_STATE(163)] = 7219,
  [SMALL_STATE(164)] = 7237,
  [SMALL_STATE(165)] = 7255,
  [SMALL_STATE(166)] = 7277,
  [SMALL_STATE(167)] = 7295,
  [SMALL_STATE(168)] = 7313,
  [SMALL_STATE(169)] = 7335,
  [SMALL_STATE(170)] = 7357,
  [SMALL_STATE(171)] = 7379,
  [SMALL_STATE(172)] = 7401,
  [SMALL_STATE(173)] = 7419,
  [SMALL_STATE(174)] = 7444,
  [SMALL_STATE(175)] = 7471,
  [SMALL_STATE(176)] = 7488,
  [SMALL_STATE(177)] = 7505,
  [SMALL_STATE(178)] = 7522,
  [SMALL_STATE(179)] = 7539,
  [SMALL_STATE(180)] = 7566,
  [SMALL_STATE(181)] = 7585,
  [SMALL_STATE(182)] = 7610,
  [SMALL_STATE(183)] = 7627,
  [SMALL_STATE(184)] = 7643,
  [SMALL_STATE(185)] = 7659,
  [SMALL_STATE(186)] = 7675,
  [SMALL_STATE(187)] = 7691,
  [SMALL_STATE(188)] = 7707,
  [SMALL_STATE(189)] = 7723,
  [SMALL_STATE(190)] = 7743,
  [SMALL_STATE(191)] = 7763,
  [SMALL_STATE(192)] = 7785,
  [SMALL_STATE(193)] = 7805,
  [SMALL_STATE(194)] = 7821,
  [SMALL_STATE(195)] = 7837,
  [SMALL_STATE(196)] = 7859,
  [SMALL_STATE(197)] = 7875,
  [SMALL_STATE(198)] = 7891,
  [SMALL_STATE(199)] = 7907,
  [SMALL_STATE(200)] = 7923,
  [SMALL_STATE(201)] = 7942,
  [SMALL_STATE(202)] = 7957,
  [SMALL_STATE(203)] = 7982,
  [SMALL_STATE(204)] = 8001,
  [SMALL_STATE(205)] = 8026,
  [SMALL_STATE(206)] = 8045,
  [SMALL_STATE(207)] = 8064,
  [SMALL_STATE(208)] = 8095,
  [SMALL_STATE(209)] = 8110,
  [SMALL_STATE(210)] = 8129,
  [SMALL_STATE(211)] = 8143,
  [SMALL_STATE(212)] = 8159,
  [SMALL_STATE(213)] = 8181,
  [SMALL_STATE(214)] = 8197,
  [SMALL_STATE(215)] = 8213,
  [SMALL_STATE(216)] = 8237,
  [SMALL_STATE(217)] = 8253,
  [SMALL_STATE(218)] = 8279,
  [SMALL_STATE(219)] = 8299,
  [SMALL_STATE(220)] = 8325,
  [SMALL_STATE(221)] = 8341,
  [SMALL_STATE(222)] = 8355,
  [SMALL_STATE(223)] = 8377,
  [SMALL_STATE(224)] = 8397,
  [SMALL_STATE(225)] = 8413,
  [SMALL_STATE(226)] = 8429,
  [SMALL_STATE(227)] = 8443,
  [SMALL_STATE(228)] = 8459,
  [SMALL_STATE(229)] = 8475,
  [SMALL_STATE(230)] = 8491,
  [SMALL_STATE(231)] = 8507,
  [SMALL_STATE(232)] = 8520,
  [SMALL_STATE(233)] = 8533,
  [SMALL_STATE(234)] = 8546,
  [SMALL_STATE(235)] = 8559,
  [SMALL_STATE(236)] = 8574,
  [SMALL_STATE(237)] = 8587,
  [SMALL_STATE(238)] = 8600,
  [SMALL_STATE(239)] = 8613,
  [SMALL_STATE(240)] = 8626,
  [SMALL_STATE(241)] = 8639,
  [SMALL_STATE(242)] = 8652,
  [SMALL_STATE(243)] = 8665,
  [SMALL_STATE(244)] = 8678,
  [SMALL_STATE(245)] = 8691,
  [SMALL_STATE(246)] = 8704,
  [SMALL_STATE(247)] = 8717,
  [SMALL_STATE(248)] = 8730,
  [SMALL_STATE(249)] = 8743,
  [SMALL_STATE(250)] = 8756,
  [SMALL_STATE(251)] = 8769,
  [SMALL_STATE(252)] = 8782,
  [SMALL_STATE(253)] = 8795,
  [SMALL_STATE(254)] = 8808,
  [SMALL_STATE(255)] = 8821,
  [SMALL_STATE(256)] = 8834,
  [SMALL_STATE(257)] = 8847,
  [SMALL_STATE(258)] = 8859,
  [SMALL_STATE(259)] = 8877,
  [SMALL_STATE(260)] = 8895,
  [SMALL_STATE(261)] = 8908,
  [SMALL_STATE(262)] = 8921,
  [SMALL_STATE(263)] = 8936,
  [SMALL_STATE(264)] = 8949,
  [SMALL_STATE(265)] = 8965,
  [SMALL_STATE(266)] = 8979,
  [SMALL_STATE(267)] = 8991,
  [SMALL_STATE(268)] = 9005,
  [SMALL_STATE(269)] = 9017,
  [SMALL_STATE(270)] = 9033,
  [SMALL_STATE(271)] = 9045,
  [SMALL_STATE(272)] = 9057,
  [SMALL_STATE(273)] = 9069,
  [SMALL_STATE(274)] = 9080,
  [SMALL_STATE(275)] = 9091,
  [SMALL_STATE(276)] = 9104,
  [SMALL_STATE(277)] = 9117,
  [SMALL_STATE(278)] = 9130,
  [SMALL_STATE(279)] = 9141,
  [SMALL_STATE(280)] = 9154,
  [SMALL_STATE(281)] = 9167,
  [SMALL_STATE(282)] = 9180,
  [SMALL_STATE(283)] = 9193,
  [SMALL_STATE(284)] = 9206,
  [SMALL_STATE(285)] = 9219,
  [SMALL_STATE(286)] = 9230,
  [SMALL_STATE(287)] = 9241,
  [SMALL_STATE(288)] = 9254,
  [SMALL_STATE(289)] = 9267,
  [SMALL_STATE(290)] = 9280,
  [SMALL_STATE(291)] = 9293,
  [SMALL_STATE(292)] = 9306,
  [SMALL_STATE(293)] = 9319,
  [SMALL_STATE(294)] = 9330,
  [SMALL_STATE(295)] = 9343,
  [SMALL_STATE(296)] = 9356,
  [SMALL_STATE(297)] = 9369,
  [SMALL_STATE(298)] = 9380,
  [SMALL_STATE(299)] = 9393,
  [SMALL_STATE(300)] = 9406,
  [SMALL_STATE(301)] = 9417,
  [SMALL_STATE(302)] = 9428,
  [SMALL_STATE(303)] = 9441,
  [SMALL_STATE(304)] = 9454,
  [SMALL_STATE(305)] = 9467,
  [SMALL_STATE(306)] = 9480,
  [SMALL_STATE(307)] = 9493,
  [SMALL_STATE(308)] = 9506,
  [SMALL_STATE(309)] = 9519,
  [SMALL_STATE(310)] = 9532,
  [SMALL_STATE(311)] = 9545,
  [SMALL_STATE(312)] = 9558,
  [SMALL_STATE(313)] = 9571,
  [SMALL_STATE(314)] = 9581,
  [SMALL_STATE(315)] = 9589,
  [SMALL_STATE(316)] = 9599,
  [SMALL_STATE(317)] = 9609,
  [SMALL_STATE(318)] = 9617,
  [SMALL_STATE(319)] = 9625,
  [SMALL_STATE(320)] = 9635,
  [SMALL_STATE(321)] = 9645,
  [SMALL_STATE(322)] = 9655,
  [SMALL_STATE(323)] = 9665,
  [SMALL_STATE(324)] = 9675,
  [SMALL_STATE(325)] = 9685,
  [SMALL_STATE(326)] = 9695,
  [SMALL_STATE(327)] = 9705,
  [SMALL_STATE(328)] = 9715,
  [SMALL_STATE(329)] = 9725,
  [SMALL_STATE(330)] = 9733,
  [SMALL_STATE(331)] = 9743,
  [SMALL_STATE(332)] = 9753,
  [SMALL_STATE(333)] = 9763,
  [SMALL_STATE(334)] = 9773,
  [SMALL_STATE(335)] = 9783,
  [SMALL_STATE(336)] = 9793,
  [SMALL_STATE(337)] = 9803,
  [SMALL_STATE(338)] = 9813,
  [SMALL_STATE(339)] = 9823,
  [SMALL_STATE(340)] = 9833,
  [SMALL_STATE(341)] = 9843,
  [SMALL_STATE(342)] = 9853,
  [SMALL_STATE(343)] = 9861,
  [SMALL_STATE(344)] = 9869,
  [SMALL_STATE(345)] = 9877,
  [SMALL_STATE(346)] = 9885,
  [SMALL_STATE(347)] = 9895,
  [SMALL_STATE(348)] = 9903,
  [SMALL_STATE(349)] = 9913,
  [SMALL_STATE(350)] = 9923,
  [SMALL_STATE(351)] = 9933,
  [SMALL_STATE(352)] = 9941,
  [SMALL_STATE(353)] = 9949,
  [SMALL_STATE(354)] = 9959,
  [SMALL_STATE(355)] = 9967,
  [SMALL_STATE(356)] = 9977,
  [SMALL_STATE(357)] = 9984,
  [SMALL_STATE(358)] = 9991,
  [SMALL_STATE(359)] = 9998,
  [SMALL_STATE(360)] = 10005,
  [SMALL_STATE(361)] = 10012,
  [SMALL_STATE(362)] = 10019,
  [SMALL_STATE(363)] = 10026,
  [SMALL_STATE(364)] = 10033,
  [SMALL_STATE(365)] = 10040,
  [SMALL_STATE(366)] = 10047,
  [SMALL_STATE(367)] = 10054,
  [SMALL_STATE(368)] = 10061,
  [SMALL_STATE(369)] = 10068,
  [SMALL_STATE(370)] = 10075,
  [SMALL_STATE(371)] = 10082,
  [SMALL_STATE(372)] = 10089,
  [SMALL_STATE(373)] = 10096,
  [SMALL_STATE(374)] = 10103,
  [SMALL_STATE(375)] = 10110,
  [SMALL_STATE(376)] = 10117,
  [SMALL_STATE(377)] = 10124,
  [SMALL_STATE(378)] = 10131,
  [SMALL_STATE(379)] = 10138,
  [SMALL_STATE(380)] = 10145,
  [SMALL_STATE(381)] = 10152,
  [SMALL_STATE(382)] = 10159,
  [SMALL_STATE(383)] = 10166,
  [SMALL_STATE(384)] = 10173,
  [SMALL_STATE(385)] = 10180,
  [SMALL_STATE(386)] = 10187,
  [SMALL_STATE(387)] = 10194,
  [SMALL_STATE(388)] = 10201,
  [SMALL_STATE(389)] = 10208,
  [SMALL_STATE(390)] = 10215,
  [SMALL_STATE(391)] = 10222,
  [SMALL_STATE(392)] = 10229,
  [SMALL_STATE(393)] = 10236,
  [SMALL_STATE(394)] = 10243,
  [SMALL_STATE(395)] = 10250,
  [SMALL_STATE(396)] = 10257,
  [SMALL_STATE(397)] = 10264,
  [SMALL_STATE(398)] = 10271,
  [SMALL_STATE(399)] = 10278,
  [SMALL_STATE(400)] = 10285,
  [SMALL_STATE(401)] = 10292,
  [SMALL_STATE(402)] = 10299,
  [SMALL_STATE(403)] = 10306,
  [SMALL_STATE(404)] = 10313,
  [SMALL_STATE(405)] = 10320,
  [SMALL_STATE(406)] = 10327,
  [SMALL_STATE(407)] = 10334,
  [SMALL_STATE(408)] = 10341,
  [SMALL_STATE(409)] = 10348,
  [SMALL_STATE(410)] = 10355,
  [SMALL_STATE(411)] = 10362,
  [SMALL_STATE(412)] = 10369,
  [SMALL_STATE(413)] = 10376,
  [SMALL_STATE(414)] = 10383,
  [SMALL_STATE(415)] = 10390,
  [SMALL_STATE(416)] = 10397,
  [SMALL_STATE(417)] = 10404,
  [SMALL_STATE(418)] = 10411,
  [SMALL_STATE(419)] = 10418,
  [SMALL_STATE(420)] = 10425,
  [SMALL_STATE(421)] = 10432,
  [SMALL_STATE(422)] = 10439,
  [SMALL_STATE(423)] = 10446,
  [SMALL_STATE(424)] = 10453,
  [SMALL_STATE(425)] = 10460,
  [SMALL_STATE(426)] = 10467,
  [SMALL_STATE(427)] = 10474,
  [SMALL_STATE(428)] = 10481,
  [SMALL_STATE(429)] = 10488,
  [SMALL_STATE(430)] = 10495,
  [SMALL_STATE(431)] = 10502,
  [SMALL_STATE(432)] = 10509,
  [SMALL_STATE(433)] = 10516,
  [SMALL_STATE(434)] = 10523,
  [SMALL_STATE(435)] = 10530,
  [SMALL_STATE(436)] = 10537,
  [SMALL_STATE(437)] = 10544,
  [SMALL_STATE(438)] = 10551,
  [SMALL_STATE(439)] = 10558,
  [SMALL_STATE(440)] = 10565,
  [SMALL_STATE(441)] = 10572,
  [SMALL_STATE(442)] = 10579,
  [SMALL_STATE(443)] = 10586,
  [SMALL_STATE(444)] = 10593,
  [SMALL_STATE(445)] = 10600,
  [SMALL_STATE(446)] = 10607,
  [SMALL_STATE(447)] = 10614,
  [SMALL_STATE(448)] = 10621,
  [SMALL_STATE(449)] = 10628,
  [SMALL_STATE(450)] = 10635,
  [SMALL_STATE(451)] = 10642,
  [SMALL_STATE(452)] = 10649,
  [SMALL_STATE(453)] = 10656,
  [SMALL_STATE(454)] = 10663,
  [SMALL_STATE(455)] = 10670,
  [SMALL_STATE(456)] = 10677,
  [SMALL_STATE(457)] = 10684,
  [SMALL_STATE(458)] = 10691,
  [SMALL_STATE(459)] = 10698,
  [SMALL_STATE(460)] = 10705,
  [SMALL_STATE(461)] = 10712,
  [SMALL_STATE(462)] = 10719,
  [SMALL_STATE(463)] = 10726,
  [SMALL_STATE(464)] = 10733,
  [SMALL_STATE(465)] = 10740,
  [SMALL_STATE(466)] = 10747,
  [SMALL_STATE(467)] = 10754,
  [SMALL_STATE(468)] = 10761,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 8),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 19),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3, .production_id = 9),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3, .production_id = 9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 14),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 14),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 27),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 27),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 3, .production_id = 21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 20),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 10),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 10),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(439),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(324),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_statement_repeat1, 2), SHIFT_REPEAT(437),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(70),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 17),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(405),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(468),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 17),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(350),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(458),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(456),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(215),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(99),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(176),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(447),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(163),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(413),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(341),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 15),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 22),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 8, .production_id = 22),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6, .production_id = 15),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5, .production_id = 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 23),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 28),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(350),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(99),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 6, .production_id = 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(85),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 29),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(92),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 3, .production_id = 39),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3, .production_id = 11),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 3, .production_id = 40),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_action, 2, .production_id = 44),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(353),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 12),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2), SHIFT_REPEAT(195),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2), SHIFT_REPEAT(208),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 18),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 25),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 25),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grant_statement_repeat1, 1, .production_id = 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 18),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 6, .production_id = 9),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 31),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 26),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 3, .production_id = 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7, .production_id = 9),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 31),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 6),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 7, .production_id = 26),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_schema_statement, 6, .production_id = 16),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 5, .production_id = 13),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 25),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 8, .production_id = 32),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 37),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 33),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 38),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 9, .production_id = 34),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 10, .production_id = 36),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 12, .production_id = 45),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 18),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 4, .production_id = 5),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 41),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 42),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grant_statement, 11, .production_id = 43),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_schema_statement, 3, .production_id = 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(174),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(315),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(76),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(259),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(415),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 6),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 30),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 7, .production_id = 35),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6, .production_id = 35),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_type, 2),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 24),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1088] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
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
