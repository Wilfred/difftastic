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
#define STATE_COUNT 247
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 4
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 19

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
  sym_NULL = 47,
  sym_TRUE = 48,
  sym_FALSE = 49,
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
  sym_string = 112,
  sym_field_access = 113,
  sym_ordered_expression = 114,
  sym__type_alias = 115,
  sym_array_type = 116,
  sym__type = 117,
  sym_type_cast = 118,
  sym_binary_expression = 119,
  sym__expression = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_create_function_statement_repeat1 = 122,
  aux_sym_create_function_parameters_repeat1 = 123,
  aux_sym_create_domain_statement_repeat1 = 124,
  aux_sym_create_table_column_parameter_repeat1 = 125,
  aux_sym_create_table_parameters_repeat1 = 126,
  aux_sym_table_constraint_foreign_key_repeat1 = 127,
  aux_sym_index_table_parameters_repeat1 = 128,
  aux_sym_tuple_repeat1 = 129,
  aux_sym_parameters_repeat1 = 130,
  alias_sym_default = 131,
  alias_sym_function_body = 132,
  alias_sym_language = 133,
  alias_sym_type = 134,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_function_statement_token1] = "create_function_statement_token1",
  [aux_sym_create_function_statement_token2] = "create_function_statement_token2",
  [aux_sym__function_optimizer_hint_token1] = "_function_optimizer_hint_token1",
  [aux_sym__function_optimizer_hint_token2] = "_function_optimizer_hint_token2",
  [aux_sym__function_optimizer_hint_token3] = "_function_optimizer_hint_token3",
  [aux_sym__function_language_token1] = "_function_language_token1",
  [aux_sym_setof_token1] = "setof_token1",
  [aux_sym_constrained_type_token1] = "not_null",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym__function_body_token1] = "_function_body_token1",
  [aux_sym_create_domain_statement_token1] = "create_domain_statement_token1",
  [aux_sym_create_type_statement_token1] = "create_type_statement_token1",
  [aux_sym_create_index_statement_token1] = "create_index_statement_token1",
  [aux_sym_create_index_statement_token2] = "create_index_statement_token2",
  [aux_sym_create_index_statement_token3] = "create_index_statement_token3",
  [anon_sym_CONSTRAINT] = "CONSTRAINT",
  [aux_sym_column_default_token1] = "column_default_token1",
  [aux_sym_table_constraint_check_token1] = "table_constraint_check_token1",
  [aux_sym_table_constraint_foreign_key_token1] = "table_constraint_foreign_key_token1",
  [aux_sym_table_constraint_unique_token1] = "table_constraint_unique_token1",
  [aux_sym_table_constraint_primary_key_token1] = "table_constraint_primary_key_token1",
  [aux_sym_create_table_statement_token1] = "create_table_statement_token1",
  [aux_sym_using_clause_token1] = "using_clause_token1",
  [aux_sym_select_statement_token1] = "select_statement_token1",
  [aux_sym_in_expression_token1] = "in_expression_token1",
  [aux_sym_in_expression_token2] = "in_expression_token2",
  [aux_sym_references_constraint_token1] = "references_constraint_token1",
  [aux_sym_on_update_action_token1] = "on_update_action_token1",
  [aux_sym_on_delete_action_token1] = "on_delete_action_token1",
  [aux_sym__constraint_action_token1] = "_constraint_action_token1",
  [aux_sym__constraint_action_token2] = "_constraint_action_token2",
  [aux_sym__constraint_action_token3] = "_constraint_action_token3",
  [aux_sym_where_clause_token1] = "where_clause_token1",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_is_expression_token1] = "is_expression_token1",
  [aux_sym_distinct_from_token1] = "distinct_from_token1",
  [aux_sym_boolean_expression_token1] = "boolean_expression_token1",
  [aux_sym_boolean_expression_token2] = "boolean_expression_token2",
  [sym_NULL] = "NULL",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DASH_GT_GT] = "->>",
  [aux_sym_ordered_expression_token1] = "ordered_expression_token1",
  [aux_sym_ordered_expression_token2] = "ordered_expression_token2",
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
  [sym_NULL] = sym_NULL,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
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
    .visible = false,
    .named = false,
  },
  [aux_sym_create_function_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_optimizer_hint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_optimizer_hint_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_optimizer_hint_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_language_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setof_token1] = {
    .visible = false,
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
    .visible = false,
    .named = false,
  },
  [aux_sym_create_domain_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_type_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_index_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_index_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_index_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CONSTRAINT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_default_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_constraint_check_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_constraint_foreign_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_constraint_unique_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_constraint_primary_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_table_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_using_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_references_constraint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_on_update_action_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_on_delete_action_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constraint_action_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constraint_action_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constraint_action_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = false,
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
    .visible = false,
    .named = false,
  },
  [aux_sym_distinct_from_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_expression_token2] = {
    .visible = false,
    .named = false,
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
    .visible = false,
    .named = false,
  },
  [aux_sym_ordered_expression_token2] = {
    .visible = false,
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
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 3},
  [10] = {.index = 12, .length = 1},
  [14] = {.index = 13, .length = 1},
  [15] = {.index = 14, .length = 2},
  [16] = {.index = 16, .length = 2},
  [17] = {.index = 18, .length = 1},
  [18] = {.index = 19, .length = 1},
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
    [2] = alias_sym_default,
  },
  [11] = {
    [3] = alias_sym_default,
  },
  [12] = {
    [1] = alias_sym_language,
  },
  [13] = {
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
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(31)
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
      if (lookahead == '\\') SKIP(4)
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
      if (lookahead == '\\') SKIP(6)
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
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_NULL);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_TRUE);
      if (lookahead == '.') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_FALSE);
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
  [3] = {.lex_state = 245},
  [4] = {.lex_state = 245},
  [5] = {.lex_state = 245},
  [6] = {.lex_state = 245},
  [7] = {.lex_state = 245},
  [8] = {.lex_state = 245},
  [9] = {.lex_state = 245},
  [10] = {.lex_state = 245},
  [11] = {.lex_state = 246},
  [12] = {.lex_state = 245},
  [13] = {.lex_state = 245},
  [14] = {.lex_state = 245},
  [15] = {.lex_state = 245},
  [16] = {.lex_state = 245},
  [17] = {.lex_state = 245},
  [18] = {.lex_state = 245},
  [19] = {.lex_state = 245},
  [20] = {.lex_state = 245},
  [21] = {.lex_state = 246},
  [22] = {.lex_state = 246},
  [23] = {.lex_state = 246},
  [24] = {.lex_state = 246},
  [25] = {.lex_state = 244},
  [26] = {.lex_state = 246},
  [27] = {.lex_state = 246},
  [28] = {.lex_state = 246},
  [29] = {.lex_state = 246},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 245},
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
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 247},
  [54] = {.lex_state = 245},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 245},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 247},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 245},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 245},
  [66] = {.lex_state = 245},
  [67] = {.lex_state = 245},
  [68] = {.lex_state = 245},
  [69] = {.lex_state = 246},
  [70] = {.lex_state = 246},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 247},
  [74] = {.lex_state = 246},
  [75] = {.lex_state = 246},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 246},
  [78] = {.lex_state = 246},
  [79] = {.lex_state = 247},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 246},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 246},
  [85] = {.lex_state = 246},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 31},
  [96] = {.lex_state = 246},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 246},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 32},
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
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 247},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 247},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 20},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 20},
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
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 247},
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
  [178] = {.lex_state = 246},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 20},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 246},
  [188] = {.lex_state = 246},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 246},
  [191] = {.lex_state = 246},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 20},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 246},
  [206] = {.lex_state = 20},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 373},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 247},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 373},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 246},
  [246] = {.lex_state = 0},
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
    [sym_NULL] = ACTIONS(1),
    [sym_TRUE] = ACTIONS(1),
    [sym_FALSE] = ACTIONS(1),
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
    [sym_source_file] = STATE(240),
    [sym__statement] = STATE(80),
    [sym_create_function_statement] = STATE(128),
    [sym_create_domain_statement] = STATE(128),
    [sym_create_type_statement] = STATE(128),
    [sym_create_index_statement] = STATE(128),
    [sym_create_table_statement] = STATE(128),
    [sym_select_statement] = STATE(128),
    [aux_sym_source_file_repeat1] = STATE(80),
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
      sym_NULL,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [45] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [87] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 31,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 31,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 31,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [257] = 3,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 31,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(41), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 28,
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
      sym_NULL,
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
      sym_NULL,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 30,
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
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 26,
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
      sym_NULL,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(89), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 27,
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
      sym_NULL,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [886] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
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
    ACTIONS(103), 19,
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
      sym_NULL,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [939] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(119), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(117), 19,
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
      sym_NULL,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [992] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      aux_sym_where_clause_token1,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(28), 1,
      sym__expression,
    STATE(104), 1,
      sym_select_clause,
    STATE(124), 1,
      sym_where_clause,
    ACTIONS(125), 2,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1052] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(139), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(137), 16,
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
      sym_NULL,
  [1106] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(143), 10,
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
  [1154] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      aux_sym_create_index_statement_token1,
    STATE(97), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [1206] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
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
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1251] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
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
  [1327] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(63), 1,
      sym__expression,
    STATE(201), 1,
      sym_ordered_expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1369] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(56), 1,
      sym__expression,
    STATE(167), 1,
      sym_ordered_expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1411] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(75), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1450] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(23), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1489] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(66), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1528] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(74), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1567] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(77), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1606] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(26), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1645] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(68), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1684] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(67), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1723] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(18), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1762] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(65), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1801] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(29), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1840] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(82), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1879] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(21), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1918] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(27), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [1957] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(171), 1,
      aux_sym_column_default_token1,
    ACTIONS(173), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(175), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(177), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(183), 1,
      sym_NULL,
    ACTIONS(167), 2,
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
  [2002] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(69), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2041] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(24), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2080] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(18), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2119] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(22), 1,
      sym__expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
  [2158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(55), 17,
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
  [2184] = 3,
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
  [2210] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(190), 1,
      aux_sym_column_default_token1,
    ACTIONS(193), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(196), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(199), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(202), 1,
      aux_sym_in_expression_token1,
    ACTIONS(205), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(208), 1,
      sym_NULL,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(55), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2252] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      aux_sym_is_expression_token1,
    ACTIONS(221), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(223), 1,
      aux_sym_boolean_expression_token2,
    STATE(152), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(217), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(211), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2298] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(171), 1,
      aux_sym_column_default_token1,
    ACTIONS(173), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(175), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(177), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(181), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(183), 1,
      sym_NULL,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(55), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2340] = 3,
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
      sym_NULL,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(235), 17,
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
      sym_NULL,
  [2392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(23), 17,
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
  [2418] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__function_language_token1,
    ACTIONS(245), 1,
      aux_sym__function_body_token1,
    ACTIONS(247), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(241), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(64), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2451] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__function_language_token1,
    ACTIONS(245), 1,
      aux_sym__function_body_token1,
    ACTIONS(251), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(241), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(61), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2484] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(219), 1,
      aux_sym_is_expression_token1,
    ACTIONS(221), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(223), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(217), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(211), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2525] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym__function_language_token1,
    ACTIONS(263), 1,
      aux_sym__function_body_token1,
    ACTIONS(266), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(257), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(64), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym__function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2558] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(223), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 13,
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
  [2587] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(219), 1,
      aux_sym_is_expression_token1,
    ACTIONS(221), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(223), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(217), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(117), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 14,
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
  [2651] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(219), 1,
      aux_sym_is_expression_token1,
    ACTIONS(221), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(223), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(217), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 4,
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
  [2688] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2730] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(272), 15,
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
  [2796] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(183), 1,
      sym_NULL,
    ACTIONS(278), 1,
      aux_sym_create_index_statement_token1,
    STATE(83), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(276), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(284), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 12,
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
  [2856] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
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
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2893] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
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
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [2930] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(297), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(300), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(303), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(306), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(309), 1,
      aux_sym_select_statement_token1,
    STATE(76), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(128), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2967] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
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
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3004] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(320), 1,
      aux_sym_on_delete_action_token1,
    STATE(178), 1,
      sym_on_delete_action,
    STATE(205), 1,
      sym_on_update_action,
    ACTIONS(316), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3035] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(322), 12,
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
  [3062] = 10,
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
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(128), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [3099] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(332), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(335), 1,
      aux_sym_in_expression_token1,
    ACTIONS(338), 1,
      sym_NULL,
    STATE(81), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(328), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3129] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(101), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(109), 1,
      aux_sym_in_expression_token1,
    ACTIONS(111), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [3165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(179), 1,
      aux_sym_in_expression_token1,
    ACTIONS(183), 1,
      sym_NULL,
    ACTIONS(345), 1,
      aux_sym_create_index_statement_token1,
    STATE(81), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3195] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(320), 1,
      aux_sym_on_delete_action_token1,
    STATE(190), 1,
      sym_on_delete_action,
    STATE(191), 1,
      sym_on_update_action,
    ACTIONS(347), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3223] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(320), 1,
      aux_sym_on_delete_action_token1,
    STATE(187), 1,
      sym_on_delete_action,
    STATE(188), 1,
      sym_on_update_action,
    ACTIONS(349), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(351), 12,
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
  [3272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(355), 12,
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
  [3293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(322), 12,
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
  [3314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(359), 12,
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
  [3335] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [3359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 11,
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
      sym_NULL,
  [3398] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(372), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(374), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(376), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(378), 1,
      sym_identifier,
    STATE(162), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [3425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(366), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3444] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(372), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(374), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(376), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(378), 1,
      sym_identifier,
    STATE(186), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 11,
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
      sym_NULL,
  [3488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      aux_sym_create_index_statement_token1,
    STATE(90), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 11,
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
      sym_NULL,
  [3528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(392), 1,
      aux_sym_where_clause_token1,
    STATE(120), 1,
      sym_where_clause,
    ACTIONS(388), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_where_clause_token1,
    ACTIONS(396), 1,
      aux_sym_create_index_statement_token1,
    STATE(127), 1,
      sym_where_clause,
    ACTIONS(394), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3604] = 2,
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
      sym_NULL,
  [3620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_where_clause_token1,
    ACTIONS(406), 1,
      aux_sym_create_index_statement_token1,
    STATE(123), 1,
      sym_where_clause,
    ACTIONS(404), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(164), 1,
      sym_constrained_type,
    STATE(134), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(55), 5,
      aux_sym_constrained_type_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [3680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_where_clause_token1,
    ACTIONS(412), 1,
      aux_sym_create_index_statement_token1,
    STATE(115), 1,
      sym_where_clause,
    ACTIONS(410), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_where_clause_token1,
    ACTIONS(416), 1,
      aux_sym_create_index_statement_token1,
    STATE(114), 1,
      sym_where_clause,
    ACTIONS(414), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [3740] = 2,
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
      sym_NULL,
  [3756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [3790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym__function_body_token1,
    ACTIONS(434), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(430), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3809] = 3,
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
  [3825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(436), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3841] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(105), 1,
      sym_type_cast,
    STATE(94), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [3865] = 3,
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
  [3881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(446), 1,
      aux_sym_setof_token1,
    STATE(62), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
    STATE(73), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(448), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3917] = 3,
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
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(452), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(456), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(460), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(404), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3997] = 3,
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
      aux_sym_select_statement_token1,
  [4013] = 3,
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
  [4029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(472), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    ACTIONS(480), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(476), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(482), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [4078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(155), 1,
      sym_create_function_parameter,
    STATE(159), 1,
      sym_constrained_type,
    STATE(137), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(159), 1,
      sym_constrained_type,
    STATE(204), 1,
      sym_create_function_parameter,
    STATE(137), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym_in_expression_token1,
    ACTIONS(490), 1,
      aux_sym_distinct_from_token1,
    STATE(14), 1,
      sym_distinct_from,
    ACTIONS(492), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_in_expression_token1,
    ACTIONS(496), 1,
      aux_sym_distinct_from_token1,
    STATE(14), 1,
      sym_distinct_from,
    ACTIONS(492), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(500), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym_distinct_from_token1,
    STATE(16), 1,
      sym_distinct_from,
    ACTIONS(502), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_distinct_from_token1,
    STATE(16), 1,
      sym_distinct_from,
    ACTIONS(502), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [4197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_EQ,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(88), 1,
      sym_constrained_type,
    STATE(79), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(96), 1,
      sym__constraint_action,
    ACTIONS(510), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [4241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      aux_sym_using_clause_token1,
    STATE(99), 1,
      sym_index_table_parameters,
    STATE(193), 1,
      sym_using_clause,
  [4257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(48), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(98), 1,
      sym__constraint_action,
    ACTIONS(518), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [4281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(156), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(72), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(9), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [4317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      aux_sym_using_clause_token1,
    STATE(108), 1,
      sym_index_table_parameters,
    STATE(179), 1,
      sym_using_clause,
  [4333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(12), 1,
      sym_string,
  [4346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_index_table_parameters_repeat1,
  [4411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_parameters_repeat1,
  [4424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(12), 1,
      sym_string,
  [4437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_create_function_parameters_repeat1,
  [4450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(540), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_create_table_parameters_repeat1,
  [4474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_EQ,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_tuple_repeat1,
  [4511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(86), 1,
      sym_string,
  [4524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_create_table_parameters_repeat1,
  [4537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(558), 1,
      aux_sym_create_index_statement_token2,
    STATE(226), 1,
      sym_unique_constraint,
  [4550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(500), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_create_function_parameters_repeat1,
  [4574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_parameters_repeat1,
  [4587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_index_table_parameters_repeat1,
  [4600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_index_table_parameters_repeat1,
  [4613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_tuple_repeat1,
  [4626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_create_table_parameters_repeat1,
  [4639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_parameters_repeat1,
  [4704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_create_function_parameters_repeat1,
  [4717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_on_update_action_token1,
    STATE(109), 1,
      sym_on_update_action,
  [4735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_index_table_parameters,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_tuple,
  [4771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_references_constraint_token1,
    STATE(197), 1,
      sym_references_constraint,
  [4781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_identifier,
    STATE(175), 1,
      sym_parameter,
  [4791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_create_function_parameters,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_on_update_action_token1,
    STATE(101), 1,
      sym_on_update_action,
  [4819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_on_delete_action_token1,
    STATE(101), 1,
      sym_on_delete_action,
  [4829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_tuple,
  [4839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_on_update_action_token1,
    STATE(102), 1,
      sym_on_update_action,
  [4849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_on_delete_action_token1,
    STATE(102), 1,
      sym_on_delete_action,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_index_table_parameters,
  [4877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_identifier,
    STATE(181), 1,
      sym_parameter,
  [4895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_references_constraint_token1,
    STATE(194), 1,
      sym_references_constraint,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_parameters,
  [4931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_create_table_parameters,
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_on_delete_action_token1,
    STATE(109), 1,
      sym_on_delete_action,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_identifier,
  [4990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
  [4997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_identifier,
  [5004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_identifier,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_identifier,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      aux_sym_create_function_statement_token2,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_identifier,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
  [5053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_NULL,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
  [5074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_identifier,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_identifier,
  [5088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      aux_sym_create_function_statement_token2,
  [5095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_identifier,
  [5102] = 2,
    ACTIONS(647), 1,
      aux_sym_string_token1,
    ACTIONS(649), 1,
      sym_comment,
  [5109] = 2,
    ACTIONS(649), 1,
      sym_comment,
    ACTIONS(651), 1,
      aux_sym_string_token2,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_LPAREN,
  [5123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym_create_index_statement_token2,
  [5130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      aux_sym_create_index_statement_token3,
  [5137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_identifier,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_SQUOTE,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_DOLLAR_DOLLAR,
  [5158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
  [5165] = 2,
    ACTIONS(649), 1,
      sym_comment,
    ACTIONS(665), 1,
      aux_sym_string_token1,
  [5172] = 2,
    ACTIONS(649), 1,
      sym_comment,
    ACTIONS(667), 1,
      aux_sym_string_token2,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
  [5186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym__function_body_token1,
  [5193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      aux_sym_create_index_statement_token3,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      aux_sym_create_function_statement_token2,
  [5207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_identifier,
  [5214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
  [5221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
  [5228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
  [5235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
  [5242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym_identifier,
  [5249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_identifier,
  [5256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      aux_sym_in_expression_token2,
  [5263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_DOLLAR_DOLLAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 171,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 257,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 343,
  [SMALL_STATE(11)] = 385,
  [SMALL_STATE(12)] = 433,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 515,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 597,
  [SMALL_STATE(17)] = 638,
  [SMALL_STATE(18)] = 679,
  [SMALL_STATE(19)] = 720,
  [SMALL_STATE(20)] = 761,
  [SMALL_STATE(21)] = 802,
  [SMALL_STATE(22)] = 845,
  [SMALL_STATE(23)] = 886,
  [SMALL_STATE(24)] = 939,
  [SMALL_STATE(25)] = 992,
  [SMALL_STATE(26)] = 1052,
  [SMALL_STATE(27)] = 1106,
  [SMALL_STATE(28)] = 1154,
  [SMALL_STATE(29)] = 1206,
  [SMALL_STATE(30)] = 1251,
  [SMALL_STATE(31)] = 1293,
  [SMALL_STATE(32)] = 1327,
  [SMALL_STATE(33)] = 1369,
  [SMALL_STATE(34)] = 1411,
  [SMALL_STATE(35)] = 1450,
  [SMALL_STATE(36)] = 1489,
  [SMALL_STATE(37)] = 1528,
  [SMALL_STATE(38)] = 1567,
  [SMALL_STATE(39)] = 1606,
  [SMALL_STATE(40)] = 1645,
  [SMALL_STATE(41)] = 1684,
  [SMALL_STATE(42)] = 1723,
  [SMALL_STATE(43)] = 1762,
  [SMALL_STATE(44)] = 1801,
  [SMALL_STATE(45)] = 1840,
  [SMALL_STATE(46)] = 1879,
  [SMALL_STATE(47)] = 1918,
  [SMALL_STATE(48)] = 1957,
  [SMALL_STATE(49)] = 2002,
  [SMALL_STATE(50)] = 2041,
  [SMALL_STATE(51)] = 2080,
  [SMALL_STATE(52)] = 2119,
  [SMALL_STATE(53)] = 2158,
  [SMALL_STATE(54)] = 2184,
  [SMALL_STATE(55)] = 2210,
  [SMALL_STATE(56)] = 2252,
  [SMALL_STATE(57)] = 2298,
  [SMALL_STATE(58)] = 2340,
  [SMALL_STATE(59)] = 2366,
  [SMALL_STATE(60)] = 2392,
  [SMALL_STATE(61)] = 2418,
  [SMALL_STATE(62)] = 2451,
  [SMALL_STATE(63)] = 2484,
  [SMALL_STATE(64)] = 2525,
  [SMALL_STATE(65)] = 2558,
  [SMALL_STATE(66)] = 2587,
  [SMALL_STATE(67)] = 2624,
  [SMALL_STATE(68)] = 2651,
  [SMALL_STATE(69)] = 2688,
  [SMALL_STATE(70)] = 2730,
  [SMALL_STATE(71)] = 2772,
  [SMALL_STATE(72)] = 2796,
  [SMALL_STATE(73)] = 2829,
  [SMALL_STATE(74)] = 2856,
  [SMALL_STATE(75)] = 2893,
  [SMALL_STATE(76)] = 2930,
  [SMALL_STATE(77)] = 2967,
  [SMALL_STATE(78)] = 3004,
  [SMALL_STATE(79)] = 3035,
  [SMALL_STATE(80)] = 3062,
  [SMALL_STATE(81)] = 3099,
  [SMALL_STATE(82)] = 3129,
  [SMALL_STATE(83)] = 3165,
  [SMALL_STATE(84)] = 3195,
  [SMALL_STATE(85)] = 3223,
  [SMALL_STATE(86)] = 3251,
  [SMALL_STATE(87)] = 3272,
  [SMALL_STATE(88)] = 3293,
  [SMALL_STATE(89)] = 3314,
  [SMALL_STATE(90)] = 3335,
  [SMALL_STATE(91)] = 3359,
  [SMALL_STATE(92)] = 3381,
  [SMALL_STATE(93)] = 3398,
  [SMALL_STATE(94)] = 3425,
  [SMALL_STATE(95)] = 3444,
  [SMALL_STATE(96)] = 3471,
  [SMALL_STATE(97)] = 3488,
  [SMALL_STATE(98)] = 3511,
  [SMALL_STATE(99)] = 3528,
  [SMALL_STATE(100)] = 3550,
  [SMALL_STATE(101)] = 3572,
  [SMALL_STATE(102)] = 3588,
  [SMALL_STATE(103)] = 3604,
  [SMALL_STATE(104)] = 3620,
  [SMALL_STATE(105)] = 3642,
  [SMALL_STATE(106)] = 3658,
  [SMALL_STATE(107)] = 3680,
  [SMALL_STATE(108)] = 3702,
  [SMALL_STATE(109)] = 3724,
  [SMALL_STATE(110)] = 3740,
  [SMALL_STATE(111)] = 3756,
  [SMALL_STATE(112)] = 3773,
  [SMALL_STATE(113)] = 3790,
  [SMALL_STATE(114)] = 3809,
  [SMALL_STATE(115)] = 3825,
  [SMALL_STATE(116)] = 3841,
  [SMALL_STATE(117)] = 3865,
  [SMALL_STATE(118)] = 3881,
  [SMALL_STATE(119)] = 3901,
  [SMALL_STATE(120)] = 3917,
  [SMALL_STATE(121)] = 3933,
  [SMALL_STATE(122)] = 3949,
  [SMALL_STATE(123)] = 3965,
  [SMALL_STATE(124)] = 3981,
  [SMALL_STATE(125)] = 3997,
  [SMALL_STATE(126)] = 4013,
  [SMALL_STATE(127)] = 4029,
  [SMALL_STATE(128)] = 4045,
  [SMALL_STATE(129)] = 4063,
  [SMALL_STATE(130)] = 4078,
  [SMALL_STATE(131)] = 4096,
  [SMALL_STATE(132)] = 4114,
  [SMALL_STATE(133)] = 4132,
  [SMALL_STATE(134)] = 4150,
  [SMALL_STATE(135)] = 4167,
  [SMALL_STATE(136)] = 4182,
  [SMALL_STATE(137)] = 4197,
  [SMALL_STATE(138)] = 4214,
  [SMALL_STATE(139)] = 4229,
  [SMALL_STATE(140)] = 4241,
  [SMALL_STATE(141)] = 4257,
  [SMALL_STATE(142)] = 4269,
  [SMALL_STATE(143)] = 4281,
  [SMALL_STATE(144)] = 4293,
  [SMALL_STATE(145)] = 4305,
  [SMALL_STATE(146)] = 4317,
  [SMALL_STATE(147)] = 4333,
  [SMALL_STATE(148)] = 4346,
  [SMALL_STATE(149)] = 4359,
  [SMALL_STATE(150)] = 4372,
  [SMALL_STATE(151)] = 4385,
  [SMALL_STATE(152)] = 4398,
  [SMALL_STATE(153)] = 4411,
  [SMALL_STATE(154)] = 4424,
  [SMALL_STATE(155)] = 4437,
  [SMALL_STATE(156)] = 4450,
  [SMALL_STATE(157)] = 4461,
  [SMALL_STATE(158)] = 4474,
  [SMALL_STATE(159)] = 4487,
  [SMALL_STATE(160)] = 4498,
  [SMALL_STATE(161)] = 4511,
  [SMALL_STATE(162)] = 4524,
  [SMALL_STATE(163)] = 4537,
  [SMALL_STATE(164)] = 4550,
  [SMALL_STATE(165)] = 4561,
  [SMALL_STATE(166)] = 4574,
  [SMALL_STATE(167)] = 4587,
  [SMALL_STATE(168)] = 4600,
  [SMALL_STATE(169)] = 4613,
  [SMALL_STATE(170)] = 4626,
  [SMALL_STATE(171)] = 4639,
  [SMALL_STATE(172)] = 4652,
  [SMALL_STATE(173)] = 4665,
  [SMALL_STATE(174)] = 4678,
  [SMALL_STATE(175)] = 4691,
  [SMALL_STATE(176)] = 4704,
  [SMALL_STATE(177)] = 4717,
  [SMALL_STATE(178)] = 4725,
  [SMALL_STATE(179)] = 4735,
  [SMALL_STATE(180)] = 4745,
  [SMALL_STATE(181)] = 4753,
  [SMALL_STATE(182)] = 4761,
  [SMALL_STATE(183)] = 4771,
  [SMALL_STATE(184)] = 4781,
  [SMALL_STATE(185)] = 4791,
  [SMALL_STATE(186)] = 4801,
  [SMALL_STATE(187)] = 4809,
  [SMALL_STATE(188)] = 4819,
  [SMALL_STATE(189)] = 4829,
  [SMALL_STATE(190)] = 4839,
  [SMALL_STATE(191)] = 4849,
  [SMALL_STATE(192)] = 4859,
  [SMALL_STATE(193)] = 4867,
  [SMALL_STATE(194)] = 4877,
  [SMALL_STATE(195)] = 4885,
  [SMALL_STATE(196)] = 4895,
  [SMALL_STATE(197)] = 4903,
  [SMALL_STATE(198)] = 4911,
  [SMALL_STATE(199)] = 4921,
  [SMALL_STATE(200)] = 4931,
  [SMALL_STATE(201)] = 4939,
  [SMALL_STATE(202)] = 4947,
  [SMALL_STATE(203)] = 4957,
  [SMALL_STATE(204)] = 4965,
  [SMALL_STATE(205)] = 4973,
  [SMALL_STATE(206)] = 4983,
  [SMALL_STATE(207)] = 4990,
  [SMALL_STATE(208)] = 4997,
  [SMALL_STATE(209)] = 5004,
  [SMALL_STATE(210)] = 5011,
  [SMALL_STATE(211)] = 5018,
  [SMALL_STATE(212)] = 5025,
  [SMALL_STATE(213)] = 5032,
  [SMALL_STATE(214)] = 5039,
  [SMALL_STATE(215)] = 5046,
  [SMALL_STATE(216)] = 5053,
  [SMALL_STATE(217)] = 5060,
  [SMALL_STATE(218)] = 5067,
  [SMALL_STATE(219)] = 5074,
  [SMALL_STATE(220)] = 5081,
  [SMALL_STATE(221)] = 5088,
  [SMALL_STATE(222)] = 5095,
  [SMALL_STATE(223)] = 5102,
  [SMALL_STATE(224)] = 5109,
  [SMALL_STATE(225)] = 5116,
  [SMALL_STATE(226)] = 5123,
  [SMALL_STATE(227)] = 5130,
  [SMALL_STATE(228)] = 5137,
  [SMALL_STATE(229)] = 5144,
  [SMALL_STATE(230)] = 5151,
  [SMALL_STATE(231)] = 5158,
  [SMALL_STATE(232)] = 5165,
  [SMALL_STATE(233)] = 5172,
  [SMALL_STATE(234)] = 5179,
  [SMALL_STATE(235)] = 5186,
  [SMALL_STATE(236)] = 5193,
  [SMALL_STATE(237)] = 5200,
  [SMALL_STATE(238)] = 5207,
  [SMALL_STATE(239)] = 5214,
  [SMALL_STATE(240)] = 5221,
  [SMALL_STATE(241)] = 5228,
  [SMALL_STATE(242)] = 5235,
  [SMALL_STATE(243)] = 5242,
  [SMALL_STATE(244)] = 5249,
  [SMALL_STATE(245)] = 5256,
  [SMALL_STATE(246)] = 5263,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 16),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 16),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 10),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 10),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(220),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(116),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(39),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(92),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(103),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(217),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(222),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(59),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 6),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(89),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(210),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(161),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constrained_type, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__create_function_return_type, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 11),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 7),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setof, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(39),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(217),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(59),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 13),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_body, 2, .production_id = 13),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 12),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_language, 2, .production_id = 12),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_optimizer_hint, 1),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(47),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 18),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 18),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 8),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 8),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 15),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 15),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 8),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 8),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 15),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 15),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 8),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 8),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 15),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 15),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(95),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(212),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(131),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(195),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(32),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 17),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [681] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 14),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
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
