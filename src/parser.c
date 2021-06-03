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
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 1
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_domain_statement_token1 = 2,
  aux_sym_create_domain_statement_token2 = 3,
  aux_sym_create_type_statement_token1 = 4,
  aux_sym_create_index_statement_token1 = 5,
  aux_sym_create_index_statement_token2 = 6,
  aux_sym_create_index_statement_token3 = 7,
  anon_sym_CONSTRAINT = 8,
  aux_sym_column_default_token1 = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  aux_sym_table_constraint_check_token1 = 13,
  aux_sym_table_constraint_foreign_key_token1 = 14,
  aux_sym_table_constraint_unique_token1 = 15,
  aux_sym_table_constraint_primary_key_token1 = 16,
  aux_sym_create_table_statement_token1 = 17,
  aux_sym_using_clause_token1 = 18,
  aux_sym_select_statement_token1 = 19,
  aux_sym_in_expression_token1 = 20,
  aux_sym_in_expression_token2 = 21,
  aux_sym_references_constraint_token1 = 22,
  aux_sym_on_update_action_token1 = 23,
  aux_sym_on_delete_action_token1 = 24,
  aux_sym__constraint_action_token1 = 25,
  aux_sym__constraint_action_token2 = 26,
  aux_sym__constraint_action_token3 = 27,
  aux_sym_where_clause_token1 = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_LT_GT = 31,
  anon_sym_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_GT_EQ = 34,
  aux_sym_is_expression_token1 = 35,
  aux_sym_is_expression_token2 = 36,
  aux_sym_distinct_from_token1 = 37,
  aux_sym_boolean_expression_token1 = 38,
  aux_sym_boolean_expression_token2 = 39,
  sym_NULL = 40,
  sym_TRUE = 41,
  sym_FALSE = 42,
  sym_number = 43,
  sym_identifier = 44,
  anon_sym_SQUOTE = 45,
  aux_sym_string_token1 = 46,
  anon_sym_DASH_GT_GT = 47,
  aux_sym_ordered_expression_token1 = 48,
  aux_sym_ordered_expression_token2 = 49,
  anon_sym_LBRACK = 50,
  anon_sym_RBRACK = 51,
  anon_sym_COLON_COLON = 52,
  sym_comment = 53,
  anon_sym_TILDE = 54,
  anon_sym_PLUS = 55,
  sym_source_file = 56,
  sym__statement = 57,
  sym_create_domain_statement = 58,
  sym_create_type_statement = 59,
  sym_create_index_statement = 60,
  sym_create_table_column_parameter = 61,
  sym_named_constraint = 62,
  sym_column_default = 63,
  sym_create_table_parameters = 64,
  sym__table_constraint = 65,
  sym_table_constraint_check = 66,
  sym_table_constraint_foreign_key = 67,
  sym_table_constraint_unique = 68,
  sym_table_constraint_primary_key = 69,
  sym_primary_key_constraint = 70,
  sym_create_table_statement = 71,
  sym_using_clause = 72,
  sym_index_table_parameters = 73,
  sym_select_statement = 74,
  sym_in_expression = 75,
  sym_tuple = 76,
  sym_select_clause = 77,
  sym_references_constraint = 78,
  sym_on_update_action = 79,
  sym_on_delete_action = 80,
  sym__constraint_action = 81,
  sym_unique_constraint = 82,
  sym_null_constraint = 83,
  sym_check_constraint = 84,
  sym_parameter = 85,
  sym_parameters = 86,
  sym_function_call = 87,
  sym_where_clause = 88,
  sym_comparison_operator = 89,
  sym__parenthesized_expression = 90,
  sym_is_expression = 91,
  sym_distinct_from = 92,
  sym_boolean_expression = 93,
  sym_string = 94,
  sym_field_access = 95,
  sym_ordered_expression = 96,
  sym__type_alias = 97,
  sym_array_type = 98,
  sym__type = 99,
  sym_type_cast = 100,
  sym_binary_expression = 101,
  sym__expression = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym_create_domain_statement_repeat1 = 104,
  aux_sym_create_table_column_parameter_repeat1 = 105,
  aux_sym_create_table_parameters_repeat1 = 106,
  aux_sym_table_constraint_foreign_key_repeat1 = 107,
  aux_sym_index_table_parameters_repeat1 = 108,
  aux_sym_tuple_repeat1 = 109,
  aux_sym_parameters_repeat1 = 110,
  alias_sym_type = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_domain_statement_token1] = "create_domain_statement_token1",
  [aux_sym_create_domain_statement_token2] = "create_domain_statement_token2",
  [aux_sym_create_type_statement_token1] = "create_type_statement_token1",
  [aux_sym_create_index_statement_token1] = "create_index_statement_token1",
  [aux_sym_create_index_statement_token2] = "create_index_statement_token2",
  [aux_sym_create_index_statement_token3] = "create_index_statement_token3",
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
  [aux_sym_create_index_statement_token3] = aux_sym_create_index_statement_token3,
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
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 1},
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(190);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '+') ADVANCE(312);
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(191);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == 'W') ADVANCE(93);
      if (lookahead == '[') ADVANCE(306);
      if (lookahead == '\\') SKIP(183)
      if (lookahead == ']') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == '~') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(16)
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
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(246);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(126);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'F') ADVANCE(276);
      if (lookahead == 'P') ADVANCE(278);
      if (lookahead == 'U') ADVANCE(275);
      if (lookahead == '\\') SKIP(6)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(170);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'n') ADVANCE(179);
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
      if (lookahead == ':') ADVANCE(308);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(303);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(70);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(109);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(148);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'Y') ADVANCE(141);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(171);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(166);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(145);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(168);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(114);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(103);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(305);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(304);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(159);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(163);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(161);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(234);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'U') ADVANCE(140);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(238);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(223);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(207);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(221);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(219);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(218);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(177);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'F') ADVANCE(33);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'S') ADVANCE(169);
      END_STATE();
    case 89:
      if (lookahead == 'G') ADVANCE(211);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(128);
      END_STATE();
    case 91:
      if (lookahead == 'H') ADVANCE(70);
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 92:
      if (lookahead == 'H') ADVANCE(70);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'H') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 103:
      if (lookahead == 'K') ADVANCE(204);
      END_STATE();
    case 104:
      if (lookahead == 'K') ADVANCE(71);
      END_STATE();
    case 105:
      if (lookahead == 'K') ADVANCE(73);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(236);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(222);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(156);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 113:
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(233);
      END_STATE();
    case 117:
      if (lookahead == 'M') ADVANCE(35);
      END_STATE();
    case 118:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == 'R') ADVANCE(235);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(192);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(155);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(174);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(235);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(162);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 137:
      if (lookahead == 'O') ADVANCE(116);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 140:
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 141:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 142:
      if (lookahead == 'Q') ADVANCE(173);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(172);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(178);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 148:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 152:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 153:
      if (lookahead == 'S') ADVANCE(165);
      END_STATE();
    case 154:
      if (lookahead == 'S') ADVANCE(217);
      END_STATE();
    case 155:
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(214);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(214);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(212);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(200);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(199);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 170:
      if (lookahead == 'U') ADVANCE(108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 171:
      if (lookahead == 'U') ADVANCE(111);
      END_STATE();
    case 172:
      if (lookahead == 'U') ADVANCE(59);
      END_STATE();
    case 173:
      if (lookahead == 'U') ADVANCE(63);
      END_STATE();
    case 174:
      if (lookahead == 'U') ADVANCE(110);
      END_STATE();
    case 175:
      if (lookahead == 'X') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == 'Y') ADVANCE(206);
      END_STATE();
    case 177:
      if (lookahead == 'Y') ADVANCE(209);
      END_STATE();
    case 178:
      if (lookahead == 'Y') ADVANCE(15);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 182:
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 183:
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(182)
      END_STATE();
    case 184:
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(189)
      END_STATE();
    case 185:
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(189)
      if (lookahead == '\r') SKIP(184)
      END_STATE();
    case 186:
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(188)
      END_STATE();
    case 187:
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(188)
      if (lookahead == '\r') SKIP(186)
      END_STATE();
    case 188:
      if (eof) ADVANCE(190);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(281);
      if (lookahead == 'F') ADVANCE(246);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == 'S') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead == 'W') ADVANCE(263);
      if (lookahead == '\\') SKIP(187)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(188)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 189:
      if (eof) ADVANCE(190);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == '+') ADVANCE(312);
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(191);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == 'A') ADVANCE(120);
      if (lookahead == 'C') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(125);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(126);
      if (lookahead == 'W') ADVANCE(93);
      if (lookahead == '[') ADVANCE(306);
      if (lookahead == '\\') SKIP(185)
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == '~') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(189)
      END_STATE();
    case 190:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '>') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_is_expression_token2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_NULL);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_TRUE);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_FALSE);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'C') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'C') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'G') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'K') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'M') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'N') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'N') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'O') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'Q') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'R') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'R') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'R') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'R') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'R') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'R') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'S') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'U') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'U') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'U') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'Y') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead == '\r') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(302);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(302);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 189},
  [3] = {.lex_state = 189},
  [4] = {.lex_state = 189},
  [5] = {.lex_state = 189},
  [6] = {.lex_state = 189},
  [7] = {.lex_state = 189},
  [8] = {.lex_state = 189},
  [9] = {.lex_state = 189},
  [10] = {.lex_state = 189},
  [11] = {.lex_state = 189},
  [12] = {.lex_state = 189},
  [13] = {.lex_state = 189},
  [14] = {.lex_state = 189},
  [15] = {.lex_state = 189},
  [16] = {.lex_state = 189},
  [17] = {.lex_state = 189},
  [18] = {.lex_state = 189},
  [19] = {.lex_state = 189},
  [20] = {.lex_state = 189},
  [21] = {.lex_state = 189},
  [22] = {.lex_state = 189},
  [23] = {.lex_state = 189},
  [24] = {.lex_state = 189},
  [25] = {.lex_state = 188},
  [26] = {.lex_state = 189},
  [27] = {.lex_state = 189},
  [28] = {.lex_state = 189},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 189},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 189},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 189},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 189},
  [48] = {.lex_state = 189},
  [49] = {.lex_state = 189},
  [50] = {.lex_state = 189},
  [51] = {.lex_state = 189},
  [52] = {.lex_state = 189},
  [53] = {.lex_state = 189},
  [54] = {.lex_state = 189},
  [55] = {.lex_state = 189},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 189},
  [58] = {.lex_state = 189},
  [59] = {.lex_state = 189},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 189},
  [66] = {.lex_state = 189},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 189},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 189},
  [72] = {.lex_state = 189},
  [73] = {.lex_state = 189},
  [74] = {.lex_state = 189},
  [75] = {.lex_state = 189},
  [76] = {.lex_state = 189},
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
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
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
  [129] = {.lex_state = 18},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 189},
  [135] = {.lex_state = 189},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 189},
  [138] = {.lex_state = 189},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 189},
  [152] = {.lex_state = 189},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 17},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 17},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 300},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 17},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 17},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 189},
  [176] = {.lex_state = 17},
  [177] = {.lex_state = 17},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 17},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 17},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 17},
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
    [aux_sym_create_index_statement_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(180),
    [sym__statement] = STATE(61),
    [sym_create_domain_statement] = STATE(92),
    [sym_create_type_statement] = STATE(92),
    [sym_create_index_statement] = STATE(92),
    [sym_create_table_statement] = STATE(92),
    [sym_select_statement] = STATE(92),
    [aux_sym_source_file_repeat1] = STATE(61),
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [49] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [92] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(63), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(79), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [588] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(83), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(81), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [722] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(105), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(103), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [936] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(121), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [989] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      aux_sym_where_clause_token1,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym_select_clause,
    STATE(87), 1,
      sym_where_clause,
    ACTIONS(127), 2,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(133), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
  [1043] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(141), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [1090] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(145), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [1141] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(151), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [1185] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(149), 1,
      sym_ordered_expression,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(153), 4,
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
  [1222] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(157), 1,
      aux_sym_column_default_token1,
    ACTIONS(161), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(163), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(165), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(167), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(171), 1,
      sym_NULL,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(43), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [1267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(175), 4,
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
  [1304] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(131), 1,
      sym_ordered_expression,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(177), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(40), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1341] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(182), 1,
      aux_sym_column_default_token1,
    ACTIONS(187), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(190), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(193), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(196), 1,
      aux_sym_in_expression_token1,
    ACTIONS(199), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(202), 1,
      sym_NULL,
    ACTIONS(185), 2,
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
  [1383] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(205), 4,
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
  [1417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(207), 4,
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
  [1451] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(209), 4,
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
  [1485] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(211), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(57), 8,
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
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(213), 4,
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
  [1553] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(215), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(52), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1587] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(221), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1633] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(223), 4,
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
  [1667] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(225), 4,
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
  [1701] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(157), 1,
      aux_sym_column_default_token1,
    ACTIONS(161), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(163), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(165), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(167), 1,
      aux_sym_in_expression_token1,
    ACTIONS(169), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(171), 1,
      sym_NULL,
    ACTIONS(227), 2,
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
  [1743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(229), 4,
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
  [1777] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(231), 4,
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
  [1811] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(3), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(233), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(16), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(235), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [1870] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(221), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(241), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
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
  [1936] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [1978] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2020] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2057] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(257), 1,
      aux_sym_on_delete_action_token1,
    STATE(151), 1,
      sym_on_delete_action,
    STATE(152), 1,
      sym_on_update_action,
    ACTIONS(251), 10,
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
  [2088] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(167), 1,
      aux_sym_in_expression_token1,
    ACTIONS(171), 1,
      sym_NULL,
    ACTIONS(261), 1,
      aux_sym_create_index_statement_token1,
    STATE(58), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(259), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2120] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(257), 1,
      aux_sym_on_delete_action_token1,
    STATE(134), 1,
      sym_on_delete_action,
    STATE(135), 1,
      sym_on_update_action,
    ACTIONS(263), 10,
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
  [2148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(257), 1,
      aux_sym_on_delete_action_token1,
    STATE(137), 1,
      sym_on_delete_action,
    STATE(138), 1,
      sym_on_update_action,
    ACTIONS(265), 10,
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
  [2176] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(67), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(85), 1,
      aux_sym_in_expression_token1,
    ACTIONS(87), 1,
      aux_sym_in_expression_token2,
    ACTIONS(93), 1,
      aux_sym_is_expression_token1,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(91), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(167), 1,
      aux_sym_in_expression_token1,
    ACTIONS(171), 1,
      sym_NULL,
    ACTIONS(271), 1,
      aux_sym_create_index_statement_token1,
    STATE(59), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2241] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(277), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(280), 1,
      aux_sym_in_expression_token1,
    ACTIONS(283), 1,
      sym_NULL,
    STATE(59), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2270] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(291), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(294), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(297), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(300), 1,
      aux_sym_select_statement_token1,
    STATE(60), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(92), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2303] = 9,
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
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(60), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(92), 5,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(305), 10,
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
  [2358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 11,
      aux_sym_create_index_statement_token2,
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
  [2375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(139), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      anon_sym_RPAREN,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(305), 10,
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
  [2417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 11,
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
  [2434] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(316), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(318), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(320), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(119), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [2461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 11,
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
  [2478] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(316), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(318), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(320), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(144), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [2505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      aux_sym_create_index_statement_token1,
    STATE(64), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(326), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 10,
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
  [2543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 10,
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
  [2559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 10,
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
  [2575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 10,
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
  [2591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 10,
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
  [2607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 10,
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
  [2623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(344), 1,
      aux_sym_where_clause_token1,
    STATE(90), 1,
      sym_where_clause,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_where_clause_token1,
    ACTIONS(348), 1,
      aux_sym_create_index_statement_token1,
    STATE(95), 1,
      sym_where_clause,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_where_clause_token1,
    ACTIONS(352), 1,
      aux_sym_create_index_statement_token1,
    STATE(97), 1,
      sym_where_clause,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2686] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_where_clause_token1,
    ACTIONS(356), 1,
      aux_sym_create_index_statement_token1,
    STATE(91), 1,
      sym_where_clause,
    ACTIONS(354), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_where_clause_token1,
    ACTIONS(360), 1,
      aux_sym_create_index_statement_token1,
    STATE(86), 1,
      sym_where_clause,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(362), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_create_domain_statement_token2,
    ACTIONS(370), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(366), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(376), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(380), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(384), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(354), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(388), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(398), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(402), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(406), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(410), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(414), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2975] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(72), 1,
      sym_type_cast,
    STATE(65), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3010] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_is_expression_token2,
    ACTIONS(426), 1,
      aux_sym_distinct_from_token1,
    STATE(20), 1,
      sym_distinct_from,
    ACTIONS(428), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [3028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_distinct_from_token1,
    STATE(18), 1,
      sym_distinct_from,
    ACTIONS(430), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [3043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym__constraint_action,
    ACTIONS(432), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(30), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      sym__constraint_action,
    ACTIONS(436), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [3079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(4), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      aux_sym_using_clause_token1,
    STATE(81), 1,
      sym_index_table_parameters,
    STATE(136), 1,
      sym_using_clause,
  [3107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      aux_sym_using_clause_token1,
    STATE(77), 1,
      sym_index_table_parameters,
    STATE(153), 1,
      sym_using_clause,
  [3123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(54), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(117), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_index_table_parameters_repeat1,
  [3160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_index_table_parameters_repeat1,
  [3173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_parameters_repeat1,
  [3186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_parameters_repeat1,
  [3199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_create_table_parameters_repeat1,
  [3275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_tuple_repeat1,
  [3288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_create_table_parameters_repeat1,
  [3327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_create_table_parameters_repeat1,
  [3340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_tuple_repeat1,
  [3379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(493), 1,
      aux_sym_create_index_statement_token2,
    STATE(172), 1,
      sym_unique_constraint,
  [3405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_parameters_repeat1,
  [3418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_index_table_parameters_repeat1,
  [3431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_on_update_action_token1,
    STATE(71), 1,
      sym_on_update_action,
  [3457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_on_delete_action_token1,
    STATE(71), 1,
      sym_on_delete_action,
  [3467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_index_table_parameters,
  [3477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_on_update_action_token1,
    STATE(73), 1,
      sym_on_update_action,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_on_delete_action_token1,
    STATE(73), 1,
      sym_on_delete_action,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_references_constraint_token1,
    STATE(132), 1,
      sym_references_constraint,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_tuple,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(112), 1,
      sym_parameter,
  [3559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_string,
  [3569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_tuple,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_create_table_parameters,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_parameters,
  [3607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_on_update_action_token1,
    STATE(76), 1,
      sym_on_update_action,
  [3617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_on_delete_action_token1,
    STATE(76), 1,
      sym_on_delete_action,
  [3627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_index_table_parameters,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_references_constraint_token1,
    STATE(140), 1,
      sym_references_constraint,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(133), 1,
      sym_parameter,
  [3681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
  [3696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_identifier,
  [3703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
  [3710] = 2,
    ACTIONS(528), 1,
      aux_sym_string_token1,
    ACTIONS(530), 1,
      sym_comment,
  [3717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_create_index_statement_token3,
  [3724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_identifier,
  [3731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
  [3738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
  [3745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_identifier,
  [3752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_identifier,
  [3759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
  [3766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      aux_sym_create_index_statement_token3,
  [3773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_create_index_statement_token2,
  [3780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_identifier,
  [3787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_NULL,
  [3794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      aux_sym_in_expression_token2,
  [3801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
  [3808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_identifier,
  [3815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      aux_sym_create_domain_statement_token2,
  [3822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_identifier,
  [3829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
  [3836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_identifier,
  [3843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_identifier,
  [3850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_identifier,
  [3857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_identifier,
  [3864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_identifier,
  [3871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
  [3878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
  [3885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 381,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 466,
  [SMALL_STATE(14)] = 506,
  [SMALL_STATE(15)] = 546,
  [SMALL_STATE(16)] = 588,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 682,
  [SMALL_STATE(19)] = 722,
  [SMALL_STATE(20)] = 776,
  [SMALL_STATE(21)] = 816,
  [SMALL_STATE(22)] = 856,
  [SMALL_STATE(23)] = 896,
  [SMALL_STATE(24)] = 936,
  [SMALL_STATE(25)] = 989,
  [SMALL_STATE(26)] = 1043,
  [SMALL_STATE(27)] = 1090,
  [SMALL_STATE(28)] = 1141,
  [SMALL_STATE(29)] = 1185,
  [SMALL_STATE(30)] = 1222,
  [SMALL_STATE(31)] = 1267,
  [SMALL_STATE(32)] = 1304,
  [SMALL_STATE(33)] = 1341,
  [SMALL_STATE(34)] = 1383,
  [SMALL_STATE(35)] = 1417,
  [SMALL_STATE(36)] = 1451,
  [SMALL_STATE(37)] = 1485,
  [SMALL_STATE(38)] = 1519,
  [SMALL_STATE(39)] = 1553,
  [SMALL_STATE(40)] = 1587,
  [SMALL_STATE(41)] = 1633,
  [SMALL_STATE(42)] = 1667,
  [SMALL_STATE(43)] = 1701,
  [SMALL_STATE(44)] = 1743,
  [SMALL_STATE(45)] = 1777,
  [SMALL_STATE(46)] = 1811,
  [SMALL_STATE(47)] = 1845,
  [SMALL_STATE(48)] = 1870,
  [SMALL_STATE(49)] = 1911,
  [SMALL_STATE(50)] = 1936,
  [SMALL_STATE(51)] = 1978,
  [SMALL_STATE(52)] = 2020,
  [SMALL_STATE(53)] = 2057,
  [SMALL_STATE(54)] = 2088,
  [SMALL_STATE(55)] = 2120,
  [SMALL_STATE(56)] = 2148,
  [SMALL_STATE(57)] = 2176,
  [SMALL_STATE(58)] = 2212,
  [SMALL_STATE(59)] = 2241,
  [SMALL_STATE(60)] = 2270,
  [SMALL_STATE(61)] = 2303,
  [SMALL_STATE(62)] = 2336,
  [SMALL_STATE(63)] = 2358,
  [SMALL_STATE(64)] = 2375,
  [SMALL_STATE(65)] = 2398,
  [SMALL_STATE(66)] = 2417,
  [SMALL_STATE(67)] = 2434,
  [SMALL_STATE(68)] = 2461,
  [SMALL_STATE(69)] = 2478,
  [SMALL_STATE(70)] = 2505,
  [SMALL_STATE(71)] = 2527,
  [SMALL_STATE(72)] = 2543,
  [SMALL_STATE(73)] = 2559,
  [SMALL_STATE(74)] = 2575,
  [SMALL_STATE(75)] = 2591,
  [SMALL_STATE(76)] = 2607,
  [SMALL_STATE(77)] = 2623,
  [SMALL_STATE(78)] = 2644,
  [SMALL_STATE(79)] = 2665,
  [SMALL_STATE(80)] = 2686,
  [SMALL_STATE(81)] = 2707,
  [SMALL_STATE(82)] = 2728,
  [SMALL_STATE(83)] = 2744,
  [SMALL_STATE(84)] = 2762,
  [SMALL_STATE(85)] = 2778,
  [SMALL_STATE(86)] = 2793,
  [SMALL_STATE(87)] = 2808,
  [SMALL_STATE(88)] = 2823,
  [SMALL_STATE(89)] = 2838,
  [SMALL_STATE(90)] = 2853,
  [SMALL_STATE(91)] = 2868,
  [SMALL_STATE(92)] = 2883,
  [SMALL_STATE(93)] = 2900,
  [SMALL_STATE(94)] = 2915,
  [SMALL_STATE(95)] = 2930,
  [SMALL_STATE(96)] = 2945,
  [SMALL_STATE(97)] = 2960,
  [SMALL_STATE(98)] = 2975,
  [SMALL_STATE(99)] = 2996,
  [SMALL_STATE(100)] = 3010,
  [SMALL_STATE(101)] = 3028,
  [SMALL_STATE(102)] = 3043,
  [SMALL_STATE(103)] = 3055,
  [SMALL_STATE(104)] = 3067,
  [SMALL_STATE(105)] = 3079,
  [SMALL_STATE(106)] = 3091,
  [SMALL_STATE(107)] = 3107,
  [SMALL_STATE(108)] = 3123,
  [SMALL_STATE(109)] = 3135,
  [SMALL_STATE(110)] = 3147,
  [SMALL_STATE(111)] = 3160,
  [SMALL_STATE(112)] = 3173,
  [SMALL_STATE(113)] = 3186,
  [SMALL_STATE(114)] = 3199,
  [SMALL_STATE(115)] = 3212,
  [SMALL_STATE(116)] = 3225,
  [SMALL_STATE(117)] = 3238,
  [SMALL_STATE(118)] = 3249,
  [SMALL_STATE(119)] = 3262,
  [SMALL_STATE(120)] = 3275,
  [SMALL_STATE(121)] = 3288,
  [SMALL_STATE(122)] = 3301,
  [SMALL_STATE(123)] = 3314,
  [SMALL_STATE(124)] = 3327,
  [SMALL_STATE(125)] = 3340,
  [SMALL_STATE(126)] = 3353,
  [SMALL_STATE(127)] = 3366,
  [SMALL_STATE(128)] = 3379,
  [SMALL_STATE(129)] = 3392,
  [SMALL_STATE(130)] = 3405,
  [SMALL_STATE(131)] = 3418,
  [SMALL_STATE(132)] = 3431,
  [SMALL_STATE(133)] = 3439,
  [SMALL_STATE(134)] = 3447,
  [SMALL_STATE(135)] = 3457,
  [SMALL_STATE(136)] = 3467,
  [SMALL_STATE(137)] = 3477,
  [SMALL_STATE(138)] = 3487,
  [SMALL_STATE(139)] = 3497,
  [SMALL_STATE(140)] = 3507,
  [SMALL_STATE(141)] = 3515,
  [SMALL_STATE(142)] = 3523,
  [SMALL_STATE(143)] = 3533,
  [SMALL_STATE(144)] = 3541,
  [SMALL_STATE(145)] = 3549,
  [SMALL_STATE(146)] = 3559,
  [SMALL_STATE(147)] = 3569,
  [SMALL_STATE(148)] = 3579,
  [SMALL_STATE(149)] = 3589,
  [SMALL_STATE(150)] = 3597,
  [SMALL_STATE(151)] = 3607,
  [SMALL_STATE(152)] = 3617,
  [SMALL_STATE(153)] = 3627,
  [SMALL_STATE(154)] = 3637,
  [SMALL_STATE(155)] = 3645,
  [SMALL_STATE(156)] = 3653,
  [SMALL_STATE(157)] = 3661,
  [SMALL_STATE(158)] = 3671,
  [SMALL_STATE(159)] = 3681,
  [SMALL_STATE(160)] = 3689,
  [SMALL_STATE(161)] = 3696,
  [SMALL_STATE(162)] = 3703,
  [SMALL_STATE(163)] = 3710,
  [SMALL_STATE(164)] = 3717,
  [SMALL_STATE(165)] = 3724,
  [SMALL_STATE(166)] = 3731,
  [SMALL_STATE(167)] = 3738,
  [SMALL_STATE(168)] = 3745,
  [SMALL_STATE(169)] = 3752,
  [SMALL_STATE(170)] = 3759,
  [SMALL_STATE(171)] = 3766,
  [SMALL_STATE(172)] = 3773,
  [SMALL_STATE(173)] = 3780,
  [SMALL_STATE(174)] = 3787,
  [SMALL_STATE(175)] = 3794,
  [SMALL_STATE(176)] = 3801,
  [SMALL_STATE(177)] = 3808,
  [SMALL_STATE(178)] = 3815,
  [SMALL_STATE(179)] = 3822,
  [SMALL_STATE(180)] = 3829,
  [SMALL_STATE(181)] = 3836,
  [SMALL_STATE(182)] = 3843,
  [SMALL_STATE(183)] = 3850,
  [SMALL_STATE(184)] = 3857,
  [SMALL_STATE(185)] = 3864,
  [SMALL_STATE(186)] = 3871,
  [SMALL_STATE(187)] = 3878,
  [SMALL_STATE(188)] = 3885,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 12),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(170),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(98),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(34),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(63),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(74),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(174),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(161),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(49),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(34),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(174),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(49),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(41),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 14),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 14),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 7),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 7),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 11),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 11),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 7),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 7),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 11),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 11),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 7),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 7),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 11),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 11),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(29),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(183),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(69),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(158),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 13),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [564] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 10),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
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
