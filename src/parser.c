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
#define STATE_COUNT 255
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 5
#define TOKEN_COUNT 66
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
  aux_sym_where_clause_token1 = 29,
  aux_sym_from_clause_token1 = 30,
  aux_sym_in_expression_token1 = 31,
  aux_sym_in_expression_token2 = 32,
  aux_sym_references_constraint_token1 = 33,
  aux_sym_on_update_action_token1 = 34,
  aux_sym_on_delete_action_token1 = 35,
  aux_sym__constraint_action_token1 = 36,
  aux_sym__constraint_action_token2 = 37,
  aux_sym__constraint_action_token3 = 38,
  anon_sym_LT = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_LT_GT = 41,
  anon_sym_GT = 42,
  anon_sym_GT_EQ = 43,
  aux_sym_is_expression_token1 = 44,
  aux_sym_distinct_from_token1 = 45,
  aux_sym_boolean_expression_token1 = 46,
  aux_sym_boolean_expression_token2 = 47,
  aux_sym_NULL_token1 = 48,
  aux_sym_TRUE_token1 = 49,
  aux_sym_FALSE_token1 = 50,
  sym_number = 51,
  sym_identifier = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_string_token1 = 54,
  anon_sym_DOLLAR_DOLLAR = 55,
  aux_sym_string_token2 = 56,
  anon_sym_DASH_GT_GT = 57,
  aux_sym_ordered_expression_token1 = 58,
  aux_sym_ordered_expression_token2 = 59,
  anon_sym_LBRACK = 60,
  anon_sym_RBRACK = 61,
  anon_sym_COLON_COLON = 62,
  sym_comment = 63,
  anon_sym_TILDE = 64,
  anon_sym_PLUS = 65,
  sym_source_file = 66,
  sym__statement = 67,
  sym_create_function_statement = 68,
  sym__function_optimizer_hint = 69,
  sym__function_language = 70,
  sym__create_function_return_type = 71,
  sym_setof = 72,
  sym_constrained_type = 73,
  sym_create_function_parameter = 74,
  sym_create_function_parameters = 75,
  sym__function_body = 76,
  sym_create_domain_statement = 77,
  sym_create_type_statement = 78,
  sym_create_index_statement = 79,
  sym_create_table_column_parameter = 80,
  sym_named_constraint = 81,
  sym_column_default = 82,
  sym_create_table_parameters = 83,
  sym__table_constraint = 84,
  sym_table_constraint_check = 85,
  sym_table_constraint_foreign_key = 86,
  sym_table_constraint_unique = 87,
  sym_table_constraint_primary_key = 88,
  sym_primary_key_constraint = 89,
  sym_create_table_statement = 90,
  sym_using_clause = 91,
  sym_index_table_parameters = 92,
  sym_select_statement = 93,
  sym_where_clause = 94,
  sym_from_clause = 95,
  sym_in_expression = 96,
  sym_tuple = 97,
  sym_select_clause = 98,
  sym_references_constraint = 99,
  sym_on_update_action = 100,
  sym_on_delete_action = 101,
  sym__constraint_action = 102,
  sym_unique_constraint = 103,
  sym_null_constraint = 104,
  sym_check_constraint = 105,
  sym_parameter = 106,
  sym_parameters = 107,
  sym_function_call = 108,
  sym_comparison_operator = 109,
  sym__parenthesized_expression = 110,
  sym_is_expression = 111,
  sym_distinct_from = 112,
  sym_boolean_expression = 113,
  sym_NULL = 114,
  sym_TRUE = 115,
  sym_FALSE = 116,
  sym_string = 117,
  sym_field_access = 118,
  sym_ordered_expression = 119,
  sym__type_alias = 120,
  sym_array_type = 121,
  sym__type = 122,
  sym_type_cast = 123,
  sym_binary_expression = 124,
  sym__expression = 125,
  aux_sym_source_file_repeat1 = 126,
  aux_sym_create_function_statement_repeat1 = 127,
  aux_sym_create_function_parameters_repeat1 = 128,
  aux_sym_create_domain_statement_repeat1 = 129,
  aux_sym_create_table_column_parameter_repeat1 = 130,
  aux_sym_create_table_parameters_repeat1 = 131,
  aux_sym_table_constraint_foreign_key_repeat1 = 132,
  aux_sym_index_table_parameters_repeat1 = 133,
  aux_sym_tuple_repeat1 = 134,
  aux_sym_parameters_repeat1 = 135,
  anon_alias_sym_NOT = 136,
  alias_sym_default = 137,
  alias_sym_function_body = 138,
  alias_sym_language = 139,
  alias_sym_type = 140,
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
  [aux_sym_where_clause_token1] = "WHERE",
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
  [sym_where_clause] = "where_clause",
  [sym_from_clause] = "from_clause",
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
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
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
  [sym_where_clause] = sym_where_clause,
  [sym_from_clause] = sym_from_clause,
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
  [aux_sym_where_clause_token1] = {
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
  [sym_where_clause] = {
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
      if (eof) ADVANCE(251);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == '+') ADVANCE(404);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(298);
      if (lookahead == '=') ADVANCE(262);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') SKIP(238)
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == '~') ADVANCE(403);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(183);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
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
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(176);
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
      if (lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(12)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(384);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(389);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '=') ADVANCE(262);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
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
      if (lookahead == '/') ADVANCE(400);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(402);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(351);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(334);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(399);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(394);
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
          lookahead == 'a') ADVANCE(204);
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
      if (lookahead == 'T') ADVANCE(273);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(189);
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
          lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
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
          lookahead == 'i') ADVANCE(207);
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
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
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
          lookahead == 'e') ADVANCE(234);
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
          lookahead == 'e') ADVANCE(206);
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
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(259);
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
          lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 119:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 120:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(227);
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
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
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
          lookahead == 'k') ADVANCE(275);
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
          lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
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
          lookahead == 'l') ADVANCE(211);
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
          lookahead == 'm') ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 159:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 161:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 188:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 189:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 190:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(228);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      END_STATE();
    case 204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 206:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      END_STATE();
    case 207:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 208:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 223:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 224:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 225:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 226:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 227:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 228:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 229:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 230:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 231:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 232:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(271);
      END_STATE();
    case 233:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 234:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 235:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(391);
      END_STATE();
    case 237:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 238:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(237)
      END_STATE();
    case 239:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(249)
      END_STATE();
    case 240:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(249)
      if (lookahead == '\r') SKIP(239)
      END_STATE();
    case 241:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(248)
      END_STATE();
    case 242:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(248)
      if (lookahead == '\r') SKIP(241)
      END_STATE();
    case 243:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(247)
      END_STATE();
    case 244:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '\r') SKIP(243)
      END_STATE();
    case 245:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(250)
      END_STATE();
    case 246:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(250)
      if (lookahead == '\r') SKIP(245)
      END_STATE();
    case 247:
      if (eof) ADVANCE(251);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '\\') SKIP(244)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(318);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 248:
      if (eof) ADVANCE(251);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == '+') ADVANCE(404);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(298);
      if (lookahead == '=') ADVANCE(262);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') SKIP(242)
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '~') ADVANCE(403);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(248)
      END_STATE();
    case 249:
      if (eof) ADVANCE(251);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == '+') ADVANCE(404);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(298);
      if (lookahead == '=') ADVANCE(262);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '\\') SKIP(240)
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '~') ADVANCE(403);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(183);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(249)
      END_STATE();
    case 250:
      if (eof) ADVANCE(251);
      if (lookahead == ')') ADVANCE(265);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '=') ADVANCE(262);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == '\\') SKIP(246)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(250)
      END_STATE();
    case 251:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__function_body_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '>') ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '\r') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(383);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(383);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(383);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\r') ADVANCE(386);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '$') ADVANCE(401);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(389);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '$') ADVANCE(402);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 249},
  [3] = {.lex_state = 248},
  [4] = {.lex_state = 248},
  [5] = {.lex_state = 248},
  [6] = {.lex_state = 248},
  [7] = {.lex_state = 248},
  [8] = {.lex_state = 247},
  [9] = {.lex_state = 248},
  [10] = {.lex_state = 249},
  [11] = {.lex_state = 248},
  [12] = {.lex_state = 248},
  [13] = {.lex_state = 248},
  [14] = {.lex_state = 248},
  [15] = {.lex_state = 248},
  [16] = {.lex_state = 248},
  [17] = {.lex_state = 248},
  [18] = {.lex_state = 248},
  [19] = {.lex_state = 248},
  [20] = {.lex_state = 248},
  [21] = {.lex_state = 248},
  [22] = {.lex_state = 248},
  [23] = {.lex_state = 248},
  [24] = {.lex_state = 248},
  [25] = {.lex_state = 249},
  [26] = {.lex_state = 249},
  [27] = {.lex_state = 249},
  [28] = {.lex_state = 249},
  [29] = {.lex_state = 249},
  [30] = {.lex_state = 249},
  [31] = {.lex_state = 249},
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
  [46] = {.lex_state = 249},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 249},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 248},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 248},
  [61] = {.lex_state = 250},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 248},
  [65] = {.lex_state = 250},
  [66] = {.lex_state = 248},
  [67] = {.lex_state = 248},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 248},
  [71] = {.lex_state = 248},
  [72] = {.lex_state = 248},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 249},
  [76] = {.lex_state = 249},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 249},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 249},
  [83] = {.lex_state = 249},
  [84] = {.lex_state = 249},
  [85] = {.lex_state = 250},
  [86] = {.lex_state = 250},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 249},
  [89] = {.lex_state = 249},
  [90] = {.lex_state = 249},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 249},
  [102] = {.lex_state = 249},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
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
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 32},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 250},
  [146] = {.lex_state = 250},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 250},
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
  [191] = {.lex_state = 249},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 249},
  [196] = {.lex_state = 20},
  [197] = {.lex_state = 249},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 249},
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
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 249},
  [214] = {.lex_state = 249},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 249},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 20},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 20},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 381},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 381},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 250},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 20},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 20},
  [252] = {.lex_state = 20},
  [253] = {.lex_state = 20},
  [254] = {.lex_state = 20},
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
    [aux_sym_where_clause_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(250),
    [sym__statement] = STATE(79),
    [sym_create_function_statement] = STATE(125),
    [sym_create_domain_statement] = STATE(125),
    [sym_create_type_statement] = STATE(125),
    [sym_create_index_statement] = STATE(125),
    [sym_create_table_statement] = STATE(125),
    [sym_select_statement] = STATE(125),
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
    ACTIONS(19), 35,
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
      aux_sym_where_clause_token1,
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
  [46] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [91] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 32,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 32,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 32,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [265] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      aux_sym_where_clause_token1,
    ACTIONS(55), 1,
      aux_sym_from_clause_token1,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(31), 1,
      sym__expression,
    STATE(97), 1,
      sym_select_clause,
    STATE(117), 1,
      sym_from_clause,
    STATE(128), 1,
      sym_where_clause,
    ACTIONS(51), 2,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
    STATE(13), 10,
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
  [340] = 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(35), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 29,
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
      aux_sym_where_clause_token1,
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
  [432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 32,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 32,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [518] = 3,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [560] = 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 31,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 31,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [686] = 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [728] = 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [770] = 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [812] = 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [854] = 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [896] = 3,
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
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 31,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 31,
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
      aux_sym_where_clause_token1,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1022] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(131), 20,
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
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1076] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(149), 20,
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
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
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
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
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
  [1172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(155), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 27,
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
      aux_sym_where_clause_token1,
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
  [1216] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(159), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(157), 16,
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
  [1270] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(165), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(163), 11,
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
      aux_sym_from_clause_token1,
  [1319] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      aux_sym_create_index_statement_token1,
    STATE(96), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [1372] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(72), 1,
      sym__expression,
    STATE(212), 1,
      sym_ordered_expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1423] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(64), 1,
      sym__expression,
    STATE(176), 1,
      sym_ordered_expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1474] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1525] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(26), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1573] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(83), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1621] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(78), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1669] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(82), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1717] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(46), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1765] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(55), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1813] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(88), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1861] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(20), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1909] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(67), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [1957] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(76), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2005] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(66), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2053] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(183), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2099] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(70), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2147] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(25), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2195] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(29), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2243] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(27), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2291] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(20), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2339] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(71), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2387] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(28), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2435] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_NULL_token1,
    ACTIONS(59), 1,
      aux_sym_TRUE_token1,
    ACTIONS(61), 1,
      aux_sym_FALSE_token1,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(13), 10,
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
  [2483] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(187), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2528] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(191), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(193), 1,
      aux_sym_column_default_token1,
    ACTIONS(195), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(197), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(199), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(201), 1,
      aux_sym_in_expression_token1,
    ACTIONS(203), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    STATE(62), 1,
      sym_NULL,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(59), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 15,
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
  [2610] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(214), 1,
      aux_sym_column_default_token1,
    ACTIONS(217), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(220), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(223), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(226), 1,
      aux_sym_in_expression_token1,
    ACTIONS(229), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(232), 1,
      aux_sym_NULL_token1,
    STATE(62), 1,
      sym_NULL,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(58), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2655] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(193), 1,
      aux_sym_column_default_token1,
    ACTIONS(195), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(197), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(199), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(201), 1,
      aux_sym_in_expression_token1,
    ACTIONS(203), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    STATE(62), 1,
      sym_NULL,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(58), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2700] = 3,
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
  [2726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(71), 17,
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
  [2752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(237), 17,
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
  [2778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(241), 17,
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
  [2804] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      aux_sym_is_expression_token1,
    ACTIONS(255), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(257), 1,
      aux_sym_boolean_expression_token2,
    STATE(182), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(251), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(261), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(43), 17,
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
  [2876] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(257), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 13,
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
  [2905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 14,
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
  [2932] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym__function_language_token1,
    ACTIONS(269), 1,
      aux_sym__function_body_token1,
    ACTIONS(271), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(265), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(73), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2965] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym__function_language_token1,
    ACTIONS(281), 1,
      aux_sym__function_body_token1,
    ACTIONS(284), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(275), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(69), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2998] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(253), 1,
      aux_sym_is_expression_token1,
    ACTIONS(255), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(257), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(251), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(149), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3035] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(253), 1,
      aux_sym_is_expression_token1,
    ACTIONS(255), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(257), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(251), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(131), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3072] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(253), 1,
      aux_sym_is_expression_token1,
    ACTIONS(255), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(257), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(251), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(261), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3113] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym__function_language_token1,
    ACTIONS(269), 1,
      aux_sym__function_body_token1,
    ACTIONS(290), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(265), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(69), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(288), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(292), 15,
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
  [3170] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3212] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3254] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(201), 1,
      aux_sym_in_expression_token1,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    ACTIONS(302), 1,
      aux_sym_create_index_statement_token1,
    STATE(62), 1,
      sym_NULL,
    STATE(80), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(300), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3290] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3327] = 10,
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
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(81), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(125), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [3364] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(201), 1,
      aux_sym_in_expression_token1,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    ACTIONS(310), 1,
      aux_sym_create_index_statement_token1,
    STATE(62), 1,
      sym_NULL,
    STATE(87), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3397] = 10,
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
      aux_sym_select_statement_token1,
    STATE(81), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(125), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [3434] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3471] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(342), 1,
      aux_sym_on_delete_action_token1,
    STATE(213), 1,
      sym_on_update_action,
    STATE(214), 1,
      sym_on_delete_action,
    ACTIONS(338), 10,
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
  [3539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(348), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
    ACTIONS(344), 12,
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
  [3566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(352), 12,
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
  [3593] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(360), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(363), 1,
      aux_sym_in_expression_token1,
    ACTIONS(366), 1,
      aux_sym_NULL_token1,
    STATE(62), 1,
      sym_NULL,
    STATE(87), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(356), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3626] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_in_expression_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token2,
    ACTIONS(143), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(147), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3662] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(342), 1,
      aux_sym_on_delete_action_token1,
    STATE(191), 1,
      sym_on_delete_action,
    STATE(195), 1,
      sym_on_update_action,
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
  [3690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(342), 1,
      aux_sym_on_delete_action_token1,
    STATE(197), 1,
      sym_on_delete_action,
    STATE(199), 1,
      sym_on_update_action,
    ACTIONS(373), 10,
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
  [3718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(352), 12,
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
  [3739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(163), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [3764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(378), 12,
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
  [3785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(382), 12,
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
  [3806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(386), 12,
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
  [3827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      aux_sym_create_index_statement_token1,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(390), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [3851] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(398), 1,
      aux_sym_where_clause_token1,
    ACTIONS(400), 1,
      aux_sym_from_clause_token1,
    STATE(114), 1,
      sym_from_clause,
    STATE(124), 1,
      sym_where_clause,
    ACTIONS(394), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 10,
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
  [3901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(406), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(408), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(410), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(184), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [3928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(402), 10,
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
  [3947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 11,
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
  [3964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 11,
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
  [3981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(406), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(408), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(410), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(200), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 11,
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
  [4025] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(178), 1,
      sym_constrained_type,
    STATE(146), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(43), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [4047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 10,
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
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 10,
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
  [4079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_where_clause_token1,
    ACTIONS(426), 1,
      aux_sym_create_index_statement_token1,
    STATE(139), 1,
      sym_where_clause,
    ACTIONS(424), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4101] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [4117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_where_clause_token1,
    ACTIONS(432), 1,
      aux_sym_create_index_statement_token1,
    STATE(123), 1,
      sym_where_clause,
    ACTIONS(430), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 10,
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
  [4155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 10,
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
  [4171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_where_clause_token1,
    ACTIONS(440), 1,
      aux_sym_create_index_statement_token1,
    STATE(129), 1,
      sym_where_clause,
    ACTIONS(438), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_where_clause_token1,
    ACTIONS(444), 1,
      aux_sym_create_index_statement_token1,
    STATE(127), 1,
      sym_where_clause,
    ACTIONS(442), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_where_clause_token1,
    ACTIONS(448), 1,
      aux_sym_create_index_statement_token1,
    STATE(130), 1,
      sym_where_clause,
    ACTIONS(446), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [4253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(398), 1,
      aux_sym_where_clause_token1,
    STATE(124), 1,
      sym_where_clause,
    ACTIONS(394), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [4292] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    ACTIONS(456), 1,
      aux_sym_in_expression_token1,
    ACTIONS(458), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(460), 1,
      aux_sym_TRUE_token1,
    ACTIONS(462), 1,
      aux_sym_FALSE_token1,
    STATE(19), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym__function_body_token1,
    ACTIONS(468), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(464), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4336] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    ACTIONS(460), 1,
      aux_sym_TRUE_token1,
    ACTIONS(462), 1,
      aux_sym_FALSE_token1,
    ACTIONS(470), 1,
      aux_sym_in_expression_token1,
    ACTIONS(472), 1,
      aux_sym_distinct_from_token1,
    STATE(19), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [4378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(424), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(442), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_SEMI,
    ACTIONS(482), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(478), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    ACTIONS(458), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(460), 1,
      aux_sym_TRUE_token1,
    ACTIONS(462), 1,
      aux_sym_FALSE_token1,
    STATE(16), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(484), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(394), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(488), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(438), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(492), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    ACTIONS(460), 1,
      aux_sym_TRUE_token1,
    ACTIONS(462), 1,
      aux_sym_FALSE_token1,
    ACTIONS(472), 1,
      aux_sym_distinct_from_token1,
    STATE(16), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(496), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4568] = 3,
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
  [4584] = 3,
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
  [4600] = 3,
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
  [4616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(512), 1,
      aux_sym_setof_token1,
    STATE(68), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(85), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(514), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(518), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4668] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(106), 1,
      sym_type_cast,
    STATE(100), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [4692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(524), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_identifier,
    STATE(155), 1,
      sym_constrained_type,
    STATE(207), 1,
      sym_create_function_parameter,
    STATE(145), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4725] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_identifier,
    STATE(155), 1,
      sym_constrained_type,
    STATE(163), 1,
      sym_create_function_parameter,
    STATE(145), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(91), 1,
      sym_constrained_type,
    STATE(86), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4758] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_EQ,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4775] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
    ACTIONS(536), 1,
      anon_sym_EQ,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      aux_sym_using_clause_token1,
    STATE(110), 1,
      sym_index_table_parameters,
    STATE(189), 1,
      sym_using_clause,
  [4808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(3), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      aux_sym_using_clause_token1,
    STATE(115), 1,
      sym_index_table_parameters,
    STATE(211), 1,
      sym_using_clause,
  [4836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(102), 1,
      sym__constraint_action,
    ACTIONS(546), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [4848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(77), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(101), 1,
      sym__constraint_action,
    ACTIONS(548), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [4872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(56), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(160), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_EQ,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(556), 1,
      aux_sym_create_index_statement_token2,
    STATE(246), 1,
      sym_unique_constraint,
  [4946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(18), 1,
      sym_string,
  [4959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
    ACTIONS(558), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(18), 1,
      sym_string,
  [4983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_create_function_parameters_repeat1,
  [5009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(93), 1,
      sym_string,
  [5022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_create_table_parameters_repeat1,
  [5035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_parameters_repeat1,
  [5048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [5074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_index_table_parameters_repeat1,
  [5087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_create_function_parameters_repeat1,
  [5113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_parameters_repeat1,
  [5139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_parameters_repeat1,
  [5165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_index_table_parameters_repeat1,
  [5178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_EQ,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [5215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_create_table_parameters_repeat1,
  [5228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_index_table_parameters_repeat1,
  [5254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_create_function_parameters_repeat1,
  [5267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_create_table_parameters_repeat1,
  [5280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym_create_function_parameters,
  [5306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_create_table_parameters,
  [5316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_index_table_parameters,
  [5326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_parameters,
  [5336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_on_update_action_token1,
    STATE(112), 1,
      sym_on_update_action,
  [5346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_references_constraint_token1,
    STATE(185), 1,
      sym_references_constraint,
  [5356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_on_delete_action_token1,
    STATE(112), 1,
      sym_on_delete_action,
  [5382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(205), 1,
      sym_parameter,
  [5392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_on_update_action_token1,
    STATE(116), 1,
      sym_on_update_action,
  [5402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_NULL_token1,
    STATE(63), 1,
      sym_NULL,
  [5412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_on_delete_action_token1,
    STATE(116), 1,
      sym_on_delete_action,
  [5422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_tuple,
  [5448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_tuple,
  [5458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_references_constraint_token1,
    STATE(186), 1,
      sym_references_constraint,
  [5484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(173), 1,
      sym_parameter,
  [5518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_index_table_parameters,
  [5528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_on_delete_action_token1,
    STATE(107), 1,
      sym_on_delete_action,
  [5546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_on_update_action_token1,
    STATE(107), 1,
      sym_on_update_action,
  [5556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
  [5563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      aux_sym_create_index_statement_token3,
  [5570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_identifier,
  [5577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
  [5584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym_identifier,
  [5591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
  [5598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
  [5605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      aux_sym_create_function_statement_token2,
  [5612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
  [5619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_in_expression_token2,
  [5626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_DOLLAR_DOLLAR,
  [5633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      aux_sym_create_function_statement_token2,
  [5640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACK,
  [5647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_identifier,
  [5654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
  [5661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_identifier,
  [5668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym_identifier,
  [5675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_identifier,
  [5682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym_identifier,
  [5689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym_create_index_statement_token3,
  [5696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
  [5703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      aux_sym_create_function_statement_token2,
  [5710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_SQUOTE,
  [5717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_DOLLAR_DOLLAR,
  [5724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
  [5731] = 2,
    ACTIONS(689), 1,
      aux_sym_string_token1,
    ACTIONS(691), 1,
      sym_comment,
  [5738] = 2,
    ACTIONS(691), 1,
      sym_comment,
    ACTIONS(693), 1,
      aux_sym_string_token2,
  [5745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_identifier,
  [5752] = 2,
    ACTIONS(691), 1,
      sym_comment,
    ACTIONS(697), 1,
      aux_sym_string_token2,
  [5759] = 2,
    ACTIONS(691), 1,
      sym_comment,
    ACTIONS(699), 1,
      aux_sym_string_token1,
  [5766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
  [5773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      aux_sym_create_index_statement_token2,
  [5780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_identifier,
  [5787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym__function_body_token1,
  [5794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_identifier,
  [5801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
  [5808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_identifier,
  [5815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_identifier,
  [5822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 91,
  [SMALL_STATE(5)] = 134,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 222,
  [SMALL_STATE(8)] = 265,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 383,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 475,
  [SMALL_STATE(13)] = 518,
  [SMALL_STATE(14)] = 560,
  [SMALL_STATE(15)] = 602,
  [SMALL_STATE(16)] = 644,
  [SMALL_STATE(17)] = 686,
  [SMALL_STATE(18)] = 728,
  [SMALL_STATE(19)] = 770,
  [SMALL_STATE(20)] = 812,
  [SMALL_STATE(21)] = 854,
  [SMALL_STATE(22)] = 896,
  [SMALL_STATE(23)] = 938,
  [SMALL_STATE(24)] = 980,
  [SMALL_STATE(25)] = 1022,
  [SMALL_STATE(26)] = 1076,
  [SMALL_STATE(27)] = 1130,
  [SMALL_STATE(28)] = 1172,
  [SMALL_STATE(29)] = 1216,
  [SMALL_STATE(30)] = 1270,
  [SMALL_STATE(31)] = 1319,
  [SMALL_STATE(32)] = 1372,
  [SMALL_STATE(33)] = 1423,
  [SMALL_STATE(34)] = 1474,
  [SMALL_STATE(35)] = 1525,
  [SMALL_STATE(36)] = 1573,
  [SMALL_STATE(37)] = 1621,
  [SMALL_STATE(38)] = 1669,
  [SMALL_STATE(39)] = 1717,
  [SMALL_STATE(40)] = 1765,
  [SMALL_STATE(41)] = 1813,
  [SMALL_STATE(42)] = 1861,
  [SMALL_STATE(43)] = 1909,
  [SMALL_STATE(44)] = 1957,
  [SMALL_STATE(45)] = 2005,
  [SMALL_STATE(46)] = 2053,
  [SMALL_STATE(47)] = 2099,
  [SMALL_STATE(48)] = 2147,
  [SMALL_STATE(49)] = 2195,
  [SMALL_STATE(50)] = 2243,
  [SMALL_STATE(51)] = 2291,
  [SMALL_STATE(52)] = 2339,
  [SMALL_STATE(53)] = 2387,
  [SMALL_STATE(54)] = 2435,
  [SMALL_STATE(55)] = 2483,
  [SMALL_STATE(56)] = 2528,
  [SMALL_STATE(57)] = 2576,
  [SMALL_STATE(58)] = 2610,
  [SMALL_STATE(59)] = 2655,
  [SMALL_STATE(60)] = 2700,
  [SMALL_STATE(61)] = 2726,
  [SMALL_STATE(62)] = 2752,
  [SMALL_STATE(63)] = 2778,
  [SMALL_STATE(64)] = 2804,
  [SMALL_STATE(65)] = 2850,
  [SMALL_STATE(66)] = 2876,
  [SMALL_STATE(67)] = 2905,
  [SMALL_STATE(68)] = 2932,
  [SMALL_STATE(69)] = 2965,
  [SMALL_STATE(70)] = 2998,
  [SMALL_STATE(71)] = 3035,
  [SMALL_STATE(72)] = 3072,
  [SMALL_STATE(73)] = 3113,
  [SMALL_STATE(74)] = 3146,
  [SMALL_STATE(75)] = 3170,
  [SMALL_STATE(76)] = 3212,
  [SMALL_STATE(77)] = 3254,
  [SMALL_STATE(78)] = 3290,
  [SMALL_STATE(79)] = 3327,
  [SMALL_STATE(80)] = 3364,
  [SMALL_STATE(81)] = 3397,
  [SMALL_STATE(82)] = 3434,
  [SMALL_STATE(83)] = 3471,
  [SMALL_STATE(84)] = 3508,
  [SMALL_STATE(85)] = 3539,
  [SMALL_STATE(86)] = 3566,
  [SMALL_STATE(87)] = 3593,
  [SMALL_STATE(88)] = 3626,
  [SMALL_STATE(89)] = 3662,
  [SMALL_STATE(90)] = 3690,
  [SMALL_STATE(91)] = 3718,
  [SMALL_STATE(92)] = 3739,
  [SMALL_STATE(93)] = 3764,
  [SMALL_STATE(94)] = 3785,
  [SMALL_STATE(95)] = 3806,
  [SMALL_STATE(96)] = 3827,
  [SMALL_STATE(97)] = 3851,
  [SMALL_STATE(98)] = 3879,
  [SMALL_STATE(99)] = 3901,
  [SMALL_STATE(100)] = 3928,
  [SMALL_STATE(101)] = 3947,
  [SMALL_STATE(102)] = 3964,
  [SMALL_STATE(103)] = 3981,
  [SMALL_STATE(104)] = 4008,
  [SMALL_STATE(105)] = 4025,
  [SMALL_STATE(106)] = 4047,
  [SMALL_STATE(107)] = 4063,
  [SMALL_STATE(108)] = 4079,
  [SMALL_STATE(109)] = 4101,
  [SMALL_STATE(110)] = 4117,
  [SMALL_STATE(111)] = 4139,
  [SMALL_STATE(112)] = 4155,
  [SMALL_STATE(113)] = 4171,
  [SMALL_STATE(114)] = 4193,
  [SMALL_STATE(115)] = 4215,
  [SMALL_STATE(116)] = 4237,
  [SMALL_STATE(117)] = 4253,
  [SMALL_STATE(118)] = 4275,
  [SMALL_STATE(119)] = 4292,
  [SMALL_STATE(120)] = 4317,
  [SMALL_STATE(121)] = 4336,
  [SMALL_STATE(122)] = 4361,
  [SMALL_STATE(123)] = 4378,
  [SMALL_STATE(124)] = 4394,
  [SMALL_STATE(125)] = 4410,
  [SMALL_STATE(126)] = 4428,
  [SMALL_STATE(127)] = 4450,
  [SMALL_STATE(128)] = 4466,
  [SMALL_STATE(129)] = 4482,
  [SMALL_STATE(130)] = 4498,
  [SMALL_STATE(131)] = 4514,
  [SMALL_STATE(132)] = 4530,
  [SMALL_STATE(133)] = 4552,
  [SMALL_STATE(134)] = 4568,
  [SMALL_STATE(135)] = 4584,
  [SMALL_STATE(136)] = 4600,
  [SMALL_STATE(137)] = 4616,
  [SMALL_STATE(138)] = 4636,
  [SMALL_STATE(139)] = 4652,
  [SMALL_STATE(140)] = 4668,
  [SMALL_STATE(141)] = 4692,
  [SMALL_STATE(142)] = 4707,
  [SMALL_STATE(143)] = 4725,
  [SMALL_STATE(144)] = 4743,
  [SMALL_STATE(145)] = 4758,
  [SMALL_STATE(146)] = 4775,
  [SMALL_STATE(147)] = 4792,
  [SMALL_STATE(148)] = 4808,
  [SMALL_STATE(149)] = 4820,
  [SMALL_STATE(150)] = 4836,
  [SMALL_STATE(151)] = 4848,
  [SMALL_STATE(152)] = 4860,
  [SMALL_STATE(153)] = 4872,
  [SMALL_STATE(154)] = 4884,
  [SMALL_STATE(155)] = 4896,
  [SMALL_STATE(156)] = 4907,
  [SMALL_STATE(157)] = 4920,
  [SMALL_STATE(158)] = 4933,
  [SMALL_STATE(159)] = 4946,
  [SMALL_STATE(160)] = 4959,
  [SMALL_STATE(161)] = 4970,
  [SMALL_STATE(162)] = 4983,
  [SMALL_STATE(163)] = 4996,
  [SMALL_STATE(164)] = 5009,
  [SMALL_STATE(165)] = 5022,
  [SMALL_STATE(166)] = 5035,
  [SMALL_STATE(167)] = 5048,
  [SMALL_STATE(168)] = 5061,
  [SMALL_STATE(169)] = 5074,
  [SMALL_STATE(170)] = 5087,
  [SMALL_STATE(171)] = 5100,
  [SMALL_STATE(172)] = 5113,
  [SMALL_STATE(173)] = 5126,
  [SMALL_STATE(174)] = 5139,
  [SMALL_STATE(175)] = 5152,
  [SMALL_STATE(176)] = 5165,
  [SMALL_STATE(177)] = 5178,
  [SMALL_STATE(178)] = 5191,
  [SMALL_STATE(179)] = 5202,
  [SMALL_STATE(180)] = 5215,
  [SMALL_STATE(181)] = 5228,
  [SMALL_STATE(182)] = 5241,
  [SMALL_STATE(183)] = 5254,
  [SMALL_STATE(184)] = 5267,
  [SMALL_STATE(185)] = 5280,
  [SMALL_STATE(186)] = 5288,
  [SMALL_STATE(187)] = 5296,
  [SMALL_STATE(188)] = 5306,
  [SMALL_STATE(189)] = 5316,
  [SMALL_STATE(190)] = 5326,
  [SMALL_STATE(191)] = 5336,
  [SMALL_STATE(192)] = 5346,
  [SMALL_STATE(193)] = 5356,
  [SMALL_STATE(194)] = 5364,
  [SMALL_STATE(195)] = 5372,
  [SMALL_STATE(196)] = 5382,
  [SMALL_STATE(197)] = 5392,
  [SMALL_STATE(198)] = 5402,
  [SMALL_STATE(199)] = 5412,
  [SMALL_STATE(200)] = 5422,
  [SMALL_STATE(201)] = 5430,
  [SMALL_STATE(202)] = 5438,
  [SMALL_STATE(203)] = 5448,
  [SMALL_STATE(204)] = 5458,
  [SMALL_STATE(205)] = 5466,
  [SMALL_STATE(206)] = 5474,
  [SMALL_STATE(207)] = 5484,
  [SMALL_STATE(208)] = 5492,
  [SMALL_STATE(209)] = 5500,
  [SMALL_STATE(210)] = 5508,
  [SMALL_STATE(211)] = 5518,
  [SMALL_STATE(212)] = 5528,
  [SMALL_STATE(213)] = 5536,
  [SMALL_STATE(214)] = 5546,
  [SMALL_STATE(215)] = 5556,
  [SMALL_STATE(216)] = 5563,
  [SMALL_STATE(217)] = 5570,
  [SMALL_STATE(218)] = 5577,
  [SMALL_STATE(219)] = 5584,
  [SMALL_STATE(220)] = 5591,
  [SMALL_STATE(221)] = 5598,
  [SMALL_STATE(222)] = 5605,
  [SMALL_STATE(223)] = 5612,
  [SMALL_STATE(224)] = 5619,
  [SMALL_STATE(225)] = 5626,
  [SMALL_STATE(226)] = 5633,
  [SMALL_STATE(227)] = 5640,
  [SMALL_STATE(228)] = 5647,
  [SMALL_STATE(229)] = 5654,
  [SMALL_STATE(230)] = 5661,
  [SMALL_STATE(231)] = 5668,
  [SMALL_STATE(232)] = 5675,
  [SMALL_STATE(233)] = 5682,
  [SMALL_STATE(234)] = 5689,
  [SMALL_STATE(235)] = 5696,
  [SMALL_STATE(236)] = 5703,
  [SMALL_STATE(237)] = 5710,
  [SMALL_STATE(238)] = 5717,
  [SMALL_STATE(239)] = 5724,
  [SMALL_STATE(240)] = 5731,
  [SMALL_STATE(241)] = 5738,
  [SMALL_STATE(242)] = 5745,
  [SMALL_STATE(243)] = 5752,
  [SMALL_STATE(244)] = 5759,
  [SMALL_STATE(245)] = 5766,
  [SMALL_STATE(246)] = 5773,
  [SMALL_STATE(247)] = 5780,
  [SMALL_STATE(248)] = 5787,
  [SMALL_STATE(249)] = 5794,
  [SMALL_STATE(250)] = 5801,
  [SMALL_STATE(251)] = 5808,
  [SMALL_STATE(252)] = 5815,
  [SMALL_STATE(253)] = 5822,
  [SMALL_STATE(254)] = 5829,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(220),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(140),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(49),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(104),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(111),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(198),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(242),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(21),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(94),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(252),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(164),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(49),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(198),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(21),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(54),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 20),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 20),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(103),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(32),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(232),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(142),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(196),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 19),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 16),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [711] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
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
