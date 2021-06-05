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
#define STATE_COUNT 300
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 5
#define TOKEN_COUNT 67
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
  aux_sym_where_clause_token1 = 29,
  aux_sym_select_clause_token1 = 30,
  aux_sym_from_clause_token1 = 31,
  aux_sym_in_expression_token1 = 32,
  aux_sym_in_expression_token2 = 33,
  aux_sym_references_constraint_token1 = 34,
  aux_sym_on_update_action_token1 = 35,
  aux_sym_on_delete_action_token1 = 36,
  aux_sym__constraint_action_token1 = 37,
  aux_sym__constraint_action_token2 = 38,
  aux_sym__constraint_action_token3 = 39,
  anon_sym_LT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_LT_GT = 42,
  anon_sym_GT = 43,
  anon_sym_GT_EQ = 44,
  aux_sym_is_expression_token1 = 45,
  aux_sym_distinct_from_token1 = 46,
  aux_sym_boolean_expression_token1 = 47,
  aux_sym_boolean_expression_token2 = 48,
  aux_sym_NULL_token1 = 49,
  aux_sym_TRUE_token1 = 50,
  aux_sym_FALSE_token1 = 51,
  sym_number = 52,
  sym_identifier = 53,
  anon_sym_SQUOTE = 54,
  aux_sym_string_token1 = 55,
  anon_sym_DOLLAR_DOLLAR = 56,
  aux_sym_string_token2 = 57,
  anon_sym_DASH_GT_GT = 58,
  aux_sym_ordered_expression_token1 = 59,
  aux_sym_ordered_expression_token2 = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  anon_sym_COLON_COLON = 63,
  sym_comment = 64,
  anon_sym_TILDE = 65,
  anon_sym_PLUS = 66,
  sym_source_file = 67,
  sym__statement = 68,
  sym_create_function_statement = 69,
  sym__function_optimizer_hint = 70,
  sym__function_language = 71,
  sym__create_function_return_type = 72,
  sym_setof = 73,
  sym_constrained_type = 74,
  sym_create_function_parameter = 75,
  sym_create_function_parameters = 76,
  sym__function_body = 77,
  sym_create_domain_statement = 78,
  sym_create_type_statement = 79,
  sym_create_index_statement = 80,
  sym_create_table_column_parameter = 81,
  sym_named_constraint = 82,
  sym_column_default = 83,
  sym_create_table_parameters = 84,
  sym__table_constraint = 85,
  sym_table_constraint_check = 86,
  sym_table_constraint_foreign_key = 87,
  sym_table_constraint_unique = 88,
  sym_table_constraint_primary_key = 89,
  sym_primary_key_constraint = 90,
  sym_create_table_statement = 91,
  sym_using_clause = 92,
  sym_index_table_parameters = 93,
  sym_select_statement = 94,
  sym_group_by_clause = 95,
  sym_where_clause = 96,
  sym__aliased_expression = 97,
  sym__aliasable_expression = 98,
  sym_select_clause_body = 99,
  sym_select_clause = 100,
  sym_from_clause = 101,
  sym_in_expression = 102,
  sym_tuple = 103,
  sym_references_constraint = 104,
  sym_on_update_action = 105,
  sym_on_delete_action = 106,
  sym__constraint_action = 107,
  sym_unique_constraint = 108,
  sym_null_constraint = 109,
  sym_check_constraint = 110,
  sym_parameter = 111,
  sym_parameters = 112,
  sym_function_call = 113,
  sym_comparison_operator = 114,
  sym__parenthesized_expression = 115,
  sym_is_expression = 116,
  sym_distinct_from = 117,
  sym_boolean_expression = 118,
  sym_NULL = 119,
  sym_TRUE = 120,
  sym_FALSE = 121,
  sym_string = 122,
  sym_field_access = 123,
  sym_ordered_expression = 124,
  sym__type_alias = 125,
  sym_array_type = 126,
  sym__type = 127,
  sym_type_cast = 128,
  sym_binary_expression = 129,
  sym__expression = 130,
  aux_sym_source_file_repeat1 = 131,
  aux_sym_create_function_statement_repeat1 = 132,
  aux_sym_create_function_parameters_repeat1 = 133,
  aux_sym_create_domain_statement_repeat1 = 134,
  aux_sym_create_table_column_parameter_repeat1 = 135,
  aux_sym_create_table_parameters_repeat1 = 136,
  aux_sym_table_constraint_foreign_key_repeat1 = 137,
  aux_sym_index_table_parameters_repeat1 = 138,
  aux_sym_group_by_clause_repeat1 = 139,
  aux_sym_select_clause_body_repeat1 = 140,
  aux_sym_parameters_repeat1 = 141,
  anon_alias_sym_NOT = 142,
  alias_sym_default = 143,
  alias_sym_function_body = 144,
  alias_sym_language = 145,
  alias_sym_type = 146,
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
  [sym_group_by_clause] = "group_by_clause",
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
  [aux_sym_group_by_clause_repeat1] = "group_by_clause_repeat1",
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
  [sym_group_by_clause] = sym_group_by_clause,
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
  [aux_sym_group_by_clause_repeat1] = aux_sym_group_by_clause_repeat1,
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
  [sym_group_by_clause] = {
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
  [aux_sym_group_by_clause_repeat1] = {
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
      if (eof) ADVANCE(259);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '<') ADVANCE(307);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') SKIP(249)
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(51);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(189);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
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
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(29)
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
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(398);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(247);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(403);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(307);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
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
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(369);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(361);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(413);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(408);
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
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
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
      if (lookahead == 'T') ADVANCE(281);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(267);
      END_STATE();
    case 118:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 119:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 120:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 121:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 122:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 123:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 124:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 125:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 126:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 127:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 139:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(283);
      END_STATE();
    case 140:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 141:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 159:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 161:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 162:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 163:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 164:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 165:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 194:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 195:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(82);
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
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
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
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 211:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 212:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      END_STATE();
    case 213:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      END_STATE();
    case 214:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      END_STATE();
    case 215:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
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
          lookahead == 't') ADVANCE(62);
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
          lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 235:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 236:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 237:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 238:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 239:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 240:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 241:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 242:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(279);
      END_STATE();
    case 243:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 244:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 245:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 246:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 247:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(405);
      END_STATE();
    case 248:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 249:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(248)
      END_STATE();
    case 250:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(257)
      END_STATE();
    case 251:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(257)
      if (lookahead == '\r') SKIP(250)
      END_STATE();
    case 252:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(256)
      END_STATE();
    case 253:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(256)
      if (lookahead == '\r') SKIP(252)
      END_STATE();
    case 254:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(258)
      END_STATE();
    case 255:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(258)
      if (lookahead == '\r') SKIP(254)
      END_STATE();
    case 256:
      if (eof) ADVANCE(259);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '\\') SKIP(253)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(372);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(256)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 257:
      if (eof) ADVANCE(259);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '<') ADVANCE(307);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') SKIP(251)
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(189);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(257)
      END_STATE();
    case 258:
      if (eof) ADVANCE(259);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == '\\') SKIP(255)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(258)
      END_STATE();
    case 259:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__function_body_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead == '>') ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(395);
      if (lookahead == '\r') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == '/') ADVANCE(397);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead == '/') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\r') ADVANCE(400);
      if (lookahead == '$') ADVANCE(247);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '$') ADVANCE(247);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(247);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(247);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(403);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(247);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(247);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '/') ADVANCE(405);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 257},
  [3] = {.lex_state = 257},
  [4] = {.lex_state = 256},
  [5] = {.lex_state = 257},
  [6] = {.lex_state = 257},
  [7] = {.lex_state = 257},
  [8] = {.lex_state = 257},
  [9] = {.lex_state = 257},
  [10] = {.lex_state = 257},
  [11] = {.lex_state = 257},
  [12] = {.lex_state = 257},
  [13] = {.lex_state = 257},
  [14] = {.lex_state = 257},
  [15] = {.lex_state = 257},
  [16] = {.lex_state = 257},
  [17] = {.lex_state = 257},
  [18] = {.lex_state = 257},
  [19] = {.lex_state = 257},
  [20] = {.lex_state = 257},
  [21] = {.lex_state = 257},
  [22] = {.lex_state = 257},
  [23] = {.lex_state = 257},
  [24] = {.lex_state = 257},
  [25] = {.lex_state = 257},
  [26] = {.lex_state = 257},
  [27] = {.lex_state = 257},
  [28] = {.lex_state = 257},
  [29] = {.lex_state = 257},
  [30] = {.lex_state = 257},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 257},
  [36] = {.lex_state = 257},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 257},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 258},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 258},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 257},
  [101] = {.lex_state = 257},
  [102] = {.lex_state = 257},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 257},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 257},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 257},
  [110] = {.lex_state = 257},
  [111] = {.lex_state = 257},
  [112] = {.lex_state = 258},
  [113] = {.lex_state = 258},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 257},
  [116] = {.lex_state = 257},
  [117] = {.lex_state = 257},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 257},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 257},
  [135] = {.lex_state = 257},
  [136] = {.lex_state = 35},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 28},
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
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 23},
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
  [177] = {.lex_state = 36},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 23},
  [180] = {.lex_state = 23},
  [181] = {.lex_state = 258},
  [182] = {.lex_state = 23},
  [183] = {.lex_state = 258},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 23},
  [187] = {.lex_state = 23},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 23},
  [190] = {.lex_state = 23},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 258},
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
  [232] = {.lex_state = 257},
  [233] = {.lex_state = 257},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 23},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 257},
  [241] = {.lex_state = 257},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 257},
  [244] = {.lex_state = 257},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 23},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 258},
  [258] = {.lex_state = 257},
  [259] = {.lex_state = 23},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 23},
  [264] = {.lex_state = 23},
  [265] = {.lex_state = 23},
  [266] = {.lex_state = 23},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 23},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 26},
  [275] = {.lex_state = 395},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 23},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 23},
  [284] = {.lex_state = 23},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 23},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 23},
  [292] = {.lex_state = 23},
  [293] = {.lex_state = 23},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 395},
  [297] = {.lex_state = 26},
  [298] = {.lex_state = 257},
  [299] = {.lex_state = 23},
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
    [sym_source_file] = STATE(282),
    [sym__statement] = STATE(105),
    [sym_create_function_statement] = STATE(164),
    [sym_create_domain_statement] = STATE(164),
    [sym_create_type_statement] = STATE(164),
    [sym_create_index_statement] = STATE(164),
    [sym_create_table_statement] = STATE(164),
    [sym_select_statement] = STATE(164),
    [sym_select_clause] = STATE(118),
    [aux_sym_source_file_repeat1] = STATE(105),
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
    ACTIONS(21), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [47] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [98] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(137), 1,
      sym_select_clause_body,
    STATE(125), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(37), 4,
      aux_sym_create_index_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
    STATE(23), 10,
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
  [168] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [211] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [299] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 32,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [600] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(91), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
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
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [656] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(111), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 4,
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
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(115), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 30,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [840] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [882] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 31,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1008] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1050] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1092] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 29,
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
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1138] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1180] = 3,
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
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1222] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(155), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(153), 16,
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
  [1276] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(161), 1,
      aux_sym__function_body_token1,
    ACTIONS(163), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(159), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [1328] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(130), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [1380] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(132), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [1432] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [1483] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [1534] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      aux_sym_create_index_statement_token1,
    STATE(151), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [1585] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(177), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [1632] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(80), 1,
      sym__expression,
    STATE(234), 1,
      sym_ordered_expression,
    STATE(72), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(88), 10,
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
  [1683] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(68), 1,
      sym__expression,
    STATE(196), 1,
      sym_ordered_expression,
    STATE(72), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(88), 10,
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
  [1734] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(29), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [1782] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(96), 1,
      sym__expression,
    STATE(72), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(88), 10,
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
  [1830] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(110), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [1878] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(107), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [1926] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(85), 1,
      sym__expression,
    STATE(72), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(88), 10,
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
  [1974] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(36), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2022] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(197), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_select_clause_token1,
  [2068] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(116), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2116] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(117), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2164] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(45), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2212] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(100), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2260] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(15), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2308] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(35), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2356] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(104), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2404] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(17), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2452] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(16), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2500] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(26), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2548] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(95), 1,
      sym__expression,
    STATE(72), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(88), 10,
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
  [2596] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(109), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2644] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(92), 1,
      sym__expression,
    STATE(72), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(88), 10,
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
  [2692] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      aux_sym_NULL_token1,
    ACTIONS(183), 1,
      aux_sym_TRUE_token1,
    ACTIONS(185), 1,
      aux_sym_FALSE_token1,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(79), 1,
      sym__expression,
    STATE(72), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(88), 10,
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
  [2740] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_NULL_token1,
    ACTIONS(41), 1,
      aux_sym_TRUE_token1,
    ACTIONS(43), 1,
      aux_sym_FALSE_token1,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(22), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(23), 10,
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
  [2788] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(203), 1,
      aux_sym_column_default_token1,
    ACTIONS(205), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(207), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(209), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(211), 1,
      aux_sym_in_expression_token1,
    ACTIONS(213), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    STATE(66), 1,
      sym_NULL,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(63), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2836] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [2870] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(203), 1,
      aux_sym_column_default_token1,
    ACTIONS(205), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(207), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(209), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(211), 1,
      aux_sym_in_expression_token1,
    ACTIONS(213), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    STATE(66), 1,
      sym_NULL,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(64), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2915] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(230), 1,
      aux_sym_column_default_token1,
    ACTIONS(233), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(236), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(239), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(242), 1,
      aux_sym_in_expression_token1,
    ACTIONS(245), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(248), 1,
      aux_sym_NULL_token1,
    STATE(66), 1,
      sym_NULL,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(64), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 16,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [2986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(251), 17,
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
  [3012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 16,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3038] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      aux_sym_in_expression_token1,
    ACTIONS(263), 1,
      aux_sym_in_expression_token2,
    ACTIONS(267), 1,
      aux_sym_is_expression_token1,
    ACTIONS(269), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(271), 1,
      aux_sym_boolean_expression_token2,
    STATE(214), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(265), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(273), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(275), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(255), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(69), 17,
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
  [3110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 16,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 16,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(53), 17,
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
  [3216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 16,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 16,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3296] = 3,
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
  [3322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 16,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 14,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3375] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_in_expression_token1,
    ACTIONS(263), 1,
      aux_sym_in_expression_token2,
    ACTIONS(267), 1,
      aux_sym_is_expression_token1,
    ACTIONS(269), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(271), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(265), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(273), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(275), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(255), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3441] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym__function_language_token1,
    ACTIONS(291), 1,
      aux_sym__function_body_token1,
    ACTIONS(293), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(287), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(89), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [3474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3524] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_in_expression_token1,
    ACTIONS(263), 1,
      aux_sym_in_expression_token2,
    ACTIONS(267), 1,
      aux_sym_is_expression_token1,
    ACTIONS(269), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(271), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(265), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(109), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3636] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__function_language_token1,
    ACTIONS(303), 1,
      aux_sym__function_body_token1,
    ACTIONS(306), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(297), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(89), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3719] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_in_expression_token1,
    ACTIONS(263), 1,
      aux_sym_in_expression_token2,
    ACTIONS(267), 1,
      aux_sym_is_expression_token1,
    ACTIONS(269), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(271), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(265), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(91), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(271), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 13,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3860] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym__function_language_token1,
    ACTIONS(291), 1,
      aux_sym__function_body_token1,
    ACTIONS(310), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(287), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(82), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [3893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 15,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
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
  [3918] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(317), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(320), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(323), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(326), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(329), 1,
      aux_sym_select_clause_token1,
    STATE(118), 1,
      sym_select_clause,
    STATE(99), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(164), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [3958] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4000] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4042] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4084] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(211), 1,
      aux_sym_in_expression_token1,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    ACTIONS(340), 1,
      aux_sym_create_index_statement_token1,
    STATE(66), 1,
      sym_NULL,
    STATE(114), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(338), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4120] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4162] = 11,
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
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_select_clause,
    STATE(99), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(164), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [4202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(346), 15,
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
  [4226] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4263] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(356), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(359), 1,
      aux_sym_in_expression_token1,
    ACTIONS(362), 1,
      aux_sym_NULL_token1,
    STATE(66), 1,
      sym_NULL,
    STATE(108), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(352), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4296] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4333] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4370] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(375), 1,
      aux_sym_on_delete_action_token1,
    STATE(232), 1,
      sym_on_update_action,
    STATE(233), 1,
      sym_on_delete_action,
    ACTIONS(371), 10,
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
  [4401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(381), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 12,
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
  [4428] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(385), 12,
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
  [4455] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(211), 1,
      aux_sym_in_expression_token1,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    ACTIONS(391), 1,
      aux_sym_create_index_statement_token1,
    STATE(66), 1,
      sym_NULL,
    STATE(108), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(375), 1,
      aux_sym_on_delete_action_token1,
    STATE(240), 1,
      sym_on_update_action,
    STATE(241), 1,
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
      aux_sym_NULL_token1,
  [4516] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4552] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_in_expression_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token2,
    ACTIONS(103), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(107), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4588] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(403), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(405), 1,
      aux_sym_where_clause_token1,
    ACTIONS(407), 1,
      aux_sym_from_clause_token1,
    STATE(127), 1,
      sym_from_clause,
    STATE(142), 1,
      sym_where_clause,
    STATE(167), 1,
      sym_group_by_clause,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4622] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(375), 1,
      aux_sym_on_delete_action_token1,
    STATE(243), 1,
      sym_on_update_action,
    STATE(244), 1,
      sym_on_delete_action,
    ACTIONS(409), 10,
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
  [4650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(411), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [4675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(377), 12,
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
  [4696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(418), 12,
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
  [4717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(422), 12,
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
  [4738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(426), 12,
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
  [4759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      aux_sym_create_index_statement_token1,
    STATE(126), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(430), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [4784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(436), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [4809] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(405), 1,
      aux_sym_where_clause_token1,
    ACTIONS(442), 1,
      aux_sym_create_index_statement_token1,
    STATE(144), 1,
      sym_where_clause,
    STATE(174), 1,
      sym_group_by_clause,
    ACTIONS(440), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [4837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(444), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [4857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 10,
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
  [4879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(411), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [4899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      aux_sym_create_index_statement_token1,
    STATE(120), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(450), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [4923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      aux_sym_create_index_statement_token1,
    STATE(131), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(454), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [4947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 10,
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
  [4966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 11,
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
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 11,
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
  [5000] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(464), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(466), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(468), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(256), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [5027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(472), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
  [5046] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(464), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(466), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(468), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(218), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [5073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 11,
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
  [5090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_where_clause_token1,
    ACTIONS(483), 1,
      aux_sym_create_index_statement_token1,
    STATE(169), 1,
      sym_where_clause,
    ACTIONS(481), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(442), 1,
      aux_sym_create_index_statement_token1,
    STATE(174), 1,
      sym_group_by_clause,
    ACTIONS(440), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(219), 1,
      sym_constrained_type,
    STATE(183), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(69), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [5179] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(489), 1,
      aux_sym_create_index_statement_token1,
    STATE(173), 1,
      sym_group_by_clause,
    ACTIONS(487), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_where_clause_token1,
    ACTIONS(493), 1,
      aux_sym_create_index_statement_token1,
    STATE(171), 1,
      sym_where_clause,
    ACTIONS(491), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5223] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [5239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 10,
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
  [5255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 10,
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
  [5271] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_where_clause_token1,
    ACTIONS(501), 1,
      aux_sym_create_index_statement_token1,
    STATE(168), 1,
      sym_where_clause,
    ACTIONS(499), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 10,
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
  [5309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      aux_sym_create_index_statement_token1,
    STATE(140), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(505), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 10,
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
  [5347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 10,
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
  [5363] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_where_clause_token1,
    ACTIONS(515), 1,
      aux_sym_create_index_statement_token1,
    STATE(163), 1,
      sym_where_clause,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5385] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_in_expression_token1,
    ACTIONS(519), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(521), 1,
      aux_sym_NULL_token1,
    ACTIONS(523), 1,
      aux_sym_TRUE_token1,
    ACTIONS(525), 1,
      aux_sym_FALSE_token1,
    STATE(93), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [5410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      aux_sym__function_body_token1,
    ACTIONS(531), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(527), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(533), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [5446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(537), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
  [5463] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    ACTIONS(541), 1,
      aux_sym_in_expression_token1,
    ACTIONS(543), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(545), 1,
      aux_sym_TRUE_token1,
    ACTIONS(547), 1,
      aux_sym_FALSE_token1,
    STATE(28), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [5488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(549), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5504] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(553), 1,
      sym_identifier,
    STATE(147), 1,
      sym_type_cast,
    STATE(133), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [5528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(555), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(481), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    ACTIONS(563), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(559), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(565), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(569), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(440), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(573), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(577), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(521), 1,
      aux_sym_NULL_token1,
    ACTIONS(523), 1,
      aux_sym_TRUE_token1,
    ACTIONS(525), 1,
      aux_sym_FALSE_token1,
    STATE(87), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [5680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(499), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(581), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(585), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(487), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    ACTIONS(543), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(545), 1,
      aux_sym_TRUE_token1,
    ACTIONS(547), 1,
      aux_sym_FALSE_token1,
    STATE(25), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [5766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(589), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(593), 1,
      aux_sym_setof_token1,
    STATE(97), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(113), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(595), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_clause_token1,
  [5817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(210), 1,
      sym_constrained_type,
    STATE(212), 1,
      sym_create_function_parameter,
    STATE(181), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(210), 1,
      sym_constrained_type,
    STATE(237), 1,
      sym_create_function_parameter,
    STATE(181), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(601), 1,
      anon_sym_EQ,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_identifier,
    STATE(121), 1,
      sym_constrained_type,
    STATE(112), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(607), 1,
      anon_sym_EQ,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(103), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(134), 1,
      sym__constraint_action,
    ACTIONS(613), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [5926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(61), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(209), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(135), 1,
      sym__constraint_action,
    ACTIONS(615), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [5962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_identifier,
    STATE(76), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(12), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5986] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      aux_sym_using_clause_token1,
    STATE(154), 1,
      sym_index_table_parameters,
    STATE(226), 1,
      sym_using_clause,
  [6002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      aux_sym_using_clause_token1,
    STATE(145), 1,
      sym_index_table_parameters,
    STATE(231), 1,
      sym_using_clause,
  [6018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_index_table_parameters_repeat1,
  [6031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_parameters_repeat1,
  [6057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_index_table_parameters_repeat1,
  [6070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_create_table_parameters_repeat1,
  [6083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_group_by_clause_repeat1,
  [6096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(641), 1,
      aux_sym_create_index_statement_token2,
    STATE(257), 1,
      sym_unique_constraint,
  [6109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_group_by_clause_repeat1,
  [6122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(94), 1,
      sym_string,
  [6135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(27), 1,
      sym_string,
  [6226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(657), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_EQ,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_parameters_repeat1,
  [6261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_create_function_parameters_repeat1,
  [6274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_create_table_parameters_repeat1,
  [6287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      aux_sym_index_table_parameters_repeat1,
  [6300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(124), 1,
      sym_string,
  [6313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_create_function_parameters_repeat1,
  [6326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_create_table_parameters_repeat1,
  [6352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_EQ,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_group_by_clause_repeat1,
  [6389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_create_function_parameters_repeat1,
  [6402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_group_by_clause_repeat1,
  [6415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_parameters_repeat1,
  [6428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_references_constraint_token1,
    STATE(238), 1,
      sym_references_constraint,
  [6438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_index_table_parameters,
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_index_table_parameters,
  [6490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym_on_delete_action_token1,
    STATE(152), 1,
      sym_on_delete_action,
  [6500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_on_update_action_token1,
    STATE(152), 1,
      sym_on_update_action,
  [6510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_tuple,
  [6528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_identifier,
    STATE(228), 1,
      sym_parameter,
  [6538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_tuple,
  [6564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym_on_delete_action_token1,
    STATE(150), 1,
      sym_on_delete_action,
  [6574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_on_update_action_token1,
    STATE(150), 1,
      sym_on_update_action,
  [6584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_tuple,
  [6594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym_on_delete_action_token1,
    STATE(148), 1,
      sym_on_delete_action,
  [6604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_on_update_action_token1,
    STATE(148), 1,
      sym_on_update_action,
  [6614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_references_constraint_token1,
    STATE(227), 1,
      sym_references_constraint,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_create_function_parameters,
  [6642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_create_table_parameters,
  [6652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_identifier,
    STATE(211), 1,
      sym_parameter,
  [6678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_parameters,
  [6688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_tuple,
  [6706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    STATE(77), 1,
      sym_NULL,
  [6716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_create_index_statement_token2,
  [6731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      aux_sym_in_expression_token2,
  [6738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_identifier,
  [6745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
  [6752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SQUOTE,
  [6759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_identifier,
  [6766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_identifier,
  [6773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_identifier,
  [6780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_identifier,
  [6787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_identifier,
  [6794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_create_index_statement_token3,
  [6801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
  [6808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_identifier,
  [6815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      aux_sym__function_body_token1,
  [6822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_identifier,
  [6829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_identifier,
  [6836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym_create_index_statement_token3,
  [6843] = 2,
    ACTIONS(756), 1,
      aux_sym_string_token2,
    ACTIONS(758), 1,
      sym_comment,
  [6850] = 2,
    ACTIONS(758), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_string_token1,
  [6857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_LPAREN,
  [6864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_DOLLAR_DOLLAR,
  [6871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_identifier,
  [6878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_create_function_statement_token2,
  [6885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
  [6892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
  [6899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
  [6906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_identifier,
  [6913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_identifier,
  [6920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_SQUOTE,
  [6927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_DOLLAR_DOLLAR,
  [6934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      aux_sym_create_function_statement_token2,
  [6941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_identifier,
  [6948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      aux_sym_create_function_statement_token2,
  [6955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
  [6962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_identifier,
  [6969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_identifier,
  [6976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
  [6983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
  [6990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_identifier,
  [6997] = 2,
    ACTIONS(758), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_string_token1,
  [7004] = 2,
    ACTIONS(758), 1,
      sym_comment,
    ACTIONS(800), 1,
      aux_sym_string_token2,
  [7011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      aux_sym_in_expression_token2,
  [7018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 211,
  [SMALL_STATE(7)] = 254,
  [SMALL_STATE(8)] = 299,
  [SMALL_STATE(9)] = 342,
  [SMALL_STATE(10)] = 385,
  [SMALL_STATE(11)] = 428,
  [SMALL_STATE(12)] = 471,
  [SMALL_STATE(13)] = 516,
  [SMALL_STATE(14)] = 558,
  [SMALL_STATE(15)] = 600,
  [SMALL_STATE(16)] = 656,
  [SMALL_STATE(17)] = 712,
  [SMALL_STATE(18)] = 756,
  [SMALL_STATE(19)] = 798,
  [SMALL_STATE(20)] = 840,
  [SMALL_STATE(21)] = 882,
  [SMALL_STATE(22)] = 924,
  [SMALL_STATE(23)] = 966,
  [SMALL_STATE(24)] = 1008,
  [SMALL_STATE(25)] = 1050,
  [SMALL_STATE(26)] = 1092,
  [SMALL_STATE(27)] = 1138,
  [SMALL_STATE(28)] = 1180,
  [SMALL_STATE(29)] = 1222,
  [SMALL_STATE(30)] = 1276,
  [SMALL_STATE(31)] = 1328,
  [SMALL_STATE(32)] = 1380,
  [SMALL_STATE(33)] = 1432,
  [SMALL_STATE(34)] = 1483,
  [SMALL_STATE(35)] = 1534,
  [SMALL_STATE(36)] = 1585,
  [SMALL_STATE(37)] = 1632,
  [SMALL_STATE(38)] = 1683,
  [SMALL_STATE(39)] = 1734,
  [SMALL_STATE(40)] = 1782,
  [SMALL_STATE(41)] = 1830,
  [SMALL_STATE(42)] = 1878,
  [SMALL_STATE(43)] = 1926,
  [SMALL_STATE(44)] = 1974,
  [SMALL_STATE(45)] = 2022,
  [SMALL_STATE(46)] = 2068,
  [SMALL_STATE(47)] = 2116,
  [SMALL_STATE(48)] = 2164,
  [SMALL_STATE(49)] = 2212,
  [SMALL_STATE(50)] = 2260,
  [SMALL_STATE(51)] = 2308,
  [SMALL_STATE(52)] = 2356,
  [SMALL_STATE(53)] = 2404,
  [SMALL_STATE(54)] = 2452,
  [SMALL_STATE(55)] = 2500,
  [SMALL_STATE(56)] = 2548,
  [SMALL_STATE(57)] = 2596,
  [SMALL_STATE(58)] = 2644,
  [SMALL_STATE(59)] = 2692,
  [SMALL_STATE(60)] = 2740,
  [SMALL_STATE(61)] = 2788,
  [SMALL_STATE(62)] = 2836,
  [SMALL_STATE(63)] = 2870,
  [SMALL_STATE(64)] = 2915,
  [SMALL_STATE(65)] = 2960,
  [SMALL_STATE(66)] = 2986,
  [SMALL_STATE(67)] = 3012,
  [SMALL_STATE(68)] = 3038,
  [SMALL_STATE(69)] = 3084,
  [SMALL_STATE(70)] = 3110,
  [SMALL_STATE(71)] = 3136,
  [SMALL_STATE(72)] = 3162,
  [SMALL_STATE(73)] = 3190,
  [SMALL_STATE(74)] = 3216,
  [SMALL_STATE(75)] = 3242,
  [SMALL_STATE(76)] = 3268,
  [SMALL_STATE(77)] = 3296,
  [SMALL_STATE(78)] = 3322,
  [SMALL_STATE(79)] = 3348,
  [SMALL_STATE(80)] = 3375,
  [SMALL_STATE(81)] = 3416,
  [SMALL_STATE(82)] = 3441,
  [SMALL_STATE(83)] = 3474,
  [SMALL_STATE(84)] = 3499,
  [SMALL_STATE(85)] = 3524,
  [SMALL_STATE(86)] = 3561,
  [SMALL_STATE(87)] = 3586,
  [SMALL_STATE(88)] = 3611,
  [SMALL_STATE(89)] = 3636,
  [SMALL_STATE(90)] = 3669,
  [SMALL_STATE(91)] = 3694,
  [SMALL_STATE(92)] = 3719,
  [SMALL_STATE(93)] = 3756,
  [SMALL_STATE(94)] = 3781,
  [SMALL_STATE(95)] = 3806,
  [SMALL_STATE(96)] = 3831,
  [SMALL_STATE(97)] = 3860,
  [SMALL_STATE(98)] = 3893,
  [SMALL_STATE(99)] = 3918,
  [SMALL_STATE(100)] = 3958,
  [SMALL_STATE(101)] = 4000,
  [SMALL_STATE(102)] = 4042,
  [SMALL_STATE(103)] = 4084,
  [SMALL_STATE(104)] = 4120,
  [SMALL_STATE(105)] = 4162,
  [SMALL_STATE(106)] = 4202,
  [SMALL_STATE(107)] = 4226,
  [SMALL_STATE(108)] = 4263,
  [SMALL_STATE(109)] = 4296,
  [SMALL_STATE(110)] = 4333,
  [SMALL_STATE(111)] = 4370,
  [SMALL_STATE(112)] = 4401,
  [SMALL_STATE(113)] = 4428,
  [SMALL_STATE(114)] = 4455,
  [SMALL_STATE(115)] = 4488,
  [SMALL_STATE(116)] = 4516,
  [SMALL_STATE(117)] = 4552,
  [SMALL_STATE(118)] = 4588,
  [SMALL_STATE(119)] = 4622,
  [SMALL_STATE(120)] = 4650,
  [SMALL_STATE(121)] = 4675,
  [SMALL_STATE(122)] = 4696,
  [SMALL_STATE(123)] = 4717,
  [SMALL_STATE(124)] = 4738,
  [SMALL_STATE(125)] = 4759,
  [SMALL_STATE(126)] = 4784,
  [SMALL_STATE(127)] = 4809,
  [SMALL_STATE(128)] = 4837,
  [SMALL_STATE(129)] = 4857,
  [SMALL_STATE(130)] = 4879,
  [SMALL_STATE(131)] = 4899,
  [SMALL_STATE(132)] = 4923,
  [SMALL_STATE(133)] = 4947,
  [SMALL_STATE(134)] = 4966,
  [SMALL_STATE(135)] = 4983,
  [SMALL_STATE(136)] = 5000,
  [SMALL_STATE(137)] = 5027,
  [SMALL_STATE(138)] = 5046,
  [SMALL_STATE(139)] = 5073,
  [SMALL_STATE(140)] = 5090,
  [SMALL_STATE(141)] = 5113,
  [SMALL_STATE(142)] = 5135,
  [SMALL_STATE(143)] = 5157,
  [SMALL_STATE(144)] = 5179,
  [SMALL_STATE(145)] = 5201,
  [SMALL_STATE(146)] = 5223,
  [SMALL_STATE(147)] = 5239,
  [SMALL_STATE(148)] = 5255,
  [SMALL_STATE(149)] = 5271,
  [SMALL_STATE(150)] = 5293,
  [SMALL_STATE(151)] = 5309,
  [SMALL_STATE(152)] = 5331,
  [SMALL_STATE(153)] = 5347,
  [SMALL_STATE(154)] = 5363,
  [SMALL_STATE(155)] = 5385,
  [SMALL_STATE(156)] = 5410,
  [SMALL_STATE(157)] = 5429,
  [SMALL_STATE(158)] = 5446,
  [SMALL_STATE(159)] = 5463,
  [SMALL_STATE(160)] = 5488,
  [SMALL_STATE(161)] = 5504,
  [SMALL_STATE(162)] = 5528,
  [SMALL_STATE(163)] = 5544,
  [SMALL_STATE(164)] = 5560,
  [SMALL_STATE(165)] = 5578,
  [SMALL_STATE(166)] = 5594,
  [SMALL_STATE(167)] = 5610,
  [SMALL_STATE(168)] = 5626,
  [SMALL_STATE(169)] = 5642,
  [SMALL_STATE(170)] = 5658,
  [SMALL_STATE(171)] = 5680,
  [SMALL_STATE(172)] = 5696,
  [SMALL_STATE(173)] = 5712,
  [SMALL_STATE(174)] = 5728,
  [SMALL_STATE(175)] = 5744,
  [SMALL_STATE(176)] = 5766,
  [SMALL_STATE(177)] = 5782,
  [SMALL_STATE(178)] = 5802,
  [SMALL_STATE(179)] = 5817,
  [SMALL_STATE(180)] = 5835,
  [SMALL_STATE(181)] = 5853,
  [SMALL_STATE(182)] = 5870,
  [SMALL_STATE(183)] = 5885,
  [SMALL_STATE(184)] = 5902,
  [SMALL_STATE(185)] = 5914,
  [SMALL_STATE(186)] = 5926,
  [SMALL_STATE(187)] = 5938,
  [SMALL_STATE(188)] = 5950,
  [SMALL_STATE(189)] = 5962,
  [SMALL_STATE(190)] = 5974,
  [SMALL_STATE(191)] = 5986,
  [SMALL_STATE(192)] = 6002,
  [SMALL_STATE(193)] = 6018,
  [SMALL_STATE(194)] = 6031,
  [SMALL_STATE(195)] = 6044,
  [SMALL_STATE(196)] = 6057,
  [SMALL_STATE(197)] = 6070,
  [SMALL_STATE(198)] = 6083,
  [SMALL_STATE(199)] = 6096,
  [SMALL_STATE(200)] = 6109,
  [SMALL_STATE(201)] = 6122,
  [SMALL_STATE(202)] = 6135,
  [SMALL_STATE(203)] = 6148,
  [SMALL_STATE(204)] = 6161,
  [SMALL_STATE(205)] = 6174,
  [SMALL_STATE(206)] = 6187,
  [SMALL_STATE(207)] = 6200,
  [SMALL_STATE(208)] = 6213,
  [SMALL_STATE(209)] = 6226,
  [SMALL_STATE(210)] = 6237,
  [SMALL_STATE(211)] = 6248,
  [SMALL_STATE(212)] = 6261,
  [SMALL_STATE(213)] = 6274,
  [SMALL_STATE(214)] = 6287,
  [SMALL_STATE(215)] = 6300,
  [SMALL_STATE(216)] = 6313,
  [SMALL_STATE(217)] = 6326,
  [SMALL_STATE(218)] = 6339,
  [SMALL_STATE(219)] = 6352,
  [SMALL_STATE(220)] = 6363,
  [SMALL_STATE(221)] = 6376,
  [SMALL_STATE(222)] = 6389,
  [SMALL_STATE(223)] = 6402,
  [SMALL_STATE(224)] = 6415,
  [SMALL_STATE(225)] = 6428,
  [SMALL_STATE(226)] = 6438,
  [SMALL_STATE(227)] = 6448,
  [SMALL_STATE(228)] = 6456,
  [SMALL_STATE(229)] = 6464,
  [SMALL_STATE(230)] = 6472,
  [SMALL_STATE(231)] = 6480,
  [SMALL_STATE(232)] = 6490,
  [SMALL_STATE(233)] = 6500,
  [SMALL_STATE(234)] = 6510,
  [SMALL_STATE(235)] = 6518,
  [SMALL_STATE(236)] = 6528,
  [SMALL_STATE(237)] = 6538,
  [SMALL_STATE(238)] = 6546,
  [SMALL_STATE(239)] = 6554,
  [SMALL_STATE(240)] = 6564,
  [SMALL_STATE(241)] = 6574,
  [SMALL_STATE(242)] = 6584,
  [SMALL_STATE(243)] = 6594,
  [SMALL_STATE(244)] = 6604,
  [SMALL_STATE(245)] = 6614,
  [SMALL_STATE(246)] = 6624,
  [SMALL_STATE(247)] = 6632,
  [SMALL_STATE(248)] = 6642,
  [SMALL_STATE(249)] = 6652,
  [SMALL_STATE(250)] = 6660,
  [SMALL_STATE(251)] = 6668,
  [SMALL_STATE(252)] = 6678,
  [SMALL_STATE(253)] = 6688,
  [SMALL_STATE(254)] = 6696,
  [SMALL_STATE(255)] = 6706,
  [SMALL_STATE(256)] = 6716,
  [SMALL_STATE(257)] = 6724,
  [SMALL_STATE(258)] = 6731,
  [SMALL_STATE(259)] = 6738,
  [SMALL_STATE(260)] = 6745,
  [SMALL_STATE(261)] = 6752,
  [SMALL_STATE(262)] = 6759,
  [SMALL_STATE(263)] = 6766,
  [SMALL_STATE(264)] = 6773,
  [SMALL_STATE(265)] = 6780,
  [SMALL_STATE(266)] = 6787,
  [SMALL_STATE(267)] = 6794,
  [SMALL_STATE(268)] = 6801,
  [SMALL_STATE(269)] = 6808,
  [SMALL_STATE(270)] = 6815,
  [SMALL_STATE(271)] = 6822,
  [SMALL_STATE(272)] = 6829,
  [SMALL_STATE(273)] = 6836,
  [SMALL_STATE(274)] = 6843,
  [SMALL_STATE(275)] = 6850,
  [SMALL_STATE(276)] = 6857,
  [SMALL_STATE(277)] = 6864,
  [SMALL_STATE(278)] = 6871,
  [SMALL_STATE(279)] = 6878,
  [SMALL_STATE(280)] = 6885,
  [SMALL_STATE(281)] = 6892,
  [SMALL_STATE(282)] = 6899,
  [SMALL_STATE(283)] = 6906,
  [SMALL_STATE(284)] = 6913,
  [SMALL_STATE(285)] = 6920,
  [SMALL_STATE(286)] = 6927,
  [SMALL_STATE(287)] = 6934,
  [SMALL_STATE(288)] = 6941,
  [SMALL_STATE(289)] = 6948,
  [SMALL_STATE(290)] = 6955,
  [SMALL_STATE(291)] = 6962,
  [SMALL_STATE(292)] = 6969,
  [SMALL_STATE(293)] = 6976,
  [SMALL_STATE(294)] = 6983,
  [SMALL_STATE(295)] = 6990,
  [SMALL_STATE(296)] = 6997,
  [SMALL_STATE(297)] = 7004,
  [SMALL_STATE(298)] = 7011,
  [SMALL_STATE(299)] = 7018,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliasable_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_group_by_clause_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(269),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(161),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(39),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(139),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(153),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(255),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(264),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(20),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(122),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(283),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(215),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(288),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(39),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(255),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(20),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(31),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause_body, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliased_expression, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 20),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 20),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2), SHIFT_REPEAT(44),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_by_clause, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(37),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(236),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(136),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(291),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(180),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 19),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 16),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [772] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
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
