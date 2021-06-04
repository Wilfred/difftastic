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
#define STATE_COUNT 250
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 5
#define TOKEN_COUNT 65
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
  aux_sym_select_statement_token1 = 28,
  aux_sym_in_expression_token1 = 29,
  aux_sym_in_expression_token2 = 30,
  aux_sym_references_constraint_token1 = 31,
  aux_sym_on_update_action_token1 = 32,
  aux_sym_on_delete_action_token1 = 33,
  aux_sym__constraint_action_token1 = 34,
  aux_sym__constraint_action_token2 = 35,
  aux_sym__constraint_action_token3 = 36,
  aux_sym_where_clause_token1 = 37,
  anon_sym_LT = 38,
  anon_sym_LT_EQ = 39,
  anon_sym_LT_GT = 40,
  anon_sym_GT = 41,
  anon_sym_GT_EQ = 42,
  aux_sym_is_expression_token1 = 43,
  aux_sym_distinct_from_token1 = 44,
  aux_sym_boolean_expression_token1 = 45,
  aux_sym_boolean_expression_token2 = 46,
  aux_sym_NULL_token1 = 47,
  aux_sym_TRUE_token1 = 48,
  aux_sym_FALSE_token1 = 49,
  sym_number = 50,
  sym_identifier = 51,
  anon_sym_SQUOTE = 52,
  aux_sym_string_token1 = 53,
  anon_sym_DOLLAR_DOLLAR = 54,
  aux_sym_string_token2 = 55,
  anon_sym_DASH_GT_GT = 56,
  aux_sym_ordered_expression_token1 = 57,
  aux_sym_ordered_expression_token2 = 58,
  anon_sym_LBRACK = 59,
  anon_sym_RBRACK = 60,
  anon_sym_COLON_COLON = 61,
  sym_comment = 62,
  anon_sym_TILDE = 63,
  anon_sym_PLUS = 64,
  sym_source_file = 65,
  sym__statement = 66,
  sym_create_function_statement = 67,
  sym__function_optimizer_hint = 68,
  sym__function_language = 69,
  sym__create_function_return_type = 70,
  sym_setof = 71,
  sym_constrained_type = 72,
  sym_create_function_parameter = 73,
  sym_create_function_parameters = 74,
  sym__function_body = 75,
  sym_create_domain_statement = 76,
  sym_create_type_statement = 77,
  sym_create_index_statement = 78,
  sym_create_table_column_parameter = 79,
  sym_named_constraint = 80,
  sym_column_default = 81,
  sym_create_table_parameters = 82,
  sym__table_constraint = 83,
  sym_table_constraint_check = 84,
  sym_table_constraint_foreign_key = 85,
  sym_table_constraint_unique = 86,
  sym_table_constraint_primary_key = 87,
  sym_primary_key_constraint = 88,
  sym_create_table_statement = 89,
  sym_using_clause = 90,
  sym_index_table_parameters = 91,
  sym_select_statement = 92,
  sym_in_expression = 93,
  sym_tuple = 94,
  sym_select_clause = 95,
  sym_references_constraint = 96,
  sym_on_update_action = 97,
  sym_on_delete_action = 98,
  sym__constraint_action = 99,
  sym_unique_constraint = 100,
  sym_null_constraint = 101,
  sym_check_constraint = 102,
  sym_parameter = 103,
  sym_parameters = 104,
  sym_function_call = 105,
  sym_where_clause = 106,
  sym_comparison_operator = 107,
  sym__parenthesized_expression = 108,
  sym_is_expression = 109,
  sym_distinct_from = 110,
  sym_boolean_expression = 111,
  sym_NULL = 112,
  sym_TRUE = 113,
  sym_FALSE = 114,
  sym_string = 115,
  sym_field_access = 116,
  sym_ordered_expression = 117,
  sym__type_alias = 118,
  sym_array_type = 119,
  sym__type = 120,
  sym_type_cast = 121,
  sym_binary_expression = 122,
  sym__expression = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym_create_function_statement_repeat1 = 125,
  aux_sym_create_function_parameters_repeat1 = 126,
  aux_sym_create_domain_statement_repeat1 = 127,
  aux_sym_create_table_column_parameter_repeat1 = 128,
  aux_sym_create_table_parameters_repeat1 = 129,
  aux_sym_table_constraint_foreign_key_repeat1 = 130,
  aux_sym_index_table_parameters_repeat1 = 131,
  aux_sym_tuple_repeat1 = 132,
  aux_sym_parameters_repeat1 = 133,
  anon_alias_sym_NOT = 134,
  alias_sym_default = 135,
  alias_sym_function_body = 136,
  alias_sym_language = 137,
  alias_sym_type = 138,
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
  [aux_sym_select_statement_token1] = "SELECT",
  [aux_sym_in_expression_token1] = "not",
  [aux_sym_in_expression_token2] = "IN",
  [aux_sym_references_constraint_token1] = "REFERENCES",
  [aux_sym_on_update_action_token1] = "ON UPDATE",
  [aux_sym_on_delete_action_token1] = "ON DELETE",
  [aux_sym__constraint_action_token1] = "RESTRICT",
  [aux_sym__constraint_action_token2] = "CASCADE",
  [aux_sym__constraint_action_token3] = "SET NULL",
  [aux_sym_where_clause_token1] = "WHERE",
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
  [sym_in_expression] = "in_expression",
  [sym_tuple] = "tuple",
  [sym_select_clause] = "select_clause",
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
  [sym_where_clause] = "where_clause",
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
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
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
  [aux_sym_select_statement_token1] = aux_sym_select_statement_token1,
  [aux_sym_in_expression_token1] = aux_sym_in_expression_token1,
  [aux_sym_in_expression_token2] = aux_sym_in_expression_token2,
  [aux_sym_references_constraint_token1] = aux_sym_references_constraint_token1,
  [aux_sym_on_update_action_token1] = aux_sym_on_update_action_token1,
  [aux_sym_on_delete_action_token1] = aux_sym_on_delete_action_token1,
  [aux_sym__constraint_action_token1] = aux_sym__constraint_action_token1,
  [aux_sym__constraint_action_token2] = aux_sym__constraint_action_token2,
  [aux_sym__constraint_action_token3] = aux_sym__constraint_action_token3,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
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
  [sym_in_expression] = sym_in_expression,
  [sym_tuple] = sym_tuple,
  [sym_select_clause] = sym_select_clause,
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
  [sym_where_clause] = sym_where_clause,
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
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
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
  [aux_sym_select_statement_token1] = {
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
  [aux_sym_where_clause_token1] = {
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
  [sym_in_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
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
  [sym_where_clause] = {
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
  [aux_sym_tuple_repeat1] = {
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
      if (eof) ADVANCE(248);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '<') ADVANCE(293);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == '[') ADVANCE(389);
      if (lookahead == '\\') SKIP(235)
      if (lookahead == ']') ADVANCE(390);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == '~') ADVANCE(395);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(31)
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
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(20)
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
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(376);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(233);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(381);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '[') ADVANCE(389);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
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
      if (lookahead == '/') ADVANCE(392);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(394);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(394);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(347);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(349);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(344);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(391);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(386);
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
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
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
      if (lookahead == 'T') ADVANCE(270);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 60:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 61:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 62:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      END_STATE();
    case 114:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 115:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(52);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 116:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 119:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 120:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 122:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 123:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 124:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 135:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(98);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 159:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 186:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 187:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 188:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(225);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 200:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      END_STATE();
    case 201:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 202:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      END_STATE();
    case 204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 220:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 221:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 222:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 223:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 224:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 225:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 226:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 227:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 228:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 229:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(268);
      END_STATE();
    case 230:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(274);
      END_STATE();
    case 231:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 232:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 233:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(383);
      END_STATE();
    case 234:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 235:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(234)
      END_STATE();
    case 236:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(246)
      END_STATE();
    case 237:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(246)
      if (lookahead == '\r') SKIP(236)
      END_STATE();
    case 238:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(245)
      END_STATE();
    case 239:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(245)
      if (lookahead == '\r') SKIP(238)
      END_STATE();
    case 240:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(244)
      END_STATE();
    case 241:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(244)
      if (lookahead == '\r') SKIP(240)
      END_STATE();
    case 242:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(247)
      END_STATE();
    case 243:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '\r') SKIP(242)
      END_STATE();
    case 244:
      if (eof) ADVANCE(248);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '\\') SKIP(241)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(244)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 245:
      if (eof) ADVANCE(248);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '<') ADVANCE(293);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '[') ADVANCE(389);
      if (lookahead == '\\') SKIP(239)
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '~') ADVANCE(395);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(245)
      END_STATE();
    case 246:
      if (eof) ADVANCE(248);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == '+') ADVANCE(396);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '<') ADVANCE(293);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '\\') SKIP(237)
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '~') ADVANCE(395);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(246)
      END_STATE();
    case 247:
      if (eof) ADVANCE(248);
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '[') ADVANCE(389);
      if (lookahead == '\\') SKIP(243)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(247)
      END_STATE();
    case 248:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__function_body_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(294);
      if (lookahead == '>') ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(373);
      if (lookahead == '\r') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '/') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '\r') ADVANCE(378);
      if (lookahead == '$') ADVANCE(233);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '$') ADVANCE(233);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(233);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(233);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(381);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(233);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(233);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '$') ADVANCE(394);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 246},
  [3] = {.lex_state = 246},
  [4] = {.lex_state = 245},
  [5] = {.lex_state = 245},
  [6] = {.lex_state = 245},
  [7] = {.lex_state = 245},
  [8] = {.lex_state = 245},
  [9] = {.lex_state = 245},
  [10] = {.lex_state = 245},
  [11] = {.lex_state = 245},
  [12] = {.lex_state = 245},
  [13] = {.lex_state = 245},
  [14] = {.lex_state = 244},
  [15] = {.lex_state = 245},
  [16] = {.lex_state = 245},
  [17] = {.lex_state = 245},
  [18] = {.lex_state = 245},
  [19] = {.lex_state = 245},
  [20] = {.lex_state = 245},
  [21] = {.lex_state = 245},
  [22] = {.lex_state = 245},
  [23] = {.lex_state = 245},
  [24] = {.lex_state = 245},
  [25] = {.lex_state = 246},
  [26] = {.lex_state = 246},
  [27] = {.lex_state = 246},
  [28] = {.lex_state = 246},
  [29] = {.lex_state = 246},
  [30] = {.lex_state = 246},
  [31] = {.lex_state = 246},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 246},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 245},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 245},
  [59] = {.lex_state = 247},
  [60] = {.lex_state = 247},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 245},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 245},
  [65] = {.lex_state = 245},
  [66] = {.lex_state = 245},
  [67] = {.lex_state = 245},
  [68] = {.lex_state = 245},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 246},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 246},
  [76] = {.lex_state = 246},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 246},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 246},
  [81] = {.lex_state = 247},
  [82] = {.lex_state = 246},
  [83] = {.lex_state = 247},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 246},
  [87] = {.lex_state = 246},
  [88] = {.lex_state = 246},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 246},
  [100] = {.lex_state = 246},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 24},
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
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 32},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 247},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 247},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 20},
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
  [179] = {.lex_state = 247},
  [180] = {.lex_state = 246},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 246},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 246},
  [193] = {.lex_state = 246},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 246},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 246},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 23},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 373},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 246},
  [230] = {.lex_state = 247},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 373},
  [236] = {.lex_state = 23},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 20},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
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
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [aux_sym_in_expression_token1] = ACTIONS(1),
    [aux_sym_in_expression_token2] = ACTIONS(1),
    [aux_sym_references_constraint_token1] = ACTIONS(1),
    [aux_sym__constraint_action_token1] = ACTIONS(1),
    [aux_sym__constraint_action_token2] = ACTIONS(1),
    [aux_sym__constraint_action_token3] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(243),
    [sym__statement] = STATE(79),
    [sym_create_function_statement] = STATE(122),
    [sym_create_domain_statement] = STATE(122),
    [sym_create_type_statement] = STATE(122),
    [sym_create_index_statement] = STATE(122),
    [sym_create_table_statement] = STATE(122),
    [sym_select_statement] = STATE(122),
    [aux_sym_source_file_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_function_statement_token1] = ACTIONS(7),
    [aux_sym_create_domain_statement_token1] = ACTIONS(9),
    [aux_sym_create_type_statement_token1] = ACTIONS(11),
    [aux_sym_create_index_statement_token1] = ACTIONS(13),
    [aux_sym_create_table_statement_token1] = ACTIONS(15),
    [aux_sym_select_statement_token1] = ACTIONS(17),
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
    ACTIONS(19), 34,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [45] = 6,
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
    ACTIONS(23), 28,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [93] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 31,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 31,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 31,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 31,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 31,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [347] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [515] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_where_clause_token1,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(31), 1,
      sym__expression,
    STATE(112), 1,
      sym_select_clause,
    STATE(132), 1,
      sym_where_clause,
    ACTIONS(75), 2,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
    STATE(20), 10,
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
  [584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [830] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 30,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
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
  [994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(131), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 26,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1037] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(137), 19,
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
      aux_sym_select_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 27,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1131] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(151), 19,
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
      aux_sym_select_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1184] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(157), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(155), 16,
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
      aux_sym_select_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [1238] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(163), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(161), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [1286] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      aux_sym_create_index_statement_token1,
    STATE(97), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [1338] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(62), 1,
      sym__expression,
    STATE(171), 1,
      sym_ordered_expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1389] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(65), 1,
      sym__expression,
    STATE(181), 1,
      sym_ordered_expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1440] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1491] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(29), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1539] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(82), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1587] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(66), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1635] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(75), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1683] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(78), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1731] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(67), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1779] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(23), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1827] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(68), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1875] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(64), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1923] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(28), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [1971] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(53), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [2019] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(27), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [2067] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(26), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [2115] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(86), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [2163] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(25), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [2211] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [2259] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(80), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [2307] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_NULL_token1,
    ACTIONS(81), 1,
      aux_sym_TRUE_token1,
    ACTIONS(83), 1,
      aux_sym_FALSE_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(23), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(20), 10,
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
  [2355] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(181), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2400] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(187), 1,
      aux_sym_column_default_token1,
    ACTIONS(189), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(191), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(193), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(195), 1,
      aux_sym_in_expression_token1,
    ACTIONS(197), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    STATE(61), 1,
      sym_NULL,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(56), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(201), 1,
      anon_sym_DASH_GT_GT,
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
  [2482] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(187), 1,
      aux_sym_column_default_token1,
    ACTIONS(189), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(191), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(193), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(195), 1,
      aux_sym_in_expression_token1,
    ACTIONS(197), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    STATE(61), 1,
      sym_NULL,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(57), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2527] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(210), 1,
      aux_sym_column_default_token1,
    ACTIONS(213), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(216), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(219), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(222), 1,
      aux_sym_in_expression_token1,
    ACTIONS(225), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(228), 1,
      aux_sym_NULL_token1,
    STATE(61), 1,
      sym_NULL,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(57), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2572] = 3,
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
  [2598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(33), 17,
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
      aux_sym_select_statement_token1,
      anon_sym_LBRACK,
  [2624] = 3,
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
      aux_sym_select_statement_token1,
      anon_sym_LBRACK,
  [2650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(231), 17,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [2676] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      aux_sym_is_expression_token1,
    ACTIONS(245), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(247), 1,
      aux_sym_boolean_expression_token2,
    STATE(157), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(251), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(235), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(253), 17,
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
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
  [2748] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(243), 1,
      aux_sym_is_expression_token1,
    ACTIONS(245), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(247), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(137), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2785] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(243), 1,
      aux_sym_is_expression_token1,
    ACTIONS(245), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(247), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(251), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(235), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2826] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(243), 1,
      aux_sym_is_expression_token1,
    ACTIONS(245), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(247), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(151), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 14,
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
  [2890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(247), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 13,
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
  [2919] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym__function_language_token1,
    ACTIONS(267), 1,
      aux_sym__function_body_token1,
    ACTIONS(270), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(261), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(69), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2952] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym__function_language_token1,
    ACTIONS(278), 1,
      aux_sym__function_body_token1,
    ACTIONS(280), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(274), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(69), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(272), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2985] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym__function_language_token1,
    ACTIONS(278), 1,
      aux_sym__function_body_token1,
    ACTIONS(284), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(274), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(70), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(282), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3018] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(288), 15,
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
      aux_sym_select_statement_token1,
  [3084] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(195), 1,
      aux_sym_in_expression_token1,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(294), 1,
      aux_sym_create_index_statement_token1,
    STATE(61), 1,
      sym_NULL,
    STATE(85), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(292), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3120] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3162] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(304), 1,
      aux_sym_on_delete_action_token1,
    STATE(180), 1,
      sym_on_delete_action,
    STATE(208), 1,
      sym_on_update_action,
    ACTIONS(300), 10,
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
  [3193] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(310), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(313), 1,
      aux_sym_in_expression_token1,
    ACTIONS(316), 1,
      aux_sym_NULL_token1,
    STATE(61), 1,
      sym_NULL,
    STATE(77), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(306), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3226] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3263] = 10,
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
      aux_sym_select_statement_token1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(122), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [3300] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(329), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 12,
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
      aux_sym_select_statement_token1,
  [3364] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(337), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(335), 12,
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
      aux_sym_select_statement_token1,
  [3428] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(344), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(347), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(350), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(353), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(356), 1,
      aux_sym_select_statement_token1,
    STATE(84), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(122), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [3465] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(195), 1,
      aux_sym_in_expression_token1,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(361), 1,
      aux_sym_create_index_statement_token1,
    STATE(61), 1,
      sym_NULL,
    STATE(77), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3498] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(135), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 1,
      aux_sym_in_expression_token1,
    ACTIONS(145), 1,
      aux_sym_in_expression_token2,
    ACTIONS(149), 1,
      aux_sym_is_expression_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(304), 1,
      aux_sym_on_delete_action_token1,
    STATE(190), 1,
      sym_on_delete_action,
    STATE(192), 1,
      sym_on_update_action,
    ACTIONS(365), 10,
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
  [3562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(304), 1,
      aux_sym_on_delete_action_token1,
    STATE(193), 1,
      sym_on_delete_action,
    STATE(196), 1,
      sym_on_update_action,
    ACTIONS(367), 10,
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
  [3590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(325), 12,
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
      aux_sym_select_statement_token1,
  [3611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(369), 12,
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
      aux_sym_select_statement_token1,
  [3632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(373), 12,
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
      aux_sym_select_statement_token1,
  [3653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
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
      aux_sym_select_statement_token1,
  [3674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(381), 10,
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
  [3696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [3720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(381), 10,
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
  [3739] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(388), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(390), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(392), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(172), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [3766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      aux_sym_create_index_statement_token1,
    STATE(94), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [3789] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(388), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(390), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(392), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(194), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [3816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 11,
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
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 11,
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
  [3850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 11,
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
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 10,
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
  [3883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 10,
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
  [3899] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_NULL_token1,
  [3915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(414), 1,
      aux_sym_where_clause_token1,
    STATE(128), 1,
      sym_where_clause,
    ACTIONS(410), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_where_clause_token1,
    ACTIONS(418), 1,
      aux_sym_create_index_statement_token1,
    STATE(124), 1,
      sym_where_clause,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 10,
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
  [3975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_where_clause_token1,
    ACTIONS(424), 1,
      aux_sym_create_index_statement_token1,
    STATE(131), 1,
      sym_where_clause,
    ACTIONS(422), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_where_clause_token1,
    ACTIONS(428), 1,
      aux_sym_create_index_statement_token1,
    STATE(121), 1,
      sym_where_clause,
    ACTIONS(426), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 10,
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
  [4035] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(155), 1,
      sym_constrained_type,
    STATE(141), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(33), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [4057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_where_clause_token1,
    ACTIONS(436), 1,
      aux_sym_create_index_statement_token1,
    STATE(126), 1,
      sym_where_clause,
    ACTIONS(434), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 10,
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
  [4095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [4112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(444), 1,
      aux_sym_in_expression_token1,
    ACTIONS(446), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(448), 1,
      aux_sym_TRUE_token1,
    ACTIONS(450), 1,
      aux_sym_FALSE_token1,
    STATE(21), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym__function_body_token1,
    ACTIONS(456), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(452), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(448), 1,
      aux_sym_TRUE_token1,
    ACTIONS(450), 1,
      aux_sym_FALSE_token1,
    ACTIONS(458), 1,
      aux_sym_in_expression_token1,
    ACTIONS(460), 1,
      aux_sym_distinct_from_token1,
    STATE(21), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [4198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(466), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(470), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(410), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(474), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(103), 1,
      sym_type_cast,
    STATE(95), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [4288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(422), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(482), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(486), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(490), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(494), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(498), 1,
      aux_sym_setof_token1,
    STATE(71), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(83), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(500), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(504), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(434), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(448), 1,
      aux_sym_TRUE_token1,
    ACTIONS(450), 1,
      aux_sym_FALSE_token1,
    ACTIONS(460), 1,
      aux_sym_distinct_from_token1,
    STATE(16), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4458] = 3,
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
      aux_sym_select_statement_token1,
  [4474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    ACTIONS(446), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(448), 1,
      aux_sym_TRUE_token1,
    ACTIONS(450), 1,
      aux_sym_FALSE_token1,
    STATE(16), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(512), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(162), 1,
      sym_constrained_type,
    STATE(206), 1,
      sym_create_function_parameter,
    STATE(139), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(162), 1,
      sym_constrained_type,
    STATE(165), 1,
      sym_create_function_parameter,
    STATE(139), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_EQ,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(89), 1,
      sym_constrained_type,
    STATE(81), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      anon_sym_EQ,
    ACTIONS(526), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(99), 1,
      sym__constraint_action,
    ACTIONS(528), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [4608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(11), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym__constraint_action,
    ACTIONS(532), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [4632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(74), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(54), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      aux_sym_using_clause_token1,
    STATE(106), 1,
      sym_index_table_parameters,
    STATE(202), 1,
      sym_using_clause,
  [4672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(159), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      aux_sym_using_clause_token1,
    STATE(109), 1,
      sym_index_table_parameters,
    STATE(187), 1,
      sym_using_clause,
  [4700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_create_function_parameters_repeat1,
  [4752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_parameters_repeat1,
  [4765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_EQ,
    ACTIONS(526), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_index_table_parameters_repeat1,
  [4802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_parameters_repeat1,
  [4815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_create_table_parameters_repeat1,
  [4839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(91), 1,
      sym_string,
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_EQ,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_tuple_repeat1,
  [4876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(12), 1,
      sym_string,
  [4889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_create_function_parameters_repeat1,
  [4902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(12), 1,
      sym_string,
  [4915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_create_function_parameters_repeat1,
  [4928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_index_table_parameters_repeat1,
  [4941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_parameters_repeat1,
  [4967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_index_table_parameters_repeat1,
  [4980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_create_table_parameters_repeat1,
  [4993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_tuple_repeat1,
  [5006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_create_table_parameters_repeat1,
  [5019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(605), 1,
      aux_sym_create_index_statement_token2,
    STATE(230), 1,
      sym_unique_constraint,
  [5084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_on_update_action_token1,
    STATE(113), 1,
      sym_on_update_action,
  [5094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    STATE(211), 1,
      sym_create_function_parameters,
  [5112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_tuple,
  [5130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_references_constraint_token1,
    STATE(200), 1,
      sym_references_constraint,
  [5140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_parameters,
  [5150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_index_table_parameters,
  [5160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_create_table_parameters,
  [5170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_NULL_token1,
    STATE(63), 1,
      sym_NULL,
  [5180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_on_update_action_token1,
    STATE(102), 1,
      sym_on_update_action,
  [5190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_on_delete_action_token1,
    STATE(102), 1,
      sym_on_delete_action,
  [5208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_on_update_action_token1,
    STATE(110), 1,
      sym_on_update_action,
  [5218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_on_delete_action_token1,
    STATE(110), 1,
      sym_on_delete_action,
  [5244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(154), 1,
      sym_parameter,
  [5262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_references_constraint_token1,
    STATE(205), 1,
      sym_references_constraint,
  [5288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_index_table_parameters,
  [5298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(191), 1,
      sym_parameter,
  [5340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_on_delete_action_token1,
    STATE(113), 1,
      sym_on_delete_action,
  [5350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_tuple,
  [5360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
  [5367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      aux_sym_create_function_statement_token2,
  [5374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
  [5381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      aux_sym_create_function_statement_token2,
  [5388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
  [5395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_identifier,
  [5402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
  [5409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_identifier,
  [5416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_identifier,
  [5423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_identifier,
  [5430] = 2,
    ACTIONS(651), 1,
      aux_sym_string_token2,
    ACTIONS(653), 1,
      sym_comment,
  [5437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
  [5444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym_identifier,
  [5451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_DOLLAR_DOLLAR,
  [5458] = 2,
    ACTIONS(653), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_string_token1,
  [5465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_identifier,
  [5472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [5479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_identifier,
  [5486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      aux_sym_create_index_statement_token3,
  [5493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      aux_sym_in_expression_token2,
  [5500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_create_index_statement_token2,
  [5507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
  [5514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SQUOTE,
  [5521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_DOLLAR_DOLLAR,
  [5528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
  [5535] = 2,
    ACTIONS(653), 1,
      sym_comment,
    ACTIONS(679), 1,
      aux_sym_string_token1,
  [5542] = 2,
    ACTIONS(653), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym_string_token2,
  [5549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      aux_sym_create_function_statement_token2,
  [5556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_identifier,
  [5563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      aux_sym__function_body_token1,
  [5570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_identifier,
  [5577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym_identifier,
  [5584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
  [5591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      ts_builtin_sym_end,
  [5598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_identifier,
  [5605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
  [5612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_identifier,
  [5619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
  [5626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
  [5633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_create_index_statement_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 389,
  [SMALL_STATE(12)] = 433,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 515,
  [SMALL_STATE(15)] = 584,
  [SMALL_STATE(16)] = 625,
  [SMALL_STATE(17)] = 666,
  [SMALL_STATE(18)] = 707,
  [SMALL_STATE(19)] = 748,
  [SMALL_STATE(20)] = 789,
  [SMALL_STATE(21)] = 830,
  [SMALL_STATE(22)] = 871,
  [SMALL_STATE(23)] = 912,
  [SMALL_STATE(24)] = 953,
  [SMALL_STATE(25)] = 994,
  [SMALL_STATE(26)] = 1037,
  [SMALL_STATE(27)] = 1090,
  [SMALL_STATE(28)] = 1131,
  [SMALL_STATE(29)] = 1184,
  [SMALL_STATE(30)] = 1238,
  [SMALL_STATE(31)] = 1286,
  [SMALL_STATE(32)] = 1338,
  [SMALL_STATE(33)] = 1389,
  [SMALL_STATE(34)] = 1440,
  [SMALL_STATE(35)] = 1491,
  [SMALL_STATE(36)] = 1539,
  [SMALL_STATE(37)] = 1587,
  [SMALL_STATE(38)] = 1635,
  [SMALL_STATE(39)] = 1683,
  [SMALL_STATE(40)] = 1731,
  [SMALL_STATE(41)] = 1779,
  [SMALL_STATE(42)] = 1827,
  [SMALL_STATE(43)] = 1875,
  [SMALL_STATE(44)] = 1923,
  [SMALL_STATE(45)] = 1971,
  [SMALL_STATE(46)] = 2019,
  [SMALL_STATE(47)] = 2067,
  [SMALL_STATE(48)] = 2115,
  [SMALL_STATE(49)] = 2163,
  [SMALL_STATE(50)] = 2211,
  [SMALL_STATE(51)] = 2259,
  [SMALL_STATE(52)] = 2307,
  [SMALL_STATE(53)] = 2355,
  [SMALL_STATE(54)] = 2400,
  [SMALL_STATE(55)] = 2448,
  [SMALL_STATE(56)] = 2482,
  [SMALL_STATE(57)] = 2527,
  [SMALL_STATE(58)] = 2572,
  [SMALL_STATE(59)] = 2598,
  [SMALL_STATE(60)] = 2624,
  [SMALL_STATE(61)] = 2650,
  [SMALL_STATE(62)] = 2676,
  [SMALL_STATE(63)] = 2722,
  [SMALL_STATE(64)] = 2748,
  [SMALL_STATE(65)] = 2785,
  [SMALL_STATE(66)] = 2826,
  [SMALL_STATE(67)] = 2863,
  [SMALL_STATE(68)] = 2890,
  [SMALL_STATE(69)] = 2919,
  [SMALL_STATE(70)] = 2952,
  [SMALL_STATE(71)] = 2985,
  [SMALL_STATE(72)] = 3018,
  [SMALL_STATE(73)] = 3060,
  [SMALL_STATE(74)] = 3084,
  [SMALL_STATE(75)] = 3120,
  [SMALL_STATE(76)] = 3162,
  [SMALL_STATE(77)] = 3193,
  [SMALL_STATE(78)] = 3226,
  [SMALL_STATE(79)] = 3263,
  [SMALL_STATE(80)] = 3300,
  [SMALL_STATE(81)] = 3337,
  [SMALL_STATE(82)] = 3364,
  [SMALL_STATE(83)] = 3401,
  [SMALL_STATE(84)] = 3428,
  [SMALL_STATE(85)] = 3465,
  [SMALL_STATE(86)] = 3498,
  [SMALL_STATE(87)] = 3534,
  [SMALL_STATE(88)] = 3562,
  [SMALL_STATE(89)] = 3590,
  [SMALL_STATE(90)] = 3611,
  [SMALL_STATE(91)] = 3632,
  [SMALL_STATE(92)] = 3653,
  [SMALL_STATE(93)] = 3674,
  [SMALL_STATE(94)] = 3696,
  [SMALL_STATE(95)] = 3720,
  [SMALL_STATE(96)] = 3739,
  [SMALL_STATE(97)] = 3766,
  [SMALL_STATE(98)] = 3789,
  [SMALL_STATE(99)] = 3816,
  [SMALL_STATE(100)] = 3833,
  [SMALL_STATE(101)] = 3850,
  [SMALL_STATE(102)] = 3867,
  [SMALL_STATE(103)] = 3883,
  [SMALL_STATE(104)] = 3899,
  [SMALL_STATE(105)] = 3915,
  [SMALL_STATE(106)] = 3937,
  [SMALL_STATE(107)] = 3959,
  [SMALL_STATE(108)] = 3975,
  [SMALL_STATE(109)] = 3997,
  [SMALL_STATE(110)] = 4019,
  [SMALL_STATE(111)] = 4035,
  [SMALL_STATE(112)] = 4057,
  [SMALL_STATE(113)] = 4079,
  [SMALL_STATE(114)] = 4095,
  [SMALL_STATE(115)] = 4112,
  [SMALL_STATE(116)] = 4137,
  [SMALL_STATE(117)] = 4156,
  [SMALL_STATE(118)] = 4181,
  [SMALL_STATE(119)] = 4198,
  [SMALL_STATE(120)] = 4214,
  [SMALL_STATE(121)] = 4230,
  [SMALL_STATE(122)] = 4246,
  [SMALL_STATE(123)] = 4264,
  [SMALL_STATE(124)] = 4288,
  [SMALL_STATE(125)] = 4304,
  [SMALL_STATE(126)] = 4320,
  [SMALL_STATE(127)] = 4336,
  [SMALL_STATE(128)] = 4352,
  [SMALL_STATE(129)] = 4368,
  [SMALL_STATE(130)] = 4388,
  [SMALL_STATE(131)] = 4404,
  [SMALL_STATE(132)] = 4420,
  [SMALL_STATE(133)] = 4436,
  [SMALL_STATE(134)] = 4458,
  [SMALL_STATE(135)] = 4474,
  [SMALL_STATE(136)] = 4496,
  [SMALL_STATE(137)] = 4511,
  [SMALL_STATE(138)] = 4529,
  [SMALL_STATE(139)] = 4547,
  [SMALL_STATE(140)] = 4564,
  [SMALL_STATE(141)] = 4579,
  [SMALL_STATE(142)] = 4596,
  [SMALL_STATE(143)] = 4608,
  [SMALL_STATE(144)] = 4620,
  [SMALL_STATE(145)] = 4632,
  [SMALL_STATE(146)] = 4644,
  [SMALL_STATE(147)] = 4656,
  [SMALL_STATE(148)] = 4672,
  [SMALL_STATE(149)] = 4684,
  [SMALL_STATE(150)] = 4700,
  [SMALL_STATE(151)] = 4713,
  [SMALL_STATE(152)] = 4726,
  [SMALL_STATE(153)] = 4739,
  [SMALL_STATE(154)] = 4752,
  [SMALL_STATE(155)] = 4765,
  [SMALL_STATE(156)] = 4776,
  [SMALL_STATE(157)] = 4789,
  [SMALL_STATE(158)] = 4802,
  [SMALL_STATE(159)] = 4815,
  [SMALL_STATE(160)] = 4826,
  [SMALL_STATE(161)] = 4839,
  [SMALL_STATE(162)] = 4852,
  [SMALL_STATE(163)] = 4863,
  [SMALL_STATE(164)] = 4876,
  [SMALL_STATE(165)] = 4889,
  [SMALL_STATE(166)] = 4902,
  [SMALL_STATE(167)] = 4915,
  [SMALL_STATE(168)] = 4928,
  [SMALL_STATE(169)] = 4941,
  [SMALL_STATE(170)] = 4954,
  [SMALL_STATE(171)] = 4967,
  [SMALL_STATE(172)] = 4980,
  [SMALL_STATE(173)] = 4993,
  [SMALL_STATE(174)] = 5006,
  [SMALL_STATE(175)] = 5019,
  [SMALL_STATE(176)] = 5032,
  [SMALL_STATE(177)] = 5045,
  [SMALL_STATE(178)] = 5058,
  [SMALL_STATE(179)] = 5071,
  [SMALL_STATE(180)] = 5084,
  [SMALL_STATE(181)] = 5094,
  [SMALL_STATE(182)] = 5102,
  [SMALL_STATE(183)] = 5112,
  [SMALL_STATE(184)] = 5120,
  [SMALL_STATE(185)] = 5130,
  [SMALL_STATE(186)] = 5140,
  [SMALL_STATE(187)] = 5150,
  [SMALL_STATE(188)] = 5160,
  [SMALL_STATE(189)] = 5170,
  [SMALL_STATE(190)] = 5180,
  [SMALL_STATE(191)] = 5190,
  [SMALL_STATE(192)] = 5198,
  [SMALL_STATE(193)] = 5208,
  [SMALL_STATE(194)] = 5218,
  [SMALL_STATE(195)] = 5226,
  [SMALL_STATE(196)] = 5234,
  [SMALL_STATE(197)] = 5244,
  [SMALL_STATE(198)] = 5252,
  [SMALL_STATE(199)] = 5262,
  [SMALL_STATE(200)] = 5270,
  [SMALL_STATE(201)] = 5278,
  [SMALL_STATE(202)] = 5288,
  [SMALL_STATE(203)] = 5298,
  [SMALL_STATE(204)] = 5306,
  [SMALL_STATE(205)] = 5314,
  [SMALL_STATE(206)] = 5322,
  [SMALL_STATE(207)] = 5330,
  [SMALL_STATE(208)] = 5340,
  [SMALL_STATE(209)] = 5350,
  [SMALL_STATE(210)] = 5360,
  [SMALL_STATE(211)] = 5367,
  [SMALL_STATE(212)] = 5374,
  [SMALL_STATE(213)] = 5381,
  [SMALL_STATE(214)] = 5388,
  [SMALL_STATE(215)] = 5395,
  [SMALL_STATE(216)] = 5402,
  [SMALL_STATE(217)] = 5409,
  [SMALL_STATE(218)] = 5416,
  [SMALL_STATE(219)] = 5423,
  [SMALL_STATE(220)] = 5430,
  [SMALL_STATE(221)] = 5437,
  [SMALL_STATE(222)] = 5444,
  [SMALL_STATE(223)] = 5451,
  [SMALL_STATE(224)] = 5458,
  [SMALL_STATE(225)] = 5465,
  [SMALL_STATE(226)] = 5472,
  [SMALL_STATE(227)] = 5479,
  [SMALL_STATE(228)] = 5486,
  [SMALL_STATE(229)] = 5493,
  [SMALL_STATE(230)] = 5500,
  [SMALL_STATE(231)] = 5507,
  [SMALL_STATE(232)] = 5514,
  [SMALL_STATE(233)] = 5521,
  [SMALL_STATE(234)] = 5528,
  [SMALL_STATE(235)] = 5535,
  [SMALL_STATE(236)] = 5542,
  [SMALL_STATE(237)] = 5549,
  [SMALL_STATE(238)] = 5556,
  [SMALL_STATE(239)] = 5563,
  [SMALL_STATE(240)] = 5570,
  [SMALL_STATE(241)] = 5577,
  [SMALL_STATE(242)] = 5584,
  [SMALL_STATE(243)] = 5591,
  [SMALL_STATE(244)] = 5598,
  [SMALL_STATE(245)] = 5605,
  [SMALL_STATE(246)] = 5612,
  [SMALL_STATE(247)] = 5619,
  [SMALL_STATE(248)] = 5626,
  [SMALL_STATE(249)] = 5633,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(222),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(123),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(35),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(101),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(104),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(189),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(210),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(17),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(92),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(212),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(161),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(35),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(189),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(17),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(50),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 20),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 20),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(241),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(98),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(137),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(33),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(207),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 19),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 16),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [695] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_SQL(void) {
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
