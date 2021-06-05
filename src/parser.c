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
#define STATE_COUNT 314
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 5
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

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
  aux_sym__function_body_token1 = 14,
  aux_sym_create_domain_statement_token1 = 15,
  aux_sym_create_type_statement_token1 = 16,
  aux_sym_create_index_statement_token1 = 17,
  aux_sym_create_index_statement_token2 = 18,
  aux_sym_create_index_statement_token3 = 19,
  anon_sym_CONSTRAINT = 20,
  aux_sym_column_default_token1 = 21,
  aux_sym_table_constraint_check_token1 = 22,
  aux_sym_table_constraint_foreign_key_token1 = 23,
  aux_sym_table_constraint_unique_token1 = 24,
  aux_sym_table_constraint_primary_key_token1 = 25,
  aux_sym_create_table_statement_token1 = 26,
  aux_sym_using_clause_token1 = 27,
  aux_sym_group_by_clause_token1 = 28,
  aux_sym_order_by_clause_token1 = 29,
  aux_sym_where_clause_token1 = 30,
  aux_sym_select_clause_token1 = 31,
  aux_sym_from_clause_token1 = 32,
  aux_sym_in_expression_token1 = 33,
  aux_sym_in_expression_token2 = 34,
  aux_sym_references_constraint_token1 = 35,
  aux_sym_on_update_action_token1 = 36,
  aux_sym_on_delete_action_token1 = 37,
  aux_sym__constraint_action_token1 = 38,
  aux_sym__constraint_action_token2 = 39,
  aux_sym__constraint_action_token3 = 40,
  anon_sym_LT = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_LT_GT = 43,
  anon_sym_GT = 44,
  anon_sym_GT_EQ = 45,
  aux_sym_is_expression_token1 = 46,
  aux_sym_distinct_from_token1 = 47,
  aux_sym_boolean_expression_token1 = 48,
  aux_sym_boolean_expression_token2 = 49,
  aux_sym_NULL_token1 = 50,
  aux_sym_TRUE_token1 = 51,
  aux_sym_FALSE_token1 = 52,
  sym_number = 53,
  sym_identifier = 54,
  anon_sym_SQUOTE = 55,
  aux_sym_string_token1 = 56,
  anon_sym_DOLLAR_DOLLAR = 57,
  aux_sym_string_token2 = 58,
  anon_sym_DASH_GT_GT = 59,
  aux_sym_ordered_expression_token1 = 60,
  aux_sym_ordered_expression_token2 = 61,
  anon_sym_LBRACK = 62,
  anon_sym_RBRACK = 63,
  anon_sym_COLON_COLON = 64,
  sym_comment = 65,
  anon_sym_TILDE = 66,
  anon_sym_PLUS = 67,
  sym_source_file = 68,
  sym__statement = 69,
  sym_create_function_statement = 70,
  sym__function_optimizer_hint = 71,
  sym__function_language = 72,
  sym__create_function_return_type = 73,
  sym_setof = 74,
  sym_constrained_type = 75,
  sym_create_function_parameter = 76,
  sym_create_function_parameters = 77,
  sym__function_body = 78,
  sym_create_domain_statement = 79,
  sym_create_type_statement = 80,
  sym_create_index_statement = 81,
  sym_create_table_column_parameter = 82,
  sym_named_constraint = 83,
  sym_column_default = 84,
  sym_create_table_parameters = 85,
  sym__table_constraint = 86,
  sym_table_constraint_check = 87,
  sym_table_constraint_foreign_key = 88,
  sym_table_constraint_unique = 89,
  sym_table_constraint_primary_key = 90,
  sym_primary_key_constraint = 91,
  sym_create_table_statement = 92,
  sym_using_clause = 93,
  sym_index_table_parameters = 94,
  sym_select_statement = 95,
  sym_group_by_clause_body = 96,
  sym_group_by_clause = 97,
  sym_order_by_clause_body = 98,
  sym_order_by_clause = 99,
  sym_where_clause = 100,
  sym__aliased_expression = 101,
  sym__aliasable_expression = 102,
  sym_select_clause_body = 103,
  sym_select_clause = 104,
  sym_from_clause = 105,
  sym_in_expression = 106,
  sym_tuple = 107,
  sym_references_constraint = 108,
  sym_on_update_action = 109,
  sym_on_delete_action = 110,
  sym__constraint_action = 111,
  sym_unique_constraint = 112,
  sym_null_constraint = 113,
  sym_check_constraint = 114,
  sym_parameter = 115,
  sym_parameters = 116,
  sym_function_call = 117,
  sym_comparison_operator = 118,
  sym__parenthesized_expression = 119,
  sym_is_expression = 120,
  sym_distinct_from = 121,
  sym_boolean_expression = 122,
  sym_NULL = 123,
  sym_TRUE = 124,
  sym_FALSE = 125,
  sym_string = 126,
  sym_field_access = 127,
  sym_ordered_expression = 128,
  sym__type_alias = 129,
  sym_array_type = 130,
  sym__type = 131,
  sym_type_cast = 132,
  sym_binary_expression = 133,
  sym__expression = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym_create_function_statement_repeat1 = 136,
  aux_sym_create_function_parameters_repeat1 = 137,
  aux_sym_create_domain_statement_repeat1 = 138,
  aux_sym_create_table_column_parameter_repeat1 = 139,
  aux_sym_create_table_parameters_repeat1 = 140,
  aux_sym_table_constraint_foreign_key_repeat1 = 141,
  aux_sym_index_table_parameters_repeat1 = 142,
  aux_sym_group_by_clause_body_repeat1 = 143,
  aux_sym_select_clause_body_repeat1 = 144,
  aux_sym_parameters_repeat1 = 145,
  anon_alias_sym_NOT = 146,
  alias_sym_default = 147,
  alias_sym_function_body = 148,
  alias_sym_language = 149,
  alias_sym_type = 150,
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
  [aux_sym__function_body_token1] = "AS",
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
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
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
  [sym__function_body] = "_function_body",
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
  [sym_string] = "string",
  [sym_field_access] = "field_access",
  [sym_ordered_expression] = "ordered_expression",
  [sym__type_alias] = "_type_alias",
  [sym_array_type] = "array_type",
  [sym__type] = "_type",
  [sym_type_cast] = "type_cast",
  [sym_binary_expression] = "binary_expression",
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
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [anon_alias_sym_NOT] = "NOT",
  [alias_sym_default] = "default",
  [alias_sym_function_body] = "function_body",
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
  [aux_sym__function_body_token1] = aux_sym__function_body_token1,
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
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
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
  [sym__function_body] = sym__function_body,
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
  [sym_string] = sym_string,
  [sym_field_access] = sym_field_access,
  [sym_ordered_expression] = sym_ordered_expression,
  [sym__type_alias] = sym__type_alias,
  [sym_array_type] = sym_array_type,
  [sym__type] = sym__type,
  [sym_type_cast] = sym_type_cast,
  [sym_binary_expression] = sym_binary_expression,
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
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [anon_alias_sym_NOT] = anon_alias_sym_NOT,
  [alias_sym_default] = alias_sym_default,
  [alias_sym_function_body] = alias_sym_function_body,
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
  [aux_sym__function_body_token1] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
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
  [sym__function_body] = {
    .visible = false,
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
  [alias_sym_function_body] = {
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
  [16] = {.index = 13, .length = 1},
  [17] = {.index = 14, .length = 2},
  [18] = {.index = 16, .length = 2},
  [19] = {.index = 18, .length = 1},
  [20] = {.index = 19, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_content, 1},
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
  [15] = {
    [1] = alias_sym_function_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_string, 2,
    sym_string,
    alias_sym_function_body,
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
      if (eof) ADVANCE(263);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == '+') ADVANCE(429);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') SKIP(250)
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(49);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(189);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
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
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(182);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(336);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(10)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(409);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(248);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(414);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(425);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(427);
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(424);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(419);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(285);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 62:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 118:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 119:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 120:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 121:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 122:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 123:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 124:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 125:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 126:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 127:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 140:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(287);
      END_STATE();
    case 141:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(106);
      END_STATE();
    case 142:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 159:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 161:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 162:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 163:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 164:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 165:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 166:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 194:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 195:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 196:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 197:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(238);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 212:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 213:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 214:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      END_STATE();
    case 215:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(306);
      END_STATE();
    case 216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 232:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 233:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 234:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 235:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 236:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 237:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 238:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 239:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 240:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 241:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 242:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(283);
      END_STATE();
    case 243:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(295);
      END_STATE();
    case 244:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 245:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 246:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 247:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 248:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(416);
      END_STATE();
    case 249:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 250:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(249)
      END_STATE();
    case 251:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(260)
      END_STATE();
    case 252:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(260)
      if (lookahead == '\r') SKIP(251)
      END_STATE();
    case 253:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(259)
      END_STATE();
    case 254:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(259)
      if (lookahead == '\r') SKIP(253)
      END_STATE();
    case 255:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(261)
      END_STATE();
    case 256:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(261)
      if (lookahead == '\r') SKIP(255)
      END_STATE();
    case 257:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(262)
      END_STATE();
    case 258:
      if (eof) ADVANCE(263);
      if (lookahead == '\n') SKIP(262)
      if (lookahead == '\r') SKIP(257)
      END_STATE();
    case 259:
      if (eof) ADVANCE(263);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '\\') SKIP(254)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(259)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 260:
      if (eof) ADVANCE(263);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == '+') ADVANCE(429);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') SKIP(252)
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(189);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(260)
      END_STATE();
    case 261:
      if (eof) ADVANCE(263);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == '+') ADVANCE(429);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') SKIP(256)
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(261)
      END_STATE();
    case 262:
      if (eof) ADVANCE(263);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') SKIP(258)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(262)
      END_STATE();
    case 263:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__function_body_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '>') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '\r') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(408);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(408);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(427);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(408);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(407);
      if (lookahead == '/') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(411);
      if (lookahead == '$') ADVANCE(248);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '$') ADVANCE(248);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(248);
      if (lookahead == '*') ADVANCE(418);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(248);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(414);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(248);
      if (lookahead == '-') ADVANCE(412);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(248);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '/') ADVANCE(416);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == '$') ADVANCE(427);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 260},
  [3] = {.lex_state = 259},
  [4] = {.lex_state = 260},
  [5] = {.lex_state = 260},
  [6] = {.lex_state = 260},
  [7] = {.lex_state = 260},
  [8] = {.lex_state = 260},
  [9] = {.lex_state = 260},
  [10] = {.lex_state = 260},
  [11] = {.lex_state = 260},
  [12] = {.lex_state = 261},
  [13] = {.lex_state = 261},
  [14] = {.lex_state = 261},
  [15] = {.lex_state = 261},
  [16] = {.lex_state = 261},
  [17] = {.lex_state = 261},
  [18] = {.lex_state = 261},
  [19] = {.lex_state = 261},
  [20] = {.lex_state = 261},
  [21] = {.lex_state = 261},
  [22] = {.lex_state = 261},
  [23] = {.lex_state = 261},
  [24] = {.lex_state = 261},
  [25] = {.lex_state = 261},
  [26] = {.lex_state = 261},
  [27] = {.lex_state = 261},
  [28] = {.lex_state = 261},
  [29] = {.lex_state = 261},
  [30] = {.lex_state = 261},
  [31] = {.lex_state = 261},
  [32] = {.lex_state = 261},
  [33] = {.lex_state = 261},
  [34] = {.lex_state = 261},
  [35] = {.lex_state = 261},
  [36] = {.lex_state = 261},
  [37] = {.lex_state = 261},
  [38] = {.lex_state = 260},
  [39] = {.lex_state = 261},
  [40] = {.lex_state = 260},
  [41] = {.lex_state = 260},
  [42] = {.lex_state = 260},
  [43] = {.lex_state = 260},
  [44] = {.lex_state = 260},
  [45] = {.lex_state = 260},
  [46] = {.lex_state = 260},
  [47] = {.lex_state = 260},
  [48] = {.lex_state = 260},
  [49] = {.lex_state = 260},
  [50] = {.lex_state = 260},
  [51] = {.lex_state = 260},
  [52] = {.lex_state = 260},
  [53] = {.lex_state = 260},
  [54] = {.lex_state = 260},
  [55] = {.lex_state = 260},
  [56] = {.lex_state = 260},
  [57] = {.lex_state = 260},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 260},
  [62] = {.lex_state = 260},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 261},
  [69] = {.lex_state = 261},
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
  [92] = {.lex_state = 261},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 262},
  [99] = {.lex_state = 262},
  [100] = {.lex_state = 261},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 261},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 261},
  [106] = {.lex_state = 261},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 261},
  [109] = {.lex_state = 261},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 260},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 262},
  [118] = {.lex_state = 261},
  [119] = {.lex_state = 262},
  [120] = {.lex_state = 261},
  [121] = {.lex_state = 261},
  [122] = {.lex_state = 261},
  [123] = {.lex_state = 261},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 260},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 260},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 33},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 260},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 33},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 260},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 26},
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
  [172] = {.lex_state = 22},
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
  [186] = {.lex_state = 34},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 22},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 262},
  [196] = {.lex_state = 262},
  [197] = {.lex_state = 22},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 22},
  [202] = {.lex_state = 22},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 22},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 22},
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
  [218] = {.lex_state = 262},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
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
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 260},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 260},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 260},
  [249] = {.lex_state = 260},
  [250] = {.lex_state = 22},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 260},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 260},
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
  [271] = {.lex_state = 22},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 22},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 22},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 22},
  [281] = {.lex_state = 260},
  [282] = {.lex_state = 22},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 22},
  [286] = {.lex_state = 22},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 22},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 25},
  [291] = {.lex_state = 406},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 262},
  [294] = {.lex_state = 22},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 22},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 22},
  [302] = {.lex_state = 22},
  [303] = {.lex_state = 22},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 22},
  [306] = {.lex_state = 22},
  [307] = {.lex_state = 22},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 22},
  [310] = {.lex_state = 406},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 260},
  [313] = {.lex_state = 22},
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
    [aux_sym_setof_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__function_body_token1] = ACTIONS(1),
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
    [aux_sym_in_expression_token1] = ACTIONS(1),
    [aux_sym_in_expression_token2] = ACTIONS(1),
    [aux_sym_references_constraint_token1] = ACTIONS(1),
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
    [aux_sym_NULL_token1] = ACTIONS(1),
    [aux_sym_TRUE_token1] = ACTIONS(1),
    [aux_sym_FALSE_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH_GT_GT] = ACTIONS(1),
    [aux_sym_ordered_expression_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(298),
    [sym__statement] = STATE(112),
    [sym_create_function_statement] = STATE(188),
    [sym_create_domain_statement] = STATE(188),
    [sym_create_type_statement] = STATE(188),
    [sym_create_index_statement] = STATE(188),
    [sym_create_table_statement] = STATE(188),
    [sym_select_statement] = STATE(188),
    [sym_select_clause] = STATE(107),
    [aux_sym_source_file_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_function_statement_token1] = ACTIONS(7),
    [aux_sym_create_domain_statement_token1] = ACTIONS(9),
    [aux_sym_create_type_statement_token1] = ACTIONS(11),
    [aux_sym_create_index_statement_token1] = ACTIONS(13),
    [aux_sym_create_table_statement_token1] = ACTIONS(15),
    [aux_sym_select_clause_token1] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      aux_sym_create_index_statement_token1,
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
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [48] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(53), 1,
      sym__expression,
    STATE(139), 1,
      sym_select_clause_body,
    STATE(129), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(27), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(43), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(47), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(51), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(55), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(59), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(69), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(73), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym__function_body_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [894] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(89), 20,
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
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1070] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(115), 20,
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
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [1568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(77), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1612] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(163), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(161), 16,
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
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [1666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(77), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(111), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
    ACTIONS(137), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(131), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(147), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1916] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(167), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(171), 1,
      aux_sym_in_expression_token1,
    ACTIONS(173), 1,
      aux_sym_in_expression_token2,
    ACTIONS(177), 1,
      aux_sym_is_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(89), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(111), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2070] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(167), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(171), 1,
      aux_sym_in_expression_token1,
    ACTIONS(173), 1,
      aux_sym_in_expression_token2,
    ACTIONS(177), 1,
      aux_sym_is_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(115), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2158] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(171), 1,
      aux_sym_in_expression_token1,
    ACTIONS(173), 1,
      aux_sym_in_expression_token2,
    ACTIONS(177), 1,
      aux_sym_is_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(183), 1,
      aux_sym__function_body_token1,
    ACTIONS(185), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(169), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(181), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [2211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(127), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(77), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2316] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(171), 1,
      aux_sym_in_expression_token1,
    ACTIONS(173), 1,
      aux_sym_in_expression_token2,
    ACTIONS(177), 1,
      aux_sym_is_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      aux_sym_create_index_statement_token1,
    STATE(146), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(169), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [2368] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(53), 1,
      sym__expression,
    STATE(137), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2420] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(53), 1,
      sym__expression,
    STATE(132), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2472] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(106), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2523] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(171), 1,
      aux_sym_in_expression_token1,
    ACTIONS(173), 1,
      aux_sym_in_expression_token2,
    ACTIONS(177), 1,
      aux_sym_is_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(215), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(169), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(213), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [2570] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(171), 1,
      aux_sym_in_expression_token1,
    ACTIONS(173), 1,
      aux_sym_in_expression_token2,
    ACTIONS(177), 1,
      aux_sym_is_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(219), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(169), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [2617] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(57), 1,
      sym__expression,
    STATE(168), 1,
      sym_group_by_clause_body,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2668] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(69), 1,
      sym__expression,
    STATE(191), 1,
      sym_order_by_clause_body,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2719] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(102), 1,
      sym__expression,
    STATE(242), 1,
      sym_ordered_expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2770] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(100), 1,
      sym__expression,
    STATE(211), 1,
      sym_ordered_expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2821] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2872] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(219), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [2919] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      aux_sym_create_index_statement_token1,
    STATE(163), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [2970] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(47), 1,
      sym__expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3018] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(37), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3066] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(61), 1,
      sym__expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3114] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3162] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(122), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3210] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(109), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3258] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(68), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3306] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(92), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(52), 1,
      sym__expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3402] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(33), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3450] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(50), 1,
      sym__expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3498] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3546] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3594] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(62), 1,
      sym__expression,
    STATE(40), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3642] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(123), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3690] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(22), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3738] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(120), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3786] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(108), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3834] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(39), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3882] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(121), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3930] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(25), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [3978] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(201), 1,
      aux_sym_TRUE_token1,
    ACTIONS(203), 1,
      aux_sym_FALSE_token1,
    ACTIONS(205), 1,
      sym_number,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(26), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 10,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [4026] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(215), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4071] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(233), 1,
      aux_sym_column_default_token1,
    ACTIONS(235), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(237), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(239), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(241), 1,
      aux_sym_in_expression_token1,
    ACTIONS(243), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(245), 1,
      aux_sym_NULL_token1,
    STATE(96), 1,
      sym_NULL,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(94), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [4119] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(233), 1,
      aux_sym_column_default_token1,
    ACTIONS(235), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(237), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(239), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(241), 1,
      aux_sym_in_expression_token1,
    ACTIONS(243), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(245), 1,
      aux_sym_NULL_token1,
    STATE(96), 1,
      sym_NULL,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(95), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [4164] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(254), 1,
      aux_sym_column_default_token1,
    ACTIONS(257), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(260), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(263), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(266), 1,
      aux_sym_in_expression_token1,
    ACTIONS(269), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(272), 1,
      aux_sym_NULL_token1,
    STATE(96), 1,
      sym_NULL,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(95), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [4209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(275), 17,
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
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [4235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(279), 17,
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
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [4261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(65), 17,
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
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_LBRACK,
  [4287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(51), 17,
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
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      anon_sym_LBRACK,
  [4313] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(287), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym__function_language_token1,
    ACTIONS(295), 1,
      aux_sym__function_body_token1,
    ACTIONS(297), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(291), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(104), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4392] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(287), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym__function_language_token1,
    ACTIONS(295), 1,
      aux_sym__function_body_token1,
    ACTIONS(303), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(291), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(101), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4466] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym__function_language_token1,
    ACTIONS(313), 1,
      aux_sym__function_body_token1,
    ACTIONS(316), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(307), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(104), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4499] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4541] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4583] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(326), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(328), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(330), 1,
      aux_sym_where_clause_token1,
    ACTIONS(332), 1,
      aux_sym_from_clause_token1,
    STATE(124), 1,
      sym_from_clause,
    STATE(141), 1,
      sym_where_clause,
    STATE(152), 1,
      sym_group_by_clause,
    STATE(178), 1,
      sym_order_by_clause,
    ACTIONS(322), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4623] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4665] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4707] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(343), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(346), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(349), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(352), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(355), 1,
      aux_sym_select_clause_token1,
    STATE(107), 1,
      sym_select_clause,
    STATE(110), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(188), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [4747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(358), 15,
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
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4771] = 11,
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
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym_select_clause,
    STATE(110), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(188), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [4811] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(241), 1,
      aux_sym_in_expression_token1,
    ACTIONS(245), 1,
      aux_sym_NULL_token1,
    ACTIONS(366), 1,
      aux_sym_create_index_statement_token1,
    STATE(96), 1,
      sym_NULL,
    STATE(114), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(364), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4847] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(241), 1,
      aux_sym_in_expression_token1,
    ACTIONS(245), 1,
      aux_sym_NULL_token1,
    ACTIONS(370), 1,
      aux_sym_create_index_statement_token1,
    STATE(96), 1,
      sym_NULL,
    STATE(116), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4880] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(378), 1,
      aux_sym_on_delete_action_token1,
    STATE(240), 1,
      sym_on_update_action,
    STATE(243), 1,
      sym_on_delete_action,
    ACTIONS(374), 10,
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
  [4911] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(384), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(387), 1,
      aux_sym_in_expression_token1,
    ACTIONS(390), 1,
      aux_sym_NULL_token1,
    STATE(96), 1,
      sym_NULL,
    STATE(116), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(380), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(397), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(399), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4971] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(399), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(403), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5035] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5072] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5145] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_in_expression_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token2,
    ACTIONS(101), 1,
      aux_sym_is_expression_token1,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5181] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(328), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(330), 1,
      aux_sym_where_clause_token1,
    ACTIONS(417), 1,
      aux_sym_create_index_statement_token1,
    STATE(138), 1,
      sym_where_clause,
    STATE(155), 1,
      sym_group_by_clause,
    STATE(189), 1,
      sym_order_by_clause,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(378), 1,
      aux_sym_on_delete_action_token1,
    STATE(252), 1,
      sym_on_update_action,
    STATE(255), 1,
      sym_on_delete_action,
    ACTIONS(419), 10,
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
  [5243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      aux_sym_create_index_statement_token1,
    STATE(126), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(421), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [5269] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(378), 1,
      aux_sym_on_delete_action_token1,
    STATE(248), 1,
      sym_on_update_action,
    STATE(249), 1,
      sym_on_delete_action,
    ACTIONS(428), 10,
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
  [5297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      aux_sym_create_index_statement_token1,
    STATE(126), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(430), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [5323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      aux_sym_create_index_statement_token1,
    STATE(128), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(436), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [5349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      aux_sym_create_index_statement_token1,
    STATE(126), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(440), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [5374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(444), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(421), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [5416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(448), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [5437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(452), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(393), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(456), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym__function_body_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      aux_sym_create_index_statement_token1,
    STATE(130), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(460), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [5525] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(328), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(466), 1,
      aux_sym_create_index_statement_token1,
    STATE(165), 1,
      sym_group_by_clause,
    STATE(180), 1,
      sym_order_by_clause,
    ACTIONS(464), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(468), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [5573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    ACTIONS(472), 10,
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
  [5595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(328), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(417), 1,
      aux_sym_create_index_statement_token1,
    STATE(155), 1,
      sym_group_by_clause,
    STATE(189), 1,
      sym_order_by_clause,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(476), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(478), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(480), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(482), 1,
      sym_identifier,
    STATE(247), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [5650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    ACTIONS(472), 10,
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
  [5669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 11,
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
  [5686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 11,
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
  [5703] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      aux_sym_create_index_statement_token1,
    STATE(148), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [5726] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(476), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(478), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(480), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(482), 1,
      sym_identifier,
    STATE(219), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [5753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [5776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 11,
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
  [5793] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 10,
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
  [5832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(417), 1,
      aux_sym_create_index_statement_token1,
    STATE(189), 1,
      sym_order_by_clause,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(506), 1,
      aux_sym_where_clause_token1,
    STATE(173), 1,
      sym_where_clause,
    ACTIONS(502), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5876] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_where_clause_token1,
    ACTIONS(510), 1,
      aux_sym_create_index_statement_token1,
    STATE(175), 1,
      sym_where_clause,
    ACTIONS(508), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(466), 1,
      aux_sym_create_index_statement_token1,
    STATE(180), 1,
      sym_order_by_clause,
    ACTIONS(464), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5920] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_identifier,
    STATE(221), 1,
      sym_constrained_type,
    STATE(195), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(65), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [5942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 10,
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
  [5958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 10,
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
  [5974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_where_clause_token1,
    ACTIONS(518), 1,
      aux_sym_create_index_statement_token1,
    STATE(181), 1,
      sym_where_clause,
    ACTIONS(516), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 10,
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
  [6012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 10,
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
  [6028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 10,
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
  [6044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      aux_sym_create_index_statement_token1,
    STATE(150), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(526), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_where_clause_token1,
    ACTIONS(532), 1,
      aux_sym_create_index_statement_token1,
    STATE(176), 1,
      sym_where_clause,
    ACTIONS(530), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(536), 1,
      aux_sym_create_index_statement_token1,
    STATE(187), 1,
      sym_order_by_clause,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [6127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym__function_body_token1,
    ACTIONS(546), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(542), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(548), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [6163] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_NULL_token1,
    ACTIONS(552), 1,
      aux_sym_in_expression_token1,
    ACTIONS(554), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(556), 1,
      aux_sym_TRUE_token1,
    ACTIONS(558), 1,
      aux_sym_FALSE_token1,
    STATE(49), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [6188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [6205] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      aux_sym_in_expression_token1,
    ACTIONS(566), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(568), 1,
      aux_sym_NULL_token1,
    ACTIONS(570), 1,
      aux_sym_TRUE_token1,
    ACTIONS(572), 1,
      aux_sym_FALSE_token1,
    STATE(27), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [6230] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(574), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type_cast,
    STATE(143), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [6254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(530), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(576), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(580), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(584), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(588), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(592), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(508), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(596), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6414] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_NULL_token1,
    ACTIONS(554), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(556), 1,
      aux_sym_TRUE_token1,
    ACTIONS(558), 1,
      aux_sym_FALSE_token1,
    STATE(42), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [6436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(600), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6452] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(568), 1,
      aux_sym_NULL_token1,
    ACTIONS(570), 1,
      aux_sym_TRUE_token1,
    ACTIONS(572), 1,
      aux_sym_FALSE_token1,
    STATE(34), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [6474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_identifier,
    ACTIONS(604), 1,
      aux_sym_setof_token1,
    STATE(103), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(119), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(606), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(614), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(610), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(464), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(616), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(620), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(624), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_identifier,
    STATE(214), 1,
      sym_constrained_type,
    STATE(216), 1,
      sym_create_function_parameter,
    STATE(196), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_identifier,
    STATE(214), 1,
      sym_constrained_type,
    STATE(257), 1,
      sym_create_function_parameter,
    STATE(196), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(399), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_EQ,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(399), 1,
      anon_sym_LBRACK,
    ACTIONS(634), 1,
      anon_sym_EQ,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym_identifier,
    STATE(135), 1,
      sym_constrained_type,
    STATE(117), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(149), 1,
      sym__constraint_action,
    ACTIONS(640), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [6688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      aux_sym_using_clause_token1,
    STATE(159), 1,
      sym_index_table_parameters,
    STATE(244), 1,
      sym_using_clause,
  [6704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(145), 1,
      sym__constraint_action,
    ACTIONS(646), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [6716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_identifier,
    STATE(93), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_identifier,
    STATE(8), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      aux_sym_using_clause_token1,
    STATE(153), 1,
      sym_index_table_parameters,
    STATE(267), 1,
      sym_using_clause,
  [6756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_identifier,
    STATE(13), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_identifier,
    STATE(113), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_identifier,
    STATE(230), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [6792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_create_function_parameters_repeat1,
  [6805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_index_table_parameters_repeat1,
  [6818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(44), 1,
      sym_string,
  [6831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_index_table_parameters_repeat1,
  [6857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_group_by_clause_body_repeat1,
  [6870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_group_by_clause_body_repeat1,
  [6883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_EQ,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_create_table_parameters_repeat1,
  [6907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_create_function_parameters_repeat1,
  [6920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_parameters_repeat1,
  [6933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(682), 1,
      aux_sym_create_index_statement_token2,
    STATE(293), 1,
      sym_unique_constraint,
  [6946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_create_table_parameters_repeat1,
  [6959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym_index_table_parameters_repeat1,
  [6972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_EQ,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_create_function_parameters_repeat1,
  [7009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_parameters_repeat1,
  [7022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_create_table_parameters_repeat1,
  [7048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(136), 1,
      sym_string,
  [7087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LBRACK,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_parameters_repeat1,
  [7137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(28), 1,
      sym_string,
  [7150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_create_function_parameters,
  [7212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_on_delete_action_token1,
    STATE(151), 1,
      sym_on_delete_action,
  [7222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_on_update_action_token1,
    STATE(151), 1,
      sym_on_update_action,
  [7248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_index_table_parameters,
  [7258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_tuple,
  [7276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_on_delete_action_token1,
    STATE(162), 1,
      sym_on_delete_action,
  [7294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_on_update_action_token1,
    STATE(162), 1,
      sym_on_update_action,
  [7304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
    STATE(253), 1,
      sym_parameter,
  [7314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_on_delete_action_token1,
    STATE(161), 1,
      sym_on_delete_action,
  [7332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_tuple,
  [7350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_on_update_action_token1,
    STATE(161), 1,
      sym_on_update_action,
  [7360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_create_table_parameters,
  [7370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_references_constraint_token1,
    STATE(241), 1,
      sym_references_constraint,
  [7388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_NULL_token1,
    STATE(97), 1,
      sym_NULL,
  [7414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_tuple,
  [7440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_references_constraint_token1,
    STATE(259), 1,
      sym_references_constraint,
  [7450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
    STATE(224), 1,
      sym_parameter,
  [7460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_index_table_parameters,
  [7470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_parameters,
  [7480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_tuple,
  [7490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_identifier,
  [7505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
  [7512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
  [7519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
  [7526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_create_index_statement_token3,
  [7533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_identifier,
  [7540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
  [7547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_identifier,
  [7554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_create_function_statement_token2,
  [7561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_identifier,
  [7568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      aux_sym_in_expression_token2,
  [7575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_identifier,
  [7582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_DOLLAR_DOLLAR,
  [7589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
  [7596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_identifier,
  [7603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
  [7610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_create_index_statement_token3,
  [7617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_identifier,
  [7624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym_create_function_statement_token2,
  [7631] = 2,
    ACTIONS(787), 1,
      aux_sym_string_token2,
    ACTIONS(789), 1,
      sym_comment,
  [7638] = 2,
    ACTIONS(789), 1,
      sym_comment,
    ACTIONS(791), 1,
      aux_sym_string_token1,
  [7645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_LPAREN,
  [7652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      aux_sym_create_index_statement_token2,
  [7659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_identifier,
  [7666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      aux_sym__function_body_token1,
  [7673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym_create_function_statement_token2,
  [7680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym_identifier,
  [7687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
  [7694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_SQUOTE,
  [7701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_DOLLAR_DOLLAR,
  [7708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_identifier,
  [7715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym_identifier,
  [7722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_identifier,
  [7729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
  [7736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_identifier,
  [7743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_identifier,
  [7750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_identifier,
  [7757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
  [7764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_identifier,
  [7771] = 2,
    ACTIONS(789), 1,
      sym_comment,
    ACTIONS(827), 1,
      aux_sym_string_token1,
  [7778] = 2,
    ACTIONS(789), 1,
      sym_comment,
    ACTIONS(829), 1,
      aux_sym_string_token2,
  [7785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      aux_sym_in_expression_token2,
  [7792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 119,
  [SMALL_STATE(5)] = 163,
  [SMALL_STATE(6)] = 207,
  [SMALL_STATE(7)] = 251,
  [SMALL_STATE(8)] = 295,
  [SMALL_STATE(9)] = 341,
  [SMALL_STATE(10)] = 385,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 472,
  [SMALL_STATE(13)] = 521,
  [SMALL_STATE(14)] = 564,
  [SMALL_STATE(15)] = 605,
  [SMALL_STATE(16)] = 646,
  [SMALL_STATE(17)] = 687,
  [SMALL_STATE(18)] = 728,
  [SMALL_STATE(19)] = 769,
  [SMALL_STATE(20)] = 812,
  [SMALL_STATE(21)] = 853,
  [SMALL_STATE(22)] = 894,
  [SMALL_STATE(23)] = 948,
  [SMALL_STATE(24)] = 988,
  [SMALL_STATE(25)] = 1028,
  [SMALL_STATE(26)] = 1070,
  [SMALL_STATE(27)] = 1124,
  [SMALL_STATE(28)] = 1164,
  [SMALL_STATE(29)] = 1204,
  [SMALL_STATE(30)] = 1244,
  [SMALL_STATE(31)] = 1284,
  [SMALL_STATE(32)] = 1324,
  [SMALL_STATE(33)] = 1364,
  [SMALL_STATE(34)] = 1408,
  [SMALL_STATE(35)] = 1448,
  [SMALL_STATE(36)] = 1488,
  [SMALL_STATE(37)] = 1528,
  [SMALL_STATE(38)] = 1568,
  [SMALL_STATE(39)] = 1612,
  [SMALL_STATE(40)] = 1666,
  [SMALL_STATE(41)] = 1704,
  [SMALL_STATE(42)] = 1741,
  [SMALL_STATE(43)] = 1776,
  [SMALL_STATE(44)] = 1811,
  [SMALL_STATE(45)] = 1846,
  [SMALL_STATE(46)] = 1881,
  [SMALL_STATE(47)] = 1916,
  [SMALL_STATE(48)] = 1965,
  [SMALL_STATE(49)] = 2000,
  [SMALL_STATE(50)] = 2035,
  [SMALL_STATE(51)] = 2070,
  [SMALL_STATE(52)] = 2119,
  [SMALL_STATE(53)] = 2158,
  [SMALL_STATE(54)] = 2211,
  [SMALL_STATE(55)] = 2246,
  [SMALL_STATE(56)] = 2281,
  [SMALL_STATE(57)] = 2316,
  [SMALL_STATE(58)] = 2368,
  [SMALL_STATE(59)] = 2420,
  [SMALL_STATE(60)] = 2472,
  [SMALL_STATE(61)] = 2523,
  [SMALL_STATE(62)] = 2570,
  [SMALL_STATE(63)] = 2617,
  [SMALL_STATE(64)] = 2668,
  [SMALL_STATE(65)] = 2719,
  [SMALL_STATE(66)] = 2770,
  [SMALL_STATE(67)] = 2821,
  [SMALL_STATE(68)] = 2872,
  [SMALL_STATE(69)] = 2919,
  [SMALL_STATE(70)] = 2970,
  [SMALL_STATE(71)] = 3018,
  [SMALL_STATE(72)] = 3066,
  [SMALL_STATE(73)] = 3114,
  [SMALL_STATE(74)] = 3162,
  [SMALL_STATE(75)] = 3210,
  [SMALL_STATE(76)] = 3258,
  [SMALL_STATE(77)] = 3306,
  [SMALL_STATE(78)] = 3354,
  [SMALL_STATE(79)] = 3402,
  [SMALL_STATE(80)] = 3450,
  [SMALL_STATE(81)] = 3498,
  [SMALL_STATE(82)] = 3546,
  [SMALL_STATE(83)] = 3594,
  [SMALL_STATE(84)] = 3642,
  [SMALL_STATE(85)] = 3690,
  [SMALL_STATE(86)] = 3738,
  [SMALL_STATE(87)] = 3786,
  [SMALL_STATE(88)] = 3834,
  [SMALL_STATE(89)] = 3882,
  [SMALL_STATE(90)] = 3930,
  [SMALL_STATE(91)] = 3978,
  [SMALL_STATE(92)] = 4026,
  [SMALL_STATE(93)] = 4071,
  [SMALL_STATE(94)] = 4119,
  [SMALL_STATE(95)] = 4164,
  [SMALL_STATE(96)] = 4209,
  [SMALL_STATE(97)] = 4235,
  [SMALL_STATE(98)] = 4261,
  [SMALL_STATE(99)] = 4287,
  [SMALL_STATE(100)] = 4313,
  [SMALL_STATE(101)] = 4359,
  [SMALL_STATE(102)] = 4392,
  [SMALL_STATE(103)] = 4433,
  [SMALL_STATE(104)] = 4466,
  [SMALL_STATE(105)] = 4499,
  [SMALL_STATE(106)] = 4541,
  [SMALL_STATE(107)] = 4583,
  [SMALL_STATE(108)] = 4623,
  [SMALL_STATE(109)] = 4665,
  [SMALL_STATE(110)] = 4707,
  [SMALL_STATE(111)] = 4747,
  [SMALL_STATE(112)] = 4771,
  [SMALL_STATE(113)] = 4811,
  [SMALL_STATE(114)] = 4847,
  [SMALL_STATE(115)] = 4880,
  [SMALL_STATE(116)] = 4911,
  [SMALL_STATE(117)] = 4944,
  [SMALL_STATE(118)] = 4971,
  [SMALL_STATE(119)] = 5008,
  [SMALL_STATE(120)] = 5035,
  [SMALL_STATE(121)] = 5072,
  [SMALL_STATE(122)] = 5109,
  [SMALL_STATE(123)] = 5145,
  [SMALL_STATE(124)] = 5181,
  [SMALL_STATE(125)] = 5215,
  [SMALL_STATE(126)] = 5243,
  [SMALL_STATE(127)] = 5269,
  [SMALL_STATE(128)] = 5297,
  [SMALL_STATE(129)] = 5323,
  [SMALL_STATE(130)] = 5349,
  [SMALL_STATE(131)] = 5374,
  [SMALL_STATE(132)] = 5395,
  [SMALL_STATE(133)] = 5416,
  [SMALL_STATE(134)] = 5437,
  [SMALL_STATE(135)] = 5458,
  [SMALL_STATE(136)] = 5479,
  [SMALL_STATE(137)] = 5500,
  [SMALL_STATE(138)] = 5525,
  [SMALL_STATE(139)] = 5553,
  [SMALL_STATE(140)] = 5573,
  [SMALL_STATE(141)] = 5595,
  [SMALL_STATE(142)] = 5623,
  [SMALL_STATE(143)] = 5650,
  [SMALL_STATE(144)] = 5669,
  [SMALL_STATE(145)] = 5686,
  [SMALL_STATE(146)] = 5703,
  [SMALL_STATE(147)] = 5726,
  [SMALL_STATE(148)] = 5753,
  [SMALL_STATE(149)] = 5776,
  [SMALL_STATE(150)] = 5793,
  [SMALL_STATE(151)] = 5816,
  [SMALL_STATE(152)] = 5832,
  [SMALL_STATE(153)] = 5854,
  [SMALL_STATE(154)] = 5876,
  [SMALL_STATE(155)] = 5898,
  [SMALL_STATE(156)] = 5920,
  [SMALL_STATE(157)] = 5942,
  [SMALL_STATE(158)] = 5958,
  [SMALL_STATE(159)] = 5974,
  [SMALL_STATE(160)] = 5996,
  [SMALL_STATE(161)] = 6012,
  [SMALL_STATE(162)] = 6028,
  [SMALL_STATE(163)] = 6044,
  [SMALL_STATE(164)] = 6066,
  [SMALL_STATE(165)] = 6088,
  [SMALL_STATE(166)] = 6110,
  [SMALL_STATE(167)] = 6127,
  [SMALL_STATE(168)] = 6146,
  [SMALL_STATE(169)] = 6163,
  [SMALL_STATE(170)] = 6188,
  [SMALL_STATE(171)] = 6205,
  [SMALL_STATE(172)] = 6230,
  [SMALL_STATE(173)] = 6254,
  [SMALL_STATE(174)] = 6270,
  [SMALL_STATE(175)] = 6286,
  [SMALL_STATE(176)] = 6302,
  [SMALL_STATE(177)] = 6318,
  [SMALL_STATE(178)] = 6334,
  [SMALL_STATE(179)] = 6350,
  [SMALL_STATE(180)] = 6366,
  [SMALL_STATE(181)] = 6382,
  [SMALL_STATE(182)] = 6398,
  [SMALL_STATE(183)] = 6414,
  [SMALL_STATE(184)] = 6436,
  [SMALL_STATE(185)] = 6452,
  [SMALL_STATE(186)] = 6474,
  [SMALL_STATE(187)] = 6494,
  [SMALL_STATE(188)] = 6510,
  [SMALL_STATE(189)] = 6528,
  [SMALL_STATE(190)] = 6544,
  [SMALL_STATE(191)] = 6560,
  [SMALL_STATE(192)] = 6576,
  [SMALL_STATE(193)] = 6591,
  [SMALL_STATE(194)] = 6609,
  [SMALL_STATE(195)] = 6627,
  [SMALL_STATE(196)] = 6644,
  [SMALL_STATE(197)] = 6661,
  [SMALL_STATE(198)] = 6676,
  [SMALL_STATE(199)] = 6688,
  [SMALL_STATE(200)] = 6704,
  [SMALL_STATE(201)] = 6716,
  [SMALL_STATE(202)] = 6728,
  [SMALL_STATE(203)] = 6740,
  [SMALL_STATE(204)] = 6756,
  [SMALL_STATE(205)] = 6768,
  [SMALL_STATE(206)] = 6780,
  [SMALL_STATE(207)] = 6792,
  [SMALL_STATE(208)] = 6805,
  [SMALL_STATE(209)] = 6818,
  [SMALL_STATE(210)] = 6831,
  [SMALL_STATE(211)] = 6844,
  [SMALL_STATE(212)] = 6857,
  [SMALL_STATE(213)] = 6870,
  [SMALL_STATE(214)] = 6883,
  [SMALL_STATE(215)] = 6894,
  [SMALL_STATE(216)] = 6907,
  [SMALL_STATE(217)] = 6920,
  [SMALL_STATE(218)] = 6933,
  [SMALL_STATE(219)] = 6946,
  [SMALL_STATE(220)] = 6959,
  [SMALL_STATE(221)] = 6972,
  [SMALL_STATE(222)] = 6983,
  [SMALL_STATE(223)] = 6996,
  [SMALL_STATE(224)] = 7009,
  [SMALL_STATE(225)] = 7022,
  [SMALL_STATE(226)] = 7035,
  [SMALL_STATE(227)] = 7048,
  [SMALL_STATE(228)] = 7061,
  [SMALL_STATE(229)] = 7074,
  [SMALL_STATE(230)] = 7087,
  [SMALL_STATE(231)] = 7098,
  [SMALL_STATE(232)] = 7111,
  [SMALL_STATE(233)] = 7124,
  [SMALL_STATE(234)] = 7137,
  [SMALL_STATE(235)] = 7150,
  [SMALL_STATE(236)] = 7163,
  [SMALL_STATE(237)] = 7176,
  [SMALL_STATE(238)] = 7189,
  [SMALL_STATE(239)] = 7202,
  [SMALL_STATE(240)] = 7212,
  [SMALL_STATE(241)] = 7222,
  [SMALL_STATE(242)] = 7230,
  [SMALL_STATE(243)] = 7238,
  [SMALL_STATE(244)] = 7248,
  [SMALL_STATE(245)] = 7258,
  [SMALL_STATE(246)] = 7266,
  [SMALL_STATE(247)] = 7276,
  [SMALL_STATE(248)] = 7284,
  [SMALL_STATE(249)] = 7294,
  [SMALL_STATE(250)] = 7304,
  [SMALL_STATE(251)] = 7314,
  [SMALL_STATE(252)] = 7322,
  [SMALL_STATE(253)] = 7332,
  [SMALL_STATE(254)] = 7340,
  [SMALL_STATE(255)] = 7350,
  [SMALL_STATE(256)] = 7360,
  [SMALL_STATE(257)] = 7370,
  [SMALL_STATE(258)] = 7378,
  [SMALL_STATE(259)] = 7388,
  [SMALL_STATE(260)] = 7396,
  [SMALL_STATE(261)] = 7404,
  [SMALL_STATE(262)] = 7414,
  [SMALL_STATE(263)] = 7422,
  [SMALL_STATE(264)] = 7430,
  [SMALL_STATE(265)] = 7440,
  [SMALL_STATE(266)] = 7450,
  [SMALL_STATE(267)] = 7460,
  [SMALL_STATE(268)] = 7470,
  [SMALL_STATE(269)] = 7480,
  [SMALL_STATE(270)] = 7490,
  [SMALL_STATE(271)] = 7498,
  [SMALL_STATE(272)] = 7505,
  [SMALL_STATE(273)] = 7512,
  [SMALL_STATE(274)] = 7519,
  [SMALL_STATE(275)] = 7526,
  [SMALL_STATE(276)] = 7533,
  [SMALL_STATE(277)] = 7540,
  [SMALL_STATE(278)] = 7547,
  [SMALL_STATE(279)] = 7554,
  [SMALL_STATE(280)] = 7561,
  [SMALL_STATE(281)] = 7568,
  [SMALL_STATE(282)] = 7575,
  [SMALL_STATE(283)] = 7582,
  [SMALL_STATE(284)] = 7589,
  [SMALL_STATE(285)] = 7596,
  [SMALL_STATE(286)] = 7603,
  [SMALL_STATE(287)] = 7610,
  [SMALL_STATE(288)] = 7617,
  [SMALL_STATE(289)] = 7624,
  [SMALL_STATE(290)] = 7631,
  [SMALL_STATE(291)] = 7638,
  [SMALL_STATE(292)] = 7645,
  [SMALL_STATE(293)] = 7652,
  [SMALL_STATE(294)] = 7659,
  [SMALL_STATE(295)] = 7666,
  [SMALL_STATE(296)] = 7673,
  [SMALL_STATE(297)] = 7680,
  [SMALL_STATE(298)] = 7687,
  [SMALL_STATE(299)] = 7694,
  [SMALL_STATE(300)] = 7701,
  [SMALL_STATE(301)] = 7708,
  [SMALL_STATE(302)] = 7715,
  [SMALL_STATE(303)] = 7722,
  [SMALL_STATE(304)] = 7729,
  [SMALL_STATE(305)] = 7736,
  [SMALL_STATE(306)] = 7743,
  [SMALL_STATE(307)] = 7750,
  [SMALL_STATE(308)] = 7757,
  [SMALL_STATE(309)] = 7764,
  [SMALL_STATE(310)] = 7771,
  [SMALL_STATE(311)] = 7778,
  [SMALL_STATE(312)] = 7785,
  [SMALL_STATE(313)] = 7792,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliasable_expression, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(303),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(172),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(88),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(144),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(157),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(261),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(305),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(11),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(131),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(297),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(229),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(302),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(88),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(261),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(11),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(59),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliased_expression, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 20),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(83),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 20),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(76),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 5),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(194),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(65),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(142),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(250),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(307),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 19),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 16),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [805] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
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
