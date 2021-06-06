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
#define STATE_COUNT 329
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 4
#define TOKEN_COUNT 69
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
  aux_sym_in_expression_token1 = 35,
  aux_sym_in_expression_token2 = 36,
  aux_sym_references_constraint_token1 = 37,
  aux_sym_on_update_action_token1 = 38,
  aux_sym_on_delete_action_token1 = 39,
  aux_sym__constraint_action_token1 = 40,
  aux_sym__constraint_action_token2 = 41,
  aux_sym__constraint_action_token3 = 42,
  anon_sym_LT = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_LT_GT = 45,
  anon_sym_GT = 46,
  anon_sym_GT_EQ = 47,
  aux_sym_is_expression_token1 = 48,
  aux_sym_distinct_from_token1 = 49,
  aux_sym_boolean_expression_token1 = 50,
  aux_sym_boolean_expression_token2 = 51,
  aux_sym_NULL_token1 = 52,
  aux_sym_TRUE_token1 = 53,
  aux_sym_FALSE_token1 = 54,
  aux_sym_number_token1 = 55,
  sym_identifier = 56,
  aux_sym_string_token1 = 57,
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
  anon_sym_DOLLAR = 68,
  sym_source_file = 69,
  sym__statement = 70,
  sym_create_function_statement = 71,
  sym__function_optimizer_hint = 72,
  sym__function_language = 73,
  sym__create_function_return_type = 74,
  sym_setof = 75,
  sym_constrained_type = 76,
  sym_create_function_parameter = 77,
  sym_create_function_parameters = 78,
  sym_function_body = 79,
  sym_create_domain_statement = 80,
  sym_create_type_statement = 81,
  sym_create_index_statement = 82,
  sym_create_table_column_parameter = 83,
  sym_named_constraint = 84,
  sym_column_default = 85,
  sym_create_table_parameters = 86,
  sym__table_constraint = 87,
  sym_table_constraint_check = 88,
  sym_table_constraint_foreign_key = 89,
  sym_table_constraint_unique = 90,
  sym_table_constraint_primary_key = 91,
  sym_primary_key_constraint = 92,
  sym_create_table_statement = 93,
  sym_using_clause = 94,
  sym_index_table_parameters = 95,
  sym_select_statement = 96,
  sym_group_by_clause_body = 97,
  sym_group_by_clause = 98,
  sym_order_by_clause_body = 99,
  sym_order_by_clause = 100,
  sym_where_clause = 101,
  sym__aliased_expression = 102,
  sym__aliasable_expression = 103,
  sym_select_clause_body = 104,
  sym_select_clause = 105,
  sym_from_clause = 106,
  sym_in_expression = 107,
  sym_tuple = 108,
  sym_references_constraint = 109,
  sym_on_update_action = 110,
  sym_on_delete_action = 111,
  sym__constraint_action = 112,
  sym_unique_constraint = 113,
  sym_null_constraint = 114,
  sym_check_constraint = 115,
  sym_parameter = 116,
  sym_parameters = 117,
  sym_function_call = 118,
  sym_comparison_operator = 119,
  sym__parenthesized_expression = 120,
  sym_is_expression = 121,
  sym_distinct_from = 122,
  sym_boolean_expression = 123,
  sym_NULL = 124,
  sym_TRUE = 125,
  sym_FALSE = 126,
  sym_number = 127,
  sym_string = 128,
  sym_field_access = 129,
  sym_ordered_expression = 130,
  sym__type_alias = 131,
  sym_array_type = 132,
  sym__type = 133,
  sym_type_cast = 134,
  sym_binary_expression = 135,
  sym_argument_reference = 136,
  sym__expression = 137,
  aux_sym_source_file_repeat1 = 138,
  aux_sym_create_function_statement_repeat1 = 139,
  aux_sym_create_function_parameters_repeat1 = 140,
  aux_sym_create_domain_statement_repeat1 = 141,
  aux_sym_create_table_column_parameter_repeat1 = 142,
  aux_sym_create_table_parameters_repeat1 = 143,
  aux_sym_table_constraint_foreign_key_repeat1 = 144,
  aux_sym_index_table_parameters_repeat1 = 145,
  aux_sym_group_by_clause_body_repeat1 = 146,
  aux_sym_select_clause_body_repeat1 = 147,
  aux_sym_parameters_repeat1 = 148,
  anon_alias_sym_NOT = 149,
  alias_sym_default = 150,
  alias_sym_language = 151,
  alias_sym_type = 152,
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
      if (eof) ADVANCE(265);
      if (lookahead == '$') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '+') ADVANCE(431);
      if (lookahead == ',') ADVANCE(278);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '>') ADVANCE(319);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') SKIP(252)
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == '~') ADVANCE(430);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(206);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(191);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(29)
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
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(340);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(339);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(281);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(14)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(250);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '/') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(416);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == ',') ADVANCE(278);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == ',') ADVANCE(278);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(427);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(429);
      if (lookahead == '>') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(383);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(374);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(426);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(421);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(289);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(246);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(243);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 121:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 122:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 123:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      END_STATE();
    case 124:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(212);
      END_STATE();
    case 125:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 127:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(298);
      END_STATE();
    case 128:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 130:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 131:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 132:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 133:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 143:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(291);
      END_STATE();
    case 144:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(109);
      END_STATE();
    case 145:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(113);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 162:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(309);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      END_STATE();
    case 163:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 164:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 165:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 166:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 167:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 168:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 196:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 197:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 198:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 199:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(240);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 214:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      END_STATE();
    case 215:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      END_STATE();
    case 218:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 234:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 235:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 236:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 237:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 238:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 239:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 240:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 241:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 242:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 243:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 244:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(287);
      END_STATE();
    case 245:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 246:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 247:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(293);
      END_STATE();
    case 248:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 249:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(418);
      END_STATE();
    case 251:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 252:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(251)
      END_STATE();
    case 253:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(261)
      END_STATE();
    case 254:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(261)
      if (lookahead == '\r') SKIP(253)
      END_STATE();
    case 255:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(262)
      END_STATE();
    case 256:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(262)
      if (lookahead == '\r') SKIP(255)
      END_STATE();
    case 257:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(263)
      END_STATE();
    case 258:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(263)
      if (lookahead == '\r') SKIP(257)
      END_STATE();
    case 259:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(264)
      END_STATE();
    case 260:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(264)
      if (lookahead == '\r') SKIP(259)
      END_STATE();
    case 261:
      if (eof) ADVANCE(265);
      if (lookahead == '$') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '\\') SKIP(254)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(339);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(261)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 262:
      if (eof) ADVANCE(265);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '+') ADVANCE(431);
      if (lookahead == ',') ADVANCE(278);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '>') ADVANCE(319);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') SKIP(256)
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == '~') ADVANCE(430);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(206);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(133);
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
      if (eof) ADVANCE(265);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '+') ADVANCE(431);
      if (lookahead == ',') ADVANCE(278);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(316);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '>') ADVANCE(319);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') SKIP(258)
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == '~') ADVANCE(430);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
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
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == ',') ADVANCE(278);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') SKIP(260)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(191);
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
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(317);
      if (lookahead == '>') ADVANCE(318);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(187);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(410);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == '\r') ADVANCE(413);
      if (lookahead == '$') ADVANCE(250);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == '$') ADVANCE(250);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == '$') ADVANCE(428);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(250);
      if (lookahead == '*') ADVANCE(420);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(250);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '/') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(416);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(250);
      if (lookahead == '-') ADVANCE(414);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(250);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == '$') ADVANCE(429);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(281);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 261},
  [3] = {.lex_state = 262},
  [4] = {.lex_state = 262},
  [5] = {.lex_state = 262},
  [6] = {.lex_state = 262},
  [7] = {.lex_state = 262},
  [8] = {.lex_state = 262},
  [9] = {.lex_state = 262},
  [10] = {.lex_state = 262},
  [11] = {.lex_state = 263},
  [12] = {.lex_state = 262},
  [13] = {.lex_state = 263},
  [14] = {.lex_state = 263},
  [15] = {.lex_state = 263},
  [16] = {.lex_state = 263},
  [17] = {.lex_state = 263},
  [18] = {.lex_state = 263},
  [19] = {.lex_state = 263},
  [20] = {.lex_state = 263},
  [21] = {.lex_state = 263},
  [22] = {.lex_state = 263},
  [23] = {.lex_state = 263},
  [24] = {.lex_state = 263},
  [25] = {.lex_state = 263},
  [26] = {.lex_state = 263},
  [27] = {.lex_state = 263},
  [28] = {.lex_state = 263},
  [29] = {.lex_state = 263},
  [30] = {.lex_state = 263},
  [31] = {.lex_state = 263},
  [32] = {.lex_state = 263},
  [33] = {.lex_state = 263},
  [34] = {.lex_state = 263},
  [35] = {.lex_state = 263},
  [36] = {.lex_state = 263},
  [37] = {.lex_state = 263},
  [38] = {.lex_state = 263},
  [39] = {.lex_state = 263},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 262},
  [43] = {.lex_state = 262},
  [44] = {.lex_state = 263},
  [45] = {.lex_state = 262},
  [46] = {.lex_state = 262},
  [47] = {.lex_state = 262},
  [48] = {.lex_state = 262},
  [49] = {.lex_state = 262},
  [50] = {.lex_state = 262},
  [51] = {.lex_state = 262},
  [52] = {.lex_state = 262},
  [53] = {.lex_state = 262},
  [54] = {.lex_state = 262},
  [55] = {.lex_state = 262},
  [56] = {.lex_state = 262},
  [57] = {.lex_state = 262},
  [58] = {.lex_state = 262},
  [59] = {.lex_state = 262},
  [60] = {.lex_state = 262},
  [61] = {.lex_state = 262},
  [62] = {.lex_state = 262},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 262},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 263},
  [75] = {.lex_state = 262},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 263},
  [80] = {.lex_state = 262},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 263},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 264},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 263},
  [107] = {.lex_state = 264},
  [108] = {.lex_state = 263},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 263},
  [115] = {.lex_state = 263},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 263},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 263},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 263},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 264},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 263},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 263},
  [133] = {.lex_state = 264},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 262},
  [136] = {.lex_state = 262},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 262},
  [139] = {.lex_state = 263},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 263},
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
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 262},
  [158] = {.lex_state = 262},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 36},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 29},
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
  [187] = {.lex_state = 37},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 27},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 27},
  [201] = {.lex_state = 27},
  [202] = {.lex_state = 264},
  [203] = {.lex_state = 264},
  [204] = {.lex_state = 27},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 27},
  [208] = {.lex_state = 27},
  [209] = {.lex_state = 27},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 27},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
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
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 264},
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
  [257] = {.lex_state = 262},
  [258] = {.lex_state = 262},
  [259] = {.lex_state = 262},
  [260] = {.lex_state = 262},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 262},
  [263] = {.lex_state = 262},
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
  [278] = {.lex_state = 27},
  [279] = {.lex_state = 27},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 264},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 27},
  [285] = {.lex_state = 262},
  [286] = {.lex_state = 27},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 27},
  [289] = {.lex_state = 27},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 27},
  [296] = {.lex_state = 27},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 409},
  [302] = {.lex_state = 28},
  [303] = {.lex_state = 27},
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
  [315] = {.lex_state = 27},
  [316] = {.lex_state = 27},
  [317] = {.lex_state = 27},
  [318] = {.lex_state = 27},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 27},
  [321] = {.lex_state = 27},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 27},
  [324] = {.lex_state = 27},
  [325] = {.lex_state = 28},
  [326] = {.lex_state = 409},
  [327] = {.lex_state = 262},
  [328] = {.lex_state = 27},
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
    [sym_source_file] = STATE(313),
    [sym__statement] = STATE(113),
    [sym_create_function_statement] = STATE(197),
    [sym_create_domain_statement] = STATE(197),
    [sym_create_type_statement] = STATE(197),
    [sym_create_index_statement] = STATE(197),
    [sym_create_table_statement] = STATE(197),
    [sym_select_statement] = STATE(197),
    [sym_select_clause] = STATE(102),
    [aux_sym_source_file_repeat1] = STATE(113),
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
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(140), 1,
      sym_select_clause_body,
    STATE(121), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(27), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [76] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(41), 34,
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
  [122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(45), 34,
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
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(49), 34,
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
  [214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 33,
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
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(59), 34,
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
  [308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(63), 34,
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
  [354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 34,
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
  [400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 34,
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
  [446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 31,
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
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 33,
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
  [542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 32,
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
  [585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 31,
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
  [630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 3,
      aux_sym_create_index_statement_token1,
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
  [675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 32,
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
  [718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 32,
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
  [761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 32,
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
  [804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 32,
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
  [847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 32,
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
  [890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 32,
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
  [933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(93), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 29,
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
  [979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      aux_sym_create_index_statement_token1,
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
  [1021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 31,
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
  [1063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      aux_sym_create_index_statement_token1,
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
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      aux_sym_create_index_statement_token1,
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
  [1147] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(111), 22,
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
      aux_sym_select_clause_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 31,
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
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 31,
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
  [1287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 31,
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
  [1329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 31,
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
  [1371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 31,
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
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      aux_sym_create_index_statement_token1,
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
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 31,
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
  [1497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(151), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 30,
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
  [1541] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(155), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(153), 22,
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
      aux_sym_select_clause_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 31,
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
  [1639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 31,
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
  [1681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 31,
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
  [1723] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(140), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(121), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(19), 4,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [1790] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(140), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(121), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(19), 4,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [1857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(169), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1943] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(173), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(171), 16,
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
  [1997] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(189), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(151), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2235] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(189), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 1,
      aux_sym_function_body_token1,
    ACTIONS(195), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(191), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
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
  [2290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(125), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(99), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(189), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(93), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2442] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(189), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(153), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(133), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(161), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2715] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2772] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(126), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2829] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(115), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2885] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(108), 1,
      sym__expression,
    STATE(250), 1,
      sym_ordered_expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2941] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2997] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(69), 1,
      sym__expression,
    STATE(156), 1,
      sym_group_by_clause_body,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3053] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(189), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      aux_sym_create_index_statement_token1,
    STATE(149), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(221), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [3107] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(74), 1,
      sym__expression,
    STATE(166), 1,
      sym_order_by_clause_body,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3163] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(106), 1,
      sym__expression,
    STATE(227), 1,
      sym_ordered_expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3219] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(98), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3272] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym__expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3325] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      aux_sym_create_index_statement_token1,
    STATE(155), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(227), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [3378] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(189), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(233), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [3427] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(142), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3480] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(44), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3533] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(125), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3586] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(239), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(237), 11,
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
  [3635] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(189), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(237), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [3684] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(129), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3737] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(114), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3790] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(36), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3843] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(35), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3896] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(139), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3949] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(34), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
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
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(22), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4055] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(27), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4108] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(132), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4161] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(117), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4214] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(80), 1,
      sym__expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4267] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym__expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4320] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(47), 1,
      sym__expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4373] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_NULL_token1,
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
    STATE(79), 1,
      sym__expression,
    STATE(14), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(24), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4426] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4479] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      sym__expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4532] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_NULL_token1,
    ACTIONS(31), 1,
      aux_sym_TRUE_token1,
    ACTIONS(33), 1,
      aux_sym_FALSE_token1,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym__expression,
    STATE(43), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(55), 12,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4585] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4630] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(245), 1,
      aux_sym_column_default_token1,
    ACTIONS(247), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(249), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(251), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(253), 1,
      aux_sym_in_expression_token1,
    ACTIONS(255), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(257), 1,
      aux_sym_NULL_token1,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(100), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [4678] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(245), 1,
      aux_sym_column_default_token1,
    ACTIONS(247), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(249), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(251), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(253), 1,
      aux_sym_in_expression_token1,
    ACTIONS(255), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(257), 1,
      aux_sym_NULL_token1,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(101), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [4723] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(266), 1,
      aux_sym_column_default_token1,
    ACTIONS(269), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(272), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(275), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(278), 1,
      aux_sym_in_expression_token1,
    ACTIONS(281), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(284), 1,
      aux_sym_NULL_token1,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(101), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [4768] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(295), 1,
      aux_sym_where_clause_token1,
    ACTIONS(297), 1,
      aux_sym_from_clause_token1,
    STATE(119), 1,
      sym_from_clause,
    STATE(141), 1,
      sym_where_clause,
    STATE(151), 1,
      sym_group_by_clause,
    STATE(170), 1,
      sym_order_by_clause,
    ACTIONS(287), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(299), 17,
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
  [4836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(59), 17,
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
      anon_sym_LBRACK,
  [4862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(303), 17,
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
  [4888] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(311), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(49), 17,
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
      anon_sym_LBRACK,
  [4960] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(311), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5001] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym__function_language_token1,
    ACTIONS(321), 1,
      aux_sym_function_body_token1,
    ACTIONS(323), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(317), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(110), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(315), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5034] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym__function_language_token1,
    ACTIONS(333), 1,
      aux_sym_function_body_token1,
    ACTIONS(336), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(327), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(110), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5067] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym__function_language_token1,
    ACTIONS(321), 1,
      aux_sym_function_body_token1,
    ACTIONS(340), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(317), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(109), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(338), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(342), 15,
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
  [5124] = 11,
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
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_select_clause,
    STATE(122), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(197), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [5164] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5206] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(352), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
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
  [5276] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5318] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(253), 1,
      aux_sym_in_expression_token1,
    ACTIONS(257), 1,
      aux_sym_NULL_token1,
    ACTIONS(362), 1,
      aux_sym_create_index_statement_token1,
    STATE(105), 1,
      sym_NULL,
    STATE(130), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5354] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(295), 1,
      aux_sym_where_clause_token1,
    ACTIONS(366), 1,
      aux_sym_create_index_statement_token1,
    STATE(137), 1,
      sym_where_clause,
    STATE(153), 1,
      sym_group_by_clause,
    STATE(178), 1,
      sym_order_by_clause,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(368), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
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
  [5418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      aux_sym_create_index_statement_token1,
    STATE(116), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(375), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
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
  [5446] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(384), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(387), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(390), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(393), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(396), 1,
      aux_sym_select_clause_token1,
    STATE(102), 1,
      sym_select_clause,
    STATE(122), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(197), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [5486] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(368), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
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
  [5551] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      aux_sym_create_index_statement_token1,
    STATE(134), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(403), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [5615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(411), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 12,
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
  [5642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(415), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
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
  [5665] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5702] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(253), 1,
      aux_sym_in_expression_token1,
    ACTIONS(257), 1,
      aux_sym_NULL_token1,
    ACTIONS(423), 1,
      aux_sym_create_index_statement_token1,
    STATE(105), 1,
      sym_NULL,
    STATE(131), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5735] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(429), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(432), 1,
      aux_sym_in_expression_token1,
    ACTIONS(435), 1,
      aux_sym_NULL_token1,
    STATE(105), 1,
      sym_NULL,
    STATE(131), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5768] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(440), 12,
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
  [5832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(444), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [5859] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(454), 1,
      aux_sym_on_delete_action_token1,
    STATE(257), 1,
      sym_on_delete_action,
    STATE(260), 1,
      sym_on_update_action,
    ACTIONS(450), 10,
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
  [5890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(454), 1,
      aux_sym_on_delete_action_token1,
    STATE(258), 1,
      sym_on_update_action,
    STATE(259), 1,
      sym_on_delete_action,
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
      aux_sym_NULL_token1,
  [5918] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(460), 1,
      aux_sym_create_index_statement_token1,
    STATE(154), 1,
      sym_group_by_clause,
    STATE(163), 1,
      sym_order_by_clause,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(454), 1,
      aux_sym_on_delete_action_token1,
    STATE(262), 1,
      sym_on_update_action,
    STATE(263), 1,
      sym_on_delete_action,
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
      aux_sym_NULL_token1,
  [5976] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(466), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
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
  [6034] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(366), 1,
      aux_sym_create_index_statement_token1,
    STATE(153), 1,
      sym_group_by_clause,
    STATE(178), 1,
      sym_order_by_clause,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6064] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(117), 1,
      aux_sym_in_expression_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token2,
    ACTIONS(123), 1,
      aux_sym_is_expression_token1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(472), 12,
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
  [6121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(237), 10,
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
  [6146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(479), 12,
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
  [6167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(440), 12,
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
  [6188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(483), 12,
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
  [6209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(237), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [6234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      aux_sym_create_index_statement_token1,
    STATE(148), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(490), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [6259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(494), 12,
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
  [6280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(366), 1,
      aux_sym_create_index_statement_token1,
    STATE(178), 1,
      sym_order_by_clause,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_COLON_COLON,
    ACTIONS(498), 10,
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
  [6326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(460), 1,
      aux_sym_create_index_statement_token1,
    STATE(163), 1,
      sym_order_by_clause,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(502), 1,
      aux_sym_create_index_statement_token1,
    STATE(175), 1,
      sym_order_by_clause,
    ACTIONS(500), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      aux_sym_create_index_statement_token1,
    STATE(144), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(504), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(508), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [6417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 11,
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
  [6434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 11,
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
  [6451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COLON_COLON,
    ACTIONS(498), 10,
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
  [6470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 11,
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
  [6487] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(520), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(522), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(524), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(526), 1,
      sym_identifier,
    STATE(231), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [6514] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(520), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(522), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(524), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(526), 1,
      sym_identifier,
    STATE(254), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [6541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(500), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6559] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(532), 1,
      aux_sym_where_clause_token1,
    STATE(195), 1,
      sym_where_clause,
    ACTIONS(528), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_where_clause_token1,
    ACTIONS(536), 1,
      aux_sym_create_index_statement_token1,
    STATE(196), 1,
      sym_where_clause,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(538), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 10,
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
  [6637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_where_clause_token1,
    ACTIONS(546), 1,
      aux_sym_create_index_statement_token1,
    STATE(185), 1,
      sym_where_clause,
    ACTIONS(544), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 10,
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
  [6675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(233), 1,
      sym_constrained_type,
    STATE(202), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(49), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 10,
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
  [6731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 10,
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
  [6747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 10,
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
  [6763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(556), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 10,
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
  [6797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_where_clause_token1,
    ACTIONS(564), 1,
      aux_sym_create_index_statement_token1,
    STATE(190), 1,
      sym_where_clause,
    ACTIONS(562), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(458), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [6854] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym_in_expression_token1,
    ACTIONS(572), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(574), 1,
      aux_sym_NULL_token1,
    ACTIONS(576), 1,
      aux_sym_TRUE_token1,
    ACTIONS(578), 1,
      aux_sym_FALSE_token1,
    STATE(32), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [6879] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_NULL_token1,
    ACTIONS(580), 1,
      aux_sym_in_expression_token1,
    ACTIONS(582), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(584), 1,
      aux_sym_TRUE_token1,
    ACTIONS(586), 1,
      aux_sym_FALSE_token1,
    STATE(46), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [6904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_function_body_token1,
    ACTIONS(592), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(588), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(594), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [6940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(598), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(602), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6972] = 3,
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
  [6988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(610), 1,
      aux_sym_setof_token1,
    STATE(111), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(127), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7008] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(574), 1,
      aux_sym_NULL_token1,
    ACTIONS(576), 1,
      aux_sym_TRUE_token1,
    ACTIONS(578), 1,
      aux_sym_FALSE_token1,
    STATE(33), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(612), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7046] = 3,
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
  [7062] = 3,
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
  [7078] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(620), 1,
      sym_identifier,
    STATE(174), 1,
      sym_type_cast,
    STATE(159), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [7102] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_NULL_token1,
    ACTIONS(582), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(584), 1,
      aux_sym_TRUE_token1,
    ACTIONS(586), 1,
      aux_sym_FALSE_token1,
    STATE(58), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(622), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(544), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(626), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SEMI,
    ACTIONS(634), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(630), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(636), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(640), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(217), 1,
      sym_constrained_type,
    STATE(247), 1,
      sym_create_function_parameter,
    STATE(203), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(217), 1,
      sym_constrained_type,
    STATE(218), 1,
      sym_create_function_parameter,
    STATE(203), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_EQ,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      anon_sym_EQ,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_identifier,
    STATE(146), 1,
      sym_constrained_type,
    STATE(133), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(225), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      aux_sym_using_clause_token1,
    STATE(177), 1,
      sym_index_table_parameters,
    STATE(249), 1,
      sym_using_clause,
  [7334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(99), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(15), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(118), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(157), 1,
      sym__constraint_action,
    ACTIONS(664), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [7382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      sym__constraint_action,
    ACTIONS(666), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [7394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      aux_sym_using_clause_token1,
    STATE(164), 1,
      sym_index_table_parameters,
    STATE(271), 1,
      sym_using_clause,
  [7410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(6), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      aux_sym_select_clause_token1,
    STATE(102), 1,
      sym_select_clause,
    STATE(281), 1,
      sym_select_statement,
  [7435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_create_function_parameters_repeat1,
  [7461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_EQ,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_create_function_parameters_repeat1,
  [7485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_create_table_parameters_repeat1,
  [7511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_parameters_repeat1,
  [7524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_string,
  [7550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_index_table_parameters_repeat1,
  [7587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_index_table_parameters_repeat1,
  [7600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_parameters_repeat1,
  [7613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_select_clause_token1,
    STATE(102), 1,
      sym_select_clause,
    STATE(280), 1,
      sym_select_statement,
  [7626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_create_table_parameters_repeat1,
  [7652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_create_table_parameters_repeat1,
  [7665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_EQ,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_string,
  [7702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_create_function_parameters_repeat1,
  [7728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(734), 1,
      aux_sym_create_index_statement_token2,
    STATE(282), 1,
      sym_unique_constraint,
  [7793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_index_table_parameters_repeat1,
  [7806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym_parameters_repeat1,
  [7832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_index_table_parameters,
  [7871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_tuple,
  [7889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_tuple,
  [7907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_NULL_token1,
    STATE(103), 1,
      sym_NULL,
  [7933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_on_update_action_token1,
    STATE(167), 1,
      sym_on_update_action,
  [7943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym_on_delete_action_token1,
    STATE(173), 1,
      sym_on_delete_action,
  [7953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_on_update_action_token1,
    STATE(173), 1,
      sym_on_update_action,
  [7963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym_on_delete_action_token1,
    STATE(167), 1,
      sym_on_delete_action,
  [7973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym_create_function_parameters,
  [7983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym_on_delete_action_token1,
    STATE(169), 1,
      sym_on_delete_action,
  [7993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_on_update_action_token1,
    STATE(169), 1,
      sym_on_update_action,
  [8003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_create_table_parameters,
  [8013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_references_constraint_token1,
    STATE(252), 1,
      sym_references_constraint,
  [8039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_tuple,
  [8049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_index_table_parameters,
  [8075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(765), 1,
      anon_sym_SQUOTE,
  [8085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_parameters,
  [8095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_references_constraint_token1,
    STATE(269), 1,
      sym_references_constraint,
  [8105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_tuple,
  [8123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_identifier,
    STATE(245), 1,
      sym_parameter,
  [8141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_identifier,
    STATE(255), 1,
      sym_parameter,
  [8151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    ACTIONS(777), 1,
      anon_sym_SQUOTE,
  [8161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(779), 1,
      anon_sym_SEMI,
  [8171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_create_index_statement_token2,
  [8178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
  [8185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      sym_identifier,
  [8192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_in_expression_token2,
  [8199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym_identifier,
  [8206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_identifier,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
  [8220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_identifier,
  [8227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_SQUOTE,
  [8234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      aux_sym_create_index_statement_token3,
  [8248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_identifier,
  [8255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym_create_index_statement_token3,
  [8262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_identifier,
  [8269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_identifier,
  [8276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      aux_sym_create_function_statement_token2,
  [8283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
  [8290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
  [8297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_function_body_token1,
  [8304] = 2,
    ACTIONS(817), 1,
      aux_sym_string_token1,
    ACTIONS(819), 1,
      sym_comment,
  [8311] = 2,
    ACTIONS(819), 1,
      sym_comment,
    ACTIONS(821), 1,
      aux_sym_string_token2,
  [8318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym_identifier,
  [8325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
  [8332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      aux_sym_create_function_statement_token2,
  [8339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      aux_sym_number_token1,
  [8346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
  [8353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym_create_function_statement_token2,
  [8360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      aux_sym_number_token1,
  [8367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
  [8374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_SQUOTE,
  [8388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      ts_builtin_sym_end,
  [8395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym_identifier,
  [8409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_identifier,
  [8416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_identifier,
  [8423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_identifier,
  [8430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
  [8437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_identifier,
  [8444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_identifier,
  [8451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_SQUOTE,
  [8458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym_identifier,
  [8465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_identifier,
  [8472] = 2,
    ACTIONS(819), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_string_token2,
  [8479] = 2,
    ACTIONS(819), 1,
      sym_comment,
    ACTIONS(865), 1,
      aux_sym_string_token1,
  [8486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym_in_expression_token2,
  [8493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 308,
  [SMALL_STATE(9)] = 354,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 446,
  [SMALL_STATE(12)] = 497,
  [SMALL_STATE(13)] = 542,
  [SMALL_STATE(14)] = 585,
  [SMALL_STATE(15)] = 630,
  [SMALL_STATE(16)] = 675,
  [SMALL_STATE(17)] = 718,
  [SMALL_STATE(18)] = 761,
  [SMALL_STATE(19)] = 804,
  [SMALL_STATE(20)] = 847,
  [SMALL_STATE(21)] = 890,
  [SMALL_STATE(22)] = 933,
  [SMALL_STATE(23)] = 979,
  [SMALL_STATE(24)] = 1021,
  [SMALL_STATE(25)] = 1063,
  [SMALL_STATE(26)] = 1105,
  [SMALL_STATE(27)] = 1147,
  [SMALL_STATE(28)] = 1203,
  [SMALL_STATE(29)] = 1245,
  [SMALL_STATE(30)] = 1287,
  [SMALL_STATE(31)] = 1329,
  [SMALL_STATE(32)] = 1371,
  [SMALL_STATE(33)] = 1413,
  [SMALL_STATE(34)] = 1455,
  [SMALL_STATE(35)] = 1497,
  [SMALL_STATE(36)] = 1541,
  [SMALL_STATE(37)] = 1597,
  [SMALL_STATE(38)] = 1639,
  [SMALL_STATE(39)] = 1681,
  [SMALL_STATE(40)] = 1723,
  [SMALL_STATE(41)] = 1790,
  [SMALL_STATE(42)] = 1857,
  [SMALL_STATE(43)] = 1903,
  [SMALL_STATE(44)] = 1943,
  [SMALL_STATE(45)] = 1997,
  [SMALL_STATE(46)] = 2048,
  [SMALL_STATE(47)] = 2085,
  [SMALL_STATE(48)] = 2124,
  [SMALL_STATE(49)] = 2161,
  [SMALL_STATE(50)] = 2198,
  [SMALL_STATE(51)] = 2235,
  [SMALL_STATE(52)] = 2290,
  [SMALL_STATE(53)] = 2327,
  [SMALL_STATE(54)] = 2364,
  [SMALL_STATE(55)] = 2405,
  [SMALL_STATE(56)] = 2442,
  [SMALL_STATE(57)] = 2493,
  [SMALL_STATE(58)] = 2530,
  [SMALL_STATE(59)] = 2567,
  [SMALL_STATE(60)] = 2604,
  [SMALL_STATE(61)] = 2641,
  [SMALL_STATE(62)] = 2678,
  [SMALL_STATE(63)] = 2715,
  [SMALL_STATE(64)] = 2772,
  [SMALL_STATE(65)] = 2829,
  [SMALL_STATE(66)] = 2885,
  [SMALL_STATE(67)] = 2941,
  [SMALL_STATE(68)] = 2997,
  [SMALL_STATE(69)] = 3053,
  [SMALL_STATE(70)] = 3107,
  [SMALL_STATE(71)] = 3163,
  [SMALL_STATE(72)] = 3219,
  [SMALL_STATE(73)] = 3272,
  [SMALL_STATE(74)] = 3325,
  [SMALL_STATE(75)] = 3378,
  [SMALL_STATE(76)] = 3427,
  [SMALL_STATE(77)] = 3480,
  [SMALL_STATE(78)] = 3533,
  [SMALL_STATE(79)] = 3586,
  [SMALL_STATE(80)] = 3635,
  [SMALL_STATE(81)] = 3684,
  [SMALL_STATE(82)] = 3737,
  [SMALL_STATE(83)] = 3790,
  [SMALL_STATE(84)] = 3843,
  [SMALL_STATE(85)] = 3896,
  [SMALL_STATE(86)] = 3949,
  [SMALL_STATE(87)] = 4002,
  [SMALL_STATE(88)] = 4055,
  [SMALL_STATE(89)] = 4108,
  [SMALL_STATE(90)] = 4161,
  [SMALL_STATE(91)] = 4214,
  [SMALL_STATE(92)] = 4267,
  [SMALL_STATE(93)] = 4320,
  [SMALL_STATE(94)] = 4373,
  [SMALL_STATE(95)] = 4426,
  [SMALL_STATE(96)] = 4479,
  [SMALL_STATE(97)] = 4532,
  [SMALL_STATE(98)] = 4585,
  [SMALL_STATE(99)] = 4630,
  [SMALL_STATE(100)] = 4678,
  [SMALL_STATE(101)] = 4723,
  [SMALL_STATE(102)] = 4768,
  [SMALL_STATE(103)] = 4810,
  [SMALL_STATE(104)] = 4836,
  [SMALL_STATE(105)] = 4862,
  [SMALL_STATE(106)] = 4888,
  [SMALL_STATE(107)] = 4934,
  [SMALL_STATE(108)] = 4960,
  [SMALL_STATE(109)] = 5001,
  [SMALL_STATE(110)] = 5034,
  [SMALL_STATE(111)] = 5067,
  [SMALL_STATE(112)] = 5100,
  [SMALL_STATE(113)] = 5124,
  [SMALL_STATE(114)] = 5164,
  [SMALL_STATE(115)] = 5206,
  [SMALL_STATE(116)] = 5248,
  [SMALL_STATE(117)] = 5276,
  [SMALL_STATE(118)] = 5318,
  [SMALL_STATE(119)] = 5354,
  [SMALL_STATE(120)] = 5390,
  [SMALL_STATE(121)] = 5418,
  [SMALL_STATE(122)] = 5446,
  [SMALL_STATE(123)] = 5486,
  [SMALL_STATE(124)] = 5528,
  [SMALL_STATE(125)] = 5551,
  [SMALL_STATE(126)] = 5588,
  [SMALL_STATE(127)] = 5615,
  [SMALL_STATE(128)] = 5642,
  [SMALL_STATE(129)] = 5665,
  [SMALL_STATE(130)] = 5702,
  [SMALL_STATE(131)] = 5735,
  [SMALL_STATE(132)] = 5768,
  [SMALL_STATE(133)] = 5805,
  [SMALL_STATE(134)] = 5832,
  [SMALL_STATE(135)] = 5859,
  [SMALL_STATE(136)] = 5890,
  [SMALL_STATE(137)] = 5918,
  [SMALL_STATE(138)] = 5948,
  [SMALL_STATE(139)] = 5976,
  [SMALL_STATE(140)] = 6012,
  [SMALL_STATE(141)] = 6034,
  [SMALL_STATE(142)] = 6064,
  [SMALL_STATE(143)] = 6100,
  [SMALL_STATE(144)] = 6121,
  [SMALL_STATE(145)] = 6146,
  [SMALL_STATE(146)] = 6167,
  [SMALL_STATE(147)] = 6188,
  [SMALL_STATE(148)] = 6209,
  [SMALL_STATE(149)] = 6234,
  [SMALL_STATE(150)] = 6259,
  [SMALL_STATE(151)] = 6280,
  [SMALL_STATE(152)] = 6304,
  [SMALL_STATE(153)] = 6326,
  [SMALL_STATE(154)] = 6350,
  [SMALL_STATE(155)] = 6374,
  [SMALL_STATE(156)] = 6398,
  [SMALL_STATE(157)] = 6417,
  [SMALL_STATE(158)] = 6434,
  [SMALL_STATE(159)] = 6451,
  [SMALL_STATE(160)] = 6470,
  [SMALL_STATE(161)] = 6487,
  [SMALL_STATE(162)] = 6514,
  [SMALL_STATE(163)] = 6541,
  [SMALL_STATE(164)] = 6559,
  [SMALL_STATE(165)] = 6581,
  [SMALL_STATE(166)] = 6603,
  [SMALL_STATE(167)] = 6621,
  [SMALL_STATE(168)] = 6637,
  [SMALL_STATE(169)] = 6659,
  [SMALL_STATE(170)] = 6675,
  [SMALL_STATE(171)] = 6693,
  [SMALL_STATE(172)] = 6715,
  [SMALL_STATE(173)] = 6731,
  [SMALL_STATE(174)] = 6747,
  [SMALL_STATE(175)] = 6763,
  [SMALL_STATE(176)] = 6781,
  [SMALL_STATE(177)] = 6797,
  [SMALL_STATE(178)] = 6819,
  [SMALL_STATE(179)] = 6837,
  [SMALL_STATE(180)] = 6854,
  [SMALL_STATE(181)] = 6879,
  [SMALL_STATE(182)] = 6904,
  [SMALL_STATE(183)] = 6923,
  [SMALL_STATE(184)] = 6940,
  [SMALL_STATE(185)] = 6956,
  [SMALL_STATE(186)] = 6972,
  [SMALL_STATE(187)] = 6988,
  [SMALL_STATE(188)] = 7008,
  [SMALL_STATE(189)] = 7030,
  [SMALL_STATE(190)] = 7046,
  [SMALL_STATE(191)] = 7062,
  [SMALL_STATE(192)] = 7078,
  [SMALL_STATE(193)] = 7102,
  [SMALL_STATE(194)] = 7124,
  [SMALL_STATE(195)] = 7140,
  [SMALL_STATE(196)] = 7156,
  [SMALL_STATE(197)] = 7172,
  [SMALL_STATE(198)] = 7190,
  [SMALL_STATE(199)] = 7206,
  [SMALL_STATE(200)] = 7221,
  [SMALL_STATE(201)] = 7239,
  [SMALL_STATE(202)] = 7257,
  [SMALL_STATE(203)] = 7274,
  [SMALL_STATE(204)] = 7291,
  [SMALL_STATE(205)] = 7306,
  [SMALL_STATE(206)] = 7318,
  [SMALL_STATE(207)] = 7334,
  [SMALL_STATE(208)] = 7346,
  [SMALL_STATE(209)] = 7358,
  [SMALL_STATE(210)] = 7370,
  [SMALL_STATE(211)] = 7382,
  [SMALL_STATE(212)] = 7394,
  [SMALL_STATE(213)] = 7410,
  [SMALL_STATE(214)] = 7422,
  [SMALL_STATE(215)] = 7435,
  [SMALL_STATE(216)] = 7448,
  [SMALL_STATE(217)] = 7461,
  [SMALL_STATE(218)] = 7472,
  [SMALL_STATE(219)] = 7485,
  [SMALL_STATE(220)] = 7498,
  [SMALL_STATE(221)] = 7511,
  [SMALL_STATE(222)] = 7524,
  [SMALL_STATE(223)] = 7537,
  [SMALL_STATE(224)] = 7550,
  [SMALL_STATE(225)] = 7563,
  [SMALL_STATE(226)] = 7574,
  [SMALL_STATE(227)] = 7587,
  [SMALL_STATE(228)] = 7600,
  [SMALL_STATE(229)] = 7613,
  [SMALL_STATE(230)] = 7626,
  [SMALL_STATE(231)] = 7639,
  [SMALL_STATE(232)] = 7652,
  [SMALL_STATE(233)] = 7665,
  [SMALL_STATE(234)] = 7676,
  [SMALL_STATE(235)] = 7689,
  [SMALL_STATE(236)] = 7702,
  [SMALL_STATE(237)] = 7715,
  [SMALL_STATE(238)] = 7728,
  [SMALL_STATE(239)] = 7741,
  [SMALL_STATE(240)] = 7754,
  [SMALL_STATE(241)] = 7767,
  [SMALL_STATE(242)] = 7780,
  [SMALL_STATE(243)] = 7793,
  [SMALL_STATE(244)] = 7806,
  [SMALL_STATE(245)] = 7819,
  [SMALL_STATE(246)] = 7832,
  [SMALL_STATE(247)] = 7845,
  [SMALL_STATE(248)] = 7853,
  [SMALL_STATE(249)] = 7861,
  [SMALL_STATE(250)] = 7871,
  [SMALL_STATE(251)] = 7879,
  [SMALL_STATE(252)] = 7889,
  [SMALL_STATE(253)] = 7897,
  [SMALL_STATE(254)] = 7907,
  [SMALL_STATE(255)] = 7915,
  [SMALL_STATE(256)] = 7923,
  [SMALL_STATE(257)] = 7933,
  [SMALL_STATE(258)] = 7943,
  [SMALL_STATE(259)] = 7953,
  [SMALL_STATE(260)] = 7963,
  [SMALL_STATE(261)] = 7973,
  [SMALL_STATE(262)] = 7983,
  [SMALL_STATE(263)] = 7993,
  [SMALL_STATE(264)] = 8003,
  [SMALL_STATE(265)] = 8013,
  [SMALL_STATE(266)] = 8021,
  [SMALL_STATE(267)] = 8029,
  [SMALL_STATE(268)] = 8039,
  [SMALL_STATE(269)] = 8049,
  [SMALL_STATE(270)] = 8057,
  [SMALL_STATE(271)] = 8065,
  [SMALL_STATE(272)] = 8075,
  [SMALL_STATE(273)] = 8085,
  [SMALL_STATE(274)] = 8095,
  [SMALL_STATE(275)] = 8105,
  [SMALL_STATE(276)] = 8113,
  [SMALL_STATE(277)] = 8123,
  [SMALL_STATE(278)] = 8131,
  [SMALL_STATE(279)] = 8141,
  [SMALL_STATE(280)] = 8151,
  [SMALL_STATE(281)] = 8161,
  [SMALL_STATE(282)] = 8171,
  [SMALL_STATE(283)] = 8178,
  [SMALL_STATE(284)] = 8185,
  [SMALL_STATE(285)] = 8192,
  [SMALL_STATE(286)] = 8199,
  [SMALL_STATE(287)] = 8206,
  [SMALL_STATE(288)] = 8213,
  [SMALL_STATE(289)] = 8220,
  [SMALL_STATE(290)] = 8227,
  [SMALL_STATE(291)] = 8234,
  [SMALL_STATE(292)] = 8241,
  [SMALL_STATE(293)] = 8248,
  [SMALL_STATE(294)] = 8255,
  [SMALL_STATE(295)] = 8262,
  [SMALL_STATE(296)] = 8269,
  [SMALL_STATE(297)] = 8276,
  [SMALL_STATE(298)] = 8283,
  [SMALL_STATE(299)] = 8290,
  [SMALL_STATE(300)] = 8297,
  [SMALL_STATE(301)] = 8304,
  [SMALL_STATE(302)] = 8311,
  [SMALL_STATE(303)] = 8318,
  [SMALL_STATE(304)] = 8325,
  [SMALL_STATE(305)] = 8332,
  [SMALL_STATE(306)] = 8339,
  [SMALL_STATE(307)] = 8346,
  [SMALL_STATE(308)] = 8353,
  [SMALL_STATE(309)] = 8360,
  [SMALL_STATE(310)] = 8367,
  [SMALL_STATE(311)] = 8374,
  [SMALL_STATE(312)] = 8381,
  [SMALL_STATE(313)] = 8388,
  [SMALL_STATE(314)] = 8395,
  [SMALL_STATE(315)] = 8402,
  [SMALL_STATE(316)] = 8409,
  [SMALL_STATE(317)] = 8416,
  [SMALL_STATE(318)] = 8423,
  [SMALL_STATE(319)] = 8430,
  [SMALL_STATE(320)] = 8437,
  [SMALL_STATE(321)] = 8444,
  [SMALL_STATE(322)] = 8451,
  [SMALL_STATE(323)] = 8458,
  [SMALL_STATE(324)] = 8465,
  [SMALL_STATE(325)] = 8472,
  [SMALL_STATE(326)] = 8479,
  [SMALL_STATE(327)] = 8486,
  [SMALL_STATE(328)] = 8493,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 17),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 17),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliasable_expression, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(321),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(192),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(77),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(160),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(176),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(256),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(320),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(12),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(145),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(287),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(272),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(63),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(315),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(328),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(324),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(317),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliased_expression, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(77),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(256),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(12),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 4),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(94),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 5),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(91),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 19),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 19),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 16),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 16),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 16),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 16),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 5),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 16),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 16),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(200),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(279),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(162),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(296),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 18),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 15),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [841] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
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
