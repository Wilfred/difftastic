#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 172
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  anon_sym_CONSTRAINT = 7,
  aux_sym_column_default_token1 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  aux_sym_foreign_key_constraint_token1 = 12,
  aux_sym_create_table_statement_token1 = 13,
  aux_sym_using_clause_token1 = 14,
  aux_sym_select_statement_token1 = 15,
  aux_sym_in_expression_token1 = 16,
  aux_sym_in_expression_token2 = 17,
  aux_sym_references_constraint_token1 = 18,
  aux_sym_on_update_action_token1 = 19,
  aux_sym_on_delete_action_token1 = 20,
  aux_sym__constraint_action_token1 = 21,
  aux_sym__constraint_action_token2 = 22,
  aux_sym__constraint_action_token3 = 23,
  aux_sym_unique_constraint_token1 = 24,
  aux_sym_primary_key_table_constraint_token1 = 25,
  aux_sym_check_constraint_token1 = 26,
  aux_sym_where_clause_token1 = 27,
  anon_sym_LT = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_LT_GT = 30,
  anon_sym_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  aux_sym_is_expression_token1 = 34,
  aux_sym_is_expression_token2 = 35,
  aux_sym_boolean_expression_token1 = 36,
  aux_sym_boolean_expression_token2 = 37,
  sym_NULL = 38,
  sym_TRUE = 39,
  sym_FALSE = 40,
  sym_number = 41,
  sym_identifier = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_string_token1 = 44,
  anon_sym_DASH_GT_GT = 45,
  aux_sym_ordered_expression_token1 = 46,
  aux_sym_ordered_expression_token2 = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  anon_sym_COLON_COLON = 50,
  sym_comment = 51,
  sym_source_file = 52,
  sym__statement = 53,
  sym_create_domain_statement = 54,
  sym_create_type_statement = 55,
  sym_create_index_statement = 56,
  sym_create_table_column_parameter = 57,
  sym_named_constraint = 58,
  sym_column_default = 59,
  sym_create_table_parameters = 60,
  sym_foreign_key_constraint = 61,
  sym__table_constraint = 62,
  sym_create_table_statement = 63,
  sym_using_clause = 64,
  sym_index_table_parameters = 65,
  sym_select_statement = 66,
  sym_in_expression = 67,
  sym_tuple = 68,
  sym_select_clause = 69,
  sym_references_constraint = 70,
  sym_on_update_action = 71,
  sym_on_delete_action = 72,
  sym__constraint_action = 73,
  sym_unique_constraint = 74,
  sym_unique_table_constraint = 75,
  sym_primary_key_table_constraint = 76,
  sym_primary_key_constraint = 77,
  sym_null_constraint = 78,
  sym_check_constraint = 79,
  sym_parameter = 80,
  sym_parameters = 81,
  sym_function_call = 82,
  sym_where_clause = 83,
  sym_comparison_operator = 84,
  sym__parenthesized_expression = 85,
  sym_is_expression = 86,
  sym_boolean_expression = 87,
  sym_string = 88,
  sym_field_access = 89,
  sym_ordered_expression = 90,
  sym_data_type = 91,
  sym_type_cast = 92,
  sym__expression = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym_create_table_column_parameter_repeat1 = 95,
  aux_sym_create_table_parameters_repeat1 = 96,
  aux_sym_foreign_key_constraint_repeat1 = 97,
  aux_sym_index_table_parameters_repeat1 = 98,
  aux_sym_tuple_repeat1 = 99,
  aux_sym_references_constraint_repeat1 = 100,
  aux_sym_parameters_repeat1 = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_domain_statement_token1] = "create_domain_statement_token1",
  [aux_sym_create_domain_statement_token2] = "create_domain_statement_token2",
  [aux_sym_create_type_statement_token1] = "create_type_statement_token1",
  [aux_sym_create_index_statement_token1] = "create_index_statement_token1",
  [aux_sym_create_index_statement_token2] = "create_index_statement_token2",
  [anon_sym_CONSTRAINT] = "CONSTRAINT",
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
  [aux_sym_primary_key_table_constraint_token1] = "primary_key_table_constraint_token1",
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
  [sym_named_constraint] = "named_constraint",
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
  [sym_primary_key_table_constraint] = "primary_key_table_constraint",
  [sym_primary_key_constraint] = "primary_key_constraint",
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
  [anon_sym_CONSTRAINT] = anon_sym_CONSTRAINT,
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
  [aux_sym_primary_key_table_constraint_token1] = aux_sym_primary_key_table_constraint_token1,
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
  [sym_named_constraint] = sym_named_constraint,
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
  [sym_primary_key_table_constraint] = sym_primary_key_table_constraint,
  [sym_primary_key_constraint] = sym_primary_key_constraint,
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
  [anon_sym_CONSTRAINT] = {
    .visible = true,
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
  [aux_sym_primary_key_table_constraint_token1] = {
    .visible = false,
    .named = false,
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
  [sym_primary_key_table_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_key_constraint] = {
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
      if (eof) ADVANCE(168);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(199);
      if (lookahead == '=') ADVANCE(202);
      if (lookahead == '>') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead == 'D') ADVANCE(47);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '\\') SKIP(161)
      if (lookahead == ']') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
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
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead == 'T') ADVANCE(250);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(179);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(248);
      if (lookahead == 'U') ADVANCE(245);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'n') ADVANCE(157);
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
      if (lookahead == ':') ADVANCE(270);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(265);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'H') ADVANCE(62);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'Y') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(149);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(146);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(100);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(267);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(266);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(139);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(141);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(207);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(122);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(197);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(191);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(189);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(147);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(182);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(62);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 81:
      if (lookahead == 'H') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 89:
      if (lookahead == 'K') ADVANCE(196);
      END_STATE();
    case 90:
      if (lookahead == 'K') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 'K') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(209);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(192);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(136);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(140);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 102:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 103:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(171);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(170);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 123:
      if (lookahead == 'P') ADVANCE(56);
      END_STATE();
    case 124:
      if (lookahead == 'Q') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 133:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(187);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(185);
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(190);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(175);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 148:
      if (lookahead == 'U') ADVANCE(95);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 149:
      if (lookahead == 'U') ADVANCE(97);
      END_STATE();
    case 150:
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 151:
      if (lookahead == 'U') ADVANCE(53);
      END_STATE();
    case 152:
      if (lookahead == 'U') ADVANCE(96);
      END_STATE();
    case 153:
      if (lookahead == 'X') ADVANCE(173);
      END_STATE();
    case 154:
      if (lookahead == 'Y') ADVANCE(180);
      END_STATE();
    case 155:
      if (lookahead == 'Y') ADVANCE(195);
      END_STATE();
    case 156:
      if (lookahead == 'Y') ADVANCE(13);
      END_STATE();
    case 157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 158:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 160:
      if (eof) ADVANCE(168);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 161:
      if (eof) ADVANCE(168);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(160)
      END_STATE();
    case 162:
      if (eof) ADVANCE(168);
      if (lookahead == '\n') SKIP(167)
      END_STATE();
    case 163:
      if (eof) ADVANCE(168);
      if (lookahead == '\n') SKIP(167)
      if (lookahead == '\r') SKIP(162)
      END_STATE();
    case 164:
      if (eof) ADVANCE(168);
      if (lookahead == '\n') SKIP(166)
      END_STATE();
    case 165:
      if (eof) ADVANCE(168);
      if (lookahead == '\n') SKIP(166)
      if (lookahead == '\r') SKIP(164)
      END_STATE();
    case 166:
      if (eof) ADVANCE(168);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == 'C') ADVANCE(251);
      if (lookahead == 'F') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead == 'S') ADVANCE(231);
      if (lookahead == 'T') ADVANCE(250);
      if (lookahead == 'W') ADVANCE(235);
      if (lookahead == '\\') SKIP(165)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(166)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 167:
      if (eof) ADVANCE(168);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(199);
      if (lookahead == '=') ADVANCE(202);
      if (lookahead == '>') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(47);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '\\') SKIP(163)
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(167)
      END_STATE();
    case 168:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_foreign_key_constraint_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_unique_constraint_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_unique_constraint_token1);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_primary_key_table_constraint_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_check_constraint_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '>') ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_is_expression_token2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_NULL);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_TRUE);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_FALSE);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'A') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'A') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'A') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'C') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'G') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'H') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'I') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'I') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'I') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'M') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'N') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'N') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'O') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'Q') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'S') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'U') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'U') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'U') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'Y') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 167},
  [3] = {.lex_state = 167},
  [4] = {.lex_state = 167},
  [5] = {.lex_state = 167},
  [6] = {.lex_state = 167},
  [7] = {.lex_state = 167},
  [8] = {.lex_state = 167},
  [9] = {.lex_state = 167},
  [10] = {.lex_state = 167},
  [11] = {.lex_state = 167},
  [12] = {.lex_state = 167},
  [13] = {.lex_state = 167},
  [14] = {.lex_state = 167},
  [15] = {.lex_state = 167},
  [16] = {.lex_state = 167},
  [17] = {.lex_state = 167},
  [18] = {.lex_state = 167},
  [19] = {.lex_state = 167},
  [20] = {.lex_state = 166},
  [21] = {.lex_state = 167},
  [22] = {.lex_state = 167},
  [23] = {.lex_state = 167},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 167},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 167},
  [29] = {.lex_state = 167},
  [30] = {.lex_state = 167},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 167},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 167},
  [41] = {.lex_state = 167},
  [42] = {.lex_state = 167},
  [43] = {.lex_state = 167},
  [44] = {.lex_state = 167},
  [45] = {.lex_state = 167},
  [46] = {.lex_state = 167},
  [47] = {.lex_state = 167},
  [48] = {.lex_state = 167},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 167},
  [52] = {.lex_state = 167},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 167},
  [56] = {.lex_state = 167},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 167},
  [59] = {.lex_state = 167},
  [60] = {.lex_state = 167},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 167},
  [63] = {.lex_state = 167},
  [64] = {.lex_state = 167},
  [65] = {.lex_state = 167},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 15},
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 167},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 167},
  [122] = {.lex_state = 167},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 15},
  [130] = {.lex_state = 167},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 264},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 15},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 15},
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
    [anon_sym_CONSTRAINT] = ACTIONS(1),
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
    [aux_sym_primary_key_table_constraint_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(165),
    [sym__statement] = STATE(50),
    [sym_create_domain_statement] = STATE(81),
    [sym_create_type_statement] = STATE(81),
    [sym_create_index_statement] = STATE(81),
    [sym_create_table_statement] = STATE(81),
    [sym_select_statement] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(50),
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
    ACTIONS(17), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [47] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [86] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [707] = 12,
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
    STATE(73), 1,
      sym_select_clause,
    STATE(82), 1,
      sym_where_clause,
    STATE(7), 3,
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
  [760] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
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
    ACTIONS(105), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [807] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
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
  [848] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(61), 1,
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
  [893] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(132), 1,
      sym_ordered_expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(123), 4,
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
  [929] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(127), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(45), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [965] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(131), 1,
      aux_sym_column_default_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(137), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(139), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(141), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(143), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(145), 1,
      sym_NULL,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(28), 8,
      sym_named_constraint,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_primary_key_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1007] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_ordered_expression,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(147), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(41), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1043] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(131), 1,
      aux_sym_column_default_token1,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(137), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(139), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(141), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(143), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(145), 1,
      sym_NULL,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(29), 8,
      sym_named_constraint,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_primary_key_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1085] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(154), 1,
      aux_sym_column_default_token1,
    ACTIONS(159), 1,
      aux_sym_in_expression_token1,
    ACTIONS(162), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(165), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(168), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(171), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(174), 1,
      sym_NULL,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(29), 8,
      sym_named_constraint,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_primary_key_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1127] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
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
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(179), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(30), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1198] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(181), 4,
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
  [1231] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(183), 4,
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
  [1264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(185), 4,
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
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(189), 4,
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
  [1353] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(191), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(52), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1386] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(193), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(10), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1419] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(7), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(195), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(18), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1475] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1517] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
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
    ACTIONS(203), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1554] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(213), 1,
      aux_sym_on_delete_action_token1,
    STATE(118), 1,
      sym_on_update_action,
    STATE(130), 1,
      sym_on_delete_action,
    ACTIONS(207), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1585] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(143), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(145), 1,
      sym_NULL,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_null_constraint,
    STATE(72), 1,
      sym_check_constraint,
    ACTIONS(215), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1618] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1656] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_in_expression_token1,
    ACTIONS(143), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(145), 1,
      sym_NULL,
    STATE(53), 1,
      sym_null_constraint,
    STATE(71), 1,
      sym_check_constraint,
    ACTIONS(221), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1686] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1724] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(213), 1,
      aux_sym_on_delete_action_token1,
    STATE(121), 1,
      sym_on_delete_action,
    STATE(122), 1,
      sym_on_update_action,
    ACTIONS(225), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1752] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(232), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(235), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(238), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(241), 1,
      aux_sym_select_statement_token1,
    STATE(49), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(81), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [1785] = 9,
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
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(81), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [1818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(246), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1840] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(53), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 1,
      aux_sym_in_expression_token1,
    ACTIONS(109), 1,
      aux_sym_in_expression_token2,
    ACTIONS(115), 1,
      aux_sym_is_expression_token1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_check_constraint_token1,
    STATE(74), 1,
      sym_check_constraint,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(54), 1,
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
  [1914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(246), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 11,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_delete_action_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_check_constraint_token1,
    STATE(67), 1,
      sym_check_constraint,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 11,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_update_action_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [1988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(265), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
      sym_NULL,
  [2104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_foreign_key_constraint_token1,
    ACTIONS(275), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(277), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(120), 5,
      sym_create_table_column_parameter,
      sym_foreign_key_constraint,
      sym__table_constraint,
      sym_unique_table_constraint,
      sym_primary_key_table_constraint,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_where_clause_token1,
    STATE(79), 1,
      sym_where_clause,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_foreign_key_constraint_token1,
    ACTIONS(275), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(277), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(103), 5,
      sym_create_table_column_parameter,
      sym_foreign_key_constraint,
      sym__table_constraint,
      sym_unique_table_constraint,
      sym_primary_key_table_constraint,
  [2184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_where_clause_token1,
    STATE(90), 1,
      sym_where_clause,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_where_clause_token1,
    STATE(85), 1,
      sym_where_clause,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_create_domain_statement_token2,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 7,
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
    ACTIONS(301), 7,
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
    ACTIONS(303), 7,
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
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(305), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 7,
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
    ACTIONS(309), 7,
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
    ACTIONS(311), 7,
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
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(62), 1,
      sym_type_cast,
    STATE(55), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym__constraint_action,
    ACTIONS(325), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym__constraint_action,
    ACTIONS(327), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_is_expression_token2,
    ACTIONS(331), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      aux_sym_using_clause_token1,
    STATE(70), 1,
      sym_index_table_parameters,
    STATE(128), 1,
      sym_using_clause,
  [2554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_create_table_parameters_repeat1,
  [2567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_tuple_repeat1,
  [2580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_references_constraint_repeat1,
  [2593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_tuple_repeat1,
  [2606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_references_constraint_repeat1,
  [2619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_index_table_parameters_repeat1,
  [2645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_create_table_parameters_repeat1,
  [2658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_parameters_repeat1,
  [2680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_index_table_parameters_repeat1,
  [2693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_create_table_parameters_repeat1,
  [2784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_parameters_repeat1,
  [2797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_parameters_repeat1,
  [2810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_index_table_parameters_repeat1,
  [2823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_references_constraint_token1,
    STATE(140), 1,
      sym_references_constraint,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_on_delete_action_token1,
    STATE(65), 1,
      sym_on_delete_action,
  [2843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_string,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_on_update_action_token1,
    STATE(64), 1,
      sym_on_update_action,
  [2871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_on_delete_action_token1,
    STATE(64), 1,
      sym_on_delete_action,
  [2881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(114), 1,
      sym_parameter,
  [2891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_tuple,
  [2901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_parameters,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_index_table_parameters,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_identifier,
    STATE(89), 1,
      sym_data_type,
  [2947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_on_update_action_token1,
    STATE(65), 1,
      sym_on_update_action,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(100), 1,
      aux_sym_references_constraint_repeat1,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_references_constraint_token1,
    STATE(126), 1,
      sym_references_constraint,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_identifier,
    STATE(142), 1,
      sym_data_type,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_create_table_parameters,
  [3069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(127), 1,
      sym_parameter,
  [3079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_tuple,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
  [3096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_create_domain_statement_token2,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_create_index_statement_token2,
  [3124] = 2,
    ACTIONS(436), 1,
      aux_sym_string_token1,
    ACTIONS(438), 1,
      sym_comment,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_NULL,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_in_expression_token2,
  [3152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_identifier,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_identifier,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_identifier,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
  [3187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_identifier,
  [3208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_identifier,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [3243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_identifier,
  [3257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 325,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 401,
  [SMALL_STATE(13)] = 439,
  [SMALL_STATE(14)] = 477,
  [SMALL_STATE(15)] = 515,
  [SMALL_STATE(16)] = 553,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 629,
  [SMALL_STATE(19)] = 669,
  [SMALL_STATE(20)] = 707,
  [SMALL_STATE(21)] = 760,
  [SMALL_STATE(22)] = 807,
  [SMALL_STATE(23)] = 848,
  [SMALL_STATE(24)] = 893,
  [SMALL_STATE(25)] = 929,
  [SMALL_STATE(26)] = 965,
  [SMALL_STATE(27)] = 1007,
  [SMALL_STATE(28)] = 1043,
  [SMALL_STATE(29)] = 1085,
  [SMALL_STATE(30)] = 1127,
  [SMALL_STATE(31)] = 1165,
  [SMALL_STATE(32)] = 1198,
  [SMALL_STATE(33)] = 1231,
  [SMALL_STATE(34)] = 1264,
  [SMALL_STATE(35)] = 1297,
  [SMALL_STATE(36)] = 1320,
  [SMALL_STATE(37)] = 1353,
  [SMALL_STATE(38)] = 1386,
  [SMALL_STATE(39)] = 1419,
  [SMALL_STATE(40)] = 1452,
  [SMALL_STATE(41)] = 1475,
  [SMALL_STATE(42)] = 1517,
  [SMALL_STATE(43)] = 1554,
  [SMALL_STATE(44)] = 1585,
  [SMALL_STATE(45)] = 1618,
  [SMALL_STATE(46)] = 1656,
  [SMALL_STATE(47)] = 1686,
  [SMALL_STATE(48)] = 1724,
  [SMALL_STATE(49)] = 1752,
  [SMALL_STATE(50)] = 1785,
  [SMALL_STATE(51)] = 1818,
  [SMALL_STATE(52)] = 1840,
  [SMALL_STATE(53)] = 1872,
  [SMALL_STATE(54)] = 1893,
  [SMALL_STATE(55)] = 1914,
  [SMALL_STATE(56)] = 1933,
  [SMALL_STATE(57)] = 1950,
  [SMALL_STATE(58)] = 1971,
  [SMALL_STATE(59)] = 1988,
  [SMALL_STATE(60)] = 2004,
  [SMALL_STATE(61)] = 2020,
  [SMALL_STATE(62)] = 2040,
  [SMALL_STATE(63)] = 2056,
  [SMALL_STATE(64)] = 2072,
  [SMALL_STATE(65)] = 2088,
  [SMALL_STATE(66)] = 2104,
  [SMALL_STATE(67)] = 2127,
  [SMALL_STATE(68)] = 2142,
  [SMALL_STATE(69)] = 2161,
  [SMALL_STATE(70)] = 2184,
  [SMALL_STATE(71)] = 2203,
  [SMALL_STATE(72)] = 2218,
  [SMALL_STATE(73)] = 2233,
  [SMALL_STATE(74)] = 2252,
  [SMALL_STATE(75)] = 2267,
  [SMALL_STATE(76)] = 2281,
  [SMALL_STATE(77)] = 2297,
  [SMALL_STATE(78)] = 2311,
  [SMALL_STATE(79)] = 2324,
  [SMALL_STATE(80)] = 2337,
  [SMALL_STATE(81)] = 2350,
  [SMALL_STATE(82)] = 2365,
  [SMALL_STATE(83)] = 2378,
  [SMALL_STATE(84)] = 2391,
  [SMALL_STATE(85)] = 2404,
  [SMALL_STATE(86)] = 2417,
  [SMALL_STATE(87)] = 2438,
  [SMALL_STATE(88)] = 2451,
  [SMALL_STATE(89)] = 2464,
  [SMALL_STATE(90)] = 2477,
  [SMALL_STATE(91)] = 2490,
  [SMALL_STATE(92)] = 2502,
  [SMALL_STATE(93)] = 2514,
  [SMALL_STATE(94)] = 2526,
  [SMALL_STATE(95)] = 2538,
  [SMALL_STATE(96)] = 2554,
  [SMALL_STATE(97)] = 2567,
  [SMALL_STATE(98)] = 2580,
  [SMALL_STATE(99)] = 2593,
  [SMALL_STATE(100)] = 2606,
  [SMALL_STATE(101)] = 2619,
  [SMALL_STATE(102)] = 2632,
  [SMALL_STATE(103)] = 2645,
  [SMALL_STATE(104)] = 2658,
  [SMALL_STATE(105)] = 2667,
  [SMALL_STATE(106)] = 2680,
  [SMALL_STATE(107)] = 2693,
  [SMALL_STATE(108)] = 2706,
  [SMALL_STATE(109)] = 2719,
  [SMALL_STATE(110)] = 2732,
  [SMALL_STATE(111)] = 2745,
  [SMALL_STATE(112)] = 2758,
  [SMALL_STATE(113)] = 2771,
  [SMALL_STATE(114)] = 2784,
  [SMALL_STATE(115)] = 2797,
  [SMALL_STATE(116)] = 2810,
  [SMALL_STATE(117)] = 2823,
  [SMALL_STATE(118)] = 2833,
  [SMALL_STATE(119)] = 2843,
  [SMALL_STATE(120)] = 2853,
  [SMALL_STATE(121)] = 2861,
  [SMALL_STATE(122)] = 2871,
  [SMALL_STATE(123)] = 2881,
  [SMALL_STATE(124)] = 2891,
  [SMALL_STATE(125)] = 2901,
  [SMALL_STATE(126)] = 2911,
  [SMALL_STATE(127)] = 2919,
  [SMALL_STATE(128)] = 2927,
  [SMALL_STATE(129)] = 2937,
  [SMALL_STATE(130)] = 2947,
  [SMALL_STATE(131)] = 2957,
  [SMALL_STATE(132)] = 2965,
  [SMALL_STATE(133)] = 2973,
  [SMALL_STATE(134)] = 2983,
  [SMALL_STATE(135)] = 2991,
  [SMALL_STATE(136)] = 2999,
  [SMALL_STATE(137)] = 3007,
  [SMALL_STATE(138)] = 3015,
  [SMALL_STATE(139)] = 3025,
  [SMALL_STATE(140)] = 3035,
  [SMALL_STATE(141)] = 3043,
  [SMALL_STATE(142)] = 3051,
  [SMALL_STATE(143)] = 3059,
  [SMALL_STATE(144)] = 3069,
  [SMALL_STATE(145)] = 3079,
  [SMALL_STATE(146)] = 3089,
  [SMALL_STATE(147)] = 3096,
  [SMALL_STATE(148)] = 3103,
  [SMALL_STATE(149)] = 3110,
  [SMALL_STATE(150)] = 3117,
  [SMALL_STATE(151)] = 3124,
  [SMALL_STATE(152)] = 3131,
  [SMALL_STATE(153)] = 3138,
  [SMALL_STATE(154)] = 3145,
  [SMALL_STATE(155)] = 3152,
  [SMALL_STATE(156)] = 3159,
  [SMALL_STATE(157)] = 3166,
  [SMALL_STATE(158)] = 3173,
  [SMALL_STATE(159)] = 3180,
  [SMALL_STATE(160)] = 3187,
  [SMALL_STATE(161)] = 3194,
  [SMALL_STATE(162)] = 3201,
  [SMALL_STATE(163)] = 3208,
  [SMALL_STATE(164)] = 3215,
  [SMALL_STATE(165)] = 3222,
  [SMALL_STATE(166)] = 3229,
  [SMALL_STATE(167)] = 3236,
  [SMALL_STATE(168)] = 3243,
  [SMALL_STATE(169)] = 3250,
  [SMALL_STATE(170)] = 3257,
  [SMALL_STATE(171)] = 3264,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 11),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(156),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(86),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(152),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(157),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(63),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(60),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(32),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 4),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(34),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 12),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 12),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 5, .production_id = 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_references_constraint_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_constraint_repeat1, 2), SHIFT_REPEAT(98),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_key_constraint_repeat1, 2), SHIFT_REPEAT(161),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_key_constraint_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(24),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(144),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_key_constraint, 6),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 10),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_table_constraint, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_table_constraint, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_table_constraint, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_table_constraint, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_key_constraint, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 7),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [466] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
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
