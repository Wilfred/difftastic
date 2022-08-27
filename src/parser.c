#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 265
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

enum {
  sym_identifier = 1,
  aux_sym_const_section_token1 = 2,
  aux_sym_var_section_token1 = 3,
  aux_sym_let_section_token1 = 4,
  aux_sym_type_section_token1 = 5,
  anon_sym_COMMA = 6,
  anon_sym_COLON = 7,
  anon_sym_EQ = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  aux_sym_tuple_type_token1 = 11,
  aux_sym_object_type_token1 = 12,
  anon_sym_LBRACK = 13,
  aux_sym_field_declaration_list_token1 = 14,
  anon_sym_RBRACK = 15,
  anon_sym_STAR = 16,
  aux_sym_distinct_type_token1 = 17,
  aux_sym_ref_type_token1 = 18,
  anon_sym_LPAREN2 = 19,
  aux_sym_boolean_literal_token1 = 20,
  aux_sym_boolean_literal_token2 = 21,
  aux_sym_boolean_literal_token3 = 22,
  aux_sym_boolean_literal_token4 = 23,
  sym_integer_literal = 24,
  sym_float_literal = 25,
  aux_sym__long_string_literal_token1 = 26,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 27,
  anon_sym_r_DQUOTE = 28,
  aux_sym__raw_string_literal_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym__interpreted_string_literal_token1 = 31,
  sym_escape_sequence = 32,
  anon_sym_DQUOTE_DQUOTE = 33,
  sym_comment = 34,
  sym__indent_start = 35,
  sym__indent = 36,
  sym__indent_eq = 37,
  sym__dedent = 38,
  sym__long_string_content = 39,
  sym_source_file = 40,
  sym__statement = 41,
  sym_expression_statement = 42,
  sym__declaration = 43,
  sym_const_section = 44,
  sym_var_section = 45,
  sym_let_section = 46,
  sym_type_section = 47,
  sym_variable_declaration = 48,
  sym__variable_name_declaration = 49,
  sym_tuple_deconstruct_declaration = 50,
  sym_type_declaration = 51,
  sym__type = 52,
  sym_tuple_type = 53,
  sym_object_type = 54,
  sym_field_declaration_list = 55,
  sym_field_declaration = 56,
  sym__symbol_declaration = 57,
  sym_exported_symbol = 58,
  sym_distinct_type = 59,
  sym_ref_type = 60,
  sym_expression = 61,
  sym_call_expression = 62,
  sym_argument_list = 63,
  sym__literal = 64,
  sym_boolean_literal = 65,
  sym_string_literal = 66,
  sym__long_string_literal = 67,
  sym__raw_string_literal = 68,
  sym__interpreted_string_literal = 69,
  sym__escaped_double_quote = 70,
  sym_tuple = 71,
  sym__type_identifier = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_const_section_repeat1 = 74,
  aux_sym_type_section_repeat1 = 75,
  aux_sym_variable_declaration_repeat1 = 76,
  aux_sym_tuple_deconstruct_declaration_repeat1 = 77,
  aux_sym_field_declaration_list_repeat1 = 78,
  aux_sym_field_declaration_list_repeat2 = 79,
  aux_sym_field_declaration_repeat1 = 80,
  aux_sym_argument_list_repeat1 = 81,
  aux_sym__long_string_literal_repeat1 = 82,
  aux_sym__raw_string_literal_repeat1 = 83,
  aux_sym__interpreted_string_literal_repeat1 = 84,
  alias_sym_type_identifier = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_const_section_token1] = "const_section_token1",
  [aux_sym_var_section_token1] = "var_section_token1",
  [aux_sym_let_section_token1] = "let_section_token1",
  [aux_sym_type_section_token1] = "type_section_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_tuple_type_token1] = "tuple_type_token1",
  [aux_sym_object_type_token1] = "object_type_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_field_declaration_list_token1] = "field_declaration_list_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [aux_sym_distinct_type_token1] = "distinct_type_token1",
  [aux_sym_ref_type_token1] = "ref_type_token1",
  [anon_sym_LPAREN2] = "(",
  [aux_sym_boolean_literal_token1] = "boolean_literal_token1",
  [aux_sym_boolean_literal_token2] = "boolean_literal_token2",
  [aux_sym_boolean_literal_token3] = "boolean_literal_token3",
  [aux_sym_boolean_literal_token4] = "boolean_literal_token4",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [aux_sym__long_string_literal_token1] = "_long_string_literal_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_r_DQUOTE] = "r\"",
  [aux_sym__raw_string_literal_token1] = "_raw_string_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__interpreted_string_literal_token1] = "_interpreted_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE_DQUOTE] = "escape_sequence",
  [sym_comment] = "comment",
  [sym__indent_start] = "_indent_start",
  [sym__indent] = "_indent",
  [sym__indent_eq] = "_indent_eq",
  [sym__dedent] = "_dedent",
  [sym__long_string_content] = "_long_string_content",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__declaration] = "_declaration",
  [sym_const_section] = "const_section",
  [sym_var_section] = "var_section",
  [sym_let_section] = "let_section",
  [sym_type_section] = "type_section",
  [sym_variable_declaration] = "variable_declaration",
  [sym__variable_name_declaration] = "_variable_name_declaration",
  [sym_tuple_deconstruct_declaration] = "tuple_deconstruct_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym__type] = "_type",
  [sym_tuple_type] = "tuple_type",
  [sym_object_type] = "object_type",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [sym__symbol_declaration] = "_symbol_declaration",
  [sym_exported_symbol] = "exported_symbol",
  [sym_distinct_type] = "distinct_type",
  [sym_ref_type] = "ref_type",
  [sym_expression] = "expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym__long_string_literal] = "_long_string_literal",
  [sym__raw_string_literal] = "_raw_string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym__escaped_double_quote] = "_escaped_double_quote",
  [sym_tuple] = "tuple",
  [sym__type_identifier] = "_type_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_const_section_repeat1] = "const_section_repeat1",
  [aux_sym_type_section_repeat1] = "type_section_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym_tuple_deconstruct_declaration_repeat1] = "tuple_deconstruct_declaration_repeat1",
  [aux_sym_field_declaration_list_repeat1] = "field_declaration_list_repeat1",
  [aux_sym_field_declaration_list_repeat2] = "field_declaration_list_repeat2",
  [aux_sym_field_declaration_repeat1] = "field_declaration_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym__long_string_literal_repeat1] = "_long_string_literal_repeat1",
  [aux_sym__raw_string_literal_repeat1] = "_raw_string_literal_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_const_section_token1] = aux_sym_const_section_token1,
  [aux_sym_var_section_token1] = aux_sym_var_section_token1,
  [aux_sym_let_section_token1] = aux_sym_let_section_token1,
  [aux_sym_type_section_token1] = aux_sym_type_section_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_tuple_type_token1] = aux_sym_tuple_type_token1,
  [aux_sym_object_type_token1] = aux_sym_object_type_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_field_declaration_list_token1] = aux_sym_field_declaration_list_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_distinct_type_token1] = aux_sym_distinct_type_token1,
  [aux_sym_ref_type_token1] = aux_sym_ref_type_token1,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [aux_sym_boolean_literal_token1] = aux_sym_boolean_literal_token1,
  [aux_sym_boolean_literal_token2] = aux_sym_boolean_literal_token2,
  [aux_sym_boolean_literal_token3] = aux_sym_boolean_literal_token3,
  [aux_sym_boolean_literal_token4] = aux_sym_boolean_literal_token4,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [aux_sym__long_string_literal_token1] = aux_sym__long_string_literal_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_r_DQUOTE] = anon_sym_r_DQUOTE,
  [aux_sym__raw_string_literal_token1] = aux_sym__raw_string_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__interpreted_string_literal_token1] = aux_sym__interpreted_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE_DQUOTE] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym__indent_start] = sym__indent_start,
  [sym__indent] = sym__indent,
  [sym__indent_eq] = sym__indent_eq,
  [sym__dedent] = sym__dedent,
  [sym__long_string_content] = sym__long_string_content,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__declaration] = sym__declaration,
  [sym_const_section] = sym_const_section,
  [sym_var_section] = sym_var_section,
  [sym_let_section] = sym_let_section,
  [sym_type_section] = sym_type_section,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__variable_name_declaration] = sym__variable_name_declaration,
  [sym_tuple_deconstruct_declaration] = sym_tuple_deconstruct_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym__type] = sym__type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_object_type] = sym_object_type,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [sym__symbol_declaration] = sym__symbol_declaration,
  [sym_exported_symbol] = sym_exported_symbol,
  [sym_distinct_type] = sym_distinct_type,
  [sym_ref_type] = sym_ref_type,
  [sym_expression] = sym_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__long_string_literal] = sym__long_string_literal,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym__escaped_double_quote] = sym__escaped_double_quote,
  [sym_tuple] = sym_tuple,
  [sym__type_identifier] = sym__type_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_const_section_repeat1] = aux_sym_const_section_repeat1,
  [aux_sym_type_section_repeat1] = aux_sym_type_section_repeat1,
  [aux_sym_variable_declaration_repeat1] = aux_sym_variable_declaration_repeat1,
  [aux_sym_tuple_deconstruct_declaration_repeat1] = aux_sym_tuple_deconstruct_declaration_repeat1,
  [aux_sym_field_declaration_list_repeat1] = aux_sym_field_declaration_list_repeat1,
  [aux_sym_field_declaration_list_repeat2] = aux_sym_field_declaration_list_repeat2,
  [aux_sym_field_declaration_repeat1] = aux_sym_field_declaration_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym__long_string_literal_repeat1] = aux_sym__long_string_literal_repeat1,
  [aux_sym__raw_string_literal_repeat1] = aux_sym__raw_string_literal_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_const_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_section_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tuple_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_declaration_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_distinct_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ref_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__long_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__raw_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__indent_start] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__indent_eq] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__long_string_content] = {
    .visible = false,
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
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_const_section] = {
    .visible = true,
    .named = true,
  },
  [sym_var_section] = {
    .visible = true,
    .named = true,
  },
  [sym_let_section] = {
    .visible = true,
    .named = true,
  },
  [sym_type_section] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_name_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple_deconstruct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_exported_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_distinct_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_type] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__long_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__raw_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__interpreted_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__escaped_double_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_deconstruct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__long_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arguments = 1,
  field_function = 2,
  field_name = 3,
  field_type = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function] = "function",
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 3},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0, .inherited = true},
  [2] =
    {field_arguments, 1},
    {field_function, 0},
  [4] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [6] =
    {field_name, 1},
  [7] =
    {field_name, 1, .inherited = true},
  [8] =
    {field_name, 0, .inherited = true},
    {field_type, 2},
  [10] =
    {field_name, 0, .inherited = true},
    {field_value, 2},
  [12] =
    {field_name, 0},
    {field_type, 2},
  [14] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [16] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 3},
  [19] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 3},
  [22] =
    {field_name, 0, .inherited = true},
    {field_type, 2},
    {field_value, 4},
  [25] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 3},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'l'
    ? (c < 'a'
      ? (c < '\''
        ? c == '"'
        : (c <= '\'' || c == '\\'))
      : (c <= 'a' || (c < 'e'
        ? c == 'c'
        : c <= 'f')))
    : (c <= 'l' || (c < 'r'
      ? (c < 'p'
        ? c == 'n'
        : c <= 'p')
      : (c <= 'r' || (c < 'v'
        ? c == 't'
        : c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == '8') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == '{') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ',') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ',') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 27:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(77);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(82);
      END_STATE();
    case 34:
      if (eof) ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(82);
      END_STATE();
    case 35:
      if (eof) ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(82);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(45);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_field_declaration_list_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '3') ADVANCE(53);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '2') ADVANCE(59);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '2') ADVANCE(56);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '4') ADVANCE(59);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '8') ADVANCE(59);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(49);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_r_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__interpreted_string_literal_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      if (lookahead == '"') ADVANCE(65);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(25);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(25);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_let_section_token1);
      END_STATE();
    case 37:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      END_STATE();
    case 41:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_ref_type_token1);
      END_STATE();
    case 43:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_var_section_token1);
      END_STATE();
    case 51:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token3);
      END_STATE();
    case 61:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_type_section_token1);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_const_section_token1);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token4);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_tuple_type_token1);
      END_STATE();
    case 75:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_object_type_token1);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_distinct_type_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 35, .external_lex_state = 3},
  [36] = {.lex_state = 35, .external_lex_state = 4},
  [37] = {.lex_state = 35, .external_lex_state = 5},
  [38] = {.lex_state = 35, .external_lex_state = 3},
  [39] = {.lex_state = 35, .external_lex_state = 4},
  [40] = {.lex_state = 0, .external_lex_state = 6},
  [41] = {.lex_state = 35, .external_lex_state = 5},
  [42] = {.lex_state = 35, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 7},
  [44] = {.lex_state = 35, .external_lex_state = 3},
  [45] = {.lex_state = 35, .external_lex_state = 4},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 35, .external_lex_state = 5},
  [48] = {.lex_state = 35, .external_lex_state = 4},
  [49] = {.lex_state = 35, .external_lex_state = 5},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35, .external_lex_state = 4},
  [52] = {.lex_state = 37, .external_lex_state = 3},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 35, .external_lex_state = 5},
  [56] = {.lex_state = 35, .external_lex_state = 5},
  [57] = {.lex_state = 35, .external_lex_state = 4},
  [58] = {.lex_state = 35, .external_lex_state = 4},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 37, .external_lex_state = 4},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 37, .external_lex_state = 5},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 0, .external_lex_state = 5},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 0, .external_lex_state = 5},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 0, .external_lex_state = 5},
  [99] = {.lex_state = 0, .external_lex_state = 5},
  [100] = {.lex_state = 0, .external_lex_state = 5},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 0, .external_lex_state = 5},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 20, .external_lex_state = 8},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 0, .external_lex_state = 4},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 20, .external_lex_state = 8},
  [115] = {.lex_state = 0, .external_lex_state = 5},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 35},
  [118] = {.lex_state = 0, .external_lex_state = 5},
  [119] = {.lex_state = 35},
  [120] = {.lex_state = 37},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 20, .external_lex_state = 8},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 35},
  [130] = {.lex_state = 20, .external_lex_state = 8},
  [131] = {.lex_state = 37},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 35},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 5},
  [136] = {.lex_state = 20, .external_lex_state = 8},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 5},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 20, .external_lex_state = 8},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 0, .external_lex_state = 5},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 37},
  [154] = {.lex_state = 0, .external_lex_state = 5},
  [155] = {.lex_state = 37},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 0, .external_lex_state = 5},
  [159] = {.lex_state = 0, .external_lex_state = 5},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 35},
  [162] = {.lex_state = 0, .external_lex_state = 5},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 5},
  [165] = {.lex_state = 0, .external_lex_state = 5},
  [166] = {.lex_state = 20, .external_lex_state = 8},
  [167] = {.lex_state = 0, .external_lex_state = 4},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 35},
  [170] = {.lex_state = 0, .external_lex_state = 5},
  [171] = {.lex_state = 35},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 35},
  [174] = {.lex_state = 35},
  [175] = {.lex_state = 35},
  [176] = {.lex_state = 35},
  [177] = {.lex_state = 35},
  [178] = {.lex_state = 0, .external_lex_state = 5},
  [179] = {.lex_state = 0, .external_lex_state = 5},
  [180] = {.lex_state = 35},
  [181] = {.lex_state = 0, .external_lex_state = 5},
  [182] = {.lex_state = 35},
  [183] = {.lex_state = 0, .external_lex_state = 5},
  [184] = {.lex_state = 35},
  [185] = {.lex_state = 35},
  [186] = {.lex_state = 0, .external_lex_state = 5},
  [187] = {.lex_state = 35},
  [188] = {.lex_state = 37},
  [189] = {.lex_state = 37},
  [190] = {.lex_state = 0, .external_lex_state = 5},
  [191] = {.lex_state = 0, .external_lex_state = 5},
  [192] = {.lex_state = 0, .external_lex_state = 5},
  [193] = {.lex_state = 0, .external_lex_state = 5},
  [194] = {.lex_state = 0, .external_lex_state = 5},
  [195] = {.lex_state = 0, .external_lex_state = 5},
  [196] = {.lex_state = 0, .external_lex_state = 5},
  [197] = {.lex_state = 0, .external_lex_state = 5},
  [198] = {.lex_state = 0, .external_lex_state = 5},
  [199] = {.lex_state = 0, .external_lex_state = 5},
  [200] = {.lex_state = 0, .external_lex_state = 5},
  [201] = {.lex_state = 37},
  [202] = {.lex_state = 0, .external_lex_state = 5},
  [203] = {.lex_state = 35},
  [204] = {.lex_state = 37},
  [205] = {.lex_state = 0, .external_lex_state = 5},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 0, .external_lex_state = 5},
  [208] = {.lex_state = 37},
  [209] = {.lex_state = 37},
  [210] = {.lex_state = 37},
  [211] = {.lex_state = 37},
  [212] = {.lex_state = 0, .external_lex_state = 5},
  [213] = {.lex_state = 37},
  [214] = {.lex_state = 37},
  [215] = {.lex_state = 0, .external_lex_state = 4},
  [216] = {.lex_state = 35},
  [217] = {.lex_state = 35},
  [218] = {.lex_state = 0, .external_lex_state = 4},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 0, .external_lex_state = 5},
  [221] = {.lex_state = 0, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 0, .external_lex_state = 4},
  [224] = {.lex_state = 35},
  [225] = {.lex_state = 0, .external_lex_state = 4},
  [226] = {.lex_state = 0, .external_lex_state = 5},
  [227] = {.lex_state = 0, .external_lex_state = 4},
  [228] = {.lex_state = 0, .external_lex_state = 4},
  [229] = {.lex_state = 37},
  [230] = {.lex_state = 0, .external_lex_state = 4},
  [231] = {.lex_state = 35},
  [232] = {.lex_state = 0, .external_lex_state = 4},
  [233] = {.lex_state = 0, .external_lex_state = 4},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0, .external_lex_state = 4},
  [236] = {.lex_state = 0, .external_lex_state = 4},
  [237] = {.lex_state = 0, .external_lex_state = 4},
  [238] = {.lex_state = 0, .external_lex_state = 4},
  [239] = {.lex_state = 0, .external_lex_state = 4},
  [240] = {.lex_state = 0, .external_lex_state = 4},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 0, .external_lex_state = 4},
  [243] = {.lex_state = 0, .external_lex_state = 4},
  [244] = {.lex_state = 0, .external_lex_state = 4},
  [245] = {.lex_state = 0, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 4},
  [247] = {.lex_state = 0, .external_lex_state = 4},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 0, .external_lex_state = 4},
  [250] = {.lex_state = 0, .external_lex_state = 4},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0, .external_lex_state = 4},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 0, .external_lex_state = 4},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 68},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 68},
  [261] = {.lex_state = 68},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 68},
  [264] = {.lex_state = 0},
};

enum {
  ts_external_token__indent_start = 0,
  ts_external_token__indent = 1,
  ts_external_token__indent_eq = 2,
  ts_external_token__dedent = 3,
  ts_external_token__long_string_content = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent_start] = sym__indent_start,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__indent_eq] = sym__indent_eq,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__long_string_content] = sym__long_string_content,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent_start] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__indent_eq] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__long_string_content] = true,
  },
  [2] = {
    [ts_external_token__indent_start] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__indent_eq] = true,
  },
  [5] = {
    [ts_external_token__indent_eq] = true,
    [ts_external_token__dedent] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
    [ts_external_token__indent_eq] = true,
    [ts_external_token__dedent] = true,
  },
  [7] = {
    [ts_external_token__indent] = true,
    [ts_external_token__indent_eq] = true,
  },
  [8] = {
    [ts_external_token__long_string_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_const_section_token1] = ACTIONS(1),
    [aux_sym_var_section_token1] = ACTIONS(1),
    [aux_sym_let_section_token1] = ACTIONS(1),
    [aux_sym_type_section_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_tuple_type_token1] = ACTIONS(1),
    [aux_sym_object_type_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_field_declaration_list_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_distinct_type_token1] = ACTIONS(1),
    [aux_sym_ref_type_token1] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [aux_sym_boolean_literal_token1] = ACTIONS(1),
    [aux_sym_boolean_literal_token2] = ACTIONS(1),
    [aux_sym_boolean_literal_token3] = ACTIONS(1),
    [aux_sym_boolean_literal_token4] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [aux_sym__long_string_literal_token1] = ACTIONS(1),
    [anon_sym_r_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__indent_start] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_eq] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__long_string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(264),
    [sym_comment] = ACTIONS(3),
    [sym__indent_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      aux_sym_const_section_token1,
    ACTIONS(13), 1,
      aux_sym_var_section_token1,
    ACTIONS(15), 1,
      aux_sym_let_section_token1,
    ACTIONS(17), 1,
      aux_sym_type_section_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(27), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(250), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(21), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(242), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
    STATE(163), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [68] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      aux_sym_const_section_token1,
    ACTIONS(13), 1,
      aux_sym_var_section_token1,
    ACTIONS(15), 1,
      aux_sym_let_section_token1,
    ACTIONS(17), 1,
      aux_sym_type_section_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(27), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(250), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(21), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(242), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
    STATE(240), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [133] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(177), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(35), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [177] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(55), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(193), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(49), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(192), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [221] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(27), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(250), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(21), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(242), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [265] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(231), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(177), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(35), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [309] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(177), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(35), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [353] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(55), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(193), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(49), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(192), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [397] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(177), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(35), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [441] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(177), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(35), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [485] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(177), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(35), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [529] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(27), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(223), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(250), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(21), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(242), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [573] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(27), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(250), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(21), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(242), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [617] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(177), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(35), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [661] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(55), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(193), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(49), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(192), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [705] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(55), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(193), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(49), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(192), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [749] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(27), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(250), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(21), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(242), 5,
      sym_call_expression,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [793] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(63), 1,
      aux_sym_object_type_token1,
    ACTIONS(65), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(67), 1,
      aux_sym_ref_type_token1,
    STATE(210), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(73), 1,
      aux_sym_object_type_token1,
    ACTIONS(75), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(77), 1,
      aux_sym_ref_type_token1,
    STATE(107), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [847] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(73), 1,
      aux_sym_object_type_token1,
    ACTIONS(75), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(77), 1,
      aux_sym_ref_type_token1,
    STATE(106), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [874] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(83), 1,
      aux_sym_object_type_token1,
    ACTIONS(85), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(87), 1,
      aux_sym_ref_type_token1,
    STATE(159), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(73), 1,
      aux_sym_object_type_token1,
    ACTIONS(75), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(77), 1,
      aux_sym_ref_type_token1,
    STATE(232), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [928] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(83), 1,
      aux_sym_object_type_token1,
    ACTIONS(85), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(87), 1,
      aux_sym_ref_type_token1,
    STATE(170), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [955] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(83), 1,
      aux_sym_object_type_token1,
    ACTIONS(85), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(87), 1,
      aux_sym_ref_type_token1,
    STATE(178), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [982] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(83), 1,
      aux_sym_object_type_token1,
    ACTIONS(85), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(87), 1,
      aux_sym_ref_type_token1,
    STATE(179), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1009] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(73), 1,
      aux_sym_object_type_token1,
    ACTIONS(75), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(77), 1,
      aux_sym_ref_type_token1,
    STATE(109), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1036] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(63), 1,
      aux_sym_object_type_token1,
    ACTIONS(65), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(67), 1,
      aux_sym_ref_type_token1,
    STATE(189), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1063] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(83), 1,
      aux_sym_object_type_token1,
    ACTIONS(85), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(87), 1,
      aux_sym_ref_type_token1,
    STATE(160), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1090] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(73), 1,
      aux_sym_object_type_token1,
    ACTIONS(75), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(77), 1,
      aux_sym_ref_type_token1,
    STATE(110), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1117] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(83), 1,
      aux_sym_object_type_token1,
    ACTIONS(85), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(87), 1,
      aux_sym_ref_type_token1,
    STATE(162), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(83), 1,
      aux_sym_object_type_token1,
    ACTIONS(85), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(87), 1,
      aux_sym_ref_type_token1,
    STATE(152), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(63), 1,
      aux_sym_object_type_token1,
    ACTIONS(65), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(67), 1,
      aux_sym_ref_type_token1,
    STATE(188), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1198] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(63), 1,
      aux_sym_object_type_token1,
    ACTIONS(65), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(67), 1,
      aux_sym_ref_type_token1,
    STATE(211), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym__indent,
    STATE(253), 1,
      sym_variable_declaration,
    STATE(39), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(95), 4,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
  [1261] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(104), 1,
      anon_sym_EQ,
    STATE(41), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(106), 2,
      sym__indent_eq,
      sym__dedent,
  [1281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym__indent,
    STATE(252), 1,
      sym_variable_declaration,
    STATE(39), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(110), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      sym__indent,
    STATE(158), 1,
      sym_field_declaration_list,
    ACTIONS(118), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(95), 4,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COLON,
      anon_sym_EQ,
  [1355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_COLON,
    ACTIONS(129), 1,
      anon_sym_EQ,
    STATE(37), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(110), 2,
      sym__indent_eq,
      sym__dedent,
  [1375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      sym__indent,
    STATE(105), 1,
      sym_field_declaration_list,
    ACTIONS(118), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym__indent,
    STATE(254), 1,
      sym_variable_declaration,
    STATE(39), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_COLON,
    ACTIONS(139), 1,
      anon_sym_EQ,
    STATE(36), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(106), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__indent,
    STATE(209), 1,
      sym_field_declaration_list,
    ACTIONS(118), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1606] = 5,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(161), 1,
      sym_escape_sequence,
    ACTIONS(163), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1622] = 5,
    ACTIONS(159), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(161), 1,
      sym_escape_sequence,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(201), 1,
      sym_field_declaration,
    STATE(156), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(71), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(260), 1,
      sym__escaped_double_quote,
  [1668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(202), 1,
      sym_field_declaration,
    STATE(119), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(64), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(260), 1,
      sym__escaped_double_quote,
  [1698] = 5,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1714] = 5,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(188), 1,
      sym_escape_sequence,
    STATE(59), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN2,
    STATE(185), 1,
      sym_argument_list,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(260), 1,
      sym__escaped_double_quote,
  [1760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(260), 1,
      sym__escaped_double_quote,
  [1776] = 5,
    ACTIONS(159), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(161), 1,
      sym_escape_sequence,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(260), 1,
      sym__escaped_double_quote,
  [1808] = 5,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(207), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(88), 1,
      sym_field_declaration,
    STATE(119), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(260), 1,
      sym__escaped_double_quote,
  [1854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(87), 1,
      sym_field_declaration,
    STATE(156), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(120), 1,
      sym_field_declaration,
    STATE(156), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(47), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(57), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LPAREN2,
    STATE(246), 1,
      sym_argument_list,
    ACTIONS(190), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1924] = 5,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(218), 1,
      sym_escape_sequence,
    STATE(60), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(118), 1,
      sym_field_declaration,
    STATE(119), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(153), 1,
      sym_field_declaration,
    STATE(156), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(149), 1,
      sym_field_declaration,
    STATE(119), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LPAREN2,
    STATE(196), 1,
      sym_argument_list,
    ACTIONS(190), 2,
      sym__indent_eq,
      sym__dedent,
  [1996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(260), 1,
      sym__escaped_double_quote,
  [2012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__indent_eq,
    ACTIONS(226), 1,
      sym__dedent,
    STATE(122), 1,
      aux_sym_const_section_repeat1,
  [2025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_field_declaration_list_repeat1,
  [2038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__dedent,
    ACTIONS(232), 1,
      sym__indent_eq,
    STATE(99), 1,
      aux_sym_field_declaration_list_repeat2,
  [2051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      sym__indent,
    STATE(157), 1,
      sym_field_declaration_list,
  [2090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym__indent,
    STATE(249), 1,
      sym_type_declaration,
  [2116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_argument_list_repeat1,
  [2129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__indent_eq,
    ACTIONS(257), 1,
      sym__dedent,
    STATE(115), 1,
      aux_sym_type_section_repeat1,
  [2155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__indent_eq,
    ACTIONS(264), 1,
      sym__dedent,
    STATE(98), 1,
      aux_sym_const_section_repeat1,
  [2181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__indent_eq,
    ACTIONS(266), 1,
      sym__dedent,
    STATE(135), 1,
      aux_sym_field_declaration_list_repeat2,
  [2194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__indent_eq,
    ACTIONS(268), 1,
      sym__dedent,
    STATE(98), 1,
      aux_sym_const_section_repeat1,
  [2207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_field_declaration_list_repeat1,
  [2233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__indent_eq,
    ACTIONS(275), 1,
      sym__dedent,
    STATE(98), 1,
      aux_sym_const_section_repeat1,
  [2246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(287), 1,
      sym__long_string_content,
    STATE(130), 1,
      aux_sym__long_string_literal_repeat1,
  [2295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(289), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_EQ,
    ACTIONS(293), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      sym__indent,
    STATE(104), 1,
      sym_field_declaration_list,
  [2352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(303), 1,
      sym__long_string_content,
    STATE(136), 1,
      aux_sym__long_string_literal_repeat1,
  [2365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__indent_eq,
    ACTIONS(308), 1,
      sym__dedent,
    STATE(115), 1,
      aux_sym_type_section_repeat1,
  [2378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_argument_list_repeat1,
  [2391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__indent_eq,
    ACTIONS(316), 1,
      sym__dedent,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [2415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_COLON,
    STATE(129), 1,
      aux_sym_field_declaration_repeat1,
  [2428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      aux_sym_field_declaration_list_repeat1,
  [2441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__indent_eq,
    ACTIONS(324), 1,
      sym__dedent,
    STATE(98), 1,
      aux_sym_const_section_repeat1,
  [2467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(328), 1,
      sym__long_string_content,
    STATE(114), 1,
      aux_sym__long_string_literal_repeat1,
  [2480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
  [2493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__indent_eq,
    ACTIONS(334), 1,
      sym__dedent,
    STATE(135), 1,
      aux_sym_field_declaration_list_repeat2,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(203), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [2526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 1,
      sym__indent_eq,
    STATE(128), 1,
      aux_sym_source_file_repeat1,
  [2539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_COLON,
    STATE(138), 1,
      aux_sym_field_declaration_repeat1,
  [2552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__long_string_content,
    ACTIONS(343), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(136), 1,
      aux_sym__long_string_literal_repeat1,
  [2565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_field_declaration_list_repeat1,
  [2578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_argument_list_repeat1,
  [2591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__indent_eq,
    ACTIONS(354), 1,
      sym__dedent,
    STATE(135), 1,
      aux_sym_field_declaration_list_repeat2,
  [2626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(358), 1,
      sym__long_string_content,
    STATE(136), 1,
      aux_sym__long_string_literal_repeat1,
  [2639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_COLON,
    STATE(138), 1,
      aux_sym_field_declaration_repeat1,
  [2665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_field_declaration_list_repeat1,
  [2678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_argument_list_repeat1,
  [2691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__indent_eq,
    ACTIONS(375), 1,
      sym__dedent,
    STATE(96), 1,
      aux_sym_type_section_repeat1,
  [2704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__indent_eq,
    ACTIONS(377), 1,
      sym__dedent,
    STATE(100), 1,
      aux_sym_const_section_repeat1,
  [2717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__indent_eq,
    ACTIONS(379), 1,
      sym__dedent,
    STATE(103), 1,
      aux_sym_const_section_repeat1,
  [2730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 1,
      sym__indent_eq,
    STATE(128), 1,
      aux_sym_source_file_repeat1,
  [2756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__indent,
    STATE(208), 1,
      sym_field_declaration_list,
  [2769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__long_string_content,
    ACTIONS(389), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(136), 1,
      aux_sym__long_string_literal_repeat1,
  [2795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__indent_eq,
    ACTIONS(391), 1,
      sym__dedent,
    STATE(154), 1,
      aux_sym_field_declaration_list_repeat2,
  [2808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_argument_list_repeat1,
  [2821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_EQ,
    ACTIONS(293), 2,
      sym__indent_eq,
      sym__dedent,
  [2841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      aux_sym_field_declaration_list_repeat1,
  [2854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__indent_eq,
    ACTIONS(397), 1,
      sym__dedent,
    STATE(135), 1,
      aux_sym_field_declaration_list_repeat2,
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_field_declaration_list_repeat1,
  [2880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym_field_declaration_repeat1,
  [2893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_COLON,
    STATE(138), 1,
      aux_sym_field_declaration_repeat1,
  [2942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(289), 2,
      sym__indent_eq,
      sym__dedent,
  [2953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__indent_eq,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      aux_sym_source_file_repeat1,
  [2966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(409), 1,
      sym__long_string_content,
    STATE(148), 1,
      aux_sym__long_string_literal_repeat1,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      sym__indent_eq,
      sym__dedent,
  [3029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      sym__indent_eq,
      sym__dedent,
  [3093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym__indent_eq,
      sym__dedent,
  [3101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      sym__indent_eq,
      sym__dedent,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      sym__indent_eq,
      sym__dedent,
  [3133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      sym__indent_eq,
      sym__dedent,
  [3157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      sym__indent_eq,
      sym__dedent,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym__indent_eq,
      sym__dedent,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      sym__indent_eq,
      sym__dedent,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      sym__indent_eq,
      sym__dedent,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      sym__indent_eq,
      sym__dedent,
  [3221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      sym__indent_eq,
      sym__dedent,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      sym__indent_eq,
      sym__dedent,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      sym__indent_eq,
      sym__dedent,
  [3245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      sym__indent_eq,
      sym__dedent,
  [3253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      sym__indent_eq,
      sym__dedent,
  [3261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym__indent_eq,
      sym__dedent,
  [3269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      sym__indent_eq,
      sym__dedent,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      sym__indent_eq,
      sym__dedent,
  [3309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      sym__indent_eq,
      sym__dedent,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym__indent_eq,
      sym__dedent,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      sym__indent_eq,
      sym__dedent,
  [3365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      sym__indent_eq,
      sym__dedent,
  [3429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      sym__indent_eq,
      sym__dedent,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      anon_sym_DQUOTE_DQUOTE,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
    STATE(220), 1,
      sym_type_declaration,
  [3545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
    STATE(141), 1,
      sym_type_declaration,
  [3683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_EQ,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
  [3721] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym__raw_string_literal_token1,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_EQ,
  [3742] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym__raw_string_literal_token1,
  [3749] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym__raw_string_literal_token1,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_identifier,
  [3763] = 2,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym__raw_string_literal_token1,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 133,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 221,
  [SMALL_STATE(7)] = 265,
  [SMALL_STATE(8)] = 309,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 397,
  [SMALL_STATE(11)] = 441,
  [SMALL_STATE(12)] = 485,
  [SMALL_STATE(13)] = 529,
  [SMALL_STATE(14)] = 573,
  [SMALL_STATE(15)] = 617,
  [SMALL_STATE(16)] = 661,
  [SMALL_STATE(17)] = 705,
  [SMALL_STATE(18)] = 749,
  [SMALL_STATE(19)] = 793,
  [SMALL_STATE(20)] = 820,
  [SMALL_STATE(21)] = 847,
  [SMALL_STATE(22)] = 874,
  [SMALL_STATE(23)] = 901,
  [SMALL_STATE(24)] = 928,
  [SMALL_STATE(25)] = 955,
  [SMALL_STATE(26)] = 982,
  [SMALL_STATE(27)] = 1009,
  [SMALL_STATE(28)] = 1036,
  [SMALL_STATE(29)] = 1063,
  [SMALL_STATE(30)] = 1090,
  [SMALL_STATE(31)] = 1117,
  [SMALL_STATE(32)] = 1144,
  [SMALL_STATE(33)] = 1171,
  [SMALL_STATE(34)] = 1198,
  [SMALL_STATE(35)] = 1225,
  [SMALL_STATE(36)] = 1245,
  [SMALL_STATE(37)] = 1261,
  [SMALL_STATE(38)] = 1281,
  [SMALL_STATE(39)] = 1301,
  [SMALL_STATE(40)] = 1321,
  [SMALL_STATE(41)] = 1339,
  [SMALL_STATE(42)] = 1355,
  [SMALL_STATE(43)] = 1375,
  [SMALL_STATE(44)] = 1393,
  [SMALL_STATE(45)] = 1413,
  [SMALL_STATE(46)] = 1433,
  [SMALL_STATE(47)] = 1450,
  [SMALL_STATE(48)] = 1461,
  [SMALL_STATE(49)] = 1472,
  [SMALL_STATE(50)] = 1483,
  [SMALL_STATE(51)] = 1500,
  [SMALL_STATE(52)] = 1511,
  [SMALL_STATE(53)] = 1528,
  [SMALL_STATE(54)] = 1545,
  [SMALL_STATE(55)] = 1562,
  [SMALL_STATE(56)] = 1573,
  [SMALL_STATE(57)] = 1584,
  [SMALL_STATE(58)] = 1595,
  [SMALL_STATE(59)] = 1606,
  [SMALL_STATE(60)] = 1622,
  [SMALL_STATE(61)] = 1638,
  [SMALL_STATE(62)] = 1652,
  [SMALL_STATE(63)] = 1668,
  [SMALL_STATE(64)] = 1682,
  [SMALL_STATE(65)] = 1698,
  [SMALL_STATE(66)] = 1714,
  [SMALL_STATE(67)] = 1730,
  [SMALL_STATE(68)] = 1744,
  [SMALL_STATE(69)] = 1760,
  [SMALL_STATE(70)] = 1776,
  [SMALL_STATE(71)] = 1792,
  [SMALL_STATE(72)] = 1808,
  [SMALL_STATE(73)] = 1824,
  [SMALL_STATE(74)] = 1838,
  [SMALL_STATE(75)] = 1854,
  [SMALL_STATE(76)] = 1868,
  [SMALL_STATE(77)] = 1882,
  [SMALL_STATE(78)] = 1896,
  [SMALL_STATE(79)] = 1910,
  [SMALL_STATE(80)] = 1924,
  [SMALL_STATE(81)] = 1940,
  [SMALL_STATE(82)] = 1954,
  [SMALL_STATE(83)] = 1968,
  [SMALL_STATE(84)] = 1982,
  [SMALL_STATE(85)] = 1996,
  [SMALL_STATE(86)] = 2012,
  [SMALL_STATE(87)] = 2025,
  [SMALL_STATE(88)] = 2038,
  [SMALL_STATE(89)] = 2051,
  [SMALL_STATE(90)] = 2064,
  [SMALL_STATE(91)] = 2077,
  [SMALL_STATE(92)] = 2090,
  [SMALL_STATE(93)] = 2103,
  [SMALL_STATE(94)] = 2116,
  [SMALL_STATE(95)] = 2129,
  [SMALL_STATE(96)] = 2142,
  [SMALL_STATE(97)] = 2155,
  [SMALL_STATE(98)] = 2168,
  [SMALL_STATE(99)] = 2181,
  [SMALL_STATE(100)] = 2194,
  [SMALL_STATE(101)] = 2207,
  [SMALL_STATE(102)] = 2220,
  [SMALL_STATE(103)] = 2233,
  [SMALL_STATE(104)] = 2246,
  [SMALL_STATE(105)] = 2255,
  [SMALL_STATE(106)] = 2264,
  [SMALL_STATE(107)] = 2273,
  [SMALL_STATE(108)] = 2282,
  [SMALL_STATE(109)] = 2295,
  [SMALL_STATE(110)] = 2306,
  [SMALL_STATE(111)] = 2317,
  [SMALL_STATE(112)] = 2330,
  [SMALL_STATE(113)] = 2339,
  [SMALL_STATE(114)] = 2352,
  [SMALL_STATE(115)] = 2365,
  [SMALL_STATE(116)] = 2378,
  [SMALL_STATE(117)] = 2391,
  [SMALL_STATE(118)] = 2402,
  [SMALL_STATE(119)] = 2415,
  [SMALL_STATE(120)] = 2428,
  [SMALL_STATE(121)] = 2441,
  [SMALL_STATE(122)] = 2454,
  [SMALL_STATE(123)] = 2467,
  [SMALL_STATE(124)] = 2480,
  [SMALL_STATE(125)] = 2493,
  [SMALL_STATE(126)] = 2502,
  [SMALL_STATE(127)] = 2515,
  [SMALL_STATE(128)] = 2526,
  [SMALL_STATE(129)] = 2539,
  [SMALL_STATE(130)] = 2552,
  [SMALL_STATE(131)] = 2565,
  [SMALL_STATE(132)] = 2578,
  [SMALL_STATE(133)] = 2591,
  [SMALL_STATE(134)] = 2604,
  [SMALL_STATE(135)] = 2613,
  [SMALL_STATE(136)] = 2626,
  [SMALL_STATE(137)] = 2639,
  [SMALL_STATE(138)] = 2652,
  [SMALL_STATE(139)] = 2665,
  [SMALL_STATE(140)] = 2678,
  [SMALL_STATE(141)] = 2691,
  [SMALL_STATE(142)] = 2704,
  [SMALL_STATE(143)] = 2717,
  [SMALL_STATE(144)] = 2730,
  [SMALL_STATE(145)] = 2743,
  [SMALL_STATE(146)] = 2756,
  [SMALL_STATE(147)] = 2769,
  [SMALL_STATE(148)] = 2782,
  [SMALL_STATE(149)] = 2795,
  [SMALL_STATE(150)] = 2808,
  [SMALL_STATE(151)] = 2821,
  [SMALL_STATE(152)] = 2830,
  [SMALL_STATE(153)] = 2841,
  [SMALL_STATE(154)] = 2854,
  [SMALL_STATE(155)] = 2867,
  [SMALL_STATE(156)] = 2880,
  [SMALL_STATE(157)] = 2893,
  [SMALL_STATE(158)] = 2902,
  [SMALL_STATE(159)] = 2911,
  [SMALL_STATE(160)] = 2920,
  [SMALL_STATE(161)] = 2929,
  [SMALL_STATE(162)] = 2942,
  [SMALL_STATE(163)] = 2953,
  [SMALL_STATE(164)] = 2966,
  [SMALL_STATE(165)] = 2975,
  [SMALL_STATE(166)] = 2984,
  [SMALL_STATE(167)] = 2997,
  [SMALL_STATE(168)] = 3005,
  [SMALL_STATE(169)] = 3013,
  [SMALL_STATE(170)] = 3021,
  [SMALL_STATE(171)] = 3029,
  [SMALL_STATE(172)] = 3037,
  [SMALL_STATE(173)] = 3045,
  [SMALL_STATE(174)] = 3053,
  [SMALL_STATE(175)] = 3061,
  [SMALL_STATE(176)] = 3069,
  [SMALL_STATE(177)] = 3077,
  [SMALL_STATE(178)] = 3085,
  [SMALL_STATE(179)] = 3093,
  [SMALL_STATE(180)] = 3101,
  [SMALL_STATE(181)] = 3109,
  [SMALL_STATE(182)] = 3117,
  [SMALL_STATE(183)] = 3125,
  [SMALL_STATE(184)] = 3133,
  [SMALL_STATE(185)] = 3141,
  [SMALL_STATE(186)] = 3149,
  [SMALL_STATE(187)] = 3157,
  [SMALL_STATE(188)] = 3165,
  [SMALL_STATE(189)] = 3173,
  [SMALL_STATE(190)] = 3181,
  [SMALL_STATE(191)] = 3189,
  [SMALL_STATE(192)] = 3197,
  [SMALL_STATE(193)] = 3205,
  [SMALL_STATE(194)] = 3213,
  [SMALL_STATE(195)] = 3221,
  [SMALL_STATE(196)] = 3229,
  [SMALL_STATE(197)] = 3237,
  [SMALL_STATE(198)] = 3245,
  [SMALL_STATE(199)] = 3253,
  [SMALL_STATE(200)] = 3261,
  [SMALL_STATE(201)] = 3269,
  [SMALL_STATE(202)] = 3277,
  [SMALL_STATE(203)] = 3285,
  [SMALL_STATE(204)] = 3293,
  [SMALL_STATE(205)] = 3301,
  [SMALL_STATE(206)] = 3309,
  [SMALL_STATE(207)] = 3317,
  [SMALL_STATE(208)] = 3325,
  [SMALL_STATE(209)] = 3333,
  [SMALL_STATE(210)] = 3341,
  [SMALL_STATE(211)] = 3349,
  [SMALL_STATE(212)] = 3357,
  [SMALL_STATE(213)] = 3365,
  [SMALL_STATE(214)] = 3373,
  [SMALL_STATE(215)] = 3381,
  [SMALL_STATE(216)] = 3389,
  [SMALL_STATE(217)] = 3397,
  [SMALL_STATE(218)] = 3405,
  [SMALL_STATE(219)] = 3413,
  [SMALL_STATE(220)] = 3421,
  [SMALL_STATE(221)] = 3429,
  [SMALL_STATE(222)] = 3437,
  [SMALL_STATE(223)] = 3445,
  [SMALL_STATE(224)] = 3453,
  [SMALL_STATE(225)] = 3461,
  [SMALL_STATE(226)] = 3469,
  [SMALL_STATE(227)] = 3477,
  [SMALL_STATE(228)] = 3485,
  [SMALL_STATE(229)] = 3493,
  [SMALL_STATE(230)] = 3503,
  [SMALL_STATE(231)] = 3511,
  [SMALL_STATE(232)] = 3519,
  [SMALL_STATE(233)] = 3527,
  [SMALL_STATE(234)] = 3535,
  [SMALL_STATE(235)] = 3545,
  [SMALL_STATE(236)] = 3553,
  [SMALL_STATE(237)] = 3561,
  [SMALL_STATE(238)] = 3569,
  [SMALL_STATE(239)] = 3577,
  [SMALL_STATE(240)] = 3585,
  [SMALL_STATE(241)] = 3593,
  [SMALL_STATE(242)] = 3601,
  [SMALL_STATE(243)] = 3609,
  [SMALL_STATE(244)] = 3617,
  [SMALL_STATE(245)] = 3625,
  [SMALL_STATE(246)] = 3633,
  [SMALL_STATE(247)] = 3641,
  [SMALL_STATE(248)] = 3649,
  [SMALL_STATE(249)] = 3657,
  [SMALL_STATE(250)] = 3665,
  [SMALL_STATE(251)] = 3673,
  [SMALL_STATE(252)] = 3683,
  [SMALL_STATE(253)] = 3691,
  [SMALL_STATE(254)] = 3699,
  [SMALL_STATE(255)] = 3707,
  [SMALL_STATE(256)] = 3714,
  [SMALL_STATE(257)] = 3721,
  [SMALL_STATE(258)] = 3728,
  [SMALL_STATE(259)] = 3735,
  [SMALL_STATE(260)] = 3742,
  [SMALL_STATE(261)] = 3749,
  [SMALL_STATE(262)] = 3756,
  [SMALL_STATE(263)] = 3763,
  [SMALL_STATE(264)] = 3770,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 4),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 4), SHIFT_REPEAT(78),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 4), SHIFT_REPEAT(77),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 4, .production_id = 11),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name_declaration, 1, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 3, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2), SHIFT_REPEAT(260),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(72),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(72),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(7),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(46),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4), SHIFT_REPEAT(262),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_type, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_type, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 8),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2), SHIFT_REPEAT(234),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_declaration, 1, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(63),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2), SHIFT_REPEAT(136),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 4), SHIFT_REPEAT(127),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 4),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(61),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 15),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 14),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 10),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 8),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 12),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 13),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 9),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exported_symbol, 2, .production_id = 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [505] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nim_external_scanner_create(void);
void tree_sitter_nim_external_scanner_destroy(void *);
bool tree_sitter_nim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nim_external_scanner_serialize(void *, char *);
void tree_sitter_nim_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nim(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nim_external_scanner_create,
      tree_sitter_nim_external_scanner_destroy,
      tree_sitter_nim_external_scanner_scan,
      tree_sitter_nim_external_scanner_serialize,
      tree_sitter_nim_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
