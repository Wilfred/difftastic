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
#define STATE_COUNT 359
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 4
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_function_statement_token1 = 2,
  aux_sym_create_function_statement_token2 = 3,
  aux_sym__function_optimizer_hint_token1 = 4,
  aux_sym__function_optimizer_hint_token2 = 5,
  aux_sym__function_optimizer_hint_token3 = 6,
  aux_sym__function_language_token1 = 7,
  aux_sym_setof_token1 = 8,
  aux_sym_constrained_type_token1 = 9,
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
  aux_sym_create_index_statement_token3 = 21,
  anon_sym_CONSTRAINT = 22,
  aux_sym_column_default_token1 = 23,
  aux_sym_table_constraint_check_token1 = 24,
  aux_sym_table_constraint_foreign_key_token1 = 25,
  aux_sym_table_constraint_unique_token1 = 26,
  aux_sym_table_constraint_primary_key_token1 = 27,
  aux_sym_create_table_statement_token1 = 28,
  aux_sym_using_clause_token1 = 29,
  aux_sym_group_by_clause_token1 = 30,
  aux_sym_order_by_clause_token1 = 31,
  aux_sym_where_clause_token1 = 32,
  aux_sym_select_clause_token1 = 33,
  aux_sym_from_clause_token1 = 34,
  aux_sym_update_statement_token1 = 35,
  aux_sym_set_clause_token1 = 36,
  aux_sym_insert_statement_token1 = 37,
  aux_sym_insert_statement_token2 = 38,
  aux_sym_values_clause_token1 = 39,
  aux_sym_in_expression_token1 = 40,
  aux_sym_in_expression_token2 = 41,
  aux_sym_references_constraint_token1 = 42,
  aux_sym_on_update_action_token1 = 43,
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
  aux_sym_NULL_token1 = 57,
  aux_sym_TRUE_token1 = 58,
  aux_sym_FALSE_token1 = 59,
  aux_sym_number_token1 = 60,
  sym_identifier = 61,
  aux_sym_string_token1 = 62,
  aux_sym_string_token2 = 63,
  anon_sym_DASH_GT_GT = 64,
  aux_sym_ordered_expression_token1 = 65,
  aux_sym_ordered_expression_token2 = 66,
  anon_sym_LBRACK = 67,
  anon_sym_RBRACK = 68,
  anon_sym_COLON_COLON = 69,
  sym_comment = 70,
  anon_sym_TILDE = 71,
  anon_sym_PLUS = 72,
  anon_sym_DOLLAR = 73,
  sym_source_file = 74,
  sym__statement = 75,
  sym_create_function_statement = 76,
  sym__function_optimizer_hint = 77,
  sym__function_language = 78,
  sym__create_function_return_type = 79,
  sym_setof = 80,
  sym_constrained_type = 81,
  sym_create_function_parameter = 82,
  sym_create_function_parameters = 83,
  sym_function_body = 84,
  sym_create_domain_statement = 85,
  sym_create_type_statement = 86,
  sym_create_index_statement = 87,
  sym_create_table_column_parameter = 88,
  sym_named_constraint = 89,
  sym_column_default = 90,
  sym_create_table_parameters = 91,
  sym__table_constraint = 92,
  sym_table_constraint_check = 93,
  sym_table_constraint_foreign_key = 94,
  sym_table_constraint_unique = 95,
  sym_table_constraint_primary_key = 96,
  sym_primary_key_constraint = 97,
  sym_create_table_statement = 98,
  sym_using_clause = 99,
  sym_index_table_parameters = 100,
  sym_select_statement = 101,
  sym_group_by_clause_body = 102,
  sym_group_by_clause = 103,
  sym_order_by_clause_body = 104,
  sym_order_by_clause = 105,
  sym_where_clause = 106,
  sym__aliased_expression = 107,
  sym__aliasable_expression = 108,
  sym_select_clause_body = 109,
  sym_select_clause = 110,
  sym_from_clause = 111,
  sym_select_subexpression = 112,
  sym_update_statement = 113,
  sym_set_clause = 114,
  sym_set_clause_body = 115,
  sym_assigment_expression = 116,
  sym_insert_statement = 117,
  sym_values_clause = 118,
  sym_values_clause_body = 119,
  sym_in_expression = 120,
  sym_tuple = 121,
  sym_references_constraint = 122,
  sym_on_update_action = 123,
  sym_on_delete_action = 124,
  sym__constraint_action = 125,
  sym_unique_constraint = 126,
  sym_null_constraint = 127,
  sym_check_constraint = 128,
  sym_parameter = 129,
  sym_parameters = 130,
  sym_function_call = 131,
  sym_comparison_operator = 132,
  sym__parenthesized_expression = 133,
  sym_is_expression = 134,
  sym_distinct_from = 135,
  sym_boolean_expression = 136,
  sym_NULL = 137,
  sym_TRUE = 138,
  sym_FALSE = 139,
  sym_number = 140,
  sym_string = 141,
  sym_field_access = 142,
  sym_ordered_expression = 143,
  sym__type_alias = 144,
  sym_array_type = 145,
  sym__type = 146,
  sym_type_cast = 147,
  sym_binary_expression = 148,
  sym_argument_reference = 149,
  sym__expression = 150,
  aux_sym_source_file_repeat1 = 151,
  aux_sym_create_function_statement_repeat1 = 152,
  aux_sym_create_function_parameters_repeat1 = 153,
  aux_sym_create_domain_statement_repeat1 = 154,
  aux_sym_create_table_column_parameter_repeat1 = 155,
  aux_sym_create_table_parameters_repeat1 = 156,
  aux_sym_table_constraint_foreign_key_repeat1 = 157,
  aux_sym_index_table_parameters_repeat1 = 158,
  aux_sym_group_by_clause_body_repeat1 = 159,
  aux_sym_select_clause_body_repeat1 = 160,
  aux_sym_set_clause_body_repeat1 = 161,
  aux_sym_parameters_repeat1 = 162,
  anon_alias_sym_NOT = 163,
  alias_sym_default = 164,
  alias_sym_language = 165,
  alias_sym_type = 166,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_function_statement_token1] = "CREATE FUNCTION",
  [aux_sym_create_function_statement_token2] = "RETURNS",
  [aux_sym__function_optimizer_hint_token1] = "VOLATILE",
  [aux_sym__function_optimizer_hint_token2] = "IMMUTABLE",
  [aux_sym__function_optimizer_hint_token3] = "STABLE",
  [aux_sym__function_language_token1] = "LANGUAGE",
  [aux_sym_setof_token1] = "SETOF",
  [aux_sym_constrained_type_token1] = "not_null",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_function_body_token1] = "AS",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_create_domain_statement_token1] = "CREATE DOMAIN",
  [aux_sym_create_type_statement_token1] = "CREATE TYPE",
  [aux_sym_create_index_statement_token1] = "CREATE",
  [aux_sym_create_index_statement_token2] = "INDEX",
  [aux_sym_create_index_statement_token3] = "ON",
  [anon_sym_CONSTRAINT] = "CONSTRAINT",
  [aux_sym_column_default_token1] = "DEFAULT",
  [aux_sym_table_constraint_check_token1] = "CHECK",
  [aux_sym_table_constraint_foreign_key_token1] = "FOREIGN KEY",
  [aux_sym_table_constraint_unique_token1] = "UNIQUE",
  [aux_sym_table_constraint_primary_key_token1] = "PRIMARY KEY",
  [aux_sym_create_table_statement_token1] = "CREATE TABLE",
  [aux_sym_using_clause_token1] = "USING",
  [aux_sym_group_by_clause_token1] = "GROUP BY",
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
  [aux_sym_on_update_action_token1] = "ON UPDATE",
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
  [aux_sym_NULL_token1] = "NULL",
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
  [alias_sym_default] = "default",
  [alias_sym_language] = "language",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_function_statement_token1] = aux_sym_create_function_statement_token1,
  [aux_sym_create_function_statement_token2] = aux_sym_create_function_statement_token2,
  [aux_sym__function_optimizer_hint_token1] = aux_sym__function_optimizer_hint_token1,
  [aux_sym__function_optimizer_hint_token2] = aux_sym__function_optimizer_hint_token2,
  [aux_sym__function_optimizer_hint_token3] = aux_sym__function_optimizer_hint_token3,
  [aux_sym__function_language_token1] = aux_sym__function_language_token1,
  [aux_sym_setof_token1] = aux_sym_setof_token1,
  [aux_sym_constrained_type_token1] = aux_sym_constrained_type_token1,
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
  [aux_sym_create_index_statement_token3] = aux_sym_create_index_statement_token3,
  [anon_sym_CONSTRAINT] = anon_sym_CONSTRAINT,
  [aux_sym_column_default_token1] = aux_sym_column_default_token1,
  [aux_sym_table_constraint_check_token1] = aux_sym_table_constraint_check_token1,
  [aux_sym_table_constraint_foreign_key_token1] = aux_sym_table_constraint_foreign_key_token1,
  [aux_sym_table_constraint_unique_token1] = aux_sym_table_constraint_unique_token1,
  [aux_sym_table_constraint_primary_key_token1] = aux_sym_table_constraint_primary_key_token1,
  [aux_sym_create_table_statement_token1] = aux_sym_create_table_statement_token1,
  [aux_sym_using_clause_token1] = aux_sym_using_clause_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
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
  [aux_sym_on_update_action_token1] = aux_sym_on_update_action_token1,
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
  [aux_sym_NULL_token1] = aux_sym_NULL_token1,
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
  [aux_sym_constrained_type_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym_create_index_statement_token3] = {
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
  [aux_sym_on_update_action_token1] = {
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
  [aux_sym_NULL_token1] = {
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
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [10] = {.index = 7, .length = 2},
  [11] = {.index = 9, .length = 3},
  [12] = {.index = 12, .length = 1},
  [15] = {.index = 13, .length = 1},
  [16] = {.index = 14, .length = 2},
  [17] = {.index = 16, .length = 2},
  [18] = {.index = 18, .length = 1},
  [19] = {.index = 19, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
  [1] =
    {field_function, 0},
  [2] =
    {field_operator, 1},
  [3] =
    {field_name, 0},
    {field_type, 1},
  [5] =
    {field_arguments, 2},
    {field_function, 0},
  [7] =
    {field_name, 2},
    {field_table, 4},
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
    {field_action, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type,
  },
  [7] = {
    [1] = anon_alias_sym_NOT,
  },
  [8] = {
    [2] = alias_sym_default,
  },
  [9] = {
    [0] = anon_alias_sym_NOT,
  },
  [13] = {
    [3] = alias_sym_default,
  },
  [14] = {
    [1] = alias_sym_language,
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
      if (eof) ADVANCE(286);
      if (lookahead == '$') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '+') ADVANCE(468);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '\\') SKIP(273)
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == '~') ADVANCE(467);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(420);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(301);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '*') ADVANCE(456);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(271);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '/') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(453);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(464);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(466);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(416);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(406);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(463);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(458);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(309);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(267);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 135:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 136:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 137:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      END_STATE();
    case 138:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 139:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 140:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 141:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 142:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 143:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 144:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 145:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 155:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(311);
      END_STATE();
    case 156:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(120);
      END_STATE();
    case 157:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(123);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 168:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 169:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 171:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 176:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      END_STATE();
    case 177:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 178:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 180:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 182:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(300);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 198:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 199:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 200:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 201:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 202:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 207:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 208:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 209:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 210:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 211:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 213:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 214:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 215:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(261);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 230:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(300);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 254:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 255:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 256:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 257:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 258:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 259:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 260:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 261:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 262:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 263:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 264:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 265:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(307);
      END_STATE();
    case 266:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(319);
      END_STATE();
    case 267:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 268:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 269:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(316);
      END_STATE();
    case 270:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 271:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(455);
      END_STATE();
    case 272:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 273:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(272)
      END_STATE();
    case 274:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(282)
      END_STATE();
    case 275:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(282)
      if (lookahead == '\r') SKIP(274)
      END_STATE();
    case 276:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(283)
      END_STATE();
    case 277:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(283)
      if (lookahead == '\r') SKIP(276)
      END_STATE();
    case 278:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(284)
      END_STATE();
    case 279:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(284)
      if (lookahead == '\r') SKIP(278)
      END_STATE();
    case 280:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(285)
      END_STATE();
    case 281:
      if (eof) ADVANCE(286);
      if (lookahead == '\n') SKIP(285)
      if (lookahead == '\r') SKIP(280)
      END_STATE();
    case 282:
      if (eof) ADVANCE(286);
      if (lookahead == '$') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '\\') SKIP(275)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(420);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(404);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(413);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(282)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 283:
      if (eof) ADVANCE(286);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '+') ADVANCE(468);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '\\') SKIP(277)
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == '~') ADVANCE(467);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(216);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(221);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(283)
      END_STATE();
    case 284:
      if (eof) ADVANCE(286);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '+') ADVANCE(468);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '\\') SKIP(279)
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == '~') ADVANCE(467);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(284)
      END_STATE();
    case 285:
      if (eof) ADVANCE(286);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == '\\') SKIP(281)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(285)
      END_STATE();
    case 286:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_set_clause_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_values_clause_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(344);
      if (lookahead == '>') ADVANCE(345);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\r') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\'') ADVANCE(466);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(447);
      if (lookahead == '/') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(450);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(455);
      if (lookahead == '$') ADVANCE(465);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead == '*') ADVANCE(457);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '/') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(453);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(456);
      if (lookahead == '/') ADVANCE(455);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(456);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(455);
      if (lookahead == '$') ADVANCE(466);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(301);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 282},
  [3] = {.lex_state = 283},
  [4] = {.lex_state = 283},
  [5] = {.lex_state = 283},
  [6] = {.lex_state = 283},
  [7] = {.lex_state = 283},
  [8] = {.lex_state = 283},
  [9] = {.lex_state = 283},
  [10] = {.lex_state = 284},
  [11] = {.lex_state = 283},
  [12] = {.lex_state = 283},
  [13] = {.lex_state = 284},
  [14] = {.lex_state = 284},
  [15] = {.lex_state = 284},
  [16] = {.lex_state = 284},
  [17] = {.lex_state = 284},
  [18] = {.lex_state = 284},
  [19] = {.lex_state = 284},
  [20] = {.lex_state = 284},
  [21] = {.lex_state = 284},
  [22] = {.lex_state = 284},
  [23] = {.lex_state = 284},
  [24] = {.lex_state = 284},
  [25] = {.lex_state = 284},
  [26] = {.lex_state = 284},
  [27] = {.lex_state = 284},
  [28] = {.lex_state = 284},
  [29] = {.lex_state = 284},
  [30] = {.lex_state = 284},
  [31] = {.lex_state = 284},
  [32] = {.lex_state = 284},
  [33] = {.lex_state = 284},
  [34] = {.lex_state = 284},
  [35] = {.lex_state = 284},
  [36] = {.lex_state = 284},
  [37] = {.lex_state = 284},
  [38] = {.lex_state = 284},
  [39] = {.lex_state = 284},
  [40] = {.lex_state = 284},
  [41] = {.lex_state = 283},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 283},
  [46] = {.lex_state = 283},
  [47] = {.lex_state = 283},
  [48] = {.lex_state = 283},
  [49] = {.lex_state = 283},
  [50] = {.lex_state = 283},
  [51] = {.lex_state = 283},
  [52] = {.lex_state = 283},
  [53] = {.lex_state = 283},
  [54] = {.lex_state = 283},
  [55] = {.lex_state = 283},
  [56] = {.lex_state = 283},
  [57] = {.lex_state = 284},
  [58] = {.lex_state = 283},
  [59] = {.lex_state = 283},
  [60] = {.lex_state = 283},
  [61] = {.lex_state = 283},
  [62] = {.lex_state = 283},
  [63] = {.lex_state = 283},
  [64] = {.lex_state = 283},
  [65] = {.lex_state = 283},
  [66] = {.lex_state = 283},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 283},
  [70] = {.lex_state = 284},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 283},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 284},
  [79] = {.lex_state = 26},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 26},
  [82] = {.lex_state = 26},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 26},
  [85] = {.lex_state = 26},
  [86] = {.lex_state = 26},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 26},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 26},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 284},
  [105] = {.lex_state = 284},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 285},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 285},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 284},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 284},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 285},
  [136] = {.lex_state = 285},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 284},
  [140] = {.lex_state = 284},
  [141] = {.lex_state = 284},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 284},
  [144] = {.lex_state = 284},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 283},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 284},
  [153] = {.lex_state = 284},
  [154] = {.lex_state = 284},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 284},
  [160] = {.lex_state = 284},
  [161] = {.lex_state = 283},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 283},
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
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 283},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 39},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 39},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 283},
  [188] = {.lex_state = 33},
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
  [200] = {.lex_state = 32},
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
  [215] = {.lex_state = 40},
  [216] = {.lex_state = 30},
  [217] = {.lex_state = 30},
  [218] = {.lex_state = 30},
  [219] = {.lex_state = 285},
  [220] = {.lex_state = 285},
  [221] = {.lex_state = 30},
  [222] = {.lex_state = 30},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 30},
  [225] = {.lex_state = 30},
  [226] = {.lex_state = 283},
  [227] = {.lex_state = 30},
  [228] = {.lex_state = 283},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 30},
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
  [244] = {.lex_state = 30},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 285},
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
  [266] = {.lex_state = 283},
  [267] = {.lex_state = 283},
  [268] = {.lex_state = 283},
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
  [279] = {.lex_state = 30},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 283},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 30},
  [289] = {.lex_state = 283},
  [290] = {.lex_state = 283},
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
  [302] = {.lex_state = 30},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 30},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 30},
  [312] = {.lex_state = 30},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 30},
  [317] = {.lex_state = 30},
  [318] = {.lex_state = 283},
  [319] = {.lex_state = 30},
  [320] = {.lex_state = 30},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 30},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 30},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 30},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 446},
  [332] = {.lex_state = 31},
  [333] = {.lex_state = 30},
  [334] = {.lex_state = 285},
  [335] = {.lex_state = 30},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 30},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 285},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 30},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 30},
  [348] = {.lex_state = 30},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 30},
  [351] = {.lex_state = 30},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 30},
  [355] = {.lex_state = 31},
  [356] = {.lex_state = 446},
  [357] = {.lex_state = 283},
  [358] = {.lex_state = 30},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_function_statement_token1] = ACTIONS(1),
    [aux_sym_create_function_statement_token2] = ACTIONS(1),
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
    [aux_sym_create_index_statement_token3] = ACTIONS(1),
    [anon_sym_CONSTRAINT] = ACTIONS(1),
    [aux_sym_column_default_token1] = ACTIONS(1),
    [aux_sym_table_constraint_check_token1] = ACTIONS(1),
    [aux_sym_table_constraint_foreign_key_token1] = ACTIONS(1),
    [aux_sym_table_constraint_unique_token1] = ACTIONS(1),
    [aux_sym_table_constraint_primary_key_token1] = ACTIONS(1),
    [aux_sym_create_table_statement_token1] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
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
    [aux_sym_NULL_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(340),
    [sym__statement] = STATE(110),
    [sym_create_function_statement] = STATE(199),
    [sym_create_domain_statement] = STATE(199),
    [sym_create_type_statement] = STATE(199),
    [sym_create_index_statement] = STATE(199),
    [sym_create_table_statement] = STATE(199),
    [sym_select_statement] = STATE(199),
    [sym_select_clause] = STATE(106),
    [sym_update_statement] = STATE(199),
    [sym_insert_statement] = STATE(199),
    [aux_sym_source_file_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_function_statement_token1] = ACTIONS(7),
    [aux_sym_create_domain_statement_token1] = ACTIONS(9),
    [aux_sym_create_type_statement_token1] = ACTIONS(11),
    [aux_sym_create_index_statement_token1] = ACTIONS(13),
    [aux_sym_create_table_statement_token1] = ACTIONS(15),
    [aux_sym_select_clause_token1] = ACTIONS(17),
    [aux_sym_update_statement_token1] = ACTIONS(19),
    [aux_sym_insert_statement_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(51), 1,
      sym__expression,
    STATE(130), 1,
      sym_select_clause_body,
    STATE(114), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(31), 6,
      aux_sym_create_index_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [79] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(45), 35,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(49), 35,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 35,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 35,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(61), 35,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 35,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 35,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(89), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 34,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [984] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(95), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1634] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(159), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(157), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1873] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(177), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [1922] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(51), 1,
      sym__expression,
    STATE(130), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(114), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    ACTIONS(23), 3,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [1992] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(51), 1,
      sym__expression,
    STATE(130), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(114), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(23), 4,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2060] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(51), 1,
      sym__expression,
    STATE(130), 1,
      sym_select_clause_body,
    ACTIONS(31), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(114), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(23), 4,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(113), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(181), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(165), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2375] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(181), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(187), 1,
      aux_sym_function_body_token1,
    ACTIONS(189), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token1,
    ACTIONS(193), 1,
      aux_sym_in_expression_token2,
    ACTIONS(197), 1,
      aux_sym_is_expression_token1,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(183), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [2433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(161), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2553] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(181), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(191), 1,
      aux_sym_in_expression_token1,
    ACTIONS(193), 1,
      aux_sym_in_expression_token2,
    ACTIONS(197), 1,
      aux_sym_is_expression_token1,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(157), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2647] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(203), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(201), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [2703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2783] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(181), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(191), 1,
      aux_sym_in_expression_token1,
    ACTIONS(193), 1,
      aux_sym_in_expression_token2,
    ACTIONS(197), 1,
      aux_sym_is_expression_token1,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(95), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(121), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [2999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(153), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
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
  [3039] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(181), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(191), 1,
      aux_sym_in_expression_token1,
    ACTIONS(193), 1,
      aux_sym_in_expression_token2,
    ACTIONS(197), 1,
      aux_sym_is_expression_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      aux_sym_create_index_statement_token1,
    STATE(142), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(207), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [3096] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_select_clause_token1,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym_select_clause,
    STATE(159), 1,
      sym__expression,
    STATE(339), 1,
      sym_select_statement,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3159] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_select_clause_token1,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym_select_clause,
    STATE(160), 1,
      sym__expression,
    STATE(323), 1,
      sym_select_statement,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3222] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(181), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(191), 1,
      aux_sym_in_expression_token1,
    ACTIONS(193), 1,
      aux_sym_in_expression_token2,
    ACTIONS(197), 1,
      aux_sym_is_expression_token1,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(233), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [3274] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      aux_sym_create_index_statement_token1,
    STATE(158), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(237), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [3330] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(51), 1,
      sym__expression,
    STATE(129), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3388] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(181), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(191), 1,
      aux_sym_in_expression_token1,
    ACTIONS(193), 1,
      aux_sym_in_expression_token2,
    ACTIONS(197), 1,
      aux_sym_is_expression_token1,
    ACTIONS(245), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(243), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [3440] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(51), 1,
      sym__expression,
    STATE(123), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3498] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(139), 1,
      sym__expression,
    STATE(352), 1,
      sym_values_clause_body,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3555] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3612] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(162), 1,
      sym_group_by_clause_body,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3669] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(70), 1,
      sym__expression,
    STATE(165), 1,
      sym_order_by_clause_body,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3726] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(233), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [3777] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(132), 1,
      sym__expression,
    STATE(272), 1,
      sym_ordered_expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3834] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3891] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(124), 1,
      sym__expression,
    STATE(242), 1,
      sym_ordered_expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3948] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4002] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(144), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4056] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(154), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4110] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(160), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4164] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(49), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4218] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(36), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4272] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(69), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4326] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(53), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4380] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(64), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4434] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(60), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4488] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(55), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4542] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4596] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(140), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(152), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
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
    STATE(72), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(58), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(153), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      aux_sym_NULL_token1,
    ACTIONS(223), 1,
      aux_sym_TRUE_token1,
    ACTIONS(225), 1,
      aux_sym_FALSE_token1,
    ACTIONS(227), 1,
      aux_sym_number_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      sym__expression,
    STATE(21), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(38), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [5136] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(251), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5185] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(103), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(245), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(243), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5232] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(259), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(261), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(263), 1,
      aux_sym_where_clause_token1,
    ACTIONS(265), 1,
      aux_sym_from_clause_token1,
    STATE(119), 1,
      sym_from_clause,
    STATE(131), 1,
      sym_where_clause,
    STATE(148), 1,
      sym_group_by_clause,
    STATE(167), 1,
      sym_order_by_clause,
    ACTIONS(255), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(267), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [5305] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(275), 1,
      aux_sym_column_default_token1,
    ACTIONS(277), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(279), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(281), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token1,
    ACTIONS(285), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(287), 1,
      aux_sym_NULL_token1,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(271), 2,
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
  [5353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(45), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_LBRACK,
  [5381] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(9), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(11), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(13), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(15), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(17), 1,
      aux_sym_select_clause_token1,
    ACTIONS(19), 1,
      aux_sym_update_statement_token1,
    ACTIONS(21), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_select_clause,
    STATE(112), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(199), 8,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [5429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(85), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_LBRACK,
  [5457] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(296), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(299), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(302), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(305), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(308), 1,
      aux_sym_select_clause_token1,
    ACTIONS(311), 1,
      aux_sym_update_statement_token1,
    ACTIONS(314), 1,
      aux_sym_insert_statement_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(112), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(199), 8,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [5505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(317), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [5533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      aux_sym_create_index_statement_token1,
    STATE(122), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(321), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      aux_sym_create_index_statement_token1,
    STATE(115), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(327), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5595] = 12,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_in_expression_token1,
    ACTIONS(354), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(357), 1,
      aux_sym_NULL_token1,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(116), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym__function_language_token1,
    ACTIONS(366), 1,
      aux_sym_function_body_token1,
    ACTIONS(368), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(362), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(118), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5675] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym__function_language_token1,
    ACTIONS(378), 1,
      aux_sym_function_body_token1,
    ACTIONS(381), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(372), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(118), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5710] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(261), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(263), 1,
      aux_sym_where_clause_token1,
    ACTIONS(385), 1,
      aux_sym_create_index_statement_token1,
    STATE(134), 1,
      sym_where_clause,
    STATE(155), 1,
      sym_group_by_clause,
    STATE(168), 1,
      sym_order_by_clause,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5749] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(275), 1,
      aux_sym_column_default_token1,
    ACTIONS(277), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(279), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(281), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token1,
    ACTIONS(285), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(287), 1,
      aux_sym_NULL_token1,
    STATE(113), 1,
      sym_NULL,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(116), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5794] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym__function_language_token1,
    ACTIONS(366), 1,
      aux_sym_function_body_token1,
    ACTIONS(391), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(362), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(117), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      aux_sym_create_index_statement_token1,
    STATE(115), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(393), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      aux_sym_create_index_statement_token1,
    STATE(125), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(397), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5890] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    STATE(253), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(407), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      aux_sym_create_index_statement_token1,
    STATE(115), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(409), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5966] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token1,
    ACTIONS(287), 1,
      aux_sym_NULL_token1,
    ACTIONS(415), 1,
      aux_sym_create_index_statement_token1,
    STATE(113), 1,
      sym_NULL,
    STATE(137), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(413), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(417), 17,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(421), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(327), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(425), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6107] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(261), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(385), 1,
      aux_sym_create_index_statement_token1,
    STATE(155), 1,
      sym_group_by_clause,
    STATE(168), 1,
      sym_order_by_clause,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6140] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(407), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6181] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(435), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(438), 1,
      aux_sym_in_expression_token1,
    ACTIONS(441), 1,
      aux_sym_NULL_token1,
    STATE(113), 1,
      sym_NULL,
    STATE(133), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(261), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(446), 1,
      aux_sym_create_index_statement_token1,
    STATE(147), 1,
      sym_group_by_clause,
    STATE(166), 1,
      sym_order_by_clause,
    ACTIONS(444), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(452), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6278] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(456), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6307] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token1,
    ACTIONS(287), 1,
      aux_sym_NULL_token1,
    ACTIONS(462), 1,
      aux_sym_create_index_statement_token1,
    STATE(113), 1,
      sym_NULL,
    STATE(133), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(460), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(233), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6370] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6412] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6454] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      aux_sym_create_index_statement_token1,
    STATE(138), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(473), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6524] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6566] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(448), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(481), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(487), 1,
      aux_sym_create_index_statement_token1,
    STATE(169), 1,
      sym_order_by_clause,
    ACTIONS(485), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(385), 1,
      aux_sym_create_index_statement_token1,
    STATE(168), 1,
      sym_order_by_clause,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(489), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6731] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(499), 1,
      aux_sym_on_delete_action_token1,
    STATE(266), 1,
      sym_on_update_action,
    STATE(268), 1,
      sym_on_delete_action,
    ACTIONS(495), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [6762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(501), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6785] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6822] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6859] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(509), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(446), 1,
      aux_sym_create_index_statement_token1,
    STATE(166), 1,
      sym_order_by_clause,
    ACTIONS(444), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(233), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(514), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      aux_sym_create_index_statement_token1,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(518), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7000] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7036] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_in_expression_token1,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(405), 1,
      aux_sym_in_expression_token2,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [7072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(499), 1,
      aux_sym_on_delete_action_token1,
    STATE(267), 1,
      sym_on_update_action,
    STATE(286), 1,
      sym_on_delete_action,
    ACTIONS(526), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(528), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(499), 1,
      aux_sym_on_delete_action_token1,
    STATE(289), 1,
      sym_on_update_action,
    STATE(290), 1,
      sym_on_delete_action,
    ACTIONS(532), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      aux_sym_create_index_statement_token1,
    STATE(171), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(534), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(540), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(485), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(444), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(544), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      aux_sym_create_index_statement_token1,
    STATE(164), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(548), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      aux_sym_create_index_statement_token1,
    STATE(171), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(552), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(563), 1,
      aux_sym_where_clause_token1,
    STATE(204), 1,
      sym_where_clause,
    ACTIONS(559), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7354] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_where_clause_token1,
    ACTIONS(567), 1,
      aux_sym_create_index_statement_token1,
    STATE(195), 1,
      sym_where_clause,
    ACTIONS(565), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7378] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_where_clause_token1,
    ACTIONS(571), 1,
      aux_sym_create_index_statement_token1,
    STATE(201), 1,
      sym_where_clause,
    ACTIONS(569), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_where_clause_token1,
    ACTIONS(575), 1,
      aux_sym_create_index_statement_token1,
    STATE(193), 1,
      sym_where_clause,
    ACTIONS(573), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_where_clause_token1,
    ACTIONS(579), 1,
      aux_sym_create_index_statement_token1,
    STATE(196), 1,
      sym_where_clause,
    ACTIONS(577), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(552), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_delete_action_token1,
      aux_sym_NULL_token1,
  [7509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(585), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7547] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(591), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(593), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(595), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(597), 1,
      sym_identifier,
    STATE(235), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(599), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7593] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(591), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(593), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(595), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(597), 1,
      sym_identifier,
    STATE(291), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(603), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_function_body_token1,
    ACTIONS(611), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(607), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_update_action_token1,
      aux_sym_NULL_token1,
  [7677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 11,
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
      aux_sym_NULL_token1,
  [7694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(617), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(621), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(625), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(631), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(635), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(559), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(639), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(645), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    ACTIONS(653), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(649), 8,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
    STATE(239), 1,
      sym_constrained_type,
    STATE(219), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(45), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [7912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(573), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [7996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(665), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(669), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(673), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [8066] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      aux_sym_in_expression_token1,
    ACTIONS(681), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(683), 1,
      aux_sym_NULL_token1,
    ACTIONS(685), 1,
      aux_sym_TRUE_token1,
    ACTIONS(687), 1,
      aux_sym_FALSE_token1,
    STATE(23), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(689), 8,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [8108] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_NULL_token1,
    ACTIONS(693), 1,
      aux_sym_in_expression_token1,
    ACTIONS(695), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(697), 1,
      aux_sym_TRUE_token1,
    ACTIONS(699), 1,
      aux_sym_FALSE_token1,
    STATE(47), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_NULL_token1,
    ACTIONS(695), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(697), 1,
      aux_sym_TRUE_token1,
    ACTIONS(699), 1,
      aux_sym_FALSE_token1,
    STATE(54), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8155] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(683), 1,
      aux_sym_NULL_token1,
    ACTIONS(685), 1,
      aux_sym_TRUE_token1,
    ACTIONS(687), 1,
      aux_sym_FALSE_token1,
    STATE(37), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [8177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
    ACTIONS(701), 1,
      aux_sym_setof_token1,
    STATE(121), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(136), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8197] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(705), 1,
      sym_identifier,
    STATE(202), 1,
      sym_type_cast,
    STATE(181), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [8221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_identifier,
    STATE(233), 1,
      sym_create_function_parameter,
    STATE(264), 1,
      sym_constrained_type,
    STATE(220), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_identifier,
    STATE(264), 1,
      sym_constrained_type,
    STATE(287), 1,
      sym_create_function_parameter,
    STATE(220), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(709), 1,
      anon_sym_EQ,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(713), 1,
      anon_sym_EQ,
    ACTIONS(715), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
    STATE(145), 1,
      sym_constrained_type,
    STATE(135), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(126), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(723), 1,
      aux_sym_using_clause_token1,
    STATE(173), 1,
      sym_index_table_parameters,
    STATE(273), 1,
      sym_using_clause,
  [8334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym_identifier,
    STATE(20), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(8), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(179), 1,
      sym__constraint_action,
    ACTIONS(727), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [8370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(257), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(187), 1,
      sym__constraint_action,
    ACTIONS(729), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [8394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(723), 1,
      aux_sym_using_clause_token1,
    STATE(174), 1,
      sym_index_table_parameters,
    STATE(299), 1,
      sym_using_clause,
  [8410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(108), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_create_function_parameters_repeat1,
  [8435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_create_function_parameters_repeat1,
  [8461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_create_table_parameters_repeat1,
  [8487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_create_function_parameters_repeat1,
  [8513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_EQ,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_parameters_repeat1,
  [8550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_index_table_parameters_repeat1,
  [8576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_parameters_repeat1,
  [8589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_identifier,
    STATE(170), 1,
      sym_assigment_expression,
    STATE(183), 1,
      sym_set_clause_body,
  [8602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym_select_clause_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(293), 1,
      sym_select_statement,
  [8615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      aux_sym_select_clause_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(295), 1,
      sym_select_statement,
  [8628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(773), 1,
      aux_sym_create_index_statement_token2,
    STATE(334), 1,
      sym_unique_constraint,
  [8641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_string,
  [8667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_create_table_parameters_repeat1,
  [8680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_create_table_parameters_repeat1,
  [8706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_index_table_parameters_repeat1,
  [8719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_parameters_repeat1,
  [8795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_index_table_parameters_repeat1,
  [8808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_string,
  [8847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_EQ,
    ACTIONS(715), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_on_delete_action_token1,
    STATE(209), 1,
      sym_on_delete_action,
  [8881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_on_delete_action_token1,
    STATE(197), 1,
      sym_on_delete_action,
  [8891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_on_update_action_token1,
    STATE(209), 1,
      sym_on_update_action,
  [8901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_references_constraint_token1,
    STATE(278), 1,
      sym_references_constraint,
  [8911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    STATE(327), 1,
      sym_create_function_parameters,
  [8929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_index_table_parameters,
  [8947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym_create_table_parameters,
  [8957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_references_constraint_token1,
    STATE(277), 1,
      sym_references_constraint,
  [8975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_identifier,
    STATE(297), 1,
      sym_parameter,
  [9001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(828), 1,
      anon_sym_SQUOTE,
  [9019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      aux_sym_set_clause_token1,
    STATE(176), 1,
      sym_set_clause,
  [9029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_parameters,
  [9039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_tuple,
  [9049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_tuple,
  [9059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_on_update_action_token1,
    STATE(197), 1,
      sym_on_update_action,
  [9069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_identifier,
    STATE(177), 1,
      sym_assigment_expression,
  [9087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_on_delete_action_token1,
    STATE(205), 1,
      sym_on_delete_action,
  [9097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_on_update_action_token1,
    STATE(205), 1,
      sym_on_update_action,
  [9107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    ACTIONS(840), 1,
      anon_sym_SQUOTE,
  [9133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_tuple,
  [9143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(844), 1,
      anon_sym_SEMI,
  [9153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      aux_sym_values_clause_token1,
    STATE(191), 1,
      sym_values_clause,
  [9163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_NULL_token1,
    STATE(107), 1,
      sym_NULL,
  [9181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_index_table_parameters,
  [9191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_tuple,
  [9201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_identifier,
    STATE(240), 1,
      sym_parameter,
  [9219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_identifier,
  [9234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
  [9241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym_create_function_statement_token2,
  [9248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LPAREN,
  [9255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LPAREN,
  [9262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
  [9269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_create_index_statement_token3,
  [9276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_identifier,
  [9283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym_identifier,
  [9290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
  [9297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_EQ,
  [9304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LPAREN,
  [9311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_identifier,
  [9318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym_identifier,
  [9325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      aux_sym_in_expression_token2,
  [9332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_identifier,
  [9339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym_identifier,
  [9346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_SQUOTE,
  [9353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [9367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym_identifier,
  [9374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym_create_index_statement_token3,
  [9381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_identifier,
  [9388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym_create_function_statement_token2,
  [9395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym_identifier,
  [9402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym_create_function_statement_token2,
  [9409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      aux_sym_number_token1,
  [9416] = 2,
    ACTIONS(904), 1,
      aux_sym_string_token1,
    ACTIONS(906), 1,
      sym_comment,
  [9423] = 2,
    ACTIONS(906), 1,
      sym_comment,
    ACTIONS(908), 1,
      aux_sym_string_token2,
  [9430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_identifier,
  [9437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      aux_sym_create_index_statement_token2,
  [9444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_identifier,
  [9451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      aux_sym_function_body_token1,
  [9458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_identifier,
  [9465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      aux_sym_number_token1,
  [9472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
  [9479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      ts_builtin_sym_end,
  [9486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_SQUOTE,
  [9500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      aux_sym_insert_statement_token2,
  [9507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_SQUOTE,
  [9514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_identifier,
  [9521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_identifier,
  [9535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_identifier,
  [9542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
  [9549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_identifier,
  [9556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_identifier,
  [9563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
  [9570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
  [9577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_identifier,
  [9584] = 2,
    ACTIONS(906), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym_string_token2,
  [9591] = 2,
    ACTIONS(906), 1,
      sym_comment,
    ACTIONS(952), 1,
      aux_sym_string_token1,
  [9598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_in_expression_token2,
  [9605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 127,
  [SMALL_STATE(5)] = 175,
  [SMALL_STATE(6)] = 223,
  [SMALL_STATE(7)] = 271,
  [SMALL_STATE(8)] = 319,
  [SMALL_STATE(9)] = 369,
  [SMALL_STATE(10)] = 417,
  [SMALL_STATE(11)] = 471,
  [SMALL_STATE(12)] = 519,
  [SMALL_STATE(13)] = 566,
  [SMALL_STATE(14)] = 612,
  [SMALL_STATE(15)] = 658,
  [SMALL_STATE(16)] = 704,
  [SMALL_STATE(17)] = 750,
  [SMALL_STATE(18)] = 796,
  [SMALL_STATE(19)] = 842,
  [SMALL_STATE(20)] = 888,
  [SMALL_STATE(21)] = 936,
  [SMALL_STATE(22)] = 984,
  [SMALL_STATE(23)] = 1043,
  [SMALL_STATE(24)] = 1088,
  [SMALL_STATE(25)] = 1137,
  [SMALL_STATE(26)] = 1182,
  [SMALL_STATE(27)] = 1227,
  [SMALL_STATE(28)] = 1272,
  [SMALL_STATE(29)] = 1317,
  [SMALL_STATE(30)] = 1362,
  [SMALL_STATE(31)] = 1407,
  [SMALL_STATE(32)] = 1452,
  [SMALL_STATE(33)] = 1497,
  [SMALL_STATE(34)] = 1544,
  [SMALL_STATE(35)] = 1589,
  [SMALL_STATE(36)] = 1634,
  [SMALL_STATE(37)] = 1693,
  [SMALL_STATE(38)] = 1738,
  [SMALL_STATE(39)] = 1783,
  [SMALL_STATE(40)] = 1828,
  [SMALL_STATE(41)] = 1873,
  [SMALL_STATE(42)] = 1922,
  [SMALL_STATE(43)] = 1992,
  [SMALL_STATE(44)] = 2060,
  [SMALL_STATE(45)] = 2128,
  [SMALL_STATE(46)] = 2171,
  [SMALL_STATE(47)] = 2211,
  [SMALL_STATE(48)] = 2251,
  [SMALL_STATE(49)] = 2291,
  [SMALL_STATE(50)] = 2335,
  [SMALL_STATE(51)] = 2375,
  [SMALL_STATE(52)] = 2433,
  [SMALL_STATE(53)] = 2473,
  [SMALL_STATE(54)] = 2513,
  [SMALL_STATE(55)] = 2553,
  [SMALL_STATE(56)] = 2607,
  [SMALL_STATE(57)] = 2647,
  [SMALL_STATE(58)] = 2703,
  [SMALL_STATE(59)] = 2743,
  [SMALL_STATE(60)] = 2783,
  [SMALL_STATE(61)] = 2837,
  [SMALL_STATE(62)] = 2877,
  [SMALL_STATE(63)] = 2917,
  [SMALL_STATE(64)] = 2957,
  [SMALL_STATE(65)] = 2999,
  [SMALL_STATE(66)] = 3039,
  [SMALL_STATE(67)] = 3096,
  [SMALL_STATE(68)] = 3159,
  [SMALL_STATE(69)] = 3222,
  [SMALL_STATE(70)] = 3274,
  [SMALL_STATE(71)] = 3330,
  [SMALL_STATE(72)] = 3388,
  [SMALL_STATE(73)] = 3440,
  [SMALL_STATE(74)] = 3498,
  [SMALL_STATE(75)] = 3555,
  [SMALL_STATE(76)] = 3612,
  [SMALL_STATE(77)] = 3669,
  [SMALL_STATE(78)] = 3726,
  [SMALL_STATE(79)] = 3777,
  [SMALL_STATE(80)] = 3834,
  [SMALL_STATE(81)] = 3891,
  [SMALL_STATE(82)] = 3948,
  [SMALL_STATE(83)] = 4002,
  [SMALL_STATE(84)] = 4056,
  [SMALL_STATE(85)] = 4110,
  [SMALL_STATE(86)] = 4164,
  [SMALL_STATE(87)] = 4218,
  [SMALL_STATE(88)] = 4272,
  [SMALL_STATE(89)] = 4326,
  [SMALL_STATE(90)] = 4380,
  [SMALL_STATE(91)] = 4434,
  [SMALL_STATE(92)] = 4488,
  [SMALL_STATE(93)] = 4542,
  [SMALL_STATE(94)] = 4596,
  [SMALL_STATE(95)] = 4650,
  [SMALL_STATE(96)] = 4704,
  [SMALL_STATE(97)] = 4758,
  [SMALL_STATE(98)] = 4812,
  [SMALL_STATE(99)] = 4866,
  [SMALL_STATE(100)] = 4920,
  [SMALL_STATE(101)] = 4974,
  [SMALL_STATE(102)] = 5028,
  [SMALL_STATE(103)] = 5082,
  [SMALL_STATE(104)] = 5136,
  [SMALL_STATE(105)] = 5185,
  [SMALL_STATE(106)] = 5232,
  [SMALL_STATE(107)] = 5277,
  [SMALL_STATE(108)] = 5305,
  [SMALL_STATE(109)] = 5353,
  [SMALL_STATE(110)] = 5381,
  [SMALL_STATE(111)] = 5429,
  [SMALL_STATE(112)] = 5457,
  [SMALL_STATE(113)] = 5505,
  [SMALL_STATE(114)] = 5533,
  [SMALL_STATE(115)] = 5564,
  [SMALL_STATE(116)] = 5595,
  [SMALL_STATE(117)] = 5640,
  [SMALL_STATE(118)] = 5675,
  [SMALL_STATE(119)] = 5710,
  [SMALL_STATE(120)] = 5749,
  [SMALL_STATE(121)] = 5794,
  [SMALL_STATE(122)] = 5829,
  [SMALL_STATE(123)] = 5860,
  [SMALL_STATE(124)] = 5890,
  [SMALL_STATE(125)] = 5936,
  [SMALL_STATE(126)] = 5966,
  [SMALL_STATE(127)] = 6004,
  [SMALL_STATE(128)] = 6030,
  [SMALL_STATE(129)] = 6056,
  [SMALL_STATE(130)] = 6082,
  [SMALL_STATE(131)] = 6107,
  [SMALL_STATE(132)] = 6140,
  [SMALL_STATE(133)] = 6181,
  [SMALL_STATE(134)] = 6216,
  [SMALL_STATE(135)] = 6249,
  [SMALL_STATE(136)] = 6278,
  [SMALL_STATE(137)] = 6307,
  [SMALL_STATE(138)] = 6342,
  [SMALL_STATE(139)] = 6370,
  [SMALL_STATE(140)] = 6412,
  [SMALL_STATE(141)] = 6454,
  [SMALL_STATE(142)] = 6496,
  [SMALL_STATE(143)] = 6524,
  [SMALL_STATE(144)] = 6566,
  [SMALL_STATE(145)] = 6608,
  [SMALL_STATE(146)] = 6631,
  [SMALL_STATE(147)] = 6654,
  [SMALL_STATE(148)] = 6681,
  [SMALL_STATE(149)] = 6708,
  [SMALL_STATE(150)] = 6731,
  [SMALL_STATE(151)] = 6762,
  [SMALL_STATE(152)] = 6785,
  [SMALL_STATE(153)] = 6822,
  [SMALL_STATE(154)] = 6859,
  [SMALL_STATE(155)] = 6896,
  [SMALL_STATE(156)] = 6923,
  [SMALL_STATE(157)] = 6950,
  [SMALL_STATE(158)] = 6973,
  [SMALL_STATE(159)] = 7000,
  [SMALL_STATE(160)] = 7036,
  [SMALL_STATE(161)] = 7072,
  [SMALL_STATE(162)] = 7100,
  [SMALL_STATE(163)] = 7122,
  [SMALL_STATE(164)] = 7150,
  [SMALL_STATE(165)] = 7175,
  [SMALL_STATE(166)] = 7196,
  [SMALL_STATE(167)] = 7217,
  [SMALL_STATE(168)] = 7238,
  [SMALL_STATE(169)] = 7259,
  [SMALL_STATE(170)] = 7280,
  [SMALL_STATE(171)] = 7305,
  [SMALL_STATE(172)] = 7330,
  [SMALL_STATE(173)] = 7354,
  [SMALL_STATE(174)] = 7378,
  [SMALL_STATE(175)] = 7402,
  [SMALL_STATE(176)] = 7426,
  [SMALL_STATE(177)] = 7450,
  [SMALL_STATE(178)] = 7470,
  [SMALL_STATE(179)] = 7492,
  [SMALL_STATE(180)] = 7509,
  [SMALL_STATE(181)] = 7528,
  [SMALL_STATE(182)] = 7547,
  [SMALL_STATE(183)] = 7574,
  [SMALL_STATE(184)] = 7593,
  [SMALL_STATE(185)] = 7620,
  [SMALL_STATE(186)] = 7639,
  [SMALL_STATE(187)] = 7660,
  [SMALL_STATE(188)] = 7677,
  [SMALL_STATE(189)] = 7694,
  [SMALL_STATE(190)] = 7712,
  [SMALL_STATE(191)] = 7730,
  [SMALL_STATE(192)] = 7748,
  [SMALL_STATE(193)] = 7764,
  [SMALL_STATE(194)] = 7782,
  [SMALL_STATE(195)] = 7800,
  [SMALL_STATE(196)] = 7818,
  [SMALL_STATE(197)] = 7836,
  [SMALL_STATE(198)] = 7852,
  [SMALL_STATE(199)] = 7870,
  [SMALL_STATE(200)] = 7890,
  [SMALL_STATE(201)] = 7912,
  [SMALL_STATE(202)] = 7930,
  [SMALL_STATE(203)] = 7946,
  [SMALL_STATE(204)] = 7962,
  [SMALL_STATE(205)] = 7980,
  [SMALL_STATE(206)] = 7996,
  [SMALL_STATE(207)] = 8014,
  [SMALL_STATE(208)] = 8032,
  [SMALL_STATE(209)] = 8050,
  [SMALL_STATE(210)] = 8066,
  [SMALL_STATE(211)] = 8091,
  [SMALL_STATE(212)] = 8108,
  [SMALL_STATE(213)] = 8133,
  [SMALL_STATE(214)] = 8155,
  [SMALL_STATE(215)] = 8177,
  [SMALL_STATE(216)] = 8197,
  [SMALL_STATE(217)] = 8221,
  [SMALL_STATE(218)] = 8239,
  [SMALL_STATE(219)] = 8257,
  [SMALL_STATE(220)] = 8274,
  [SMALL_STATE(221)] = 8291,
  [SMALL_STATE(222)] = 8306,
  [SMALL_STATE(223)] = 8318,
  [SMALL_STATE(224)] = 8334,
  [SMALL_STATE(225)] = 8346,
  [SMALL_STATE(226)] = 8358,
  [SMALL_STATE(227)] = 8370,
  [SMALL_STATE(228)] = 8382,
  [SMALL_STATE(229)] = 8394,
  [SMALL_STATE(230)] = 8410,
  [SMALL_STATE(231)] = 8422,
  [SMALL_STATE(232)] = 8435,
  [SMALL_STATE(233)] = 8448,
  [SMALL_STATE(234)] = 8461,
  [SMALL_STATE(235)] = 8474,
  [SMALL_STATE(236)] = 8487,
  [SMALL_STATE(237)] = 8500,
  [SMALL_STATE(238)] = 8513,
  [SMALL_STATE(239)] = 8526,
  [SMALL_STATE(240)] = 8537,
  [SMALL_STATE(241)] = 8550,
  [SMALL_STATE(242)] = 8563,
  [SMALL_STATE(243)] = 8576,
  [SMALL_STATE(244)] = 8589,
  [SMALL_STATE(245)] = 8602,
  [SMALL_STATE(246)] = 8615,
  [SMALL_STATE(247)] = 8628,
  [SMALL_STATE(248)] = 8641,
  [SMALL_STATE(249)] = 8654,
  [SMALL_STATE(250)] = 8667,
  [SMALL_STATE(251)] = 8680,
  [SMALL_STATE(252)] = 8693,
  [SMALL_STATE(253)] = 8706,
  [SMALL_STATE(254)] = 8719,
  [SMALL_STATE(255)] = 8732,
  [SMALL_STATE(256)] = 8745,
  [SMALL_STATE(257)] = 8758,
  [SMALL_STATE(258)] = 8769,
  [SMALL_STATE(259)] = 8782,
  [SMALL_STATE(260)] = 8795,
  [SMALL_STATE(261)] = 8808,
  [SMALL_STATE(262)] = 8821,
  [SMALL_STATE(263)] = 8834,
  [SMALL_STATE(264)] = 8847,
  [SMALL_STATE(265)] = 8858,
  [SMALL_STATE(266)] = 8871,
  [SMALL_STATE(267)] = 8881,
  [SMALL_STATE(268)] = 8891,
  [SMALL_STATE(269)] = 8901,
  [SMALL_STATE(270)] = 8911,
  [SMALL_STATE(271)] = 8919,
  [SMALL_STATE(272)] = 8929,
  [SMALL_STATE(273)] = 8937,
  [SMALL_STATE(274)] = 8947,
  [SMALL_STATE(275)] = 8957,
  [SMALL_STATE(276)] = 8965,
  [SMALL_STATE(277)] = 8975,
  [SMALL_STATE(278)] = 8983,
  [SMALL_STATE(279)] = 8991,
  [SMALL_STATE(280)] = 9001,
  [SMALL_STATE(281)] = 9009,
  [SMALL_STATE(282)] = 9019,
  [SMALL_STATE(283)] = 9029,
  [SMALL_STATE(284)] = 9039,
  [SMALL_STATE(285)] = 9049,
  [SMALL_STATE(286)] = 9059,
  [SMALL_STATE(287)] = 9069,
  [SMALL_STATE(288)] = 9077,
  [SMALL_STATE(289)] = 9087,
  [SMALL_STATE(290)] = 9097,
  [SMALL_STATE(291)] = 9107,
  [SMALL_STATE(292)] = 9115,
  [SMALL_STATE(293)] = 9123,
  [SMALL_STATE(294)] = 9133,
  [SMALL_STATE(295)] = 9143,
  [SMALL_STATE(296)] = 9153,
  [SMALL_STATE(297)] = 9163,
  [SMALL_STATE(298)] = 9171,
  [SMALL_STATE(299)] = 9181,
  [SMALL_STATE(300)] = 9191,
  [SMALL_STATE(301)] = 9201,
  [SMALL_STATE(302)] = 9209,
  [SMALL_STATE(303)] = 9219,
  [SMALL_STATE(304)] = 9227,
  [SMALL_STATE(305)] = 9234,
  [SMALL_STATE(306)] = 9241,
  [SMALL_STATE(307)] = 9248,
  [SMALL_STATE(308)] = 9255,
  [SMALL_STATE(309)] = 9262,
  [SMALL_STATE(310)] = 9269,
  [SMALL_STATE(311)] = 9276,
  [SMALL_STATE(312)] = 9283,
  [SMALL_STATE(313)] = 9290,
  [SMALL_STATE(314)] = 9297,
  [SMALL_STATE(315)] = 9304,
  [SMALL_STATE(316)] = 9311,
  [SMALL_STATE(317)] = 9318,
  [SMALL_STATE(318)] = 9325,
  [SMALL_STATE(319)] = 9332,
  [SMALL_STATE(320)] = 9339,
  [SMALL_STATE(321)] = 9346,
  [SMALL_STATE(322)] = 9353,
  [SMALL_STATE(323)] = 9360,
  [SMALL_STATE(324)] = 9367,
  [SMALL_STATE(325)] = 9374,
  [SMALL_STATE(326)] = 9381,
  [SMALL_STATE(327)] = 9388,
  [SMALL_STATE(328)] = 9395,
  [SMALL_STATE(329)] = 9402,
  [SMALL_STATE(330)] = 9409,
  [SMALL_STATE(331)] = 9416,
  [SMALL_STATE(332)] = 9423,
  [SMALL_STATE(333)] = 9430,
  [SMALL_STATE(334)] = 9437,
  [SMALL_STATE(335)] = 9444,
  [SMALL_STATE(336)] = 9451,
  [SMALL_STATE(337)] = 9458,
  [SMALL_STATE(338)] = 9465,
  [SMALL_STATE(339)] = 9472,
  [SMALL_STATE(340)] = 9479,
  [SMALL_STATE(341)] = 9486,
  [SMALL_STATE(342)] = 9493,
  [SMALL_STATE(343)] = 9500,
  [SMALL_STATE(344)] = 9507,
  [SMALL_STATE(345)] = 9514,
  [SMALL_STATE(346)] = 9521,
  [SMALL_STATE(347)] = 9528,
  [SMALL_STATE(348)] = 9535,
  [SMALL_STATE(349)] = 9542,
  [SMALL_STATE(350)] = 9549,
  [SMALL_STATE(351)] = 9556,
  [SMALL_STATE(352)] = 9563,
  [SMALL_STATE(353)] = 9570,
  [SMALL_STATE(354)] = 9577,
  [SMALL_STATE(355)] = 9584,
  [SMALL_STATE(356)] = 9591,
  [SMALL_STATE(357)] = 9598,
  [SMALL_STATE(358)] = 9605,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 17),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 17),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliasable_expression, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assigment_expression, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(354),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(347),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(71),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(350),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(216),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(93),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(188),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(203),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(298),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(351),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(12),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(157),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(333),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(281),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliased_expression, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(93),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(298),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(12),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(88),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(94),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_clause_body, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_clause_body, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(288),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 16),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 16),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 16),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 16),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 19),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_clause, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 19),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert_statement, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 16),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 16),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause, 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values_clause, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(218),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(279),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(184),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(79),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(320),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 18),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 15),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [924] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
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
