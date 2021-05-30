#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_domain_statement_token1 = 2,
  aux_sym_create_domain_statement_token2 = 3,
  aux_sym_create_type_statement_token1 = 4,
  aux_sym_create_index_statement_token1 = 5,
  aux_sym_create_index_statement_token2 = 6,
  aux_sym_column_default_token1 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  aux_sym_foreign_key_constraint_token1 = 11,
  aux_sym_create_table_statement_token1 = 12,
  aux_sym_using_clause_token1 = 13,
  aux_sym_select_statement_token1 = 14,
  aux_sym_in_expression_token1 = 15,
  aux_sym_in_expression_token2 = 16,
  aux_sym_references_constraint_token1 = 17,
  aux_sym_on_update_action_token1 = 18,
  aux_sym_on_delete_action_token1 = 19,
  aux_sym__constraint_action_token1 = 20,
  aux_sym__constraint_action_token2 = 21,
  aux_sym__constraint_action_token3 = 22,
  aux_sym_unique_constraint_token1 = 23,
  sym_primary_key_constraint = 24,
  aux_sym_check_constraint_token1 = 25,
  aux_sym_where_clause_token1 = 26,
  anon_sym_LT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_LT_GT = 29,
  anon_sym_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_GT_EQ = 32,
  aux_sym_is_expression_token1 = 33,
  aux_sym_is_expression_token2 = 34,
  aux_sym_boolean_expression_token1 = 35,
  aux_sym_boolean_expression_token2 = 36,
  sym_NULL = 37,
  sym_TRUE = 38,
  sym_FALSE = 39,
  sym_number = 40,
  sym_identifier = 41,
  anon_sym_SQUOTE = 42,
  aux_sym_string_token1 = 43,
  anon_sym_DASH_GT_GT = 44,
  aux_sym_ordered_expression_token1 = 45,
  aux_sym_ordered_expression_token2 = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  anon_sym_COLON_COLON = 49,
  sym_comment = 50,
  sym_source_file = 51,
  sym__statement = 52,
  sym_create_domain_statement = 53,
  sym_create_type_statement = 54,
  sym_create_index_statement = 55,
  sym_create_table_column_parameter = 56,
  sym_column_default = 57,
  sym_create_table_parameters = 58,
  sym_foreign_key_constraint = 59,
  sym__table_constraint = 60,
  sym_create_table_statement = 61,
  sym_using_clause = 62,
  sym_index_table_parameters = 63,
  sym_select_statement = 64,
  sym_in_expression = 65,
  sym_tuple = 66,
  sym_select_clause = 67,
  sym_references_constraint = 68,
  sym_on_update_action = 69,
  sym_on_delete_action = 70,
  sym__constraint_action = 71,
  sym_unique_constraint = 72,
  sym_unique_table_constraint = 73,
  sym_null_constraint = 74,
  sym_check_constraint = 75,
  sym_parameter = 76,
  sym_parameters = 77,
  sym_function_call = 78,
  sym_where_clause = 79,
  sym_comparison_operator = 80,
  sym__parenthesized_expression = 81,
  sym_is_expression = 82,
  sym_boolean_expression = 83,
  sym_string = 84,
  sym_field_access = 85,
  sym_ordered_expression = 86,
  sym_data_type = 87,
  sym_type_cast = 88,
  sym__expression = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_create_table_column_parameter_repeat1 = 91,
  aux_sym_create_table_parameters_repeat1 = 92,
  aux_sym_foreign_key_constraint_repeat1 = 93,
  aux_sym_index_table_parameters_repeat1 = 94,
  aux_sym_tuple_repeat1 = 95,
  aux_sym_references_constraint_repeat1 = 96,
  aux_sym_parameters_repeat1 = 97,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_domain_statement_token1] = "create_domain_statement_token1",
  [aux_sym_create_domain_statement_token2] = "create_domain_statement_token2",
  [aux_sym_create_type_statement_token1] = "create_type_statement_token1",
  [aux_sym_create_index_statement_token1] = "create_index_statement_token1",
  [aux_sym_create_index_statement_token2] = "create_index_statement_token2",
  [aux_sym_column_default_token1] = "column_default_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_foreign_key_constraint_token1] = "foreign_key_constraint_token1",
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
  [aux_sym_unique_constraint_token1] = "unique_constraint_token1",
  [sym_primary_key_constraint] = "primary_key_constraint",
  [aux_sym_check_constraint_token1] = "check_constraint_token1",
  [aux_sym_where_clause_token1] = "where_clause_token1",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_is_expression_token1] = "is_expression_token1",
  [aux_sym_is_expression_token2] = "is_expression_token2",
  [aux_sym_boolean_expression_token1] = "boolean_expression_token1",
  [aux_sym_boolean_expression_token2] = "boolean_expression_token2",
  [sym_NULL] = "NULL",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DASH_GT_GT] = "->>",
  [aux_sym_ordered_expression_token1] = "ordered_expression_token1",
  [aux_sym_ordered_expression_token2] = "ordered_expression_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_COLON] = "::",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_create_domain_statement] = "create_domain_statement",
  [sym_create_type_statement] = "create_type_statement",
  [sym_create_index_statement] = "create_index_statement",
  [sym_create_table_column_parameter] = "create_table_column_parameter",
  [sym_column_default] = "column_default",
  [sym_create_table_parameters] = "create_table_parameters",
  [sym_foreign_key_constraint] = "foreign_key_constraint",
  [sym__table_constraint] = "_table_constraint",
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
  [sym_unique_table_constraint] = "unique_table_constraint",
  [sym_null_constraint] = "null_constraint",
  [sym_check_constraint] = "check_constraint",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_function_call] = "function_call",
  [sym_where_clause] = "where_clause",
  [sym_comparison_operator] = "comparison_operator",
  [sym__parenthesized_expression] = "_parenthesized_expression",
  [sym_is_expression] = "is_expression",
  [sym_boolean_expression] = "boolean_expression",
  [sym_string] = "string",
  [sym_field_access] = "field_access",
  [sym_ordered_expression] = "ordered_expression",
  [sym_data_type] = "data_type",
  [sym_type_cast] = "type_cast",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_table_column_parameter_repeat1] = "create_table_column_parameter_repeat1",
  [aux_sym_create_table_parameters_repeat1] = "create_table_parameters_repeat1",
  [aux_sym_foreign_key_constraint_repeat1] = "foreign_key_constraint_repeat1",
  [aux_sym_index_table_parameters_repeat1] = "index_table_parameters_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_references_constraint_repeat1] = "references_constraint_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_domain_statement_token1] = aux_sym_create_domain_statement_token1,
  [aux_sym_create_domain_statement_token2] = aux_sym_create_domain_statement_token2,
  [aux_sym_create_type_statement_token1] = aux_sym_create_type_statement_token1,
  [aux_sym_create_index_statement_token1] = aux_sym_create_index_statement_token1,
  [aux_sym_create_index_statement_token2] = aux_sym_create_index_statement_token2,
  [aux_sym_column_default_token1] = aux_sym_column_default_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_foreign_key_constraint_token1] = aux_sym_foreign_key_constraint_token1,
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
  [aux_sym_unique_constraint_token1] = aux_sym_unique_constraint_token1,
  [sym_primary_key_constraint] = sym_primary_key_constraint,
  [aux_sym_check_constraint_token1] = aux_sym_check_constraint_token1,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_is_expression_token1] = aux_sym_is_expression_token1,
  [aux_sym_is_expression_token2] = aux_sym_is_expression_token2,
  [aux_sym_boolean_expression_token1] = aux_sym_boolean_expression_token1,
  [aux_sym_boolean_expression_token2] = aux_sym_boolean_expression_token2,
  [sym_NULL] = sym_NULL,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DASH_GT_GT] = anon_sym_DASH_GT_GT,
  [aux_sym_ordered_expression_token1] = aux_sym_ordered_expression_token1,
  [aux_sym_ordered_expression_token2] = aux_sym_ordered_expression_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_create_domain_statement] = sym_create_domain_statement,
  [sym_create_type_statement] = sym_create_type_statement,
  [sym_create_index_statement] = sym_create_index_statement,
  [sym_create_table_column_parameter] = sym_create_table_column_parameter,
  [sym_column_default] = sym_column_default,
  [sym_create_table_parameters] = sym_create_table_parameters,
  [sym_foreign_key_constraint] = sym_foreign_key_constraint,
  [sym__table_constraint] = sym__table_constraint,
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
  [sym_unique_table_constraint] = sym_unique_table_constraint,
  [sym_null_constraint] = sym_null_constraint,
  [sym_check_constraint] = sym_check_constraint,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_function_call] = sym_function_call,
  [sym_where_clause] = sym_where_clause,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym__parenthesized_expression] = sym__parenthesized_expression,
  [sym_is_expression] = sym_is_expression,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_string] = sym_string,
  [sym_field_access] = sym_field_access,
  [sym_ordered_expression] = sym_ordered_expression,
  [sym_data_type] = sym_data_type,
  [sym_type_cast] = sym_type_cast,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_table_column_parameter_repeat1] = aux_sym_create_table_column_parameter_repeat1,
  [aux_sym_create_table_parameters_repeat1] = aux_sym_create_table_parameters_repeat1,
  [aux_sym_foreign_key_constraint_repeat1] = aux_sym_foreign_key_constraint_repeat1,
  [aux_sym_index_table_parameters_repeat1] = aux_sym_index_table_parameters_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_references_constraint_repeat1] = aux_sym_references_constraint_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
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
  [aux_sym_create_domain_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_domain_statement_token2] = {
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
  [aux_sym_column_default_token1] = {
    .visible = false,
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
  [aux_sym_foreign_key_constraint_token1] = {
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
  [aux_sym_unique_constraint_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_primary_key_constraint] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_check_constraint_token1] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
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
  [sym_column_default] = {
    .visible = true,
    .named = true,
  },
  [sym_create_table_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_key_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__table_constraint] = {
    .visible = false,
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
  [sym_unique_table_constraint] = {
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
  [sym_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_cast] = {
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
  [aux_sym_create_table_column_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_table_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreign_key_constraint_repeat1] = {
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
  [aux_sym_references_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_content, 1},
  [2] =
    {field_operator, 1},
  [3] =
    {field_name, 1},
    {field_table, 3},
  [5] =
    {field_name, 0},
    {field_type, 1},
  [7] =
    {field_arguments, 2},
    {field_function, 0},
  [9] =
    {field_type, 1},
  [10] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [13] =
    {field_elements, 1},
  [14] =
    {field_order, 1},
  [15] =
    {field_elements, 1},
    {field_elements, 2},
  [17] =
    {field_action, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_string_token1_character_set_1(int32_t c) {
  return (c < 'A'
    ? (c < '.'
      ? (c < '*'
        ? c == '%'
        : c <= '*')
      : (c <= '.' || (c >= '0' && c <= '9')))
    : (c <= '[' || (c < 'a'
      ? (c < '_'
        ? c == ']'
        : c <= '_')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(169);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(161);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'P') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(80);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') SKIP(153)
      if (lookahead == ']') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(210);
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead == 'T') ADVANCE(235);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(233);
      if (lookahead == 'U') ADVANCE(231);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(140);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(254);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(249);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'H') ADVANCE(61);
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'Y') ADVANCE(119);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(98);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(251);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(250);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(180);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(139);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(61);
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(187);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(63);
      END_STATE();
    case 89:
      if (lookahead == 'K') ADVANCE(65);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(200);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(183);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 101:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(163);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == 'R') ADVANCE(199);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(199);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(93);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 120:
      if (lookahead == 'Q') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(148);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 128:
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 129:
      if (lookahead == 'S') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(176);
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(174);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(167);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(181);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 140:
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 142:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 144:
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 145:
      if (lookahead == 'X') ADVANCE(165);
      END_STATE();
    case 146:
      if (lookahead == 'Y') ADVANCE(171);
      END_STATE();
    case 147:
      if (lookahead == 'Y') ADVANCE(186);
      END_STATE();
    case 148:
      if (lookahead == 'Y') ADVANCE(13);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 152:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 153:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(152)
      END_STATE();
    case 154:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(159)
      END_STATE();
    case 155:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(159)
      if (lookahead == '\r') SKIP(154)
      END_STATE();
    case 156:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(158)
      END_STATE();
    case 157:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(158)
      if (lookahead == '\r') SKIP(156)
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(236);
      if (lookahead == 'F') ADVANCE(210);
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead == 'S') ADVANCE(221);
      if (lookahead == 'T') ADVANCE(235);
      if (lookahead == 'W') ADVANCE(224);
      if (lookahead == '\\') SKIP(157)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(158)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(169);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(161);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'P') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(71);
      if (lookahead == 'U') ADVANCE(108);
      if (lookahead == 'W') ADVANCE(80);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') SKIP(155)
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(159)
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token2);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_foreign_key_constraint_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_unique_constraint_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_unique_constraint_token1);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_primary_key_constraint);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_check_constraint_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '>') ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_is_expression_token2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_NULL);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_TRUE);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_FALSE);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'A') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'A') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'C') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'E') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'G') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'H') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'L') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'L') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'L') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'L') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'N') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'N') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'Q') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'S') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'U') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'U') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'U') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 159},
  [3] = {.lex_state = 159},
  [4] = {.lex_state = 159},
  [5] = {.lex_state = 159},
  [6] = {.lex_state = 159},
  [7] = {.lex_state = 159},
  [8] = {.lex_state = 159},
  [9] = {.lex_state = 159},
  [10] = {.lex_state = 159},
  [11] = {.lex_state = 159},
  [12] = {.lex_state = 159},
  [13] = {.lex_state = 159},
  [14] = {.lex_state = 159},
  [15] = {.lex_state = 159},
  [16] = {.lex_state = 159},
  [17] = {.lex_state = 159},
  [18] = {.lex_state = 159},
  [19] = {.lex_state = 159},
  [20] = {.lex_state = 158},
  [21] = {.lex_state = 159},
  [22] = {.lex_state = 159},
  [23] = {.lex_state = 159},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 159},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 159},
  [37] = {.lex_state = 159},
  [38] = {.lex_state = 159},
  [39] = {.lex_state = 159},
  [40] = {.lex_state = 159},
  [41] = {.lex_state = 159},
  [42] = {.lex_state = 159},
  [43] = {.lex_state = 159},
  [44] = {.lex_state = 159},
  [45] = {.lex_state = 159},
  [46] = {.lex_state = 159},
  [47] = {.lex_state = 159},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 159},
  [51] = {.lex_state = 159},
  [52] = {.lex_state = 159},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 159},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 159},
  [59] = {.lex_state = 159},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 159},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 159},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 159},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 159},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 159},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 159},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 159},
  [124] = {.lex_state = 159},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 15},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 248},
  [153] = {.lex_state = 15},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_domain_statement_token1] = ACTIONS(1),
    [aux_sym_create_domain_statement_token2] = ACTIONS(1),
    [aux_sym_create_type_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token2] = ACTIONS(1),
    [aux_sym_column_default_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_foreign_key_constraint_token1] = ACTIONS(1),
    [aux_sym_create_table_statement_token1] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [aux_sym_in_expression_token1] = ACTIONS(1),
    [aux_sym_in_expression_token2] = ACTIONS(1),
    [aux_sym_references_constraint_token1] = ACTIONS(1),
    [aux_sym__constraint_action_token1] = ACTIONS(1),
    [aux_sym__constraint_action_token2] = ACTIONS(1),
    [aux_sym__constraint_action_token3] = ACTIONS(1),
    [aux_sym_unique_constraint_token1] = ACTIONS(1),
    [sym_primary_key_constraint] = ACTIONS(1),
    [aux_sym_check_constraint_token1] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_is_expression_token1] = ACTIONS(1),
    [aux_sym_is_expression_token2] = ACTIONS(1),
    [aux_sym_boolean_expression_token1] = ACTIONS(1),
    [aux_sym_boolean_expression_token2] = ACTIONS(1),
    [sym_NULL] = ACTIONS(1),
    [sym_TRUE] = ACTIONS(1),
    [sym_FALSE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DASH_GT_GT] = ACTIONS(1),
    [aux_sym_ordered_expression_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(156),
    [sym__statement] = STATE(49),
    [sym_create_domain_statement] = STATE(85),
    [sym_create_type_statement] = STATE(85),
    [sym_create_index_statement] = STATE(85),
    [sym_create_table_statement] = STATE(85),
    [sym_select_statement] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_domain_statement_token1] = ACTIONS(7),
    [aux_sym_create_type_statement_token1] = ACTIONS(9),
    [aux_sym_create_index_statement_token1] = ACTIONS(11),
    [aux_sym_create_table_statement_token1] = ACTIONS(13),
    [aux_sym_select_statement_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [46] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [84] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
  [465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
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
  [689] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_select_statement_token1,
    ACTIONS(97), 1,
      aux_sym_where_clause_token1,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_select_clause,
    STATE(80), 1,
      sym_where_clause,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(99), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
    STATE(23), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [742] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(105), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [788] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [829] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [874] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(125), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(46), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [910] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [948] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      sym_ordered_expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(129), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(42), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [984] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_ordered_expression,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(131), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(38), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1020] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(133), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(9), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1053] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(135), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(51), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1086] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(137), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(25), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1119] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(139), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(17), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1152] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(141), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(47), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(143), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(21), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1218] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(145), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(13), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1251] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(147), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(22), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1328] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1370] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_column_default_token1,
    ACTIONS(163), 1,
      aux_sym_in_expression_token1,
    ACTIONS(165), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(167), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(169), 1,
      sym_primary_key_constraint,
    ACTIONS(171), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(173), 1,
      sym_NULL,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(41), 6,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1407] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_in_expression_token1,
    ACTIONS(171), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(173), 1,
      sym_NULL,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_null_constraint,
    STATE(61), 1,
      sym_check_constraint,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1440] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_column_default_token1,
    ACTIONS(163), 1,
      aux_sym_in_expression_token1,
    ACTIONS(165), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(167), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(171), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(173), 1,
      sym_NULL,
    ACTIONS(181), 1,
      sym_primary_key_constraint,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(43), 6,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1477] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1514] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_column_default_token1,
    ACTIONS(190), 1,
      aux_sym_in_expression_token1,
    ACTIONS(193), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(196), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(199), 1,
      sym_primary_key_constraint,
    ACTIONS(202), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(205), 1,
      sym_NULL,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(43), 6,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1551] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(214), 1,
      aux_sym_on_delete_action_token1,
    STATE(123), 1,
      sym_on_delete_action,
    STATE(124), 1,
      sym_on_update_action,
    ACTIONS(208), 9,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1581] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_in_expression_token1,
    ACTIONS(171), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(173), 1,
      sym_NULL,
    STATE(54), 1,
      sym_null_constraint,
    STATE(64), 1,
      sym_check_constraint,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1611] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1649] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1687] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(227), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(230), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(233), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(236), 1,
      aux_sym_select_statement_token1,
    STATE(48), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(85), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [1720] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(9), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(11), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(13), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(15), 1,
      aux_sym_select_statement_token1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(85), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [1753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(214), 1,
      aux_sym_on_delete_action_token1,
    STATE(115), 1,
      sym_on_delete_action,
    STATE(118), 1,
      sym_on_update_action,
    ACTIONS(241), 9,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1780] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(245), 9,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_check_constraint_token1,
    STATE(62), 1,
      sym_check_constraint,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_check_constraint_token1,
    STATE(60), 1,
      sym_check_constraint,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(117), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(245), 9,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 10,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_delete_action_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 10,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_update_action_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 9,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 9,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym_where_clause_token1,
    STATE(83), 1,
      sym_where_clause,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym_where_clause_token1,
    STATE(74), 1,
      sym_where_clause,
    ACTIONS(270), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 9,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym_where_clause_token1,
    STATE(78), 1,
      sym_where_clause,
    ACTIONS(272), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 9,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      sym_primary_key_constraint,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym_create_domain_statement_token2,
    ACTIONS(278), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_foreign_key_constraint_token1,
    ACTIONS(290), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(108), 4,
      sym_create_table_column_parameter,
      sym_foreign_key_constraint,
      sym__table_constraint,
      sym_unique_table_constraint,
  [2232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    STATE(68), 1,
      sym_type_cast,
    STATE(56), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2292] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_foreign_key_constraint_token1,
    ACTIONS(290), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(116), 4,
      sym_create_table_column_parameter,
      sym_foreign_key_constraint,
      sym__table_constraint,
      sym_unique_table_constraint,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      aux_sym_using_clause_token1,
    STATE(69), 1,
      sym_index_table_parameters,
    STATE(129), 1,
      sym_using_clause,
  [2432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym__constraint_action,
    ACTIONS(320), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(59), 1,
      sym__constraint_action,
    ACTIONS(322), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_is_expression_token2,
    ACTIONS(326), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameters_repeat1,
  [2481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_create_table_parameters_repeat1,
  [2494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_references_constraint_repeat1,
  [2507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_references_constraint_repeat1,
  [2520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameters_repeat1,
  [2546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_index_table_parameters_repeat1,
  [2559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_tuple_repeat1,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_index_table_parameters_repeat1,
  [2585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_create_table_parameters_repeat1,
  [2650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_create_table_parameters_repeat1,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_index_table_parameters_repeat1,
  [2676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_parameters_repeat1,
  [2689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_tuple_repeat1,
  [2702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_references_constraint_token1,
    STATE(135), 1,
      sym_references_constraint,
  [2721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_parameters,
  [2731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_on_update_action_token1,
    STATE(65), 1,
      sym_on_update_action,
  [2741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(128), 1,
      sym_data_type,
  [2759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_on_delete_action_token1,
    STATE(65), 1,
      sym_on_delete_action,
  [2769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(121), 1,
      sym_parameter,
  [2779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_tuple,
  [2789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_on_update_action_token1,
    STATE(63), 1,
      sym_on_update_action,
  [2815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_on_delete_action_token1,
    STATE(63), 1,
      sym_on_delete_action,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(110), 1,
      sym_parameter,
  [2843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_create_table_parameters,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_index_table_parameters,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(97), 1,
      aux_sym_references_constraint_repeat1,
  [2889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_tuple,
  [2899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_references_constraint_token1,
    STATE(122), 1,
      sym_references_constraint,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_string,
  [2935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(86), 1,
      sym_data_type,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_create_index_statement_token2,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
  [2982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
  [2989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
  [2996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
  [3003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_in_expression_token2,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [3024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
  [3045] = 2,
    ACTIONS(433), 1,
      aux_sym_string_token1,
    ACTIONS(435), 1,
      sym_comment,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [3066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_create_domain_statement_token2,
  [3073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
  [3080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_identifier,
  [3094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_NULL,
  [3101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
  [3108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
  [3115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 200,
  [SMALL_STATE(8)] = 238,
  [SMALL_STATE(9)] = 276,
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 350,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 465,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 539,
  [SMALL_STATE(17)] = 576,
  [SMALL_STATE(18)] = 615,
  [SMALL_STATE(19)] = 652,
  [SMALL_STATE(20)] = 689,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 788,
  [SMALL_STATE(23)] = 829,
  [SMALL_STATE(24)] = 874,
  [SMALL_STATE(25)] = 910,
  [SMALL_STATE(26)] = 948,
  [SMALL_STATE(27)] = 984,
  [SMALL_STATE(28)] = 1020,
  [SMALL_STATE(29)] = 1053,
  [SMALL_STATE(30)] = 1086,
  [SMALL_STATE(31)] = 1119,
  [SMALL_STATE(32)] = 1152,
  [SMALL_STATE(33)] = 1185,
  [SMALL_STATE(34)] = 1218,
  [SMALL_STATE(35)] = 1251,
  [SMALL_STATE(36)] = 1284,
  [SMALL_STATE(37)] = 1306,
  [SMALL_STATE(38)] = 1328,
  [SMALL_STATE(39)] = 1370,
  [SMALL_STATE(40)] = 1407,
  [SMALL_STATE(41)] = 1440,
  [SMALL_STATE(42)] = 1477,
  [SMALL_STATE(43)] = 1514,
  [SMALL_STATE(44)] = 1551,
  [SMALL_STATE(45)] = 1581,
  [SMALL_STATE(46)] = 1611,
  [SMALL_STATE(47)] = 1649,
  [SMALL_STATE(48)] = 1687,
  [SMALL_STATE(49)] = 1720,
  [SMALL_STATE(50)] = 1753,
  [SMALL_STATE(51)] = 1780,
  [SMALL_STATE(52)] = 1812,
  [SMALL_STATE(53)] = 1833,
  [SMALL_STATE(54)] = 1854,
  [SMALL_STATE(55)] = 1875,
  [SMALL_STATE(56)] = 1896,
  [SMALL_STATE(57)] = 1914,
  [SMALL_STATE(58)] = 1934,
  [SMALL_STATE(59)] = 1950,
  [SMALL_STATE(60)] = 1966,
  [SMALL_STATE(61)] = 1981,
  [SMALL_STATE(62)] = 1996,
  [SMALL_STATE(63)] = 2011,
  [SMALL_STATE(64)] = 2026,
  [SMALL_STATE(65)] = 2041,
  [SMALL_STATE(66)] = 2056,
  [SMALL_STATE(67)] = 2075,
  [SMALL_STATE(68)] = 2094,
  [SMALL_STATE(69)] = 2109,
  [SMALL_STATE(70)] = 2128,
  [SMALL_STATE(71)] = 2143,
  [SMALL_STATE(72)] = 2157,
  [SMALL_STATE(73)] = 2173,
  [SMALL_STATE(74)] = 2187,
  [SMALL_STATE(75)] = 2200,
  [SMALL_STATE(76)] = 2213,
  [SMALL_STATE(77)] = 2232,
  [SMALL_STATE(78)] = 2253,
  [SMALL_STATE(79)] = 2266,
  [SMALL_STATE(80)] = 2279,
  [SMALL_STATE(81)] = 2292,
  [SMALL_STATE(82)] = 2311,
  [SMALL_STATE(83)] = 2324,
  [SMALL_STATE(84)] = 2337,
  [SMALL_STATE(85)] = 2350,
  [SMALL_STATE(86)] = 2365,
  [SMALL_STATE(87)] = 2378,
  [SMALL_STATE(88)] = 2391,
  [SMALL_STATE(89)] = 2404,
  [SMALL_STATE(90)] = 2416,
  [SMALL_STATE(91)] = 2432,
  [SMALL_STATE(92)] = 2444,
  [SMALL_STATE(93)] = 2456,
  [SMALL_STATE(94)] = 2468,
  [SMALL_STATE(95)] = 2481,
  [SMALL_STATE(96)] = 2494,
  [SMALL_STATE(97)] = 2507,
  [SMALL_STATE(98)] = 2520,
  [SMALL_STATE(99)] = 2533,
  [SMALL_STATE(100)] = 2546,
  [SMALL_STATE(101)] = 2559,
  [SMALL_STATE(102)] = 2572,
  [SMALL_STATE(103)] = 2585,
  [SMALL_STATE(104)] = 2598,
  [SMALL_STATE(105)] = 2611,
  [SMALL_STATE(106)] = 2624,
  [SMALL_STATE(107)] = 2637,
  [SMALL_STATE(108)] = 2650,
  [SMALL_STATE(109)] = 2663,
  [SMALL_STATE(110)] = 2676,
  [SMALL_STATE(111)] = 2689,
  [SMALL_STATE(112)] = 2702,
  [SMALL_STATE(113)] = 2711,
  [SMALL_STATE(114)] = 2721,
  [SMALL_STATE(115)] = 2731,
  [SMALL_STATE(116)] = 2741,
  [SMALL_STATE(117)] = 2749,
  [SMALL_STATE(118)] = 2759,
  [SMALL_STATE(119)] = 2769,
  [SMALL_STATE(120)] = 2779,
  [SMALL_STATE(121)] = 2789,
  [SMALL_STATE(122)] = 2797,
  [SMALL_STATE(123)] = 2805,
  [SMALL_STATE(124)] = 2815,
  [SMALL_STATE(125)] = 2825,
  [SMALL_STATE(126)] = 2833,
  [SMALL_STATE(127)] = 2843,
  [SMALL_STATE(128)] = 2853,
  [SMALL_STATE(129)] = 2861,
  [SMALL_STATE(130)] = 2871,
  [SMALL_STATE(131)] = 2879,
  [SMALL_STATE(132)] = 2889,
  [SMALL_STATE(133)] = 2899,
  [SMALL_STATE(134)] = 2907,
  [SMALL_STATE(135)] = 2917,
  [SMALL_STATE(136)] = 2925,
  [SMALL_STATE(137)] = 2935,
  [SMALL_STATE(138)] = 2943,
  [SMALL_STATE(139)] = 2953,
  [SMALL_STATE(140)] = 2961,
  [SMALL_STATE(141)] = 2968,
  [SMALL_STATE(142)] = 2975,
  [SMALL_STATE(143)] = 2982,
  [SMALL_STATE(144)] = 2989,
  [SMALL_STATE(145)] = 2996,
  [SMALL_STATE(146)] = 3003,
  [SMALL_STATE(147)] = 3010,
  [SMALL_STATE(148)] = 3017,
  [SMALL_STATE(149)] = 3024,
  [SMALL_STATE(150)] = 3031,
  [SMALL_STATE(151)] = 3038,
  [SMALL_STATE(152)] = 3045,
  [SMALL_STATE(153)] = 3052,
  [SMALL_STATE(154)] = 3059,
  [SMALL_STATE(155)] = 3066,
  [SMALL_STATE(156)] = 3073,
  [SMALL_STATE(157)] = 3080,
  [SMALL_STATE(158)] = 3087,
  [SMALL_STATE(159)] = 3094,
  [SMALL_STATE(160)] = 3101,
  [SMALL_STATE(161)] = 3108,
  [SMALL_STATE(162)] = 3115,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 11),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 11),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(77),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(159),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(162),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(70),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(43),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(33),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(37),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(35),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 12),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 12),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 5, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(119),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(81),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_references_constraint_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_constraint_repeat1, 2), SHIFT_REPEAT(96),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_key_constraint_repeat1, 2), SHIFT_REPEAT(149),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_key_constraint_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(26),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_key_constraint, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 10),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_table_constraint, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_table_constraint, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_key_constraint, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 7),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [443] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
