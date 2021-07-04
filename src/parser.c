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
#define STATE_COUNT 375
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 5
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_function_statement_token1 = 2,
  aux_sym_create_function_statement_token2 = 3,
  aux_sym_create_function_statement_token3 = 4,
  aux_sym_create_function_statement_token4 = 5,
  aux_sym__function_optimizer_hint_token1 = 6,
  aux_sym__function_optimizer_hint_token2 = 7,
  aux_sym__function_optimizer_hint_token3 = 8,
  aux_sym__function_language_token1 = 9,
  aux_sym_setof_token1 = 10,
  anon_sym_EQ = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  aux_sym_function_body_token1 = 15,
  anon_sym_DOLLAR_DOLLAR = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_create_domain_statement_token1 = 18,
  aux_sym_create_type_statement_token1 = 19,
  aux_sym_create_index_statement_token1 = 20,
  aux_sym_create_index_statement_token2 = 21,
  anon_sym_CONSTRAINT = 22,
  aux_sym_column_default_token1 = 23,
  aux_sym_table_constraint_check_token1 = 24,
  aux_sym_table_constraint_foreign_key_token1 = 25,
  aux_sym_table_constraint_foreign_key_token2 = 26,
  aux_sym_table_constraint_unique_token1 = 27,
  aux_sym_table_constraint_primary_key_token1 = 28,
  aux_sym_create_table_statement_token1 = 29,
  aux_sym_using_clause_token1 = 30,
  aux_sym_group_by_clause_token1 = 31,
  aux_sym_group_by_clause_token2 = 32,
  aux_sym_order_by_clause_token1 = 33,
  aux_sym_where_clause_token1 = 34,
  aux_sym_select_clause_token1 = 35,
  aux_sym_from_clause_token1 = 36,
  aux_sym_update_statement_token1 = 37,
  aux_sym_set_clause_token1 = 38,
  aux_sym_insert_statement_token1 = 39,
  aux_sym_insert_statement_token2 = 40,
  aux_sym_values_clause_token1 = 41,
  aux_sym_in_expression_token1 = 42,
  aux_sym_in_expression_token2 = 43,
  aux_sym_references_constraint_token1 = 44,
  aux_sym_on_delete_action_token1 = 45,
  aux_sym__constraint_action_token1 = 46,
  aux_sym__constraint_action_token2 = 47,
  aux_sym__constraint_action_token3 = 48,
  anon_sym_LT = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_LT_GT = 51,
  anon_sym_GT = 52,
  anon_sym_GT_EQ = 53,
  aux_sym_is_expression_token1 = 54,
  aux_sym_distinct_from_token1 = 55,
  aux_sym_boolean_expression_token1 = 56,
  aux_sym_boolean_expression_token2 = 57,
  aux_sym_TRUE_token1 = 58,
  aux_sym_FALSE_token1 = 59,
  aux_sym_number_token1 = 60,
  sym_identifier = 61,
  aux_sym_string_token1 = 62,
  aux_sym_string_token2 = 63,
  anon_sym_DASH_GT_GT = 64,
  aux_sym_ordered_expression_token1 = 65,
  aux_sym_ordered_expression_token2 = 66,
  anon_sym_LBRACK = 67,
  anon_sym_RBRACK = 68,
  anon_sym_COLON_COLON = 69,
  sym_comment = 70,
  anon_sym_TILDE = 71,
  anon_sym_PLUS = 72,
  anon_sym_DOLLAR = 73,
  sym_source_file = 74,
  sym__statement = 75,
  sym_create_function_statement = 76,
  sym__function_optimizer_hint = 77,
  sym__function_language = 78,
  sym__create_function_return_type = 79,
  sym_setof = 80,
  sym_constrained_type = 81,
  sym_create_function_parameter = 82,
  sym_create_function_parameters = 83,
  sym_function_body = 84,
  sym_create_domain_statement = 85,
  sym_create_type_statement = 86,
  sym_create_index_statement = 87,
  sym_create_table_column_parameter = 88,
  sym_named_constraint = 89,
  sym_column_default = 90,
  sym_create_table_parameters = 91,
  sym__table_constraint = 92,
  sym_table_constraint_check = 93,
  sym_table_constraint_foreign_key = 94,
  sym_table_constraint_unique = 95,
  sym_table_constraint_primary_key = 96,
  sym_primary_key_constraint = 97,
  sym_create_table_statement = 98,
  sym_using_clause = 99,
  sym_index_table_parameters = 100,
  sym_select_statement = 101,
  sym_group_by_clause_body = 102,
  sym_group_by_clause = 103,
  sym_order_by_clause_body = 104,
  sym_order_by_clause = 105,
  sym_where_clause = 106,
  sym__aliased_expression = 107,
  sym__aliasable_expression = 108,
  sym_select_clause_body = 109,
  sym_select_clause = 110,
  sym_from_clause = 111,
  sym_select_subexpression = 112,
  sym_update_statement = 113,
  sym_set_clause = 114,
  sym_set_clause_body = 115,
  sym_assigment_expression = 116,
  sym_insert_statement = 117,
  sym_values_clause = 118,
  sym_values_clause_body = 119,
  sym_in_expression = 120,
  sym_tuple = 121,
  sym_references_constraint = 122,
  sym_on_update_action = 123,
  sym_on_delete_action = 124,
  sym__constraint_action = 125,
  sym_unique_constraint = 126,
  sym_null_constraint = 127,
  sym_check_constraint = 128,
  sym_parameter = 129,
  sym_parameters = 130,
  sym_function_call = 131,
  sym_comparison_operator = 132,
  sym__parenthesized_expression = 133,
  sym_is_expression = 134,
  sym_distinct_from = 135,
  sym_boolean_expression = 136,
  sym_NULL = 137,
  sym_TRUE = 138,
  sym_FALSE = 139,
  sym_number = 140,
  sym_string = 141,
  sym_field_access = 142,
  sym_ordered_expression = 143,
  sym__type_alias = 144,
  sym_array_type = 145,
  sym__type = 146,
  sym_type_cast = 147,
  sym_binary_expression = 148,
  sym_argument_reference = 149,
  sym__expression = 150,
  aux_sym_source_file_repeat1 = 151,
  aux_sym_create_function_statement_repeat1 = 152,
  aux_sym_create_function_parameters_repeat1 = 153,
  aux_sym_create_domain_statement_repeat1 = 154,
  aux_sym_create_table_column_parameter_repeat1 = 155,
  aux_sym_create_table_parameters_repeat1 = 156,
  aux_sym_table_constraint_foreign_key_repeat1 = 157,
  aux_sym_index_table_parameters_repeat1 = 158,
  aux_sym_group_by_clause_body_repeat1 = 159,
  aux_sym_select_clause_body_repeat1 = 160,
  aux_sym_set_clause_body_repeat1 = 161,
  aux_sym_parameters_repeat1 = 162,
  anon_alias_sym_NULL = 163,
  anon_alias_sym_ON_UPDATE = 164,
  alias_sym_default = 165,
  alias_sym_language = 166,
  alias_sym_type = 167,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_function_statement_token1] = "CREATE",
  [aux_sym_create_function_statement_token2] = "CREATE_OR_REPLACE_FUNCTION",
  [aux_sym_create_function_statement_token3] = "CREATE_OR_REPLACE_FUNCTION",
  [aux_sym_create_function_statement_token4] = "RETURNS",
  [aux_sym__function_optimizer_hint_token1] = "VOLATILE",
  [aux_sym__function_optimizer_hint_token2] = "IMMUTABLE",
  [aux_sym__function_optimizer_hint_token3] = "STABLE",
  [aux_sym__function_language_token1] = "LANGUAGE",
  [aux_sym_setof_token1] = "SETOF",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_function_body_token1] = "AS",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_create_domain_statement_token1] = "CREATE_DOMAIN",
  [aux_sym_create_type_statement_token1] = "CREATE_TYPE",
  [aux_sym_create_index_statement_token1] = "INDEX",
  [aux_sym_create_index_statement_token2] = "ON",
  [anon_sym_CONSTRAINT] = "CONSTRAINT",
  [aux_sym_column_default_token1] = "DEFAULT",
  [aux_sym_table_constraint_check_token1] = "CHECK",
  [aux_sym_table_constraint_foreign_key_token1] = "FOREIGN_KEY",
  [aux_sym_table_constraint_foreign_key_token2] = "PRIMARY_KEY",
  [aux_sym_table_constraint_unique_token1] = "UNIQUE",
  [aux_sym_table_constraint_primary_key_token1] = "PRIMARY_KEY",
  [aux_sym_create_table_statement_token1] = "CREATE_TABLE",
  [aux_sym_using_clause_token1] = "USING",
  [aux_sym_group_by_clause_token1] = "GROUP_BY",
  [aux_sym_group_by_clause_token2] = "GROUP_BY",
  [aux_sym_order_by_clause_token1] = "ORDER_BY",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_select_clause_token1] = "SELECT",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_update_statement_token1] = "UPDATE",
  [aux_sym_set_clause_token1] = "SET",
  [aux_sym_insert_statement_token1] = "INSERT",
  [aux_sym_insert_statement_token2] = "INTO",
  [aux_sym_values_clause_token1] = "VALUES",
  [aux_sym_in_expression_token1] = "NOT",
  [aux_sym_in_expression_token2] = "IN",
  [aux_sym_references_constraint_token1] = "REFERENCES",
  [aux_sym_on_delete_action_token1] = "ON_DELETE",
  [aux_sym__constraint_action_token1] = "RESTRICT",
  [aux_sym__constraint_action_token2] = "CASCADE",
  [aux_sym__constraint_action_token3] = "SET_NULL",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_is_expression_token1] = "IS",
  [aux_sym_distinct_from_token1] = "DISTINCT_FROM",
  [aux_sym_boolean_expression_token1] = "AND",
  [aux_sym_boolean_expression_token2] = "OR",
  [aux_sym_TRUE_token1] = "TRUE",
  [aux_sym_FALSE_token1] = "FALSE",
  [aux_sym_number_token1] = "number_token1",
  [sym_identifier] = "identifier",
  [aux_sym_string_token1] = "string_token1",
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
  [anon_sym_DOLLAR] = "$",
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
  [sym_function_body] = "function_body",
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
  [sym_group_by_clause_body] = "group_by_clause_body",
  [sym_group_by_clause] = "group_by_clause",
  [sym_order_by_clause_body] = "order_by_clause_body",
  [sym_order_by_clause] = "order_by_clause",
  [sym_where_clause] = "where_clause",
  [sym__aliased_expression] = "alias",
  [sym__aliasable_expression] = "_aliasable_expression",
  [sym_select_clause_body] = "select_clause_body",
  [sym_select_clause] = "select_clause",
  [sym_from_clause] = "from_clause",
  [sym_select_subexpression] = "select_subexpression",
  [sym_update_statement] = "update_statement",
  [sym_set_clause] = "set_clause",
  [sym_set_clause_body] = "set_clause_body",
  [sym_assigment_expression] = "assigment_expression",
  [sym_insert_statement] = "insert_statement",
  [sym_values_clause] = "values_clause",
  [sym_values_clause_body] = "values_clause_body",
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
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_field_access] = "field_access",
  [sym_ordered_expression] = "ordered_expression",
  [sym__type_alias] = "_type_alias",
  [sym_array_type] = "array_type",
  [sym__type] = "_type",
  [sym_type_cast] = "type_cast",
  [sym_binary_expression] = "binary_expression",
  [sym_argument_reference] = "argument_reference",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_function_statement_repeat1] = "create_function_statement_repeat1",
  [aux_sym_create_function_parameters_repeat1] = "create_function_parameters_repeat1",
  [aux_sym_create_domain_statement_repeat1] = "create_domain_statement_repeat1",
  [aux_sym_create_table_column_parameter_repeat1] = "create_table_column_parameter_repeat1",
  [aux_sym_create_table_parameters_repeat1] = "create_table_parameters_repeat1",
  [aux_sym_table_constraint_foreign_key_repeat1] = "table_constraint_foreign_key_repeat1",
  [aux_sym_index_table_parameters_repeat1] = "index_table_parameters_repeat1",
  [aux_sym_group_by_clause_body_repeat1] = "group_by_clause_body_repeat1",
  [aux_sym_select_clause_body_repeat1] = "select_clause_body_repeat1",
  [aux_sym_set_clause_body_repeat1] = "set_clause_body_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [anon_alias_sym_NULL] = "NULL",
  [anon_alias_sym_ON_UPDATE] = "ON_UPDATE",
  [alias_sym_default] = "default",
  [alias_sym_language] = "language",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_function_statement_token1] = aux_sym_create_function_statement_token1,
  [aux_sym_create_function_statement_token2] = aux_sym_create_function_statement_token2,
  [aux_sym_create_function_statement_token3] = aux_sym_create_function_statement_token2,
  [aux_sym_create_function_statement_token4] = aux_sym_create_function_statement_token4,
  [aux_sym__function_optimizer_hint_token1] = aux_sym__function_optimizer_hint_token1,
  [aux_sym__function_optimizer_hint_token2] = aux_sym__function_optimizer_hint_token2,
  [aux_sym__function_optimizer_hint_token3] = aux_sym__function_optimizer_hint_token3,
  [aux_sym__function_language_token1] = aux_sym__function_language_token1,
  [aux_sym_setof_token1] = aux_sym_setof_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_function_body_token1] = aux_sym_function_body_token1,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_create_domain_statement_token1] = aux_sym_create_domain_statement_token1,
  [aux_sym_create_type_statement_token1] = aux_sym_create_type_statement_token1,
  [aux_sym_create_index_statement_token1] = aux_sym_create_index_statement_token1,
  [aux_sym_create_index_statement_token2] = aux_sym_create_index_statement_token2,
  [anon_sym_CONSTRAINT] = anon_sym_CONSTRAINT,
  [aux_sym_column_default_token1] = aux_sym_column_default_token1,
  [aux_sym_table_constraint_check_token1] = aux_sym_table_constraint_check_token1,
  [aux_sym_table_constraint_foreign_key_token1] = aux_sym_table_constraint_foreign_key_token1,
  [aux_sym_table_constraint_foreign_key_token2] = aux_sym_table_constraint_foreign_key_token2,
  [aux_sym_table_constraint_unique_token1] = aux_sym_table_constraint_unique_token1,
  [aux_sym_table_constraint_primary_key_token1] = aux_sym_table_constraint_foreign_key_token2,
  [aux_sym_create_table_statement_token1] = aux_sym_create_table_statement_token1,
  [aux_sym_using_clause_token1] = aux_sym_using_clause_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
  [aux_sym_group_by_clause_token2] = aux_sym_group_by_clause_token1,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_update_statement_token1] = aux_sym_update_statement_token1,
  [aux_sym_set_clause_token1] = aux_sym_set_clause_token1,
  [aux_sym_insert_statement_token1] = aux_sym_insert_statement_token1,
  [aux_sym_insert_statement_token2] = aux_sym_insert_statement_token2,
  [aux_sym_values_clause_token1] = aux_sym_values_clause_token1,
  [aux_sym_in_expression_token1] = aux_sym_in_expression_token1,
  [aux_sym_in_expression_token2] = aux_sym_in_expression_token2,
  [aux_sym_references_constraint_token1] = aux_sym_references_constraint_token1,
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
  [aux_sym_TRUE_token1] = aux_sym_TRUE_token1,
  [aux_sym_FALSE_token1] = aux_sym_FALSE_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [sym_identifier] = sym_identifier,
  [aux_sym_string_token1] = aux_sym_string_token1,
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
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
  [sym_function_body] = sym_function_body,
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
  [sym_group_by_clause_body] = sym_group_by_clause_body,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym_order_by_clause_body] = sym_order_by_clause_body,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_where_clause] = sym_where_clause,
  [sym__aliased_expression] = sym__aliased_expression,
  [sym__aliasable_expression] = sym__aliasable_expression,
  [sym_select_clause_body] = sym_select_clause_body,
  [sym_select_clause] = sym_select_clause,
  [sym_from_clause] = sym_from_clause,
  [sym_select_subexpression] = sym_select_subexpression,
  [sym_update_statement] = sym_update_statement,
  [sym_set_clause] = sym_set_clause,
  [sym_set_clause_body] = sym_set_clause_body,
  [sym_assigment_expression] = sym_assigment_expression,
  [sym_insert_statement] = sym_insert_statement,
  [sym_values_clause] = sym_values_clause,
  [sym_values_clause_body] = sym_values_clause_body,
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
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_field_access] = sym_field_access,
  [sym_ordered_expression] = sym_ordered_expression,
  [sym__type_alias] = sym__type_alias,
  [sym_array_type] = sym_array_type,
  [sym__type] = sym__type,
  [sym_type_cast] = sym_type_cast,
  [sym_binary_expression] = sym_binary_expression,
  [sym_argument_reference] = sym_argument_reference,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_function_statement_repeat1] = aux_sym_create_function_statement_repeat1,
  [aux_sym_create_function_parameters_repeat1] = aux_sym_create_function_parameters_repeat1,
  [aux_sym_create_domain_statement_repeat1] = aux_sym_create_domain_statement_repeat1,
  [aux_sym_create_table_column_parameter_repeat1] = aux_sym_create_table_column_parameter_repeat1,
  [aux_sym_create_table_parameters_repeat1] = aux_sym_create_table_parameters_repeat1,
  [aux_sym_table_constraint_foreign_key_repeat1] = aux_sym_table_constraint_foreign_key_repeat1,
  [aux_sym_index_table_parameters_repeat1] = aux_sym_index_table_parameters_repeat1,
  [aux_sym_group_by_clause_body_repeat1] = aux_sym_group_by_clause_body_repeat1,
  [aux_sym_select_clause_body_repeat1] = aux_sym_select_clause_body_repeat1,
  [aux_sym_set_clause_body_repeat1] = aux_sym_set_clause_body_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [anon_alias_sym_NULL] = anon_alias_sym_NULL,
  [anon_alias_sym_ON_UPDATE] = anon_alias_sym_ON_UPDATE,
  [alias_sym_default] = alias_sym_default,
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
  [aux_sym_create_function_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_function_statement_token4] = {
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
  [aux_sym_function_body_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [aux_sym_table_constraint_foreign_key_token2] = {
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
  [aux_sym_group_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_by_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_update_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_values_clause_token1] = {
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
  [aux_sym_TRUE_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_FALSE_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
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
  [anon_sym_DOLLAR] = {
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
  [sym_function_body] = {
    .visible = true,
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
  [sym_group_by_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
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
  [sym_select_clause_body] = {
    .visible = true,
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
  [sym_select_subexpression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_set_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_assigment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_values_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_values_clause_body] = {
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
  [sym_number] = {
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
  [sym_argument_reference] = {
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
  [aux_sym_group_by_clause_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_clause_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_ON_UPDATE] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_default] = {
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
  field_replace = 9,
  field_table = 10,
  field_type = 11,
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
  [field_replace] = "replace",
  [field_table] = "table",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 3, .length = 1},
  [11] = {.index = 4, .length = 2},
  [13] = {.index = 6, .length = 2},
  [14] = {.index = 8, .length = 2},
  [15] = {.index = 10, .length = 3},
  [16] = {.index = 13, .length = 1},
  [18] = {.index = 14, .length = 1},
  [20] = {.index = 15, .length = 1},
  [21] = {.index = 16, .length = 2},
  [22] = {.index = 18, .length = 2},
  [25] = {.index = 20, .length = 1},
  [27] = {.index = 21, .length = 1},
  [28] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
  [1] =
    {field_function, 0},
  [2] =
    {field_type, 2},
  [3] =
    {field_operator, 1},
  [4] =
    {field_arguments, 2},
    {field_function, 0},
  [6] =
    {field_name, 2},
    {field_table, 4},
  [8] =
    {field_name, 0},
    {field_type, 1},
  [10] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [13] =
    {field_elements, 1},
  [14] =
    {field_replace, 1},
  [15] =
    {field_type, 1},
  [16] =
    {field_name, 3},
    {field_table, 5},
  [18] =
    {field_elements, 1},
    {field_elements, 2},
  [20] =
    {field_order, 1},
  [21] =
    {field_action, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_NULL,
  },
  [2] = {
    [0] = aux_sym_create_domain_statement_token1,
  },
  [3] = {
    [0] = aux_sym_create_table_statement_token1,
  },
  [6] = {
    [0] = alias_sym_type,
  },
  [9] = {
    [1] = aux_sym_order_by_clause_token1,
  },
  [10] = {
    [0] = aux_sym_create_type_statement_token1,
  },
  [12] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [17] = {
    [1] = aux_sym_distinct_from_token1,
  },
  [18] = {
    [0] = aux_sym_create_function_statement_token2,
  },
  [19] = {
    [2] = alias_sym_default,
  },
  [23] = {
    [3] = alias_sym_default,
  },
  [24] = {
    [1] = alias_sym_language,
  },
  [26] = {
    [1] = aux_sym_table_constraint_foreign_key_token1,
  },
  [27] = {
    [0] = anon_alias_sym_ON_UPDATE,
    [1] = anon_alias_sym_ON_UPDATE,
  },
  [28] = {
    [0] = aux_sym_on_delete_action_token1,
  },
  [29] = {
    [0] = aux_sym__constraint_action_token3,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
      if (lookahead == '$') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(263);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead == '\\') SKIP(238)
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == '~') ADVANCE(429);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(233);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(48);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(103);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 18:
      if (lookahead == '$') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(263);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(263);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(265);
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '*') ADVANCE(418);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(415);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(263);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(263);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
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
      if (lookahead == '/') ADVANCE(426);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(428);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(428);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(355);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(373);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(425);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(420);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(271);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 120:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 121:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 122:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 125:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 126:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 128:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(273);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 159:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 184:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 185:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 186:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 187:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(231);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 206:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(306);
      END_STATE();
    case 207:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      END_STATE();
    case 208:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 223:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 224:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 225:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 226:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 227:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 228:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 229:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 230:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 231:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 232:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(269);
      END_STATE();
    case 233:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(286);
      END_STATE();
    case 234:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 235:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(417);
      END_STATE();
    case 237:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 238:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(237)
      END_STATE();
    case 239:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(246)
      END_STATE();
    case 240:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(246)
      if (lookahead == '\r') SKIP(239)
      END_STATE();
    case 241:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(245)
      END_STATE();
    case 242:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(245)
      if (lookahead == '\r') SKIP(241)
      END_STATE();
    case 243:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(247)
      END_STATE();
    case 244:
      if (eof) ADVANCE(248);
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '\r') SKIP(243)
      END_STATE();
    case 245:
      if (eof) ADVANCE(248);
      if (lookahead == '$') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '\\') SKIP(242)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(375);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(245)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 246:
      if (eof) ADVANCE(248);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(263);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead == '\\') SKIP(240)
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == '~') ADVANCE(429);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(188);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(182);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(131);
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
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(263);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(249);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead == '\\') SKIP(244)
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == '~') ADVANCE(429);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(131);
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
      ACCEPT_TOKEN(aux_sym_create_function_statement_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token2);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token3);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_create_function_statement_token4);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token2);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__function_optimizer_hint_token3);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__function_language_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_setof_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_function_body_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_create_domain_statement_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_create_type_statement_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_create_index_statement_token2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_CONSTRAINT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_column_default_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_table_constraint_check_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_table_constraint_foreign_key_token2);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_table_constraint_unique_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_table_constraint_primary_key_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_update_statement_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_set_clause_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_values_clause_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_in_expression_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_in_expression_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_references_constraint_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_on_delete_action_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__constraint_action_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__constraint_action_token2);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__constraint_action_token3);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '>') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_is_expression_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_distinct_from_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_boolean_expression_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_TRUE_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_FALSE_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(410);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(410);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(410);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '\r') ADVANCE(412);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == '$') ADVANCE(427);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(415);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead == '-') ADVANCE(413);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(236);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '*') ADVANCE(418);
      if (lookahead == '/') ADVANCE(417);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '*') ADVANCE(418);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_ordered_expression_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == '$') ADVANCE(428);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(265);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 246},
  [3] = {.lex_state = 246},
  [4] = {.lex_state = 246},
  [5] = {.lex_state = 245},
  [6] = {.lex_state = 246},
  [7] = {.lex_state = 246},
  [8] = {.lex_state = 246},
  [9] = {.lex_state = 246},
  [10] = {.lex_state = 246},
  [11] = {.lex_state = 247},
  [12] = {.lex_state = 246},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 247},
  [15] = {.lex_state = 247},
  [16] = {.lex_state = 247},
  [17] = {.lex_state = 247},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 247},
  [20] = {.lex_state = 247},
  [21] = {.lex_state = 247},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 247},
  [24] = {.lex_state = 247},
  [25] = {.lex_state = 247},
  [26] = {.lex_state = 247},
  [27] = {.lex_state = 247},
  [28] = {.lex_state = 247},
  [29] = {.lex_state = 247},
  [30] = {.lex_state = 247},
  [31] = {.lex_state = 247},
  [32] = {.lex_state = 247},
  [33] = {.lex_state = 247},
  [34] = {.lex_state = 247},
  [35] = {.lex_state = 247},
  [36] = {.lex_state = 247},
  [37] = {.lex_state = 247},
  [38] = {.lex_state = 247},
  [39] = {.lex_state = 247},
  [40] = {.lex_state = 247},
  [41] = {.lex_state = 247},
  [42] = {.lex_state = 247},
  [43] = {.lex_state = 247},
  [44] = {.lex_state = 246},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 246},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 246},
  [49] = {.lex_state = 246},
  [50] = {.lex_state = 246},
  [51] = {.lex_state = 246},
  [52] = {.lex_state = 246},
  [53] = {.lex_state = 246},
  [54] = {.lex_state = 246},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 246},
  [57] = {.lex_state = 246},
  [58] = {.lex_state = 246},
  [59] = {.lex_state = 246},
  [60] = {.lex_state = 246},
  [61] = {.lex_state = 247},
  [62] = {.lex_state = 246},
  [63] = {.lex_state = 246},
  [64] = {.lex_state = 246},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 246},
  [67] = {.lex_state = 246},
  [68] = {.lex_state = 246},
  [69] = {.lex_state = 246},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 246},
  [100] = {.lex_state = 246},
  [101] = {.lex_state = 247},
  [102] = {.lex_state = 246},
  [103] = {.lex_state = 247},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 247},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 247},
  [111] = {.lex_state = 247},
  [112] = {.lex_state = 247},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 247},
  [116] = {.lex_state = 247},
  [117] = {.lex_state = 247},
  [118] = {.lex_state = 247},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 247},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 247},
  [130] = {.lex_state = 247},
  [131] = {.lex_state = 247},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 247},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 247},
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
  [156] = {.lex_state = 26},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 25},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 32},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
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
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 33},
  [190] = {.lex_state = 23},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 33},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 23},
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
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 23},
  [228] = {.lex_state = 23},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
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
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 23},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 23},
  [300] = {.lex_state = 23},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 23},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 23},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 23},
  [318] = {.lex_state = 23},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 23},
  [333] = {.lex_state = 23},
  [334] = {.lex_state = 408},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 24},
  [337] = {.lex_state = 26},
  [338] = {.lex_state = 23},
  [339] = {.lex_state = 23},
  [340] = {.lex_state = 246},
  [341] = {.lex_state = 23},
  [342] = {.lex_state = 23},
  [343] = {.lex_state = 23},
  [344] = {.lex_state = 23},
  [345] = {.lex_state = 23},
  [346] = {.lex_state = 23},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 26},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 23},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 23},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 23},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 23},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 23},
  [370] = {.lex_state = 23},
  [371] = {.lex_state = 24},
  [372] = {.lex_state = 408},
  [373] = {.lex_state = 246},
  [374] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_function_statement_token1] = ACTIONS(1),
    [aux_sym_create_function_statement_token3] = ACTIONS(1),
    [aux_sym_create_function_statement_token4] = ACTIONS(1),
    [aux_sym__function_optimizer_hint_token1] = ACTIONS(1),
    [aux_sym__function_optimizer_hint_token2] = ACTIONS(1),
    [aux_sym__function_optimizer_hint_token3] = ACTIONS(1),
    [aux_sym__function_language_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_function_body_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_create_domain_statement_token1] = ACTIONS(1),
    [aux_sym_create_type_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token1] = ACTIONS(1),
    [aux_sym_create_index_statement_token2] = ACTIONS(1),
    [anon_sym_CONSTRAINT] = ACTIONS(1),
    [aux_sym_column_default_token1] = ACTIONS(1),
    [aux_sym_table_constraint_check_token1] = ACTIONS(1),
    [aux_sym_table_constraint_foreign_key_token1] = ACTIONS(1),
    [aux_sym_table_constraint_foreign_key_token2] = ACTIONS(1),
    [aux_sym_table_constraint_unique_token1] = ACTIONS(1),
    [aux_sym_table_constraint_primary_key_token1] = ACTIONS(1),
    [aux_sym_create_table_statement_token1] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token2] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_update_statement_token1] = ACTIONS(1),
    [aux_sym_set_clause_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token1] = ACTIONS(1),
    [aux_sym_insert_statement_token2] = ACTIONS(1),
    [aux_sym_values_clause_token1] = ACTIONS(1),
    [aux_sym_in_expression_token1] = ACTIONS(1),
    [aux_sym_in_expression_token2] = ACTIONS(1),
    [aux_sym_references_constraint_token1] = ACTIONS(1),
    [aux_sym_on_delete_action_token1] = ACTIONS(1),
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
    [aux_sym_TRUE_token1] = ACTIONS(1),
    [aux_sym_FALSE_token1] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_DASH_GT_GT] = ACTIONS(1),
    [aux_sym_ordered_expression_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(352),
    [sym__statement] = STATE(119),
    [sym_create_function_statement] = STATE(221),
    [sym_create_domain_statement] = STATE(221),
    [sym_create_type_statement] = STATE(221),
    [sym_create_index_statement] = STATE(221),
    [sym_create_table_statement] = STATE(221),
    [sym_select_statement] = STATE(221),
    [sym_select_clause] = STATE(113),
    [sym_update_statement] = STATE(221),
    [sym_insert_statement] = STATE(221),
    [aux_sym_source_file_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_function_statement_token1] = ACTIONS(7),
    [aux_sym_select_clause_token1] = ACTIONS(9),
    [aux_sym_update_statement_token1] = ACTIONS(11),
    [aux_sym_insert_statement_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(15), 36,
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
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [48] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(19), 36,
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
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [96] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(23), 35,
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
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [143] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(145), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 8,
      aux_sym_create_function_statement_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(49), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(53), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(59), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(63), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(67), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(79), 1,
      anon_sym_COLON_COLON,
    ACTIONS(75), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(81), 32,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_COLON_COLON,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [534] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(145), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      anon_sym_DOLLAR_DOLLAR,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 4,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [770] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(145), 1,
      sym_select_clause_body,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 4,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COLON_COLON,
    ACTIONS(75), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [968] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(145), 1,
      sym_select_clause_body,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
    STATE(124), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    ACTIONS(29), 4,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_from_clause_token1,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [1036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1245] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 28,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1331] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(117), 1,
      aux_sym_in_expression_token2,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(111), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(153), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1837] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(117), 1,
      aux_sym_in_expression_token2,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(155), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
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
  [1931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DASH_GT_GT,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(75), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [1976] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_select_clause_token1,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(113), 1,
      sym_select_clause,
    STATE(143), 1,
      sym__expression,
    STATE(351), 1,
      sym_select_statement,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(75), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2078] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_select_clause_token1,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(113), 1,
      sym_select_clause,
    STATE(139), 1,
      sym__expression,
    STATE(355), 1,
      sym_select_statement,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(87), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2177] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(155), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(107), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(139), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(157), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(143), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2369] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(203), 1,
      aux_sym_function_body_token1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [2421] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(138), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(91), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(131), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2551] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(71), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(153), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2673] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(117), 1,
      aux_sym_in_expression_token2,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(207), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [2723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(151), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(147), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(123), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2831] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym__expression,
    STATE(142), 2,
      sym__aliased_expression,
      sym__aliasable_expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [2889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(127), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(101), 3,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [2965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(95), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      aux_sym_in_expression_token2,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_boolean_expression_token2,
    ACTIONS(135), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_function_body_token1,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      aux_sym_is_expression_token1,
      aux_sym_boolean_expression_token1,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [3037] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(112), 1,
      sym__expression,
    STATE(270), 1,
      sym_ordered_expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3094] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(99), 1,
      sym__expression,
    STATE(177), 1,
      sym_group_by_clause_body,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3151] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym__expression,
    STATE(187), 1,
      sym_order_by_clause_body,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3208] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(116), 1,
      sym__expression,
    STATE(347), 1,
      sym_values_clause_body,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3265] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3322] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3379] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(111), 1,
      sym__expression,
    STATE(258), 1,
      sym_ordered_expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3436] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3490] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(131), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3544] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(110), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3598] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3652] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3706] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3760] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3814] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(100), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3868] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(129), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3922] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [3976] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(130), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4030] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4084] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4138] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4192] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4246] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4300] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(143), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4354] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4408] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(115), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4462] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4516] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(39), 1,
      aux_sym_TRUE_token1,
    ACTIONS(41), 1,
      aux_sym_FALSE_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    STATE(102), 1,
      sym__expression,
    STATE(46), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(59), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4570] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(177), 1,
      aux_sym_TRUE_token1,
    ACTIONS(179), 1,
      aux_sym_FALSE_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    STATE(117), 1,
      sym__expression,
    STATE(19), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
    STATE(33), 13,
      sym_select_subexpression,
      sym_in_expression,
      sym_comparison_operator,
      sym_is_expression,
      sym_boolean_expression,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
      sym_number,
      sym_field_access,
      sym_type_cast,
      sym_binary_expression,
      sym_argument_reference,
  [4624] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(215), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [4675] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [4721] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(117), 1,
      aux_sym_in_expression_token2,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(221), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [4771] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_in_expression_token1,
    ACTIONS(191), 1,
      aux_sym_in_expression_token2,
    ACTIONS(195), 1,
      aux_sym_is_expression_token1,
    ACTIONS(197), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(199), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(225), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [4817] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(117), 1,
      aux_sym_in_expression_token2,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(225), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [4862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 22,
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
      aux_sym_function_body_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [4890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 22,
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
      aux_sym_function_body_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [4918] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(117), 1,
      aux_sym_in_expression_token2,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [4961] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(237), 1,
      aux_sym_column_default_token1,
    ACTIONS(239), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(241), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(243), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(247), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(108), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5009] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(237), 1,
      aux_sym_column_default_token1,
    ACTIONS(239), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(241), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(243), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(247), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(109), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5054] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_CONSTRAINT,
    ACTIONS(258), 1,
      aux_sym_column_default_token1,
    ACTIONS(261), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(264), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(267), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(270), 1,
      aux_sym_in_expression_token1,
    ACTIONS(273), 1,
      aux_sym_references_constraint_token1,
    ACTIONS(276), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(109), 8,
      sym_named_constraint,
      sym_column_default,
      sym_primary_key_constraint,
      sym_references_constraint,
      sym_unique_constraint,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_table_column_parameter_repeat1,
  [5099] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(117), 1,
      aux_sym_in_expression_token2,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5140] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    STATE(247), 1,
      aux_sym_index_table_parameters_repeat1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(285), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5186] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(285), 2,
      aux_sym_ordered_expression_token1,
      aux_sym_ordered_expression_token2,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5227] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(295), 1,
      aux_sym_where_clause_token1,
    ACTIONS(297), 1,
      aux_sym_from_clause_token1,
    STATE(126), 1,
      sym_from_clause,
    STATE(147), 1,
      sym_where_clause,
    STATE(171), 1,
      sym_group_by_clause,
    STATE(182), 1,
      sym_order_by_clause,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5266] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(304), 1,
      aux_sym_select_clause_token1,
    ACTIONS(307), 1,
      aux_sym_update_statement_token1,
    ACTIONS(310), 1,
      aux_sym_insert_statement_token1,
    STATE(113), 1,
      sym_select_clause,
    STATE(114), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(221), 8,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [5302] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5344] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5386] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5428] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5470] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_create_function_statement_token1,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(11), 1,
      aux_sym_update_statement_token1,
    ACTIONS(13), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_select_clause,
    STATE(114), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(221), 8,
      sym_create_function_statement,
      sym_create_domain_statement,
      sym_create_type_statement,
      sym_create_index_statement,
      sym_create_table_statement,
      sym_select_statement,
      sym_update_statement,
      sym_insert_statement,
  [5506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(140), 1,
      sym_null_constraint,
    ACTIONS(323), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(140), 1,
      sym_null_constraint,
    ACTIONS(325), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5570] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(262), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(329), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(334), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5662] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym__function_language_token1,
    ACTIONS(344), 1,
      aux_sym_function_body_token1,
    ACTIONS(340), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(132), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(338), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5691] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(295), 1,
      aux_sym_where_clause_token1,
    STATE(146), 1,
      sym_where_clause,
    STATE(158), 1,
      sym_group_by_clause,
    STATE(180), 1,
      sym_order_by_clause,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5724] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym__function_language_token1,
    ACTIONS(356), 1,
      aux_sym_function_body_token1,
    ACTIONS(350), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(127), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(348), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym__function_language_token1,
    ACTIONS(344), 1,
      aux_sym_function_body_token1,
    ACTIONS(340), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(134), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(359), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5782] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5819] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5856] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [5893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym__function_language_token1,
    ACTIONS(344), 1,
      aux_sym_function_body_token1,
    ACTIONS(340), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(127), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(367), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(369), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym__function_language_token1,
    ACTIONS(344), 1,
      aux_sym_function_body_token1,
    ACTIONS(340), 3,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
    STATE(127), 4,
      sym__function_optimizer_hint,
      sym__function_language,
      sym_function_body,
      aux_sym_create_function_statement_repeat1,
    ACTIONS(371), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [5976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(373), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_create_index_statement_token2,
    STATE(280), 1,
      sym_on_update_action,
    STATE(281), 1,
      sym_on_delete_action,
    ACTIONS(377), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6028] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(149), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(381), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_select_clause_body_repeat1,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6084] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 14,
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
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6180] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_boolean_expression_token1,
    ACTIONS(105), 1,
      aux_sym_boolean_expression_token2,
    ACTIONS(115), 1,
      aux_sym_in_expression_token1,
    ACTIONS(121), 1,
      aux_sym_is_expression_token1,
    ACTIONS(283), 1,
      aux_sym_in_expression_token2,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_TILDE,
      anon_sym_PLUS,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
  [6216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_create_index_statement_token2,
    STATE(302), 1,
      sym_on_update_action,
    STATE(303), 1,
      sym_on_delete_action,
    ACTIONS(393), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6260] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(167), 1,
      sym_group_by_clause,
    STATE(188), 1,
      sym_order_by_clause,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(158), 1,
      sym_group_by_clause,
    STATE(180), 1,
      sym_order_by_clause,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_create_index_statement_token2,
    STATE(306), 1,
      sym_on_update_action,
    STATE(307), 1,
      sym_on_delete_action,
    ACTIONS(399), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6339] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(150), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(401), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6368] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(408), 1,
      aux_sym_in_expression_token1,
    ACTIONS(411), 1,
      aux_sym__constraint_action_token3,
    STATE(105), 1,
      sym_NULL,
    STATE(150), 3,
      sym_null_constraint,
      sym_check_constraint,
      aux_sym_create_domain_statement_repeat1,
    ACTIONS(403), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(225), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(417), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(419), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 11,
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
      aux_sym__constraint_action_token3,
  [6480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_create_index_statement_token1,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 11,
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
      aux_sym__constraint_action_token3,
  [6531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(188), 1,
      sym_order_by_clause,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6552] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(431), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(433), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(435), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(248), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [6579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 11,
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
      aux_sym__constraint_action_token3,
  [6647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym__function_optimizer_hint_token1,
      aux_sym__function_optimizer_hint_token2,
      aux_sym__function_optimizer_hint_token3,
      aux_sym__function_language_token1,
      aux_sym_function_body_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(447), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(419), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(179), 1,
      sym_order_by_clause,
    ACTIONS(449), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_identifier,
    STATE(238), 1,
      sym_constrained_type,
    ACTIONS(17), 2,
      aux_sym_in_expression_token1,
      aux_sym__constraint_action_token3,
    STATE(199), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    ACTIONS(15), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [6750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
    ACTIONS(225), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6771] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_table_constraint_check_token1,
    ACTIONS(431), 1,
      aux_sym_table_constraint_foreign_key_token1,
    ACTIONS(433), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(435), 1,
      aux_sym_table_constraint_primary_key_token1,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(297), 6,
      sym_create_table_column_parameter,
      sym__table_constraint,
      sym_table_constraint_check,
      sym_table_constraint_foreign_key,
      sym_table_constraint_unique,
      sym_table_constraint_primary_key,
  [6798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_order_by_clause_token1,
    STATE(180), 1,
      sym_order_by_clause,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CONSTRAINT,
      aux_sym_column_default_token1,
      aux_sym_table_constraint_check_token1,
      aux_sym_table_constraint_unique_token1,
      aux_sym_table_constraint_primary_key_token1,
      aux_sym_in_expression_token1,
      aux_sym_references_constraint_token1,
      aux_sym__constraint_action_token3,
  [6899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_order_by_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6915] = 2,
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
      aux_sym__constraint_action_token3,
  [6931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(470), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [6995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(474), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7014] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(476), 1,
      aux_sym_in_expression_token1,
    ACTIONS(478), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(480), 1,
      aux_sym_TRUE_token1,
    ACTIONS(482), 1,
      aux_sym_FALSE_token1,
    STATE(63), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7039] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_in_expression_token1,
    ACTIONS(486), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(488), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(490), 1,
      aux_sym_TRUE_token1,
    ACTIONS(492), 1,
      aux_sym_FALSE_token1,
    STATE(39), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_set_clause_body_repeat1,
    ACTIONS(494), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_identifier,
    ACTIONS(501), 1,
      aux_sym_setof_token1,
    STATE(121), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(128), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [7133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      sym_identifier,
    STATE(176), 1,
      sym_type_cast,
    STATE(166), 3,
      sym_function_call,
      sym__parenthesized_expression,
      sym_string,
  [7157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_where_clause_token1,
    STATE(216), 1,
      sym_where_clause,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_where_clause_token1,
    STATE(210), 1,
      sym_where_clause,
    ACTIONS(511), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_where_clause_token1,
    STATE(215), 1,
      sym_where_clause,
    ACTIONS(513), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7225] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(515), 1,
      anon_sym_EQ,
    STATE(105), 1,
      sym_NULL,
    STATE(140), 1,
      sym_null_constraint,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(488), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(490), 1,
      aux_sym_TRUE_token1,
    ACTIONS(492), 1,
      aux_sym_FALSE_token1,
    STATE(36), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_identifier,
    ACTIONS(501), 1,
      aux_sym_setof_token1,
    STATE(121), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
    STATE(125), 3,
      sym__create_function_return_type,
      sym_setof,
      sym_constrained_type,
  [7293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(478), 1,
      aux_sym_distinct_from_token1,
    ACTIONS(480), 1,
      aux_sym_TRUE_token1,
    ACTIONS(482), 1,
      aux_sym_FALSE_token1,
    STATE(51), 4,
      sym_distinct_from,
      sym_NULL,
      sym_TRUE,
      sym_FALSE,
  [7315] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      aux_sym_in_expression_token1,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    ACTIONS(519), 1,
      anon_sym_EQ,
    STATE(105), 1,
      sym_NULL,
    STATE(140), 1,
      sym_null_constraint,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_where_clause_token1,
    STATE(207), 1,
      sym_where_clause,
    ACTIONS(523), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7359] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_table_constraint_unique_token1,
    ACTIONS(525), 1,
      aux_sym_create_function_statement_token2,
    ACTIONS(527), 1,
      aux_sym_create_function_statement_token3,
    ACTIONS(529), 1,
      aux_sym_create_domain_statement_token1,
    ACTIONS(531), 1,
      aux_sym_create_type_statement_token1,
    ACTIONS(533), 1,
      aux_sym_create_index_statement_token1,
    ACTIONS(535), 1,
      aux_sym_create_table_statement_token1,
    STATE(337), 1,
      sym_unique_constraint,
  [7387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_where_clause_token1,
    STATE(218), 1,
      sym_where_clause,
    ACTIONS(537), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym_function_body_token1,
    ACTIONS(539), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_where_clause_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_identifier,
    STATE(239), 1,
      sym_create_function_parameter,
    STATE(245), 1,
      sym_constrained_type,
    STATE(195), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_identifier,
    STATE(245), 1,
      sym_constrained_type,
    STATE(284), 1,
      sym_create_function_parameter,
    STATE(195), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    ACTIONS(571), 5,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(164), 1,
      sym_constrained_type,
    STATE(120), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 5,
      ts_builtin_sym_end,
      aux_sym_create_function_statement_token1,
      aux_sym_select_clause_token1,
      aux_sym_update_statement_token1,
      aux_sym_insert_statement_token1,
  [7691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_set_clause_token1,
    STATE(163), 1,
      sym__constraint_action,
    ACTIONS(583), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [7705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym_identifier,
    STATE(23), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(107), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(137), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      aux_sym_using_clause_token1,
    STATE(194), 1,
      sym_index_table_parameters,
    STATE(295), 1,
      sym_using_clause,
  [7757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(7), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(266), 3,
      sym__type_alias,
      sym_array_type,
      sym__type,
  [7781] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      aux_sym_using_clause_token1,
    STATE(202), 1,
      sym_index_table_parameters,
    STATE(272), 1,
      sym_using_clause,
  [7797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_set_clause_token1,
    STATE(157), 1,
      sym__constraint_action,
    ACTIONS(591), 2,
      aux_sym__constraint_action_token1,
      aux_sym__constraint_action_token2,
  [7811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_parameters_repeat1,
  [7824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_EQ,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym_create_function_parameters_repeat1,
  [7887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_create_table_parameters_repeat1,
  [7900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_create_function_parameters_repeat1,
  [7913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [7926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      aux_sym_select_clause_token1,
    STATE(113), 1,
      sym_select_clause,
    STATE(277), 1,
      sym_select_statement,
  [7939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_select_clause_token1,
    STATE(113), 1,
      sym_select_clause,
    STATE(268), 1,
      sym_select_statement,
  [7952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [7976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_index_table_parameters_repeat1,
  [7989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_create_table_parameters_repeat1,
  [8002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_string,
  [8015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_create_function_parameters_repeat1,
  [8093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      sym_string,
  [8106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_parameters_repeat1,
  [8119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_index_table_parameters_repeat1,
  [8132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_parameters_repeat1,
  [8158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_create_table_parameters_repeat1,
  [8171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_group_by_clause_body_repeat1,
  [8184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
    STATE(183), 1,
      sym_assigment_expression,
    STATE(205), 1,
      sym_set_clause_body,
  [8197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_table_constraint_foreign_key_repeat1,
  [8223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_index_table_parameters_repeat1,
  [8247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
  [8257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_create_function_parameters,
  [8267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_references_constraint_token1,
    STATE(286), 1,
      sym_references_constraint,
  [8285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_index_table_parameters,
  [8295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(682), 1,
      anon_sym_SQUOTE,
  [8321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(686), 1,
      anon_sym_SEMI,
  [8339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_values_clause_token1,
    STATE(217), 1,
      sym_values_clause,
  [8349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      aux_sym_update_statement_token1,
    ACTIONS(692), 1,
      aux_sym_on_delete_action_token1,
  [8359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      aux_sym_create_index_statement_token2,
    STATE(172), 1,
      sym_on_delete_action,
  [8369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_create_index_statement_token2,
    STATE(172), 1,
      sym_on_update_action,
  [8379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_tuple,
  [8389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym_parameters,
  [8399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_tuple,
  [8417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_references_constraint_token1,
    STATE(296), 1,
      sym_references_constraint,
  [8435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      sym_create_table_parameters,
  [8461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__constraint_action_token3,
    STATE(104), 1,
      sym_NULL,
  [8471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_set_clause_token1,
    STATE(191), 1,
      sym_set_clause,
  [8497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym_index_table_parameters,
  [8507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_tuple,
  [8533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_identifier,
    STATE(257), 1,
      sym_parameter,
  [8543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
    STATE(192), 1,
      sym_assigment_expression,
  [8553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_tuple,
  [8563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      aux_sym_create_index_statement_token2,
    STATE(173), 1,
      sym_on_delete_action,
  [8573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_create_index_statement_token2,
    STATE(173), 1,
      sym_on_update_action,
  [8583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_create_function_parameters,
  [8593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_identifier,
    STATE(293), 1,
      sym_parameter,
  [8603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      aux_sym_create_index_statement_token2,
    STATE(178), 1,
      sym_on_delete_action,
  [8613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_create_index_statement_token2,
    STATE(178), 1,
      sym_on_update_action,
  [8623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      aux_sym__constraint_action_token3,
  [8630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
  [8637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [8644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
  [8651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [8658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
  [8665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      aux_sym_group_by_clause_token2,
  [8672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      aux_sym_group_by_clause_token2,
  [8679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RBRACK,
  [8686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_identifier,
  [8693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_identifier,
  [8700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_create_function_statement_token4,
  [8707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      aux_sym_update_statement_token1,
  [8714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      aux_sym_create_function_statement_token4,
  [8721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
  [8728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_EQ,
  [8735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      aux_sym_from_clause_token1,
  [8742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      aux_sym_on_delete_action_token1,
  [8749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_create_index_statement_token2,
  [8756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_identifier,
  [8763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_SQUOTE,
  [8770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      aux_sym_number_token1,
  [8784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_create_function_statement_token4,
  [8791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_identifier,
  [8798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_identifier,
  [8805] = 2,
    ACTIONS(766), 1,
      aux_sym_string_token1,
    ACTIONS(768), 1,
      sym_comment,
  [8812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
  [8819] = 2,
    ACTIONS(768), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_string_token2,
  [8826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      aux_sym_create_index_statement_token1,
  [8833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_identifier,
  [8840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_identifier,
  [8847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      aux_sym_in_expression_token2,
  [8854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_identifier,
  [8861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
  [8868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_identifier,
  [8875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_identifier,
  [8882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_identifier,
  [8889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
  [8896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
  [8903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym_create_function_statement_token3,
  [8910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_SQUOTE,
  [8917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
  [8931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
  [8938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_insert_statement_token2,
  [8945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      aux_sym_number_token1,
  [8952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
  [8959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_identifier,
  [8966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_DOLLAR_DOLLAR,
  [8973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
  [8980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_create_function_statement_token4,
  [8987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_identifier,
  [8994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LPAREN,
  [9001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym_identifier,
  [9008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym_create_index_statement_token2,
  [9015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_table_constraint_foreign_key_token2,
  [9022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      aux_sym_from_clause_token1,
  [9029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_identifier,
  [9036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_RBRACK,
  [9043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      aux_sym_function_body_token1,
  [9050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_identifier,
  [9057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_identifier,
  [9064] = 2,
    ACTIONS(768), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym_string_token2,
  [9071] = 2,
    ACTIONS(768), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_string_token1,
  [9078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym_in_expression_token2,
  [9085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 308,
  [SMALL_STATE(9)] = 352,
  [SMALL_STATE(10)] = 396,
  [SMALL_STATE(11)] = 440,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 602,
  [SMALL_STATE(15)] = 644,
  [SMALL_STATE(16)] = 686,
  [SMALL_STATE(17)] = 728,
  [SMALL_STATE(18)] = 770,
  [SMALL_STATE(19)] = 840,
  [SMALL_STATE(20)] = 884,
  [SMALL_STATE(21)] = 926,
  [SMALL_STATE(22)] = 968,
  [SMALL_STATE(23)] = 1036,
  [SMALL_STATE(24)] = 1080,
  [SMALL_STATE(25)] = 1122,
  [SMALL_STATE(26)] = 1163,
  [SMALL_STATE(27)] = 1204,
  [SMALL_STATE(28)] = 1245,
  [SMALL_STATE(29)] = 1290,
  [SMALL_STATE(30)] = 1331,
  [SMALL_STATE(31)] = 1384,
  [SMALL_STATE(32)] = 1425,
  [SMALL_STATE(33)] = 1466,
  [SMALL_STATE(34)] = 1507,
  [SMALL_STATE(35)] = 1548,
  [SMALL_STATE(36)] = 1589,
  [SMALL_STATE(37)] = 1630,
  [SMALL_STATE(38)] = 1671,
  [SMALL_STATE(39)] = 1712,
  [SMALL_STATE(40)] = 1753,
  [SMALL_STATE(41)] = 1794,
  [SMALL_STATE(42)] = 1837,
  [SMALL_STATE(43)] = 1890,
  [SMALL_STATE(44)] = 1931,
  [SMALL_STATE(45)] = 1976,
  [SMALL_STATE(46)] = 2039,
  [SMALL_STATE(47)] = 2078,
  [SMALL_STATE(48)] = 2141,
  [SMALL_STATE(49)] = 2177,
  [SMALL_STATE(50)] = 2225,
  [SMALL_STATE(51)] = 2261,
  [SMALL_STATE(52)] = 2297,
  [SMALL_STATE(53)] = 2333,
  [SMALL_STATE(54)] = 2369,
  [SMALL_STATE(55)] = 2421,
  [SMALL_STATE(56)] = 2479,
  [SMALL_STATE(57)] = 2515,
  [SMALL_STATE(58)] = 2551,
  [SMALL_STATE(59)] = 2599,
  [SMALL_STATE(60)] = 2635,
  [SMALL_STATE(61)] = 2673,
  [SMALL_STATE(62)] = 2723,
  [SMALL_STATE(63)] = 2759,
  [SMALL_STATE(64)] = 2795,
  [SMALL_STATE(65)] = 2831,
  [SMALL_STATE(66)] = 2889,
  [SMALL_STATE(67)] = 2925,
  [SMALL_STATE(68)] = 2965,
  [SMALL_STATE(69)] = 3001,
  [SMALL_STATE(70)] = 3037,
  [SMALL_STATE(71)] = 3094,
  [SMALL_STATE(72)] = 3151,
  [SMALL_STATE(73)] = 3208,
  [SMALL_STATE(74)] = 3265,
  [SMALL_STATE(75)] = 3322,
  [SMALL_STATE(76)] = 3379,
  [SMALL_STATE(77)] = 3436,
  [SMALL_STATE(78)] = 3490,
  [SMALL_STATE(79)] = 3544,
  [SMALL_STATE(80)] = 3598,
  [SMALL_STATE(81)] = 3652,
  [SMALL_STATE(82)] = 3706,
  [SMALL_STATE(83)] = 3760,
  [SMALL_STATE(84)] = 3814,
  [SMALL_STATE(85)] = 3868,
  [SMALL_STATE(86)] = 3922,
  [SMALL_STATE(87)] = 3976,
  [SMALL_STATE(88)] = 4030,
  [SMALL_STATE(89)] = 4084,
  [SMALL_STATE(90)] = 4138,
  [SMALL_STATE(91)] = 4192,
  [SMALL_STATE(92)] = 4246,
  [SMALL_STATE(93)] = 4300,
  [SMALL_STATE(94)] = 4354,
  [SMALL_STATE(95)] = 4408,
  [SMALL_STATE(96)] = 4462,
  [SMALL_STATE(97)] = 4516,
  [SMALL_STATE(98)] = 4570,
  [SMALL_STATE(99)] = 4624,
  [SMALL_STATE(100)] = 4675,
  [SMALL_STATE(101)] = 4721,
  [SMALL_STATE(102)] = 4771,
  [SMALL_STATE(103)] = 4817,
  [SMALL_STATE(104)] = 4862,
  [SMALL_STATE(105)] = 4890,
  [SMALL_STATE(106)] = 4918,
  [SMALL_STATE(107)] = 4961,
  [SMALL_STATE(108)] = 5009,
  [SMALL_STATE(109)] = 5054,
  [SMALL_STATE(110)] = 5099,
  [SMALL_STATE(111)] = 5140,
  [SMALL_STATE(112)] = 5186,
  [SMALL_STATE(113)] = 5227,
  [SMALL_STATE(114)] = 5266,
  [SMALL_STATE(115)] = 5302,
  [SMALL_STATE(116)] = 5344,
  [SMALL_STATE(117)] = 5386,
  [SMALL_STATE(118)] = 5428,
  [SMALL_STATE(119)] = 5470,
  [SMALL_STATE(120)] = 5506,
  [SMALL_STATE(121)] = 5538,
  [SMALL_STATE(122)] = 5570,
  [SMALL_STATE(123)] = 5612,
  [SMALL_STATE(124)] = 5637,
  [SMALL_STATE(125)] = 5662,
  [SMALL_STATE(126)] = 5691,
  [SMALL_STATE(127)] = 5724,
  [SMALL_STATE(128)] = 5753,
  [SMALL_STATE(129)] = 5782,
  [SMALL_STATE(130)] = 5819,
  [SMALL_STATE(131)] = 5856,
  [SMALL_STATE(132)] = 5893,
  [SMALL_STATE(133)] = 5922,
  [SMALL_STATE(134)] = 5947,
  [SMALL_STATE(135)] = 5976,
  [SMALL_STATE(136)] = 6000,
  [SMALL_STATE(137)] = 6028,
  [SMALL_STATE(138)] = 6060,
  [SMALL_STATE(139)] = 6084,
  [SMALL_STATE(140)] = 6120,
  [SMALL_STATE(141)] = 6140,
  [SMALL_STATE(142)] = 6160,
  [SMALL_STATE(143)] = 6180,
  [SMALL_STATE(144)] = 6216,
  [SMALL_STATE(145)] = 6241,
  [SMALL_STATE(146)] = 6260,
  [SMALL_STATE(147)] = 6287,
  [SMALL_STATE(148)] = 6314,
  [SMALL_STATE(149)] = 6339,
  [SMALL_STATE(150)] = 6368,
  [SMALL_STATE(151)] = 6397,
  [SMALL_STATE(152)] = 6419,
  [SMALL_STATE(153)] = 6441,
  [SMALL_STATE(154)] = 6463,
  [SMALL_STATE(155)] = 6480,
  [SMALL_STATE(156)] = 6497,
  [SMALL_STATE(157)] = 6514,
  [SMALL_STATE(158)] = 6531,
  [SMALL_STATE(159)] = 6552,
  [SMALL_STATE(160)] = 6579,
  [SMALL_STATE(161)] = 6596,
  [SMALL_STATE(162)] = 6613,
  [SMALL_STATE(163)] = 6630,
  [SMALL_STATE(164)] = 6647,
  [SMALL_STATE(165)] = 6664,
  [SMALL_STATE(166)] = 6685,
  [SMALL_STATE(167)] = 6704,
  [SMALL_STATE(168)] = 6725,
  [SMALL_STATE(169)] = 6750,
  [SMALL_STATE(170)] = 6771,
  [SMALL_STATE(171)] = 6798,
  [SMALL_STATE(172)] = 6819,
  [SMALL_STATE(173)] = 6835,
  [SMALL_STATE(174)] = 6851,
  [SMALL_STATE(175)] = 6867,
  [SMALL_STATE(176)] = 6883,
  [SMALL_STATE(177)] = 6899,
  [SMALL_STATE(178)] = 6915,
  [SMALL_STATE(179)] = 6931,
  [SMALL_STATE(180)] = 6946,
  [SMALL_STATE(181)] = 6961,
  [SMALL_STATE(182)] = 6980,
  [SMALL_STATE(183)] = 6995,
  [SMALL_STATE(184)] = 7014,
  [SMALL_STATE(185)] = 7039,
  [SMALL_STATE(186)] = 7064,
  [SMALL_STATE(187)] = 7083,
  [SMALL_STATE(188)] = 7098,
  [SMALL_STATE(189)] = 7113,
  [SMALL_STATE(190)] = 7133,
  [SMALL_STATE(191)] = 7157,
  [SMALL_STATE(192)] = 7175,
  [SMALL_STATE(193)] = 7189,
  [SMALL_STATE(194)] = 7207,
  [SMALL_STATE(195)] = 7225,
  [SMALL_STATE(196)] = 7251,
  [SMALL_STATE(197)] = 7273,
  [SMALL_STATE(198)] = 7293,
  [SMALL_STATE(199)] = 7315,
  [SMALL_STATE(200)] = 7341,
  [SMALL_STATE(201)] = 7359,
  [SMALL_STATE(202)] = 7387,
  [SMALL_STATE(203)] = 7405,
  [SMALL_STATE(204)] = 7420,
  [SMALL_STATE(205)] = 7433,
  [SMALL_STATE(206)] = 7446,
  [SMALL_STATE(207)] = 7459,
  [SMALL_STATE(208)] = 7471,
  [SMALL_STATE(209)] = 7489,
  [SMALL_STATE(210)] = 7507,
  [SMALL_STATE(211)] = 7519,
  [SMALL_STATE(212)] = 7531,
  [SMALL_STATE(213)] = 7543,
  [SMALL_STATE(214)] = 7555,
  [SMALL_STATE(215)] = 7567,
  [SMALL_STATE(216)] = 7579,
  [SMALL_STATE(217)] = 7591,
  [SMALL_STATE(218)] = 7603,
  [SMALL_STATE(219)] = 7615,
  [SMALL_STATE(220)] = 7627,
  [SMALL_STATE(221)] = 7639,
  [SMALL_STATE(222)] = 7653,
  [SMALL_STATE(223)] = 7665,
  [SMALL_STATE(224)] = 7680,
  [SMALL_STATE(225)] = 7691,
  [SMALL_STATE(226)] = 7705,
  [SMALL_STATE(227)] = 7717,
  [SMALL_STATE(228)] = 7729,
  [SMALL_STATE(229)] = 7741,
  [SMALL_STATE(230)] = 7757,
  [SMALL_STATE(231)] = 7769,
  [SMALL_STATE(232)] = 7781,
  [SMALL_STATE(233)] = 7797,
  [SMALL_STATE(234)] = 7811,
  [SMALL_STATE(235)] = 7824,
  [SMALL_STATE(236)] = 7837,
  [SMALL_STATE(237)] = 7850,
  [SMALL_STATE(238)] = 7863,
  [SMALL_STATE(239)] = 7874,
  [SMALL_STATE(240)] = 7887,
  [SMALL_STATE(241)] = 7900,
  [SMALL_STATE(242)] = 7913,
  [SMALL_STATE(243)] = 7926,
  [SMALL_STATE(244)] = 7939,
  [SMALL_STATE(245)] = 7952,
  [SMALL_STATE(246)] = 7963,
  [SMALL_STATE(247)] = 7976,
  [SMALL_STATE(248)] = 7989,
  [SMALL_STATE(249)] = 8002,
  [SMALL_STATE(250)] = 8015,
  [SMALL_STATE(251)] = 8028,
  [SMALL_STATE(252)] = 8041,
  [SMALL_STATE(253)] = 8054,
  [SMALL_STATE(254)] = 8067,
  [SMALL_STATE(255)] = 8080,
  [SMALL_STATE(256)] = 8093,
  [SMALL_STATE(257)] = 8106,
  [SMALL_STATE(258)] = 8119,
  [SMALL_STATE(259)] = 8132,
  [SMALL_STATE(260)] = 8145,
  [SMALL_STATE(261)] = 8158,
  [SMALL_STATE(262)] = 8171,
  [SMALL_STATE(263)] = 8184,
  [SMALL_STATE(264)] = 8197,
  [SMALL_STATE(265)] = 8210,
  [SMALL_STATE(266)] = 8223,
  [SMALL_STATE(267)] = 8234,
  [SMALL_STATE(268)] = 8247,
  [SMALL_STATE(269)] = 8257,
  [SMALL_STATE(270)] = 8267,
  [SMALL_STATE(271)] = 8275,
  [SMALL_STATE(272)] = 8285,
  [SMALL_STATE(273)] = 8295,
  [SMALL_STATE(274)] = 8303,
  [SMALL_STATE(275)] = 8311,
  [SMALL_STATE(276)] = 8321,
  [SMALL_STATE(277)] = 8329,
  [SMALL_STATE(278)] = 8339,
  [SMALL_STATE(279)] = 8349,
  [SMALL_STATE(280)] = 8359,
  [SMALL_STATE(281)] = 8369,
  [SMALL_STATE(282)] = 8379,
  [SMALL_STATE(283)] = 8389,
  [SMALL_STATE(284)] = 8399,
  [SMALL_STATE(285)] = 8407,
  [SMALL_STATE(286)] = 8417,
  [SMALL_STATE(287)] = 8425,
  [SMALL_STATE(288)] = 8435,
  [SMALL_STATE(289)] = 8443,
  [SMALL_STATE(290)] = 8451,
  [SMALL_STATE(291)] = 8461,
  [SMALL_STATE(292)] = 8471,
  [SMALL_STATE(293)] = 8479,
  [SMALL_STATE(294)] = 8487,
  [SMALL_STATE(295)] = 8497,
  [SMALL_STATE(296)] = 8507,
  [SMALL_STATE(297)] = 8515,
  [SMALL_STATE(298)] = 8523,
  [SMALL_STATE(299)] = 8533,
  [SMALL_STATE(300)] = 8543,
  [SMALL_STATE(301)] = 8553,
  [SMALL_STATE(302)] = 8563,
  [SMALL_STATE(303)] = 8573,
  [SMALL_STATE(304)] = 8583,
  [SMALL_STATE(305)] = 8593,
  [SMALL_STATE(306)] = 8603,
  [SMALL_STATE(307)] = 8613,
  [SMALL_STATE(308)] = 8623,
  [SMALL_STATE(309)] = 8630,
  [SMALL_STATE(310)] = 8637,
  [SMALL_STATE(311)] = 8644,
  [SMALL_STATE(312)] = 8651,
  [SMALL_STATE(313)] = 8658,
  [SMALL_STATE(314)] = 8665,
  [SMALL_STATE(315)] = 8672,
  [SMALL_STATE(316)] = 8679,
  [SMALL_STATE(317)] = 8686,
  [SMALL_STATE(318)] = 8693,
  [SMALL_STATE(319)] = 8700,
  [SMALL_STATE(320)] = 8707,
  [SMALL_STATE(321)] = 8714,
  [SMALL_STATE(322)] = 8721,
  [SMALL_STATE(323)] = 8728,
  [SMALL_STATE(324)] = 8735,
  [SMALL_STATE(325)] = 8742,
  [SMALL_STATE(326)] = 8749,
  [SMALL_STATE(327)] = 8756,
  [SMALL_STATE(328)] = 8763,
  [SMALL_STATE(329)] = 8770,
  [SMALL_STATE(330)] = 8777,
  [SMALL_STATE(331)] = 8784,
  [SMALL_STATE(332)] = 8791,
  [SMALL_STATE(333)] = 8798,
  [SMALL_STATE(334)] = 8805,
  [SMALL_STATE(335)] = 8812,
  [SMALL_STATE(336)] = 8819,
  [SMALL_STATE(337)] = 8826,
  [SMALL_STATE(338)] = 8833,
  [SMALL_STATE(339)] = 8840,
  [SMALL_STATE(340)] = 8847,
  [SMALL_STATE(341)] = 8854,
  [SMALL_STATE(342)] = 8861,
  [SMALL_STATE(343)] = 8868,
  [SMALL_STATE(344)] = 8875,
  [SMALL_STATE(345)] = 8882,
  [SMALL_STATE(346)] = 8889,
  [SMALL_STATE(347)] = 8896,
  [SMALL_STATE(348)] = 8903,
  [SMALL_STATE(349)] = 8910,
  [SMALL_STATE(350)] = 8917,
  [SMALL_STATE(351)] = 8924,
  [SMALL_STATE(352)] = 8931,
  [SMALL_STATE(353)] = 8938,
  [SMALL_STATE(354)] = 8945,
  [SMALL_STATE(355)] = 8952,
  [SMALL_STATE(356)] = 8959,
  [SMALL_STATE(357)] = 8966,
  [SMALL_STATE(358)] = 8973,
  [SMALL_STATE(359)] = 8980,
  [SMALL_STATE(360)] = 8987,
  [SMALL_STATE(361)] = 8994,
  [SMALL_STATE(362)] = 9001,
  [SMALL_STATE(363)] = 9008,
  [SMALL_STATE(364)] = 9015,
  [SMALL_STATE(365)] = 9022,
  [SMALL_STATE(366)] = 9029,
  [SMALL_STATE(367)] = 9036,
  [SMALL_STATE(368)] = 9043,
  [SMALL_STATE(369)] = 9050,
  [SMALL_STATE(370)] = 9057,
  [SMALL_STATE(371)] = 9064,
  [SMALL_STATE(372)] = 9071,
  [SMALL_STATE(373)] = 9078,
  [SMALL_STATE(374)] = 9085,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 1, .production_id = 6),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_alias, 1, .production_id = 6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NULL, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NULL, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_clause, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_cast, 3, .production_id = 7),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_cast, 3, .production_id = 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 15),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 15),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FALSE, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FALSE, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, .production_id = 22),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, .production_id = 22),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 8),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_subexpression, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_subexpression, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_from, 3, .production_id = 17),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_reference, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_reference, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 16),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 16),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRUE, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRUE, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliasable_expression, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_constraint, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_constraint, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 2, .production_id = 14),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_column_parameter, 3, .production_id = 14),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(366),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(190),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(96),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(156),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(364),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(291),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(362),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_column_parameter_repeat1, 2), SHIFT_REPEAT(4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(370),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setof, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_function_return_type, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_body_repeat1, 2), SHIFT_REPEAT(65),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 6, .production_id = 12),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(162),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(318),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_statement_repeat1, 2), SHIFT_REPEAT(275),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 18),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_check, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 3, .production_id = 19),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 4, .production_id = 23),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 7, .production_id = 12),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause_body, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_statement, 8, .production_id = 18),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 5, .production_id = 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constrained_type, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliased_expression, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 6),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 6, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(96),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(291),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_domain_statement_repeat1, 2), SHIFT_REPEAT(4),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(97),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause_body, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_default, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_action, 2, .production_id = 29),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_language, 2, .production_id = 24),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_update_action, 3, .production_id = 27),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_optimizer_hint, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_delete_action, 3, .production_id = 28),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause_body, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_body_repeat1, 2), SHIFT_REPEAT(89),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 7),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_constraint, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_constraint, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_constraint, 8),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause_body, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_clause_body_repeat1, 2), SHIFT_REPEAT(300),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 9),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 13),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 7, .production_id = 21),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameter, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 21),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 6, .production_id = 13),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_domain_statement, 3, .production_id = 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_clause, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_table_parameters, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 9, .production_id = 21),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index_statement, 8, .production_id = 13),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 4, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_parameters, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_type_statement, 5, .production_id = 10),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(305),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2), SHIFT_REPEAT(170),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_parameters_repeat1, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_clause_body, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2), SHIFT_REPEAT(209),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_function_parameters_repeat1, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2), SHIFT_REPEAT(360),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_constraint_foreign_key_repeat1, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_table_parameters_repeat1, 2), SHIFT_REPEAT(70),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 5),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 5),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 6, .production_id = 26),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_primary_key, 6),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_unique, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_expression, 2, .production_id = 25),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_constraint_foreign_key, 7, .production_id = 26),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, .production_id = 20),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [802] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_function_parameters, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
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
