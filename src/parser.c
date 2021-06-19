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
#define STATE_COUNT 335
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
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
  sym_select_subexpression = 107,
  sym_in_expression = 108,
  sym_tuple = 109,
  sym_references_constraint = 110,
  sym_on_update_action = 111,
  sym_on_delete_action = 112,
  sym__constraint_action = 113,
  sym_unique_constraint = 114,
  sym_null_constraint = 115,
  sym_check_constraint = 116,
  sym_parameter = 117,
  sym_parameters = 118,
  sym_function_call = 119,
  sym_comparison_operator = 120,
  sym__parenthesized_expression = 121,
  sym_is_expression = 122,
  sym_distinct_from = 123,
  sym_boolean_expression = 124,
  sym_NULL = 125,
  sym_TRUE = 126,
  sym_FALSE = 127,
  sym_number = 128,
  sym_string = 129,
  sym_field_access = 130,
  sym_ordered_expression = 131,
  sym__type_alias = 132,
  sym_array_type = 133,
  sym__type = 134,
  sym_type_cast = 135,
  sym_binary_expression = 136,
  sym_argument_reference = 137,
  sym__expression = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_create_function_statement_repeat1 = 140,
  aux_sym_create_function_parameters_repeat1 = 141,
  aux_sym_create_domain_statement_repeat1 = 142,
  aux_sym_create_table_column_parameter_repeat1 = 143,
  aux_sym_create_table_parameters_repeat1 = 144,
  aux_sym_table_constraint_foreign_key_repeat1 = 145,
  aux_sym_index_table_parameters_repeat1 = 146,
  aux_sym_group_by_clause_body_repeat1 = 147,
  aux_sym_select_clause_body_repeat1 = 148,
  aux_sym_parameters_repeat1 = 149,
  anon_alias_sym_NOT = 150,
  alias_sym_default = 151,
  alias_sym_language = 152,
  alias_sym_type = 153,
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
  [sym_select_subexpression] = "select_subexpression",
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
  [sym_select_subexpression] = sym_select_subexpression,
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
  [sym_select_subexpression] = {
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
      if (eof) ADVANCE(268);
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '+') ADVANCE(434);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(269);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == '\\') SKIP(255)
      if (lookahead == ']') ADVANCE(428);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == '~') ADVANCE(433);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
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
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
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
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(187);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(269);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(342);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(284);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(280);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(419);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
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
      if (lookahead == '/') ADVANCE(430);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(432);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(386);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(377);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(429);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(424);
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
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
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
      if (lookahead == 'T') ADVANCE(292);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(248);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 124:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(276);
      END_STATE();
    case 125:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 126:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 127:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 128:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 129:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(122);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 130:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 131:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 132:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 133:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 134:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 135:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 136:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 146:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 147:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 148:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 165:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(324);
      END_STATE();
    case 166:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 167:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 168:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 171:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(283);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(324);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 199:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 200:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 201:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 202:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(243);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(283);
      END_STATE();
    case 218:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      END_STATE();
    case 222:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 237:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 238:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 239:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 240:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 241:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 242:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 243:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 244:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 245:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 246:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 247:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(290);
      END_STATE();
    case 248:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 249:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 250:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 251:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 252:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(421);
      END_STATE();
    case 254:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 255:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(254)
      END_STATE();
    case 256:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(264)
      END_STATE();
    case 257:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(264)
      if (lookahead == '\r') SKIP(256)
      END_STATE();
    case 258:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(265)
      END_STATE();
    case 259:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(265)
      if (lookahead == '\r') SKIP(258)
      END_STATE();
    case 260:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(266)
      END_STATE();
    case 261:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(266)
      if (lookahead == '\r') SKIP(260)
      END_STATE();
    case 262:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(267)
      END_STATE();
    case 263:
      if (eof) ADVANCE(268);
      if (lookahead == '\n') SKIP(267)
      if (lookahead == '\r') SKIP(262)
      END_STATE();
    case 264:
      if (eof) ADVANCE(268);
      if (lookahead == '$') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(269);
      if (lookahead == '\\') SKIP(257)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(342);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(264)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 265:
      if (eof) ADVANCE(268);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '+') ADVANCE(434);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(269);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == '\\') SKIP(259)
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '~') ADVANCE(433);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(207);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(265)
      END_STATE();
    case 266:
      if (eof) ADVANCE(268);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '+') ADVANCE(434);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(269);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == '\\') SKIP(261)
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '~') ADVANCE(433);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(266)
      END_STATE();
    case 267:
      if (eof) ADVANCE(268);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(269);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '[') ADVANCE(427);
      if (lookahead == '\\') SKIP(263)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(267)
      END_STATE();
    case 268:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
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
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(320);
      if (lookahead == '>') ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '\r') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(414);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(414);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(413);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\r') ADVANCE(416);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '$') ADVANCE(431);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(419);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead == '/') ADVANCE(421);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '$') ADVANCE(432);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(284);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 264},
  [3] = {.lex_state = 265},
  [4] = {.lex_state = 265},
  [5] = {.lex_state = 265},
  [6] = {.lex_state = 265},
  [7] = {.lex_state = 265},
  [8] = {.lex_state = 265},
  [9] = {.lex_state = 265},
  [10] = {.lex_state = 265},
  [11] = {.lex_state = 266},
  [12] = {.lex_state = 265},
  [13] = {.lex_state = 266},
  [14] = {.lex_state = 266},
  [15] = {.lex_state = 266},
  [16] = {.lex_state = 266},
  [17] = {.lex_state = 266},
  [18] = {.lex_state = 266},
  [19] = {.lex_state = 266},
  [20] = {.lex_state = 266},
  [21] = {.lex_state = 266},
  [22] = {.lex_state = 266},
  [23] = {.lex_state = 266},
  [24] = {.lex_state = 266},
  [25] = {.lex_state = 266},
  [26] = {.lex_state = 266},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 266},
  [31] = {.lex_state = 266},
  [32] = {.lex_state = 266},
  [33] = {.lex_state = 266},
  [34] = {.lex_state = 266},
  [35] = {.lex_state = 266},
  [36] = {.lex_state = 266},
  [37] = {.lex_state = 266},
  [38] = {.lex_state = 266},
  [39] = {.lex_state = 266},
  [40] = {.lex_state = 266},
  [41] = {.lex_state = 266},
  [42] = {.lex_state = 266},
  [43] = {.lex_state = 266},
  [44] = {.lex_state = 265},
  [45] = {.lex_state = 265},
  [46] = {.lex_state = 265},
  [47] = {.lex_state = 265},
  [48] = {.lex_state = 265},
  [49] = {.lex_state = 265},
  [50] = {.lex_state = 265},
  [51] = {.lex_state = 265},
  [52] = {.lex_state = 265},
  [53] = {.lex_state = 265},
  [54] = {.lex_state = 265},
  [55] = {.lex_state = 265},
  [56] = {.lex_state = 265},
  [57] = {.lex_state = 265},
  [58] = {.lex_state = 265},
  [59] = {.lex_state = 265},
  [60] = {.lex_state = 265},
  [61] = {.lex_state = 265},
  [62] = {.lex_state = 265},
  [63] = {.lex_state = 266},
  [64] = {.lex_state = 265},
  [65] = {.lex_state = 265},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 265},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 265},
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
  [92] = {.lex_state = 265},
  [93] = {.lex_state = 266},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 266},
  [102] = {.lex_state = 266},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 266},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 267},
  [111] = {.lex_state = 267},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 266},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 266},
  [127] = {.lex_state = 266},
  [128] = {.lex_state = 266},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 266},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 267},
  [133] = {.lex_state = 265},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 266},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 266},
  [141] = {.lex_state = 267},
  [142] = {.lex_state = 266},
  [143] = {.lex_state = 266},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 265},
  [146] = {.lex_state = 266},
  [147] = {.lex_state = 265},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
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
  [164] = {.lex_state = 39},
  [165] = {.lex_state = 265},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 265},
  [168] = {.lex_state = 33},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 39},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 32},
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
  [190] = {.lex_state = 40},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 30},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 30},
  [205] = {.lex_state = 30},
  [206] = {.lex_state = 267},
  [207] = {.lex_state = 30},
  [208] = {.lex_state = 267},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 30},
  [211] = {.lex_state = 30},
  [212] = {.lex_state = 30},
  [213] = {.lex_state = 30},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 30},
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
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 267},
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
  [261] = {.lex_state = 265},
  [262] = {.lex_state = 265},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 265},
  [265] = {.lex_state = 265},
  [266] = {.lex_state = 265},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 265},
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
  [281] = {.lex_state = 30},
  [282] = {.lex_state = 30},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 30},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 30},
  [289] = {.lex_state = 265},
  [290] = {.lex_state = 30},
  [291] = {.lex_state = 30},
  [292] = {.lex_state = 30},
  [293] = {.lex_state = 30},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 30},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 30},
  [304] = {.lex_state = 30},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 412},
  [307] = {.lex_state = 31},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 267},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 30},
  [321] = {.lex_state = 30},
  [322] = {.lex_state = 30},
  [323] = {.lex_state = 30},
  [324] = {.lex_state = 30},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 30},
  [327] = {.lex_state = 30},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 30},
  [331] = {.lex_state = 31},
  [332] = {.lex_state = 412},
  [333] = {.lex_state = 265},
  [334] = {.lex_state = 30},
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
    [sym_source_file] = STATE(319),
    [sym__statement] = STATE(125),
    [sym_create_function_statement] = STATE(202),
    [sym_create_domain_statement] = STATE(202),
    [sym_create_type_statement] = STATE(202),
    [sym_create_index_statement] = STATE(202),
    [sym_create_table_statement] = STATE(202),
    [sym_select_statement] = STATE(202),
    [sym_select_clause] = STATE(106),
    [aux_sym_source_file_repeat1] = STATE(125),
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
    STATE(56), 1,
      sym__expression,
    STATE(138), 1,
      sym_select_clause_body,
    STATE(116), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
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
  [77] = 3,
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
  [123] = 3,
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
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [169] = 3,
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
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 34,
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
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(57), 34,
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
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(61), 34,
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
  [353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 33,
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
  [401] = 3,
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
  [447] = 6,
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
  [498] = 3,
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
  [543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 32,
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
  [586] = 3,
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
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 31,
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
  [674] = 4,
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
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 32,
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
  [762] = 3,
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
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [805] = 3,
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
  [848] = 3,
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
  [891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 32,
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
  [934] = 5,
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
  [980] = 3,
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
  [1022] = 3,
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
  [1064] = 3,
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
  [1106] = 3,
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
  [1148] = 16,
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
    STATE(56), 1,
      sym__expression,
    STATE(138), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(116), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(19), 4,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
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
  [1216] = 16,
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
    STATE(56), 1,
      sym__expression,
    STATE(138), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(116), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(19), 4,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
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
  [1284] = 17,
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
    STATE(138), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(116), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    ACTIONS(19), 3,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(45), 3,
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
  [1354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      aux_sym_create_index_statement_token1,
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
  [1396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 31,
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
  [1438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 31,
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
  [1480] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(127), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(123), 22,
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
  [1536] = 3,
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
  [1578] = 3,
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
  [1620] = 3,
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
  [1662] = 3,
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
  [1704] = 3,
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
  [1746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 30,
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
  [1790] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(155), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 4,
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
  [1846] = 3,
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
  [1888] = 3,
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
  [1930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 31,
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
  [1972] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(173), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(99), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
    ACTIONS(79), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_boolean_expression_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2176] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(175), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(153), 18,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(93), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 25,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      aux_sym_create_index_statement_token1,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2422] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(175), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(123), 18,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2474] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(191), 1,
      aux_sym_function_body_token1,
    ACTIONS(193), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(189), 15,
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
  [2530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(111), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(161), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2758] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(199), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(197), 16,
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
  [2812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(165), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2888] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      aux_sym_select_clause_token1,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(106), 1,
      sym_select_clause,
    STATE(143), 1,
      sym__expression,
    STATE(315), 1,
      sym_select_statement,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2951] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      aux_sym_select_clause_token1,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(106), 1,
      sym_select_clause,
    STATE(146), 1,
      sym__expression,
    STATE(296), 1,
      sym_select_statement,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3014] = 14,
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
    STATE(123), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
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
  [3072] = 14,
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
    STATE(120), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
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
  [3130] = 14,
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
    STATE(72), 1,
      sym__expression,
    STATE(160), 1,
      sym_group_by_clause_body,
    STATE(45), 3,
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
  [3187] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3244] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      aux_sym_create_index_statement_token1,
    STATE(148), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(177), 4,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [3299] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(93), 1,
      sym__expression,
    STATE(169), 1,
      sym_order_by_clause_body,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3356] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(117), 1,
      sym__expression,
    STATE(254), 1,
      sym_ordered_expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3413] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(107), 1,
      sym__expression,
    STATE(231), 1,
      sym_ordered_expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3470] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3527] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(140), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3581] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(233), 12,
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
  [3631] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(63), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3685] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(142), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3739] = 13,
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
    STATE(92), 1,
      sym__expression,
    STATE(45), 3,
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
  [3793] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(136), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3847] = 13,
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
    STATE(78), 1,
      sym__expression,
    STATE(45), 3,
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
  [3901] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(40), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3955] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(146), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4009] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(39), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4063] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(37), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4117] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(22), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4171] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(127), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4225] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(102), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4279] = 13,
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
    STATE(55), 1,
      sym__expression,
    STATE(45), 3,
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
  [4333] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token2,
    ACTIONS(185), 1,
      aux_sym_is_expression_token1,
    ACTIONS(187), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(177), 4,
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
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
  [4383] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      aux_sym_create_index_statement_token1,
    STATE(155), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4437] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(101), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4491] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(126), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4545] = 13,
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
    STATE(49), 1,
      sym__expression,
    STATE(45), 3,
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
  [4599] = 13,
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
    STATE(45), 3,
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
  [4653] = 13,
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
    STATE(45), 3,
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
  [4707] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_NULL_token1,
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
    STATE(33), 1,
      sym__expression,
    STATE(16), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(25), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4761] = 13,
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
    STATE(52), 1,
      sym__expression,
    STATE(45), 3,
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
  [4815] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(233), 11,
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
  [4864] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(239), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4909] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(251), 1,
      aux_sym_column_default_token1,
    ACTIONS(253), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(255), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(257), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(259), 1,
      aux_sym_in_expression_token1,
    ACTIONS(261), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(263), 1,
      aux_sym_NULL_token1,
    STATE(109), 1,
      sym_NULL,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(105), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [4957] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(270), 1,
      aux_sym_column_default_token1,
    ACTIONS(273), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(276), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(279), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(282), 1,
      aux_sym_in_expression_token1,
    ACTIONS(285), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(288), 1,
      aux_sym_NULL_token1,
    STATE(109), 1,
      sym_NULL,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(104), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5002] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(251), 1,
      aux_sym_column_default_token1,
    ACTIONS(253), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(255), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(257), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(259), 1,
      aux_sym_in_expression_token1,
    ACTIONS(261), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(263), 1,
      aux_sym_NULL_token1,
    STATE(109), 1,
      sym_NULL,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(104), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5047] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(297), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(299), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(301), 1,
      aux_sym_where_clause_token1,
    ACTIONS(303), 1,
      aux_sym_from_clause_token1,
    STATE(113), 1,
      sym_from_clause,
    STATE(139), 1,
      sym_where_clause,
    STATE(151), 1,
      sym_group_by_clause,
    STATE(166), 1,
      sym_order_by_clause,
    ACTIONS(293), 10,
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
  [5090] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(309), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(311), 17,
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
  [5162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(315), 17,
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
  [5188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(45), 17,
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
  [5214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(61), 17,
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
  [5240] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__function_language_token1,
    ACTIONS(325), 1,
      aux_sym_function_body_token1,
    ACTIONS(327), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(321), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(114), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5273] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(299), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(301), 1,
      aux_sym_where_clause_token1,
    ACTIONS(331), 1,
      aux_sym_create_index_statement_token1,
    STATE(134), 1,
      sym_where_clause,
    STATE(153), 1,
      sym_group_by_clause,
    STATE(161), 1,
      sym_order_by_clause,
    ACTIONS(329), 10,
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
  [5310] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym__function_language_token1,
    ACTIONS(341), 1,
      aux_sym_function_body_token1,
    ACTIONS(344), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(335), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(114), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(333), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      aux_sym_create_index_statement_token1,
    STATE(119), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(346), 14,
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
  [5372] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      aux_sym_create_index_statement_token1,
    STATE(115), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(352), 14,
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
  [5401] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(309), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5442] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__function_language_token1,
    ACTIONS(325), 1,
      aux_sym_function_body_token1,
    ACTIONS(360), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(321), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(112), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(358), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      aux_sym_create_index_statement_token1,
    STATE(119), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(362), 14,
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
  [5504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      aux_sym_create_index_statement_token1,
    STATE(124), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(369), 13,
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
  [5532] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(378), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(381), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(384), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(387), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(390), 1,
      aux_sym_select_clause_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(121), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(202), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [5572] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(259), 1,
      aux_sym_in_expression_token1,
    ACTIONS(263), 1,
      aux_sym_NULL_token1,
    ACTIONS(395), 1,
      aux_sym_create_index_statement_token1,
    STATE(109), 1,
      sym_NULL,
    STATE(135), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(362), 15,
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
  [5632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      aux_sym_create_index_statement_token1,
    STATE(119), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(397), 13,
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
  [5660] = 11,
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
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_select_clause,
    STATE(121), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(202), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [5700] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5742] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5784] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(409), 15,
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
  [5850] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(415), 15,
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
  [5916] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(423), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(419), 12,
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
  [5943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(433), 1,
      aux_sym_on_delete_action_token1,
    STATE(264), 1,
      sym_on_delete_action,
    STATE(268), 1,
      sym_on_update_action,
    ACTIONS(429), 10,
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
  [5974] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(299), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(437), 1,
      aux_sym_create_index_statement_token1,
    STATE(149), 1,
      sym_group_by_clause,
    STATE(162), 1,
      sym_order_by_clause,
    ACTIONS(435), 10,
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
  [6005] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(259), 1,
      aux_sym_in_expression_token1,
    ACTIONS(263), 1,
      aux_sym_NULL_token1,
    ACTIONS(441), 1,
      aux_sym_create_index_statement_token1,
    STATE(109), 1,
      sym_NULL,
    STATE(137), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(439), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6038] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6075] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(449), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(452), 1,
      aux_sym_in_expression_token1,
    ACTIONS(455), 1,
      aux_sym_NULL_token1,
    STATE(109), 1,
      sym_NULL,
    STATE(137), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(445), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(458), 14,
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
  [6131] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(299), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(331), 1,
      aux_sym_create_index_statement_token1,
    STATE(153), 1,
      sym_group_by_clause,
    STATE(161), 1,
      sym_order_by_clause,
    ACTIONS(329), 10,
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
  [6162] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(464), 12,
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
  [6226] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6263] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(233), 11,
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
  [6325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(433), 1,
      aux_sym_on_delete_action_token1,
    STATE(261), 1,
      sym_on_update_action,
    STATE(262), 1,
      sym_on_delete_action,
    ACTIONS(475), 10,
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
  [6353] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(129), 1,
      aux_sym_in_expression_token1,
    ACTIONS(131), 1,
      aux_sym_in_expression_token2,
    ACTIONS(135), 1,
      aux_sym_is_expression_token1,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6389] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(433), 1,
      aux_sym_on_delete_action_token1,
    STATE(265), 1,
      sym_on_update_action,
    STATE(266), 1,
      sym_on_delete_action,
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
      aux_sym_NULL_token1,
  [6417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      aux_sym_create_index_statement_token1,
    STATE(144), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(481), 11,
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
  [6443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(487), 1,
      aux_sym_create_index_statement_token1,
    STATE(171), 1,
      sym_order_by_clause,
    ACTIONS(485), 10,
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
  [6468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(489), 12,
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
  [6489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(331), 1,
      aux_sym_create_index_statement_token1,
    STATE(161), 1,
      sym_order_by_clause,
    ACTIONS(329), 10,
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
  [6514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(493), 12,
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
  [6535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(437), 1,
      aux_sym_create_index_statement_token1,
    STATE(162), 1,
      sym_order_by_clause,
    ACTIONS(435), 10,
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
  [6560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(497), 12,
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
  [6581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      aux_sym_create_index_statement_token1,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(501), 10,
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
  [6606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(233), 10,
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
  [6631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(508), 12,
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
  [6652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(464), 12,
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
  [6673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_COLON_COLON,
    ACTIONS(512), 10,
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
  [6695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(514), 11,
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
  [6715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(435), 10,
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
  [6734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(485), 10,
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
  [6753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COLON_COLON,
    ACTIONS(512), 10,
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
  [6772] = 7,
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
    STATE(258), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [6799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 11,
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
  [6816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(329), 10,
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
  [6835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 11,
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
  [6852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 11,
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
  [6869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(534), 10,
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
  [6888] = 7,
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
    STATE(235), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [6915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(538), 10,
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
  [6934] = 2,
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
  [6950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 10,
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
  [6966] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(550), 1,
      aux_sym_where_clause_token1,
    STATE(191), 1,
      sym_where_clause,
    ACTIONS(546), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [6988] = 2,
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
  [7004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_where_clause_token1,
    ACTIONS(556), 1,
      aux_sym_create_index_statement_token1,
    STATE(201), 1,
      sym_where_clause,
    ACTIONS(554), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 10,
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
  [7042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(238), 1,
      sym_constrained_type,
    STATE(206), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(45), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [7064] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_where_clause_token1,
    ACTIONS(564), 1,
      aux_sym_create_index_statement_token1,
    STATE(195), 1,
      sym_where_clause,
    ACTIONS(562), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 10,
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
  [7102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 10,
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
  [7118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_where_clause_token1,
    ACTIONS(570), 1,
      aux_sym_create_index_statement_token1,
    STATE(200), 1,
      sym_where_clause,
    ACTIONS(568), 7,
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
    ACTIONS(574), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(572), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [7157] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_NULL_token1,
    ACTIONS(576), 1,
      aux_sym_in_expression_token1,
    ACTIONS(578), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(580), 1,
      aux_sym_TRUE_token1,
    ACTIONS(582), 1,
      aux_sym_FALSE_token1,
    STATE(51), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [7199] = 4,
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
  [7218] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_in_expression_token1,
    ACTIONS(596), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(598), 1,
      aux_sym_NULL_token1,
    ACTIONS(600), 1,
      aux_sym_TRUE_token1,
    ACTIONS(602), 1,
      aux_sym_FALSE_token1,
    STATE(35), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(604), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(608), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(612), 1,
      aux_sym_setof_token1,
    STATE(118), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(132), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(614), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(618), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7327] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(598), 1,
      aux_sym_NULL_token1,
    ACTIONS(600), 1,
      aux_sym_TRUE_token1,
    ACTIONS(602), 1,
      aux_sym_FALSE_token1,
    STATE(43), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7349] = 3,
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
  [7365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(568), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
    ACTIONS(628), 1,
      sym_identifier,
    STATE(181), 1,
      sym_type_cast,
    STATE(163), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [7405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(630), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(634), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_NULL_token1,
    ACTIONS(578), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(580), 1,
      aux_sym_TRUE_token1,
    ACTIONS(582), 1,
      aux_sym_FALSE_token1,
    STATE(65), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(638), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(546), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_SEMI,
    ACTIONS(646), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(642), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(648), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [7524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(221), 1,
      sym_constrained_type,
    STATE(222), 1,
      sym_create_function_parameter,
    STATE(208), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7542] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(221), 1,
      sym_constrained_type,
    STATE(251), 1,
      sym_create_function_parameter,
    STATE(208), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_EQ,
    ACTIONS(656), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
    STATE(158), 1,
      sym_constrained_type,
    STATE(141), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(660), 1,
      anon_sym_EQ,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(666), 1,
      aux_sym_using_clause_token1,
    STATE(179), 1,
      sym_index_table_parameters,
    STATE(253), 1,
      sym_using_clause,
  [7625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(103), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(15), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(9), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(122), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(167), 1,
      sym__constraint_action,
    ACTIONS(672), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [7685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(165), 1,
      sym__constraint_action,
    ACTIONS(674), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [7697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(666), 1,
      aux_sym_using_clause_token1,
    STATE(176), 1,
      sym_index_table_parameters,
    STATE(263), 1,
      sym_using_clause,
  [7713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(225), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      aux_sym_select_clause_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(285), 1,
      sym_select_statement,
  [7738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_parameters_repeat1,
  [7751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_create_function_parameters_repeat1,
  [7764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_EQ,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_create_function_parameters_repeat1,
  [7788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_create_table_parameters_repeat1,
  [7814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(46), 1,
      sym_string,
  [7851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_index_table_parameters_repeat1,
  [7877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_index_table_parameters_repeat1,
  [7903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_parameters_repeat1,
  [7916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      aux_sym_select_clause_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(284), 1,
      sym_select_statement,
  [7929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_index_table_parameters_repeat1,
  [7942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_create_table_parameters_repeat1,
  [7955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_EQ,
    ACTIONS(656), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_create_table_parameters_repeat1,
  [8005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_string,
  [8018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_create_function_parameters_repeat1,
  [8057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(745), 1,
      aux_sym_create_index_statement_token2,
    STATE(309), 1,
      sym_unique_constraint,
  [8109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym_parameters_repeat1,
  [8148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_index_table_parameters,
  [8174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_tuple,
  [8192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_tuple,
  [8202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      sym_create_function_parameters,
  [8236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_on_delete_action_token1,
    STATE(173), 1,
      sym_on_delete_action,
  [8246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_on_update_action_token1,
    STATE(173), 1,
      sym_on_update_action,
  [8256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_index_table_parameters,
  [8266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_on_update_action_token1,
    STATE(177), 1,
      sym_on_update_action,
  [8276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_on_delete_action_token1,
    STATE(180), 1,
      sym_on_delete_action,
  [8286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_on_update_action_token1,
    STATE(180), 1,
      sym_on_update_action,
  [8296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_create_table_parameters,
  [8306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_on_delete_action_token1,
    STATE(177), 1,
      sym_on_delete_action,
  [8316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_NULL_token1,
    STATE(108), 1,
      sym_NULL,
  [8326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_tuple,
  [8352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_references_constraint_token1,
    STATE(257), 1,
      sym_references_constraint,
  [8362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_references_constraint_token1,
    STATE(274), 1,
      sym_references_constraint,
  [8380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_parameters,
  [8390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(777), 1,
      anon_sym_SQUOTE,
  [8408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_tuple,
  [8426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(259), 1,
      sym_parameter,
  [8436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(250), 1,
      sym_parameter,
  [8446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
  [8464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(787), 1,
      anon_sym_SEMI,
  [8474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym_identifier,
  [8481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
  [8488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
  [8495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      aux_sym_in_expression_token2,
  [8502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_identifier,
  [8509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
  [8516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_identifier,
  [8523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym_identifier,
  [8530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_SQUOTE,
  [8537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [8551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
  [8558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym_identifier,
  [8565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      aux_sym_create_index_statement_token3,
  [8572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
  [8579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
  [8586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      aux_sym_create_function_statement_token2,
  [8593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_identifier,
  [8600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym_identifier,
  [8607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_number_token1,
  [8614] = 2,
    ACTIONS(827), 1,
      aux_sym_string_token1,
    ACTIONS(829), 1,
      sym_comment,
  [8621] = 2,
    ACTIONS(829), 1,
      sym_comment,
    ACTIONS(831), 1,
      aux_sym_string_token2,
  [8628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym_create_function_statement_token2,
  [8635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      aux_sym_create_index_statement_token2,
  [8642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_create_index_statement_token3,
  [8649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_create_function_statement_token2,
  [8656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
  [8663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      aux_sym_number_token1,
  [8677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
  [8684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
  [8691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
  [8705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      ts_builtin_sym_end,
  [8712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_identifier,
  [8719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_identifier,
  [8726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym_identifier,
  [8733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_identifier,
  [8740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_identifier,
  [8747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      aux_sym_function_body_token1,
  [8754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym_identifier,
  [8761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_identifier,
  [8768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_SQUOTE,
  [8775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
  [8782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_identifier,
  [8789] = 2,
    ACTIONS(829), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym_string_token2,
  [8796] = 2,
    ACTIONS(829), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_string_token1,
  [8803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym_in_expression_token2,
  [8810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 123,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 215,
  [SMALL_STATE(7)] = 261,
  [SMALL_STATE(8)] = 307,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 401,
  [SMALL_STATE(11)] = 447,
  [SMALL_STATE(12)] = 498,
  [SMALL_STATE(13)] = 543,
  [SMALL_STATE(14)] = 586,
  [SMALL_STATE(15)] = 629,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 719,
  [SMALL_STATE(18)] = 762,
  [SMALL_STATE(19)] = 805,
  [SMALL_STATE(20)] = 848,
  [SMALL_STATE(21)] = 891,
  [SMALL_STATE(22)] = 934,
  [SMALL_STATE(23)] = 980,
  [SMALL_STATE(24)] = 1022,
  [SMALL_STATE(25)] = 1064,
  [SMALL_STATE(26)] = 1106,
  [SMALL_STATE(27)] = 1148,
  [SMALL_STATE(28)] = 1216,
  [SMALL_STATE(29)] = 1284,
  [SMALL_STATE(30)] = 1354,
  [SMALL_STATE(31)] = 1396,
  [SMALL_STATE(32)] = 1438,
  [SMALL_STATE(33)] = 1480,
  [SMALL_STATE(34)] = 1536,
  [SMALL_STATE(35)] = 1578,
  [SMALL_STATE(36)] = 1620,
  [SMALL_STATE(37)] = 1662,
  [SMALL_STATE(38)] = 1704,
  [SMALL_STATE(39)] = 1746,
  [SMALL_STATE(40)] = 1790,
  [SMALL_STATE(41)] = 1846,
  [SMALL_STATE(42)] = 1888,
  [SMALL_STATE(43)] = 1930,
  [SMALL_STATE(44)] = 1972,
  [SMALL_STATE(45)] = 2019,
  [SMALL_STATE(46)] = 2060,
  [SMALL_STATE(47)] = 2098,
  [SMALL_STATE(48)] = 2136,
  [SMALL_STATE(49)] = 2176,
  [SMALL_STATE(50)] = 2228,
  [SMALL_STATE(51)] = 2266,
  [SMALL_STATE(52)] = 2304,
  [SMALL_STATE(53)] = 2346,
  [SMALL_STATE(54)] = 2384,
  [SMALL_STATE(55)] = 2422,
  [SMALL_STATE(56)] = 2474,
  [SMALL_STATE(57)] = 2530,
  [SMALL_STATE(58)] = 2568,
  [SMALL_STATE(59)] = 2606,
  [SMALL_STATE(60)] = 2644,
  [SMALL_STATE(61)] = 2682,
  [SMALL_STATE(62)] = 2720,
  [SMALL_STATE(63)] = 2758,
  [SMALL_STATE(64)] = 2812,
  [SMALL_STATE(65)] = 2850,
  [SMALL_STATE(66)] = 2888,
  [SMALL_STATE(67)] = 2951,
  [SMALL_STATE(68)] = 3014,
  [SMALL_STATE(69)] = 3072,
  [SMALL_STATE(70)] = 3130,
  [SMALL_STATE(71)] = 3187,
  [SMALL_STATE(72)] = 3244,
  [SMALL_STATE(73)] = 3299,
  [SMALL_STATE(74)] = 3356,
  [SMALL_STATE(75)] = 3413,
  [SMALL_STATE(76)] = 3470,
  [SMALL_STATE(77)] = 3527,
  [SMALL_STATE(78)] = 3581,
  [SMALL_STATE(79)] = 3631,
  [SMALL_STATE(80)] = 3685,
  [SMALL_STATE(81)] = 3739,
  [SMALL_STATE(82)] = 3793,
  [SMALL_STATE(83)] = 3847,
  [SMALL_STATE(84)] = 3901,
  [SMALL_STATE(85)] = 3955,
  [SMALL_STATE(86)] = 4009,
  [SMALL_STATE(87)] = 4063,
  [SMALL_STATE(88)] = 4117,
  [SMALL_STATE(89)] = 4171,
  [SMALL_STATE(90)] = 4225,
  [SMALL_STATE(91)] = 4279,
  [SMALL_STATE(92)] = 4333,
  [SMALL_STATE(93)] = 4383,
  [SMALL_STATE(94)] = 4437,
  [SMALL_STATE(95)] = 4491,
  [SMALL_STATE(96)] = 4545,
  [SMALL_STATE(97)] = 4599,
  [SMALL_STATE(98)] = 4653,
  [SMALL_STATE(99)] = 4707,
  [SMALL_STATE(100)] = 4761,
  [SMALL_STATE(101)] = 4815,
  [SMALL_STATE(102)] = 4864,
  [SMALL_STATE(103)] = 4909,
  [SMALL_STATE(104)] = 4957,
  [SMALL_STATE(105)] = 5002,
  [SMALL_STATE(106)] = 5047,
  [SMALL_STATE(107)] = 5090,
  [SMALL_STATE(108)] = 5136,
  [SMALL_STATE(109)] = 5162,
  [SMALL_STATE(110)] = 5188,
  [SMALL_STATE(111)] = 5214,
  [SMALL_STATE(112)] = 5240,
  [SMALL_STATE(113)] = 5273,
  [SMALL_STATE(114)] = 5310,
  [SMALL_STATE(115)] = 5343,
  [SMALL_STATE(116)] = 5372,
  [SMALL_STATE(117)] = 5401,
  [SMALL_STATE(118)] = 5442,
  [SMALL_STATE(119)] = 5475,
  [SMALL_STATE(120)] = 5504,
  [SMALL_STATE(121)] = 5532,
  [SMALL_STATE(122)] = 5572,
  [SMALL_STATE(123)] = 5608,
  [SMALL_STATE(124)] = 5632,
  [SMALL_STATE(125)] = 5660,
  [SMALL_STATE(126)] = 5700,
  [SMALL_STATE(127)] = 5742,
  [SMALL_STATE(128)] = 5784,
  [SMALL_STATE(129)] = 5826,
  [SMALL_STATE(130)] = 5850,
  [SMALL_STATE(131)] = 5892,
  [SMALL_STATE(132)] = 5916,
  [SMALL_STATE(133)] = 5943,
  [SMALL_STATE(134)] = 5974,
  [SMALL_STATE(135)] = 6005,
  [SMALL_STATE(136)] = 6038,
  [SMALL_STATE(137)] = 6075,
  [SMALL_STATE(138)] = 6108,
  [SMALL_STATE(139)] = 6131,
  [SMALL_STATE(140)] = 6162,
  [SMALL_STATE(141)] = 6199,
  [SMALL_STATE(142)] = 6226,
  [SMALL_STATE(143)] = 6263,
  [SMALL_STATE(144)] = 6299,
  [SMALL_STATE(145)] = 6325,
  [SMALL_STATE(146)] = 6353,
  [SMALL_STATE(147)] = 6389,
  [SMALL_STATE(148)] = 6417,
  [SMALL_STATE(149)] = 6443,
  [SMALL_STATE(150)] = 6468,
  [SMALL_STATE(151)] = 6489,
  [SMALL_STATE(152)] = 6514,
  [SMALL_STATE(153)] = 6535,
  [SMALL_STATE(154)] = 6560,
  [SMALL_STATE(155)] = 6581,
  [SMALL_STATE(156)] = 6606,
  [SMALL_STATE(157)] = 6631,
  [SMALL_STATE(158)] = 6652,
  [SMALL_STATE(159)] = 6673,
  [SMALL_STATE(160)] = 6695,
  [SMALL_STATE(161)] = 6715,
  [SMALL_STATE(162)] = 6734,
  [SMALL_STATE(163)] = 6753,
  [SMALL_STATE(164)] = 6772,
  [SMALL_STATE(165)] = 6799,
  [SMALL_STATE(166)] = 6816,
  [SMALL_STATE(167)] = 6835,
  [SMALL_STATE(168)] = 6852,
  [SMALL_STATE(169)] = 6869,
  [SMALL_STATE(170)] = 6888,
  [SMALL_STATE(171)] = 6915,
  [SMALL_STATE(172)] = 6934,
  [SMALL_STATE(173)] = 6950,
  [SMALL_STATE(174)] = 6966,
  [SMALL_STATE(175)] = 6988,
  [SMALL_STATE(176)] = 7004,
  [SMALL_STATE(177)] = 7026,
  [SMALL_STATE(178)] = 7042,
  [SMALL_STATE(179)] = 7064,
  [SMALL_STATE(180)] = 7086,
  [SMALL_STATE(181)] = 7102,
  [SMALL_STATE(182)] = 7118,
  [SMALL_STATE(183)] = 7140,
  [SMALL_STATE(184)] = 7157,
  [SMALL_STATE(185)] = 7182,
  [SMALL_STATE(186)] = 7199,
  [SMALL_STATE(187)] = 7218,
  [SMALL_STATE(188)] = 7243,
  [SMALL_STATE(189)] = 7259,
  [SMALL_STATE(190)] = 7275,
  [SMALL_STATE(191)] = 7295,
  [SMALL_STATE(192)] = 7311,
  [SMALL_STATE(193)] = 7327,
  [SMALL_STATE(194)] = 7349,
  [SMALL_STATE(195)] = 7365,
  [SMALL_STATE(196)] = 7381,
  [SMALL_STATE(197)] = 7405,
  [SMALL_STATE(198)] = 7421,
  [SMALL_STATE(199)] = 7437,
  [SMALL_STATE(200)] = 7459,
  [SMALL_STATE(201)] = 7475,
  [SMALL_STATE(202)] = 7491,
  [SMALL_STATE(203)] = 7509,
  [SMALL_STATE(204)] = 7524,
  [SMALL_STATE(205)] = 7542,
  [SMALL_STATE(206)] = 7560,
  [SMALL_STATE(207)] = 7577,
  [SMALL_STATE(208)] = 7592,
  [SMALL_STATE(209)] = 7609,
  [SMALL_STATE(210)] = 7625,
  [SMALL_STATE(211)] = 7637,
  [SMALL_STATE(212)] = 7649,
  [SMALL_STATE(213)] = 7661,
  [SMALL_STATE(214)] = 7673,
  [SMALL_STATE(215)] = 7685,
  [SMALL_STATE(216)] = 7697,
  [SMALL_STATE(217)] = 7713,
  [SMALL_STATE(218)] = 7725,
  [SMALL_STATE(219)] = 7738,
  [SMALL_STATE(220)] = 7751,
  [SMALL_STATE(221)] = 7764,
  [SMALL_STATE(222)] = 7775,
  [SMALL_STATE(223)] = 7788,
  [SMALL_STATE(224)] = 7801,
  [SMALL_STATE(225)] = 7814,
  [SMALL_STATE(226)] = 7825,
  [SMALL_STATE(227)] = 7838,
  [SMALL_STATE(228)] = 7851,
  [SMALL_STATE(229)] = 7864,
  [SMALL_STATE(230)] = 7877,
  [SMALL_STATE(231)] = 7890,
  [SMALL_STATE(232)] = 7903,
  [SMALL_STATE(233)] = 7916,
  [SMALL_STATE(234)] = 7929,
  [SMALL_STATE(235)] = 7942,
  [SMALL_STATE(236)] = 7955,
  [SMALL_STATE(237)] = 7968,
  [SMALL_STATE(238)] = 7981,
  [SMALL_STATE(239)] = 7992,
  [SMALL_STATE(240)] = 8005,
  [SMALL_STATE(241)] = 8018,
  [SMALL_STATE(242)] = 8031,
  [SMALL_STATE(243)] = 8044,
  [SMALL_STATE(244)] = 8057,
  [SMALL_STATE(245)] = 8070,
  [SMALL_STATE(246)] = 8083,
  [SMALL_STATE(247)] = 8096,
  [SMALL_STATE(248)] = 8109,
  [SMALL_STATE(249)] = 8122,
  [SMALL_STATE(250)] = 8135,
  [SMALL_STATE(251)] = 8148,
  [SMALL_STATE(252)] = 8156,
  [SMALL_STATE(253)] = 8164,
  [SMALL_STATE(254)] = 8174,
  [SMALL_STATE(255)] = 8182,
  [SMALL_STATE(256)] = 8192,
  [SMALL_STATE(257)] = 8202,
  [SMALL_STATE(258)] = 8210,
  [SMALL_STATE(259)] = 8218,
  [SMALL_STATE(260)] = 8226,
  [SMALL_STATE(261)] = 8236,
  [SMALL_STATE(262)] = 8246,
  [SMALL_STATE(263)] = 8256,
  [SMALL_STATE(264)] = 8266,
  [SMALL_STATE(265)] = 8276,
  [SMALL_STATE(266)] = 8286,
  [SMALL_STATE(267)] = 8296,
  [SMALL_STATE(268)] = 8306,
  [SMALL_STATE(269)] = 8316,
  [SMALL_STATE(270)] = 8326,
  [SMALL_STATE(271)] = 8334,
  [SMALL_STATE(272)] = 8342,
  [SMALL_STATE(273)] = 8352,
  [SMALL_STATE(274)] = 8362,
  [SMALL_STATE(275)] = 8370,
  [SMALL_STATE(276)] = 8380,
  [SMALL_STATE(277)] = 8390,
  [SMALL_STATE(278)] = 8398,
  [SMALL_STATE(279)] = 8408,
  [SMALL_STATE(280)] = 8416,
  [SMALL_STATE(281)] = 8426,
  [SMALL_STATE(282)] = 8436,
  [SMALL_STATE(283)] = 8446,
  [SMALL_STATE(284)] = 8454,
  [SMALL_STATE(285)] = 8464,
  [SMALL_STATE(286)] = 8474,
  [SMALL_STATE(287)] = 8481,
  [SMALL_STATE(288)] = 8488,
  [SMALL_STATE(289)] = 8495,
  [SMALL_STATE(290)] = 8502,
  [SMALL_STATE(291)] = 8509,
  [SMALL_STATE(292)] = 8516,
  [SMALL_STATE(293)] = 8523,
  [SMALL_STATE(294)] = 8530,
  [SMALL_STATE(295)] = 8537,
  [SMALL_STATE(296)] = 8544,
  [SMALL_STATE(297)] = 8551,
  [SMALL_STATE(298)] = 8558,
  [SMALL_STATE(299)] = 8565,
  [SMALL_STATE(300)] = 8572,
  [SMALL_STATE(301)] = 8579,
  [SMALL_STATE(302)] = 8586,
  [SMALL_STATE(303)] = 8593,
  [SMALL_STATE(304)] = 8600,
  [SMALL_STATE(305)] = 8607,
  [SMALL_STATE(306)] = 8614,
  [SMALL_STATE(307)] = 8621,
  [SMALL_STATE(308)] = 8628,
  [SMALL_STATE(309)] = 8635,
  [SMALL_STATE(310)] = 8642,
  [SMALL_STATE(311)] = 8649,
  [SMALL_STATE(312)] = 8656,
  [SMALL_STATE(313)] = 8663,
  [SMALL_STATE(314)] = 8670,
  [SMALL_STATE(315)] = 8677,
  [SMALL_STATE(316)] = 8684,
  [SMALL_STATE(317)] = 8691,
  [SMALL_STATE(318)] = 8698,
  [SMALL_STATE(319)] = 8705,
  [SMALL_STATE(320)] = 8712,
  [SMALL_STATE(321)] = 8719,
  [SMALL_STATE(322)] = 8726,
  [SMALL_STATE(323)] = 8733,
  [SMALL_STATE(324)] = 8740,
  [SMALL_STATE(325)] = 8747,
  [SMALL_STATE(326)] = 8754,
  [SMALL_STATE(327)] = 8761,
  [SMALL_STATE(328)] = 8768,
  [SMALL_STATE(329)] = 8775,
  [SMALL_STATE(330)] = 8782,
  [SMALL_STATE(331)] = 8789,
  [SMALL_STATE(332)] = 8796,
  [SMALL_STATE(333)] = 8803,
  [SMALL_STATE(334)] = 8810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 17),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 17),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliasable_expression, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(327),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(196),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(79),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(168),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(175),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(269),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(326),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(12),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(157),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(291),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(278),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(68),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(334),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(323),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliased_expression, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(79),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(269),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(12),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(83),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(94),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 19),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 19),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 16),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 16),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 16),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 16),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 16),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 16),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(205),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(281),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(74),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(303),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(164),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 18),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 15),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [853] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
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
