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
#define STATE_COUNT 230
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 2
#define TOKEN_COUNT 61
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
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  aux_sym_create_domain_statement_token1 = 9,
  aux_sym_create_type_statement_token1 = 10,
  aux_sym_create_index_statement_token1 = 11,
  aux_sym_create_index_statement_token2 = 12,
  aux_sym_create_index_statement_token3 = 13,
  anon_sym_CONSTRAINT = 14,
  aux_sym_column_default_token1 = 15,
  aux_sym_table_constraint_check_token1 = 16,
  aux_sym_table_constraint_foreign_key_token1 = 17,
  aux_sym_table_constraint_unique_token1 = 18,
  aux_sym_table_constraint_primary_key_token1 = 19,
  aux_sym_create_table_statement_token1 = 20,
  aux_sym_using_clause_token1 = 21,
  aux_sym_select_statement_token1 = 22,
  aux_sym_in_expression_token1 = 23,
  aux_sym_in_expression_token2 = 24,
  aux_sym_references_constraint_token1 = 25,
  aux_sym_on_update_action_token1 = 26,
  aux_sym_on_delete_action_token1 = 27,
  aux_sym__constraint_action_token1 = 28,
  aux_sym__constraint_action_token2 = 29,
  aux_sym__constraint_action_token3 = 30,
  aux_sym_where_clause_token1 = 31,
  anon_sym_LT = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_LT_GT = 34,
  anon_sym_EQ = 35,
  anon_sym_GT = 36,
  anon_sym_GT_EQ = 37,
  aux_sym_is_expression_token1 = 38,
  aux_sym_is_expression_token2 = 39,
  aux_sym_distinct_from_token1 = 40,
  aux_sym_boolean_expression_token1 = 41,
  aux_sym_boolean_expression_token2 = 42,
  sym_NULL = 43,
  sym_TRUE = 44,
  sym_FALSE = 45,
  sym_number = 46,
  sym_identifier = 47,
  anon_sym_SQUOTE = 48,
  aux_sym_string_token1 = 49,
  anon_sym_DOLLAR_DOLLAR = 50,
  aux_sym_string_token2 = 51,
  anon_sym_DASH_GT_GT = 52,
  aux_sym_ordered_expression_token1 = 53,
  aux_sym_ordered_expression_token2 = 54,
  anon_sym_LBRACK = 55,
  anon_sym_RBRACK = 56,
  anon_sym_COLON_COLON = 57,
  sym_comment = 58,
  anon_sym_TILDE = 59,
  anon_sym_PLUS = 60,
  sym_source_file = 61,
  sym__statement = 62,
  sym_create_function_statement = 63,
  sym_create_function_parameter = 64,
  sym_create_function_parameters = 65,
  sym__function_body = 66,
  sym_create_domain_statement = 67,
  sym_create_type_statement = 68,
  sym_create_index_statement = 69,
  sym_create_table_column_parameter = 70,
  sym_named_constraint = 71,
  sym_column_default = 72,
  sym_create_table_parameters = 73,
  sym__table_constraint = 74,
  sym_table_constraint_check = 75,
  sym_table_constraint_foreign_key = 76,
  sym_table_constraint_unique = 77,
  sym_table_constraint_primary_key = 78,
  sym_primary_key_constraint = 79,
  sym_create_table_statement = 80,
  sym_using_clause = 81,
  sym_index_table_parameters = 82,
  sym_select_statement = 83,
  sym_in_expression = 84,
  sym_tuple = 85,
  sym_select_clause = 86,
  sym_references_constraint = 87,
  sym_on_update_action = 88,
  sym_on_delete_action = 89,
  sym__constraint_action = 90,
  sym_unique_constraint = 91,
  sym_null_constraint = 92,
  sym_check_constraint = 93,
  sym_parameter = 94,
  sym_parameters = 95,
  sym_function_call = 96,
  sym_where_clause = 97,
  sym_comparison_operator = 98,
  sym__parenthesized_expression = 99,
  sym_is_expression = 100,
  sym_distinct_from = 101,
  sym_boolean_expression = 102,
  sym_string = 103,
  sym_field_access = 104,
  sym_ordered_expression = 105,
  sym__type_alias = 106,
  sym_array_type = 107,
  sym__type = 108,
  sym_type_cast = 109,
  sym_binary_expression = 110,
  sym__expression = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_create_function_parameters_repeat1 = 113,
  aux_sym_create_domain_statement_repeat1 = 114,
  aux_sym_create_table_column_parameter_repeat1 = 115,
  aux_sym_create_table_parameters_repeat1 = 116,
  aux_sym_table_constraint_foreign_key_repeat1 = 117,
  aux_sym_index_table_parameters_repeat1 = 118,
  aux_sym_tuple_repeat1 = 119,
  aux_sym_parameters_repeat1 = 120,
  alias_sym_function_body = 121,
  alias_sym_type = 122,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_function_statement_token1] = "create_function_statement_token1",
  [aux_sym_create_function_statement_token2] = "create_function_statement_token2",
  [aux_sym_create_function_statement_token3] = "create_function_statement_token3",
  [aux_sym_create_function_statement_token4] = "create_function_statement_token4",
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
      if (eof) ADVANCE(216);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '+') ADVANCE(352);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'C') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(138);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') SKIP(206)
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == '~') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 16:
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') SKIP(8)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 17:
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(316);
      if (lookahead == 'T') ADVANCE(309);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 18:
      if (lookahead == '$') ADVANCE(332);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(337);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(350);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(293);
      if (lookahead == 'F') ADVANCE(305);
      if (lookahead == 'P') ADVANCE(307);
      if (lookahead == 'U') ADVANCE(304);
      if (lookahead == '\\') SKIP(6)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'D') ADVANCE(105);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'n') ADVANCE(201);
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
      if (lookahead == ':') ADVANCE(347);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'H') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(163);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'Y') ADVANCE(156);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(191);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(185);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(187);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(124);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(344);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(343);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(177);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(181);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(184);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(263);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'U') ADVANCE(155);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(170);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(197);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(267);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(269);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(227);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(236);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(221);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(248);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(247);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(199);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(186);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(37);
      END_STATE();
    case 92:
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 93:
      if (lookahead == 'F') ADVANCE(162);
      END_STATE();
    case 94:
      if (lookahead == 'F') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(188);
      if (lookahead == 'T') ADVANCE(190);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(240);
      END_STATE();
    case 97:
      if (lookahead == 'G') ADVANCE(192);
      END_STATE();
    case 98:
      if (lookahead == 'G') ADVANCE(140);
      END_STATE();
    case 99:
      if (lookahead == 'G') ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == 'H') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'H') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == 'H') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(157);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(170);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(139);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(149);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(147);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 113:
      if (lookahead == 'K') ADVANCE(233);
      END_STATE();
    case 114:
      if (lookahead == 'K') ADVANCE(78);
      END_STATE();
    case 115:
      if (lookahead == 'K') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(265);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(251);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(178);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(87);
      END_STATE();
    case 126:
      if (lookahead == 'M') ADVANCE(262);
      END_STATE();
    case 127:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 128:
      if (lookahead == 'M') ADVANCE(42);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(220);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(245);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(230);
      if (lookahead == 'R') ADVANCE(264);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(225);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(218);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(106);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(264);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(180);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(176);
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 155:
      if (lookahead == 'P') ADVANCE(58);
      END_STATE();
    case 156:
      if (lookahead == 'P') ADVANCE(72);
      END_STATE();
    case 157:
      if (lookahead == 'Q') ADVANCE(195);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(264);
      END_STATE();
    case 159:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(193);
      END_STATE();
    case 161:
      if (lookahead == 'R') ADVANCE(200);
      END_STATE();
    case 162:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 169:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 170:
      if (lookahead == 'S') ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'S') ADVANCE(219);
      END_STATE();
    case 172:
      if (lookahead == 'S') ADVANCE(246);
      END_STATE();
    case 173:
      if (lookahead == 'S') ADVANCE(183);
      END_STATE();
    case 174:
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(243);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(243);
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(241);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(232);
      END_STATE();
    case 179:
      if (lookahead == 'T') ADVANCE(249);
      END_STATE();
    case 180:
      if (lookahead == 'T') ADVANCE(231);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(164);
      END_STATE();
    case 189:
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 190:
      if (lookahead == 'U') ADVANCE(168);
      END_STATE();
    case 191:
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 192:
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 193:
      if (lookahead == 'U') ADVANCE(65);
      END_STATE();
    case 194:
      if (lookahead == 'U') ADVANCE(146);
      END_STATE();
    case 195:
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 196:
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 197:
      if (lookahead == 'X') ADVANCE(229);
      END_STATE();
    case 198:
      if (lookahead == 'Y') ADVANCE(235);
      END_STATE();
    case 199:
      if (lookahead == 'Y') ADVANCE(238);
      END_STATE();
    case 200:
      if (lookahead == 'Y') ADVANCE(15);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 202:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(339);
      END_STATE();
    case 205:
      if (eof) ADVANCE(216);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 206:
      if (eof) ADVANCE(216);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(205)
      END_STATE();
    case 207:
      if (eof) ADVANCE(216);
      if (lookahead == '\n') SKIP(214)
      END_STATE();
    case 208:
      if (eof) ADVANCE(216);
      if (lookahead == '\n') SKIP(214)
      if (lookahead == '\r') SKIP(207)
      END_STATE();
    case 209:
      if (eof) ADVANCE(216);
      if (lookahead == '\n') SKIP(215)
      END_STATE();
    case 210:
      if (eof) ADVANCE(216);
      if (lookahead == '\n') SKIP(215)
      if (lookahead == '\r') SKIP(209)
      END_STATE();
    case 211:
      if (eof) ADVANCE(216);
      if (lookahead == '\n') SKIP(213)
      END_STATE();
    case 212:
      if (eof) ADVANCE(216);
      if (lookahead == '\n') SKIP(213)
      if (lookahead == '\r') SKIP(211)
      END_STATE();
    case 213:
      if (eof) ADVANCE(216);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'F') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(288);
      if (lookahead == 'T') ADVANCE(309);
      if (lookahead == 'W') ADVANCE(292);
      if (lookahead == '\\') SKIP(212)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(213)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 214:
      if (eof) ADVANCE(216);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '+') ADVANCE(352);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') SKIP(208)
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == '~') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(214)
      END_STATE();
    case 215:
      if (eof) ADVANCE(216);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '+') ADVANCE(352);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') SKIP(210)
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == '~') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(215)
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token4);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token3);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_on_update_action_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '>') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_is_expression_token2);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_NULL);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_NULL);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_TRUE);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_FALSE);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'A') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'A') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'A') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'C') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'C') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'E') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'G') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'H') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'H') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'I') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'I') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'I') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'K') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'L') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'L') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'L') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'L') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'M') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'N') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'N') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'O') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'Q') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'R') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'R') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'R') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'R') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'R') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'R') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'S') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'T') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'T') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'U') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'U') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'U') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'Y') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(331);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(331);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(350);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '/') ADVANCE(331);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '$') ADVANCE(349);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '*') ADVANCE(341);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(337);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 214},
  [4] = {.lex_state = 214},
  [5] = {.lex_state = 214},
  [6] = {.lex_state = 214},
  [7] = {.lex_state = 214},
  [8] = {.lex_state = 214},
  [9] = {.lex_state = 214},
  [10] = {.lex_state = 214},
  [11] = {.lex_state = 214},
  [12] = {.lex_state = 214},
  [13] = {.lex_state = 215},
  [14] = {.lex_state = 214},
  [15] = {.lex_state = 214},
  [16] = {.lex_state = 214},
  [17] = {.lex_state = 215},
  [18] = {.lex_state = 214},
  [19] = {.lex_state = 214},
  [20] = {.lex_state = 214},
  [21] = {.lex_state = 214},
  [22] = {.lex_state = 214},
  [23] = {.lex_state = 214},
  [24] = {.lex_state = 213},
  [25] = {.lex_state = 214},
  [26] = {.lex_state = 214},
  [27] = {.lex_state = 214},
  [28] = {.lex_state = 214},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 214},
  [33] = {.lex_state = 214},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 214},
  [51] = {.lex_state = 214},
  [52] = {.lex_state = 214},
  [53] = {.lex_state = 214},
  [54] = {.lex_state = 214},
  [55] = {.lex_state = 214},
  [56] = {.lex_state = 214},
  [57] = {.lex_state = 214},
  [58] = {.lex_state = 214},
  [59] = {.lex_state = 214},
  [60] = {.lex_state = 214},
  [61] = {.lex_state = 214},
  [62] = {.lex_state = 214},
  [63] = {.lex_state = 214},
  [64] = {.lex_state = 214},
  [65] = {.lex_state = 214},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 214},
  [68] = {.lex_state = 214},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 214},
  [71] = {.lex_state = 214},
  [72] = {.lex_state = 214},
  [73] = {.lex_state = 214},
  [74] = {.lex_state = 214},
  [75] = {.lex_state = 214},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 214},
  [78] = {.lex_state = 214},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 214},
  [84] = {.lex_state = 214},
  [85] = {.lex_state = 214},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 214},
  [90] = {.lex_state = 214},
  [91] = {.lex_state = 214},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 214},
  [94] = {.lex_state = 214},
  [95] = {.lex_state = 0},
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
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 16},
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
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
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
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 214},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 214},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 214},
  [174] = {.lex_state = 214},
  [175] = {.lex_state = 214},
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
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 214},
  [191] = {.lex_state = 329},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 16},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 16},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 214},
  [224] = {.lex_state = 16},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_function_statement_token1] = ACTIONS(1),
    [aux_sym_create_function_statement_token2] = ACTIONS(1),
    [aux_sym_create_function_statement_token3] = ACTIONS(1),
    [aux_sym_create_function_statement_token4] = ACTIONS(1),
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
    [sym_source_file] = STATE(218),
    [sym__statement] = STATE(66),
    [sym_create_function_statement] = STATE(103),
    [sym_create_domain_statement] = STATE(103),
    [sym_create_type_statement] = STATE(103),
    [sym_create_index_statement] = STATE(103),
    [sym_create_table_statement] = STATE(103),
    [sym_select_statement] = STATE(103),
    [aux_sym_source_file_repeat1] = STATE(66),
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
    ACTIONS(19), 32,
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
  [43] = 3,
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
  [85] = 3,
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
  [127] = 3,
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
  [169] = 3,
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
  [211] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 28,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 30,
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
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 30,
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
  [382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 30,
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
  [423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 30,
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
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_function_statement_token3,
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
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 30,
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
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 30,
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
  [587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 30,
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
  [628] = 3,
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
      aux_sym_create_function_statement_token3,
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
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 28,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 28,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [753] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 19,
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
  [806] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(113), 19,
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
  [859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(59), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 27,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [900] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 3,
      aux_sym_create_index_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 26,
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
      anon_sym_TILDE,
      anon_sym_PLUS,
  [943] = 13,
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
    STATE(86), 1,
      sym_select_clause,
    STATE(106), 1,
      sym_where_clause,
    ACTIONS(125), 2,
      aux_sym_create_index_statement_token1,
      aux_sym_select_statement_token1,
    STATE(18), 3,
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
    STATE(27), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1001] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(139), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
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
  [1055] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(145), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
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
  [1103] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      aux_sym_create_index_statement_token1,
    STATE(79), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
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
  [1155] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(155), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
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
  [1200] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(187), 1,
      sym_ordered_expression,
    STATE(58), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(157), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(59), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1240] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(147), 1,
      sym_ordered_expression,
    STATE(58), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(161), 4,
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
  [1280] = 9,
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
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(165), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(64), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(167), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(173), 1,
      aux_sym_column_default_token1,
    ACTIONS(175), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(177), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(179), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token1,
    ACTIONS(183), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(185), 1,
      sym_NULL,
    ACTIONS(169), 2,
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
  [1399] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(187), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(65), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1436] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(189), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(71), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1473] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(58), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(191), 4,
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
  [1510] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(193), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(25), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1547] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(195), 4,
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
  [1584] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(197), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(70), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1621] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(199), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(10), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1658] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(201), 4,
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
  [1695] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(203), 4,
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
  [1732] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(205), 4,
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
  [1769] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(58), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(207), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(63), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1806] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(209), 4,
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
  [1843] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(58), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(199), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(10), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1880] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(58), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(211), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(62), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1917] = 8,
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
    STATE(18), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(213), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(23), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1954] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(58), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(215), 4,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
    STATE(61), 8,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym__expression,
  [1991] = 11,
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
      sym_NULL,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(50), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(245), 17,
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
  [2087] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      aux_sym_is_expression_token1,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    STATE(141), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(253), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(265), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(255), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2159] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(173), 1,
      aux_sym_column_default_token1,
    ACTIONS(175), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(177), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(179), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token1,
    ACTIONS(183), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(185), 1,
      sym_NULL,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(50), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [2201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(269), 17,
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
  [2253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2281] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(257), 1,
      aux_sym_is_expression_token1,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(265), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(255), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2322] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(257), 1,
      aux_sym_is_expression_token1,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2359] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(257), 1,
      aux_sym_is_expression_token1,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(253), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
    ACTIONS(113), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(261), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_in_expression_token1,
      aux_sym_in_expression_token2,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2452] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2494] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2536] = 10,
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
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(103), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2573] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token1,
    ACTIONS(185), 1,
      sym_NULL,
    ACTIONS(283), 1,
      aux_sym_create_index_statement_token1,
    STATE(75), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2606] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(291), 1,
      aux_sym_on_delete_action_token1,
    STATE(162), 1,
      sym_on_delete_action,
    STATE(190), 1,
      sym_on_update_action,
    ACTIONS(287), 10,
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
  [2637] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(298), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(301), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(304), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(307), 1,
      aux_sym_create_table_statement_token1,
    ACTIONS(310), 1,
      aux_sym_select_statement_token1,
    STATE(69), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(103), 6,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
  [2674] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(105), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2711] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_in_expression_token1,
    ACTIONS(101), 1,
      aux_sym_in_expression_token2,
    ACTIONS(107), 1,
      aux_sym_is_expression_token1,
    ACTIONS(109), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(111), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(105), 4,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [2747] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(291), 1,
      aux_sym_on_delete_action_token1,
    STATE(174), 1,
      sym_on_delete_action,
    STATE(175), 1,
      sym_on_update_action,
    ACTIONS(317), 10,
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
  [2775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(323), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(326), 1,
      aux_sym_in_expression_token1,
    ACTIONS(329), 1,
      sym_NULL,
    STATE(73), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_on_update_action_token1,
    ACTIONS(291), 1,
      aux_sym_on_delete_action_token1,
    STATE(170), 1,
      sym_on_delete_action,
    STATE(173), 1,
      sym_on_update_action,
    ACTIONS(332), 10,
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
  [2833] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(181), 1,
      aux_sym_in_expression_token1,
    ACTIONS(185), 1,
      sym_NULL,
    ACTIONS(336), 1,
      aux_sym_create_index_statement_token1,
    STATE(73), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(334), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [2863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(76), 1,
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
  [2887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(341), 10,
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
  [2909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 11,
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
  [2926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      aux_sym_create_index_statement_token1,
    STATE(76), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(345), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [2949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 11,
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
  [2966] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(353), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(355), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(357), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(150), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [2993] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(353), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(355), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(357), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(176), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [3020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 11,
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
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(341), 10,
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
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 10,
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
  [3072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(369), 1,
      aux_sym_where_clause_token1,
    STATE(113), 1,
      sym_where_clause,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_where_clause_token1,
    ACTIONS(373), 1,
      aux_sym_create_index_statement_token1,
    STATE(99), 1,
      sym_where_clause,
    ACTIONS(371), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3116] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_where_clause_token1,
    ACTIONS(377), 1,
      aux_sym_create_index_statement_token1,
    STATE(108), 1,
      sym_where_clause,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 10,
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
  [3154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 10,
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
  [3170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 10,
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
  [3186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_where_clause_token1,
    ACTIONS(385), 1,
      aux_sym_create_index_statement_token1,
    STATE(110), 1,
      sym_where_clause,
    ACTIONS(383), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 10,
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
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 10,
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
  [3240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_where_clause_token1,
    ACTIONS(393), 1,
      aux_sym_create_index_statement_token1,
    STATE(111), 1,
      sym_where_clause,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [3279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
      aux_sym_where_clause_token1,
  [3296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(407), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(403), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(409), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(413), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(417), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3363] = 3,
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
  [3379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    ACTIONS(429), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(425), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3397] = 3,
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
  [3413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(435), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3445] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(89), 1,
      sym_type_cast,
    STATE(84), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [3469] = 3,
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
  [3485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(441), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(371), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(445), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(453), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(69), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(149), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(459), 6,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_create_domain_statement_token1,
      aux_sym_create_type_statement_token1,
      aux_sym_create_table_statement_token1,
      aux_sym_select_statement_token1,
  [3597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym_is_expression_token2,
    ACTIONS(465), 1,
      aux_sym_distinct_from_token1,
    STATE(11), 1,
      sym_distinct_from,
    ACTIONS(467), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [3615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym_is_expression_token2,
    ACTIONS(471), 1,
      aux_sym_distinct_from_token1,
    STATE(11), 1,
      sym_distinct_from,
    ACTIONS(467), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [3633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(158), 1,
      sym_create_function_parameter,
    STATE(157), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(189), 1,
      sym_create_function_parameter,
    STATE(157), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_distinct_from_token1,
    STATE(8), 1,
      sym_distinct_from,
    ACTIONS(475), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [3678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      aux_sym_distinct_from_token1,
    STATE(8), 1,
      sym_distinct_from,
    ACTIONS(475), 3,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [3693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(196), 1,
      sym_string,
    STATE(209), 1,
      sym__function_body,
  [3709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(67), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(19), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(178), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 1,
      sym__constraint_action,
    ACTIONS(477), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [3757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(51), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(33), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(78), 1,
      sym__constraint_action,
    ACTIONS(481), 3,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
      aux_sym__constraint_action_token3,
  [3793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(142), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [3805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      aux_sym_using_clause_token1,
    STATE(88), 1,
      sym_index_table_parameters,
    STATE(180), 1,
      sym_using_clause,
  [3821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      aux_sym_using_clause_token1,
    STATE(92), 1,
      sym_index_table_parameters,
    STATE(168), 1,
      sym_using_clause,
  [3837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_parameters_repeat1,
  [3850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_parameters_repeat1,
  [3863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_tuple_repeat1,
  [3915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_create_table_parameters_repeat1,
  [3928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [3941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_index_table_parameters_repeat1,
  [3954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_create_table_parameters_repeat1,
  [3978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_tuple_repeat1,
  [3991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_index_table_parameters_repeat1,
  [4017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_index_table_parameters_repeat1,
  [4030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_create_function_parameters_repeat1,
  [4043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_create_table_parameters_repeat1,
  [4067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_create_function_parameters_repeat1,
  [4080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(16), 1,
      sym_string,
  [4132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_parameters_repeat1,
  [4145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_create_function_parameters_repeat1,
  [4169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(553), 1,
      aux_sym_create_index_statement_token2,
    STATE(194), 1,
      sym_unique_constraint,
  [4182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_on_update_action_token1,
    STATE(91), 1,
      sym_on_update_action,
  [4213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_parameters,
  [4223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_tuple,
  [4241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(133), 1,
      sym_parameter,
  [4259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_index_table_parameters,
  [4269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_tuple,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_on_update_action_token1,
    STATE(93), 1,
      sym_on_update_action,
  [4289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_references_constraint_token1,
    STATE(161), 1,
      sym_references_constraint,
  [4299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_create_function_parameters,
  [4309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_on_delete_action_token1,
    STATE(93), 1,
      sym_on_delete_action,
  [4319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_on_update_action_token1,
    STATE(94), 1,
      sym_on_update_action,
  [4329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_on_delete_action_token1,
    STATE(94), 1,
      sym_on_delete_action,
  [4339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 1,
      aux_sym_create_function_statement_token3,
  [4365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_index_table_parameters,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_references_constraint_token1,
    STATE(179), 1,
      sym_references_constraint,
  [4409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_create_table_parameters,
  [4419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(166), 1,
      sym_parameter,
  [4453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_on_delete_action_token1,
    STATE(91), 1,
      sym_on_delete_action,
  [4471] = 2,
    ACTIONS(586), 1,
      aux_sym_string_token1,
    ACTIONS(588), 1,
      sym_comment,
  [4478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_identifier,
  [4485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_identifier,
  [4492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_create_index_statement_token2,
  [4499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      aux_sym_create_function_statement_token2,
  [4506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      aux_sym_create_function_statement_token4,
  [4513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_identifier,
  [4520] = 2,
    ACTIONS(588), 1,
      sym_comment,
    ACTIONS(602), 1,
      aux_sym_string_token2,
  [4527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_identifier,
  [4534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym_identifier,
  [4541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
  [4548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym_identifier,
  [4555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym_NULL,
  [4562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_identifier,
  [4569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_identifier,
  [4576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      aux_sym_create_function_statement_token2,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
  [4590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      aux_sym_create_function_statement_token2,
  [4597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      aux_sym_create_function_statement_token4,
  [4604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_identifier,
  [4611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_identifier,
  [4618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_LPAREN,
  [4625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
  [4632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LPAREN,
  [4639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACK,
  [4646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      aux_sym_create_index_statement_token3,
  [4653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_identifier,
  [4660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
  [4667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
  [4674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_identifier,
  [4681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_identifier,
  [4688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      aux_sym_create_function_statement_token3,
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      aux_sym_in_expression_token2,
  [4702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_identifier,
  [4709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_DOLLAR_DOLLAR,
  [4716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_SQUOTE,
  [4723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
  [4730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      aux_sym_create_index_statement_token3,
  [4737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 341,
  [SMALL_STATE(11)] = 382,
  [SMALL_STATE(12)] = 423,
  [SMALL_STATE(13)] = 464,
  [SMALL_STATE(14)] = 505,
  [SMALL_STATE(15)] = 546,
  [SMALL_STATE(16)] = 587,
  [SMALL_STATE(17)] = 628,
  [SMALL_STATE(18)] = 669,
  [SMALL_STATE(19)] = 711,
  [SMALL_STATE(20)] = 753,
  [SMALL_STATE(21)] = 806,
  [SMALL_STATE(22)] = 859,
  [SMALL_STATE(23)] = 900,
  [SMALL_STATE(24)] = 943,
  [SMALL_STATE(25)] = 1001,
  [SMALL_STATE(26)] = 1055,
  [SMALL_STATE(27)] = 1103,
  [SMALL_STATE(28)] = 1155,
  [SMALL_STATE(29)] = 1200,
  [SMALL_STATE(30)] = 1240,
  [SMALL_STATE(31)] = 1280,
  [SMALL_STATE(32)] = 1320,
  [SMALL_STATE(33)] = 1354,
  [SMALL_STATE(34)] = 1399,
  [SMALL_STATE(35)] = 1436,
  [SMALL_STATE(36)] = 1473,
  [SMALL_STATE(37)] = 1510,
  [SMALL_STATE(38)] = 1547,
  [SMALL_STATE(39)] = 1584,
  [SMALL_STATE(40)] = 1621,
  [SMALL_STATE(41)] = 1658,
  [SMALL_STATE(42)] = 1695,
  [SMALL_STATE(43)] = 1732,
  [SMALL_STATE(44)] = 1769,
  [SMALL_STATE(45)] = 1806,
  [SMALL_STATE(46)] = 1843,
  [SMALL_STATE(47)] = 1880,
  [SMALL_STATE(48)] = 1917,
  [SMALL_STATE(49)] = 1954,
  [SMALL_STATE(50)] = 1991,
  [SMALL_STATE(51)] = 2033,
  [SMALL_STATE(52)] = 2061,
  [SMALL_STATE(53)] = 2087,
  [SMALL_STATE(54)] = 2133,
  [SMALL_STATE(55)] = 2159,
  [SMALL_STATE(56)] = 2201,
  [SMALL_STATE(57)] = 2227,
  [SMALL_STATE(58)] = 2253,
  [SMALL_STATE(59)] = 2281,
  [SMALL_STATE(60)] = 2322,
  [SMALL_STATE(61)] = 2359,
  [SMALL_STATE(62)] = 2396,
  [SMALL_STATE(63)] = 2423,
  [SMALL_STATE(64)] = 2452,
  [SMALL_STATE(65)] = 2494,
  [SMALL_STATE(66)] = 2536,
  [SMALL_STATE(67)] = 2573,
  [SMALL_STATE(68)] = 2606,
  [SMALL_STATE(69)] = 2637,
  [SMALL_STATE(70)] = 2674,
  [SMALL_STATE(71)] = 2711,
  [SMALL_STATE(72)] = 2747,
  [SMALL_STATE(73)] = 2775,
  [SMALL_STATE(74)] = 2805,
  [SMALL_STATE(75)] = 2833,
  [SMALL_STATE(76)] = 2863,
  [SMALL_STATE(77)] = 2887,
  [SMALL_STATE(78)] = 2909,
  [SMALL_STATE(79)] = 2926,
  [SMALL_STATE(80)] = 2949,
  [SMALL_STATE(81)] = 2966,
  [SMALL_STATE(82)] = 2993,
  [SMALL_STATE(83)] = 3020,
  [SMALL_STATE(84)] = 3037,
  [SMALL_STATE(85)] = 3056,
  [SMALL_STATE(86)] = 3072,
  [SMALL_STATE(87)] = 3094,
  [SMALL_STATE(88)] = 3116,
  [SMALL_STATE(89)] = 3138,
  [SMALL_STATE(90)] = 3154,
  [SMALL_STATE(91)] = 3170,
  [SMALL_STATE(92)] = 3186,
  [SMALL_STATE(93)] = 3208,
  [SMALL_STATE(94)] = 3224,
  [SMALL_STATE(95)] = 3240,
  [SMALL_STATE(96)] = 3262,
  [SMALL_STATE(97)] = 3279,
  [SMALL_STATE(98)] = 3296,
  [SMALL_STATE(99)] = 3315,
  [SMALL_STATE(100)] = 3331,
  [SMALL_STATE(101)] = 3347,
  [SMALL_STATE(102)] = 3363,
  [SMALL_STATE(103)] = 3379,
  [SMALL_STATE(104)] = 3397,
  [SMALL_STATE(105)] = 3413,
  [SMALL_STATE(106)] = 3429,
  [SMALL_STATE(107)] = 3445,
  [SMALL_STATE(108)] = 3469,
  [SMALL_STATE(109)] = 3485,
  [SMALL_STATE(110)] = 3501,
  [SMALL_STATE(111)] = 3517,
  [SMALL_STATE(112)] = 3533,
  [SMALL_STATE(113)] = 3549,
  [SMALL_STATE(114)] = 3565,
  [SMALL_STATE(115)] = 3582,
  [SMALL_STATE(116)] = 3597,
  [SMALL_STATE(117)] = 3615,
  [SMALL_STATE(118)] = 3633,
  [SMALL_STATE(119)] = 3648,
  [SMALL_STATE(120)] = 3663,
  [SMALL_STATE(121)] = 3678,
  [SMALL_STATE(122)] = 3693,
  [SMALL_STATE(123)] = 3709,
  [SMALL_STATE(124)] = 3721,
  [SMALL_STATE(125)] = 3733,
  [SMALL_STATE(126)] = 3745,
  [SMALL_STATE(127)] = 3757,
  [SMALL_STATE(128)] = 3769,
  [SMALL_STATE(129)] = 3781,
  [SMALL_STATE(130)] = 3793,
  [SMALL_STATE(131)] = 3805,
  [SMALL_STATE(132)] = 3821,
  [SMALL_STATE(133)] = 3837,
  [SMALL_STATE(134)] = 3850,
  [SMALL_STATE(135)] = 3863,
  [SMALL_STATE(136)] = 3876,
  [SMALL_STATE(137)] = 3889,
  [SMALL_STATE(138)] = 3902,
  [SMALL_STATE(139)] = 3915,
  [SMALL_STATE(140)] = 3928,
  [SMALL_STATE(141)] = 3941,
  [SMALL_STATE(142)] = 3954,
  [SMALL_STATE(143)] = 3965,
  [SMALL_STATE(144)] = 3978,
  [SMALL_STATE(145)] = 3991,
  [SMALL_STATE(146)] = 4004,
  [SMALL_STATE(147)] = 4017,
  [SMALL_STATE(148)] = 4030,
  [SMALL_STATE(149)] = 4043,
  [SMALL_STATE(150)] = 4054,
  [SMALL_STATE(151)] = 4067,
  [SMALL_STATE(152)] = 4080,
  [SMALL_STATE(153)] = 4093,
  [SMALL_STATE(154)] = 4106,
  [SMALL_STATE(155)] = 4119,
  [SMALL_STATE(156)] = 4132,
  [SMALL_STATE(157)] = 4145,
  [SMALL_STATE(158)] = 4156,
  [SMALL_STATE(159)] = 4169,
  [SMALL_STATE(160)] = 4182,
  [SMALL_STATE(161)] = 4195,
  [SMALL_STATE(162)] = 4203,
  [SMALL_STATE(163)] = 4213,
  [SMALL_STATE(164)] = 4223,
  [SMALL_STATE(165)] = 4231,
  [SMALL_STATE(166)] = 4241,
  [SMALL_STATE(167)] = 4249,
  [SMALL_STATE(168)] = 4259,
  [SMALL_STATE(169)] = 4269,
  [SMALL_STATE(170)] = 4279,
  [SMALL_STATE(171)] = 4289,
  [SMALL_STATE(172)] = 4299,
  [SMALL_STATE(173)] = 4309,
  [SMALL_STATE(174)] = 4319,
  [SMALL_STATE(175)] = 4329,
  [SMALL_STATE(176)] = 4339,
  [SMALL_STATE(177)] = 4347,
  [SMALL_STATE(178)] = 4355,
  [SMALL_STATE(179)] = 4365,
  [SMALL_STATE(180)] = 4373,
  [SMALL_STATE(181)] = 4383,
  [SMALL_STATE(182)] = 4391,
  [SMALL_STATE(183)] = 4399,
  [SMALL_STATE(184)] = 4409,
  [SMALL_STATE(185)] = 4419,
  [SMALL_STATE(186)] = 4427,
  [SMALL_STATE(187)] = 4435,
  [SMALL_STATE(188)] = 4443,
  [SMALL_STATE(189)] = 4453,
  [SMALL_STATE(190)] = 4461,
  [SMALL_STATE(191)] = 4471,
  [SMALL_STATE(192)] = 4478,
  [SMALL_STATE(193)] = 4485,
  [SMALL_STATE(194)] = 4492,
  [SMALL_STATE(195)] = 4499,
  [SMALL_STATE(196)] = 4506,
  [SMALL_STATE(197)] = 4513,
  [SMALL_STATE(198)] = 4520,
  [SMALL_STATE(199)] = 4527,
  [SMALL_STATE(200)] = 4534,
  [SMALL_STATE(201)] = 4541,
  [SMALL_STATE(202)] = 4548,
  [SMALL_STATE(203)] = 4555,
  [SMALL_STATE(204)] = 4562,
  [SMALL_STATE(205)] = 4569,
  [SMALL_STATE(206)] = 4576,
  [SMALL_STATE(207)] = 4583,
  [SMALL_STATE(208)] = 4590,
  [SMALL_STATE(209)] = 4597,
  [SMALL_STATE(210)] = 4604,
  [SMALL_STATE(211)] = 4611,
  [SMALL_STATE(212)] = 4618,
  [SMALL_STATE(213)] = 4625,
  [SMALL_STATE(214)] = 4632,
  [SMALL_STATE(215)] = 4639,
  [SMALL_STATE(216)] = 4646,
  [SMALL_STATE(217)] = 4653,
  [SMALL_STATE(218)] = 4660,
  [SMALL_STATE(219)] = 4667,
  [SMALL_STATE(220)] = 4674,
  [SMALL_STATE(221)] = 4681,
  [SMALL_STATE(222)] = 4688,
  [SMALL_STATE(223)] = 4695,
  [SMALL_STATE(224)] = 4702,
  [SMALL_STATE(225)] = 4709,
  [SMALL_STATE(226)] = 4716,
  [SMALL_STATE(227)] = 4723,
  [SMALL_STATE(228)] = 4730,
  [SMALL_STATE(229)] = 4737,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 13),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 13),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 9),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_distinct_from, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_constraint, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(204),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(107),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(37),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(80),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(90),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(203),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(205),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(52),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_constraint, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(37),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(203),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(52),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 5),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(45),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 2, .production_id = 15),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 2, .production_id = 15),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 12),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 12),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 6, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 12),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 12),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 7),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 7, .production_id = 7),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_table_parameters, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_domain_statement, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 12),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 9, .production_id = 12),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_parameters, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_table_statement, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_type_statement, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 7),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_index_statement, 8, .production_id = 7),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 9),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create_function_statement, 9),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_statement, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(188),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(82),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(29),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(119),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(211),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 14),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 1, .production_id = 10),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [642] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 11),
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
