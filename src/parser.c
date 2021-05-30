#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  aux_sym_table_constraint_check_token1 = 12,
  aux_sym_table_constraint_foreign_key_token1 = 13,
  aux_sym_table_constraint_unique_token1 = 14,
  aux_sym_table_constraint_primary_key_token1 = 15,
  aux_sym_create_table_statement_token1 = 16,
  aux_sym_using_clause_token1 = 17,
  aux_sym_select_statement_token1 = 18,
  aux_sym_in_expression_token1 = 19,
  aux_sym_in_expression_token2 = 20,
  aux_sym_references_constraint_token1 = 21,
  aux_sym_on_update_action_token1 = 22,
  aux_sym_on_delete_action_token1 = 23,
  aux_sym__constraint_action_token1 = 24,
  aux_sym__constraint_action_token2 = 25,
  aux_sym__constraint_action_token3 = 26,
  aux_sym_where_clause_token1 = 27,
  anon_sym_LT = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_LT_GT = 30,
  anon_sym_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  aux_sym_is_expression_token1 = 34,
  aux_sym_is_expression_token2 = 35,
  aux_sym_distinct_from_token1 = 36,
  aux_sym_boolean_expression_token1 = 37,
  aux_sym_boolean_expression_token2 = 38,
  sym_NULL = 39,
  sym_TRUE = 40,
  sym_FALSE = 41,
  sym_number = 42,
  sym_identifier = 43,
  anon_sym_SQUOTE = 44,
  aux_sym_string_token1 = 45,
  anon_sym_DASH_GT_GT = 46,
  aux_sym_ordered_expression_token1 = 47,
  aux_sym_ordered_expression_token2 = 48,
  anon_sym_LBRACK = 49,
  anon_sym_RBRACK = 50,
  anon_sym_COLON_COLON = 51,
  sym_comment = 52,
  anon_sym_TILDE = 53,
  anon_sym_PLUS = 54,
  sym_source_file = 55,
  sym__statement = 56,
  sym_create_domain_statement = 57,
  sym_create_type_statement = 58,
  sym_create_index_statement = 59,
  sym_create_table_column_parameter = 60,
  sym_named_constraint = 61,
  sym_column_default = 62,
  sym_create_table_parameters = 63,
  sym__table_constraint = 64,
  sym_table_constraint_check = 65,
  sym_table_constraint_foreign_key = 66,
  sym_table_constraint_unique = 67,
  sym_table_constraint_primary_key = 68,
  sym_primary_key_constraint = 69,
  sym_create_table_statement = 70,
  sym_using_clause = 71,
  sym_index_table_parameters = 72,
  sym_select_statement = 73,
  sym_in_expression = 74,
  sym_tuple = 75,
  sym_select_clause = 76,
  sym_references_constraint = 77,
  sym_on_update_action = 78,
  sym_on_delete_action = 79,
  sym__constraint_action = 80,
  sym_unique_constraint = 81,
  sym_null_constraint = 82,
  sym_check_constraint = 83,
  sym_parameter = 84,
  sym_parameters = 85,
  sym_function_call = 86,
  sym_where_clause = 87,
  sym_comparison_operator = 88,
  sym__parenthesized_expression = 89,
  sym_is_expression = 90,
  sym_distinct_from = 91,
  sym_boolean_expression = 92,
  sym_string = 93,
  sym_field_access = 94,
  sym_ordered_expression = 95,
  sym__type_alias = 96,
  sym_array_type = 97,
  sym__type = 98,
  sym_type_cast = 99,
  sym_binary_expression = 100,
  sym__expression = 101,
  aux_sym_source_file_repeat1 = 102,
  aux_sym_create_domain_statement_repeat1 = 103,
  aux_sym_create_table_column_parameter_repeat1 = 104,
  aux_sym_create_table_parameters_repeat1 = 105,
  aux_sym_table_constraint_foreign_key_repeat1 = 106,
  aux_sym_index_table_parameters_repeat1 = 107,
  aux_sym_tuple_repeat1 = 108,
  aux_sym_parameters_repeat1 = 109,
  alias_sym_type = 110,
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
  [aux_sym_create_domain_statement_repeat1] = "create_domain_statement_repeat1",
  [aux_sym_create_table_column_parameter_repeat1] = "create_table_column_parameter_repeat1",
  [aux_sym_create_table_parameters_repeat1] = "create_table_parameters_repeat1",
  [aux_sym_table_constraint_foreign_key_repeat1] = "table_constraint_foreign_key_repeat1",
  [aux_sym_index_table_parameters_repeat1] = "index_table_parameters_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
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
  [aux_sym_create_domain_statement_repeat1] = aux_sym_create_domain_statement_repeat1,
  [aux_sym_create_table_column_parameter_repeat1] = aux_sym_create_table_column_parameter_repeat1,
  [aux_sym_create_table_parameters_repeat1] = aux_sym_create_table_parameters_repeat1,
  [aux_sym_table_constraint_foreign_key_repeat1] = aux_sym_table_constraint_foreign_key_repeat1,
  [aux_sym_index_table_parameters_repeat1] = aux_sym_index_table_parameters_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(181);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(192);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(216);
      if (lookahead == '>') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'C') ADVANCE(23);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead == 'W') ADVANCE(85);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') SKIP(174)
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(192);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(276);
      if (lookahead == 'T') ADVANCE(269);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(253);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'U') ADVANCE(264);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(294);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(289);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'Y') ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(162);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(157);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(159);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(106);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(95);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(291);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(290);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(150);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(156);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(152);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(222);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(125);
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(228);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(209);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(207);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(206);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(142);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 79:
      if (lookahead == 'F') ADVANCE(137);
      END_STATE();
    case 80:
      if (lookahead == 'F') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(160);
      END_STATE();
    case 82:
      if (lookahead == 'G') ADVANCE(200);
      END_STATE();
    case 83:
      if (lookahead == 'G') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'H') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'H') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 95:
      if (lookahead == 'K') ADVANCE(193);
      END_STATE();
    case 96:
      if (lookahead == 'K') ADVANCE(66);
      END_STATE();
    case 97:
      if (lookahead == 'K') ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(224);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(210);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(98);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(151);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 108:
      if (lookahead == 'M') ADVANCE(221);
      END_STATE();
    case 109:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 110:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(184);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(204);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(187);
      if (lookahead == 'R') ADVANCE(223);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(165);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(223);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 131:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 132:
      if (lookahead == 'P') ADVANCE(59);
      END_STATE();
    case 133:
      if (lookahead == 'Q') ADVANCE(164);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(163);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(205);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(189);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(188);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(91);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 161:
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 162:
      if (lookahead == 'U') ADVANCE(103);
      END_STATE();
    case 163:
      if (lookahead == 'U') ADVANCE(53);
      END_STATE();
    case 164:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 165:
      if (lookahead == 'U') ADVANCE(102);
      END_STATE();
    case 166:
      if (lookahead == 'X') ADVANCE(186);
      END_STATE();
    case 167:
      if (lookahead == 'Y') ADVANCE(195);
      END_STATE();
    case 168:
      if (lookahead == 'Y') ADVANCE(198);
      END_STATE();
    case 169:
      if (lookahead == 'Y') ADVANCE(14);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 173:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 174:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(173)
      END_STATE();
    case 175:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(180)
      END_STATE();
    case 176:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(180)
      if (lookahead == '\r') SKIP(175)
      END_STATE();
    case 177:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(179)
      END_STATE();
    case 178:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(179)
      if (lookahead == '\r') SKIP(177)
      END_STATE();
    case 179:
      if (eof) ADVANCE(181);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == 'C') ADVANCE(270);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(276);
      if (lookahead == 'S') ADVANCE(248);
      if (lookahead == 'T') ADVANCE(269);
      if (lookahead == 'W') ADVANCE(252);
      if (lookahead == '\\') SKIP(178)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(179)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 180:
      if (eof) ADVANCE(181);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(192);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(216);
      if (lookahead == '>') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'U') ADVANCE(117);
      if (lookahead == 'W') ADVANCE(85);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') SKIP(176)
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(180)
      END_STATE();
    case 181:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '>') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_is_expression_token2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_NULL);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_TRUE);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_FALSE);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'C') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'C') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'G') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'H') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'H') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'I') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'I') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'I') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'K') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'M') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'N') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'N') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'Q') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'R') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'R') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'R') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'R') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'R') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'R') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'S') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'T') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'T') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'U') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'U') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'U') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'Y') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == '\r') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 180},
  [3] = {.lex_state = 180},
  [4] = {.lex_state = 180},
  [5] = {.lex_state = 180},
  [6] = {.lex_state = 180},
  [7] = {.lex_state = 180},
  [8] = {.lex_state = 180},
  [9] = {.lex_state = 180},
  [10] = {.lex_state = 180},
  [11] = {.lex_state = 180},
  [12] = {.lex_state = 180},
  [13] = {.lex_state = 180},
  [14] = {.lex_state = 180},
  [15] = {.lex_state = 180},
  [16] = {.lex_state = 180},
  [17] = {.lex_state = 180},
  [18] = {.lex_state = 180},
  [19] = {.lex_state = 180},
  [20] = {.lex_state = 180},
  [21] = {.lex_state = 180},
  [22] = {.lex_state = 180},
  [23] = {.lex_state = 180},
  [24] = {.lex_state = 180},
  [25] = {.lex_state = 179},
  [26] = {.lex_state = 180},
  [27] = {.lex_state = 180},
  [28] = {.lex_state = 180},
  [29] = {.lex_state = 180},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 180},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 180},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 180},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 180},
  [48] = {.lex_state = 180},
  [49] = {.lex_state = 180},
  [50] = {.lex_state = 180},
  [51] = {.lex_state = 180},
  [52] = {.lex_state = 180},
  [53] = {.lex_state = 180},
  [54] = {.lex_state = 180},
  [55] = {.lex_state = 180},
  [56] = {.lex_state = 180},
  [57] = {.lex_state = 180},
  [58] = {.lex_state = 180},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 180},
  [62] = {.lex_state = 180},
  [63] = {.lex_state = 180},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 180},
  [66] = {.lex_state = 180},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 180},
  [70] = {.lex_state = 180},
  [71] = {.lex_state = 180},
  [72] = {.lex_state = 180},
  [73] = {.lex_state = 180},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 180},
  [76] = {.lex_state = 180},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 16},
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
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 180},
  [131] = {.lex_state = 180},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 180},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 180},
  [142] = {.lex_state = 180},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 180},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 286},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 16},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 16},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 16},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 16},
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
    [sym_source_file] = STATE(169),
    [sym__statement] = STATE(59),
    [sym_create_domain_statement] = STATE(90),
    [sym_create_type_statement] = STATE(90),
    [sym_create_index_statement] = STATE(90),
    [sym_create_table_statement] = STATE(90),
    [sym_select_statement] = STATE(90),
    [aux_sym_source_file_repeat1] = STATE(59),
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
    ACTIONS(17), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [49] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [90] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(61), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [554] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(85), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [932] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(115), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [983] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      aux_sym_select_statement_token1,
    ACTIONS(125), 1,
      aux_sym_where_clause_token1,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym_select_clause,
    STATE(83), 1,
      sym_where_clause,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(127), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
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
  [1037] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(133), 10,
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
  [1082] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [1131] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1173] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(143), 1,
      aux_sym_column_default_token1,
    ACTIONS(147), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(149), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(151), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(153), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(157), 1,
      sym_NULL,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(45), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1218] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(145), 1,
      sym_ordered_expression,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(159), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(48), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1255] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_ordered_expression,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(161), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(35), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1292] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(165), 4,
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
  [1329] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(170), 1,
      aux_sym_column_default_token1,
    ACTIONS(175), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(178), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(181), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(184), 1,
      aux_sym_in_expression_token1,
    ACTIONS(187), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(190), 1,
      sym_NULL,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(33), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(193), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(53), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1405] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(199), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1451] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(201), 4,
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
  [1485] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(203), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(15), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1519] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(205), 4,
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
  [1553] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(207), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(20), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(209), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(54), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1621] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(211), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(17), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1655] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(213), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(21), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1689] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(215), 4,
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
  [1723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(217), 4,
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
  [1757] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(143), 1,
      aux_sym_column_default_token1,
    ACTIONS(147), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(149), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(151), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(153), 1,
      aux_sym_in_expression_token1,
    ACTIONS(155), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(157), 1,
      sym_NULL,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(33), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1799] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(9), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(221), 4,
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
  [1833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(199), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [1920] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1962] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2004] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(239), 1,
      aux_sym_on_delete_action_token1,
    STATE(130), 1,
      sym_on_delete_action,
    STATE(131), 1,
      sym_on_update_action,
    ACTIONS(233), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2035] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2072] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_in_expression_token1,
    ACTIONS(65), 1,
      aux_sym_in_expression_token2,
    ACTIONS(71), 1,
      aux_sym_is_expression_token1,
    ACTIONS(73), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(75), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(69), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(239), 1,
      aux_sym_on_delete_action_token1,
    STATE(142), 1,
      sym_on_update_action,
    STATE(151), 1,
      sym_on_delete_action,
    ACTIONS(245), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2136] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(153), 1,
      aux_sym_in_expression_token1,
    ACTIONS(157), 1,
      sym_NULL,
    STATE(58), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(239), 1,
      aux_sym_on_delete_action_token1,
    STATE(137), 1,
      sym_on_update_action,
    STATE(141), 1,
      sym_on_delete_action,
    ACTIONS(249), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2194] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(153), 1,
      aux_sym_in_expression_token1,
    ACTIONS(157), 1,
      sym_NULL,
    STATE(61), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2221] = 9,
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
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    STATE(60), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(90), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2254] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(260), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(263), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(266), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(269), 1,
      aux_sym_select_statement_token1,
    STATE(60), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(90), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(277), 1,
      aux_sym_in_expression_token1,
    ACTIONS(280), 1,
      sym_NULL,
    STATE(61), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(272), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(283), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 11,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_delete_action_token1,
      sym_NULL,
  [2353] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(289), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(291), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(293), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(120), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [2380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 11,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym_on_update_action_token1,
      sym_NULL,
  [2397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(283), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2416] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(289), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(291), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(293), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(129), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [2443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(133), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 10,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      sym_NULL,
  [2596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_where_clause_token1,
    STATE(86), 1,
      sym_where_clause,
    ACTIONS(316), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_where_clause_token1,
    STATE(87), 1,
      sym_where_clause,
    ACTIONS(320), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_where_clause_token1,
    STATE(85), 1,
      sym_where_clause,
    ACTIONS(322), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_create_domain_statement_token2,
    ACTIONS(326), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2697] = 2,
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
  [2710] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_identifier,
    STATE(76), 1,
      sym_type_cast,
    STATE(66), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [2731] = 2,
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
  [2744] = 2,
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
  [2757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2770] = 2,
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
  [2783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(342), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 6,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_index_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_is_expression_token2,
    ACTIONS(358), 1,
      aux_sym_distinct_from_token1,
    STATE(23), 1,
      sym_distinct_from,
    ACTIONS(360), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_distinct_from_token1,
    STATE(13), 1,
      sym_distinct_from,
    ACTIONS(362), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [2908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(63), 1,
      sym__constraint_action,
    ACTIONS(364), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym__constraint_action,
    ACTIONS(366), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [2932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(56), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(110), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      aux_sym_using_clause_token1,
    STATE(77), 1,
      sym_index_table_parameters,
    STATE(128), 1,
      sym_using_clause,
  [2972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(29), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(11), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [2996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_index_table_parameters_repeat1,
  [3009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_index_table_parameters_repeat1,
  [3035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_tuple_repeat1,
  [3048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_index_table_parameters_repeat1,
  [3085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_parameters_repeat1,
  [3137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_create_table_parameters_repeat1,
  [3150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_create_table_parameters_repeat1,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_parameters_repeat1,
  [3215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_create_table_parameters_repeat1,
  [3241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_parameters_repeat1,
  [3254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_tuple_repeat1,
  [3267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_index_table_parameters,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_on_update_action_token1,
    STATE(71), 1,
      sym_on_update_action,
  [3311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_on_delete_action_token1,
    STATE(71), 1,
      sym_on_delete_action,
  [3321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_tuple,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_create_table_parameters,
  [3349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_parameters,
  [3359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_references_constraint_token1,
    STATE(149), 1,
      sym_references_constraint,
  [3369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_on_delete_action_token1,
    STATE(70), 1,
      sym_on_delete_action,
  [3379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_on_update_action_token1,
    STATE(70), 1,
      sym_on_update_action,
  [3413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_on_delete_action_token1,
    STATE(72), 1,
      sym_on_delete_action,
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    STATE(124), 1,
      sym_parameter,
  [3433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_tuple,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym_string,
  [3461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    STATE(139), 1,
      sym_parameter,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_references_constraint_token1,
    STATE(152), 1,
      sym_references_constraint,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_on_update_action_token1,
    STATE(72), 1,
      sym_on_update_action,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
  [3529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
  [3536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [3543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym_in_expression_token2,
  [3550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SQUOTE,
  [3557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_identifier,
  [3564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
  [3571] = 2,
    ACTIONS(468), 1,
      aux_sym_string_token1,
    ACTIONS(470), 1,
      sym_comment,
  [3578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [3585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_NULL,
  [3592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
  [3599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
  [3606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_identifier,
  [3613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_create_index_statement_token2,
  [3620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_create_domain_statement_token2,
  [3627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
  [3634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_identifier,
  [3641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_identifier,
  [3648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [3655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_identifier,
  [3662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_identifier,
  [3669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
  [3676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_identifier,
  [3683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 379,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 514,
  [SMALL_STATE(15)] = 554,
  [SMALL_STATE(16)] = 606,
  [SMALL_STATE(17)] = 646,
  [SMALL_STATE(18)] = 686,
  [SMALL_STATE(19)] = 726,
  [SMALL_STATE(20)] = 766,
  [SMALL_STATE(21)] = 810,
  [SMALL_STATE(22)] = 852,
  [SMALL_STATE(23)] = 892,
  [SMALL_STATE(24)] = 932,
  [SMALL_STATE(25)] = 983,
  [SMALL_STATE(26)] = 1037,
  [SMALL_STATE(27)] = 1082,
  [SMALL_STATE(28)] = 1131,
  [SMALL_STATE(29)] = 1173,
  [SMALL_STATE(30)] = 1218,
  [SMALL_STATE(31)] = 1255,
  [SMALL_STATE(32)] = 1292,
  [SMALL_STATE(33)] = 1329,
  [SMALL_STATE(34)] = 1371,
  [SMALL_STATE(35)] = 1405,
  [SMALL_STATE(36)] = 1451,
  [SMALL_STATE(37)] = 1485,
  [SMALL_STATE(38)] = 1519,
  [SMALL_STATE(39)] = 1553,
  [SMALL_STATE(40)] = 1587,
  [SMALL_STATE(41)] = 1621,
  [SMALL_STATE(42)] = 1655,
  [SMALL_STATE(43)] = 1689,
  [SMALL_STATE(44)] = 1723,
  [SMALL_STATE(45)] = 1757,
  [SMALL_STATE(46)] = 1799,
  [SMALL_STATE(47)] = 1833,
  [SMALL_STATE(48)] = 1856,
  [SMALL_STATE(49)] = 1897,
  [SMALL_STATE(50)] = 1920,
  [SMALL_STATE(51)] = 1962,
  [SMALL_STATE(52)] = 2004,
  [SMALL_STATE(53)] = 2035,
  [SMALL_STATE(54)] = 2072,
  [SMALL_STATE(55)] = 2108,
  [SMALL_STATE(56)] = 2136,
  [SMALL_STATE(57)] = 2166,
  [SMALL_STATE(58)] = 2194,
  [SMALL_STATE(59)] = 2221,
  [SMALL_STATE(60)] = 2254,
  [SMALL_STATE(61)] = 2287,
  [SMALL_STATE(62)] = 2314,
  [SMALL_STATE(63)] = 2336,
  [SMALL_STATE(64)] = 2353,
  [SMALL_STATE(65)] = 2380,
  [SMALL_STATE(66)] = 2397,
  [SMALL_STATE(67)] = 2416,
  [SMALL_STATE(68)] = 2443,
  [SMALL_STATE(69)] = 2464,
  [SMALL_STATE(70)] = 2480,
  [SMALL_STATE(71)] = 2496,
  [SMALL_STATE(72)] = 2512,
  [SMALL_STATE(73)] = 2528,
  [SMALL_STATE(74)] = 2544,
  [SMALL_STATE(75)] = 2564,
  [SMALL_STATE(76)] = 2580,
  [SMALL_STATE(77)] = 2596,
  [SMALL_STATE(78)] = 2615,
  [SMALL_STATE(79)] = 2634,
  [SMALL_STATE(80)] = 2653,
  [SMALL_STATE(81)] = 2667,
  [SMALL_STATE(82)] = 2683,
  [SMALL_STATE(83)] = 2697,
  [SMALL_STATE(84)] = 2710,
  [SMALL_STATE(85)] = 2731,
  [SMALL_STATE(86)] = 2744,
  [SMALL_STATE(87)] = 2757,
  [SMALL_STATE(88)] = 2770,
  [SMALL_STATE(89)] = 2783,
  [SMALL_STATE(90)] = 2796,
  [SMALL_STATE(91)] = 2811,
  [SMALL_STATE(92)] = 2824,
  [SMALL_STATE(93)] = 2837,
  [SMALL_STATE(94)] = 2850,
  [SMALL_STATE(95)] = 2863,
  [SMALL_STATE(96)] = 2875,
  [SMALL_STATE(97)] = 2893,
  [SMALL_STATE(98)] = 2908,
  [SMALL_STATE(99)] = 2920,
  [SMALL_STATE(100)] = 2932,
  [SMALL_STATE(101)] = 2944,
  [SMALL_STATE(102)] = 2956,
  [SMALL_STATE(103)] = 2972,
  [SMALL_STATE(104)] = 2984,
  [SMALL_STATE(105)] = 2996,
  [SMALL_STATE(106)] = 3009,
  [SMALL_STATE(107)] = 3022,
  [SMALL_STATE(108)] = 3035,
  [SMALL_STATE(109)] = 3048,
  [SMALL_STATE(110)] = 3061,
  [SMALL_STATE(111)] = 3072,
  [SMALL_STATE(112)] = 3085,
  [SMALL_STATE(113)] = 3098,
  [SMALL_STATE(114)] = 3111,
  [SMALL_STATE(115)] = 3124,
  [SMALL_STATE(116)] = 3137,
  [SMALL_STATE(117)] = 3150,
  [SMALL_STATE(118)] = 3163,
  [SMALL_STATE(119)] = 3176,
  [SMALL_STATE(120)] = 3189,
  [SMALL_STATE(121)] = 3202,
  [SMALL_STATE(122)] = 3215,
  [SMALL_STATE(123)] = 3228,
  [SMALL_STATE(124)] = 3241,
  [SMALL_STATE(125)] = 3254,
  [SMALL_STATE(126)] = 3267,
  [SMALL_STATE(127)] = 3275,
  [SMALL_STATE(128)] = 3283,
  [SMALL_STATE(129)] = 3293,
  [SMALL_STATE(130)] = 3301,
  [SMALL_STATE(131)] = 3311,
  [SMALL_STATE(132)] = 3321,
  [SMALL_STATE(133)] = 3331,
  [SMALL_STATE(134)] = 3339,
  [SMALL_STATE(135)] = 3349,
  [SMALL_STATE(136)] = 3359,
  [SMALL_STATE(137)] = 3369,
  [SMALL_STATE(138)] = 3379,
  [SMALL_STATE(139)] = 3387,
  [SMALL_STATE(140)] = 3395,
  [SMALL_STATE(141)] = 3403,
  [SMALL_STATE(142)] = 3413,
  [SMALL_STATE(143)] = 3423,
  [SMALL_STATE(144)] = 3433,
  [SMALL_STATE(145)] = 3443,
  [SMALL_STATE(146)] = 3451,
  [SMALL_STATE(147)] = 3461,
  [SMALL_STATE(148)] = 3471,
  [SMALL_STATE(149)] = 3479,
  [SMALL_STATE(150)] = 3487,
  [SMALL_STATE(151)] = 3497,
  [SMALL_STATE(152)] = 3507,
  [SMALL_STATE(153)] = 3515,
  [SMALL_STATE(154)] = 3522,
  [SMALL_STATE(155)] = 3529,
  [SMALL_STATE(156)] = 3536,
  [SMALL_STATE(157)] = 3543,
  [SMALL_STATE(158)] = 3550,
  [SMALL_STATE(159)] = 3557,
  [SMALL_STATE(160)] = 3564,
  [SMALL_STATE(161)] = 3571,
  [SMALL_STATE(162)] = 3578,
  [SMALL_STATE(163)] = 3585,
  [SMALL_STATE(164)] = 3592,
  [SMALL_STATE(165)] = 3599,
  [SMALL_STATE(166)] = 3606,
  [SMALL_STATE(167)] = 3613,
  [SMALL_STATE(168)] = 3620,
  [SMALL_STATE(169)] = 3627,
  [SMALL_STATE(170)] = 3634,
  [SMALL_STATE(171)] = 3641,
  [SMALL_STATE(172)] = 3648,
  [SMALL_STATE(173)] = 3655,
  [SMALL_STATE(174)] = 3662,
  [SMALL_STATE(175)] = 3669,
  [SMALL_STATE(176)] = 3676,
  [SMALL_STATE(177)] = 3683,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 12),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 12),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 10),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(176),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(84),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(46),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(73),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(75),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(163),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(171),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(47),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(46),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(163),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(47),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 13),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 13),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(36),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 5, .production_id = 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(162),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(30),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(147),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(67),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 11),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 8),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
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
