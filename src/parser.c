#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
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
  sym__type_alias = 91,
  sym_array_type = 92,
  sym__type = 93,
  sym_type_cast = 94,
  sym__expression = 95,
  aux_sym_source_file_repeat1 = 96,
  aux_sym_create_domain_statement_repeat1 = 97,
  aux_sym_create_table_column_parameter_repeat1 = 98,
  aux_sym_create_table_parameters_repeat1 = 99,
  aux_sym_foreign_key_constraint_repeat1 = 100,
  aux_sym_index_table_parameters_repeat1 = 101,
  aux_sym_tuple_repeat1 = 102,
  aux_sym_references_constraint_repeat1 = 103,
  aux_sym_parameters_repeat1 = 104,
  alias_sym_type = 105,
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
  [20] = {.lex_state = 167},
  [21] = {.lex_state = 167},
  [22] = {.lex_state = 167},
  [23] = {.lex_state = 166},
  [24] = {.lex_state = 167},
  [25] = {.lex_state = 167},
  [26] = {.lex_state = 167},
  [27] = {.lex_state = 167},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 167},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 167},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 167},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 167},
  [43] = {.lex_state = 167},
  [44] = {.lex_state = 167},
  [45] = {.lex_state = 167},
  [46] = {.lex_state = 167},
  [47] = {.lex_state = 167},
  [48] = {.lex_state = 167},
  [49] = {.lex_state = 167},
  [50] = {.lex_state = 167},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 167},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 167},
  [55] = {.lex_state = 167},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 167},
  [58] = {.lex_state = 167},
  [59] = {.lex_state = 167},
  [60] = {.lex_state = 167},
  [61] = {.lex_state = 167},
  [62] = {.lex_state = 167},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 167},
  [65] = {.lex_state = 167},
  [66] = {.lex_state = 167},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 0},
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
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
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
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 167},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 167},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 167},
  [129] = {.lex_state = 167},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 264},
  [151] = {.lex_state = 15},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 15},
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
    [sym_source_file] = STATE(161),
    [sym__statement] = STATE(53),
    [sym_create_domain_statement] = STATE(77),
    [sym_create_type_statement] = STATE(77),
    [sym_create_index_statement] = STATE(77),
    [sym_create_table_statement] = STATE(77),
    [sym_select_statement] = STATE(77),
    [aux_sym_source_file_repeat1] = STATE(53),
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
  [86] = 4,
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
  [127] = 3,
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
      anon_sym_LBRACK,
  [166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 28,
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
  [207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 29,
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
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 29,
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
  [285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 29,
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
      anon_sym_LBRACK,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 29,
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
  [363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 29,
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
  [440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 27,
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
  [480] = 3,
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
  [518] = 3,
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
  [594] = 3,
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
  [670] = 3,
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
  [708] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 26,
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
  [788] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
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
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym_unique_constraint_token1,
      aux_sym_primary_key_table_constraint_token1,
      aux_sym_check_constraint_token1,
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
    STATE(71), 1,
      sym_select_clause,
    STATE(85), 1,
      sym_where_clause,
    STATE(4), 3,
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
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
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
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(63), 1,
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
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(135), 1,
      aux_sym_column_default_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token1,
    ACTIONS(141), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(143), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(145), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(147), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(149), 1,
      sym_NULL,
    ACTIONS(137), 2,
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
  [1019] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(135), 1,
      aux_sym_column_default_token1,
    ACTIONS(139), 1,
      aux_sym_in_expression_token1,
    ACTIONS(141), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(143), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(145), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(147), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(149), 1,
      sym_NULL,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(32), 8,
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
    STATE(119), 1,
      sym_ordered_expression,
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(153), 4,
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
  [1097] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      sym_ordered_expression,
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(155), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(43), 7,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym__expression,
  [1133] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
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
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1171] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(161), 4,
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
  [1207] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(166), 1,
      aux_sym_column_default_token1,
    ACTIONS(171), 1,
      aux_sym_in_expression_token1,
    ACTIONS(174), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(177), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(180), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(183), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(186), 1,
      sym_NULL,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(32), 8,
      sym_named_constraint,
      sym_column_default,
      sym_references_constraint,
      sym_unique_constraint,
      sym_primary_key_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(189), 4,
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
  [1282] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(191), 4,
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
  [1315] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(193), 4,
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
  [1348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(195), 4,
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
  [1381] = 2,
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
  [1404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(199), 4,
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
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(201), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(55), 7,
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
    STATE(4), 3,
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
    STATE(4), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(205), 4,
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
  [1536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 17,
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
  [1559] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1601] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(221), 1,
      aux_sym_on_delete_action_token1,
    STATE(128), 1,
      sym_on_delete_action,
    STATE(129), 1,
      sym_on_update_action,
    ACTIONS(215), 10,
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
  [1632] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
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
    ACTIONS(213), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1669] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(221), 1,
      aux_sym_on_delete_action_token1,
    STATE(120), 1,
      sym_on_delete_action,
    STATE(122), 1,
      sym_on_update_action,
    ACTIONS(227), 10,
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
  [1735] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
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
    STATE(116), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1773] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_in_expression_token1,
    ACTIONS(147), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(149), 1,
      sym_NULL,
    STATE(50), 3,
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
  [1803] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_in_expression_token1,
    ACTIONS(147), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(149), 1,
      sym_NULL,
    STATE(52), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1830] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(240), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(243), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(246), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(249), 1,
      aux_sym_select_statement_token1,
    STATE(51), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(77), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [1863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_in_expression_token1,
    ACTIONS(257), 1,
      aux_sym_check_constraint_token1,
    ACTIONS(260), 1,
      sym_NULL,
    STATE(52), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1890] = 9,
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
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(77), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [1923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(265), 10,
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
  [1945] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(95), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 1,
      aux_sym_in_expression_token1,
    ACTIONS(105), 1,
      aux_sym_in_expression_token2,
    ACTIONS(111), 1,
      aux_sym_is_expression_token1,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(56), 1,
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
  [1998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 11,
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
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(265), 10,
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
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 11,
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
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 10,
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
  [2067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 10,
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
  [2083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 10,
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
  [2099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 10,
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
  [2135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 10,
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
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 10,
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
  [2167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_foreign_key_constraint_token1,
    ACTIONS(290), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(292), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(294), 1,
      sym_identifier,
    STATE(123), 5,
      sym_create_table_column_parameter,
      sym_foreign_key_constraint,
      sym__table_constraint,
      sym_unique_table_constraint,
      sym_primary_key_table_constraint,
  [2190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_foreign_key_constraint_token1,
    ACTIONS(290), 1,
      aux_sym_unique_constraint_token1,
    ACTIONS(292), 1,
      aux_sym_primary_key_table_constraint_token1,
    ACTIONS(294), 1,
      sym_identifier,
    STATE(115), 5,
      sym_create_table_column_parameter,
      sym_foreign_key_constraint,
      sym__table_constraint,
      sym_unique_table_constraint,
      sym_primary_key_table_constraint,
  [2213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_where_clause_token1,
    STATE(83), 1,
      sym_where_clause,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_where_clause_token1,
    STATE(81), 1,
      sym_where_clause,
    ACTIONS(300), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_where_clause_token1,
    STATE(84), 1,
      sym_where_clause,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_create_domain_statement_token2,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2314] = 2,
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
  [2327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2381] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(60), 1,
      sym_type_cast,
    STATE(58), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [2402] = 2,
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
  [2415] = 2,
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
  [2428] = 2,
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
  [2441] = 2,
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
  [2454] = 2,
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
  [2467] = 2,
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
  [2480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_is_expression_token2,
    ACTIONS(338), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(6), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      aux_sym_using_clause_token1,
    STATE(70), 1,
      sym_index_table_parameters,
    STATE(139), 1,
      sym_using_clause,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(26), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(49), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(59), 1,
      sym__constraint_action,
    ACTIONS(346), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym__constraint_action,
    ACTIONS(348), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(98), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_index_table_parameters_repeat1,
  [2642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_parameters_repeat1,
  [2668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_index_table_parameters_repeat1,
  [2681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_index_table_parameters_repeat1,
  [2694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_parameters_repeat1,
  [2707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_tuple_repeat1,
  [2720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_create_table_parameters_repeat1,
  [2746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(109), 1,
      aux_sym_references_constraint_repeat1,
  [2772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_foreign_key_constraint_repeat1,
  [2798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_parameters_repeat1,
  [2811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(402), 1,
      sym_identifier,
    STATE(109), 1,
      aux_sym_references_constraint_repeat1,
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_create_table_parameters_repeat1,
  [2846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_tuple_repeat1,
  [2859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_create_table_parameters_repeat1,
  [2872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_parameters,
  [2882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_on_update_action_token1,
    STATE(61), 1,
      sym_on_update_action,
  [2900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_on_delete_action_token1,
    STATE(61), 1,
      sym_on_delete_action,
  [2918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym_string,
  [2936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_tuple,
  [2946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_on_update_action_token1,
    STATE(64), 1,
      sym_on_update_action,
  [2972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_on_delete_action_token1,
    STATE(64), 1,
      sym_on_delete_action,
  [2982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_references_constraint_token1,
    STATE(142), 1,
      sym_references_constraint,
  [2992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(121), 1,
      sym_parameter,
  [3002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(114), 1,
      aux_sym_references_constraint_repeat1,
  [3020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_tuple,
  [3046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(104), 1,
      sym_parameter,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_index_table_parameters,
  [3074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_create_table_parameters,
  [3084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_references_constraint_token1,
    STATE(126), 1,
      sym_references_constraint,
  [3094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [3124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym_create_domain_statement_token2,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_create_index_statement_token2,
  [3152] = 2,
    ACTIONS(449), 1,
      aux_sym_string_token1,
    ACTIONS(451), 1,
      sym_comment,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      aux_sym_in_expression_token2,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SQUOTE,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
  [3187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_identifier,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
  [3208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_NULL,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_identifier,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_identifier,
  [3243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_identifier,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
  [3257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [3271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 207,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 480,
  [SMALL_STATE(15)] = 518,
  [SMALL_STATE(16)] = 556,
  [SMALL_STATE(17)] = 594,
  [SMALL_STATE(18)] = 632,
  [SMALL_STATE(19)] = 670,
  [SMALL_STATE(20)] = 708,
  [SMALL_STATE(21)] = 750,
  [SMALL_STATE(22)] = 788,
  [SMALL_STATE(23)] = 835,
  [SMALL_STATE(24)] = 888,
  [SMALL_STATE(25)] = 929,
  [SMALL_STATE(26)] = 974,
  [SMALL_STATE(27)] = 1019,
  [SMALL_STATE(28)] = 1061,
  [SMALL_STATE(29)] = 1097,
  [SMALL_STATE(30)] = 1133,
  [SMALL_STATE(31)] = 1171,
  [SMALL_STATE(32)] = 1207,
  [SMALL_STATE(33)] = 1249,
  [SMALL_STATE(34)] = 1282,
  [SMALL_STATE(35)] = 1315,
  [SMALL_STATE(36)] = 1348,
  [SMALL_STATE(37)] = 1381,
  [SMALL_STATE(38)] = 1404,
  [SMALL_STATE(39)] = 1437,
  [SMALL_STATE(40)] = 1470,
  [SMALL_STATE(41)] = 1503,
  [SMALL_STATE(42)] = 1536,
  [SMALL_STATE(43)] = 1559,
  [SMALL_STATE(44)] = 1601,
  [SMALL_STATE(45)] = 1632,
  [SMALL_STATE(46)] = 1669,
  [SMALL_STATE(47)] = 1707,
  [SMALL_STATE(48)] = 1735,
  [SMALL_STATE(49)] = 1773,
  [SMALL_STATE(50)] = 1803,
  [SMALL_STATE(51)] = 1830,
  [SMALL_STATE(52)] = 1863,
  [SMALL_STATE(53)] = 1890,
  [SMALL_STATE(54)] = 1923,
  [SMALL_STATE(55)] = 1945,
  [SMALL_STATE(56)] = 1977,
  [SMALL_STATE(57)] = 1998,
  [SMALL_STATE(58)] = 2015,
  [SMALL_STATE(59)] = 2034,
  [SMALL_STATE(60)] = 2051,
  [SMALL_STATE(61)] = 2067,
  [SMALL_STATE(62)] = 2083,
  [SMALL_STATE(63)] = 2099,
  [SMALL_STATE(64)] = 2119,
  [SMALL_STATE(65)] = 2135,
  [SMALL_STATE(66)] = 2151,
  [SMALL_STATE(67)] = 2167,
  [SMALL_STATE(68)] = 2190,
  [SMALL_STATE(69)] = 2213,
  [SMALL_STATE(70)] = 2232,
  [SMALL_STATE(71)] = 2251,
  [SMALL_STATE(72)] = 2270,
  [SMALL_STATE(73)] = 2284,
  [SMALL_STATE(74)] = 2298,
  [SMALL_STATE(75)] = 2314,
  [SMALL_STATE(76)] = 2327,
  [SMALL_STATE(77)] = 2340,
  [SMALL_STATE(78)] = 2355,
  [SMALL_STATE(79)] = 2368,
  [SMALL_STATE(80)] = 2381,
  [SMALL_STATE(81)] = 2402,
  [SMALL_STATE(82)] = 2415,
  [SMALL_STATE(83)] = 2428,
  [SMALL_STATE(84)] = 2441,
  [SMALL_STATE(85)] = 2454,
  [SMALL_STATE(86)] = 2467,
  [SMALL_STATE(87)] = 2480,
  [SMALL_STATE(88)] = 2492,
  [SMALL_STATE(89)] = 2504,
  [SMALL_STATE(90)] = 2516,
  [SMALL_STATE(91)] = 2532,
  [SMALL_STATE(92)] = 2544,
  [SMALL_STATE(93)] = 2556,
  [SMALL_STATE(94)] = 2568,
  [SMALL_STATE(95)] = 2580,
  [SMALL_STATE(96)] = 2592,
  [SMALL_STATE(97)] = 2605,
  [SMALL_STATE(98)] = 2618,
  [SMALL_STATE(99)] = 2629,
  [SMALL_STATE(100)] = 2642,
  [SMALL_STATE(101)] = 2655,
  [SMALL_STATE(102)] = 2668,
  [SMALL_STATE(103)] = 2681,
  [SMALL_STATE(104)] = 2694,
  [SMALL_STATE(105)] = 2707,
  [SMALL_STATE(106)] = 2720,
  [SMALL_STATE(107)] = 2733,
  [SMALL_STATE(108)] = 2746,
  [SMALL_STATE(109)] = 2759,
  [SMALL_STATE(110)] = 2772,
  [SMALL_STATE(111)] = 2785,
  [SMALL_STATE(112)] = 2798,
  [SMALL_STATE(113)] = 2811,
  [SMALL_STATE(114)] = 2820,
  [SMALL_STATE(115)] = 2833,
  [SMALL_STATE(116)] = 2846,
  [SMALL_STATE(117)] = 2859,
  [SMALL_STATE(118)] = 2872,
  [SMALL_STATE(119)] = 2882,
  [SMALL_STATE(120)] = 2890,
  [SMALL_STATE(121)] = 2900,
  [SMALL_STATE(122)] = 2908,
  [SMALL_STATE(123)] = 2918,
  [SMALL_STATE(124)] = 2926,
  [SMALL_STATE(125)] = 2936,
  [SMALL_STATE(126)] = 2946,
  [SMALL_STATE(127)] = 2954,
  [SMALL_STATE(128)] = 2962,
  [SMALL_STATE(129)] = 2972,
  [SMALL_STATE(130)] = 2982,
  [SMALL_STATE(131)] = 2992,
  [SMALL_STATE(132)] = 3002,
  [SMALL_STATE(133)] = 3010,
  [SMALL_STATE(134)] = 3020,
  [SMALL_STATE(135)] = 3028,
  [SMALL_STATE(136)] = 3036,
  [SMALL_STATE(137)] = 3046,
  [SMALL_STATE(138)] = 3056,
  [SMALL_STATE(139)] = 3064,
  [SMALL_STATE(140)] = 3074,
  [SMALL_STATE(141)] = 3084,
  [SMALL_STATE(142)] = 3094,
  [SMALL_STATE(143)] = 3102,
  [SMALL_STATE(144)] = 3110,
  [SMALL_STATE(145)] = 3117,
  [SMALL_STATE(146)] = 3124,
  [SMALL_STATE(147)] = 3131,
  [SMALL_STATE(148)] = 3138,
  [SMALL_STATE(149)] = 3145,
  [SMALL_STATE(150)] = 3152,
  [SMALL_STATE(151)] = 3159,
  [SMALL_STATE(152)] = 3166,
  [SMALL_STATE(153)] = 3173,
  [SMALL_STATE(154)] = 3180,
  [SMALL_STATE(155)] = 3187,
  [SMALL_STATE(156)] = 3194,
  [SMALL_STATE(157)] = 3201,
  [SMALL_STATE(158)] = 3208,
  [SMALL_STATE(159)] = 3215,
  [SMALL_STATE(160)] = 3222,
  [SMALL_STATE(161)] = 3229,
  [SMALL_STATE(162)] = 3236,
  [SMALL_STATE(163)] = 3243,
  [SMALL_STATE(164)] = 3250,
  [SMALL_STATE(165)] = 3257,
  [SMALL_STATE(166)] = 3264,
  [SMALL_STATE(167)] = 3271,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 12),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 10),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 10),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(158),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(80),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(159),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(160),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(62),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(66),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(34),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(42),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(159),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(34),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(42),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(36),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 13),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 13),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 5, .production_id = 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(28),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_key_constraint_repeat1, 2), SHIFT_REPEAT(156),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_key_constraint_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_references_constraint_repeat1, 2),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_constraint_repeat1, 2), SHIFT_REPEAT(109),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(131),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(67),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_key_constraint, 6),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 11),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_table_constraint, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_table_constraint, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_table_constraint, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_table_constraint, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_key_constraint, 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 8),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [473] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
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
