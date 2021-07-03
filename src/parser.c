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
#define STATE_COUNT 349
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 4
#define TOKEN_COUNT 71
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
  aux_sym_in_expression_token1 = 37,
  aux_sym_in_expression_token2 = 38,
  aux_sym_references_constraint_token1 = 39,
  aux_sym_on_update_action_token1 = 40,
  aux_sym_on_delete_action_token1 = 41,
  aux_sym__constraint_action_token1 = 42,
  aux_sym__constraint_action_token2 = 43,
  aux_sym__constraint_action_token3 = 44,
  anon_sym_LT = 45,
  anon_sym_LT_EQ = 46,
  anon_sym_LT_GT = 47,
  anon_sym_GT = 48,
  anon_sym_GT_EQ = 49,
  aux_sym_is_expression_token1 = 50,
  aux_sym_distinct_from_token1 = 51,
  aux_sym_boolean_expression_token1 = 52,
  aux_sym_boolean_expression_token2 = 53,
  aux_sym_NULL_token1 = 54,
  aux_sym_TRUE_token1 = 55,
  aux_sym_FALSE_token1 = 56,
  aux_sym_number_token1 = 57,
  sym_identifier = 58,
  aux_sym_string_token1 = 59,
  aux_sym_string_token2 = 60,
  anon_sym_DASH_GT_GT = 61,
  aux_sym_ordered_expression_token1 = 62,
  aux_sym_ordered_expression_token2 = 63,
  anon_sym_LBRACK = 64,
  anon_sym_RBRACK = 65,
  anon_sym_COLON_COLON = 66,
  sym_comment = 67,
  anon_sym_TILDE = 68,
  anon_sym_PLUS = 69,
  anon_sym_DOLLAR = 70,
  sym_source_file = 71,
  sym__statement = 72,
  sym_create_function_statement = 73,
  sym__function_optimizer_hint = 74,
  sym__function_language = 75,
  sym__create_function_return_type = 76,
  sym_setof = 77,
  sym_constrained_type = 78,
  sym_create_function_parameter = 79,
  sym_create_function_parameters = 80,
  sym_function_body = 81,
  sym_create_domain_statement = 82,
  sym_create_type_statement = 83,
  sym_create_index_statement = 84,
  sym_create_table_column_parameter = 85,
  sym_named_constraint = 86,
  sym_column_default = 87,
  sym_create_table_parameters = 88,
  sym__table_constraint = 89,
  sym_table_constraint_check = 90,
  sym_table_constraint_foreign_key = 91,
  sym_table_constraint_unique = 92,
  sym_table_constraint_primary_key = 93,
  sym_primary_key_constraint = 94,
  sym_create_table_statement = 95,
  sym_using_clause = 96,
  sym_index_table_parameters = 97,
  sym_select_statement = 98,
  sym_group_by_clause_body = 99,
  sym_group_by_clause = 100,
  sym_order_by_clause_body = 101,
  sym_order_by_clause = 102,
  sym_where_clause = 103,
  sym__aliased_expression = 104,
  sym__aliasable_expression = 105,
  sym_select_clause_body = 106,
  sym_select_clause = 107,
  sym_from_clause = 108,
  sym_select_subexpression = 109,
  sym_update_statement = 110,
  sym_set_clause = 111,
  sym_set_clause_body = 112,
  sym_assigment_expression = 113,
  sym_in_expression = 114,
  sym_tuple = 115,
  sym_references_constraint = 116,
  sym_on_update_action = 117,
  sym_on_delete_action = 118,
  sym__constraint_action = 119,
  sym_unique_constraint = 120,
  sym_null_constraint = 121,
  sym_check_constraint = 122,
  sym_parameter = 123,
  sym_parameters = 124,
  sym_function_call = 125,
  sym_comparison_operator = 126,
  sym__parenthesized_expression = 127,
  sym_is_expression = 128,
  sym_distinct_from = 129,
  sym_boolean_expression = 130,
  sym_NULL = 131,
  sym_TRUE = 132,
  sym_FALSE = 133,
  sym_number = 134,
  sym_string = 135,
  sym_field_access = 136,
  sym_ordered_expression = 137,
  sym__type_alias = 138,
  sym_array_type = 139,
  sym__type = 140,
  sym_type_cast = 141,
  sym_binary_expression = 142,
  sym_argument_reference = 143,
  sym__expression = 144,
  aux_sym_source_file_repeat1 = 145,
  aux_sym_create_function_statement_repeat1 = 146,
  aux_sym_create_function_parameters_repeat1 = 147,
  aux_sym_create_domain_statement_repeat1 = 148,
  aux_sym_create_table_column_parameter_repeat1 = 149,
  aux_sym_create_table_parameters_repeat1 = 150,
  aux_sym_table_constraint_foreign_key_repeat1 = 151,
  aux_sym_index_table_parameters_repeat1 = 152,
  aux_sym_group_by_clause_body_repeat1 = 153,
  aux_sym_select_clause_body_repeat1 = 154,
  aux_sym_set_clause_body_repeat1 = 155,
  aux_sym_parameters_repeat1 = 156,
  anon_alias_sym_NOT = 157,
  alias_sym_default = 158,
  alias_sym_language = 159,
  alias_sym_type = 160,
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
      if (eof) ADVANCE(276);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '+') ADVANCE(449);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(332);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == '[') ADVANCE(442);
      if (lookahead == '\\') SKIP(263)
      if (lookahead == ']') ADVANCE(443);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == '~') ADVANCE(448);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(201);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
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
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(194);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(352);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(404);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(291);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '*') ADVANCE(437);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(14)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '/') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(434);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '[') ADVANCE(442);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
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
      if (lookahead == '/') ADVANCE(445);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(447);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(447);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(378);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(395);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(400);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(390);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(444);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(439);
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
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(112);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(112);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
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
      if (lookahead == 'T') ADVANCE(299);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(112);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(257);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 130:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 131:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(222);
      END_STATE();
    case 132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 134:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 135:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 136:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 137:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 138:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 139:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 140:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(112);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 141:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 151:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(301);
      END_STATE();
    case 152:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 153:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 168:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 169:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 171:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(334);
      END_STATE();
    case 172:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 173:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      END_STATE();
    case 174:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 175:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 176:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 177:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(334);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 206:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 207:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 209:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(251);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 224:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 225:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 226:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(323);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 245:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 246:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 247:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 248:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 249:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 250:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 251:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 252:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 253:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 254:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 255:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(297);
      END_STATE();
    case 256:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 257:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 258:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 259:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 260:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(436);
      END_STATE();
    case 262:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 263:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(262)
      END_STATE();
    case 264:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(272)
      END_STATE();
    case 265:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(272)
      if (lookahead == '\r') SKIP(264)
      END_STATE();
    case 266:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(273)
      END_STATE();
    case 267:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(273)
      if (lookahead == '\r') SKIP(266)
      END_STATE();
    case 268:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(274)
      END_STATE();
    case 269:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(274)
      if (lookahead == '\r') SKIP(268)
      END_STATE();
    case 270:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(275)
      END_STATE();
    case 271:
      if (eof) ADVANCE(276);
      if (lookahead == '\n') SKIP(275)
      if (lookahead == '\r') SKIP(270)
      END_STATE();
    case 272:
      if (eof) ADVANCE(276);
      if (lookahead == '$') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '\\') SKIP(265)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(352);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(404);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(397);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(272)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 273:
      if (eof) ADVANCE(276);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '+') ADVANCE(449);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(332);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == '[') ADVANCE(442);
      if (lookahead == '\\') SKIP(267)
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == '~') ADVANCE(448);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(214);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(273)
      END_STATE();
    case 274:
      if (eof) ADVANCE(276);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '+') ADVANCE(449);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(332);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == '[') ADVANCE(442);
      if (lookahead == '\\') SKIP(269)
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == '~') ADVANCE(448);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(274)
      END_STATE();
    case 275:
      if (eof) ADVANCE(276);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == ',') ADVANCE(288);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '[') ADVANCE(442);
      if (lookahead == '\\') SKIP(271)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(275)
      END_STATE();
    case 276:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_set_clause_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(330);
      if (lookahead == '>') ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(197);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\r') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(429);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(429);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(429);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(429);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(429);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\r') ADVANCE(431);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '$') ADVANCE(446);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '/') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(434);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead == '-') ADVANCE(432);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(261);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(437);
      if (lookahead == '/') ADVANCE(436);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(437);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '$') ADVANCE(447);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(291);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 272},
  [3] = {.lex_state = 273},
  [4] = {.lex_state = 273},
  [5] = {.lex_state = 273},
  [6] = {.lex_state = 274},
  [7] = {.lex_state = 273},
  [8] = {.lex_state = 273},
  [9] = {.lex_state = 273},
  [10] = {.lex_state = 273},
  [11] = {.lex_state = 273},
  [12] = {.lex_state = 273},
  [13] = {.lex_state = 274},
  [14] = {.lex_state = 274},
  [15] = {.lex_state = 274},
  [16] = {.lex_state = 274},
  [17] = {.lex_state = 274},
  [18] = {.lex_state = 274},
  [19] = {.lex_state = 274},
  [20] = {.lex_state = 274},
  [21] = {.lex_state = 274},
  [22] = {.lex_state = 274},
  [23] = {.lex_state = 274},
  [24] = {.lex_state = 274},
  [25] = {.lex_state = 274},
  [26] = {.lex_state = 274},
  [27] = {.lex_state = 274},
  [28] = {.lex_state = 274},
  [29] = {.lex_state = 274},
  [30] = {.lex_state = 274},
  [31] = {.lex_state = 274},
  [32] = {.lex_state = 274},
  [33] = {.lex_state = 274},
  [34] = {.lex_state = 274},
  [35] = {.lex_state = 274},
  [36] = {.lex_state = 274},
  [37] = {.lex_state = 274},
  [38] = {.lex_state = 274},
  [39] = {.lex_state = 274},
  [40] = {.lex_state = 274},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 273},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 273},
  [46] = {.lex_state = 273},
  [47] = {.lex_state = 273},
  [48] = {.lex_state = 273},
  [49] = {.lex_state = 273},
  [50] = {.lex_state = 273},
  [51] = {.lex_state = 273},
  [52] = {.lex_state = 273},
  [53] = {.lex_state = 273},
  [54] = {.lex_state = 274},
  [55] = {.lex_state = 273},
  [56] = {.lex_state = 273},
  [57] = {.lex_state = 273},
  [58] = {.lex_state = 273},
  [59] = {.lex_state = 273},
  [60] = {.lex_state = 273},
  [61] = {.lex_state = 273},
  [62] = {.lex_state = 273},
  [63] = {.lex_state = 273},
  [64] = {.lex_state = 273},
  [65] = {.lex_state = 273},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 273},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 273},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 274},
  [77] = {.lex_state = 273},
  [78] = {.lex_state = 26},
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
  [96] = {.lex_state = 274},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 274},
  [104] = {.lex_state = 274},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 275},
  [111] = {.lex_state = 275},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 274},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 274},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 275},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 274},
  [133] = {.lex_state = 274},
  [134] = {.lex_state = 274},
  [135] = {.lex_state = 274},
  [136] = {.lex_state = 275},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 274},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 274},
  [144] = {.lex_state = 274},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 273},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 273},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 274},
  [154] = {.lex_state = 273},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 274},
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
  [172] = {.lex_state = 39},
  [173] = {.lex_state = 39},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 273},
  [176] = {.lex_state = 273},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 33},
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
  [193] = {.lex_state = 32},
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
  [209] = {.lex_state = 30},
  [210] = {.lex_state = 40},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 30},
  [214] = {.lex_state = 30},
  [215] = {.lex_state = 30},
  [216] = {.lex_state = 275},
  [217] = {.lex_state = 275},
  [218] = {.lex_state = 30},
  [219] = {.lex_state = 30},
  [220] = {.lex_state = 273},
  [221] = {.lex_state = 273},
  [222] = {.lex_state = 30},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 30},
  [226] = {.lex_state = 30},
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
  [240] = {.lex_state = 30},
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
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 275},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 273},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 273},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 273},
  [269] = {.lex_state = 30},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 273},
  [276] = {.lex_state = 273},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 273},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 30},
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
  [295] = {.lex_state = 30},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 273},
  [303] = {.lex_state = 30},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 30},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 30},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 30},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 427},
  [315] = {.lex_state = 31},
  [316] = {.lex_state = 30},
  [317] = {.lex_state = 275},
  [318] = {.lex_state = 30},
  [319] = {.lex_state = 30},
  [320] = {.lex_state = 30},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 30},
  [324] = {.lex_state = 30},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 30},
  [327] = {.lex_state = 30},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 30},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 30},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 30},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 30},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 30},
  [345] = {.lex_state = 31},
  [346] = {.lex_state = 427},
  [347] = {.lex_state = 273},
  [348] = {.lex_state = 30},
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
    [sym_source_file] = STATE(325),
    [sym__statement] = STATE(113),
    [sym_create_function_statement] = STATE(195),
    [sym_create_domain_statement] = STATE(195),
    [sym_create_type_statement] = STATE(195),
    [sym_create_index_statement] = STATE(195),
    [sym_create_table_statement] = STATE(195),
    [sym_select_statement] = STATE(195),
    [sym_select_clause] = STATE(106),
    [sym_update_statement] = STATE(195),
    [aux_sym_source_file_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_function_statement_token1] = ACTIONS(7),
    [aux_sym_create_domain_statement_token1] = ACTIONS(9),
    [aux_sym_create_type_statement_token1] = ACTIONS(11),
    [aux_sym_create_index_statement_token1] = ACTIONS(13),
    [aux_sym_create_table_statement_token1] = ACTIONS(15),
    [aux_sym_select_clause_token1] = ACTIONS(17),
    [aux_sym_update_statement_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(140), 1,
      sym_select_clause_body,
    STATE(116), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 5,
      aux_sym_create_index_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [78] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(43), 35,
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
  [125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(47), 35,
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
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(51), 35,
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
  [219] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(63), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 33,
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
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 35,
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
  [319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(69), 34,
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
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(75), 35,
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
  [415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(79), 35,
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
  [462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(83), 35,
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
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(87), 34,
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
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 34,
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
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 34,
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
  [645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 33,
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
  [692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 34,
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
  [737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 34,
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
  [782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 34,
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
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 33,
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
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 34,
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
  [919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 34,
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
  [964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 33,
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
  [1008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 33,
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
  [1052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 33,
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
  [1096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 33,
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
  [1140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 33,
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
  [1184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 33,
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
  [1228] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(113), 24,
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
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 33,
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
  [1330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(137), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 32,
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
  [1376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 33,
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
  [1420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 33,
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
  [1464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 31,
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
  [1512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 33,
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
  [1556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 33,
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
  [1600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 33,
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
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 33,
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
  [1688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 33,
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
  [1732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 33,
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
  [1776] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(167), 24,
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
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1834] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(140), 1,
      sym_select_clause_body,
    ACTIONS(29), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(116), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(21), 4,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [1902] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(140), 1,
      sym_select_clause_body,
    ACTIONS(29), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(116), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    ACTIONS(21), 3,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [1972] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(175), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(55), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2020] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(140), 1,
      sym_select_clause_body,
    ACTIONS(29), 2,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(116), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(21), 4,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(55), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(55), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(163), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(93), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2329] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(185), 1,
      aux_sym_function_body_token1,
    ACTIONS(187), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(183), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(181), 16,
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
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(139), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2464] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(201), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(199), 17,
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
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [2519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(155), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(105), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(137), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 26,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2794] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(177), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(167), 19,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2847] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(177), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(113), 19,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(131), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 4,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(159), 27,
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
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2978] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_select_clause_token1,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym_select_clause,
    STATE(159), 1,
      sym__expression,
    STATE(329), 1,
      sym_select_statement,
    STATE(19), 3,
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
  [3041] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_select_clause_token1,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym_select_clause,
    STATE(153), 1,
      sym__expression,
    STATE(309), 1,
      sym_select_statement,
    STATE(19), 3,
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
  [3104] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      aux_sym_create_index_statement_token1,
    STATE(145), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(183), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(225), 12,
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
  [3160] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3218] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym__expression,
    STATE(126), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3276] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(125), 1,
      sym__expression,
    STATE(263), 1,
      sym_ordered_expression,
    STATE(19), 3,
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
  [3333] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(233), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(183), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(231), 13,
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
  [3384] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym__expression,
    STATE(19), 3,
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
  [3441] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(115), 1,
      sym__expression,
    STATE(242), 1,
      sym_ordered_expression,
    STATE(19), 3,
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
  [3498] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym__expression,
    STATE(165), 1,
      sym_order_by_clause_body,
    STATE(19), 3,
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
  [3555] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      aux_sym_create_index_statement_token1,
    STATE(151), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [3610] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(179), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(245), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(183), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(243), 13,
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
  [3661] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym__expression,
    STATE(19), 3,
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
  [3718] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym__expression,
    STATE(161), 1,
      sym_group_by_clause_body,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3775] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3829] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3883] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(132), 1,
      sym__expression,
    STATE(19), 3,
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
  [3937] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3991] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym__expression,
    STATE(19), 3,
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
  [4045] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(153), 1,
      sym__expression,
    STATE(19), 3,
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
  [4099] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(77), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4153] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym__expression,
    STATE(19), 3,
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
  [4207] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym__expression,
    STATE(19), 3,
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
  [4261] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym__expression,
    STATE(19), 3,
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
  [4315] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(96), 1,
      sym__expression,
    STATE(19), 3,
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
  [4369] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(144), 1,
      sym__expression,
    STATE(19), 3,
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
  [4423] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(141), 1,
      sym__expression,
    STATE(19), 3,
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
  [4477] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(19), 3,
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
  [4531] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym__expression,
    STATE(19), 3,
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
  [4585] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4639] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(233), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(231), 12,
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
  [4689] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(143), 1,
      sym__expression,
    STATE(19), 3,
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
  [4743] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(19), 3,
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
  [4797] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4851] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym__expression,
    STATE(19), 3,
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
  [4905] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      aux_sym_NULL_token1,
    ACTIONS(33), 1,
      aux_sym_TRUE_token1,
    ACTIONS(35), 1,
      aux_sym_FALSE_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym__expression,
    STATE(45), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(46), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4959] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_NULL_token1,
    ACTIONS(215), 1,
      aux_sym_TRUE_token1,
    ACTIONS(217), 1,
      aux_sym_FALSE_token1,
    ACTIONS(219), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    STATE(134), 1,
      sym__expression,
    STATE(19), 3,
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
  [5013] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(251), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(249), 10,
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
  [5061] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(245), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [5107] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(257), 1,
      aux_sym_column_default_token1,
    ACTIONS(259), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(261), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(263), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(265), 1,
      aux_sym_in_expression_token1,
    ACTIONS(267), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(269), 1,
      aux_sym_NULL_token1,
    STATE(109), 1,
      sym_NULL,
    ACTIONS(253), 2,
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
  [5155] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(275), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(277), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(279), 1,
      aux_sym_where_clause_token1,
    ACTIONS(281), 1,
      aux_sym_from_clause_token1,
    STATE(118), 1,
      sym_from_clause,
    STATE(139), 1,
      sym_where_clause,
    STATE(150), 1,
      sym_group_by_clause,
    STATE(162), 1,
      sym_order_by_clause,
    ACTIONS(271), 11,
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
  [5199] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(288), 1,
      aux_sym_column_default_token1,
    ACTIONS(291), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(294), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(297), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(300), 1,
      aux_sym_in_expression_token1,
    ACTIONS(303), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(306), 1,
      aux_sym_NULL_token1,
    STATE(109), 1,
      sym_NULL,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(107), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5244] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(257), 1,
      aux_sym_column_default_token1,
    ACTIONS(259), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(261), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(263), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(265), 1,
      aux_sym_in_expression_token1,
    ACTIONS(267), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(269), 1,
      aux_sym_NULL_token1,
    STATE(109), 1,
      sym_NULL,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(107), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(311), 18,
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
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [5316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(43), 18,
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
      anon_sym_LBRACK,
  [5343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(47), 18,
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
      anon_sym_LBRACK,
  [5370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(315), 18,
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
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [5397] = 12,
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
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_select_clause,
    STATE(121), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(195), 7,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
  [5441] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__function_language_token1,
    ACTIONS(329), 1,
      aux_sym_function_body_token1,
    ACTIONS(332), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(323), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(114), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(321), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [5475] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(338), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      aux_sym_create_index_statement_token1,
    STATE(117), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(340), 15,
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
  [5551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(346), 15,
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
  [5581] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(277), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(279), 1,
      aux_sym_where_clause_token1,
    ACTIONS(352), 1,
      aux_sym_create_index_statement_token1,
    STATE(131), 1,
      sym_where_clause,
    STATE(156), 1,
      sym_group_by_clause,
    STATE(164), 1,
      sym_order_by_clause,
    ACTIONS(350), 11,
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
  [5619] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym__function_language_token1,
    ACTIONS(360), 1,
      aux_sym_function_body_token1,
    ACTIONS(362), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(356), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(114), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [5653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(364), 15,
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
  [5683] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(376), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(379), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(382), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(385), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(388), 1,
      aux_sym_select_clause_token1,
    ACTIONS(391), 1,
      aux_sym_update_statement_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(121), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(195), 7,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
  [5727] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym__function_language_token1,
    ACTIONS(360), 1,
      aux_sym_function_body_token1,
    ACTIONS(396), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(356), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(119), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(394), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [5761] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(265), 1,
      aux_sym_in_expression_token1,
    ACTIONS(269), 1,
      aux_sym_NULL_token1,
    ACTIONS(400), 1,
      aux_sym_create_index_statement_token1,
    STATE(109), 1,
      sym_NULL,
    STATE(137), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(398), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [5798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(364), 16,
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
  [5823] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(338), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      aux_sym_create_index_statement_token1,
    STATE(128), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(404), 14,
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
  [5893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(408), 16,
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
  [5918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(412), 14,
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
  [5947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(416), 16,
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
  [5972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(424), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 13,
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
  [6000] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(277), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(430), 1,
      aux_sym_create_index_statement_token1,
    STATE(157), 1,
      sym_group_by_clause,
    STATE(167), 1,
      sym_order_by_clause,
    ACTIONS(428), 11,
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
  [6032] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6074] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6116] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6158] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(440), 13,
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
  [6228] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(265), 1,
      aux_sym_in_expression_token1,
    ACTIONS(269), 1,
      aux_sym_NULL_token1,
    ACTIONS(446), 1,
      aux_sym_create_index_statement_token1,
    STATE(109), 1,
      sym_NULL,
    STATE(138), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [6262] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(452), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(455), 1,
      aux_sym_in_expression_token1,
    ACTIONS(458), 1,
      aux_sym_NULL_token1,
    STATE(109), 1,
      sym_NULL,
    STATE(138), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [6296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(277), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(352), 1,
      aux_sym_create_index_statement_token1,
    STATE(156), 1,
      sym_group_by_clause,
    STATE(164), 1,
      sym_order_by_clause,
    ACTIONS(350), 11,
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
  [6328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(461), 15,
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
  [6352] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(231), 12,
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
  [6416] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6453] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      aux_sym_create_index_statement_token1,
    STATE(142), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(474), 12,
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
  [6517] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(484), 1,
      aux_sym_on_delete_action_token1,
    STATE(265), 1,
      sym_on_delete_action,
    STATE(268), 1,
      sym_on_update_action,
    ACTIONS(480), 10,
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
  [6548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(231), 11,
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
  [6574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(489), 13,
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
  [6596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(484), 1,
      aux_sym_on_delete_action_token1,
    STATE(262), 1,
      sym_on_delete_action,
    STATE(279), 1,
      sym_on_update_action,
    ACTIONS(493), 10,
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
  [6624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(352), 1,
      aux_sym_create_index_statement_token1,
    STATE(164), 1,
      sym_order_by_clause,
    ACTIONS(350), 11,
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
  [6650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      aux_sym_create_index_statement_token1,
    STATE(147), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(495), 11,
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
  [6676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(499), 13,
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
  [6698] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6734] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(484), 1,
      aux_sym_on_delete_action_token1,
    STATE(275), 1,
      sym_on_update_action,
    STATE(276), 1,
      sym_on_delete_action,
    ACTIONS(505), 10,
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
    ACTIONS(509), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(507), 13,
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
  [6784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(430), 1,
      aux_sym_create_index_statement_token1,
    STATE(167), 1,
      sym_order_by_clause,
    ACTIONS(428), 11,
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
  [6810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(513), 1,
      aux_sym_create_index_statement_token1,
    STATE(163), 1,
      sym_order_by_clause,
    ACTIONS(511), 11,
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
  [6836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(515), 13,
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
  [6858] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_in_expression_token2,
    ACTIONS(125), 1,
      aux_sym_is_expression_token1,
    ACTIONS(127), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(129), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(420), 13,
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
  [6916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(521), 12,
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
  [6937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(350), 11,
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
  [6957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(525), 11,
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
  [6977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(428), 11,
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
  [6997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(529), 11,
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
  [7017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      aux_sym_create_index_statement_token1,
    STATE(169), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(533), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(511), 11,
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
  [7061] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      aux_sym_create_index_statement_token1,
    STATE(168), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(539), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      aux_sym_create_index_statement_token1,
    STATE(168), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(546), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_COLON_COLON,
    ACTIONS(550), 10,
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
  [7131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(556), 1,
      aux_sym_where_clause_token1,
    STATE(194), 1,
      sym_where_clause,
    ACTIONS(552), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7154] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(560), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(562), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(564), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(266), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7181] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(560), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(562), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(564), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(239), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [7208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_where_clause_token1,
    ACTIONS(570), 1,
      aux_sym_create_index_statement_token1,
    STATE(205), 1,
      sym_where_clause,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 11,
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
  [7248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 11,
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
  [7265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_where_clause_token1,
    ACTIONS(578), 1,
      aux_sym_create_index_statement_token1,
    STATE(199), 1,
      sym_where_clause,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_where_clause_token1,
    ACTIONS(582), 1,
      aux_sym_create_index_statement_token1,
    STATE(198), 1,
      sym_where_clause,
    ACTIONS(580), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(539), 10,
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
  [7330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 11,
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
  [7347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_where_clause_token1,
    ACTIONS(588), 1,
      aux_sym_create_index_statement_token1,
    STATE(196), 1,
      sym_where_clause,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON_COLON,
    ACTIONS(550), 10,
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
  [7389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 10,
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
  [7405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(592), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(596), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 10,
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
  [7457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 10,
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
  [7473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 10,
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
  [7489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      aux_sym_function_body_token1,
    ACTIONS(608), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(604), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 10,
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
  [7525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(612), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 10,
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
  [7559] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_identifier,
    STATE(253), 1,
      sym_constrained_type,
    STATE(216), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(43), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [7581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(576), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_SEMI,
    ACTIONS(624), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(620), 7,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(626), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(630), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(568), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(634), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7685] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      aux_sym_in_expression_token1,
    ACTIONS(640), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(642), 1,
      aux_sym_NULL_token1,
    ACTIONS(644), 1,
      aux_sym_TRUE_token1,
    ACTIONS(646), 1,
      aux_sym_FALSE_token1,
    STATE(35), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(648), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(652), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(656), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(660), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(664), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(668), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7812] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_NULL_token1,
    ACTIONS(672), 1,
      aux_sym_in_expression_token1,
    ACTIONS(674), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(676), 1,
      aux_sym_TRUE_token1,
    ACTIONS(678), 1,
      aux_sym_FALSE_token1,
    STATE(57), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(680), 7,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
  [7853] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(186), 1,
      sym_type_cast,
    STATE(182), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [7877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(688), 1,
      aux_sym_setof_token1,
    STATE(122), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(136), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(642), 1,
      aux_sym_NULL_token1,
    ACTIONS(644), 1,
      aux_sym_TRUE_token1,
    ACTIONS(646), 1,
      aux_sym_FALSE_token1,
    STATE(39), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_NULL_token1,
    ACTIONS(674), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(676), 1,
      aux_sym_TRUE_token1,
    ACTIONS(678), 1,
      aux_sym_FALSE_token1,
    STATE(47), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(237), 1,
      sym_constrained_type,
    STATE(293), 1,
      sym_create_function_parameter,
    STATE(217), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(237), 1,
      sym_constrained_type,
    STATE(254), 1,
      sym_create_function_parameter,
    STATE(217), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_identifier,
    STATE(160), 1,
      sym_constrained_type,
    STATE(130), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(694), 1,
      anon_sym_EQ,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(698), 1,
      anon_sym_EQ,
    ACTIONS(700), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
    STATE(105), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
    STATE(8), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(176), 1,
      sym__constraint_action,
    ACTIONS(704), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [8062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(175), 1,
      sym__constraint_action,
    ACTIONS(706), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [8074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(15), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    ACTIONS(712), 1,
      aux_sym_using_clause_token1,
    STATE(171), 1,
      sym_index_table_parameters,
    STATE(287), 1,
      sym_using_clause,
  [8102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    ACTIONS(712), 1,
      aux_sym_using_clause_token1,
    STATE(178), 1,
      sym_index_table_parameters,
    STATE(278), 1,
      sym_using_clause,
  [8118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
    STATE(123), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
    STATE(241), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [8142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      sym_string,
  [8155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym_string,
  [8168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_create_table_parameters_repeat1,
  [8194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_create_function_parameters_repeat1,
  [8246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_create_function_parameters_repeat1,
  [8272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_EQ,
    ACTIONS(700), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      aux_sym_create_table_parameters_repeat1,
  [8309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
    STATE(166), 1,
      sym_assigment_expression,
    STATE(184), 1,
      sym_set_clause_body,
  [8322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(745), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_index_table_parameters_repeat1,
  [8346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_index_table_parameters_repeat1,
  [8359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym_parameters_repeat1,
  [8372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym_parameters_repeat1,
  [8385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_parameters_repeat1,
  [8398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_select_clause_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(290), 1,
      sym_select_statement,
  [8411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_EQ,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_create_function_parameters_repeat1,
  [8500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      aux_sym_select_clause_token1,
    STATE(106), 1,
      sym_select_clause,
    STATE(291), 1,
      sym_select_statement,
  [8513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_index_table_parameters_repeat1,
  [8539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_create_table_parameters_repeat1,
  [8552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(789), 1,
      aux_sym_create_index_statement_token2,
    STATE(317), 1,
      sym_unique_constraint,
  [8565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_on_update_action_token1,
    STATE(187), 1,
      sym_on_update_action,
  [8596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_references_constraint_token1,
    STATE(277), 1,
      sym_references_constraint,
  [8614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_on_update_action_token1,
    STATE(183), 1,
      sym_on_update_action,
  [8624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_on_delete_action_token1,
    STATE(183), 1,
      sym_on_delete_action,
  [8650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(246), 1,
      sym_parameter,
  [8660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_NULL_token1,
    STATE(112), 1,
      sym_NULL,
  [8670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym_create_function_parameters,
  [8680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_references_constraint_token1,
    STATE(267), 1,
      sym_references_constraint,
  [8706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_on_delete_action_token1,
    STATE(188), 1,
      sym_on_delete_action,
  [8716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_on_update_action_token1,
    STATE(188), 1,
      sym_on_update_action,
  [8726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_index_table_parameters,
  [8744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_on_delete_action_token1,
    STATE(187), 1,
      sym_on_delete_action,
  [8754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_tuple,
  [8764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_create_table_parameters,
  [8782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(283), 1,
      sym_parameter,
  [8800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      aux_sym_set_clause_token1,
    STATE(181), 1,
      sym_set_clause,
  [8810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_tuple,
  [8820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_index_table_parameters,
  [8830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_tuple,
  [8840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(817), 1,
      anon_sym_SQUOTE,
  [8850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SEMI,
    ACTIONS(821), 1,
      anon_sym_SQUOTE,
  [8860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(823), 1,
      anon_sym_SEMI,
  [8870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_parameters,
  [8880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_tuple,
  [8898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
    STATE(179), 1,
      sym_assigment_expression,
  [8908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
  [8931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym_create_function_statement_token2,
  [8938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym_identifier,
  [8945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_create_index_statement_token3,
  [8952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_in_expression_token2,
  [8959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_identifier,
  [8966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      aux_sym_create_function_statement_token2,
  [8973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
  [8980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_EQ,
  [8994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_identifier,
  [9001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [9008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_identifier,
  [9015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
  [9022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_identifier,
  [9029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      aux_sym_number_token1,
  [9036] = 2,
    ACTIONS(861), 1,
      aux_sym_string_token1,
    ACTIONS(863), 1,
      sym_comment,
  [9043] = 2,
    ACTIONS(863), 1,
      sym_comment,
    ACTIONS(865), 1,
      aux_sym_string_token2,
  [9050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym_identifier,
  [9057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      aux_sym_create_index_statement_token2,
  [9064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym_identifier,
  [9071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_identifier,
  [9078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_identifier,
  [9085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_function_body_token1,
  [9092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
  [9099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym_identifier,
  [9106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_identifier,
  [9113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      ts_builtin_sym_end,
  [9120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_identifier,
  [9127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_identifier,
  [9134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym_number_token1,
  [9141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
  [9148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_identifier,
  [9155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_SQUOTE,
  [9169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      aux_sym_create_index_statement_token3,
  [9176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_identifier,
  [9183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
  [9190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_SQUOTE,
  [9197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_DOLLAR_DOLLAR,
  [9204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_identifier,
  [9211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
  [9218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
  [9225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      aux_sym_create_function_statement_token2,
  [9232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_identifier,
  [9239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
  [9246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym_identifier,
  [9253] = 2,
    ACTIONS(863), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym_string_token2,
  [9260] = 2,
    ACTIONS(863), 1,
      sym_comment,
    ACTIONS(923), 1,
      aux_sym_string_token1,
  [9267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      aux_sym_in_expression_token2,
  [9274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 125,
  [SMALL_STATE(5)] = 172,
  [SMALL_STATE(6)] = 219,
  [SMALL_STATE(7)] = 272,
  [SMALL_STATE(8)] = 319,
  [SMALL_STATE(9)] = 368,
  [SMALL_STATE(10)] = 415,
  [SMALL_STATE(11)] = 462,
  [SMALL_STATE(12)] = 509,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 600,
  [SMALL_STATE(15)] = 645,
  [SMALL_STATE(16)] = 692,
  [SMALL_STATE(17)] = 737,
  [SMALL_STATE(18)] = 782,
  [SMALL_STATE(19)] = 827,
  [SMALL_STATE(20)] = 874,
  [SMALL_STATE(21)] = 919,
  [SMALL_STATE(22)] = 964,
  [SMALL_STATE(23)] = 1008,
  [SMALL_STATE(24)] = 1052,
  [SMALL_STATE(25)] = 1096,
  [SMALL_STATE(26)] = 1140,
  [SMALL_STATE(27)] = 1184,
  [SMALL_STATE(28)] = 1228,
  [SMALL_STATE(29)] = 1286,
  [SMALL_STATE(30)] = 1330,
  [SMALL_STATE(31)] = 1376,
  [SMALL_STATE(32)] = 1420,
  [SMALL_STATE(33)] = 1464,
  [SMALL_STATE(34)] = 1512,
  [SMALL_STATE(35)] = 1556,
  [SMALL_STATE(36)] = 1600,
  [SMALL_STATE(37)] = 1644,
  [SMALL_STATE(38)] = 1688,
  [SMALL_STATE(39)] = 1732,
  [SMALL_STATE(40)] = 1776,
  [SMALL_STATE(41)] = 1834,
  [SMALL_STATE(42)] = 1902,
  [SMALL_STATE(43)] = 1972,
  [SMALL_STATE(44)] = 2020,
  [SMALL_STATE(45)] = 2088,
  [SMALL_STATE(46)] = 2130,
  [SMALL_STATE(47)] = 2169,
  [SMALL_STATE(48)] = 2208,
  [SMALL_STATE(49)] = 2251,
  [SMALL_STATE(50)] = 2290,
  [SMALL_STATE(51)] = 2329,
  [SMALL_STATE(52)] = 2386,
  [SMALL_STATE(53)] = 2425,
  [SMALL_STATE(54)] = 2464,
  [SMALL_STATE(55)] = 2519,
  [SMALL_STATE(56)] = 2558,
  [SMALL_STATE(57)] = 2597,
  [SMALL_STATE(58)] = 2636,
  [SMALL_STATE(59)] = 2675,
  [SMALL_STATE(60)] = 2714,
  [SMALL_STATE(61)] = 2753,
  [SMALL_STATE(62)] = 2794,
  [SMALL_STATE(63)] = 2847,
  [SMALL_STATE(64)] = 2900,
  [SMALL_STATE(65)] = 2939,
  [SMALL_STATE(66)] = 2978,
  [SMALL_STATE(67)] = 3041,
  [SMALL_STATE(68)] = 3104,
  [SMALL_STATE(69)] = 3160,
  [SMALL_STATE(70)] = 3218,
  [SMALL_STATE(71)] = 3276,
  [SMALL_STATE(72)] = 3333,
  [SMALL_STATE(73)] = 3384,
  [SMALL_STATE(74)] = 3441,
  [SMALL_STATE(75)] = 3498,
  [SMALL_STATE(76)] = 3555,
  [SMALL_STATE(77)] = 3610,
  [SMALL_STATE(78)] = 3661,
  [SMALL_STATE(79)] = 3718,
  [SMALL_STATE(80)] = 3775,
  [SMALL_STATE(81)] = 3829,
  [SMALL_STATE(82)] = 3883,
  [SMALL_STATE(83)] = 3937,
  [SMALL_STATE(84)] = 3991,
  [SMALL_STATE(85)] = 4045,
  [SMALL_STATE(86)] = 4099,
  [SMALL_STATE(87)] = 4153,
  [SMALL_STATE(88)] = 4207,
  [SMALL_STATE(89)] = 4261,
  [SMALL_STATE(90)] = 4315,
  [SMALL_STATE(91)] = 4369,
  [SMALL_STATE(92)] = 4423,
  [SMALL_STATE(93)] = 4477,
  [SMALL_STATE(94)] = 4531,
  [SMALL_STATE(95)] = 4585,
  [SMALL_STATE(96)] = 4639,
  [SMALL_STATE(97)] = 4689,
  [SMALL_STATE(98)] = 4743,
  [SMALL_STATE(99)] = 4797,
  [SMALL_STATE(100)] = 4851,
  [SMALL_STATE(101)] = 4905,
  [SMALL_STATE(102)] = 4959,
  [SMALL_STATE(103)] = 5013,
  [SMALL_STATE(104)] = 5061,
  [SMALL_STATE(105)] = 5107,
  [SMALL_STATE(106)] = 5155,
  [SMALL_STATE(107)] = 5199,
  [SMALL_STATE(108)] = 5244,
  [SMALL_STATE(109)] = 5289,
  [SMALL_STATE(110)] = 5316,
  [SMALL_STATE(111)] = 5343,
  [SMALL_STATE(112)] = 5370,
  [SMALL_STATE(113)] = 5397,
  [SMALL_STATE(114)] = 5441,
  [SMALL_STATE(115)] = 5475,
  [SMALL_STATE(116)] = 5521,
  [SMALL_STATE(117)] = 5551,
  [SMALL_STATE(118)] = 5581,
  [SMALL_STATE(119)] = 5619,
  [SMALL_STATE(120)] = 5653,
  [SMALL_STATE(121)] = 5683,
  [SMALL_STATE(122)] = 5727,
  [SMALL_STATE(123)] = 5761,
  [SMALL_STATE(124)] = 5798,
  [SMALL_STATE(125)] = 5823,
  [SMALL_STATE(126)] = 5864,
  [SMALL_STATE(127)] = 5893,
  [SMALL_STATE(128)] = 5918,
  [SMALL_STATE(129)] = 5947,
  [SMALL_STATE(130)] = 5972,
  [SMALL_STATE(131)] = 6000,
  [SMALL_STATE(132)] = 6032,
  [SMALL_STATE(133)] = 6074,
  [SMALL_STATE(134)] = 6116,
  [SMALL_STATE(135)] = 6158,
  [SMALL_STATE(136)] = 6200,
  [SMALL_STATE(137)] = 6228,
  [SMALL_STATE(138)] = 6262,
  [SMALL_STATE(139)] = 6296,
  [SMALL_STATE(140)] = 6328,
  [SMALL_STATE(141)] = 6352,
  [SMALL_STATE(142)] = 6389,
  [SMALL_STATE(143)] = 6416,
  [SMALL_STATE(144)] = 6453,
  [SMALL_STATE(145)] = 6490,
  [SMALL_STATE(146)] = 6517,
  [SMALL_STATE(147)] = 6548,
  [SMALL_STATE(148)] = 6574,
  [SMALL_STATE(149)] = 6596,
  [SMALL_STATE(150)] = 6624,
  [SMALL_STATE(151)] = 6650,
  [SMALL_STATE(152)] = 6676,
  [SMALL_STATE(153)] = 6698,
  [SMALL_STATE(154)] = 6734,
  [SMALL_STATE(155)] = 6762,
  [SMALL_STATE(156)] = 6784,
  [SMALL_STATE(157)] = 6810,
  [SMALL_STATE(158)] = 6836,
  [SMALL_STATE(159)] = 6858,
  [SMALL_STATE(160)] = 6894,
  [SMALL_STATE(161)] = 6916,
  [SMALL_STATE(162)] = 6937,
  [SMALL_STATE(163)] = 6957,
  [SMALL_STATE(164)] = 6977,
  [SMALL_STATE(165)] = 6997,
  [SMALL_STATE(166)] = 7017,
  [SMALL_STATE(167)] = 7041,
  [SMALL_STATE(168)] = 7061,
  [SMALL_STATE(169)] = 7085,
  [SMALL_STATE(170)] = 7109,
  [SMALL_STATE(171)] = 7131,
  [SMALL_STATE(172)] = 7154,
  [SMALL_STATE(173)] = 7181,
  [SMALL_STATE(174)] = 7208,
  [SMALL_STATE(175)] = 7231,
  [SMALL_STATE(176)] = 7248,
  [SMALL_STATE(177)] = 7265,
  [SMALL_STATE(178)] = 7288,
  [SMALL_STATE(179)] = 7311,
  [SMALL_STATE(180)] = 7330,
  [SMALL_STATE(181)] = 7347,
  [SMALL_STATE(182)] = 7370,
  [SMALL_STATE(183)] = 7389,
  [SMALL_STATE(184)] = 7405,
  [SMALL_STATE(185)] = 7423,
  [SMALL_STATE(186)] = 7441,
  [SMALL_STATE(187)] = 7457,
  [SMALL_STATE(188)] = 7473,
  [SMALL_STATE(189)] = 7489,
  [SMALL_STATE(190)] = 7509,
  [SMALL_STATE(191)] = 7525,
  [SMALL_STATE(192)] = 7543,
  [SMALL_STATE(193)] = 7559,
  [SMALL_STATE(194)] = 7581,
  [SMALL_STATE(195)] = 7598,
  [SMALL_STATE(196)] = 7617,
  [SMALL_STATE(197)] = 7634,
  [SMALL_STATE(198)] = 7651,
  [SMALL_STATE(199)] = 7668,
  [SMALL_STATE(200)] = 7685,
  [SMALL_STATE(201)] = 7710,
  [SMALL_STATE(202)] = 7727,
  [SMALL_STATE(203)] = 7744,
  [SMALL_STATE(204)] = 7761,
  [SMALL_STATE(205)] = 7778,
  [SMALL_STATE(206)] = 7795,
  [SMALL_STATE(207)] = 7812,
  [SMALL_STATE(208)] = 7837,
  [SMALL_STATE(209)] = 7853,
  [SMALL_STATE(210)] = 7877,
  [SMALL_STATE(211)] = 7897,
  [SMALL_STATE(212)] = 7919,
  [SMALL_STATE(213)] = 7941,
  [SMALL_STATE(214)] = 7959,
  [SMALL_STATE(215)] = 7977,
  [SMALL_STATE(216)] = 7992,
  [SMALL_STATE(217)] = 8009,
  [SMALL_STATE(218)] = 8026,
  [SMALL_STATE(219)] = 8038,
  [SMALL_STATE(220)] = 8050,
  [SMALL_STATE(221)] = 8062,
  [SMALL_STATE(222)] = 8074,
  [SMALL_STATE(223)] = 8086,
  [SMALL_STATE(224)] = 8102,
  [SMALL_STATE(225)] = 8118,
  [SMALL_STATE(226)] = 8130,
  [SMALL_STATE(227)] = 8142,
  [SMALL_STATE(228)] = 8155,
  [SMALL_STATE(229)] = 8168,
  [SMALL_STATE(230)] = 8181,
  [SMALL_STATE(231)] = 8194,
  [SMALL_STATE(232)] = 8207,
  [SMALL_STATE(233)] = 8220,
  [SMALL_STATE(234)] = 8233,
  [SMALL_STATE(235)] = 8246,
  [SMALL_STATE(236)] = 8259,
  [SMALL_STATE(237)] = 8272,
  [SMALL_STATE(238)] = 8283,
  [SMALL_STATE(239)] = 8296,
  [SMALL_STATE(240)] = 8309,
  [SMALL_STATE(241)] = 8322,
  [SMALL_STATE(242)] = 8333,
  [SMALL_STATE(243)] = 8346,
  [SMALL_STATE(244)] = 8359,
  [SMALL_STATE(245)] = 8372,
  [SMALL_STATE(246)] = 8385,
  [SMALL_STATE(247)] = 8398,
  [SMALL_STATE(248)] = 8411,
  [SMALL_STATE(249)] = 8424,
  [SMALL_STATE(250)] = 8437,
  [SMALL_STATE(251)] = 8450,
  [SMALL_STATE(252)] = 8463,
  [SMALL_STATE(253)] = 8476,
  [SMALL_STATE(254)] = 8487,
  [SMALL_STATE(255)] = 8500,
  [SMALL_STATE(256)] = 8513,
  [SMALL_STATE(257)] = 8526,
  [SMALL_STATE(258)] = 8539,
  [SMALL_STATE(259)] = 8552,
  [SMALL_STATE(260)] = 8565,
  [SMALL_STATE(261)] = 8578,
  [SMALL_STATE(262)] = 8586,
  [SMALL_STATE(263)] = 8596,
  [SMALL_STATE(264)] = 8604,
  [SMALL_STATE(265)] = 8614,
  [SMALL_STATE(266)] = 8624,
  [SMALL_STATE(267)] = 8632,
  [SMALL_STATE(268)] = 8640,
  [SMALL_STATE(269)] = 8650,
  [SMALL_STATE(270)] = 8660,
  [SMALL_STATE(271)] = 8670,
  [SMALL_STATE(272)] = 8680,
  [SMALL_STATE(273)] = 8688,
  [SMALL_STATE(274)] = 8696,
  [SMALL_STATE(275)] = 8706,
  [SMALL_STATE(276)] = 8716,
  [SMALL_STATE(277)] = 8726,
  [SMALL_STATE(278)] = 8734,
  [SMALL_STATE(279)] = 8744,
  [SMALL_STATE(280)] = 8754,
  [SMALL_STATE(281)] = 8764,
  [SMALL_STATE(282)] = 8772,
  [SMALL_STATE(283)] = 8782,
  [SMALL_STATE(284)] = 8790,
  [SMALL_STATE(285)] = 8800,
  [SMALL_STATE(286)] = 8810,
  [SMALL_STATE(287)] = 8820,
  [SMALL_STATE(288)] = 8830,
  [SMALL_STATE(289)] = 8840,
  [SMALL_STATE(290)] = 8850,
  [SMALL_STATE(291)] = 8860,
  [SMALL_STATE(292)] = 8870,
  [SMALL_STATE(293)] = 8880,
  [SMALL_STATE(294)] = 8888,
  [SMALL_STATE(295)] = 8898,
  [SMALL_STATE(296)] = 8908,
  [SMALL_STATE(297)] = 8916,
  [SMALL_STATE(298)] = 8924,
  [SMALL_STATE(299)] = 8931,
  [SMALL_STATE(300)] = 8938,
  [SMALL_STATE(301)] = 8945,
  [SMALL_STATE(302)] = 8952,
  [SMALL_STATE(303)] = 8959,
  [SMALL_STATE(304)] = 8966,
  [SMALL_STATE(305)] = 8973,
  [SMALL_STATE(306)] = 8980,
  [SMALL_STATE(307)] = 8987,
  [SMALL_STATE(308)] = 8994,
  [SMALL_STATE(309)] = 9001,
  [SMALL_STATE(310)] = 9008,
  [SMALL_STATE(311)] = 9015,
  [SMALL_STATE(312)] = 9022,
  [SMALL_STATE(313)] = 9029,
  [SMALL_STATE(314)] = 9036,
  [SMALL_STATE(315)] = 9043,
  [SMALL_STATE(316)] = 9050,
  [SMALL_STATE(317)] = 9057,
  [SMALL_STATE(318)] = 9064,
  [SMALL_STATE(319)] = 9071,
  [SMALL_STATE(320)] = 9078,
  [SMALL_STATE(321)] = 9085,
  [SMALL_STATE(322)] = 9092,
  [SMALL_STATE(323)] = 9099,
  [SMALL_STATE(324)] = 9106,
  [SMALL_STATE(325)] = 9113,
  [SMALL_STATE(326)] = 9120,
  [SMALL_STATE(327)] = 9127,
  [SMALL_STATE(328)] = 9134,
  [SMALL_STATE(329)] = 9141,
  [SMALL_STATE(330)] = 9148,
  [SMALL_STATE(331)] = 9155,
  [SMALL_STATE(332)] = 9162,
  [SMALL_STATE(333)] = 9169,
  [SMALL_STATE(334)] = 9176,
  [SMALL_STATE(335)] = 9183,
  [SMALL_STATE(336)] = 9190,
  [SMALL_STATE(337)] = 9197,
  [SMALL_STATE(338)] = 9204,
  [SMALL_STATE(339)] = 9211,
  [SMALL_STATE(340)] = 9218,
  [SMALL_STATE(341)] = 9225,
  [SMALL_STATE(342)] = 9232,
  [SMALL_STATE(343)] = 9239,
  [SMALL_STATE(344)] = 9246,
  [SMALL_STATE(345)] = 9253,
  [SMALL_STATE(346)] = 9260,
  [SMALL_STATE(347)] = 9267,
  [SMALL_STATE(348)] = 9274,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 17),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliasable_expression, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assigment_expression, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(324),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(209),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(98),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(180),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(192),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(270),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(330),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(12),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(152),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(303),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(289),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(69),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(348),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(344),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(326),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliased_expression, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(98),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(270),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(12),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(95),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause_body, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(90),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause_body, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by_clause, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_clause_body, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(295),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_clause_body, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 16),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 16),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 19),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 19),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 16),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 16),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_clause, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 16),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 16),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(213),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(284),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(316),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(71),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(172),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 18),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [885] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 15),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
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
