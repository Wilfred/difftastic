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
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 2
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_function_statement_token1 = 2,
  aux_sym_create_function_statement_token2 = 3,
  aux_sym_create_function_statement_token3 = 4,
  aux_sym_create_function_statement_token4 = 5,
  aux_sym_setof_token1 = 6,
  aux_sym_constrained_type_token1 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  aux_sym_create_domain_statement_token1 = 11,
  aux_sym_create_type_statement_token1 = 12,
  aux_sym_create_index_statement_token1 = 13,
  aux_sym_create_index_statement_token2 = 14,
  aux_sym_create_index_statement_token3 = 15,
  anon_sym_CONSTRAINT = 16,
  aux_sym_column_default_token1 = 17,
  aux_sym_table_constraint_check_token1 = 18,
  aux_sym_table_constraint_foreign_key_token1 = 19,
  aux_sym_table_constraint_unique_token1 = 20,
  aux_sym_table_constraint_primary_key_token1 = 21,
  aux_sym_create_table_statement_token1 = 22,
  aux_sym_using_clause_token1 = 23,
  aux_sym_select_statement_token1 = 24,
  aux_sym_in_expression_token1 = 25,
  aux_sym_in_expression_token2 = 26,
  aux_sym_references_constraint_token1 = 27,
  aux_sym_on_update_action_token1 = 28,
  aux_sym_on_delete_action_token1 = 29,
  aux_sym__constraint_action_token1 = 30,
  aux_sym__constraint_action_token2 = 31,
  aux_sym__constraint_action_token3 = 32,
  aux_sym_where_clause_token1 = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_LT_GT = 36,
  anon_sym_EQ = 37,
  anon_sym_GT = 38,
  anon_sym_GT_EQ = 39,
  aux_sym_is_expression_token1 = 40,
  aux_sym_is_expression_token2 = 41,
  aux_sym_distinct_from_token1 = 42,
  aux_sym_boolean_expression_token1 = 43,
  aux_sym_boolean_expression_token2 = 44,
  sym_NULL = 45,
  sym_TRUE = 46,
  sym_FALSE = 47,
  sym_number = 48,
  sym_identifier = 49,
  anon_sym_SQUOTE = 50,
  aux_sym_string_token1 = 51,
  anon_sym_DOLLAR_DOLLAR = 52,
  aux_sym_string_token2 = 53,
  anon_sym_DASH_GT_GT = 54,
  aux_sym_ordered_expression_token1 = 55,
  aux_sym_ordered_expression_token2 = 56,
  anon_sym_LBRACK = 57,
  anon_sym_RBRACK = 58,
  anon_sym_COLON_COLON = 59,
  sym_comment = 60,
  anon_sym_TILDE = 61,
  anon_sym_PLUS = 62,
  sym_source_file = 63,
  sym__statement = 64,
  sym_create_function_statement = 65,
  sym__create_function_return_type = 66,
  sym_setof = 67,
  sym_constrained_type = 68,
  sym_create_function_parameter = 69,
  sym_create_function_parameters = 70,
  sym__function_body = 71,
  sym_create_domain_statement = 72,
  sym_create_type_statement = 73,
  sym_create_index_statement = 74,
  sym_create_table_column_parameter = 75,
  sym_named_constraint = 76,
  sym_column_default = 77,
  sym_create_table_parameters = 78,
  sym__table_constraint = 79,
  sym_table_constraint_check = 80,
  sym_table_constraint_foreign_key = 81,
  sym_table_constraint_unique = 82,
  sym_table_constraint_primary_key = 83,
  sym_primary_key_constraint = 84,
  sym_create_table_statement = 85,
  sym_using_clause = 86,
  sym_index_table_parameters = 87,
  sym_select_statement = 88,
  sym_in_expression = 89,
  sym_tuple = 90,
  sym_select_clause = 91,
  sym_references_constraint = 92,
  sym_on_update_action = 93,
  sym_on_delete_action = 94,
  sym__constraint_action = 95,
  sym_unique_constraint = 96,
  sym_null_constraint = 97,
  sym_check_constraint = 98,
  sym_parameter = 99,
  sym_parameters = 100,
  sym_function_call = 101,
  sym_where_clause = 102,
  sym_comparison_operator = 103,
  sym__parenthesized_expression = 104,
  sym_is_expression = 105,
  sym_distinct_from = 106,
  sym_boolean_expression = 107,
  sym_string = 108,
  sym_field_access = 109,
  sym_ordered_expression = 110,
  sym__type_alias = 111,
  sym_array_type = 112,
  sym__type = 113,
  sym_type_cast = 114,
  sym_binary_expression = 115,
  sym__expression = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_create_function_parameters_repeat1 = 118,
  aux_sym_create_domain_statement_repeat1 = 119,
  aux_sym_create_table_column_parameter_repeat1 = 120,
  aux_sym_create_table_parameters_repeat1 = 121,
  aux_sym_table_constraint_foreign_key_repeat1 = 122,
  aux_sym_index_table_parameters_repeat1 = 123,
  aux_sym_tuple_repeat1 = 124,
  aux_sym_parameters_repeat1 = 125,
  alias_sym_function_body = 126,
  alias_sym_type = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_function_statement_token1] = "create_function_statement_token1",
  [aux_sym_create_function_statement_token2] = "create_function_statement_token2",
  [aux_sym_create_function_statement_token3] = "create_function_statement_token3",
  [aux_sym_create_function_statement_token4] = "create_function_statement_token4",
  [aux_sym_setof_token1] = "setof_token1",
  [aux_sym_constrained_type_token1] = "not_null",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_is_expression_token1] = "is_expression_token1",
  [aux_sym_is_expression_token2] = "is_expression_token2",
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
  [aux_sym_create_function_parameters_repeat1] = "create_function_parameters_repeat1",
  [aux_sym_create_domain_statement_repeat1] = "create_domain_statement_repeat1",
  [aux_sym_create_table_column_parameter_repeat1] = "create_table_column_parameter_repeat1",
  [aux_sym_create_table_parameters_repeat1] = "create_table_parameters_repeat1",
  [aux_sym_table_constraint_foreign_key_repeat1] = "table_constraint_foreign_key_repeat1",
  [aux_sym_index_table_parameters_repeat1] = "index_table_parameters_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [alias_sym_function_body] = "function_body",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_function_statement_token1] = aux_sym_create_function_statement_token1,
  [aux_sym_create_function_statement_token2] = aux_sym_create_function_statement_token2,
  [aux_sym_create_function_statement_token3] = aux_sym_create_function_statement_token3,
  [aux_sym_create_function_statement_token4] = aux_sym_create_function_statement_token4,
  [aux_sym_setof_token1] = aux_sym_setof_token1,
  [aux_sym_constrained_type_token1] = aux_sym_constrained_type_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_is_expression_token1] = aux_sym_is_expression_token1,
  [aux_sym_is_expression_token2] = aux_sym_is_expression_token2,
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
  [aux_sym_create_function_parameters_repeat1] = aux_sym_create_function_parameters_repeat1,
  [aux_sym_create_domain_statement_repeat1] = aux_sym_create_domain_statement_repeat1,
  [aux_sym_create_table_column_parameter_repeat1] = aux_sym_create_table_column_parameter_repeat1,
  [aux_sym_create_table_parameters_repeat1] = aux_sym_create_table_parameters_repeat1,
  [aux_sym_table_constraint_foreign_key_repeat1] = aux_sym_table_constraint_foreign_key_repeat1,
  [aux_sym_index_table_parameters_repeat1] = aux_sym_index_table_parameters_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [alias_sym_function_body] = alias_sym_function_body,
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
  [aux_sym_create_function_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_function_statement_token4] = {
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
  [anon_sym_EQ] = {
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
  [aux_sym_is_expression_token2] = {
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
  [alias_sym_function_body] = {
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
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 1},
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
  [10] = {
    [0] = alias_sym_function_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_string, 2,
    sym_string,
    alias_sym_function_body,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(227);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '+') ADVANCE(370);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(228);
      if (lookahead == '<') ADVANCE(268);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(68);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(141);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == 'U') ADVANCE(149);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '[') ADVANCE(363);
      if (lookahead == '\\') SKIP(220)
      if (lookahead == ']') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '~') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
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
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(21)
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
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '[') ADVANCE(363);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'F') ADVANCE(289);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == 'T') ADVANCE(326);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(350);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == '/') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(355);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == 'I') ADVANCE(158);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == '\\') SKIP(6)
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
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(366);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(368);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(180);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == '[') ADVANCE(363);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(309);
      if (lookahead == 'F') ADVANCE(322);
      if (lookahead == 'P') ADVANCE(324);
      if (lookahead == 'U') ADVANCE(320);
      if (lookahead == '\\') SKIP(4)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(303);
      if (lookahead == '\\') SKIP(8)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(365);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(360);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(181);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'Y') ADVANCE(168);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(204);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(198);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(172);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(200);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(134);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(362);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(361);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(189);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(193);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(191);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(197);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(277);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(166);
      if (lookahead == 'F') ADVANCE(207);
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'D') ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == 'D') ADVANCE(97);
      if (lookahead == 'U') ADVANCE(167);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(182);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(283);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(266);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(241);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(264);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(232);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(262);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(177);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(199);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 98:
      if (lookahead == 'F') ADVANCE(233);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(44);
      END_STATE();
    case 100:
      if (lookahead == 'F') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(173);
      END_STATE();
    case 102:
      if (lookahead == 'F') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(201);
      if (lookahead == 'T') ADVANCE(203);
      END_STATE();
    case 104:
      if (lookahead == 'G') ADVANCE(254);
      END_STATE();
    case 105:
      if (lookahead == 'G') ADVANCE(205);
      END_STATE();
    case 106:
      if (lookahead == 'G') ADVANCE(144);
      END_STATE();
    case 107:
      if (lookahead == 'G') ADVANCE(78);
      END_STATE();
    case 108:
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 109:
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 'H') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'I') ADVANCE(182);
      END_STATE();
    case 114:
      if (lookahead == 'I') ADVANCE(150);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(164);
      END_STATE();
    case 117:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 118:
      if (lookahead == 'I') ADVANCE(157);
      END_STATE();
    case 119:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 121:
      if (lookahead == 'K') ADVANCE(247);
      END_STATE();
    case 122:
      if (lookahead == 'K') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'K') ADVANCE(87);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(279);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(265);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(235);
      END_STATE();
    case 127:
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 128:
      if (lookahead == 'L') ADVANCE(186);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 130:
      if (lookahead == 'L') ADVANCE(190);
      END_STATE();
    case 131:
      if (lookahead == 'L') ADVANCE(126);
      END_STATE();
    case 132:
      if (lookahead == 'L') ADVANCE(88);
      END_STATE();
    case 133:
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 134:
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 135:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 136:
      if (lookahead == 'M') ADVANCE(276);
      END_STATE();
    case 137:
      if (lookahead == 'M') ADVANCE(47);
      END_STATE();
    case 138:
      if (lookahead == 'M') ADVANCE(49);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(231);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(259);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead == 'R') ADVANCE(278);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(239);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(229);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(258);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(278);
      END_STATE();
    case 153:
      if (lookahead == 'N') ADVANCE(183);
      END_STATE();
    case 154:
      if (lookahead == 'N') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 156:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 157:
      if (lookahead == 'N') ADVANCE(192);
      END_STATE();
    case 158:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 159:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 160:
      if (lookahead == 'N') ADVANCE(210);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(188);
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 162:
      if (lookahead == 'O') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 'O') ADVANCE(187);
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 164:
      if (lookahead == 'O') ADVANCE(146);
      END_STATE();
    case 165:
      if (lookahead == 'O') ADVANCE(195);
      END_STATE();
    case 166:
      if (lookahead == 'O') ADVANCE(138);
      END_STATE();
    case 167:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 168:
      if (lookahead == 'P') ADVANCE(79);
      END_STATE();
    case 169:
      if (lookahead == 'Q') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(111);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(206);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(90);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 179:
      if (lookahead == 'R') ADVANCE(153);
      END_STATE();
    case 180:
      if (lookahead == 'S') ADVANCE(231);
      END_STATE();
    case 181:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 182:
      if (lookahead == 'S') ADVANCE(194);
      END_STATE();
    case 183:
      if (lookahead == 'S') ADVANCE(230);
      END_STATE();
    case 184:
      if (lookahead == 'S') ADVANCE(260);
      END_STATE();
    case 185:
      if (lookahead == 'S') ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(257);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(255);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(246);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(263);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(245);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(176);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(175);
      END_STATE();
    case 202:
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 203:
      if (lookahead == 'U') ADVANCE(179);
      END_STATE();
    case 204:
      if (lookahead == 'U') ADVANCE(130);
      END_STATE();
    case 205:
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 206:
      if (lookahead == 'U') ADVANCE(72);
      END_STATE();
    case 207:
      if (lookahead == 'U') ADVANCE(156);
      END_STATE();
    case 208:
      if (lookahead == 'U') ADVANCE(76);
      END_STATE();
    case 209:
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 210:
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 211:
      if (lookahead == 'X') ADVANCE(243);
      END_STATE();
    case 212:
      if (lookahead == 'Y') ADVANCE(249);
      END_STATE();
    case 213:
      if (lookahead == 'Y') ADVANCE(252);
      END_STATE();
    case 214:
      if (lookahead == 'Y') ADVANCE(19);
      END_STATE();
    case 215:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(357);
      END_STATE();
    case 219:
      if (eof) ADVANCE(227);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 220:
      if (eof) ADVANCE(227);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(219)
      END_STATE();
    case 221:
      if (eof) ADVANCE(227);
      if (lookahead == '\n') SKIP(226)
      END_STATE();
    case 222:
      if (eof) ADVANCE(227);
      if (lookahead == '\n') SKIP(226)
      if (lookahead == '\r') SKIP(221)
      END_STATE();
    case 223:
      if (eof) ADVANCE(227);
      if (lookahead == '\n') SKIP(225)
      END_STATE();
    case 224:
      if (eof) ADVANCE(227);
      if (lookahead == '\n') SKIP(225)
      if (lookahead == '\r') SKIP(223)
      END_STATE();
    case 225:
      if (eof) ADVANCE(227);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(228);
      if (lookahead == 'C') ADVANCE(327);
      if (lookahead == 'F') ADVANCE(289);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == 'S') ADVANCE(302);
      if (lookahead == 'T') ADVANCE(326);
      if (lookahead == 'W') ADVANCE(308);
      if (lookahead == '\\') SKIP(224)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(225)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 226:
      if (eof) ADVANCE(227);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '+') ADVANCE(370);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(228);
      if (lookahead == '<') ADVANCE(268);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '[') ADVANCE(363);
      if (lookahead == '\\') SKIP(222)
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '~') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(226)
      END_STATE();
    case 227:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token4);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_constrained_type_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(269);
      if (lookahead == '>') ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_is_expression_token2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_NULL);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_TRUE);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_FALSE);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'A') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'E') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'F') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'G') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'H') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'H') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'K') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'L') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'O') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'O') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'Q') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'U') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'U') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'U') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'Y') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\r') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(349);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(355);
      if (lookahead == '\r') ADVANCE(352);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(355);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '*') ADVANCE(359);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == '/') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(355);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 226},
  [3] = {.lex_state = 226},
  [4] = {.lex_state = 226},
  [5] = {.lex_state = 226},
  [6] = {.lex_state = 226},
  [7] = {.lex_state = 226},
  [8] = {.lex_state = 226},
  [9] = {.lex_state = 226},
  [10] = {.lex_state = 226},
  [11] = {.lex_state = 226},
  [12] = {.lex_state = 226},
  [13] = {.lex_state = 226},
  [14] = {.lex_state = 226},
  [15] = {.lex_state = 226},
  [16] = {.lex_state = 226},
  [17] = {.lex_state = 226},
  [18] = {.lex_state = 226},
  [19] = {.lex_state = 226},
  [20] = {.lex_state = 226},
  [21] = {.lex_state = 226},
  [22] = {.lex_state = 226},
  [23] = {.lex_state = 226},
  [24] = {.lex_state = 226},
  [25] = {.lex_state = 225},
  [26] = {.lex_state = 226},
  [27] = {.lex_state = 226},
  [28] = {.lex_state = 226},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 226},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 226},
  [45] = {.lex_state = 226},
  [46] = {.lex_state = 226},
  [47] = {.lex_state = 226},
  [48] = {.lex_state = 226},
  [49] = {.lex_state = 226},
  [50] = {.lex_state = 226},
  [51] = {.lex_state = 226},
  [52] = {.lex_state = 226},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 226},
  [56] = {.lex_state = 226},
  [57] = {.lex_state = 226},
  [58] = {.lex_state = 226},
  [59] = {.lex_state = 226},
  [60] = {.lex_state = 226},
  [61] = {.lex_state = 226},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 226},
  [64] = {.lex_state = 226},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 226},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 226},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 226},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 226},
  [76] = {.lex_state = 226},
  [77] = {.lex_state = 226},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 226},
  [81] = {.lex_state = 226},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 26},
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
  [142] = {.lex_state = 32},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 226},
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
  [163] = {.lex_state = 226},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 226},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 226},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 226},
  [175] = {.lex_state = 226},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 21},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 226},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 21},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 21},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 347},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 26},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 21},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 21},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 21},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 21},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 21},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 21},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_function_statement_token1] = ACTIONS(1),
    [aux_sym_create_function_statement_token2] = ACTIONS(1),
    [aux_sym_create_function_statement_token3] = ACTIONS(1),
    [aux_sym_create_function_statement_token4] = ACTIONS(1),
    [aux_sym_setof_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_is_expression_token1] = ACTIONS(1),
    [aux_sym_is_expression_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(207),
    [sym__statement] = STATE(53),
    [sym_create_function_statement] = STATE(93),
    [sym_create_domain_statement] = STATE(93),
    [sym_create_type_statement] = STATE(93),
    [sym_create_index_statement] = STATE(93),
    [sym_create_table_statement] = STATE(93),
    [sym_select_statement] = STATE(93),
    [aux_sym_source_file_repeat1] = STATE(53),
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
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(23), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 30,
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
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [50] = 3,
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
      aux_sym_create_function_statement_token4,
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
      anon_sym_EQ,
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
      anon_sym_EQ,
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
  [135] = 3,
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
      anon_sym_EQ,
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
  [177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(23), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 30,
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
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
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
      anon_sym_EQ,
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
      anon_sym_EQ,
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
      anon_sym_EQ,
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
  [347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 30,
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
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 31,
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
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
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
  [433] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 21,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [488] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(83), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(81), 21,
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
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 30,
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
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 30,
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
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [625] = 3,
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
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [666] = 3,
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
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(103), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 29,
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
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [750] = 3,
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
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [791] = 3,
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
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [832] = 3,
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
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 28,
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
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [918] = 3,
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
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [959] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 16,
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
  [1013] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      aux_sym_where_clause_token1,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(74), 1,
      sym_select_clause,
    STATE(85), 1,
      sym_where_clause,
    ACTIONS(131), 2,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(135), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
    STATE(27), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1071] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
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
  [1119] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      aux_sym_create_index_statement_token1,
    STATE(70), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
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
  [1171] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(155), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1216] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(159), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(50), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1256] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(153), 1,
      sym_ordered_expression,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(161), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(49), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1296] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(143), 1,
      sym_ordered_expression,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(163), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(47), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1336] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(165), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(26), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1373] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(167), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(28), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1410] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(169), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(60), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1447] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(171), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(24), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1484] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(173), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(12), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1521] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(175), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(13), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1558] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(177), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(51), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(179), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(55), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1632] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(181), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(22), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1669] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
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
      sym_NULL,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(44), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1714] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(201), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(19), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1751] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(6), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(203), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(18), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1788] = 11,
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
      sym_NULL,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(46), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(207), 17,
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
  [1856] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(216), 1,
      aux_sym_column_default_token1,
    ACTIONS(219), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(222), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(225), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(228), 1,
      aux_sym_in_expression_token1,
    ACTIONS(231), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(234), 1,
      sym_NULL,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(46), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1898] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(241), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(243), 17,
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
  [1970] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(241), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2011] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2053] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2095] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(195), 1,
      aux_sym_in_expression_token1,
    ACTIONS(199), 1,
      sym_NULL,
    ACTIONS(255), 1,
      aux_sym_create_index_statement_token1,
    STATE(58), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2128] = 10,
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
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    STATE(54), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(93), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2165] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(264), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(267), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(270), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(273), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(276), 1,
      aux_sym_select_statement_token1,
    STATE(54), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(93), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2202] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2239] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(287), 1,
      aux_sym_on_delete_action_token1,
    STATE(152), 1,
      sym_on_delete_action,
    STATE(163), 1,
      sym_on_update_action,
    ACTIONS(283), 10,
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
  [2270] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(287), 1,
      aux_sym_on_delete_action_token1,
    STATE(174), 1,
      sym_on_update_action,
    STATE(175), 1,
      sym_on_delete_action,
    ACTIONS(289), 10,
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
  [2298] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(195), 1,
      aux_sym_in_expression_token1,
    ACTIONS(199), 1,
      sym_NULL,
    ACTIONS(293), 1,
      aux_sym_create_index_statement_token1,
    STATE(61), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(287), 1,
      aux_sym_on_delete_action_token1,
    STATE(168), 1,
      sym_on_update_action,
    STATE(172), 1,
      sym_on_delete_action,
    ACTIONS(295), 10,
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
  [2356] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_in_expression_token1,
    ACTIONS(69), 1,
      aux_sym_in_expression_token2,
    ACTIONS(75), 1,
      aux_sym_is_expression_token1,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(73), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2392] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(303), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(306), 1,
      aux_sym_in_expression_token1,
    ACTIONS(309), 1,
      sym_NULL,
    STATE(61), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(62), 1,
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
  [2446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(315), 10,
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
  [2468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 11,
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
  [2485] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(321), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(323), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(325), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(151), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 11,
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
  [2529] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(321), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(323), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(325), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(141), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [2556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 11,
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
  [2573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(315), 10,
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
  [2592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      aux_sym_create_index_statement_token1,
    STATE(62), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(333), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(341), 1,
      aux_sym_where_clause_token1,
    STATE(95), 1,
      sym_where_clause,
    ACTIONS(337), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 10,
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
  [2653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_where_clause_token1,
    ACTIONS(347), 1,
      aux_sym_create_index_statement_token1,
    STATE(100), 1,
      sym_where_clause,
    ACTIONS(345), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_where_clause_token1,
    ACTIONS(351), 1,
      aux_sym_create_index_statement_token1,
    STATE(97), 1,
      sym_where_clause,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 10,
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
  [2713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 10,
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
  [2729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 10,
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
  [2745] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_where_clause_token1,
    ACTIONS(361), 1,
      aux_sym_create_index_statement_token1,
    STATE(98), 1,
      sym_where_clause,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_where_clause_token1,
    ACTIONS(365), 1,
      aux_sym_create_index_statement_token1,
    STATE(92), 1,
      sym_where_clause,
    ACTIONS(363), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2789] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
      sym_NULL,
  [2805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 10,
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
  [2821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(373), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(375), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(383), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_setof_token1,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(142), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(178), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(395), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2974] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(81), 1,
      sym_type_cast,
    STATE(69), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [2998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(345), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(409), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(405), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(411), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3064] = 3,
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
      aux_sym_select_statement_token1,
  [3080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(419), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(423), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(431), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(41), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(148), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(437), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_is_expression_token2,
    ACTIONS(443), 1,
      aux_sym_distinct_from_token1,
    STATE(21), 1,
      sym_distinct_from,
    ACTIONS(445), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [3194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(218), 1,
      sym_constrained_type,
    STATE(123), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(117), 1,
      sym_create_function_parameter,
    STATE(128), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_distinct_from_token1,
    STATE(20), 1,
      sym_distinct_from,
    ACTIONS(451), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [3239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(157), 1,
      sym_create_function_parameter,
    STATE(128), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      aux_sym_using_clause_token1,
    STATE(79), 1,
      sym_index_table_parameters,
    STATE(161), 1,
      sym_using_clause,
  [3270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(10), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      sym__constraint_action,
    ACTIONS(457), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [3294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(129), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(41), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(52), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      aux_sym_using_clause_token1,
    STATE(71), 1,
      sym_index_table_parameters,
    STATE(150), 1,
      sym_using_clause,
  [3346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(196), 1,
      sym_string,
    STATE(198), 1,
      sym__function_body,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(64), 1,
      sym__constraint_action,
    ACTIONS(459), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [3374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_create_function_parameters_repeat1,
  [3387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_create_table_parameters_repeat1,
  [3400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 3,
      aux_sym_create_function_statement_token3,
      aux_sym_constrained_type_token1,
      anon_sym_LBRACK,
  [3409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_create_function_parameters_repeat1,
  [3422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_create_table_parameters_repeat1,
  [3435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 3,
      aux_sym_create_function_statement_token3,
      aux_sym_constrained_type_token1,
      anon_sym_LBRACK,
  [3444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(481), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(483), 1,
      anon_sym_LBRACK,
  [3457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_tuple_repeat1,
  [3470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_index_table_parameters_repeat1,
  [3483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(14), 1,
      sym_string,
  [3496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(489), 1,
      aux_sym_create_index_statement_token2,
    STATE(200), 1,
      sym_unique_constraint,
  [3509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(493), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_parameters_repeat1,
  [3570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_parameters_repeat1,
  [3622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_create_table_parameters_repeat1,
  [3687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym_constrained_type_token1,
    ACTIONS(483), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      aux_sym_create_function_statement_token3,
  [3700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_index_table_parameters_repeat1,
  [3713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_index_table_parameters_repeat1,
  [3726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_parameters_repeat1,
  [3739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_tuple_repeat1,
  [3752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_create_function_parameters_repeat1,
  [3765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(540), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_references_constraint_token1,
    STATE(158), 1,
      sym_references_constraint,
  [3786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_index_table_parameters,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_on_update_action_token1,
    STATE(77), 1,
      sym_on_update_action,
  [3814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_tuple,
  [3840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_create_table_parameters,
  [3850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_index_table_parameters,
  [3892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_on_delete_action_token1,
    STATE(77), 1,
      sym_on_delete_action,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_references_constraint_token1,
    STATE(162), 1,
      sym_references_constraint,
  [3928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_create_function_parameters,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_on_delete_action_token1,
    STATE(75), 1,
      sym_on_delete_action,
  [3956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(154), 1,
      sym_parameter,
  [3974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(136), 1,
      sym_parameter,
  [3984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_on_update_action_token1,
    STATE(75), 1,
      sym_on_update_action,
  [3994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_tuple,
  [4004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_on_delete_action_token1,
    STATE(72), 1,
      sym_on_delete_action,
  [4014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_on_update_action_token1,
    STATE(72), 1,
      sym_on_update_action,
  [4024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_parameters,
  [4042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_create_function_statement_token3,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_identifier,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_create_index_statement_token3,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      aux_sym_in_expression_token2,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_identifier,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_create_index_statement_token3,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_DOLLAR_DOLLAR,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_create_function_statement_token2,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_identifier,
  [4119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_identifier,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_create_function_statement_token2,
  [4154] = 2,
    ACTIONS(596), 1,
      aux_sym_string_token2,
    ACTIONS(598), 1,
      sym_comment,
  [4161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
  [4168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      aux_sym_create_function_statement_token4,
  [4175] = 2,
    ACTIONS(598), 1,
      sym_comment,
    ACTIONS(604), 1,
      aux_sym_string_token1,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      aux_sym_create_function_statement_token4,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      aux_sym_create_function_statement_token2,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_create_index_statement_token2,
  [4203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_identifier,
  [4217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_identifier,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_identifier,
  [4231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_create_function_statement_token3,
  [4238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym_NULL,
  [4245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
  [4252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_identifier,
  [4259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_identifier,
  [4266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_identifier,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym_identifier,
  [4280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
  [4287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_identifier,
  [4294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym_identifier,
  [4301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_identifier,
  [4308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_identifier,
  [4315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      aux_sym_create_function_statement_token3,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym_create_function_statement_token3,
  [4329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 391,
  [SMALL_STATE(12)] = 433,
  [SMALL_STATE(13)] = 488,
  [SMALL_STATE(14)] = 543,
  [SMALL_STATE(15)] = 584,
  [SMALL_STATE(16)] = 625,
  [SMALL_STATE(17)] = 666,
  [SMALL_STATE(18)] = 707,
  [SMALL_STATE(19)] = 750,
  [SMALL_STATE(20)] = 791,
  [SMALL_STATE(21)] = 832,
  [SMALL_STATE(22)] = 873,
  [SMALL_STATE(23)] = 918,
  [SMALL_STATE(24)] = 959,
  [SMALL_STATE(25)] = 1013,
  [SMALL_STATE(26)] = 1071,
  [SMALL_STATE(27)] = 1119,
  [SMALL_STATE(28)] = 1171,
  [SMALL_STATE(29)] = 1216,
  [SMALL_STATE(30)] = 1256,
  [SMALL_STATE(31)] = 1296,
  [SMALL_STATE(32)] = 1336,
  [SMALL_STATE(33)] = 1373,
  [SMALL_STATE(34)] = 1410,
  [SMALL_STATE(35)] = 1447,
  [SMALL_STATE(36)] = 1484,
  [SMALL_STATE(37)] = 1521,
  [SMALL_STATE(38)] = 1558,
  [SMALL_STATE(39)] = 1595,
  [SMALL_STATE(40)] = 1632,
  [SMALL_STATE(41)] = 1669,
  [SMALL_STATE(42)] = 1714,
  [SMALL_STATE(43)] = 1751,
  [SMALL_STATE(44)] = 1788,
  [SMALL_STATE(45)] = 1830,
  [SMALL_STATE(46)] = 1856,
  [SMALL_STATE(47)] = 1898,
  [SMALL_STATE(48)] = 1944,
  [SMALL_STATE(49)] = 1970,
  [SMALL_STATE(50)] = 2011,
  [SMALL_STATE(51)] = 2053,
  [SMALL_STATE(52)] = 2095,
  [SMALL_STATE(53)] = 2128,
  [SMALL_STATE(54)] = 2165,
  [SMALL_STATE(55)] = 2202,
  [SMALL_STATE(56)] = 2239,
  [SMALL_STATE(57)] = 2270,
  [SMALL_STATE(58)] = 2298,
  [SMALL_STATE(59)] = 2328,
  [SMALL_STATE(60)] = 2356,
  [SMALL_STATE(61)] = 2392,
  [SMALL_STATE(62)] = 2422,
  [SMALL_STATE(63)] = 2446,
  [SMALL_STATE(64)] = 2468,
  [SMALL_STATE(65)] = 2485,
  [SMALL_STATE(66)] = 2512,
  [SMALL_STATE(67)] = 2529,
  [SMALL_STATE(68)] = 2556,
  [SMALL_STATE(69)] = 2573,
  [SMALL_STATE(70)] = 2592,
  [SMALL_STATE(71)] = 2615,
  [SMALL_STATE(72)] = 2637,
  [SMALL_STATE(73)] = 2653,
  [SMALL_STATE(74)] = 2675,
  [SMALL_STATE(75)] = 2697,
  [SMALL_STATE(76)] = 2713,
  [SMALL_STATE(77)] = 2729,
  [SMALL_STATE(78)] = 2745,
  [SMALL_STATE(79)] = 2767,
  [SMALL_STATE(80)] = 2789,
  [SMALL_STATE(81)] = 2805,
  [SMALL_STATE(82)] = 2821,
  [SMALL_STATE(83)] = 2840,
  [SMALL_STATE(84)] = 2857,
  [SMALL_STATE(85)] = 2874,
  [SMALL_STATE(86)] = 2890,
  [SMALL_STATE(87)] = 2906,
  [SMALL_STATE(88)] = 2926,
  [SMALL_STATE(89)] = 2942,
  [SMALL_STATE(90)] = 2958,
  [SMALL_STATE(91)] = 2974,
  [SMALL_STATE(92)] = 2998,
  [SMALL_STATE(93)] = 3014,
  [SMALL_STATE(94)] = 3032,
  [SMALL_STATE(95)] = 3048,
  [SMALL_STATE(96)] = 3064,
  [SMALL_STATE(97)] = 3080,
  [SMALL_STATE(98)] = 3096,
  [SMALL_STATE(99)] = 3112,
  [SMALL_STATE(100)] = 3128,
  [SMALL_STATE(101)] = 3144,
  [SMALL_STATE(102)] = 3161,
  [SMALL_STATE(103)] = 3176,
  [SMALL_STATE(104)] = 3194,
  [SMALL_STATE(105)] = 3209,
  [SMALL_STATE(106)] = 3224,
  [SMALL_STATE(107)] = 3239,
  [SMALL_STATE(108)] = 3254,
  [SMALL_STATE(109)] = 3270,
  [SMALL_STATE(110)] = 3282,
  [SMALL_STATE(111)] = 3294,
  [SMALL_STATE(112)] = 3306,
  [SMALL_STATE(113)] = 3318,
  [SMALL_STATE(114)] = 3330,
  [SMALL_STATE(115)] = 3346,
  [SMALL_STATE(116)] = 3362,
  [SMALL_STATE(117)] = 3374,
  [SMALL_STATE(118)] = 3387,
  [SMALL_STATE(119)] = 3400,
  [SMALL_STATE(120)] = 3409,
  [SMALL_STATE(121)] = 3422,
  [SMALL_STATE(122)] = 3435,
  [SMALL_STATE(123)] = 3444,
  [SMALL_STATE(124)] = 3457,
  [SMALL_STATE(125)] = 3470,
  [SMALL_STATE(126)] = 3483,
  [SMALL_STATE(127)] = 3496,
  [SMALL_STATE(128)] = 3509,
  [SMALL_STATE(129)] = 3520,
  [SMALL_STATE(130)] = 3531,
  [SMALL_STATE(131)] = 3544,
  [SMALL_STATE(132)] = 3557,
  [SMALL_STATE(133)] = 3570,
  [SMALL_STATE(134)] = 3583,
  [SMALL_STATE(135)] = 3596,
  [SMALL_STATE(136)] = 3609,
  [SMALL_STATE(137)] = 3622,
  [SMALL_STATE(138)] = 3635,
  [SMALL_STATE(139)] = 3648,
  [SMALL_STATE(140)] = 3661,
  [SMALL_STATE(141)] = 3674,
  [SMALL_STATE(142)] = 3687,
  [SMALL_STATE(143)] = 3700,
  [SMALL_STATE(144)] = 3713,
  [SMALL_STATE(145)] = 3726,
  [SMALL_STATE(146)] = 3739,
  [SMALL_STATE(147)] = 3752,
  [SMALL_STATE(148)] = 3765,
  [SMALL_STATE(149)] = 3776,
  [SMALL_STATE(150)] = 3786,
  [SMALL_STATE(151)] = 3796,
  [SMALL_STATE(152)] = 3804,
  [SMALL_STATE(153)] = 3814,
  [SMALL_STATE(154)] = 3822,
  [SMALL_STATE(155)] = 3830,
  [SMALL_STATE(156)] = 3840,
  [SMALL_STATE(157)] = 3850,
  [SMALL_STATE(158)] = 3858,
  [SMALL_STATE(159)] = 3866,
  [SMALL_STATE(160)] = 3874,
  [SMALL_STATE(161)] = 3882,
  [SMALL_STATE(162)] = 3892,
  [SMALL_STATE(163)] = 3900,
  [SMALL_STATE(164)] = 3910,
  [SMALL_STATE(165)] = 3918,
  [SMALL_STATE(166)] = 3928,
  [SMALL_STATE(167)] = 3938,
  [SMALL_STATE(168)] = 3946,
  [SMALL_STATE(169)] = 3956,
  [SMALL_STATE(170)] = 3964,
  [SMALL_STATE(171)] = 3974,
  [SMALL_STATE(172)] = 3984,
  [SMALL_STATE(173)] = 3994,
  [SMALL_STATE(174)] = 4004,
  [SMALL_STATE(175)] = 4014,
  [SMALL_STATE(176)] = 4024,
  [SMALL_STATE(177)] = 4032,
  [SMALL_STATE(178)] = 4042,
  [SMALL_STATE(179)] = 4049,
  [SMALL_STATE(180)] = 4056,
  [SMALL_STATE(181)] = 4063,
  [SMALL_STATE(182)] = 4070,
  [SMALL_STATE(183)] = 4077,
  [SMALL_STATE(184)] = 4084,
  [SMALL_STATE(185)] = 4091,
  [SMALL_STATE(186)] = 4098,
  [SMALL_STATE(187)] = 4105,
  [SMALL_STATE(188)] = 4112,
  [SMALL_STATE(189)] = 4119,
  [SMALL_STATE(190)] = 4126,
  [SMALL_STATE(191)] = 4133,
  [SMALL_STATE(192)] = 4140,
  [SMALL_STATE(193)] = 4147,
  [SMALL_STATE(194)] = 4154,
  [SMALL_STATE(195)] = 4161,
  [SMALL_STATE(196)] = 4168,
  [SMALL_STATE(197)] = 4175,
  [SMALL_STATE(198)] = 4182,
  [SMALL_STATE(199)] = 4189,
  [SMALL_STATE(200)] = 4196,
  [SMALL_STATE(201)] = 4203,
  [SMALL_STATE(202)] = 4210,
  [SMALL_STATE(203)] = 4217,
  [SMALL_STATE(204)] = 4224,
  [SMALL_STATE(205)] = 4231,
  [SMALL_STATE(206)] = 4238,
  [SMALL_STATE(207)] = 4245,
  [SMALL_STATE(208)] = 4252,
  [SMALL_STATE(209)] = 4259,
  [SMALL_STATE(210)] = 4266,
  [SMALL_STATE(211)] = 4273,
  [SMALL_STATE(212)] = 4280,
  [SMALL_STATE(213)] = 4287,
  [SMALL_STATE(214)] = 4294,
  [SMALL_STATE(215)] = 4301,
  [SMALL_STATE(216)] = 4308,
  [SMALL_STATE(217)] = 4315,
  [SMALL_STATE(218)] = 4322,
  [SMALL_STATE(219)] = 4329,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 13),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 13),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(204),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(91),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(35),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(68),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(80),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(206),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(203),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(45),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(35),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(206),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(45),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(32),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 15),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 15),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 12),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 12),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 7),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 7),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 12),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 12),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 7),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 7),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 9),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 12),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 12),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 7),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 7),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(65),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(107),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(188),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(30),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(170),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 14),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 11),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 1, .production_id = 10),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [624] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
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
