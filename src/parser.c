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
#define STATE_COUNT 295
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
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
  sym__aliased_expression = 95,
  sym__aliasable_expression = 96,
  sym_select_clause = 97,
  sym_from_clause = 98,
  sym_in_expression = 99,
  sym_tuple = 100,
  sym_references_constraint = 101,
  sym_on_update_action = 102,
  sym_on_delete_action = 103,
  sym__constraint_action = 104,
  sym_unique_constraint = 105,
  sym_null_constraint = 106,
  sym_check_constraint = 107,
  sym_parameter = 108,
  sym_parameters = 109,
  sym_function_call = 110,
  sym_comparison_operator = 111,
  sym__parenthesized_expression = 112,
  sym_is_expression = 113,
  sym_distinct_from = 114,
  sym_boolean_expression = 115,
  sym_NULL = 116,
  sym_TRUE = 117,
  sym_FALSE = 118,
  sym_string = 119,
  sym_field_access = 120,
  sym_ordered_expression = 121,
  sym__type_alias = 122,
  sym_array_type = 123,
  sym__type = 124,
  sym_type_cast = 125,
  sym_binary_expression = 126,
  sym__expression = 127,
  aux_sym_source_file_repeat1 = 128,
  aux_sym_create_function_statement_repeat1 = 129,
  aux_sym_create_function_parameters_repeat1 = 130,
  aux_sym_create_domain_statement_repeat1 = 131,
  aux_sym_create_table_column_parameter_repeat1 = 132,
  aux_sym_create_table_parameters_repeat1 = 133,
  aux_sym_table_constraint_foreign_key_repeat1 = 134,
  aux_sym_index_table_parameters_repeat1 = 135,
  aux_sym_select_clause_repeat1 = 136,
  aux_sym_tuple_repeat1 = 137,
  aux_sym_parameters_repeat1 = 138,
  anon_alias_sym_NOT = 139,
  alias_sym_default = 140,
  alias_sym_function_body = 141,
  alias_sym_language = 142,
  alias_sym_type = 143,
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
  [sym__aliased_expression] = "alias",
  [sym__aliasable_expression] = "_aliasable_expression",
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
  [aux_sym_select_clause_repeat1] = "select_clause_repeat1",
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
  [sym__aliased_expression] = sym__aliased_expression,
  [sym__aliasable_expression] = sym__aliasable_expression,
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
  [aux_sym_select_clause_repeat1] = aux_sym_select_clause_repeat1,
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
  [sym__aliased_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__aliasable_expression] = {
    .visible = false,
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
  [aux_sym_select_clause_repeat1] = {
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
      if (eof) ADVANCE(252);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '+') ADVANCE(405);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(299);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '>') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') SKIP(242)
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == '~') ADVANCE(404);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(21)
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
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(35)
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
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(320);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(385);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(390);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '+') ADVANCE(405);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '<') ADVANCE(299);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '>') ADVANCE(302);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '~') ADVANCE(404);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(403);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(356);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(358);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(352);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(400);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(395);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(274);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(235);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 115:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      END_STATE();
    case 116:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 117:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 118:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 119:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 122:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 123:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 124:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 126:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 127:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(276);
      END_STATE();
    case 138:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(100);
      END_STATE();
    case 139:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(103);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 159:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 161:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 162:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 163:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(267);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 191:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 192:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 193:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(232);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 206:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(267);
      END_STATE();
    case 207:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 208:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      END_STATE();
    case 209:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 210:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      END_STATE();
    case 211:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 212:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 227:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 228:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 229:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 230:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 231:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 232:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 233:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 234:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 235:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 236:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(272);
      END_STATE();
    case 237:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 238:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 239:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 240:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(392);
      END_STATE();
    case 241:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 242:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(241)
      END_STATE();
    case 243:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(250)
      END_STATE();
    case 244:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(250)
      if (lookahead == '\r') SKIP(243)
      END_STATE();
    case 245:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(249)
      END_STATE();
    case 246:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(249)
      if (lookahead == '\r') SKIP(245)
      END_STATE();
    case 247:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(251)
      END_STATE();
    case 248:
      if (eof) ADVANCE(252);
      if (lookahead == '\n') SKIP(251)
      if (lookahead == '\r') SKIP(247)
      END_STATE();
    case 249:
      if (eof) ADVANCE(252);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '\\') SKIP(246)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(249)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 250:
      if (eof) ADVANCE(252);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '+') ADVANCE(405);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(299);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '>') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') SKIP(244)
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == '~') ADVANCE(404);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(186);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
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
      if (eof) ADVANCE(252);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') SKIP(248)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(251)
      END_STATE();
    case 252:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__function_body_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_NULL_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(182);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '\r') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(384);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(384);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(384);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(384);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '\r') ADVANCE(387);
      if (lookahead == '$') ADVANCE(240);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '$') ADVANCE(240);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead == '$') ADVANCE(402);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(390);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(240);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead == '$') ADVANCE(403);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 250},
  [3] = {.lex_state = 249},
  [4] = {.lex_state = 250},
  [5] = {.lex_state = 250},
  [6] = {.lex_state = 250},
  [7] = {.lex_state = 250},
  [8] = {.lex_state = 250},
  [9] = {.lex_state = 250},
  [10] = {.lex_state = 250},
  [11] = {.lex_state = 250},
  [12] = {.lex_state = 250},
  [13] = {.lex_state = 250},
  [14] = {.lex_state = 250},
  [15] = {.lex_state = 250},
  [16] = {.lex_state = 250},
  [17] = {.lex_state = 250},
  [18] = {.lex_state = 250},
  [19] = {.lex_state = 250},
  [20] = {.lex_state = 250},
  [21] = {.lex_state = 250},
  [22] = {.lex_state = 250},
  [23] = {.lex_state = 250},
  [24] = {.lex_state = 250},
  [25] = {.lex_state = 250},
  [26] = {.lex_state = 250},
  [27] = {.lex_state = 250},
  [28] = {.lex_state = 250},
  [29] = {.lex_state = 250},
  [30] = {.lex_state = 250},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 250},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 251},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 251},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 26},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 26},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 26},
  [86] = {.lex_state = 26},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 26},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 250},
  [97] = {.lex_state = 250},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 250},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 250},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 250},
  [104] = {.lex_state = 251},
  [105] = {.lex_state = 250},
  [106] = {.lex_state = 250},
  [107] = {.lex_state = 250},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 250},
  [112] = {.lex_state = 251},
  [113] = {.lex_state = 250},
  [114] = {.lex_state = 250},
  [115] = {.lex_state = 250},
  [116] = {.lex_state = 250},
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
  [127] = {.lex_state = 34},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 250},
  [133] = {.lex_state = 250},
  [134] = {.lex_state = 28},
  [135] = {.lex_state = 34},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 27},
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
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 22},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 251},
  [177] = {.lex_state = 251},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 22},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 22},
  [186] = {.lex_state = 22},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 251},
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
  [220] = {.lex_state = 250},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 250},
  [227] = {.lex_state = 250},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 22},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 250},
  [235] = {.lex_state = 250},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 250},
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
  [249] = {.lex_state = 22},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 22},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 22},
  [257] = {.lex_state = 22},
  [258] = {.lex_state = 22},
  [259] = {.lex_state = 22},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 250},
  [263] = {.lex_state = 22},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 22},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 22},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 25},
  [272] = {.lex_state = 382},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 251},
  [275] = {.lex_state = 22},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 22},
  [278] = {.lex_state = 22},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 22},
  [283] = {.lex_state = 22},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 22},
  [287] = {.lex_state = 22},
  [288] = {.lex_state = 22},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 22},
  [291] = {.lex_state = 382},
  [292] = {.lex_state = 25},
  [293] = {.lex_state = 250},
  [294] = {.lex_state = 22},
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
    [sym_source_file] = STATE(279),
    [sym__statement] = STATE(102),
    [sym_create_function_statement] = STATE(166),
    [sym_create_domain_statement] = STATE(166),
    [sym_create_type_statement] = STATE(166),
    [sym_create_index_statement] = STATE(166),
    [sym_create_table_statement] = STATE(166),
    [sym_select_statement] = STATE(166),
    [aux_sym_source_file_repeat1] = STATE(102),
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
  [46] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_where_clause_token1,
    ACTIONS(31), 1,
      aux_sym_from_clause_token1,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(123), 1,
      sym_select_clause,
    STATE(140), 1,
      sym_from_clause,
    STATE(155), 1,
      sym_where_clause,
    ACTIONS(27), 2,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
    STATE(121), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
    STATE(26), 10,
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
  [125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 3,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 31,
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
  [217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 30,
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
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 31,
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
  [303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 31,
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
  [345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
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
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 31,
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
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 3,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [473] = 3,
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
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [515] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(89), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 28,
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
  [560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 29,
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
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 30,
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
  [644] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 21,
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
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [699] = 3,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [740] = 3,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [781] = 3,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 30,
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
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 30,
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
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 30,
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
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 30,
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
  [986] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1027] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 30,
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
  [1150] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(155), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(153), 21,
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
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_references_constraint_token1,
      aux_sym_NULL_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1205] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(159), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
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
  [1259] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(165), 1,
      aux_sym__function_body_token1,
    ACTIONS(167), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(163), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [1310] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(129), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [1362] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(131), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [1414] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [1465] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_NULL_token1,
    ACTIONS(175), 1,
      aux_sym_TRUE_token1,
    ACTIONS(177), 1,
      aux_sym_FALSE_token1,
    ACTIONS(179), 1,
      sym_number,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(63), 1,
      sym__expression,
    STATE(199), 1,
      sym_ordered_expression,
    STATE(64), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(91), 10,
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
  [1516] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [1567] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_NULL_token1,
    ACTIONS(175), 1,
      aux_sym_TRUE_token1,
    ACTIONS(177), 1,
      aux_sym_FALSE_token1,
    ACTIONS(179), 1,
      sym_number,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(88), 1,
      sym__expression,
    STATE(228), 1,
      sym_ordered_expression,
    STATE(64), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(91), 10,
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
  [1618] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(101), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [1666] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(57), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [1714] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_NULL_token1,
    ACTIONS(175), 1,
      aux_sym_TRUE_token1,
    ACTIONS(177), 1,
      aux_sym_FALSE_token1,
    ACTIONS(179), 1,
      sym_number,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(89), 1,
      sym__expression,
    STATE(64), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(91), 10,
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
  [1762] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_NULL_token1,
    ACTIONS(175), 1,
      aux_sym_TRUE_token1,
    ACTIONS(177), 1,
      aux_sym_FALSE_token1,
    ACTIONS(179), 1,
      sym_number,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(87), 1,
      sym__expression,
    STATE(64), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(91), 10,
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
  [1810] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(96), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [1858] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_NULL_token1,
    ACTIONS(175), 1,
      aux_sym_TRUE_token1,
    ACTIONS(177), 1,
      aux_sym_FALSE_token1,
    ACTIONS(179), 1,
      sym_number,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(79), 1,
      sym__expression,
    STATE(64), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(91), 10,
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
  [1906] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(105), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [1954] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(16), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2002] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(114), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2050] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(27), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2098] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(29), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2146] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(14), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2194] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(28), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2242] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(111), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2290] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_NULL_token1,
    ACTIONS(175), 1,
      aux_sym_TRUE_token1,
    ACTIONS(177), 1,
      aux_sym_FALSE_token1,
    ACTIONS(179), 1,
      sym_number,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(78), 1,
      sym__expression,
    STATE(64), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(91), 10,
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
  [2338] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_NULL_token1,
    ACTIONS(175), 1,
      aux_sym_TRUE_token1,
    ACTIONS(177), 1,
      aux_sym_FALSE_token1,
    ACTIONS(179), 1,
      sym_number,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(93), 1,
      sym__expression,
    STATE(64), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(91), 10,
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
  [2386] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(103), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2434] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(107), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2482] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(116), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2530] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_NULL_token1,
    ACTIONS(35), 1,
      aux_sym_TRUE_token1,
    ACTIONS(37), 1,
      aux_sym_FALSE_token1,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(13), 1,
      sym__expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(26), 10,
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
  [2578] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(191), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(197), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 15,
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
  [2657] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
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
    STATE(65), 1,
      sym_NULL,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(61), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2705] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(222), 1,
      aux_sym_column_default_token1,
    ACTIONS(225), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(228), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(231), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(234), 1,
      aux_sym_in_expression_token1,
    ACTIONS(237), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(240), 1,
      aux_sym_NULL_token1,
    STATE(65), 1,
      sym_NULL,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(60), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2750] = 12,
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
    STATE(65), 1,
      sym_NULL,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(60), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2795] = 3,
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
  [2821] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      aux_sym_in_expression_token1,
    ACTIONS(253), 1,
      aux_sym_in_expression_token2,
    ACTIONS(257), 1,
      aux_sym_is_expression_token1,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    STATE(206), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(265), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 15,
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
  [2895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(267), 17,
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
  [2921] = 3,
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
  [2947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 16,
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
  [2973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(271), 17,
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
  [2999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(79), 17,
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
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 16,
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
  [3051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(83), 17,
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
  [3077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 16,
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
  [3103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 16,
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
  [3129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 15,
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
  [3157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 16,
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
  [3183] = 3,
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
  [3208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 15,
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
  [3233] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_in_expression_token1,
    ACTIONS(253), 1,
      aux_sym_in_expression_token2,
    ACTIONS(257), 1,
      aux_sym_is_expression_token1,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(153), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3270] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_in_expression_token1,
    ACTIONS(253), 1,
      aux_sym_in_expression_token2,
    ACTIONS(257), 1,
      aux_sym_is_expression_token1,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3307] = 3,
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
  [3332] = 3,
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
  [3357] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym__function_language_token1,
    ACTIONS(285), 1,
      aux_sym__function_body_token1,
    ACTIONS(288), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(279), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(82), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3390] = 3,
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
  [3415] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__function_language_token1,
    ACTIONS(296), 1,
      aux_sym__function_body_token1,
    ACTIONS(298), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(292), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(82), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(290), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 15,
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
  [3473] = 3,
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
  [3498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 14,
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
  [3525] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_in_expression_token1,
    ACTIONS(253), 1,
      aux_sym_in_expression_token2,
    ACTIONS(257), 1,
      aux_sym_is_expression_token1,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(265), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 13,
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
  [3595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__function_language_token1,
    ACTIONS(296), 1,
      aux_sym__function_body_token1,
    ACTIONS(304), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(292), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(84), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 15,
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
  [3653] = 3,
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
  [3678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 15,
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
  [3703] = 3,
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
  [3728] = 3,
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
  [3753] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3795] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3837] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(211), 1,
      aux_sym_in_expression_token1,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    ACTIONS(314), 1,
      aux_sym_create_index_statement_token1,
    STATE(65), 1,
      sym_NULL,
    STATE(110), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(312), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3873] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(318), 15,
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
  [3939] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3981] = 10,
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
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(108), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(166), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [4018] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(332), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 12,
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
  [4082] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4119] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(344), 1,
      aux_sym_on_delete_action_token1,
    STATE(226), 1,
      sym_on_update_action,
    STATE(227), 1,
      sym_on_delete_action,
    ACTIONS(340), 10,
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
  [4150] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4187] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(353), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(356), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(359), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(362), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(365), 1,
      aux_sym_select_statement_token1,
    STATE(108), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(166), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [4224] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(372), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(375), 1,
      aux_sym_in_expression_token1,
    ACTIONS(378), 1,
      aux_sym_NULL_token1,
    STATE(65), 1,
      sym_NULL,
    STATE(109), 3,
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
      aux_sym_select_statement_token1,
  [4257] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(211), 1,
      aux_sym_in_expression_token1,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    ACTIONS(383), 1,
      aux_sym_create_index_statement_token1,
    STATE(65), 1,
      sym_NULL,
    STATE(109), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4290] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(387), 12,
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
  [4354] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(344), 1,
      aux_sym_on_delete_action_token1,
    STATE(234), 1,
      sym_on_update_action,
    STATE(235), 1,
      sym_on_delete_action,
    ACTIONS(391), 10,
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
  [4382] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(344), 1,
      aux_sym_on_delete_action_token1,
    STATE(220), 1,
      sym_on_delete_action,
    STATE(238), 1,
      sym_on_update_action,
    ACTIONS(395), 10,
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
  [4446] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [4482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(328), 12,
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
  [4503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(399), 12,
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
  [4524] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_select_statement_token1,
  [4545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(407), 12,
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
  [4566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      aux_sym_create_index_statement_token1,
    STATE(122), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(411), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [4590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      aux_sym_create_index_statement_token1,
    STATE(125), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(417), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [4614] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(425), 1,
      aux_sym_where_clause_token1,
    ACTIONS(427), 1,
      aux_sym_from_clause_token1,
    STATE(137), 1,
      sym_from_clause,
    STATE(167), 1,
      sym_where_clause,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
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
  [4664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      aux_sym_create_index_statement_token1,
    STATE(125), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [4688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
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
  [4707] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(440), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(442), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(444), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(446), 1,
      sym_identifier,
    STATE(247), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [4734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(448), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [4753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(431), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
  [4772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      aux_sym_create_index_statement_token1,
    STATE(125), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [4795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      aux_sym_create_index_statement_token1,
    STATE(130), 1,
      aux_sym_select_clause_repeat1,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [4818] = 2,
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
  [4835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 11,
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
  [4852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 11,
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
  [4869] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(440), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(442), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(444), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(446), 1,
      sym_identifier,
    STATE(205), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [4896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 10,
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
  [4912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_where_clause_token1,
    ACTIONS(470), 1,
      aux_sym_create_index_statement_token1,
    STATE(160), 1,
      sym_where_clause,
    ACTIONS(468), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4934] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [4950] = 2,
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
  [4966] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(425), 1,
      aux_sym_where_clause_token1,
    STATE(167), 1,
      sym_where_clause,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 10,
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
  [5004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_where_clause_token1,
    ACTIONS(478), 1,
      aux_sym_create_index_statement_token1,
    STATE(154), 1,
      sym_where_clause,
    ACTIONS(476), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_where_clause_token1,
    ACTIONS(482), 1,
      aux_sym_create_index_statement_token1,
    STATE(162), 1,
      sym_where_clause,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 10,
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
  [5064] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(207), 1,
      sym_constrained_type,
    STATE(176), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(79), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [5086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 10,
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
  [5102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_where_clause_token1,
    ACTIONS(492), 1,
      aux_sym_create_index_statement_token1,
    STATE(163), 1,
      sym_where_clause,
    ACTIONS(490), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_where_clause_token1,
    ACTIONS(496), 1,
      aux_sym_create_index_statement_token1,
    STATE(158), 1,
      sym_where_clause,
    ACTIONS(494), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym__function_body_token1,
    ACTIONS(502), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(498), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    ACTIONS(504), 1,
      aux_sym_in_expression_token1,
    ACTIONS(506), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(508), 1,
      aux_sym_TRUE_token1,
    ACTIONS(510), 1,
      aux_sym_FALSE_token1,
    STATE(22), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [5190] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_in_expression_token1,
    ACTIONS(514), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(516), 1,
      aux_sym_NULL_token1,
    ACTIONS(518), 1,
      aux_sym_TRUE_token1,
    ACTIONS(520), 1,
      aux_sym_FALSE_token1,
    STATE(76), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [5215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(522), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [5232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(526), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [5249] = 3,
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
  [5265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5281] = 3,
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
      aux_sym_select_statement_token1,
  [5297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(534), 1,
      aux_sym_setof_token1,
    STATE(90), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(112), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    ACTIONS(506), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(508), 1,
      aux_sym_TRUE_token1,
    ACTIONS(510), 1,
      aux_sym_FALSE_token1,
    STATE(17), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [5355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(536), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(540), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5387] = 3,
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
      aux_sym_select_statement_token1,
  [5403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(548), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5419] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(138), 1,
      sym_type_cast,
    STATE(126), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [5443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(554), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_SEMI,
    ACTIONS(562), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(558), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(468), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(564), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5509] = 3,
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
      aux_sym_select_statement_token1,
  [5525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(516), 1,
      aux_sym_NULL_token1,
    ACTIONS(518), 1,
      aux_sym_TRUE_token1,
    ACTIONS(520), 1,
      aux_sym_FALSE_token1,
    STATE(95), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [5547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(572), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(576), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [5578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(201), 1,
      sym_constrained_type,
    STATE(236), 1,
      sym_create_function_parameter,
    STATE(177), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(201), 1,
      sym_constrained_type,
    STATE(202), 1,
      sym_create_function_parameter,
    STATE(177), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(117), 1,
      sym_constrained_type,
    STATE(104), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5629] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      anon_sym_EQ,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5646] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(588), 1,
      anon_sym_EQ,
    ACTIONS(590), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_identifier,
    STATE(74), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_identifier,
    STATE(6), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_identifier,
    STATE(216), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      aux_sym_using_clause_token1,
    STATE(142), 1,
      sym_index_table_parameters,
    STATE(239), 1,
      sym_using_clause,
  [5715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(133), 1,
      sym__constraint_action,
    ACTIONS(600), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [5727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(132), 1,
      sym__constraint_action,
    ACTIONS(602), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [5739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      aux_sym_using_clause_token1,
    STATE(148), 1,
      sym_index_table_parameters,
    STATE(225), 1,
      sym_using_clause,
  [5755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_identifier,
    STATE(59), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_identifier,
    STATE(98), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [5779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(118), 1,
      sym_string,
  [5792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_tuple_repeat1,
  [5818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(610), 1,
      aux_sym_create_index_statement_token2,
    STATE(274), 1,
      sym_unique_constraint,
  [5831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_tuple_repeat1,
  [5844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(81), 1,
      sym_string,
  [5870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(19), 1,
      sym_string,
  [5896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [5909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_create_table_parameters_repeat1,
  [5922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_parameters_repeat1,
  [5935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_index_table_parameters_repeat1,
  [5948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_tuple_repeat1,
  [5961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_EQ,
    ACTIONS(590), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym_create_function_parameters_repeat1,
  [5985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_tuple_repeat1,
  [5998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_tuple_repeat1,
  [6011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_create_table_parameters_repeat1,
  [6024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym_index_table_parameters_repeat1,
  [6037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_EQ,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_create_function_parameters_repeat1,
  [6061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_parameters_repeat1,
  [6100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_create_table_parameters_repeat1,
  [6113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_create_function_parameters_repeat1,
  [6126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(671), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_parameters_repeat1,
  [6176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [6189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_index_table_parameters_repeat1,
  [6202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_on_update_action_token1,
    STATE(136), 1,
      sym_on_update_action,
  [6212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_references_constraint_token1,
    STATE(245), 1,
      sym_references_constraint,
  [6246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_index_table_parameters,
  [6256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_on_delete_action_token1,
    STATE(144), 1,
      sym_on_delete_action,
  [6266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_on_update_action_token1,
    STATE(144), 1,
      sym_on_update_action,
  [6276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_identifier,
    STATE(240), 1,
      sym_parameter,
  [6302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_tuple,
  [6320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_tuple,
  [6330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_on_delete_action_token1,
    STATE(139), 1,
      sym_on_delete_action,
  [6340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_on_update_action_token1,
    STATE(139), 1,
      sym_on_update_action,
  [6350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_on_delete_action_token1,
    STATE(136), 1,
      sym_on_delete_action,
  [6376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_index_table_parameters,
  [6386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    STATE(270), 1,
      sym_create_function_parameters,
  [6404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_create_table_parameters,
  [6414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_parameters,
  [6424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_tuple,
  [6434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_NULL_token1,
    STATE(68), 1,
      sym_NULL,
  [6452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_identifier,
    STATE(211), 1,
      sym_parameter,
  [6478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_references_constraint_token1,
    STATE(231), 1,
      sym_references_constraint,
  [6488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_tuple,
  [6498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_create_index_statement_token3,
  [6505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
  [6512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
  [6519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
  [6526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_identifier,
  [6533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
  [6540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_identifier,
  [6547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_identifier,
  [6554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_create_function_statement_token2,
  [6561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
  [6568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      aux_sym_in_expression_token2,
  [6575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
  [6582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_DOLLAR_DOLLAR,
  [6589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SQUOTE,
  [6596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
  [6603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_identifier,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_create_index_statement_token3,
  [6617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_identifier,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym_create_function_statement_token2,
  [6631] = 2,
    ACTIONS(742), 1,
      aux_sym_string_token2,
    ACTIONS(744), 1,
      sym_comment,
  [6638] = 2,
    ACTIONS(744), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym_string_token1,
  [6645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
  [6652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      aux_sym_create_index_statement_token2,
  [6659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_identifier,
  [6666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      aux_sym__function_body_token1,
  [6673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym_identifier,
  [6680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_identifier,
  [6687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      ts_builtin_sym_end,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SQUOTE,
  [6701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DOLLAR_DOLLAR,
  [6708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_identifier,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym_identifier,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym_create_function_statement_token2,
  [6729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_identifier,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_identifier,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_identifier,
  [6757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RBRACK,
  [6764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_identifier,
  [6771] = 2,
    ACTIONS(744), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_string_token1,
  [6778] = 2,
    ACTIONS(744), 1,
      sym_comment,
    ACTIONS(784), 1,
      aux_sym_string_token2,
  [6785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_in_expression_token2,
  [6792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 125,
  [SMALL_STATE(5)] = 175,
  [SMALL_STATE(6)] = 217,
  [SMALL_STATE(7)] = 261,
  [SMALL_STATE(8)] = 303,
  [SMALL_STATE(9)] = 345,
  [SMALL_STATE(10)] = 387,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 515,
  [SMALL_STATE(14)] = 560,
  [SMALL_STATE(15)] = 603,
  [SMALL_STATE(16)] = 644,
  [SMALL_STATE(17)] = 699,
  [SMALL_STATE(18)] = 740,
  [SMALL_STATE(19)] = 781,
  [SMALL_STATE(20)] = 822,
  [SMALL_STATE(21)] = 863,
  [SMALL_STATE(22)] = 904,
  [SMALL_STATE(23)] = 945,
  [SMALL_STATE(24)] = 986,
  [SMALL_STATE(25)] = 1027,
  [SMALL_STATE(26)] = 1068,
  [SMALL_STATE(27)] = 1109,
  [SMALL_STATE(28)] = 1150,
  [SMALL_STATE(29)] = 1205,
  [SMALL_STATE(30)] = 1259,
  [SMALL_STATE(31)] = 1310,
  [SMALL_STATE(32)] = 1362,
  [SMALL_STATE(33)] = 1414,
  [SMALL_STATE(34)] = 1465,
  [SMALL_STATE(35)] = 1516,
  [SMALL_STATE(36)] = 1567,
  [SMALL_STATE(37)] = 1618,
  [SMALL_STATE(38)] = 1666,
  [SMALL_STATE(39)] = 1714,
  [SMALL_STATE(40)] = 1762,
  [SMALL_STATE(41)] = 1810,
  [SMALL_STATE(42)] = 1858,
  [SMALL_STATE(43)] = 1906,
  [SMALL_STATE(44)] = 1954,
  [SMALL_STATE(45)] = 2002,
  [SMALL_STATE(46)] = 2050,
  [SMALL_STATE(47)] = 2098,
  [SMALL_STATE(48)] = 2146,
  [SMALL_STATE(49)] = 2194,
  [SMALL_STATE(50)] = 2242,
  [SMALL_STATE(51)] = 2290,
  [SMALL_STATE(52)] = 2338,
  [SMALL_STATE(53)] = 2386,
  [SMALL_STATE(54)] = 2434,
  [SMALL_STATE(55)] = 2482,
  [SMALL_STATE(56)] = 2530,
  [SMALL_STATE(57)] = 2578,
  [SMALL_STATE(58)] = 2623,
  [SMALL_STATE(59)] = 2657,
  [SMALL_STATE(60)] = 2705,
  [SMALL_STATE(61)] = 2750,
  [SMALL_STATE(62)] = 2795,
  [SMALL_STATE(63)] = 2821,
  [SMALL_STATE(64)] = 2867,
  [SMALL_STATE(65)] = 2895,
  [SMALL_STATE(66)] = 2921,
  [SMALL_STATE(67)] = 2947,
  [SMALL_STATE(68)] = 2973,
  [SMALL_STATE(69)] = 2999,
  [SMALL_STATE(70)] = 3025,
  [SMALL_STATE(71)] = 3051,
  [SMALL_STATE(72)] = 3077,
  [SMALL_STATE(73)] = 3103,
  [SMALL_STATE(74)] = 3129,
  [SMALL_STATE(75)] = 3157,
  [SMALL_STATE(76)] = 3183,
  [SMALL_STATE(77)] = 3208,
  [SMALL_STATE(78)] = 3233,
  [SMALL_STATE(79)] = 3270,
  [SMALL_STATE(80)] = 3307,
  [SMALL_STATE(81)] = 3332,
  [SMALL_STATE(82)] = 3357,
  [SMALL_STATE(83)] = 3390,
  [SMALL_STATE(84)] = 3415,
  [SMALL_STATE(85)] = 3448,
  [SMALL_STATE(86)] = 3473,
  [SMALL_STATE(87)] = 3498,
  [SMALL_STATE(88)] = 3525,
  [SMALL_STATE(89)] = 3566,
  [SMALL_STATE(90)] = 3595,
  [SMALL_STATE(91)] = 3628,
  [SMALL_STATE(92)] = 3653,
  [SMALL_STATE(93)] = 3678,
  [SMALL_STATE(94)] = 3703,
  [SMALL_STATE(95)] = 3728,
  [SMALL_STATE(96)] = 3753,
  [SMALL_STATE(97)] = 3795,
  [SMALL_STATE(98)] = 3837,
  [SMALL_STATE(99)] = 3873,
  [SMALL_STATE(100)] = 3915,
  [SMALL_STATE(101)] = 3939,
  [SMALL_STATE(102)] = 3981,
  [SMALL_STATE(103)] = 4018,
  [SMALL_STATE(104)] = 4055,
  [SMALL_STATE(105)] = 4082,
  [SMALL_STATE(106)] = 4119,
  [SMALL_STATE(107)] = 4150,
  [SMALL_STATE(108)] = 4187,
  [SMALL_STATE(109)] = 4224,
  [SMALL_STATE(110)] = 4257,
  [SMALL_STATE(111)] = 4290,
  [SMALL_STATE(112)] = 4327,
  [SMALL_STATE(113)] = 4354,
  [SMALL_STATE(114)] = 4382,
  [SMALL_STATE(115)] = 4418,
  [SMALL_STATE(116)] = 4446,
  [SMALL_STATE(117)] = 4482,
  [SMALL_STATE(118)] = 4503,
  [SMALL_STATE(119)] = 4524,
  [SMALL_STATE(120)] = 4545,
  [SMALL_STATE(121)] = 4566,
  [SMALL_STATE(122)] = 4590,
  [SMALL_STATE(123)] = 4614,
  [SMALL_STATE(124)] = 4642,
  [SMALL_STATE(125)] = 4664,
  [SMALL_STATE(126)] = 4688,
  [SMALL_STATE(127)] = 4707,
  [SMALL_STATE(128)] = 4734,
  [SMALL_STATE(129)] = 4753,
  [SMALL_STATE(130)] = 4772,
  [SMALL_STATE(131)] = 4795,
  [SMALL_STATE(132)] = 4818,
  [SMALL_STATE(133)] = 4835,
  [SMALL_STATE(134)] = 4852,
  [SMALL_STATE(135)] = 4869,
  [SMALL_STATE(136)] = 4896,
  [SMALL_STATE(137)] = 4912,
  [SMALL_STATE(138)] = 4934,
  [SMALL_STATE(139)] = 4950,
  [SMALL_STATE(140)] = 4966,
  [SMALL_STATE(141)] = 4988,
  [SMALL_STATE(142)] = 5004,
  [SMALL_STATE(143)] = 5026,
  [SMALL_STATE(144)] = 5048,
  [SMALL_STATE(145)] = 5064,
  [SMALL_STATE(146)] = 5086,
  [SMALL_STATE(147)] = 5102,
  [SMALL_STATE(148)] = 5124,
  [SMALL_STATE(149)] = 5146,
  [SMALL_STATE(150)] = 5165,
  [SMALL_STATE(151)] = 5190,
  [SMALL_STATE(152)] = 5215,
  [SMALL_STATE(153)] = 5232,
  [SMALL_STATE(154)] = 5249,
  [SMALL_STATE(155)] = 5265,
  [SMALL_STATE(156)] = 5281,
  [SMALL_STATE(157)] = 5297,
  [SMALL_STATE(158)] = 5317,
  [SMALL_STATE(159)] = 5333,
  [SMALL_STATE(160)] = 5355,
  [SMALL_STATE(161)] = 5371,
  [SMALL_STATE(162)] = 5387,
  [SMALL_STATE(163)] = 5403,
  [SMALL_STATE(164)] = 5419,
  [SMALL_STATE(165)] = 5443,
  [SMALL_STATE(166)] = 5459,
  [SMALL_STATE(167)] = 5477,
  [SMALL_STATE(168)] = 5493,
  [SMALL_STATE(169)] = 5509,
  [SMALL_STATE(170)] = 5525,
  [SMALL_STATE(171)] = 5547,
  [SMALL_STATE(172)] = 5563,
  [SMALL_STATE(173)] = 5578,
  [SMALL_STATE(174)] = 5596,
  [SMALL_STATE(175)] = 5614,
  [SMALL_STATE(176)] = 5629,
  [SMALL_STATE(177)] = 5646,
  [SMALL_STATE(178)] = 5663,
  [SMALL_STATE(179)] = 5675,
  [SMALL_STATE(180)] = 5687,
  [SMALL_STATE(181)] = 5699,
  [SMALL_STATE(182)] = 5715,
  [SMALL_STATE(183)] = 5727,
  [SMALL_STATE(184)] = 5739,
  [SMALL_STATE(185)] = 5755,
  [SMALL_STATE(186)] = 5767,
  [SMALL_STATE(187)] = 5779,
  [SMALL_STATE(188)] = 5792,
  [SMALL_STATE(189)] = 5805,
  [SMALL_STATE(190)] = 5818,
  [SMALL_STATE(191)] = 5831,
  [SMALL_STATE(192)] = 5844,
  [SMALL_STATE(193)] = 5857,
  [SMALL_STATE(194)] = 5870,
  [SMALL_STATE(195)] = 5883,
  [SMALL_STATE(196)] = 5896,
  [SMALL_STATE(197)] = 5909,
  [SMALL_STATE(198)] = 5922,
  [SMALL_STATE(199)] = 5935,
  [SMALL_STATE(200)] = 5948,
  [SMALL_STATE(201)] = 5961,
  [SMALL_STATE(202)] = 5972,
  [SMALL_STATE(203)] = 5985,
  [SMALL_STATE(204)] = 5998,
  [SMALL_STATE(205)] = 6011,
  [SMALL_STATE(206)] = 6024,
  [SMALL_STATE(207)] = 6037,
  [SMALL_STATE(208)] = 6048,
  [SMALL_STATE(209)] = 6061,
  [SMALL_STATE(210)] = 6074,
  [SMALL_STATE(211)] = 6087,
  [SMALL_STATE(212)] = 6100,
  [SMALL_STATE(213)] = 6113,
  [SMALL_STATE(214)] = 6126,
  [SMALL_STATE(215)] = 6139,
  [SMALL_STATE(216)] = 6152,
  [SMALL_STATE(217)] = 6163,
  [SMALL_STATE(218)] = 6176,
  [SMALL_STATE(219)] = 6189,
  [SMALL_STATE(220)] = 6202,
  [SMALL_STATE(221)] = 6212,
  [SMALL_STATE(222)] = 6220,
  [SMALL_STATE(223)] = 6228,
  [SMALL_STATE(224)] = 6236,
  [SMALL_STATE(225)] = 6246,
  [SMALL_STATE(226)] = 6256,
  [SMALL_STATE(227)] = 6266,
  [SMALL_STATE(228)] = 6276,
  [SMALL_STATE(229)] = 6284,
  [SMALL_STATE(230)] = 6292,
  [SMALL_STATE(231)] = 6302,
  [SMALL_STATE(232)] = 6310,
  [SMALL_STATE(233)] = 6320,
  [SMALL_STATE(234)] = 6330,
  [SMALL_STATE(235)] = 6340,
  [SMALL_STATE(236)] = 6350,
  [SMALL_STATE(237)] = 6358,
  [SMALL_STATE(238)] = 6366,
  [SMALL_STATE(239)] = 6376,
  [SMALL_STATE(240)] = 6386,
  [SMALL_STATE(241)] = 6394,
  [SMALL_STATE(242)] = 6404,
  [SMALL_STATE(243)] = 6414,
  [SMALL_STATE(244)] = 6424,
  [SMALL_STATE(245)] = 6434,
  [SMALL_STATE(246)] = 6442,
  [SMALL_STATE(247)] = 6452,
  [SMALL_STATE(248)] = 6460,
  [SMALL_STATE(249)] = 6468,
  [SMALL_STATE(250)] = 6478,
  [SMALL_STATE(251)] = 6488,
  [SMALL_STATE(252)] = 6498,
  [SMALL_STATE(253)] = 6505,
  [SMALL_STATE(254)] = 6512,
  [SMALL_STATE(255)] = 6519,
  [SMALL_STATE(256)] = 6526,
  [SMALL_STATE(257)] = 6533,
  [SMALL_STATE(258)] = 6540,
  [SMALL_STATE(259)] = 6547,
  [SMALL_STATE(260)] = 6554,
  [SMALL_STATE(261)] = 6561,
  [SMALL_STATE(262)] = 6568,
  [SMALL_STATE(263)] = 6575,
  [SMALL_STATE(264)] = 6582,
  [SMALL_STATE(265)] = 6589,
  [SMALL_STATE(266)] = 6596,
  [SMALL_STATE(267)] = 6603,
  [SMALL_STATE(268)] = 6610,
  [SMALL_STATE(269)] = 6617,
  [SMALL_STATE(270)] = 6624,
  [SMALL_STATE(271)] = 6631,
  [SMALL_STATE(272)] = 6638,
  [SMALL_STATE(273)] = 6645,
  [SMALL_STATE(274)] = 6652,
  [SMALL_STATE(275)] = 6659,
  [SMALL_STATE(276)] = 6666,
  [SMALL_STATE(277)] = 6673,
  [SMALL_STATE(278)] = 6680,
  [SMALL_STATE(279)] = 6687,
  [SMALL_STATE(280)] = 6694,
  [SMALL_STATE(281)] = 6701,
  [SMALL_STATE(282)] = 6708,
  [SMALL_STATE(283)] = 6715,
  [SMALL_STATE(284)] = 6722,
  [SMALL_STATE(285)] = 6729,
  [SMALL_STATE(286)] = 6736,
  [SMALL_STATE(287)] = 6743,
  [SMALL_STATE(288)] = 6750,
  [SMALL_STATE(289)] = 6757,
  [SMALL_STATE(290)] = 6764,
  [SMALL_STATE(291)] = 6771,
  [SMALL_STATE(292)] = 6778,
  [SMALL_STATE(293)] = 6785,
  [SMALL_STATE(294)] = 6792,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 12),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4, .production_id = 7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 18),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliasable_expression, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(258),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(164),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(47),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(134),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(146),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(246),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(259),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(23),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(119),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(286),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(187),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 13),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 8),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(282),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(290),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(47),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(246),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(23),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_body, 2, .production_id = 15),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 14),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2), SHIFT_REPEAT(31),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_select_clause_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliased_expression, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 20),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 20),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 17),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 10),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 17),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 10),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 10),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 17),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(127),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(230),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(50),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(173),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(288),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(36),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 19),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 16),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [760] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
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
