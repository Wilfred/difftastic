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
#define STATE_COUNT 368
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 6
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_function_statement_token1 = 2,
  aux_sym_create_function_statement_token2 = 3,
  aux_sym_create_function_statement_token3 = 4,
  aux_sym__function_optimizer_hint_token1 = 5,
  aux_sym__function_optimizer_hint_token2 = 6,
  aux_sym__function_optimizer_hint_token3 = 7,
  aux_sym__function_language_token1 = 8,
  aux_sym_setof_token1 = 9,
  anon_sym_EQ = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  aux_sym_function_body_token1 = 14,
  anon_sym_DOLLAR_DOLLAR = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_create_domain_statement_token1 = 17,
  aux_sym_create_type_statement_token1 = 18,
  aux_sym_create_index_statement_token1 = 19,
  aux_sym_create_index_statement_token2 = 20,
  anon_sym_CONSTRAINT = 21,
  aux_sym_column_default_token1 = 22,
  aux_sym_table_constraint_check_token1 = 23,
  aux_sym_table_constraint_foreign_key_token1 = 24,
  aux_sym_table_constraint_foreign_key_token2 = 25,
  aux_sym_table_constraint_unique_token1 = 26,
  aux_sym_table_constraint_primary_key_token1 = 27,
  aux_sym_create_table_statement_token1 = 28,
  aux_sym_using_clause_token1 = 29,
  aux_sym_group_by_clause_token1 = 30,
  aux_sym_group_by_clause_token2 = 31,
  aux_sym_order_by_clause_token1 = 32,
  aux_sym_where_clause_token1 = 33,
  aux_sym_select_clause_token1 = 34,
  aux_sym_from_clause_token1 = 35,
  aux_sym_update_statement_token1 = 36,
  aux_sym_set_clause_token1 = 37,
  aux_sym_insert_statement_token1 = 38,
  aux_sym_insert_statement_token2 = 39,
  aux_sym_values_clause_token1 = 40,
  aux_sym_in_expression_token1 = 41,
  aux_sym_in_expression_token2 = 42,
  aux_sym_references_constraint_token1 = 43,
  aux_sym_on_delete_action_token1 = 44,
  aux_sym__constraint_action_token1 = 45,
  aux_sym__constraint_action_token2 = 46,
  aux_sym__constraint_action_token3 = 47,
  anon_sym_LT = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_LT_GT = 50,
  anon_sym_GT = 51,
  anon_sym_GT_EQ = 52,
  aux_sym_is_expression_token1 = 53,
  aux_sym_distinct_from_token1 = 54,
  aux_sym_boolean_expression_token1 = 55,
  aux_sym_boolean_expression_token2 = 56,
  aux_sym_TRUE_token1 = 57,
  aux_sym_FALSE_token1 = 58,
  aux_sym_number_token1 = 59,
  sym_identifier = 60,
  aux_sym_string_token1 = 61,
  aux_sym_string_token2 = 62,
  anon_sym_DASH_GT_GT = 63,
  aux_sym_ordered_expression_token1 = 64,
  aux_sym_ordered_expression_token2 = 65,
  anon_sym_LBRACK = 66,
  anon_sym_RBRACK = 67,
  anon_sym_COLON_COLON = 68,
  sym_comment = 69,
  anon_sym_TILDE = 70,
  anon_sym_PLUS = 71,
  anon_sym_DOLLAR = 72,
  sym_source_file = 73,
  sym__statement = 74,
  sym_create_function_statement = 75,
  sym__function_optimizer_hint = 76,
  sym__function_language = 77,
  sym__create_function_return_type = 78,
  sym_setof = 79,
  sym_constrained_type = 80,
  sym_create_function_parameter = 81,
  sym_create_function_parameters = 82,
  sym_function_body = 83,
  sym_create_domain_statement = 84,
  sym_create_type_statement = 85,
  sym_create_index_statement = 86,
  sym_create_table_column_parameter = 87,
  sym_named_constraint = 88,
  sym_column_default = 89,
  sym_create_table_parameters = 90,
  sym__table_constraint = 91,
  sym_table_constraint_check = 92,
  sym_table_constraint_foreign_key = 93,
  sym_table_constraint_unique = 94,
  sym_table_constraint_primary_key = 95,
  sym_primary_key_constraint = 96,
  sym_create_table_statement = 97,
  sym_using_clause = 98,
  sym_index_table_parameters = 99,
  sym_select_statement = 100,
  sym_group_by_clause_body = 101,
  sym_group_by_clause = 102,
  sym_order_by_clause_body = 103,
  sym_order_by_clause = 104,
  sym_where_clause = 105,
  sym__aliased_expression = 106,
  sym__aliasable_expression = 107,
  sym_select_clause_body = 108,
  sym_select_clause = 109,
  sym_from_clause = 110,
  sym_select_subexpression = 111,
  sym_update_statement = 112,
  sym_set_clause = 113,
  sym_set_clause_body = 114,
  sym_assigment_expression = 115,
  sym_insert_statement = 116,
  sym_values_clause = 117,
  sym_values_clause_body = 118,
  sym_in_expression = 119,
  sym_tuple = 120,
  sym_references_constraint = 121,
  sym_on_update_action = 122,
  sym_on_delete_action = 123,
  sym__constraint_action = 124,
  sym_unique_constraint = 125,
  sym_null_constraint = 126,
  sym_check_constraint = 127,
  sym_parameter = 128,
  sym_parameters = 129,
  sym_function_call = 130,
  sym_comparison_operator = 131,
  sym__parenthesized_expression = 132,
  sym_is_expression = 133,
  sym_distinct_from = 134,
  sym_boolean_expression = 135,
  sym_NULL = 136,
  sym_TRUE = 137,
  sym_FALSE = 138,
  sym_number = 139,
  sym_string = 140,
  sym_field_access = 141,
  sym_ordered_expression = 142,
  sym__type_alias = 143,
  sym_array_type = 144,
  sym__type = 145,
  sym_type_cast = 146,
  sym_binary_expression = 147,
  sym_argument_reference = 148,
  sym__expression = 149,
  aux_sym_source_file_repeat1 = 150,
  aux_sym_create_function_statement_repeat1 = 151,
  aux_sym_create_function_parameters_repeat1 = 152,
  aux_sym_create_domain_statement_repeat1 = 153,
  aux_sym_create_table_column_parameter_repeat1 = 154,
  aux_sym_create_table_parameters_repeat1 = 155,
  aux_sym_table_constraint_foreign_key_repeat1 = 156,
  aux_sym_index_table_parameters_repeat1 = 157,
  aux_sym_group_by_clause_body_repeat1 = 158,
  aux_sym_select_clause_body_repeat1 = 159,
  aux_sym_set_clause_body_repeat1 = 160,
  aux_sym_parameters_repeat1 = 161,
  anon_alias_sym_NOT = 162,
  anon_alias_sym_NULL = 163,
  anon_alias_sym_ONUPDATE = 164,
  alias_sym_default = 165,
  alias_sym_language = 166,
  alias_sym_type = 167,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_function_statement_token1] = "CREATE",
  [aux_sym_create_function_statement_token2] = "CREATE FUNCTION",
  [aux_sym_create_function_statement_token3] = "RETURNS",
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
  [aux_sym_create_domain_statement_token1] = "CREATE DOMAIN",
  [aux_sym_create_type_statement_token1] = "CREATE TYPE",
  [aux_sym_create_index_statement_token1] = "INDEX",
  [aux_sym_create_index_statement_token2] = "ON",
  [anon_sym_CONSTRAINT] = "CONSTRAINT",
  [aux_sym_column_default_token1] = "DEFAULT",
  [aux_sym_table_constraint_check_token1] = "CHECK",
  [aux_sym_table_constraint_foreign_key_token1] = "FOREIGN KEY",
  [aux_sym_table_constraint_foreign_key_token2] = "PRIMARY KEY",
  [aux_sym_table_constraint_unique_token1] = "UNIQUE",
  [aux_sym_table_constraint_primary_key_token1] = "PRIMARY KEY",
  [aux_sym_create_table_statement_token1] = "CREATE TABLE",
  [aux_sym_using_clause_token1] = "USING",
  [aux_sym_group_by_clause_token1] = "GROUP BY",
  [aux_sym_group_by_clause_token2] = "GROUP BY",
  [aux_sym_order_by_clause_token1] = "ORDER BY",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_select_clause_token1] = "SELECT",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_update_statement_token1] = "UPDATE",
  [aux_sym_set_clause_token1] = "SET",
  [aux_sym_insert_statement_token1] = "INSERT",
  [aux_sym_insert_statement_token2] = "INTO",
  [aux_sym_values_clause_token1] = "VALUES",
  [aux_sym_in_expression_token1] = "not",
  [aux_sym_in_expression_token2] = "IN",
  [aux_sym_references_constraint_token1] = "REFERENCES",
  [aux_sym_on_delete_action_token1] = "ON DELETE",
  [aux_sym__constraint_action_token1] = "RESTRICT",
  [aux_sym__constraint_action_token2] = "CASCADE",
  [aux_sym__constraint_action_token3] = "SET NULL",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_is_expression_token1] = "is",
  [aux_sym_distinct_from_token1] = "DISTINCT FROM",
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
  [aux_sym_group_by_clause_body_repeat1] = "group_by_clause_body_repeat1",
  [aux_sym_select_clause_body_repeat1] = "select_clause_body_repeat1",
  [aux_sym_set_clause_body_repeat1] = "set_clause_body_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [anon_alias_sym_NOT] = "NOT",
  [anon_alias_sym_NULL] = "NULL",
  [anon_alias_sym_ONUPDATE] = "ON UPDATE",
  [alias_sym_default] = "default",
  [alias_sym_language] = "language",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_function_statement_token1] = aux_sym_create_function_statement_token1,
  [aux_sym_create_function_statement_token2] = aux_sym_create_function_statement_token2,
  [aux_sym_create_function_statement_token3] = aux_sym_create_function_statement_token3,
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
  [aux_sym_group_by_clause_body_repeat1] = aux_sym_group_by_clause_body_repeat1,
  [aux_sym_select_clause_body_repeat1] = aux_sym_select_clause_body_repeat1,
  [aux_sym_set_clause_body_repeat1] = aux_sym_set_clause_body_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [anon_alias_sym_NOT] = anon_alias_sym_NOT,
  [anon_alias_sym_NULL] = anon_alias_sym_NULL,
  [anon_alias_sym_ONUPDATE] = anon_alias_sym_ONUPDATE,
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
  [anon_alias_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_ONUPDATE] = {
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
  field_table = 9,
  field_type = 10,
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
  [field_table] = "table",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [10] = {.index = 3, .length = 2},
  [13] = {.index = 5, .length = 2},
  [14] = {.index = 7, .length = 2},
  [15] = {.index = 9, .length = 3},
  [16] = {.index = 12, .length = 1},
  [20] = {.index = 13, .length = 1},
  [21] = {.index = 14, .length = 2},
  [22] = {.index = 16, .length = 2},
  [25] = {.index = 18, .length = 1},
  [27] = {.index = 19, .length = 1},
  [28] = {.index = 19, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
  [1] =
    {field_function, 0},
  [2] =
    {field_operator, 1},
  [3] =
    {field_arguments, 2},
    {field_function, 0},
  [5] =
    {field_name, 2},
    {field_table, 4},
  [7] =
    {field_name, 0},
    {field_type, 1},
  [9] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [12] =
    {field_elements, 1},
  [13] =
    {field_type, 1},
  [14] =
    {field_name, 3},
    {field_table, 5},
  [16] =
    {field_elements, 1},
    {field_elements, 2},
  [18] =
    {field_order, 1},
  [19] =
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
  [8] = {
    [1] = aux_sym_order_by_clause_token1,
  },
  [9] = {
    [0] = aux_sym_create_type_statement_token1,
  },
  [11] = {
    [1] = anon_alias_sym_NOT,
  },
  [12] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [17] = {
    [1] = aux_sym_distinct_from_token1,
  },
  [18] = {
    [2] = alias_sym_default,
  },
  [19] = {
    [0] = anon_alias_sym_NOT,
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
    [0] = anon_alias_sym_ONUPDATE,
    [1] = anon_alias_sym_ONUPDATE,
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
      if (eof) ADVANCE(239);
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '\\') SKIP(229)
      if (lookahead == ']') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == '~') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(224);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(183);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(52);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(318);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 18:
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(255);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(405);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(214);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(183);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(416);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(363);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(369);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(358);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(415);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(410);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(261);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 115:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 116:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 118:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 120:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 122:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 123:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 124:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(263);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 149:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 150:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 152:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 153:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 178:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 179:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 180:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(222);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 196:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 197:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      END_STATE();
    case 198:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 199:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 214:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 215:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 216:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 217:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 219:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 220:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 221:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 222:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 223:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 224:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 225:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(267);
      END_STATE();
    case 226:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(270);
      END_STATE();
    case 227:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(407);
      END_STATE();
    case 228:
      if (eof) ADVANCE(239);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 229:
      if (eof) ADVANCE(239);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(228)
      END_STATE();
    case 230:
      if (eof) ADVANCE(239);
      if (lookahead == '\n') SKIP(237)
      END_STATE();
    case 231:
      if (eof) ADVANCE(239);
      if (lookahead == '\n') SKIP(237)
      if (lookahead == '\r') SKIP(230)
      END_STATE();
    case 232:
      if (eof) ADVANCE(239);
      if (lookahead == '\n') SKIP(236)
      END_STATE();
    case 233:
      if (eof) ADVANCE(239);
      if (lookahead == '\n') SKIP(236)
      if (lookahead == '\r') SKIP(232)
      END_STATE();
    case 234:
      if (eof) ADVANCE(239);
      if (lookahead == '\n') SKIP(238)
      END_STATE();
    case 235:
      if (eof) ADVANCE(239);
      if (lookahead == '\n') SKIP(238)
      if (lookahead == '\r') SKIP(234)
      END_STATE();
    case 236:
      if (eof) ADVANCE(239);
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '\\') SKIP(233)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(372);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(318);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 237:
      if (eof) ADVANCE(239);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '\\') SKIP(231)
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == '~') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(181);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(183);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(176);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(237)
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '\\') SKIP(235)
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == '~') ADVANCE(419);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(183);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(238)
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_set_clause_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_values_clause_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '>') ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\r') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(400);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(400);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '/') ADVANCE(400);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(399);
      if (lookahead == '/') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '\r') ADVANCE(402);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '$') ADVANCE(417);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(405);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '$') ADVANCE(418);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(255);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 237},
  [3] = {.lex_state = 237},
  [4] = {.lex_state = 237},
  [5] = {.lex_state = 236},
  [6] = {.lex_state = 237},
  [7] = {.lex_state = 237},
  [8] = {.lex_state = 237},
  [9] = {.lex_state = 237},
  [10] = {.lex_state = 237},
  [11] = {.lex_state = 237},
  [12] = {.lex_state = 238},
  [13] = {.lex_state = 238},
  [14] = {.lex_state = 238},
  [15] = {.lex_state = 238},
  [16] = {.lex_state = 238},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 238},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 238},
  [22] = {.lex_state = 238},
  [23] = {.lex_state = 238},
  [24] = {.lex_state = 238},
  [25] = {.lex_state = 238},
  [26] = {.lex_state = 238},
  [27] = {.lex_state = 238},
  [28] = {.lex_state = 238},
  [29] = {.lex_state = 238},
  [30] = {.lex_state = 238},
  [31] = {.lex_state = 238},
  [32] = {.lex_state = 238},
  [33] = {.lex_state = 238},
  [34] = {.lex_state = 238},
  [35] = {.lex_state = 238},
  [36] = {.lex_state = 238},
  [37] = {.lex_state = 238},
  [38] = {.lex_state = 238},
  [39] = {.lex_state = 238},
  [40] = {.lex_state = 238},
  [41] = {.lex_state = 238},
  [42] = {.lex_state = 238},
  [43] = {.lex_state = 238},
  [44] = {.lex_state = 237},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 237},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 237},
  [49] = {.lex_state = 237},
  [50] = {.lex_state = 237},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 237},
  [53] = {.lex_state = 237},
  [54] = {.lex_state = 237},
  [55] = {.lex_state = 237},
  [56] = {.lex_state = 237},
  [57] = {.lex_state = 237},
  [58] = {.lex_state = 237},
  [59] = {.lex_state = 237},
  [60] = {.lex_state = 237},
  [61] = {.lex_state = 237},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 237},
  [64] = {.lex_state = 237},
  [65] = {.lex_state = 237},
  [66] = {.lex_state = 238},
  [67] = {.lex_state = 237},
  [68] = {.lex_state = 237},
  [69] = {.lex_state = 237},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 237},
  [100] = {.lex_state = 237},
  [101] = {.lex_state = 238},
  [102] = {.lex_state = 237},
  [103] = {.lex_state = 238},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 238},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 238},
  [111] = {.lex_state = 238},
  [112] = {.lex_state = 238},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 238},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 238},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 238},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 238},
  [122] = {.lex_state = 238},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 238},
  [126] = {.lex_state = 238},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 238},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 238},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 238},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 31},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 31},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 24},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
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
  [192] = {.lex_state = 22},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 32},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 25},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 22},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 22},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 22},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 22},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 22},
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
  [244] = {.lex_state = 22},
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
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 22},
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
  [297] = {.lex_state = 22},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 22},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 22},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 22},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 22},
  [313] = {.lex_state = 22},
  [314] = {.lex_state = 22},
  [315] = {.lex_state = 22},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 22},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 22},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 22},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 22},
  [329] = {.lex_state = 398},
  [330] = {.lex_state = 23},
  [331] = {.lex_state = 25},
  [332] = {.lex_state = 22},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 22},
  [336] = {.lex_state = 22},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 22},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 22},
  [342] = {.lex_state = 237},
  [343] = {.lex_state = 22},
  [344] = {.lex_state = 22},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 25},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 22},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 22},
  [363] = {.lex_state = 22},
  [364] = {.lex_state = 23},
  [365] = {.lex_state = 398},
  [366] = {.lex_state = 237},
  [367] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_function_statement_token1] = ACTIONS(1),
    [aux_sym_create_function_statement_token2] = ACTIONS(1),
    [aux_sym_create_function_statement_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(345),
    [sym__statement] = STATE(120),
    [sym_create_function_statement] = STATE(216),
    [sym_create_domain_statement] = STATE(216),
    [sym_create_type_statement] = STATE(216),
    [sym_create_index_statement] = STATE(216),
    [sym_create_table_statement] = STATE(216),
    [sym_select_statement] = STATE(216),
    [sym_select_clause] = STATE(113),
    [sym_update_statement] = STATE(216),
    [sym_insert_statement] = STATE(216),
    [aux_sym_source_file_repeat1] = STATE(120),
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
    ACTIONS(15), 36,
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
  [48] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(19), 36,
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
  [96] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(23), 35,
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
  [143] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym__expression,
    STATE(147), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(128), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 8,
      aux_sym_create_function_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
    STATE(69), 13,
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
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(49), 32,
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
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 32,
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
  [306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 31,
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
  [352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(63), 32,
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
  [396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 32,
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
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 32,
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
  [484] = 6,
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
  [534] = 3,
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
  [576] = 3,
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
  [618] = 3,
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
  [660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 31,
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
  [702] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym__expression,
    STATE(147), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
    STATE(128), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 4,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(69), 13,
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
  [770] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym__expression,
    STATE(147), 1,
      sym_select_clause_body,
    STATE(128), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 4,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(69), 13,
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
  [840] = 4,
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
  [884] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym__expression,
    STATE(147), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
    STATE(128), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 4,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(69), 13,
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
  [952] = 3,
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
  [994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 30,
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
  [1038] = 3,
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
  [1080] = 3,
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
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 30,
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
  [1163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 30,
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
  [1204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 30,
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
  [1245] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(99), 22,
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
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 30,
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
  [1339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 30,
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
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 30,
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
  [1421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 28,
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
  [1466] = 3,
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
  [1507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 30,
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
  [1548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 30,
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
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      aux_sym_in_expression_token2,
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
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 30,
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
  [1671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 30,
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
  [1712] = 3,
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
  [1753] = 3,
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
  [1794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(153), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 29,
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
  [1837] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(155), 22,
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
  [1890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      aux_sym_in_expression_token2,
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
  [1931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 24,
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
  [1976] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_select_clause_token1,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(113), 1,
      sym_select_clause,
    STATE(141), 1,
      sym__expression,
    STATE(354), 1,
      sym_select_statement,
    STATE(19), 3,
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
  [2039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 24,
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
  [2078] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_select_clause_token1,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(113), 1,
      sym_select_clause,
    STATE(137), 1,
      sym__expression,
    STATE(348), 1,
      sym_select_statement,
    STATE(19), 3,
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
  [2141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(99), 17,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(153), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 23,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(91), 24,
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
  [2263] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym__expression,
    STATE(140), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [2321] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(203), 1,
      aux_sym_function_body_token1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(201), 14,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [2373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(131), 24,
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
  [2409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 24,
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
  [2445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(95), 24,
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
  [2481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 23,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(139), 24,
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
  [2557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 24,
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
  [2593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(87), 24,
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
  [2629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 24,
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
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 24,
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
  [2701] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym__expression,
    STATE(133), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [2759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 24,
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
  [2795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 24,
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
  [2831] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(155), 17,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2879] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(207), 15,
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
  [2929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 24,
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
  [2965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(147), 24,
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
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 24,
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
  [3037] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(111), 1,
      sym__expression,
    STATE(255), 1,
      sym_ordered_expression,
    STATE(19), 3,
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
  [3094] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(116), 1,
      sym__expression,
    STATE(355), 1,
      sym_values_clause_body,
    STATE(19), 3,
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
  [3151] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(112), 1,
      sym__expression,
    STATE(269), 1,
      sym_ordered_expression,
    STATE(19), 3,
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
  [3208] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym__expression,
    STATE(19), 3,
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
  [3265] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym__expression,
    STATE(19), 3,
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
  [3322] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(99), 1,
      sym__expression,
    STATE(174), 1,
      sym_group_by_clause_body,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym__expression,
    STATE(182), 1,
      sym_order_by_clause_body,
    STATE(19), 3,
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
  [3436] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(141), 1,
      sym__expression,
    STATE(19), 3,
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
  [3490] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym__expression,
    STATE(19), 3,
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
  [3544] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym__expression,
    STATE(19), 3,
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
  [3598] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [3652] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      sym__expression,
    STATE(19), 3,
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
  [3706] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym__expression,
    STATE(19), 3,
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
  [3760] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(100), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [3814] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(114), 1,
      sym__expression,
    STATE(19), 3,
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
  [3868] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [3922] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(130), 1,
      sym__expression,
    STATE(19), 3,
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
  [3976] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [4030] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(125), 1,
      sym__expression,
    STATE(19), 3,
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
  [4084] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(19), 3,
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
  [4138] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(110), 1,
      sym__expression,
    STATE(19), 3,
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
  [4192] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [4246] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym__expression,
    STATE(19), 3,
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
  [4300] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(126), 1,
      sym__expression,
    STATE(19), 3,
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
  [4354] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [4408] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(121), 1,
      sym__expression,
    STATE(19), 3,
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
  [4462] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym__expression,
    STATE(19), 3,
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
  [4516] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym__expression,
    STATE(19), 3,
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
  [4570] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(102), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(69), 13,
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
  [4624] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(215), 10,
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
  [4675] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(219), 11,
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
  [4721] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(221), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [4771] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(225), 11,
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
  [4817] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(219), 10,
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
  [4862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 22,
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
  [4890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 22,
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
  [4918] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [4961] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(237), 1,
      aux_sym_column_default_token1,
    ACTIONS(239), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(241), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(243), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(247), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(109), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5009] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(256), 1,
      aux_sym_column_default_token1,
    ACTIONS(259), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(262), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(265), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(268), 1,
      aux_sym_in_expression_token1,
    ACTIONS(271), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(274), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(108), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5054] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(237), 1,
      aux_sym_column_default_token1,
    ACTIONS(239), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(241), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(243), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(247), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(108), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5099] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5140] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    STATE(240), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(285), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5186] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(285), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5227] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(295), 1,
      aux_sym_where_clause_token1,
    ACTIONS(297), 1,
      aux_sym_from_clause_token1,
    STATE(124), 1,
      sym_from_clause,
    STATE(144), 1,
      sym_where_clause,
    STATE(152), 1,
      sym_group_by_clause,
    STATE(185), 1,
      sym_order_by_clause,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5266] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5308] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(306), 1,
      aux_sym_select_clause_token1,
    ACTIONS(309), 1,
      aux_sym_update_statement_token1,
    ACTIONS(312), 1,
      aux_sym_insert_statement_token1,
    STATE(113), 1,
      sym_select_clause,
    STATE(115), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(216), 8,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [5344] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5386] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(135), 1,
      sym_null_constraint,
    ACTIONS(317), 11,
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
  [5418] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5460] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(135), 1,
      sym_null_constraint,
    ACTIONS(321), 11,
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
  [5492] = 9,
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
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_select_clause,
    STATE(115), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(216), 8,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [5528] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5570] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(329), 13,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5637] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(295), 1,
      aux_sym_where_clause_token1,
    STATE(142), 1,
      sym_where_clause,
    STATE(159), 1,
      sym_group_by_clause,
    STATE(178), 1,
      sym_order_by_clause,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5670] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5707] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym__function_language_token1,
    ACTIONS(346), 1,
      aux_sym_function_body_token1,
    ACTIONS(342), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(129), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(348), 13,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5798] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym__function_language_token1,
    ACTIONS(346), 1,
      aux_sym_function_body_token1,
    ACTIONS(342), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(132), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(352), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5827] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(356), 13,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__function_language_token1,
    ACTIONS(366), 1,
      aux_sym_function_body_token1,
    ACTIONS(360), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(132), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 14,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5938] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(143), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(369), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 14,
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
  [5990] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      aux_sym_create_index_statement_token2,
    STATE(278), 1,
      sym_on_update_action,
    STATE(279), 1,
      sym_on_delete_action,
    ACTIONS(375), 10,
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
  [6018] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(381), 12,
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
  [6078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 14,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(385), 12,
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
  [6122] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(101), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(163), 1,
      sym_group_by_clause,
    STATE(184), 1,
      sym_order_by_clause,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(146), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(391), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(159), 1,
      sym_group_by_clause,
    STATE(178), 1,
      sym_order_by_clause,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      aux_sym_create_index_statement_token2,
    STATE(295), 1,
      sym_on_update_action,
    STATE(296), 1,
      sym_on_delete_action,
    ACTIONS(393), 10,
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
  [6266] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(400), 1,
      aux_sym_in_expression_token1,
    ACTIONS(403), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(146), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(395), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 13,
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
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      aux_sym_create_index_statement_token2,
    STATE(265), 1,
      sym_on_delete_action,
    STATE(300), 1,
      sym_on_update_action,
    ACTIONS(408), 10,
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
  [6339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(410), 10,
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
  [6361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_group_by_clause_body_repeat1,
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
  [6383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(415), 10,
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
  [6405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(178), 1,
      sym_order_by_clause,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 11,
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
  [6443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 11,
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
  [6460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 11,
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
  [6477] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(425), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(427), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(429), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(301), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 11,
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
  [6521] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(425), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(427), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(429), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(249), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [6548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(184), 1,
      sym_order_by_clause,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 11,
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
  [6586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 11,
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
  [6603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(437), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(177), 1,
      sym_order_by_clause,
    ACTIONS(439), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 11,
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
  [6662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 11,
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
  [6679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(410), 10,
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
  [6698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 11,
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
  [6715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(251), 1,
      sym_constrained_type,
    ACTIONS(17), 2,
      aux_sym_in_expression_token1,
      aux_sym__constraint_action_token3,
    STATE(196), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(15), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [6740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
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
  [6761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 10,
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
  [6777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 10,
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
  [6793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 10,
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
  [6809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 10,
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
  [6825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 10,
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
  [6841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 10,
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
  [6857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 10,
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
  [6873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6903] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym_in_expression_token1,
    ACTIONS(468), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(470), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(472), 1,
      aux_sym_TRUE_token1,
    ACTIONS(474), 1,
      aux_sym_FALSE_token1,
    STATE(26), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [6928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(476), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(484), 1,
      aux_sym_in_expression_token1,
    ACTIONS(486), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(488), 1,
      aux_sym_TRUE_token1,
    ACTIONS(490), 1,
      aux_sym_FALSE_token1,
    STATE(50), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(492), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(486), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(488), 1,
      aux_sym_TRUE_token1,
    ACTIONS(490), 1,
      aux_sym_FALSE_token1,
    STATE(68), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_where_clause_token1,
    STATE(219), 1,
      sym_where_clause,
    ACTIONS(497), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7109] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(501), 1,
      anon_sym_EQ,
    STATE(105), 1,
      sym_NULL,
    STATE(135), 1,
      sym_null_constraint,
    ACTIONS(503), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_where_clause_token1,
    STATE(210), 1,
      sym_where_clause,
    ACTIONS(505), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7153] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      sym_identifier,
    STATE(172), 1,
      sym_type_cast,
    STATE(166), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [7177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(470), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(472), 1,
      aux_sym_TRUE_token1,
    ACTIONS(474), 1,
      aux_sym_FALSE_token1,
    STATE(39), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_where_clause_token1,
    STATE(215), 1,
      sym_where_clause,
    ACTIONS(511), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7217] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(513), 1,
      aux_sym_setof_token1,
    STATE(117), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(127), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [7237] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(515), 1,
      anon_sym_EQ,
    STATE(105), 1,
      sym_NULL,
    STATE(135), 1,
      sym_null_constraint,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_where_clause_token1,
    STATE(208), 1,
      sym_where_clause,
    ACTIONS(519), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_where_clause_token1,
    STATE(211), 1,
      sym_where_clause,
    ACTIONS(521), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7312] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(525), 1,
      aux_sym_create_function_statement_token2,
    ACTIONS(527), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(529), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(531), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(533), 1,
      aux_sym_create_table_statement_token1,
    STATE(331), 1,
      sym_unique_constraint,
  [7337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_function_body_token1,
    ACTIONS(537), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7378] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_identifier,
    STATE(245), 1,
      sym_constrained_type,
    STATE(248), 1,
      sym_create_function_parameter,
    STATE(190), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_identifier,
    STATE(245), 1,
      sym_constrained_type,
    STATE(286), 1,
      sym_create_function_parameter,
    STATE(190), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SEMI,
    ACTIONS(561), 5,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(157), 1,
      sym_constrained_type,
    STATE(119), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 5,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      aux_sym_using_clause_token1,
    STATE(198), 1,
      sym_index_table_parameters,
    STATE(298), 1,
      sym_using_clause,
  [7626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(8), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(107), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(22), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(134), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      aux_sym_using_clause_token1,
    STATE(191), 1,
      sym_index_table_parameters,
    STATE(302), 1,
      sym_using_clause,
  [7690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(257), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_set_clause_token1,
    STATE(164), 1,
      sym__constraint_action,
    ACTIONS(583), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [7716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_set_clause_token1,
    STATE(153), 1,
      sym__constraint_action,
    ACTIONS(585), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [7730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_parameters_repeat1,
  [7743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_create_table_parameters_repeat1,
  [7769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      aux_sym_select_clause_token1,
    STATE(113), 1,
      sym_select_clause,
    STATE(267), 1,
      sym_select_statement,
  [7808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      aux_sym_select_clause_token1,
    STATE(113), 1,
      sym_select_clause,
    STATE(268), 1,
      sym_select_statement,
  [7821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_parameters_repeat1,
  [7847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_index_table_parameters_repeat1,
  [7860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym_string,
  [7873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym_string,
  [7886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_identifier,
    STATE(180), 1,
      sym_assigment_expression,
    STATE(203), 1,
      sym_set_clause_body,
  [7912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_EQ,
    ACTIONS(503), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_create_function_parameters_repeat1,
  [7962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_create_table_parameters_repeat1,
  [7975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_create_function_parameters_repeat1,
  [8025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_parameters_repeat1,
  [8038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_index_table_parameters_repeat1,
  [8051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(262), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_create_function_parameters_repeat1,
  [8114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_index_table_parameters_repeat1,
  [8153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_create_table_parameters_repeat1,
  [8166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      aux_sym_create_index_statement_token2,
    STATE(175), 1,
      sym_on_update_action,
  [8176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(271), 1,
      sym_parameter,
  [8186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    ACTIONS(672), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      anon_sym_SEMI,
  [8206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
  [8224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_references_constraint_token1,
    STATE(283), 1,
      sym_references_constraint,
  [8242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_create_table_parameters,
  [8276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      aux_sym_update_statement_token1,
    ACTIONS(688), 1,
      aux_sym_on_delete_action_token1,
  [8286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      aux_sym_create_index_statement_token2,
    STATE(176), 1,
      sym_on_delete_action,
  [8296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      aux_sym_create_index_statement_token2,
    STATE(176), 1,
      sym_on_update_action,
  [8306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_tuple,
  [8324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_tuple,
  [8334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_references_constraint_token1,
    STATE(291), 1,
      sym_references_constraint,
  [8352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_create_function_parameters,
  [8378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_tuple,
  [8388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_values_clause_token1,
    STATE(212), 1,
      sym_values_clause,
  [8406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      sym_parameters,
  [8424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_tuple,
  [8434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_set_clause_token1,
    STATE(197), 1,
      sym_set_clause,
  [8444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      aux_sym_create_index_statement_token2,
    STATE(171), 1,
      sym_on_delete_action,
  [8454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      aux_sym_create_index_statement_token2,
    STATE(171), 1,
      sym_on_update_action,
  [8464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(254), 1,
      sym_parameter,
  [8474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_index_table_parameters,
  [8484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_identifier,
    STATE(189), 1,
      sym_assigment_expression,
  [8494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      aux_sym_create_index_statement_token2,
    STATE(175), 1,
      sym_on_delete_action,
  [8504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_index_table_parameters,
  [8522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(104), 1,
      sym_NULL,
  [8532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
  [8539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
  [8546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
  [8553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      aux_sym_create_function_statement_token3,
  [8560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
  [8567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      aux_sym_group_by_clause_token2,
  [8574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      aux_sym_group_by_clause_token2,
  [8581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
  [8588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_identifier,
  [8595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_identifier,
  [8602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_identifier,
  [8609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_identifier,
  [8616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [8623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [8630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_identifier,
  [8637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
  [8644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [8651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_identifier,
  [8658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LPAREN,
  [8665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_EQ,
  [8672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_number_token1,
  [8679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      aux_sym_from_clause_token1,
  [8686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_identifier,
  [8693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_create_index_statement_token2,
  [8700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_identifier,
  [8707] = 2,
    ACTIONS(764), 1,
      aux_sym_string_token1,
    ACTIONS(766), 1,
      sym_comment,
  [8714] = 2,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym_string_token2,
  [8721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      aux_sym_create_index_statement_token1,
  [8728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_identifier,
  [8735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
  [8742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      aux_sym_create_function_statement_token3,
  [8749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_identifier,
  [8756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_identifier,
  [8763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym__constraint_action_token3,
  [8770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      aux_sym_function_body_token1,
  [8777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_identifier,
  [8784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      aux_sym_update_statement_token1,
  [8791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_identifier,
  [8798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      aux_sym_in_expression_token2,
  [8805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
  [8812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_identifier,
  [8819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
  [8826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_insert_statement_token2,
  [8833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      aux_sym_number_token1,
  [8840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [8847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SQUOTE,
  [8854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SQUOTE,
  [8868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_on_delete_action_token1,
  [8882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
  [8889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [8896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym_identifier,
  [8903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SQUOTE,
  [8910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym_from_clause_token1,
  [8917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym_create_function_statement_token3,
  [8924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACK,
  [8931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym_identifier,
  [8945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_identifier,
  [8952] = 2,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(826), 1,
      aux_sym_string_token2,
  [8959] = 2,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym_string_token1,
  [8966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      aux_sym_in_expression_token2,
  [8973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      aux_sym_create_index_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 352,
  [SMALL_STATE(10)] = 396,
  [SMALL_STATE(11)] = 440,
  [SMALL_STATE(12)] = 484,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 576,
  [SMALL_STATE(15)] = 618,
  [SMALL_STATE(16)] = 660,
  [SMALL_STATE(17)] = 702,
  [SMALL_STATE(18)] = 770,
  [SMALL_STATE(19)] = 840,
  [SMALL_STATE(20)] = 884,
  [SMALL_STATE(21)] = 952,
  [SMALL_STATE(22)] = 994,
  [SMALL_STATE(23)] = 1038,
  [SMALL_STATE(24)] = 1080,
  [SMALL_STATE(25)] = 1122,
  [SMALL_STATE(26)] = 1163,
  [SMALL_STATE(27)] = 1204,
  [SMALL_STATE(28)] = 1245,
  [SMALL_STATE(29)] = 1298,
  [SMALL_STATE(30)] = 1339,
  [SMALL_STATE(31)] = 1380,
  [SMALL_STATE(32)] = 1421,
  [SMALL_STATE(33)] = 1466,
  [SMALL_STATE(34)] = 1507,
  [SMALL_STATE(35)] = 1548,
  [SMALL_STATE(36)] = 1589,
  [SMALL_STATE(37)] = 1630,
  [SMALL_STATE(38)] = 1671,
  [SMALL_STATE(39)] = 1712,
  [SMALL_STATE(40)] = 1753,
  [SMALL_STATE(41)] = 1794,
  [SMALL_STATE(42)] = 1837,
  [SMALL_STATE(43)] = 1890,
  [SMALL_STATE(44)] = 1931,
  [SMALL_STATE(45)] = 1976,
  [SMALL_STATE(46)] = 2039,
  [SMALL_STATE(47)] = 2078,
  [SMALL_STATE(48)] = 2141,
  [SMALL_STATE(49)] = 2189,
  [SMALL_STATE(50)] = 2227,
  [SMALL_STATE(51)] = 2263,
  [SMALL_STATE(52)] = 2321,
  [SMALL_STATE(53)] = 2373,
  [SMALL_STATE(54)] = 2409,
  [SMALL_STATE(55)] = 2445,
  [SMALL_STATE(56)] = 2481,
  [SMALL_STATE(57)] = 2521,
  [SMALL_STATE(58)] = 2557,
  [SMALL_STATE(59)] = 2593,
  [SMALL_STATE(60)] = 2629,
  [SMALL_STATE(61)] = 2665,
  [SMALL_STATE(62)] = 2701,
  [SMALL_STATE(63)] = 2759,
  [SMALL_STATE(64)] = 2795,
  [SMALL_STATE(65)] = 2831,
  [SMALL_STATE(66)] = 2879,
  [SMALL_STATE(67)] = 2929,
  [SMALL_STATE(68)] = 2965,
  [SMALL_STATE(69)] = 3001,
  [SMALL_STATE(70)] = 3037,
  [SMALL_STATE(71)] = 3094,
  [SMALL_STATE(72)] = 3151,
  [SMALL_STATE(73)] = 3208,
  [SMALL_STATE(74)] = 3265,
  [SMALL_STATE(75)] = 3322,
  [SMALL_STATE(76)] = 3379,
  [SMALL_STATE(77)] = 3436,
  [SMALL_STATE(78)] = 3490,
  [SMALL_STATE(79)] = 3544,
  [SMALL_STATE(80)] = 3598,
  [SMALL_STATE(81)] = 3652,
  [SMALL_STATE(82)] = 3706,
  [SMALL_STATE(83)] = 3760,
  [SMALL_STATE(84)] = 3814,
  [SMALL_STATE(85)] = 3868,
  [SMALL_STATE(86)] = 3922,
  [SMALL_STATE(87)] = 3976,
  [SMALL_STATE(88)] = 4030,
  [SMALL_STATE(89)] = 4084,
  [SMALL_STATE(90)] = 4138,
  [SMALL_STATE(91)] = 4192,
  [SMALL_STATE(92)] = 4246,
  [SMALL_STATE(93)] = 4300,
  [SMALL_STATE(94)] = 4354,
  [SMALL_STATE(95)] = 4408,
  [SMALL_STATE(96)] = 4462,
  [SMALL_STATE(97)] = 4516,
  [SMALL_STATE(98)] = 4570,
  [SMALL_STATE(99)] = 4624,
  [SMALL_STATE(100)] = 4675,
  [SMALL_STATE(101)] = 4721,
  [SMALL_STATE(102)] = 4771,
  [SMALL_STATE(103)] = 4817,
  [SMALL_STATE(104)] = 4862,
  [SMALL_STATE(105)] = 4890,
  [SMALL_STATE(106)] = 4918,
  [SMALL_STATE(107)] = 4961,
  [SMALL_STATE(108)] = 5009,
  [SMALL_STATE(109)] = 5054,
  [SMALL_STATE(110)] = 5099,
  [SMALL_STATE(111)] = 5140,
  [SMALL_STATE(112)] = 5186,
  [SMALL_STATE(113)] = 5227,
  [SMALL_STATE(114)] = 5266,
  [SMALL_STATE(115)] = 5308,
  [SMALL_STATE(116)] = 5344,
  [SMALL_STATE(117)] = 5386,
  [SMALL_STATE(118)] = 5418,
  [SMALL_STATE(119)] = 5460,
  [SMALL_STATE(120)] = 5492,
  [SMALL_STATE(121)] = 5528,
  [SMALL_STATE(122)] = 5570,
  [SMALL_STATE(123)] = 5612,
  [SMALL_STATE(124)] = 5637,
  [SMALL_STATE(125)] = 5670,
  [SMALL_STATE(126)] = 5707,
  [SMALL_STATE(127)] = 5744,
  [SMALL_STATE(128)] = 5773,
  [SMALL_STATE(129)] = 5798,
  [SMALL_STATE(130)] = 5827,
  [SMALL_STATE(131)] = 5864,
  [SMALL_STATE(132)] = 5889,
  [SMALL_STATE(133)] = 5918,
  [SMALL_STATE(134)] = 5938,
  [SMALL_STATE(135)] = 5970,
  [SMALL_STATE(136)] = 5990,
  [SMALL_STATE(137)] = 6018,
  [SMALL_STATE(138)] = 6054,
  [SMALL_STATE(139)] = 6078,
  [SMALL_STATE(140)] = 6098,
  [SMALL_STATE(141)] = 6122,
  [SMALL_STATE(142)] = 6158,
  [SMALL_STATE(143)] = 6185,
  [SMALL_STATE(144)] = 6214,
  [SMALL_STATE(145)] = 6241,
  [SMALL_STATE(146)] = 6266,
  [SMALL_STATE(147)] = 6295,
  [SMALL_STATE(148)] = 6314,
  [SMALL_STATE(149)] = 6339,
  [SMALL_STATE(150)] = 6361,
  [SMALL_STATE(151)] = 6383,
  [SMALL_STATE(152)] = 6405,
  [SMALL_STATE(153)] = 6426,
  [SMALL_STATE(154)] = 6443,
  [SMALL_STATE(155)] = 6460,
  [SMALL_STATE(156)] = 6477,
  [SMALL_STATE(157)] = 6504,
  [SMALL_STATE(158)] = 6521,
  [SMALL_STATE(159)] = 6548,
  [SMALL_STATE(160)] = 6569,
  [SMALL_STATE(161)] = 6586,
  [SMALL_STATE(162)] = 6603,
  [SMALL_STATE(163)] = 6624,
  [SMALL_STATE(164)] = 6645,
  [SMALL_STATE(165)] = 6662,
  [SMALL_STATE(166)] = 6679,
  [SMALL_STATE(167)] = 6698,
  [SMALL_STATE(168)] = 6715,
  [SMALL_STATE(169)] = 6740,
  [SMALL_STATE(170)] = 6761,
  [SMALL_STATE(171)] = 6777,
  [SMALL_STATE(172)] = 6793,
  [SMALL_STATE(173)] = 6809,
  [SMALL_STATE(174)] = 6825,
  [SMALL_STATE(175)] = 6841,
  [SMALL_STATE(176)] = 6857,
  [SMALL_STATE(177)] = 6873,
  [SMALL_STATE(178)] = 6888,
  [SMALL_STATE(179)] = 6903,
  [SMALL_STATE(180)] = 6928,
  [SMALL_STATE(181)] = 6947,
  [SMALL_STATE(182)] = 6966,
  [SMALL_STATE(183)] = 6981,
  [SMALL_STATE(184)] = 7006,
  [SMALL_STATE(185)] = 7021,
  [SMALL_STATE(186)] = 7036,
  [SMALL_STATE(187)] = 7055,
  [SMALL_STATE(188)] = 7077,
  [SMALL_STATE(189)] = 7095,
  [SMALL_STATE(190)] = 7109,
  [SMALL_STATE(191)] = 7135,
  [SMALL_STATE(192)] = 7153,
  [SMALL_STATE(193)] = 7177,
  [SMALL_STATE(194)] = 7199,
  [SMALL_STATE(195)] = 7217,
  [SMALL_STATE(196)] = 7237,
  [SMALL_STATE(197)] = 7263,
  [SMALL_STATE(198)] = 7281,
  [SMALL_STATE(199)] = 7299,
  [SMALL_STATE(200)] = 7312,
  [SMALL_STATE(201)] = 7337,
  [SMALL_STATE(202)] = 7350,
  [SMALL_STATE(203)] = 7365,
  [SMALL_STATE(204)] = 7378,
  [SMALL_STATE(205)] = 7396,
  [SMALL_STATE(206)] = 7408,
  [SMALL_STATE(207)] = 7420,
  [SMALL_STATE(208)] = 7432,
  [SMALL_STATE(209)] = 7444,
  [SMALL_STATE(210)] = 7456,
  [SMALL_STATE(211)] = 7468,
  [SMALL_STATE(212)] = 7480,
  [SMALL_STATE(213)] = 7492,
  [SMALL_STATE(214)] = 7510,
  [SMALL_STATE(215)] = 7522,
  [SMALL_STATE(216)] = 7534,
  [SMALL_STATE(217)] = 7548,
  [SMALL_STATE(218)] = 7560,
  [SMALL_STATE(219)] = 7572,
  [SMALL_STATE(220)] = 7584,
  [SMALL_STATE(221)] = 7599,
  [SMALL_STATE(222)] = 7610,
  [SMALL_STATE(223)] = 7626,
  [SMALL_STATE(224)] = 7638,
  [SMALL_STATE(225)] = 7650,
  [SMALL_STATE(226)] = 7662,
  [SMALL_STATE(227)] = 7674,
  [SMALL_STATE(228)] = 7690,
  [SMALL_STATE(229)] = 7702,
  [SMALL_STATE(230)] = 7716,
  [SMALL_STATE(231)] = 7730,
  [SMALL_STATE(232)] = 7743,
  [SMALL_STATE(233)] = 7756,
  [SMALL_STATE(234)] = 7769,
  [SMALL_STATE(235)] = 7782,
  [SMALL_STATE(236)] = 7795,
  [SMALL_STATE(237)] = 7808,
  [SMALL_STATE(238)] = 7821,
  [SMALL_STATE(239)] = 7834,
  [SMALL_STATE(240)] = 7847,
  [SMALL_STATE(241)] = 7860,
  [SMALL_STATE(242)] = 7873,
  [SMALL_STATE(243)] = 7886,
  [SMALL_STATE(244)] = 7899,
  [SMALL_STATE(245)] = 7912,
  [SMALL_STATE(246)] = 7923,
  [SMALL_STATE(247)] = 7936,
  [SMALL_STATE(248)] = 7949,
  [SMALL_STATE(249)] = 7962,
  [SMALL_STATE(250)] = 7975,
  [SMALL_STATE(251)] = 7988,
  [SMALL_STATE(252)] = 7999,
  [SMALL_STATE(253)] = 8012,
  [SMALL_STATE(254)] = 8025,
  [SMALL_STATE(255)] = 8038,
  [SMALL_STATE(256)] = 8051,
  [SMALL_STATE(257)] = 8064,
  [SMALL_STATE(258)] = 8075,
  [SMALL_STATE(259)] = 8088,
  [SMALL_STATE(260)] = 8101,
  [SMALL_STATE(261)] = 8114,
  [SMALL_STATE(262)] = 8127,
  [SMALL_STATE(263)] = 8140,
  [SMALL_STATE(264)] = 8153,
  [SMALL_STATE(265)] = 8166,
  [SMALL_STATE(266)] = 8176,
  [SMALL_STATE(267)] = 8186,
  [SMALL_STATE(268)] = 8196,
  [SMALL_STATE(269)] = 8206,
  [SMALL_STATE(270)] = 8214,
  [SMALL_STATE(271)] = 8224,
  [SMALL_STATE(272)] = 8232,
  [SMALL_STATE(273)] = 8242,
  [SMALL_STATE(274)] = 8250,
  [SMALL_STATE(275)] = 8258,
  [SMALL_STATE(276)] = 8266,
  [SMALL_STATE(277)] = 8276,
  [SMALL_STATE(278)] = 8286,
  [SMALL_STATE(279)] = 8296,
  [SMALL_STATE(280)] = 8306,
  [SMALL_STATE(281)] = 8314,
  [SMALL_STATE(282)] = 8324,
  [SMALL_STATE(283)] = 8334,
  [SMALL_STATE(284)] = 8342,
  [SMALL_STATE(285)] = 8352,
  [SMALL_STATE(286)] = 8360,
  [SMALL_STATE(287)] = 8368,
  [SMALL_STATE(288)] = 8378,
  [SMALL_STATE(289)] = 8388,
  [SMALL_STATE(290)] = 8396,
  [SMALL_STATE(291)] = 8406,
  [SMALL_STATE(292)] = 8414,
  [SMALL_STATE(293)] = 8424,
  [SMALL_STATE(294)] = 8434,
  [SMALL_STATE(295)] = 8444,
  [SMALL_STATE(296)] = 8454,
  [SMALL_STATE(297)] = 8464,
  [SMALL_STATE(298)] = 8474,
  [SMALL_STATE(299)] = 8484,
  [SMALL_STATE(300)] = 8494,
  [SMALL_STATE(301)] = 8504,
  [SMALL_STATE(302)] = 8512,
  [SMALL_STATE(303)] = 8522,
  [SMALL_STATE(304)] = 8532,
  [SMALL_STATE(305)] = 8539,
  [SMALL_STATE(306)] = 8546,
  [SMALL_STATE(307)] = 8553,
  [SMALL_STATE(308)] = 8560,
  [SMALL_STATE(309)] = 8567,
  [SMALL_STATE(310)] = 8574,
  [SMALL_STATE(311)] = 8581,
  [SMALL_STATE(312)] = 8588,
  [SMALL_STATE(313)] = 8595,
  [SMALL_STATE(314)] = 8602,
  [SMALL_STATE(315)] = 8609,
  [SMALL_STATE(316)] = 8616,
  [SMALL_STATE(317)] = 8623,
  [SMALL_STATE(318)] = 8630,
  [SMALL_STATE(319)] = 8637,
  [SMALL_STATE(320)] = 8644,
  [SMALL_STATE(321)] = 8651,
  [SMALL_STATE(322)] = 8658,
  [SMALL_STATE(323)] = 8665,
  [SMALL_STATE(324)] = 8672,
  [SMALL_STATE(325)] = 8679,
  [SMALL_STATE(326)] = 8686,
  [SMALL_STATE(327)] = 8693,
  [SMALL_STATE(328)] = 8700,
  [SMALL_STATE(329)] = 8707,
  [SMALL_STATE(330)] = 8714,
  [SMALL_STATE(331)] = 8721,
  [SMALL_STATE(332)] = 8728,
  [SMALL_STATE(333)] = 8735,
  [SMALL_STATE(334)] = 8742,
  [SMALL_STATE(335)] = 8749,
  [SMALL_STATE(336)] = 8756,
  [SMALL_STATE(337)] = 8763,
  [SMALL_STATE(338)] = 8770,
  [SMALL_STATE(339)] = 8777,
  [SMALL_STATE(340)] = 8784,
  [SMALL_STATE(341)] = 8791,
  [SMALL_STATE(342)] = 8798,
  [SMALL_STATE(343)] = 8805,
  [SMALL_STATE(344)] = 8812,
  [SMALL_STATE(345)] = 8819,
  [SMALL_STATE(346)] = 8826,
  [SMALL_STATE(347)] = 8833,
  [SMALL_STATE(348)] = 8840,
  [SMALL_STATE(349)] = 8847,
  [SMALL_STATE(350)] = 8854,
  [SMALL_STATE(351)] = 8861,
  [SMALL_STATE(352)] = 8868,
  [SMALL_STATE(353)] = 8875,
  [SMALL_STATE(354)] = 8882,
  [SMALL_STATE(355)] = 8889,
  [SMALL_STATE(356)] = 8896,
  [SMALL_STATE(357)] = 8903,
  [SMALL_STATE(358)] = 8910,
  [SMALL_STATE(359)] = 8917,
  [SMALL_STATE(360)] = 8924,
  [SMALL_STATE(361)] = 8931,
  [SMALL_STATE(362)] = 8938,
  [SMALL_STATE(363)] = 8945,
  [SMALL_STATE(364)] = 8952,
  [SMALL_STATE(365)] = 8959,
  [SMALL_STATE(366)] = 8966,
  [SMALL_STATE(367)] = 8973,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 6),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 15),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 15),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 22),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 22),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 3, .production_id = 17),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 16),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 16),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 7),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 11),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 11),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 19),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 14),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(315),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(192),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(78),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(155),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(320),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(303),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(321),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 14),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(363),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(62),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 23),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 18),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6, .production_id = 12),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 12),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(160),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(318),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(270),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5, .production_id = 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 6, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(78),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(303),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(83),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 3, .production_id = 28),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 24),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 3, .production_id = 27),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_action, 2, .production_id = 29),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(79),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 8),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(299),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 21),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 21),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 13),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 13),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 3, .production_id = 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 4, .production_id = 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 5, .production_id = 9),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 13),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 21),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(156),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(266),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(344),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(213),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(72),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 25),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6, .production_id = 26),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 6),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 7, .production_id = 26),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 20),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [796] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
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
