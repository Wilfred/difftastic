#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 170
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 1
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 14

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
  aux_sym_check_table_constraint_token1 = 13,
  aux_sym_create_table_statement_token1 = 14,
  aux_sym_using_clause_token1 = 15,
  aux_sym_select_statement_token1 = 16,
  aux_sym_in_expression_token1 = 17,
  aux_sym_in_expression_token2 = 18,
  aux_sym_references_constraint_token1 = 19,
  aux_sym_on_update_action_token1 = 20,
  aux_sym_on_delete_action_token1 = 21,
  aux_sym__constraint_action_token1 = 22,
  aux_sym__constraint_action_token2 = 23,
  aux_sym__constraint_action_token3 = 24,
  aux_sym_unique_constraint_token1 = 25,
  aux_sym_primary_key_table_constraint_token1 = 26,
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
  sym_check_table_constraint = 63,
  sym_create_table_statement = 64,
  sym_using_clause = 65,
  sym_index_table_parameters = 66,
  sym_select_statement = 67,
  sym_in_expression = 68,
  sym_tuple = 69,
  sym_select_clause = 70,
  sym_references_constraint = 71,
  sym_on_update_action = 72,
  sym_on_delete_action = 73,
  sym__constraint_action = 74,
  sym_unique_constraint = 75,
  sym_unique_table_constraint = 76,
  sym_primary_key_table_constraint = 77,
  sym_primary_key_constraint = 78,
  sym_null_constraint = 79,
  sym_check_constraint = 80,
  sym_parameter = 81,
  sym_parameters = 82,
  sym_function_call = 83,
  sym_where_clause = 84,
  sym_comparison_operator = 85,
  sym__parenthesized_expression = 86,
  sym_is_expression = 87,
  sym_boolean_expression = 88,
  sym_string = 89,
  sym_field_access = 90,
  sym_ordered_expression = 91,
  sym__type_alias = 92,
  sym_array_type = 93,
  sym__type = 94,
  sym_type_cast = 95,
  sym__expression = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_create_domain_statement_repeat1 = 98,
  aux_sym_create_table_column_parameter_repeat1 = 99,
  aux_sym_create_table_parameters_repeat1 = 100,
  aux_sym_foreign_key_constraint_repeat1 = 101,
  aux_sym_index_table_parameters_repeat1 = 102,
  aux_sym_tuple_repeat1 = 103,
  aux_sym_references_constraint_repeat1 = 104,
  aux_sym_parameters_repeat1 = 105,
  alias_sym_type = 106,
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
  [aux_sym_check_table_constraint_token1] = "check_table_constraint_token1",
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
  [sym_check_table_constraint] = "check_table_constraint",
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
  [sym__type_alias] = "_type_alias",
  [sym_array_type] = "array_type",
  [sym__type] = "_type",
  [sym_type_cast] = "type_cast",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_domain_statement_repeat1] = "create_domain_statement_repeat1",
  [aux_sym_create_table_column_parameter_repeat1] = "create_table_column_parameter_repeat1",
  [aux_sym_create_table_parameters_repeat1] = "create_table_parameters_repeat1",
  [aux_sym_foreign_key_constraint_repeat1] = "foreign_key_constraint_repeat1",
  [aux_sym_index_table_parameters_repeat1] = "index_table_parameters_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_references_constraint_repeat1] = "references_constraint_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [alias_sym_type] = "type",
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
  [aux_sym_check_table_constraint_token1] = aux_sym_check_table_constraint_token1,
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
  [sym_check_table_constraint] = sym_check_table_constraint,
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
  [sym__type_alias] = sym__type_alias,
  [sym_array_type] = sym_array_type,
  [sym__type] = sym__type,
  [sym_type_cast] = sym_type_cast,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_domain_statement_repeat1] = aux_sym_create_domain_statement_repeat1,
  [aux_sym_create_table_column_parameter_repeat1] = aux_sym_create_table_column_parameter_repeat1,
  [aux_sym_create_table_parameters_repeat1] = aux_sym_create_table_parameters_repeat1,
  [aux_sym_foreign_key_constraint_repeat1] = aux_sym_foreign_key_constraint_repeat1,
  [aux_sym_index_table_parameters_repeat1] = aux_sym_index_table_parameters_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_references_constraint_repeat1] = aux_sym_references_constraint_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
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
  [aux_sym_check_table_constraint_token1] = {
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
  [sym_check_table_constraint] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 3},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 1},
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
  [1] = {
    [0] = alias_sym_type,
  },
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
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(204);
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
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == '\\') SKIP(161)
      if (lookahead == ']') ADVANCE(274);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
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
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(221);
      if (lookahead == 'N') ADVANCE(262);
      if (lookahead == 'T') ADVANCE(255);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(268);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(276);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(239);
      if (lookahead == 'F') ADVANCE(251);
      if (lookahead == 'P') ADVANCE(253);
      if (lookahead == 'U') ADVANCE(250);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
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
      if (lookahead == ':') ADVANCE(275);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(270);
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
      if (lookahead == 'C') ADVANCE(272);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(271);
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
      if (lookahead == 'D') ADVANCE(208);
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
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(191);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(190);
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
      if (lookahead == 'G') ADVANCE(184);
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
      if (lookahead == 'K') ADVANCE(181);
      END_STATE();
    case 90:
      if (lookahead == 'K') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 'K') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(210);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(194);
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
      if (lookahead == 'N') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == 'R') ADVANCE(209);
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
      if (lookahead == 'R') ADVANCE(209);
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
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(187);
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(192);
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
      if (lookahead == 'Y') ADVANCE(197);
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
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
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
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == 'C') ADVANCE(256);
      if (lookahead == 'F') ADVANCE(221);
      if (lookahead == 'N') ADVANCE(262);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == 'T') ADVANCE(255);
      if (lookahead == 'W') ADVANCE(238);
      if (lookahead == '\\') SKIP(165)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(166)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 167:
      if (eof) ADVANCE(168);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(204);
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
      if (lookahead == '[') ADVANCE(273);
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
      ACCEPT_TOKEN(aux_sym_check_table_constraint_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_check_table_constraint_token1);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_unique_constraint_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_unique_constraint_token1);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_primary_key_table_constraint_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '>') ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_is_expression_token2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_NULL);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_TRUE);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_FALSE);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'C') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'C') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'G') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'H') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'H') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'I') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'K') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'M') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'O') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'Q') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'S') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'T') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'T') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'U') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'U') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'U') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'Y') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(276);
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
  [20] = {.lex_state = 167},
  [21] = {.lex_state = 167},
  [22] = {.lex_state = 167},
  [23] = {.lex_state = 166},
  [24] = {.lex_state = 167},
  [25] = {.lex_state = 167},
  [26] = {.lex_state = 167},
  [27] = {.lex_state = 167},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 167},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 167},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 167},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 167},
  [44] = {.lex_state = 167},
  [45] = {.lex_state = 167},
  [46] = {.lex_state = 167},
  [47] = {.lex_state = 167},
  [48] = {.lex_state = 167},
  [49] = {.lex_state = 167},
  [50] = {.lex_state = 167},
  [51] = {.lex_state = 167},
  [52] = {.lex_state = 167},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 167},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 167},
  [57] = {.lex_state = 167},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 167},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 167},
  [63] = {.lex_state = 167},
  [64] = {.lex_state = 167},
  [65] = {.lex_state = 167},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 167},
  [68] = {.lex_state = 167},
  [69] = {.lex_state = 167},
  [70] = {.lex_state = 167},
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
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 15},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 15},
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
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 167},
  [123] = {.lex_state = 167},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 167},
  [132] = {.lex_state = 167},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 269},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 15},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 15},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 15},
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
    [aux_sym_check_table_constraint_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(158),
    [sym__statement] = STATE(55),
    [sym_create_domain_statement] = STATE(78),
    [sym_create_type_statement] = STATE(78),
    [sym_create_index_statement] = STATE(78),
    [sym_create_table_statement] = STATE(78),
    [sym_select_statement] = STATE(78),
    [aux_sym_source_file_repeat1] = STATE(55),
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [203] = 3,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [361] = 4,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [556] = 3,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [632] = 3,
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
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_where_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      sym_NULL,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
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
  [788] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(101), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [835] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      aux_sym_select_statement_token1,
    ACTIONS(119), 1,
      aux_sym_where_clause_token1,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_select_clause,
    STATE(79), 1,
      sym_where_clause,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(121), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
    STATE(25), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [888] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(127), 10,
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
  [929] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [974] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(135), 1,
      aux_sym_column_default_token1,
    ACTIONS(139), 1,
      aux_sym_check_table_constraint_token1,
    ACTIONS(141), 1,
      aux_sym_in_expression_token1,
    ACTIONS(143), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(145), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(147), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(149), 1,
      sym_NULL,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(31), 8,
      sym_named_constraint,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_primary_key_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1019] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(154), 1,
      aux_sym_column_default_token1,
    ACTIONS(159), 1,
      aux_sym_check_table_constraint_token1,
    ACTIONS(162), 1,
      aux_sym_in_expression_token1,
    ACTIONS(165), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(168), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(171), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(174), 1,
      sym_NULL,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(27), 8,
      sym_named_constraint,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_primary_key_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1061] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(121), 1,
      sym_ordered_expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(177), 4,
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
  [1097] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1135] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(183), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(50), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1171] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(135), 1,
      aux_sym_column_default_token1,
    ACTIONS(139), 1,
      aux_sym_check_table_constraint_token1,
    ACTIONS(141), 1,
      aux_sym_in_expression_token1,
    ACTIONS(143), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(145), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(147), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(149), 1,
      sym_NULL,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(27), 8,
      sym_named_constraint,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_primary_key_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1213] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym_ordered_expression,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(187), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(44), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [1272] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(191), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(29), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(193), 4,
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
  [1338] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(195), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(56), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(197), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(24), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(199), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(19), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(201), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(48), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1470] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(203), 4,
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
  [1503] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(205), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(15), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1536] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(11), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(207), 4,
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
  [1569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [1592] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1634] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1671] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(225), 1,
      aux_sym_on_delete_action_token1,
    STATE(131), 1,
      sym_on_delete_action,
    STATE(132), 1,
      sym_on_update_action,
    ACTIONS(219), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [1702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(225), 1,
      aux_sym_on_delete_action_token1,
    STATE(122), 1,
      sym_on_delete_action,
    STATE(123), 1,
      sym_on_update_action,
    ACTIONS(227), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [1730] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_check_table_constraint_token1,
    ACTIONS(141), 1,
      aux_sym_in_expression_token1,
    ACTIONS(149), 1,
      sym_NULL,
    STATE(54), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1798] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1836] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_check_table_constraint_token1,
    ACTIONS(240), 1,
      aux_sym_in_expression_token1,
    ACTIONS(243), 1,
      sym_NULL,
    STATE(51), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1863] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(253), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(256), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(259), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(262), 1,
      aux_sym_select_statement_token1,
    STATE(53), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(78), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [1929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_check_table_constraint_token1,
    ACTIONS(141), 1,
      aux_sym_in_expression_token1,
    ACTIONS(149), 1,
      sym_NULL,
    STATE(51), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1956] = 9,
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
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(53), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(78), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [1989] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(91), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(271), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 11,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_update_action_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_foreign_key_constraint_token1,
    ACTIONS(280), 1,
      aux_sym_check_table_constraint_token1,
    ACTIONS(282), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(284), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(124), 6,
      sym_create_table_column_parameter,
      sym_foreign_key_constraint,
      sym__table_constraint,
      sym_check_table_constraint,
      sym_unique_table_constraint,
      sym_primary_key_table_constraint,
  [2108] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_foreign_key_constraint_token1,
    ACTIONS(280), 1,
      aux_sym_check_table_constraint_token1,
    ACTIONS(282), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(284), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(118), 6,
      sym_create_table_column_parameter,
      sym_foreign_key_constraint,
      sym__table_constraint,
      sym_check_table_constraint,
      sym_unique_table_constraint,
      sym_primary_key_table_constraint,
  [2135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 11,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_delete_action_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(271), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_check_table_constraint_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      sym_NULL,
  [2287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_where_clause_token1,
    STATE(86), 1,
      sym_where_clause,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_where_clause_token1,
    STATE(83), 1,
      sym_where_clause,
    ACTIONS(306), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_where_clause_token1,
    STATE(77), 1,
      sym_where_clause,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_create_domain_statement_token2,
    ACTIONS(314), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2507] = 2,
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
  [2520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(65), 1,
      sym_type_cast,
    STATE(63), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(62), 1,
      sym__constraint_action,
    ACTIONS(342), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(105), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(59), 1,
      sym__constraint_action,
    ACTIONS(346), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(49), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_is_expression_token2,
    ACTIONS(350), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(26), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      aux_sym_using_clause_token1,
    STATE(71), 1,
      sym_index_table_parameters,
    STATE(145), 1,
      sym_using_clause,
  [2654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(10), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_tuple_repeat1,
  [2679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_parameters_repeat1,
  [2692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_tuple_repeat1,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_references_constraint_repeat1,
  [2718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_references_constraint_repeat1,
  [2731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_parameters_repeat1,
  [2744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_create_table_parameters_repeat1,
  [2781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_parameters_repeat1,
  [2794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_index_table_parameters_repeat1,
  [2807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_index_table_parameters_repeat1,
  [2820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_index_table_parameters_repeat1,
  [2907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_create_table_parameters_repeat1,
  [2933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_create_table_parameters_repeat1,
  [2946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_on_update_action_token1,
    STATE(70), 1,
      sym_on_update_action,
  [2972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_on_delete_action_token1,
    STATE(70), 1,
      sym_on_delete_action,
  [2982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_string,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_tuple,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_parameters,
  [3036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_on_update_action_token1,
    STATE(69), 1,
      sym_on_update_action,
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_on_delete_action_token1,
    STATE(69), 1,
      sym_on_delete_action,
  [3064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_references_constraint_token1,
    STATE(120), 1,
      sym_references_constraint,
  [3074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(103), 1,
      sym_parameter,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_references_constraint_repeat1,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(127), 1,
      sym_parameter,
  [3136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_references_constraint_token1,
    STATE(128), 1,
      sym_references_constraint,
  [3146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_create_table_parameters,
  [3156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_tuple,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_index_table_parameters,
  [3184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_identifier,
  [3191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym_in_expression_token2,
  [3198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_create_domain_statement_token2,
  [3212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      aux_sym_create_index_statement_token2,
  [3219] = 2,
    ACTIONS(453), 1,
      aux_sym_string_token1,
    ACTIONS(455), 1,
      sym_comment,
  [3226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [3233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
  [3240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_identifier,
  [3247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SQUOTE,
  [3261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [3268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
  [3275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_identifier,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
  [3296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_NULL,
  [3303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
  [3310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_identifier,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
  [3338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
  [3345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 281,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 361,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 478,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 556,
  [SMALL_STATE(17)] = 594,
  [SMALL_STATE(18)] = 632,
  [SMALL_STATE(19)] = 670,
  [SMALL_STATE(20)] = 712,
  [SMALL_STATE(21)] = 750,
  [SMALL_STATE(22)] = 788,
  [SMALL_STATE(23)] = 835,
  [SMALL_STATE(24)] = 888,
  [SMALL_STATE(25)] = 929,
  [SMALL_STATE(26)] = 974,
  [SMALL_STATE(27)] = 1019,
  [SMALL_STATE(28)] = 1061,
  [SMALL_STATE(29)] = 1097,
  [SMALL_STATE(30)] = 1135,
  [SMALL_STATE(31)] = 1171,
  [SMALL_STATE(32)] = 1213,
  [SMALL_STATE(33)] = 1249,
  [SMALL_STATE(34)] = 1272,
  [SMALL_STATE(35)] = 1305,
  [SMALL_STATE(36)] = 1338,
  [SMALL_STATE(37)] = 1371,
  [SMALL_STATE(38)] = 1404,
  [SMALL_STATE(39)] = 1437,
  [SMALL_STATE(40)] = 1470,
  [SMALL_STATE(41)] = 1503,
  [SMALL_STATE(42)] = 1536,
  [SMALL_STATE(43)] = 1569,
  [SMALL_STATE(44)] = 1592,
  [SMALL_STATE(45)] = 1634,
  [SMALL_STATE(46)] = 1671,
  [SMALL_STATE(47)] = 1702,
  [SMALL_STATE(48)] = 1730,
  [SMALL_STATE(49)] = 1768,
  [SMALL_STATE(50)] = 1798,
  [SMALL_STATE(51)] = 1836,
  [SMALL_STATE(52)] = 1863,
  [SMALL_STATE(53)] = 1896,
  [SMALL_STATE(54)] = 1929,
  [SMALL_STATE(55)] = 1956,
  [SMALL_STATE(56)] = 1989,
  [SMALL_STATE(57)] = 2021,
  [SMALL_STATE(58)] = 2043,
  [SMALL_STATE(59)] = 2064,
  [SMALL_STATE(60)] = 2081,
  [SMALL_STATE(61)] = 2108,
  [SMALL_STATE(62)] = 2135,
  [SMALL_STATE(63)] = 2152,
  [SMALL_STATE(64)] = 2171,
  [SMALL_STATE(65)] = 2187,
  [SMALL_STATE(66)] = 2203,
  [SMALL_STATE(67)] = 2223,
  [SMALL_STATE(68)] = 2239,
  [SMALL_STATE(69)] = 2255,
  [SMALL_STATE(70)] = 2271,
  [SMALL_STATE(71)] = 2287,
  [SMALL_STATE(72)] = 2306,
  [SMALL_STATE(73)] = 2325,
  [SMALL_STATE(74)] = 2344,
  [SMALL_STATE(75)] = 2358,
  [SMALL_STATE(76)] = 2372,
  [SMALL_STATE(77)] = 2388,
  [SMALL_STATE(78)] = 2401,
  [SMALL_STATE(79)] = 2416,
  [SMALL_STATE(80)] = 2429,
  [SMALL_STATE(81)] = 2442,
  [SMALL_STATE(82)] = 2455,
  [SMALL_STATE(83)] = 2468,
  [SMALL_STATE(84)] = 2481,
  [SMALL_STATE(85)] = 2494,
  [SMALL_STATE(86)] = 2507,
  [SMALL_STATE(87)] = 2520,
  [SMALL_STATE(88)] = 2541,
  [SMALL_STATE(89)] = 2554,
  [SMALL_STATE(90)] = 2566,
  [SMALL_STATE(91)] = 2578,
  [SMALL_STATE(92)] = 2590,
  [SMALL_STATE(93)] = 2602,
  [SMALL_STATE(94)] = 2614,
  [SMALL_STATE(95)] = 2626,
  [SMALL_STATE(96)] = 2638,
  [SMALL_STATE(97)] = 2654,
  [SMALL_STATE(98)] = 2666,
  [SMALL_STATE(99)] = 2679,
  [SMALL_STATE(100)] = 2692,
  [SMALL_STATE(101)] = 2705,
  [SMALL_STATE(102)] = 2718,
  [SMALL_STATE(103)] = 2731,
  [SMALL_STATE(104)] = 2744,
  [SMALL_STATE(105)] = 2757,
  [SMALL_STATE(106)] = 2768,
  [SMALL_STATE(107)] = 2781,
  [SMALL_STATE(108)] = 2794,
  [SMALL_STATE(109)] = 2807,
  [SMALL_STATE(110)] = 2820,
  [SMALL_STATE(111)] = 2833,
  [SMALL_STATE(112)] = 2846,
  [SMALL_STATE(113)] = 2859,
  [SMALL_STATE(114)] = 2872,
  [SMALL_STATE(115)] = 2885,
  [SMALL_STATE(116)] = 2894,
  [SMALL_STATE(117)] = 2907,
  [SMALL_STATE(118)] = 2920,
  [SMALL_STATE(119)] = 2933,
  [SMALL_STATE(120)] = 2946,
  [SMALL_STATE(121)] = 2954,
  [SMALL_STATE(122)] = 2962,
  [SMALL_STATE(123)] = 2972,
  [SMALL_STATE(124)] = 2982,
  [SMALL_STATE(125)] = 2990,
  [SMALL_STATE(126)] = 3000,
  [SMALL_STATE(127)] = 3010,
  [SMALL_STATE(128)] = 3018,
  [SMALL_STATE(129)] = 3026,
  [SMALL_STATE(130)] = 3036,
  [SMALL_STATE(131)] = 3044,
  [SMALL_STATE(132)] = 3054,
  [SMALL_STATE(133)] = 3064,
  [SMALL_STATE(134)] = 3074,
  [SMALL_STATE(135)] = 3082,
  [SMALL_STATE(136)] = 3092,
  [SMALL_STATE(137)] = 3100,
  [SMALL_STATE(138)] = 3110,
  [SMALL_STATE(139)] = 3118,
  [SMALL_STATE(140)] = 3126,
  [SMALL_STATE(141)] = 3136,
  [SMALL_STATE(142)] = 3146,
  [SMALL_STATE(143)] = 3156,
  [SMALL_STATE(144)] = 3166,
  [SMALL_STATE(145)] = 3174,
  [SMALL_STATE(146)] = 3184,
  [SMALL_STATE(147)] = 3191,
  [SMALL_STATE(148)] = 3198,
  [SMALL_STATE(149)] = 3205,
  [SMALL_STATE(150)] = 3212,
  [SMALL_STATE(151)] = 3219,
  [SMALL_STATE(152)] = 3226,
  [SMALL_STATE(153)] = 3233,
  [SMALL_STATE(154)] = 3240,
  [SMALL_STATE(155)] = 3247,
  [SMALL_STATE(156)] = 3254,
  [SMALL_STATE(157)] = 3261,
  [SMALL_STATE(158)] = 3268,
  [SMALL_STATE(159)] = 3275,
  [SMALL_STATE(160)] = 3282,
  [SMALL_STATE(161)] = 3289,
  [SMALL_STATE(162)] = 3296,
  [SMALL_STATE(163)] = 3303,
  [SMALL_STATE(164)] = 3310,
  [SMALL_STATE(165)] = 3317,
  [SMALL_STATE(166)] = 3324,
  [SMALL_STATE(167)] = 3331,
  [SMALL_STATE(168)] = 3338,
  [SMALL_STATE(169)] = 3345,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 10),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 12),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 12),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(163),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(87),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(42),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(162),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(168),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(68),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(64),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(33),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(42),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(162),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(33),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_table_constraint, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(37),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 13),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 13),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 5, .production_id = 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(140),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_references_constraint_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_constraint_repeat1, 2), SHIFT_REPEAT(101),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_key_constraint_repeat1, 2), SHIFT_REPEAT(146),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_key_constraint_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(28),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(60),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_key_constraint, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_key_constraint, 6),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 11),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_table_constraint, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_table_constraint, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_table_constraint, 5),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_table_constraint, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 8),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [469] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
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
